package ;

import flixel.FlxG;
import flixel.FlxState;
import game.GameState;

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

		#if flash
		Inputs.setPlatform("windows");
		#end

		FlxG.gamepads.globalDeadZone = .8;

		Reg.currentLevel = 1;
		FlxG.switchState(new GameState());
	}
}