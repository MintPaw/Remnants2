package game;

import flixel.FlxSprite;

class Key extends FlxSprite
{

	public function new(xpos:Float, ypos:Float)
	{
		super();

		x = xpos;
		y = ypos;

		makeGraphic(Std.int(Reg.TILE_SIZE / 4), Std.int(Reg.TILE_SIZE / 4), 0xFF55FF55);
	}
}