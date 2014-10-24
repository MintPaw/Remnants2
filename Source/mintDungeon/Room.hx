package mintDungeon;
import flixel.math.FlxPoint;
import mintDungeon.DungeonGenerator.Enemy;

/**
 * ...
 * @author MintPaw
 */
class Room extends Item
{
	public var outline:Array<FlxPoint> = [];
	public var enemies:Array<Enemy> = [];
	
	public var safe:Bool = false;
	
	public function new() 
	{
		super();
	}
	
	public function hasMiniBoss():Bool
	{
		if (enemies.length == 0) return false;
		return enemies[0].level == 4;
	}
	
}