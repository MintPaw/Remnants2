package ;


import flixel.FlxGame;
import motion.Actuate;
import openfl.display.Sprite;
import openfl.display.StageDisplayState;
import openfl.display.StageQuality;
import openfl.events.KeyboardEvent;
import openfl.events.UncaughtErrorEvent;
import openfl.ui.Keyboard;


class Main extends Sprite
{
	
	public function new()
	{
		super();

		var flixel:FlxGame = new FlxGame(1920, 1080, MainState, 1, 60, 60, true, false);
		addChild(flixel);
	}
}