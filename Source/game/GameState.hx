package game;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxPoint;
import mintDungeon.DungeonGenerator;
import openfl.geom.Point;

class GameState extends flixel.FlxState
{
	public var dungeon:DungeonGenerator;
	public var cameraMode:String = "none";

	private var _console:Console;
	private var _players:FlxTypedGroup<Player>;

	private var _cameraPoint:FlxPoint;

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
		_players = new FlxTypedGroup<Player>();
		Inputs.players = _players;
		
		dungeon = new DungeonGenerator();

		_cameraPoint = new FlxPoint();
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

	private function createPlayer(model:Int):Void
	{
		var p:Player = new Player(model);
		p.x = dungeon.spawnPoint.x * Reg.TILE_SIZE;
		p.y = dungeon.spawnPoint.y * Reg.TILE_SIZE;
		add(p);

		_players.add(p);
	}

	override public function update():Void
	{
		Inputs.update();
		updateCenterPoint();

		super.update();
	}

	private function updateCenterPoint():Void
	{
		var points:Array<Point> = [];

		if (cameraMode == "c")
		{
			for (i in _players) points.push(new Point(i.x, i.y));

			var centroid:Point = Reg.centroid(points);

			_cameraPoint.x = centroid.x;
			_cameraPoint.y = centroid.y;
		} else if (cameraMode.charAt(0) == "p") {
			_cameraPoint = _players.members[Std.parseInt(cameraMode.charAt(1))].getMidpoint();
		}

		FlxG.camera.focusOn(_cameraPoint);
	}
}