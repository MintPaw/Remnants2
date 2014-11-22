#ifndef INCLUDED_Console
#define INCLUDED_Console

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/group/FlxTypedSpriteGroup.h>
HX_DECLARE_CLASS0(Console)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxInputText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIText)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(hscript,Interp)
HX_DECLARE_CLASS1(hscript,Parser)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,text,TextField)


class HXCPP_CLASS_ATTRIBUTES  Console_obj : public ::flixel::group::FlxTypedSpriteGroup_obj{
	public:
		typedef ::flixel::group::FlxTypedSpriteGroup_obj super;
		typedef Console_obj OBJ_;
		Console_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Console_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Console_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Console"); }

		::hscript::Parser _parser;
		::hscript::Interp _interp;
		::openfl::_v2::text::TextField _inputText;
		::flixel::addons::ui::FlxUIText _outputText;
		::flixel::addons::ui::FlxInputText _inputGraphic;
		::flixel::FlxSprite _outputGraphic;
		virtual Void update( Float elapsed);

		virtual Void runLine( );
		Dynamic runLine_dyn();

		virtual Void runCode( ::String s);
		Dynamic runCode_dyn();

		virtual Void echo( ::String s);
		Dynamic echo_dyn();

		virtual Void toggleShow( );
		Dynamic toggleShow_dyn();

		virtual Void cls( );
		Dynamic cls_dyn();

		virtual Void exec( ::String fileName);
		Dynamic exec_dyn();

		virtual Void loadExec( ::String url);
		Dynamic loadExec_dyn();

		virtual Void passInReference( ::String s,Dynamic o);
		Dynamic passInReference_dyn();

		virtual Void loaderExec( ::openfl::_v2::events::Event e);
		Dynamic loaderExec_dyn();

};


#endif /* INCLUDED_Console */ 
