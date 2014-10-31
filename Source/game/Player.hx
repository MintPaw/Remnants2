package game;

import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.group.FlxSpriteGroup;

class Player extends FlxSpriteGroup
{
	private var _graphic:FlxSprite;

	private var _left:Bool = false;
	private var _right:Bool = false;
	private var _up:Bool = false;
	private var _down:Bool = false;

	public function new(model:Int)
	{
		super();

		_graphic = new FlxSprite();
		_graphic.makeGraphic(10, 10, model == 0 ? 0xFFFF0000 : 0xFF00FF00);
		add(_graphic);

		maxVelocity.x = 100;
		maxVelocity.y = 100;
		drag.x = maxVelocity.x * 4;
		drag.y = maxVelocity.y * 4;
	}

	public function move(dir:UInt):Void
	{
		if (dir == FlxObject.LEFT) _left = true;
		if (dir == FlxObject.RIGHT) _right = true;
		if (dir == FlxObject.UP) _up = true;
		if (dir == FlxObject.DOWN) _down = true;
	}

	override public function update():Void
	{
		acceleration.set();

		if (_left) acceleration.x = -maxVelocity.x * 4;
		if (_right) acceleration.x = maxVelocity.x * 4;
		if (_up) acceleration.y = -maxVelocity.x * 4;
		if (_down) acceleration.y = maxVelocity.x * 4;

		_left = _right = _up = _down = false;
		super.update();
	}
}