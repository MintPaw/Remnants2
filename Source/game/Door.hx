package game;

import flixel.FlxSprite;

class Door extends FlxSprite
{

	public function new(xpos:Float, ypos:Float)
	{
		super();

		x = xpos;
		y = ypos;

		makeGraphic(Reg.TILE_SIZE,Reg.TILE_SIZE, 0xFF440000);
	}
}