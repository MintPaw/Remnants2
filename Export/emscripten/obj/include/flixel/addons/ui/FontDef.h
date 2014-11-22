#ifndef INCLUDED_flixel_addons_ui_FontDef
#define INCLUDED_flixel_addons_ui_FontDef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,BorderDef)
HX_DECLARE_CLASS3(flixel,addons,ui,FontDef)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,text,TextField)
HX_DECLARE_CLASS3(openfl,_v2,text,TextFormat)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FontDef_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FontDef_obj OBJ_;
		FontDef_obj();
		Void __construct(::String Name,::String __o_Extension,::String __o_File,::openfl::_v2::text::TextFormat Format,::flixel::addons::ui::BorderDef Border);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FontDef_obj > __new(::String Name,::String __o_Extension,::String __o_File,::openfl::_v2::text::TextFormat Format,::flixel::addons::ui::BorderDef Border);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FontDef_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FontDef"); }

		::String name;
		int size;
		::String extension;
		::String file;
		::openfl::_v2::text::TextFormat format;
		::flixel::addons::ui::BorderDef border;
		virtual Void apply( ::openfl::_v2::text::TextField textField,::flixel::text::FlxText flxText);
		Dynamic apply_dyn();

		virtual Void fromStr( ::String str,hx::Null< int >  recursion);
		Dynamic fromStr_dyn();

		virtual ::String stripFontExtensions( ::String str);
		Dynamic stripFontExtensions_dyn();

		virtual ::String getFontStyle( ::String str);
		Dynamic getFontStyle_dyn();

		virtual Void setFontStyle( ::String str);
		Dynamic setFontStyle_dyn();

		static Array< ::String > EXTENSIONS;
		static ::flixel::addons::ui::FontDef copyFromTextField( ::openfl::_v2::text::TextField t);
		static Dynamic copyFromTextField_dyn();

		static ::flixel::addons::ui::FontDef copyFromFlxText( ::flixel::text::FlxText t);
		static Dynamic copyFromFlxText_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FontDef */ 
