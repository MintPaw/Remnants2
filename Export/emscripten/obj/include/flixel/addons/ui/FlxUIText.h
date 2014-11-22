#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#define INCLUDED_flixel_addons_ui_FlxUIText

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/text/FlxText.h>
#include <flixel/addons/ui/interfaces/IHasParams.h>
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#include <flixel/addons/ui/interfaces/IResizable.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIText)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxUIText_obj : public ::flixel::text::FlxText_obj{
	public:
		typedef ::flixel::text::FlxText_obj super;
		typedef FlxUIText_obj OBJ_;
		FlxUIText_obj();
		Void __construct(Dynamic X,Dynamic Y,Dynamic FieldWidth,::String Text,Dynamic Size,Dynamic EmbeddedFont);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxUIText_obj > __new(Dynamic X,Dynamic Y,Dynamic FieldWidth,::String Text,Dynamic Size,Dynamic EmbeddedFont);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxUIText_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::IFlxSprite_obj *()
			{ return new ::flixel::IFlxSprite_delegate_< FlxUIText_obj >(this); }
		inline operator ::flixel::IFlxBasic_obj *()
			{ return new ::flixel::IFlxBasic_delegate_< FlxUIText_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *()
			{ return new ::flixel::addons::ui::interfaces::IFlxUIWidget_delegate_< FlxUIText_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::IResizable_obj *()
			{ return new ::flixel::addons::ui::interfaces::IResizable_delegate_< FlxUIText_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::IHasParams_obj *()
			{ return new ::flixel::addons::ui::interfaces::IHasParams_delegate_< FlxUIText_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxUIText"); }

		bool broadcastToFlxUI;
		::String id;
		Dynamic params;
		virtual Void resize( Float w,Float h);
		Dynamic resize_dyn();

		virtual Dynamic set_params( Dynamic p);
		Dynamic set_params_dyn();

		virtual ::flixel::FlxSprite clone( );

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUIText */ 
