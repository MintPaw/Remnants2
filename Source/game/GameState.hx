package game;

class GameState extends flixel.FlxState
{
	private var _console:Console;

	public function new()
	{
		super();
	}

	override public function create():Void
	{
		super.create();

		setup();
	}

	private function setup():Void
	{
		setupConsole();
	}

	public function setupConsole():Void
	{
		_console = new Console();
		_console.passInReference("Game", this);
		add(_console);
	}
}