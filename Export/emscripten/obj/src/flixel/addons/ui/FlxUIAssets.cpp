#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIAssets
#include <flixel/addons/ui/FlxUIAssets.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUIAssets_obj::__construct()
{
	return null();
}

//FlxUIAssets_obj::~FlxUIAssets_obj() { }

Dynamic FlxUIAssets_obj::__CreateEmpty() { return  new FlxUIAssets_obj; }
hx::ObjectPtr< FlxUIAssets_obj > FlxUIAssets_obj::__new()
{  hx::ObjectPtr< FlxUIAssets_obj > result = new FlxUIAssets_obj();
	result->__construct();
	return result;}

Dynamic FlxUIAssets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUIAssets_obj > result = new FlxUIAssets_obj();
	result->__construct();
	return result;}

::String FlxUIAssets_obj::IMG_BUTTON;

::String FlxUIAssets_obj::IMG_BUTTON_ARROW_DOWN;

::String FlxUIAssets_obj::IMG_BUTTON_ARROW_LEFT;

::String FlxUIAssets_obj::IMG_BUTTON_ARROW_RIGHT;

::String FlxUIAssets_obj::IMG_BUTTON_ARROW_UP;

::String FlxUIAssets_obj::IMG_BUTTON_THIN;

::String FlxUIAssets_obj::IMG_BUTTON_TOGGLE;

int FlxUIAssets_obj::IMG_BUTTON_SIZE;

::String FlxUIAssets_obj::IMG_CHECK_MARK;

::String FlxUIAssets_obj::IMG_CHECK_BOX;

::String FlxUIAssets_obj::IMG_CHROME;

::String FlxUIAssets_obj::IMG_CHROME_LIGHT;

::String FlxUIAssets_obj::IMG_CHROME_FLAT;

::String FlxUIAssets_obj::IMG_CHROME_INSET;

::String FlxUIAssets_obj::IMG_RADIO;

::String FlxUIAssets_obj::IMG_RADIO_DOT;

::String FlxUIAssets_obj::IMG_TAB;

::String FlxUIAssets_obj::IMG_TAB_BACK;

::String FlxUIAssets_obj::IMG_BOX;

::String FlxUIAssets_obj::IMG_DROPDOWN;

::String FlxUIAssets_obj::IMG_PLUS;

::String FlxUIAssets_obj::IMG_MINUS;

::String FlxUIAssets_obj::IMG_HILIGHT;

::String FlxUIAssets_obj::IMG_INVIS;

::String FlxUIAssets_obj::IMG_SWATCH;

::String FlxUIAssets_obj::IMG_FINGER_SMALL;

::String FlxUIAssets_obj::IMG_FINGER_BIG;

::String FlxUIAssets_obj::SLICE9_BUTTON;

::String FlxUIAssets_obj::SLICE9_BUTTON_THIN;

::String FlxUIAssets_obj::SLICE9_BUTTON_TOGGLE;

::String FlxUIAssets_obj::SLICE9_TAB;

::String FlxUIAssets_obj::XML_DEFAULTS_ID;

::String FlxUIAssets_obj::XML_DEFAULT_POPUP_ID;

::String FlxUIAssets_obj::XML_DEFAULT_LOADING_SCREEN_ID;

::haxe::ds::StringMap FlxUIAssets_obj::index_size;


FlxUIAssets_obj::FlxUIAssets_obj()
{
}

Dynamic FlxUIAssets_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"index_size") ) { return index_size; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUIAssets_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"index_size") ) { index_size=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUIAssets_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("IMG_BUTTON"),
	HX_CSTRING("IMG_BUTTON_ARROW_DOWN"),
	HX_CSTRING("IMG_BUTTON_ARROW_LEFT"),
	HX_CSTRING("IMG_BUTTON_ARROW_RIGHT"),
	HX_CSTRING("IMG_BUTTON_ARROW_UP"),
	HX_CSTRING("IMG_BUTTON_THIN"),
	HX_CSTRING("IMG_BUTTON_TOGGLE"),
	HX_CSTRING("IMG_BUTTON_SIZE"),
	HX_CSTRING("IMG_CHECK_MARK"),
	HX_CSTRING("IMG_CHECK_BOX"),
	HX_CSTRING("IMG_CHROME"),
	HX_CSTRING("IMG_CHROME_LIGHT"),
	HX_CSTRING("IMG_CHROME_FLAT"),
	HX_CSTRING("IMG_CHROME_INSET"),
	HX_CSTRING("IMG_RADIO"),
	HX_CSTRING("IMG_RADIO_DOT"),
	HX_CSTRING("IMG_TAB"),
	HX_CSTRING("IMG_TAB_BACK"),
	HX_CSTRING("IMG_BOX"),
	HX_CSTRING("IMG_DROPDOWN"),
	HX_CSTRING("IMG_PLUS"),
	HX_CSTRING("IMG_MINUS"),
	HX_CSTRING("IMG_HILIGHT"),
	HX_CSTRING("IMG_INVIS"),
	HX_CSTRING("IMG_SWATCH"),
	HX_CSTRING("IMG_FINGER_SMALL"),
	HX_CSTRING("IMG_FINGER_BIG"),
	HX_CSTRING("SLICE9_BUTTON"),
	HX_CSTRING("SLICE9_BUTTON_THIN"),
	HX_CSTRING("SLICE9_BUTTON_TOGGLE"),
	HX_CSTRING("SLICE9_TAB"),
	HX_CSTRING("XML_DEFAULTS_ID"),
	HX_CSTRING("XML_DEFAULT_POPUP_ID"),
	HX_CSTRING("XML_DEFAULT_LOADING_SCREEN_ID"),
	HX_CSTRING("index_size"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON,"IMG_BUTTON");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON_ARROW_DOWN,"IMG_BUTTON_ARROW_DOWN");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON_ARROW_LEFT,"IMG_BUTTON_ARROW_LEFT");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON_ARROW_RIGHT,"IMG_BUTTON_ARROW_RIGHT");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON_ARROW_UP,"IMG_BUTTON_ARROW_UP");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON_THIN,"IMG_BUTTON_THIN");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON_TOGGLE,"IMG_BUTTON_TOGGLE");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON_SIZE,"IMG_BUTTON_SIZE");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_CHECK_MARK,"IMG_CHECK_MARK");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_CHECK_BOX,"IMG_CHECK_BOX");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_CHROME,"IMG_CHROME");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_CHROME_LIGHT,"IMG_CHROME_LIGHT");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_CHROME_FLAT,"IMG_CHROME_FLAT");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_CHROME_INSET,"IMG_CHROME_INSET");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_RADIO,"IMG_RADIO");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_RADIO_DOT,"IMG_RADIO_DOT");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_TAB,"IMG_TAB");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_TAB_BACK,"IMG_TAB_BACK");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_BOX,"IMG_BOX");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_DROPDOWN,"IMG_DROPDOWN");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_PLUS,"IMG_PLUS");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_MINUS,"IMG_MINUS");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_HILIGHT,"IMG_HILIGHT");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_INVIS,"IMG_INVIS");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_SWATCH,"IMG_SWATCH");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_FINGER_SMALL,"IMG_FINGER_SMALL");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_FINGER_BIG,"IMG_FINGER_BIG");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::SLICE9_BUTTON,"SLICE9_BUTTON");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::SLICE9_BUTTON_THIN,"SLICE9_BUTTON_THIN");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::SLICE9_BUTTON_TOGGLE,"SLICE9_BUTTON_TOGGLE");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::SLICE9_TAB,"SLICE9_TAB");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::XML_DEFAULTS_ID,"XML_DEFAULTS_ID");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::XML_DEFAULT_POPUP_ID,"XML_DEFAULT_POPUP_ID");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::XML_DEFAULT_LOADING_SCREEN_ID,"XML_DEFAULT_LOADING_SCREEN_ID");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::index_size,"index_size");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON,"IMG_BUTTON");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON_ARROW_DOWN,"IMG_BUTTON_ARROW_DOWN");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON_ARROW_LEFT,"IMG_BUTTON_ARROW_LEFT");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON_ARROW_RIGHT,"IMG_BUTTON_ARROW_RIGHT");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON_ARROW_UP,"IMG_BUTTON_ARROW_UP");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON_THIN,"IMG_BUTTON_THIN");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON_TOGGLE,"IMG_BUTTON_TOGGLE");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON_SIZE,"IMG_BUTTON_SIZE");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_CHECK_MARK,"IMG_CHECK_MARK");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_CHECK_BOX,"IMG_CHECK_BOX");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_CHROME,"IMG_CHROME");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_CHROME_LIGHT,"IMG_CHROME_LIGHT");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_CHROME_FLAT,"IMG_CHROME_FLAT");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_CHROME_INSET,"IMG_CHROME_INSET");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_RADIO,"IMG_RADIO");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_RADIO_DOT,"IMG_RADIO_DOT");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_TAB,"IMG_TAB");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_TAB_BACK,"IMG_TAB_BACK");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_BOX,"IMG_BOX");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_DROPDOWN,"IMG_DROPDOWN");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_PLUS,"IMG_PLUS");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_MINUS,"IMG_MINUS");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_HILIGHT,"IMG_HILIGHT");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_INVIS,"IMG_INVIS");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_SWATCH,"IMG_SWATCH");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_FINGER_SMALL,"IMG_FINGER_SMALL");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_FINGER_BIG,"IMG_FINGER_BIG");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::SLICE9_BUTTON,"SLICE9_BUTTON");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::SLICE9_BUTTON_THIN,"SLICE9_BUTTON_THIN");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::SLICE9_BUTTON_TOGGLE,"SLICE9_BUTTON_TOGGLE");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::SLICE9_TAB,"SLICE9_TAB");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::XML_DEFAULTS_ID,"XML_DEFAULTS_ID");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::XML_DEFAULT_POPUP_ID,"XML_DEFAULT_POPUP_ID");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::XML_DEFAULT_LOADING_SCREEN_ID,"XML_DEFAULT_LOADING_SCREEN_ID");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::index_size,"index_size");
};

#endif

Class FlxUIAssets_obj::__mClass;

void FlxUIAssets_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxUIAssets"), hx::TCanCast< FlxUIAssets_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void FlxUIAssets_obj::__boot()
{
	IMG_BUTTON= HX_CSTRING("flixel/flixel-ui/img/button.png");
	IMG_BUTTON_ARROW_DOWN= HX_CSTRING("flixel/flixel-ui/img/button_arrow_down.png");
	IMG_BUTTON_ARROW_LEFT= HX_CSTRING("flixel/flixel-ui/img/button_arrow_left.png");
	IMG_BUTTON_ARROW_RIGHT= HX_CSTRING("flixel/flixel-ui/img/button_arrow_right.png");
	IMG_BUTTON_ARROW_UP= HX_CSTRING("flixel/flixel-ui/img/button_arrow_up.png");
	IMG_BUTTON_THIN= HX_CSTRING("flixel/flixel-ui/img/button_thin.png");
	IMG_BUTTON_TOGGLE= HX_CSTRING("flixel/flixel-ui/img/button_toggle.png");
	IMG_BUTTON_SIZE= (int)18;
	IMG_CHECK_MARK= HX_CSTRING("flixel/flixel-ui/img/check_mark.png");
	IMG_CHECK_BOX= HX_CSTRING("flixel/flixel-ui/img/check_box.png");
	IMG_CHROME= HX_CSTRING("flixel/flixel-ui/img/chrome.png");
	IMG_CHROME_LIGHT= HX_CSTRING("flixel/flixel-ui/img/chrome_light.png");
	IMG_CHROME_FLAT= HX_CSTRING("flixel/flixel-ui/img/chrome_flat.png");
	IMG_CHROME_INSET= HX_CSTRING("flixel/flixel-ui/img/chrome_inset.png");
	IMG_RADIO= HX_CSTRING("flixel/flixel-ui/img/radio.png");
	IMG_RADIO_DOT= HX_CSTRING("flixel/flixel-ui/img/radio_dot.png");
	IMG_TAB= HX_CSTRING("flixel/flixel-ui/img/tab.png");
	IMG_TAB_BACK= HX_CSTRING("flixel/flixel-ui/img/tab_back.png");
	IMG_BOX= HX_CSTRING("flixel/flixel-ui/img/box.png");
	IMG_DROPDOWN= HX_CSTRING("flixel/flixel-ui/img/dropdown_mark.png");
	IMG_PLUS= HX_CSTRING("flixel/flixel-ui/img/plus_mark.png");
	IMG_MINUS= HX_CSTRING("flixel/flixel-ui/img/minus_mark.png");
	IMG_HILIGHT= HX_CSTRING("flixel/flixel-ui/img/hilight.png");
	IMG_INVIS= HX_CSTRING("flixel/flixel-ui/img/invis.png");
	IMG_SWATCH= HX_CSTRING("flixel/flixel-ui/img/swatch.png");
	IMG_FINGER_SMALL= HX_CSTRING("flixel/flixel-ui/img/finger_small.png");
	IMG_FINGER_BIG= HX_CSTRING("flixel/flixel-ui/img/finger_big.png");
	SLICE9_BUTTON= HX_CSTRING("6,6,11,11");
	SLICE9_BUTTON_THIN= HX_CSTRING("2,2,15,15");
	SLICE9_BUTTON_TOGGLE= HX_CSTRING("6,6,11,11");
	SLICE9_TAB= HX_CSTRING("6,6,11,11");
	XML_DEFAULTS_ID= HX_CSTRING("flixel/flixel-ui/xml/defaults");
	XML_DEFAULT_POPUP_ID= HX_CSTRING("flixel/flixel-ui/xml/default_popup");
	XML_DEFAULT_LOADING_SCREEN_ID= HX_CSTRING("flixel/flixel-ui/xml/default_loading_screen");
	index_size= null();
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
