package game;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.group.FlxGroup.FlxTypedGroup;
import mintDungeon.DungeonGenerator;

class GameState extends flixel.FlxState
{
	public var dungeon:DungeonGenerator;
	public var cameraMode:String = "none";

	private var _console:Console;
	private var _players:FlxTypedGroup<Player>;

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

	private function setCamera(mode:String):Void
	{
		if (mode.charAt(0) == "p")
		{
			FlxG.camera.follow(_players.members[Std.parseInt(mode.charAt(1))]);
		} else {
			_console.echo("Bad camera mode");
			return;
		}

		cameraMode = mode;
	}

	override public function update():Void
	{
		Inputs.update();

		super.update();
	}
}