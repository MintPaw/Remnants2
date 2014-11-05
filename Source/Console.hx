package ;

import flixel.addons.ui.FlxInputText;
import flixel.addons.ui.FlxUIText;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxSpriteGroup;
import flixel.input.keyboard.FlxKey;
import hscript.Expr.Error;
import hscript.Interp;
import hscript.Parser;
import openfl.Assets;
import openfl.events.Event;
import openfl.filters.GlowFilter;
import openfl.net.URLLoader;
import openfl.net.URLRequest;
import openfl.text.Font;
import openfl.text.TextField;
import openfl.text.TextFieldType;
import openfl.text.TextFormat;

@:font("assets/font/DroidSans.ttf") class DroidSans extends Font {}

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
		_inputText.defaultTextFormat = new TextFormat("DroidSans", 20);
		_inputText.type = TextFieldType.INPUT;
		_inputText.height = 30;
		_inputText.y = FlxG.stage.stageHeight - _inputText.height;

		_outputText = new FlxUIText(0, 0, FlxG.width, "", 20);

		_outputGraphic = new FlxSprite();
		_outputGraphic.x = _outputText.x;
		_outputGraphic.y = _outputText.y;
		_outputGraphic.makeGraphic(Std.int(_outputText.width), Std.int(FlxG.height - _inputText.height * 1.25), 0x99000000);
		
		add(_outputGraphic);
		add(_outputText);
		FlxG.stage.addChild(_inputText);

		cls();
		passInReference("C", this);
		passInReference("I", Inputs);
		passInReference("FlxSprite", FlxSprite);
		passInReference("FlxKey", FlxKey);

		scrollFactor.set();
		_inputText.text = "test";
	}

	override public function update(elapsed:Float):Void
	{
		if (FlxG.keys.justPressed.TAB) toggleShow();
		if (!visible)
		{
			FlxG.stage.focus = FlxG.stage;
			return;
		}

		if (FlxG.keys.justPressed.ENTER) runLine();

		super.update(elapsed);
	}

	private function runLine():Void
	{
		_outputText.text += "\n" + _inputText.text;
		if (_outputText.height > FlxG.height - _inputText.height * 2) _outputText.y = FlxG.height - _inputText.height * 2 - _outputText.height;

		var code:String = _inputText.text;
		_inputText.text = "";

		try
		{
			runCode(code);
		} catch (e:hscript.Expr.Error) {
			echo("\nERROR: " + e.getName() + " " + e.getParameters());
		}
	}

	private function runCode(s:String):Void
	{
		var prog:Dynamic = _parser.parseString(s);
		_interp.execute(prog);
	}

	public function echo(s:String):Void
	{
		_outputText.text += "\n" + s;
	}

	private function toggleShow():Void
	{
		visible = !visible;
		_inputText.visible = visible;

		FlxG.state.remove(this, true);
		FlxG.state.add(this);
	}

	private function cls():Void
	{
		_outputText.text = "<Console>";
		_outputText.height = 50;
		_outputText.y = 0;
	}

	public function exec(fileName:String):Void
	{
		runCode(Assets.getText("assets/cfg/" + fileName + ".cfg"));
	}

	public function loadExec(url:String):Void
	{
		var l:URLLoader = new URLLoader();
		l.addEventListener(Event.COMPLETE, loaderExec);
		l.load(new URLRequest(url));
	}

	public function passInReference(s:String, o:Dynamic):Void
	{
		_interp.variables.set(s, o);
	}

	private function loaderExec(e:Event):Void
	{
		echo(e.target.data);
		runCode(e.target.data);
	}
}