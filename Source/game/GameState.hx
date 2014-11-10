package game;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxPoint;
import flixel.tile.FlxTilemap;
import mintDungeon.Generator;
import openfl.Assets;

class GameState extends flixel.FlxState
{
	public var generator:Generator;
	public var cameraMode:String = "none";

	private var _console:Console;
	private var _map:FlxTilemap;
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
		_console.exec("autoexecgame");
	}

	private function setupVars():Void
	{
		_playerGroup = new FlxTypedGroup<Player>();
		Inputs.players = _playerGroup;
		
		generator = new Generator(0);
	}

	private function setupConsole():Void
	{
		_console = new Console();
		_console.passInReference("G", this);
		add(_console);
	}

	private function generateMap():Void
	{
		generator.generate();
		_map = new FlxTilemap();
		_map.loadMapFromCSV(generator.getMapAsCSV(), "assets/img/tileset.png", Reg.TILE_SIZE, Reg.TILE_SIZE);

		_map.setTileProperties(1, FlxObject.NONE);
		add(_map);

		FlxG.worldBounds.set(0, 0, _map.width, _map.height);
		FlxG.camera.setScrollBoundsRect(0, 0, _map.width, _map.height);
	}

	private function createPlayer(model:Int, xpos:Float = -1, ypos:Float = -1):Void
	{
		var p:Player = new Player(model);
		p.x = xpos == -1 ? generator.spawnPoint.x * Reg.TILE_SIZE : xpos;
		p.y = ypos == -1 ? generator.spawnPoint.y * Reg.TILE_SIZE : ypos;
		add(p);

		_playerGroup.add(p);
	}

	override public function update(elapsed:Float):Void
	{
		Inputs.update();
		updateCamera();

		super.update(elapsed);
		
		updateCollisions();
	}

	private function updateCamera():Void
	{
		var points:Array<FlxPoint> = [];
		var cameraPoint:FlxPoint = new FlxPoint(FlxG.camera.x, FlxG.camera.y);

		if (cameraMode == "c")
		{
			for (i in _playerGroup) points.push(i.getMidpoint());
			cameraPoint = Reg.centroid(points);
		} else if (cameraMode.charAt(0) == "p") {
			cameraPoint = _playerGroup.members[Std.parseInt(cameraMode.charAt(1))].getMidpoint();
		}

		FlxG.camera.focusOn(cameraPoint);
	}

	private function updateCollisions():Void
	{
		FlxG.collide(_map, _playerGroup);
	}
}