#include <hxcpp.h>

#ifndef INCLUDED_flixel_graphics_frames_FlxFrameCollectionType
#include <flixel/graphics/frames/FlxFrameCollectionType.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBarFillDirection
#include <flixel/ui/FlxBarFillDirection.h>
#endif
namespace flixel{
namespace graphics{
namespace frames{

::flixel::graphics::frames::FlxFrameCollectionType FlxFrameCollectionType_obj::ATLAS;

::flixel::graphics::frames::FlxFrameCollectionType  FlxFrameCollectionType_obj::BAR(::flixel::ui::FlxBarFillDirection type)
	{ return hx::CreateEnum< FlxFrameCollectionType_obj >(HX_CSTRING("BAR"),4,hx::DynamicArray(0,1).Add(type)); }

::flixel::graphics::frames::FlxFrameCollectionType FlxFrameCollectionType_obj::CLIPPED;

::flixel::graphics::frames::FlxFrameCollectionType FlxFrameCollectionType_obj::FILTER;

::flixel::graphics::frames::FlxFrameCollectionType FlxFrameCollectionType_obj::FONT;

::flixel::graphics::frames::FlxFrameCollectionType FlxFrameCollectionType_obj::IMAGE;

::flixel::graphics::frames::FlxFrameCollectionType FlxFrameCollectionType_obj::TILES;

::flixel::graphics::frames::FlxFrameCollectionType  FlxFrameCollectionType_obj::USER(::String type)
	{ return hx::CreateEnum< FlxFrameCollectionType_obj >(HX_CSTRING("USER"),6,hx::DynamicArray(0,1).Add(type)); }

HX_DEFINE_CREATE_ENUM(FlxFrameCollectionType_obj)

int FlxFrameCollectionType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("ATLAS")) return 2;
	if (inName==HX_CSTRING("BAR")) return 4;
	if (inName==HX_CSTRING("CLIPPED")) return 5;
	if (inName==HX_CSTRING("FILTER")) return 7;
	if (inName==HX_CSTRING("FONT")) return 3;
	if (inName==HX_CSTRING("IMAGE")) return 0;
	if (inName==HX_CSTRING("TILES")) return 1;
	if (inName==HX_CSTRING("USER")) return 6;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxFrameCollectionType_obj,BAR,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxFrameCollectionType_obj,USER,return)

int FlxFrameCollectionType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("ATLAS")) return 0;
	if (inName==HX_CSTRING("BAR")) return 1;
	if (inName==HX_CSTRING("CLIPPED")) return 0;
	if (inName==HX_CSTRING("FILTER")) return 0;
	if (inName==HX_CSTRING("FONT")) return 0;
	if (inName==HX_CSTRING("IMAGE")) return 0;
	if (inName==HX_CSTRING("TILES")) return 0;
	if (inName==HX_CSTRING("USER")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic FlxFrameCollectionType_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("ATLAS")) return ATLAS;
	if (inName==HX_CSTRING("BAR")) return BAR_dyn();
	if (inName==HX_CSTRING("CLIPPED")) return CLIPPED;
	if (inName==HX_CSTRING("FILTER")) return FILTER;
	if (inName==HX_CSTRING("FONT")) return FONT;
	if (inName==HX_CSTRING("IMAGE")) return IMAGE;
	if (inName==HX_CSTRING("TILES")) return TILES;
	if (inName==HX_CSTRING("USER")) return USER_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("IMAGE"),
	HX_CSTRING("TILES"),
	HX_CSTRING("ATLAS"),
	HX_CSTRING("FONT"),
	HX_CSTRING("BAR"),
	HX_CSTRING("CLIPPED"),
	HX_CSTRING("USER"),
	HX_CSTRING("FILTER"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxFrameCollectionType_obj::ATLAS,"ATLAS");
	HX_MARK_MEMBER_NAME(FlxFrameCollectionType_obj::CLIPPED,"CLIPPED");
	HX_MARK_MEMBER_NAME(FlxFrameCollectionType_obj::FILTER,"FILTER");
	HX_MARK_MEMBER_NAME(FlxFrameCollectionType_obj::FONT,"FONT");
	HX_MARK_MEMBER_NAME(FlxFrameCollectionType_obj::IMAGE,"IMAGE");
	HX_MARK_MEMBER_NAME(FlxFrameCollectionType_obj::TILES,"TILES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxFrameCollectionType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxFrameCollectionType_obj::ATLAS,"ATLAS");
	HX_VISIT_MEMBER_NAME(FlxFrameCollectionType_obj::CLIPPED,"CLIPPED");
	HX_VISIT_MEMBER_NAME(FlxFrameCollectionType_obj::FILTER,"FILTER");
	HX_VISIT_MEMBER_NAME(FlxFrameCollectionType_obj::FONT,"FONT");
	HX_VISIT_MEMBER_NAME(FlxFrameCollectionType_obj::IMAGE,"IMAGE");
	HX_VISIT_MEMBER_NAME(FlxFrameCollectionType_obj::TILES,"TILES");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class FlxFrameCollectionType_obj::__mClass;

Dynamic __Create_FlxFrameCollectionType_obj() { return new FlxFrameCollectionType_obj; }

void FlxFrameCollectionType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.graphics.frames.FlxFrameCollectionType"), hx::TCanCast< FlxFrameCollectionType_obj >,sStaticFields,sMemberFields,
	&__Create_FlxFrameCollectionType_obj, &__Create,
	&super::__SGetClass(), &CreateFlxFrameCollectionType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxFrameCollectionType_obj::__boot()
{
hx::Static(ATLAS) = hx::CreateEnum< FlxFrameCollectionType_obj >(HX_CSTRING("ATLAS"),2);
hx::Static(CLIPPED) = hx::CreateEnum< FlxFrameCollectionType_obj >(HX_CSTRING("CLIPPED"),5);
hx::Static(FILTER) = hx::CreateEnum< FlxFrameCollectionType_obj >(HX_CSTRING("FILTER"),7);
hx::Static(FONT) = hx::CreateEnum< FlxFrameCollectionType_obj >(HX_CSTRING("FONT"),3);
hx::Static(IMAGE) = hx::CreateEnum< FlxFrameCollectionType_obj >(HX_CSTRING("IMAGE"),0);
hx::Static(TILES) = hx::CreateEnum< FlxFrameCollectionType_obj >(HX_CSTRING("TILES"),1);
}


} // end namespace flixel
} // end namespace graphics
} // end namespace frames
