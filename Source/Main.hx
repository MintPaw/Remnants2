package ;


import flixel.FlxGame;
import openfl.display.Sprite;
import openfl.display.StageQuality;
import openfl.events.UncaughtErrorEvent;


class Main extends Sprite
{
	
	public function new()
	{
		super();

		var flixel:FlxGame = new FlxGame(640, 360, MainState, 1, 60, 60, true, false);
		addChild(flixel);
	}
}