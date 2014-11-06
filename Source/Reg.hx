package ;

import openfl.geom.Point;

class Reg
{
	public static var TILE_SIZE:Int = 40;

	public function new()
	{

	}

	public static function centroid(points:Array<Point>):Point
	{
		var center:Point = new Point();
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