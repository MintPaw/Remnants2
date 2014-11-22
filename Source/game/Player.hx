package game;

import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.group.FlxSpriteGroup;

class Player extends FlxSprite
{
	public static var spells:Array<Spell> = 
	[
		{ name: "Explosion", cost: 10, castTime: 1 },
		{ name: "Chain", cost: 20, castTime: .1 },
		{ name: "Bomb", cost: 10, castTime: .1 },
		{ name: "Stun", cost: 20, castTime: 1 },
		{ name: "Heal", cost: 30, castTime: 3 }
	];

	public var currentSpells:Array<Spell> = [];
	public var keys:Array<Int> = [];

	private var _left:Bool = false;
	private var _right:Bool = false;
	private var _up:Bool = false;
	private var _down:Bool = false;
	private var _casting:Int = -1;
	private var _castTime:Float = 0;

	public var mana:Float = 100;

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
		if (_castTime > 0)
		{
			_castTime -= elapsed;
			cleanUp();
			return;
		}

		super.update(elapsed);

		updateMovement();
		updateAimer();

		cleanUp();
	}

	private function updateMovement():Void
	{
		acceleration.set();

		if (_left) acceleration.x = -maxVelocity.x * 8;
		if (_right) acceleration.x = maxVelocity.x * 8;
		if (_up) acceleration.y = -maxVelocity.x * 8;
		if (_down) acceleration.y = maxVelocity.x * 8;
	}

	private function updateAimer():Void
	{
		aimer.x = x + width / 2 - aimer.width / 2;
		aimer.y = y + height / 2 - aimer.height / 2;

		if (_left) aimer.x = x - width / 2;
		if (_right) aimer.x = x + width + aimer.width * 2;
		if (_up) aimer.y = y - height / 2;
		if (_down) aimer.y = y + height + aimer.height * 2;

		aimer.visible = _left || _right || _up || _down;
	}

	private function cleanUp():Void
	{
		_left = _right = _up = _down = false;
	}

	public function takeDamage(n:Float):Void
	{
		health -= n;
	}

	public function castSpell(number:Int):Void
	{
		if (number > currentSpells.length - 1) return;

		var s:Spell = currentSpells[number];

		if (s.cost > mana || _castTime > 0) return;

		mana -= s.cost;
		_castTime = s.castTime;
	}

	public function giveSpell(name:String):Void
	{
		if (currentSpells.length == 4) currentSpells.splice(3, 1);
		for (i in spells) if (i.name == name) currentSpells.push(i);
	}
}

typedef Spell =
{
	public var name:String;
	public var cost:Float;
	public var castTime:Float;
}