#include <hxcpp.h>

#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
namespace flixel{
namespace text{

::flixel::text::FlxTextBorderStyle FlxTextBorderStyle_obj::NONE;

::flixel::text::FlxTextBorderStyle FlxTextBorderStyle_obj::OUTLINE;

::flixel::text::FlxTextBorderStyle FlxTextBorderStyle_obj::OUTLINE_FAST;

::flixel::text::FlxTextBorderStyle FlxTextBorderStyle_obj::SHADOW;

HX_DEFINE_CREATE_ENUM(FlxTextBorderStyle_obj)

int FlxTextBorderStyle_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("NONE")) return 0;
	if (inName==HX_CSTRING("OUTLINE")) return 2;
	if (inName==HX_CSTRING("OUTLINE_FAST")) return 3;
	if (inName==HX_CSTRING("SHADOW")) return 1;
	return super::__FindIndex(inName);
}

int FlxTextBorderStyle_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("NONE")) return 0;
	if (inName==HX_CSTRING("OUTLINE")) return 0;
	if (inName==HX_CSTRING("OUTLINE_FAST")) return 0;
	if (inName==HX_CSTRING("SHADOW")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlxTextBorderStyle_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("NONE")) return NONE;
	if (inName==HX_CSTRING("OUTLINE")) return OUTLINE;
	if (inName==HX_CSTRING("OUTLINE_FAST")) return OUTLINE_FAST;
	if (inName==HX_CSTRING("SHADOW")) return SHADOW;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("NONE"),
	HX_CSTRING("SHADOW"),
	HX_CSTRING("OUTLINE"),
	HX_CSTRING("OUTLINE_FAST"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTextBorderStyle_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(FlxTextBorderStyle_obj::OUTLINE,"OUTLINE");
	HX_MARK_MEMBER_NAME(FlxTextBorderStyle_obj::OUTLINE_FAST,"OUTLINE_FAST");
	HX_MARK_MEMBER_NAME(FlxTextBorderStyle_obj::SHADOW,"SHADOW");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTextBorderStyle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTextBorderStyle_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(FlxTextBorderStyle_obj::OUTLINE,"OUTLINE");
	HX_VISIT_MEMBER_NAME(FlxTextBorderStyle_obj::OUTLINE_FAST,"OUTLINE_FAST");
	HX_VISIT_MEMBER_NAME(FlxTextBorderStyle_obj::SHADOW,"SHADOW");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class FlxTextBorderStyle_obj::__mClass;

Dynamic __Create_FlxTextBorderStyle_obj() { return new FlxTextBorderStyle_obj; }

void FlxTextBorderStyle_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.text.FlxTextBorderStyle"), hx::TCanCast< FlxTextBorderStyle_obj >,sStaticFields,sMemberFields,
	&__Create_FlxTextBorderStyle_obj, &__Create,
	&super::__SGetClass(), &CreateFlxTextBorderStyle_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxTextBorderStyle_obj::__boot()
{
hx::Static(NONE) = hx::CreateEnum< FlxTextBorderStyle_obj >(HX_CSTRING("NONE"),0);
hx::Static(OUTLINE) = hx::CreateEnum< FlxTextBorderStyle_obj >(HX_CSTRING("OUTLINE"),2);
hx::Static(OUTLINE_FAST) = hx::CreateEnum< FlxTextBorderStyle_obj >(HX_CSTRING("OUTLINE_FAST"),3);
hx::Static(SHADOW) = hx::CreateEnum< FlxTextBorderStyle_obj >(HX_CSTRING("SHADOW"),1);
}


} // end namespace flixel
} // end namespace text
