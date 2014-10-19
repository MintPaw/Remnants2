package ;

import flixel.addons.ui.FlxInputText;
import flixel.addons.ui.FlxUIText;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxSpriteGroup;
import hscript.Expr.Error;
import hscript.Interp;
import hscript.Parser;
import openfl.text.TextField;
import openfl.text.TextFieldType;
import openfl.text.TextFormat;

class Console extends FlxSpriteGroup
{
	private var _parser:Parser = new Parser();
	private var _interp:Interp = new Interp();

	private var _inputText:TextField;
	private var _outputText:FlxUIText;
	private var _inputGraphic:FlxSprite;
	private var _outputGraphic:FlxSprite;

	public function new()
	{
		super();

		_inputText = new TextField();
		_inputText.width = FlxG.width;
		_inputText.defaultTextFormat = new TextFormat(null, 20);
		_inputText.type = TextFieldType.INPUT;
		_inputText.height = 30;
		_inputText.y = FlxG.height - _inputText.height;

		_outputText = new FlxUIText(0, 0, FlxG.width, "", 20);

		_outputGraphic = new FlxSprite();
		_outputGraphic.x = _outputText.x;
		_outputGraphic.y = _outputText.y;
		_outputGraphic.makeGraphic(Std.int(_outputText.width), Std.int(FlxG.height - _inputText.height), 0x99000000);
		
		add(_outputGraphic);
		add(_outputText);
		FlxG.addChildBelowMouse(_inputText);

		cls();
		passInReference("C", this);
		passInReference("FlxSprite", FlxSprite);
	}

	override public function update():Void
	{
		if (FlxG.keys.justPressed.NUMPADMINUS) toggleShow();
		if (!visible)
		{
			FlxG.stage.focus = FlxG.stage;
			return;
		}

		if (FlxG.keys.justPressed.ENTER) runLine();

		super.update();
	}

	private function runLine():Void
	{
		_outputText.text += "\n" + _inputText.text;
		if (_outputText.height > FlxG.height - _inputText.height * 2) _outputText.y = FlxG.height - _inputText.height * 2 - _outputText.height;

		try
		{
			var prog:Dynamic = _parser.parseString(_inputText.text);
			_interp.execute(prog);
		} catch (e:Error) {
			echo("\nERROR: " + e.getName() + " " + e.getParameters());
		}

		_inputText.text = "";
	}

	private function echo(s:String):Void
	{
		_outputText.text += "\n" + s;
	}

	private function toggleShow():Void
	{
		visible = !visible;
		_inputText.visible = visible;
	}

	private function cls():Void
	{
		_outputText.text = "<Console>";
		_outputText.height = 50;
		_outputText.y = 0;
	}

	public function passInReference(s:String, o:Dynamic):Void
	{
		_interp.variables.set(s, o);
	}
}