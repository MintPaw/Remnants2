package game;

import flixel.FlxSprite;

class Door extends FlxSprite
{
	public var colour:Int;

	public function new(xpos:Float, ypos:Float)
	{
		super();

		x = xpos;
		y = ypos;

		immovable = true;

		makeGraphic(Reg.TILE_SIZE,Reg.TILE_SIZE, 0xFF440000);
	}
}