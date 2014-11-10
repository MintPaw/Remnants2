package game;

import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.group.FlxSpriteGroup;

class Player extends FlxSprite
{
	private var _left:Bool = false;
	private var _right:Bool = false;
	private var _up:Bool = false;
	private var _down:Bool = false;

	public var aimer:FlxSprite;

	public function new(model:Int)
	{
		super();

		makeGraphic(10, 10, model == 0 ? 0xFFFF0000 : 0xFF00FF00);

		maxVelocity.x = 300;
		maxVelocity.y = 300;
		drag.x = 5000;
		drag.y = 5000;

		aimer = new FlxSprite();
		aimer.makeGraphic(2, 2, 0xFF999999);
	}

	public function move(dir:UInt):Void
	{
		if (dir == FlxObject.LEFT) _left = true;
		if (dir == FlxObject.RIGHT) _right = true;
		if (dir == FlxObject.UP) _up = true;
		if (dir == FlxObject.DOWN) _down = true;
	}

	override public function update(elapsed:Float):Void
	{
		acceleration.set();

		if (_left) acceleration.x = -maxVelocity.x * 8;
		if (_right) acceleration.x = maxVelocity.x * 8;
		if (_up) acceleration.y = -maxVelocity.x * 8;
		if (_down) acceleration.y = maxVelocity.x * 8;

		super.update(elapsed);

		aimer.x = x + width / 2 - aimer.width / 2;
		aimer.y = y + height / 2 - aimer.height / 2;

		if (_left) aimer.x = x - width / 2;
		if (_right) aimer.x = x + width + aimer.width;
		if (_up) aimer.y = y - height / 2;
		if (_down) aimer.y = y + height + aimer.height;

		aimer.visible = _left || _right || _up || _down;

		_left = _right = _up = _down = false;
	}
}