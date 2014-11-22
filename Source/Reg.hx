package ;

import flixel.math.FlxPoint;

class Reg
{
	public static var currentLevel:Int;

	public static var TILE_SIZE:Int = 40;

	public function new()
	{

	}

	public static function centroid(points:Array<FlxPoint>):FlxPoint
	{
		var center:FlxPoint = new FlxPoint();
	    for (i in 0...points.length)
	    {
	    	center.x += points[i].x;
	    	center.y += points[i].y;
	    }

	    center.x /= points.length;
	    center.y /= points.length;

	    return center;
	}
}