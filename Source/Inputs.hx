package ;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.input.gamepad.FlxGamepad;
import flixel.input.gamepad.XboxButtonID;
import game.Player;

class Inputs
{
	public static var players:FlxTypedGroup<Player>;
	public static var binds:Map<String, String> = new Map<String, String>();

	public static var LEFT_STICK:FlxGamepadAnalogStick;
	public static var RIGHT_STICK:FlxGamepadAnalogStick;
	public static var A:Int;
	public static var B:Int;
	public static var X:Int;
	public static var Y:Int;

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

	public static function setPlatform(platfrom:String):Void
	{
		if (platfrom == "windows")
		{
			LEFT_STICK = XboxButtonID.LEFT_ANALOG_STICK;
			RIGHT_STICK = XboxButtonID.RIGHT_ANALOG_STICK;
			A = XboxButtonID.A;
			B = XboxButtonID.B;
			X = XboxButtonID.X;
			Y = XboxButtonID.Y;
		}
	}

	public static function makeBind(key:String, action:String):Void
	{
		binds.set(key.toUpperCase(), action);
	}

	public static function update():Void
	{
		var commands:Array<String> = [];

		for (i in FlxG.keys.getIsDown()) commands.push(i.ID);

		for (i in 0...4)
		{
			if (FlxG.gamepads.getByID(i) != null && FlxG.gamepads.getByID(i).connected)
			{
				var pad:FlxGamepad = FlxG.gamepads.getByID(i);
				if (pad.getXAxis(LEFT_STICK) < 0) commands.push("pad"+i+"LSleft");
				if (pad.getXAxis(LEFT_STICK) > 0) commands.push("pad"+i+"LSright");
				if (pad.getYAxis(LEFT_STICK) < 0) commands.push("pad"+i+"LSup");
				if (pad.getYAxis(LEFT_STICK) > 0) commands.push("pad"+i+"LSdown");

				if (pad.getXAxis(RIGHT_STICK) < 0) commands.push("pad"+i+"RSleft");
				if (pad.getXAxis(RIGHT_STICK) > 0) commands.push("pad"+i+"RSright");
				if (pad.getYAxis(RIGHT_STICK) < 0) commands.push("pad"+i+"RSup");
				if (pad.getYAxis(RIGHT_STICK) > 0) commands.push("pad"+i+"RSdown");

				if (pad.justReleased(A)) commands.push("pad"+i+"A");
				if (pad.justReleased(B)) commands.push("pad"+i+"B");
				if (pad.justReleased(X)) commands.push("pad"+i+"X");
				if (pad.justReleased(Y)) commands.push("pad"+i+"Y");
			}
		}

		for (i in commands)
		{
			i = i.toUpperCase();
			if (binds.get(i) != null)
			{
				var p:Int = Std.parseInt(binds.get(i).charAt(binds.get(i).length - 1));
				if (players.members[p] != null)
				{
					if (binds.get(i).indexOf("moveLeft") != -1) players.members[p].move(FlxObject.LEFT);
					if (binds.get(i).indexOf("moveRight") != -1) players.members[p].move(FlxObject.RIGHT);
					if (binds.get(i).indexOf("moveUp") != -1) players.members[p].move(FlxObject.UP);
					if (binds.get(i).indexOf("moveDown") != -1) players.members[p].move(FlxObject.DOWN);
				}
			}
		}
	}
}