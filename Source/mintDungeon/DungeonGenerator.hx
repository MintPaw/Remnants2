package mintDungeon;
import flash.display.BitmapData;
import flixel.FlxObject;
import flixel.math.FlxPoint;
import flixel.math.FlxRandom;
import flixel.tile.FlxTilemap;
import openfl.geom.Point;

/**
 * ...
 * @author MintPaw
 */
class DungeonGenerator
{
	public static var EMPTY:Int = 0;
	public static var GROUND:Int = 1;
	public static var WALL:Int = 2;
	public static var DEBUG:Int = 3;

	public static var rng:FlxRandom;
	
	public var map:FlxTilemap;
	public var rooms:Array<Room> = [];
	public var halls:Array<Hall> = [];
	public var enemies:Array<Enemy> = [];
	public var chests:Array<Enemy> = [];
	public var edges:Array<FlxPoint> = [];
	
	public var possibleDoors:Array<Array<FlxPoint>> = [];
	
	public var tileWidth:Float;
	public var tileHeight:Float;
	public var minHallwaySize:Int = 3;
	public var maxHallwaySize:Int = 5;
	public var minRoomSize:Int = 5;
	public var maxRoomSize:Int = 10;
	public var minRooms:Int = 5;
	public var maxRooms:Int = 10;
	public var minHallThickness:Int = 1;
	public var maxHallThickness:Int = 1;
	public var enemyRoomRate:Int = 50;
	public var enemyDensity:Int = 100;
	public var miniBossRoomRate:Int = 5;
	public var chestRoomRate:Int = 20;
	
	public var spawnPoint:FlxPoint;
	
	public function new() 
	{
		
	}

	public static function init(seed:Int):Void
	{
		rng = new FlxRandom(seed);
	}
	
	public function generate(width:Float, height:Float, tileWidth:Int, tileHeight:Int, tileAsset:Dynamic):Void
	{
		this.tileWidth = tileWidth;
		this.tileHeight = tileHeight;
		
		var s:String = "";
		for (i in 0...Math.floor(height / tileHeight))
		{
			for (j in 0...Math.floor(width / tileWidth))
			{
				s += Std.string(WALL);
				if (j < Math.floor(width / tileWidth) - 1) s += ",";
			}
			s += "\n";
		}
		
		map = new FlxTilemap();
		map.loadMap(s, tileAsset, tileWidth, tileHeight);
		
		var room:Room = getSquareRoom(Math.round(map.widthInTiles / 2), Math.round(map.heightInTiles / 2), rng.int(minRoomSize, maxRoomSize), rng.int(minRoomSize, maxRoomSize));
		drawItem(room, GROUND);
		
		for (i in 0...rng.int(minRooms, maxRooms)) addRoom();
		addEnemies();
		addMinibosses();
		addChests();
		addKeysAndDoors();
		getEdges();
	}
	
	private function addRoom():Void
	{
		var hall:Hall;
		var room:Room;
		
		while (true)
		{
			hall = getHall(rng.int(minHallwaySize, maxHallwaySize));
			room = getSquareRoom(Math.round(hall.lastPoint().x), Math.round(hall.lastPoint().y), rng.int(minRoomSize, maxRoomSize), rng.int(minRoomSize, maxRoomSize), hall);
			
			if (scanTiles(room.outline)) break;
		}
		
		drawItem(hall, GROUND);
		drawItem(room, GROUND);
		
		if (rooms.length == 0)
		{
			spawnPoint = new FlxPoint(room.tiles[Math.round(room.tiles.length / 2)].x, room.tiles[Math.round(room.tiles.length / 2)].y);
			room.safe = true;
		}
		
		rooms.push(room);
		halls.push(hall);
	}
	
	private function getHall(length:Int):Hall
	{
		var hall:Hall;
		var toScan:Array<FlxPoint>;
		
		while (true)
		{
			hall = new Hall();
			hall.thickness = rng.int(minHallThickness, maxHallThickness);
			toScan = [];
			
			var hallStart:FlxPoint = findRandomWall();
			hall.tiles.push(hallStart);

			hall.direction = rng.getObject([FlxObject.LEFT, FlxObject.RIGHT, FlxObject.UP, FlxObject.DOWN]);
			
			for (i in 0...length - 1)
			{
				if (hall.direction == FlxObject.LEFT) hall.tiles.push(hall.lastPoint().copyTo().add(-1, 0));
				if (hall.direction == FlxObject.RIGHT) hall.tiles.push(hall.lastPoint().copyTo().add(1, 0));
				if (hall.direction == FlxObject.UP) hall.tiles.push(hall.lastPoint().copyTo().add(0, -1));
				if (hall.direction == FlxObject.DOWN) hall.tiles.push(hall.lastPoint().copyTo().add(0, 1));
			}
			
			var hallThickness:Array<FlxPoint> = [];
			
			hall.wouldBeDoor.push(hall.tiles[hall.tiles.length - 1]);
			
			for (i in 0...hall.tiles.length)
			{
				var addToThickness:Array<FlxPoint> = [];
				if (hall.direction == FlxObject.LEFT || hall.direction == FlxObject.RIGHT)
				{
					if (hall.thickness >= 2) addToThickness.push(hall.tiles[i].copyTo().add(0, -1));
					if (hall.thickness >= 3) addToThickness.push(hall.tiles[i].copyTo().add(0, -2));
				}
				if (hall.direction == FlxObject.UP || hall.direction == FlxObject.DOWN)
				{
					if (hall.thickness >= 2) addToThickness.push(hall.tiles[i].copyTo().add(-1, 0));
					if (hall.thickness >= 3) addToThickness.push(hall.tiles[i].copyTo().add(-2, 0));
				}
				
				for (j in 0...addToThickness.length)
				{
					hallThickness.push(addToThickness[j]);
					if (i == hall.tiles.length - 1)
					{
						hall.wouldBeDoor.push(addToThickness[j]);
					}
				}
			}
			
			for (i in 0...hallThickness.length) hall.tiles.push(hallThickness[i]);
			
			for (i in 0...hall.tiles.length)
			{
				toScan.push(hall.tiles[i].copyTo());
				if (hall.direction == FlxObject.LEFT || hall.direction == FlxObject.RIGHT)
				{
					toScan.push(hall.tiles[i].copyTo().add(0, -1));
					toScan.push(hall.tiles[i].copyTo().add(0, 1));
				}
				if (hall.direction == FlxObject.UP || hall.direction == FlxObject.DOWN)
				{
					toScan.push(hall.tiles[i].copyTo().add(-1, 0));
					toScan.push(hall.tiles[i].copyTo().add(1, 0));
				}
			}
			
			if (scanTiles(toScan)) break;
		}
		
		return hall;
	}
	
	private function getSquareRoom(xpos:Int, ypos:Int, width:Int, height:Int, hall:Hall = null):Room
	{
		var room:Room = new Room();
		
		if (width % 2 == 0) width++;
		if (height % 2 == 0) height++;
		
		if (hall != null)
		{
			if (hall.direction == FlxObject.LEFT) xpos -= Math.round(width / 2);
			if (hall.direction == FlxObject.RIGHT) xpos += Math.round(width / 2);
			if (hall.direction == FlxObject.UP) ypos -= Math.round(height / 2);
			if (hall.direction == FlxObject.DOWN) ypos += Math.round(height / 2);
			
			if (hall.direction == FlxObject.LEFT || hall.direction == FlxObject.RIGHT) ypos += rng.int( -Math.round(height / 2 - hall.thickness), Math.round(height / 2 - hall.thickness));
			if (hall.direction == FlxObject.UP || hall.direction == FlxObject.DOWN) xpos += rng.int( -Math.round(width / 2 - hall.thickness), Math.round(width / 2 - hall.thickness));
		}
		
		var topLeft:FlxPoint = new FlxPoint(xpos - width / 2, ypos - height / 2);
		var bottomRight:FlxPoint = new FlxPoint(xpos + width / 2, ypos + height / 2);
		
		for (i in Math.round(topLeft.y)...Math.round(bottomRight.y))
		{
			for (j in Math.round(topLeft.x)...Math.round(bottomRight.x))
			{
				room.tiles.push(new FlxPoint(j, i));
			}
		}
		
		for (i in Math.round(topLeft.y) - 1...Math.round(bottomRight.y) + 1)
		{
			for (j in Math.round(topLeft.x) - 1...Math.round(bottomRight.x) + 1)
			{
				room.outline.push(new FlxPoint(j, i));
			}
		}
		
		return room;
	}
	
	private function findRandomWall():FlxPoint
	{
		while (true)
		{
			var j:Int = rng.int(1, Math.round(map.widthInTiles - 1));
			var i:Int = rng.int(1, Math.round(map.heightInTiles - 1));
			if (map.getTile(j, i) != GROUND && (map.getTile(j + 1, i) == GROUND || map.getTile(j - 1, i) == GROUND || map.getTile(j, i + 1) == GROUND || map.getTile(j, i - 1) == GROUND)) return new FlxPoint(j, i);
		}
	}
	
	private function scanTiles(tiles:Array<FlxPoint>):Bool
	{
		for (i in 0...tiles.length)
		{
			if (map.getTile(Math.round(tiles[i].x), Math.round(tiles[i].y)) == GROUND) return false;
			if (tiles[i].x <= 0 || tiles[i].x >= map.widthInTiles) return false;
			if (tiles[i].y <= 0 || tiles[i].y >= map.heightInTiles) return false;
		}
		
		return true;
	}
	
	private function drawItem(it:Item, tile:Int):Void
	{
		for (i in 0...it.tiles.length)
		{
			map.setTile(Math.round(it.tiles[i].x), Math.round(it.tiles[i].y), tile);
		}
		
		if (Std.is(it, Hall))
		{
			var hall:Hall = cast(it, Hall);
			possibleDoors.push(hall.wouldBeDoor);
		}
	}
	
	private function roomContainsTile(x:Int, y:Int, room:Room):Bool
	{
		for (i in 0...room.tiles.length)
		{
			if (room.tiles[i].x == x && room.tiles[i].y == y) return true;
		}
		
		return false;
	}
	
	private function isFreeTile(x:Int, y:Int):Bool
	{
		for (i in 0...enemies.length) if (enemies[i].x == x && enemies[i].y == y) return false;
		for (i in 0...chests.length) if (chests[i].x == x && chests[i].y == y) return false;
		if (map.getTile(x, y) != GROUND) return false;
		
		return true;
	}
	
	private function addEnemies():Void
	{
		var roomsWithEnemies:Array<Room> = [];
		
		while (roomsWithEnemies.length < Math.ceil(rooms.length * (enemyRoomRate / 100)))
		{
			var roomInQuestion:Room = rng.getObject(rooms);
			if (roomsWithEnemies.indexOf(roomInQuestion) == -1 && !roomInQuestion.safe) roomsWithEnemies.push(roomInQuestion);
		}
		
		for (i in 0...roomsWithEnemies.length)
		{
			var enemiesInRoom:Int = Math.ceil((roomsWithEnemies[i].tiles.length / 20) * (enemyDensity / 100));
			for (j in 0...enemiesInRoom)
			{
				var tile:FlxPoint = rng.getObject(roomsWithEnemies[i].tiles).copyTo();
				if (!isFreeTile(Math.round(tile.x), Math.round(tile.y))) continue;
				enemies.push( { x: tile.x, y: tile.y, level: rng.int(1, 3) } );
				roomsWithEnemies[i].enemies.push(enemies[enemies.length - 1]);
			}
		}
	}
	
	private function addMinibosses():Void
	{
		var roomsWithMiniboss:Array<Room> = [];
		
		while (roomsWithMiniboss.length < Math.ceil(rooms.length * (miniBossRoomRate / 100)))
		{
			var roomInQuestion:Room = rng.getObject(rooms);
			if (roomsWithMiniboss.indexOf(roomInQuestion) == -1 && roomInQuestion.enemies.length == 0 && !roomInQuestion.safe) roomsWithMiniboss.push(roomInQuestion);
		}
		
		for (i in 0...roomsWithMiniboss.length)
		{
			var tile:FlxPoint = roomsWithMiniboss[i].tiles[Math.round(roomsWithMiniboss[i].tiles.length / 2)].copyTo();
			if (!isFreeTile(Math.round(tile.x), Math.round(tile.y))) continue;
			enemies.push( { x: tile.x, y: tile.y, level: 4 } );
			roomsWithMiniboss[i].enemies.push(enemies[enemies.length - 1]);
		}
	}
	
	private function addChests():Void
	{
		var roomsWithChest:Array<Room> = [];
		
		while (roomsWithChest.length < Math.ceil(rooms.length * (chestRoomRate / 100)))
		{
			var roomInQuestion:Room = rng.getObject(rooms);
			if (roomsWithChest.indexOf(roomInQuestion) == -1 && !roomInQuestion.hasMiniBoss()) roomsWithChest.push(roomInQuestion);
		}
		
		for (i in 0...roomsWithChest.length)
		{
			var tile:FlxPoint = new FlxPoint();
			
			tile = roomsWithChest[i].tiles[Math.round(roomsWithChest[i].tiles.length / 2)];
			
			chests.push( { x: tile.x, y: tile.y, level: rng.getObject([1, 2, 3], [.3, .6, .1]) } );
		}
	}
	
	private function addKeysAndDoors():Void
	{
		for (i in 0...possibleDoors.length)
		{
			//for (j in 0...possibleDoors[i].length) map.setTile(Math.round(possibleDoors[i][j].x), Math.round(possibleDoors[i][j].y), DEBUG, true);
		}
	}
	
	private function getEdges():Void
	{
		for (i in 0...map.heightInTiles)
		{
			for (j in 0...map.widthInTiles)
			{
				if (map.getTile(j, i) != WALL) continue;
				
				var isEdge:Bool = false;
				
				var tilesToCheck:Array<FlxPoint> = 
				[
					new FlxPoint(j + 1, i), 
					new FlxPoint(j - 1, i), 
					new FlxPoint(j, i + 1), 
					new FlxPoint(j, i - 1), 
					new FlxPoint(j + 1, i + 1), 
					new FlxPoint(j - 1, i - 1), 
					new FlxPoint(j + 1, i - 1), 
					new FlxPoint(j - 1, i + 1)
				];
				
				for (i in 0...tilesToCheck.length) if (map.getTile(Math.round(tilesToCheck[i].x), Math.round(tilesToCheck[i].y)) == GROUND) isEdge = true;
				
				if (isEdge) edges.push(new FlxPoint(j, i));
			}
		}
	}
	
}

typedef Enemy =
{
	?x:Float,
	?y:Float,
	?level:Int
}

typedef Chest =
{
	?x:Float,
	?y:Float,
	?level:Int
}