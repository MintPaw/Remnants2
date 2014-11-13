package game;

import flixel.FlxSprite;

class Key extends FlxSprite
{
	public var colour:Int;

	public function new(xpos:Float, ypos:Float)
	{
		super();

		x = xpos;
		y = ypos;

		immovable = true;

		makeGraphic(Std.int(Reg.TILE_SIZE / 4), Std.int(Reg.TILE_SIZE / 4), 0xFF55FF55);
	}
}