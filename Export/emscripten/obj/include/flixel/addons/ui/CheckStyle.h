#ifndef INCLUDED_flixel_addons_ui_CheckStyle
#define INCLUDED_flixel_addons_ui_CheckStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/addons/ui/ButtonLabelStyle.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,BorderDef)
HX_DECLARE_CLASS3(flixel,addons,ui,ButtonLabelStyle)
HX_DECLARE_CLASS3(flixel,addons,ui,CheckStyle)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUICheckBox)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FontDef)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ILabeled)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  CheckStyle_obj : public ::flixel::addons::ui::ButtonLabelStyle_obj{
	public:
		typedef ::flixel::addons::ui::ButtonLabelStyle_obj super;
		typedef CheckStyle_obj OBJ_;
		CheckStyle_obj();
		Void __construct(Dynamic CheckColor,::flixel::addons::ui::FontDef Font,::String Align,Dynamic Color,::flixel::addons::ui::BorderDef Border);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CheckStyle_obj > __new(Dynamic CheckColor,::flixel::addons::ui::FontDef Font,::String Align,Dynamic Color,::flixel::addons::ui::BorderDef Border);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CheckStyle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CheckStyle"); }

		Dynamic checkColor;
		virtual Void applyToCheck( ::flixel::addons::ui::FlxUICheckBox c);
		Dynamic applyToCheck_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_CheckStyle */ 
