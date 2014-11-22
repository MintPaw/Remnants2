#ifndef INCLUDED_game_Key
#define INCLUDED_game_Key

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(game,Key)
namespace game{


class HXCPP_CLASS_ATTRIBUTES  Key_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Key_obj OBJ_;
		Key_obj();
		Void __construct(Float xpos,Float ypos,int colour);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Key_obj > __new(Float xpos,Float ypos,int colour);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Key_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Key"); }

		int colour;
};

} // end namespace game

#endif /* INCLUDED_game_Key */ 
