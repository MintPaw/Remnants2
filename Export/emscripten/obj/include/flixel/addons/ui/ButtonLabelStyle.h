#ifndef INCLUDED_flixel_addons_ui_ButtonLabelStyle
#define INCLUDED_flixel_addons_ui_ButtonLabelStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,BorderDef)
HX_DECLARE_CLASS3(flixel,addons,ui,ButtonLabelStyle)
HX_DECLARE_CLASS3(flixel,addons,ui,FontDef)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  ButtonLabelStyle_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ButtonLabelStyle_obj OBJ_;
		ButtonLabelStyle_obj();
		Void __construct(::flixel::addons::ui::FontDef Font,::String Align,Dynamic Color,::flixel::addons::ui::BorderDef Border);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ButtonLabelStyle_obj > __new(::flixel::addons::ui::FontDef Font,::String Align,Dynamic Color,::flixel::addons::ui::BorderDef Border);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ButtonLabelStyle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ButtonLabelStyle"); }

		::flixel::addons::ui::FontDef font;
		::flixel::addons::ui::BorderDef border;
		Dynamic color;
		::String align;
		virtual Void apply( ::flixel::text::FlxText f);
		Dynamic apply_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_ButtonLabelStyle */ 
