#ifndef INCLUDED_flixel_addons_ui_BorderDef
#define INCLUDED_flixel_addons_ui_BorderDef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,BorderDef)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,text,FlxTextBorderStyle)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  BorderDef_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BorderDef_obj OBJ_;
		BorderDef_obj();
		Void __construct(::flixel::text::FlxTextBorderStyle Style,int Color,hx::Null< Float >  __o_Size,hx::Null< Float >  __o_Quality);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BorderDef_obj > __new(::flixel::text::FlxTextBorderStyle Style,int Color,hx::Null< Float >  __o_Size,hx::Null< Float >  __o_Quality);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BorderDef_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BorderDef"); }

		::flixel::text::FlxTextBorderStyle style;
		int color;
		Float size;
		Float quality;
		virtual Void apply( ::flixel::text::FlxText f);
		Dynamic apply_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_BorderDef */ 
