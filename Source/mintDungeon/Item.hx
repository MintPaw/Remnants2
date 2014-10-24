package mintDungeon;
import flixel.math.FlxPoint;

/**
 * ...
 * @author MintPaw
 */
class Item
{
	public var tiles:Array<FlxPoint> = [];
	
	public function new() 
	{
		
	}
	
	public function lastPoint():FlxPoint
	{
		return tiles[tiles.length - 1];
	}
	
}