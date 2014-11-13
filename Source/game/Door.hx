package game;

import flixel.FlxSprite;
import flixel.util.FlxColor;

class Door extends FlxSprite
{
	public var colour:Int;

	public function new(xpos:Float, ypos:Float, colour:Int)
	{
		super();
		
		this.colour = colour;

		x = xpos;
		y = ypos;

		immovable = true;

		makeGraphic(Reg.TILE_SIZE,Reg.TILE_SIZE, 0xFFFFFFFF);

		color = FlxColor.fromInt(colour);
		color.alpha = 1;
	}
}