package game;

import flixel.FlxBasic;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxPoint;
import flixel.tile.FlxTilemap;
import flixel.util.FlxColor;
import game.Door;
import game.Key;
import mintDungeon.Generator;
import openfl.Assets;

class GameState extends flixel.FlxState
{
	public var generator:Generator;
	public var cameraMode:String = "none";

	private var _console:Console;
	private var _map:FlxTilemap;

	private var _playerGroup:FlxTypedGroup<Player>;
	private var _doorGroup:FlxTypedGroup<game.Door>;
	private var _keyGroup:FlxTypedGroup<game.Key>;
	private var _exit:FlxSprite;

	private var _frameCount:Int = 0;
	private var _winning:Bool;

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
		_console.exec("defaultBinding");
		_console.exec("autoexecgame");

		FlxG.camera.fade(0xFF000000, 1, true, null, true);
	}

	private function setupVars():Void
	{
		_playerGroup = new FlxTypedGroup<Player>();
		_doorGroup = new FlxTypedGroup<game.Door>();
		_keyGroup = new FlxTypedGroup<game.Key>();
		Inputs.players = _playerGroup;
		_winning = false;
		
		generator = new Generator(0);
	}

	private function setupConsole():Void
	{
		_console = new Console();
		_console.passInReference("G", this);
		_console.passInReference("R", Reg);
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

		for (i in generator.doors)
		{
			var d:game.Door = new game.Door(i.x * Reg.TILE_SIZE, i.y * Reg.TILE_SIZE, i.colour);
			_doorGroup.add(d);
			add(d);
		}

		for (i in generator.keys)
		{
			var k:game.Key = new game.Key(i.x * Reg.TILE_SIZE, i.y * Reg.TILE_SIZE, i.colour);
			_keyGroup.add(k);
			add(k);
		}

		_exit = new FlxSprite();
		_exit.makeGraphic(10, 20, FlxColor.YELLOW);
		_exit.x = generator.exitPoint.x * Reg.TILE_SIZE - _exit.width / 2 + Reg.TILE_SIZE / 2;
		_exit.y = generator.exitPoint.y * Reg.TILE_SIZE - _exit.height / 2 + Reg.TILE_SIZE / 2;
		add(_exit);
	}

	private function createPlayer(model:Int, xpos:Float = -1, ypos:Float = -1):Void
	{
		var p:Player = new Player(model);
		p.x = xpos == -1 ? generator.spawnPoint.x * Reg.TILE_SIZE : xpos;
		p.y = ypos == -1 ? generator.spawnPoint.y * Reg.TILE_SIZE : ypos;
		add(p);
		add(p.aimer);

		_playerGroup.add(p);
	}

	override public function update(elapsed:Float):Void
	{
		_frameCount++;

		Inputs.update();
		updateCamera();
		updateExit();

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
		FlxG.overlap(_keyGroup, _playerGroup, keyVSPlayer);
		FlxG.collide(_doorGroup, _playerGroup, doorVSPlayer);
		FlxG.collide(_map, _playerGroup);
	}

	private function updateExit():Void
	{
		if (_frameCount % 60 != 0 || _winning) return;

		var _playersOn:Int = 0;
		var _playersAlive:Int = 0;

		for (i in _playerGroup) if (i.alive && !FlxG.overlap(i, _exit)) return;

		_winning = true;
		FlxG.camera.fade(0xFF000000, 2, false, nextLevel);
	}

	private function nextLevel():Void
	{
		Reg.currentLevel++;
		FlxG.resetState();
	}

	private function keyVSPlayer(b1:FlxBasic, b2:FlxBasic):Void
	{
		var k:game.Key = cast(b1, game.Key);
		var p:Player = cast(b2, Player);
		p.keys.push(k.colour);
		k.kill();
	}

	private function doorVSPlayer(b1:FlxBasic, b2:FlxBasic):Void
	{
		var d:game.Door = cast(b1, game.Door);
		var p:Player = cast(b2, Player);
		
		for (i in p.keys)
		{
			if (i == d.colour)
			{
				d.kill();
				p.keys.splice(p.keys.indexOf(i), 1);
				return;
			}
		}
	}
}