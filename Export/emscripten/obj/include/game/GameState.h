#ifndef INCLUDED_game_GameState
#define INCLUDED_game_GameState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxState.h>
HX_DECLARE_CLASS0(Console)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(game,GameState)
HX_DECLARE_CLASS1(mintDungeon,Generator)
namespace game{


class HXCPP_CLASS_ATTRIBUTES  GameState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef GameState_obj OBJ_;
		GameState_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GameState_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GameState"); }

		::mintDungeon::Generator generator;
		::String cameraMode;
		::Console _console;
		::flixel::tile::FlxTilemap _map;
		::flixel::group::FlxTypedGroup _playerGroup;
		::flixel::group::FlxTypedGroup _doorGroup;
		::flixel::group::FlxTypedGroup _keyGroup;
		::flixel::FlxSprite _exit;
		virtual Void create( );

		virtual Void setup( );
		Dynamic setup_dyn();

		virtual Void setupVars( );
		Dynamic setupVars_dyn();

		virtual Void setupConsole( );
		Dynamic setupConsole_dyn();

		virtual Void generateMap( );
		Dynamic generateMap_dyn();

		virtual Void createPlayer( int model,hx::Null< Float >  xpos,hx::Null< Float >  ypos);
		Dynamic createPlayer_dyn();

		virtual Void update( Float elapsed);

		virtual Void updateCamera( );
		Dynamic updateCamera_dyn();

		virtual Void updateCollisions( );
		Dynamic updateCollisions_dyn();

		virtual Void updateExit( );
		Dynamic updateExit_dyn();

		virtual Void keyVSPlayer( ::flixel::FlxBasic b1,::flixel::FlxBasic b2);
		Dynamic keyVSPlayer_dyn();

		virtual Void doorVSPlayer( ::flixel::FlxBasic b1,::flixel::FlxBasic b2);
		Dynamic doorVSPlayer_dyn();

};

} // end namespace game

#endif /* INCLUDED_game_GameState */ 
