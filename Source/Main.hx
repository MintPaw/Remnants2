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

		stage.quality = StageQuality.LOW;

		var flixel:FlxGame = new FlxGame(1920, 1080, MainState, 1, 60, 60, true, false);
		addChild(flixel);
	}
}