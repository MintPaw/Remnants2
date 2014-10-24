package ;

import flixel.FlxG;
import flixel.FlxState;
import game.GameState;
import mintDungeon.DungeonGenerator;

class MainState extends FlxState
{

	public function new()
	{
		super();
	}

	override public function create():Void
	{
		FlxG.cameras.bgColor = 0xFFFFFFFF;
		FlxG.sound.soundTrayEnabled = false;
		DungeonGenerator.init(Std.int(Math.random() * 10000));

		FlxG.switchState(new GameState());
	}
}