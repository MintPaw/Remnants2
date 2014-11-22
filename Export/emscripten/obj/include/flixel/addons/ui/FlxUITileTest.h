#ifndef INCLUDED_flixel_addons_ui_FlxUITileTest
#define INCLUDED_flixel_addons_ui_FlxUITileTest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/addons/ui/FlxUISprite.h>
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#include <flixel/addons/ui/interfaces/IResizable.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUISprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITileTest)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxUITileTest_obj : public ::flixel::addons::ui::FlxUISprite_obj{
	public:
		typedef ::flixel::addons::ui::FlxUISprite_obj super;
		typedef FlxUITileTest_obj OBJ_;
		FlxUITileTest_obj();
		Void __construct(Float X,Float Y,int TileWidth,int TileHeight,int tilesWide,int tilesTall,hx::Null< int >  __o_color1,hx::Null< int >  __o_color2,hx::Null< bool >  __o_FloorToEven);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxUITileTest_obj > __new(Float X,Float Y,int TileWidth,int TileHeight,int tilesWide,int tilesTall,hx::Null< int >  __o_color1,hx::Null< int >  __o_color2,hx::Null< bool >  __o_FloorToEven);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxUITileTest_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::flixel::IFlxSprite_obj *()
			{ return new ::flixel::IFlxSprite_delegate_< FlxUITileTest_obj >(this); }
		inline operator ::flixel::IFlxBasic_obj *()
			{ return new ::flixel::IFlxBasic_delegate_< FlxUITileTest_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *()
			{ return new ::flixel::addons::ui::interfaces::IFlxUIWidget_delegate_< FlxUITileTest_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::IResizable_obj *()
			{ return new ::flixel::addons::ui::interfaces::IResizable_delegate_< FlxUITileTest_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxUITileTest"); }

		int widthInTiles;
		int heightInTiles;
		int tileWidth;
		int tileHeight;
		virtual int get_widthInTiles( );
		Dynamic get_widthInTiles_dyn();

		virtual int get_heightInTiles( );
		Dynamic get_heightInTiles_dyn();

		int _tilesWide;
		int _tilesTall;
		int _color1;
		int _color2;
		bool floorToEven;
		int baseTileSize;
		virtual Void makeTiles( int tileWidth,int tileHeight,int tilesWide,int tilesTall,hx::Null< int >  color1,hx::Null< int >  color2);
		Dynamic makeTiles_dyn();

		virtual ::flixel::math::FlxPoint constrain( Float w,Float h);
		Dynamic constrain_dyn();

		virtual Void resize( Float w,Float h);

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUITileTest */ 
