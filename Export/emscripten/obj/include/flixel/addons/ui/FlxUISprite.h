#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#define INCLUDED_flixel_addons_ui_FlxUISprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
#include <flixel/addons/ui/interfaces/IResizable.h>
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUISprite)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxUISprite_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef FlxUISprite_obj OBJ_;
		FlxUISprite_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxUISprite_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxUISprite_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::IFlxSprite_obj *()
			{ return new ::flixel::IFlxSprite_delegate_< FlxUISprite_obj >(this); }
		inline operator ::flixel::IFlxBasic_obj *()
			{ return new ::flixel::IFlxBasic_delegate_< FlxUISprite_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *()
			{ return new ::flixel::addons::ui::interfaces::IFlxUIWidget_delegate_< FlxUISprite_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::IResizable_obj *()
			{ return new ::flixel::addons::ui::interfaces::IResizable_delegate_< FlxUISprite_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxUISprite"); }

		bool broadcastToFlxUI;
		::String id;
		Dynamic ptr_owner;
		bool recycled;
		Float resize_ratio;
		int resize_ratio_axis;
		virtual Float set_resize_ratio( Float r);
		Dynamic set_resize_ratio_dyn();

		::flixel::math::FlxPoint resize_point;
		virtual ::flixel::math::FlxPoint set_resize_point( ::flixel::math::FlxPoint r);
		Dynamic set_resize_point_dyn();

		virtual Void recycle( Dynamic data);
		Dynamic recycle_dyn();

		virtual Void resize( Float w,Float h);
		Dynamic resize_dyn();

		virtual Void loadGraphicAtScale( ::String GraphicKey,Float W,Float H);
		Dynamic loadGraphicAtScale_dyn();

		virtual ::flixel::FlxSprite loadGraphic( Dynamic Graphic,hx::Null< bool >  Animated,hx::Null< int >  Width,hx::Null< int >  Height,hx::Null< bool >  Unique,::String Key);

		virtual Void destroy( );

		virtual Void loadFromScaledGraphic( Dynamic Graphic,hx::Null< bool >  Animated,hx::Null< int >  Width,hx::Null< int >  Height,hx::Null< bool >  Unique,::String Key);
		Dynamic loadFromScaledGraphic_dyn();

		::String _originalKey;
		static int RESIZE_RATIO_X;
		static int RESIZE_RATIO_Y;
		static int RESIZE_RATIO_UNKNOWN;
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUISprite */ 
