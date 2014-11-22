#include <hxcpp.h>

#ifndef INCLUDED_flixel__FlxBasic_FlxType_Impl_
#include <flixel/_FlxBasic/FlxType_Impl_.h>
#endif
namespace flixel{
namespace _FlxBasic{

Void FlxType_Impl__obj::__construct()
{
	return null();
}

//FlxType_Impl__obj::~FlxType_Impl__obj() { }

Dynamic FlxType_Impl__obj::__CreateEmpty() { return  new FlxType_Impl__obj; }
hx::ObjectPtr< FlxType_Impl__obj > FlxType_Impl__obj::__new()
{  hx::ObjectPtr< FlxType_Impl__obj > result = new FlxType_Impl__obj();
	result->__construct();
	return result;}

Dynamic FlxType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxType_Impl__obj > result = new FlxType_Impl__obj();
	result->__construct();
	return result;}

int FlxType_Impl__obj::NONE;

int FlxType_Impl__obj::OBJECT;

int FlxType_Impl__obj::GROUP;

int FlxType_Impl__obj::TILEMAP;

int FlxType_Impl__obj::SPRITEGROUP;


FlxType_Impl__obj::FlxType_Impl__obj()
{
}

Dynamic FlxType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic FlxType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NONE"),
	HX_CSTRING("OBJECT"),
	HX_CSTRING("GROUP"),
	HX_CSTRING("TILEMAP"),
	HX_CSTRING("SPRITEGROUP"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxType_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(FlxType_Impl__obj::OBJECT,"OBJECT");
	HX_MARK_MEMBER_NAME(FlxType_Impl__obj::GROUP,"GROUP");
	HX_MARK_MEMBER_NAME(FlxType_Impl__obj::TILEMAP,"TILEMAP");
	HX_MARK_MEMBER_NAME(FlxType_Impl__obj::SPRITEGROUP,"SPRITEGROUP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxType_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(FlxType_Impl__obj::OBJECT,"OBJECT");
	HX_VISIT_MEMBER_NAME(FlxType_Impl__obj::GROUP,"GROUP");
	HX_VISIT_MEMBER_NAME(FlxType_Impl__obj::TILEMAP,"TILEMAP");
	HX_VISIT_MEMBER_NAME(FlxType_Impl__obj::SPRITEGROUP,"SPRITEGROUP");
};

#endif

Class FlxType_Impl__obj::__mClass;

void FlxType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel._FlxBasic.FlxType_Impl_"), hx::TCanCast< FlxType_Impl__obj> ,sStaticFields,sMemberFields,
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

void FlxType_Impl__obj::__boot()
{
	NONE= (int)0;
	OBJECT= (int)1;
	GROUP= (int)2;
	TILEMAP= (int)3;
	SPRITEGROUP= (int)4;
}

} // end namespace flixel
} // end namespace _FlxBasic
