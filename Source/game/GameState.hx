package game;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxPoint;
import mintDungeon.DungeonGenerator;

class GameState extends flixel.FlxState
{
	public var dungeon:DungeonGenerator;
	public var cameraMode:String = "none";

	private var _console:Console;
	private var _playerGroup:FlxTypedGroup<Player>;

	public function new()
	{
		super();
	}

	override public function create():Void
	{
		super.create();

		setup();
	}

	private function setup():Void
	{
		setupVars();
		setupConsole();
	}

	private function setupVars():Void
	{
		_playerGroup = new FlxTypedGroup<Player>();
		Inputs.players = _playerGroup;
		
		dungeon = new DungeonGenerator();
	}

	private function setupConsole():Void
	{
		_console = new Console();
		_console.passInReference("G", this);
		add(_console);

		_console.exec("autoexecgame");
	}

	private function generateMap(mapWidth:Float, mapHeight:Float):Void
	{
		dungeon.generate(mapWidth, mapHeight, Reg.TILE_SIZE, Reg.TILE_SIZE, "assets/img/tileset.png");
		dungeon.map.setTileProperties(1, FlxObject.NONE);
		add(dungeon.map);
	}

	private function createPlayer(model:Int, xpos:Float = -1, ypos:Float = -1):Void
	{
		var p:Player = new Player(model);
		p.x = xpos == -1 ? dungeon.spawnPoint.x * Reg.TILE_SIZE : xpos;
		p.y = ypos == -1 ? dungeon.spawnPoint.y * Reg.TILE_SIZE : ypos;
		add(p);

		_playerGroup.add(p);
	}

	override public function update(elapsed:Float):Void
	{
		Inputs.update();
		updateCenterPoint();
		updateCollisions();

		super.update(elapsed);
	}

	private function updateCenterPoint():Void
	{
		var points:Array<FlxPoint> = [];

		var cameraPoint:FlxPoint = new FlxPoint(FlxG.camera.x, FlxG.camera.y);

		if (cameraMode == "c")
		{
			for (i in _playerGroup) points.push(new FlxPoint(i.x, i.y));

			var centroid:FlxPoint = Reg.centroid(points);

			cameraPoint.x = centroid.x;
			cameraPoint.y = centroid.y;
		} else if (cameraMode.charAt(0) == "p") {
			cameraPoint = _playerGroup.members[Std.parseInt(cameraMode.charAt(1))].getMidpoint();
		}

		FlxG.camera.focusOn(cameraPoint);
	}

	private function updateCollisions():Void
	{
		FlxG.collide(dungeon.map, _playerGroup);
	}
}