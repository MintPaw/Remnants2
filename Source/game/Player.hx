package game;

import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.group.FlxSpriteGroup;

class Player extends FlxSpriteGroup
{
	private var _graphic:FlxSprite;

	public function new(model:Int)
	{
		super();

		_graphic = new FlxSprite();
		_graphic.makeGraphic(10, 10, 0xFFFF0000);
		add(_graphic);

		maxVelocity.set(-1000, 1000);
		drag.set(20, 20);
	}

	public function move(dir:UInt):Void
	{
		trace(dir);
		if (dir == FlxObject.LEFT) acceleration.x = -1000;
	}

	override public function update():Void
	{
		super.update();
	}
}