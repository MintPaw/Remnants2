#ifndef INCLUDED_flixel_addons_ui_FlxUIAssets
#define INCLUDED_flixel_addons_ui_FlxUIAssets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIAssets)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxUIAssets_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxUIAssets_obj OBJ_;
		FlxUIAssets_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxUIAssets_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxUIAssets_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FlxUIAssets"); }

		static ::String IMG_BUTTON;
		static ::String IMG_BUTTON_ARROW_DOWN;
		static ::String IMG_BUTTON_ARROW_LEFT;
		static ::String IMG_BUTTON_ARROW_RIGHT;
		static ::String IMG_BUTTON_ARROW_UP;
		static ::String IMG_BUTTON_THIN;
		static ::String IMG_BUTTON_TOGGLE;
		static int IMG_BUTTON_SIZE;
		static ::String IMG_CHECK_MARK;
		static ::String IMG_CHECK_BOX;
		static ::String IMG_CHROME;
		static ::String IMG_CHROME_LIGHT;
		static ::String IMG_CHROME_FLAT;
		static ::String IMG_CHROME_INSET;
		static ::String IMG_RADIO;
		static ::String IMG_RADIO_DOT;
		static ::String IMG_TAB;
		static ::String IMG_TAB_BACK;
		static ::String IMG_BOX;
		static ::String IMG_DROPDOWN;
		static ::String IMG_PLUS;
		static ::String IMG_MINUS;
		static ::String IMG_HILIGHT;
		static ::String IMG_INVIS;
		static ::String IMG_SWATCH;
		static ::String IMG_FINGER_SMALL;
		static ::String IMG_FINGER_BIG;
		static ::String SLICE9_BUTTON;
		static ::String SLICE9_BUTTON_THIN;
		static ::String SLICE9_BUTTON_TOGGLE;
		static ::String SLICE9_TAB;
		static ::String XML_DEFAULTS_ID;
		static ::String XML_DEFAULT_POPUP_ID;
		static ::String XML_DEFAULT_LOADING_SCREEN_ID;
		static ::haxe::ds::StringMap index_size;
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUIAssets */ 