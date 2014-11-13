package game;

import flixel.FlxSprite;
import flixel.util.FlxColor;

class Key extends FlxSprite
{
	public var colour:Int;

	public function new(xpos:Float, ypos:Float, colour:Int)
	{
		super();
		
		this.colour = colour;

		x = xpos;
		y = ypos;

		immovable = true;

		makeGraphic(Std.int(Reg.TILE_SIZE / 4), Std.int(Reg.TILE_SIZE / 4), 0xFFFFFFFF);

		color = FlxColor.fromInt(colour);
		color.alpha = 1;
	}
}