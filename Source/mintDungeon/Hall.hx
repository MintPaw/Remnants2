package mintDungeon;
import flixel.math.FlxPoint;

/**
 * ...
 * @author MintPaw
 */
class Hall extends Item
{
	public var direction:Int = -1;
	public var thickness:Int = 1;
	public var wouldBeDoor:Array<FlxPoint> = [];
	
	public function new() 
	{
		super();
	}
	
}