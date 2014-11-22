#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_macros_FlxMacroUtil
#include <flixel/system/macros/FlxMacroUtil.h>
#endif
namespace flixel{
namespace system{
namespace macros{

Void FlxMacroUtil_obj::__construct()
{
	return null();
}

//FlxMacroUtil_obj::~FlxMacroUtil_obj() { }

Dynamic FlxMacroUtil_obj::__CreateEmpty() { return  new FlxMacroUtil_obj; }
hx::ObjectPtr< FlxMacroUtil_obj > FlxMacroUtil_obj::__new()
{  hx::ObjectPtr< FlxMacroUtil_obj > result = new FlxMacroUtil_obj();
	result->__construct();
	return result;}

Dynamic FlxMacroUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMacroUtil_obj > result = new FlxMacroUtil_obj();
	result->__construct();
	return result;}


FlxMacroUtil_obj::FlxMacroUtil_obj()
{
}

Dynamic FlxMacroUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic FlxMacroUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMacroUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMacroUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMacroUtil_obj::__mClass,"__mClass");
};

#endif

Class FlxMacroUtil_obj::__mClass;

void FlxMacroUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.macros.FlxMacroUtil"), hx::TCanCast< FlxMacroUtil_obj> ,sStaticFields,sMemberFields,
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

void FlxMacroUtil_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace macros
