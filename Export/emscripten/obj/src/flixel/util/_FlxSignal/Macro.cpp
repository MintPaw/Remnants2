#include <hxcpp.h>

#ifndef INCLUDED_flixel_util__FlxSignal_Macro
#include <flixel/util/_FlxSignal/Macro.h>
#endif
namespace flixel{
namespace util{
namespace _FlxSignal{

Void Macro_obj::__construct()
{
	return null();
}

//Macro_obj::~Macro_obj() { }

Dynamic Macro_obj::__CreateEmpty() { return  new Macro_obj; }
hx::ObjectPtr< Macro_obj > Macro_obj::__new()
{  hx::ObjectPtr< Macro_obj > result = new Macro_obj();
	result->__construct();
	return result;}

Dynamic Macro_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Macro_obj > result = new Macro_obj();
	result->__construct();
	return result;}


Macro_obj::Macro_obj()
{
}

Dynamic Macro_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Macro_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Macro_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(Macro_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Macro_obj::__mClass,"__mClass");
};

#endif

Class Macro_obj::__mClass;

void Macro_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util._FlxSignal.Macro"), hx::TCanCast< Macro_obj> ,sStaticFields,sMemberFields,
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

void Macro_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal
