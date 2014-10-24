package ;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.group.FlxGroup.FlxTypedGroup;
import game.Player;

class Inputs
{
	public static var players:FlxTypedGroup<Player>;
	public static var binds:Map<Int, String> = new Map<Int, String>();

	public static var actions:Array<String> = 
	[
	"moveLeft0", 
	"moveRight0", 
	"moveUp0", 
	"moveDown0"
	];

	public function new()
	{

	}

	public static function makeBind(key:Int, action:String):Void
	{
		binds.set(key, action);
	}

	public static function update():Void
	{
		for (i in FlxG.keys.getIsDown())
		{
			if (binds.get(i.ID) != null && binds.get(i.ID).indexOf("moveLeft") != -1)
			{
				var p:Int = Std.parseInt(binds.get(i.ID).charAt(binds.get(i.ID).length - 1));
				if (players.members[p] != null) players.members[p].move(FlxObject.LEFT);
			}
		}
	}
}