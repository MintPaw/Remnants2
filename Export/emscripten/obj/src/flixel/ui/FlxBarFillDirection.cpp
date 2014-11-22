#include <hxcpp.h>

#ifndef INCLUDED_flixel_ui_FlxBarFillDirection
#include <flixel/ui/FlxBarFillDirection.h>
#endif
namespace flixel{
namespace ui{

::flixel::ui::FlxBarFillDirection FlxBarFillDirection_obj::BOTTOM_TO_TOP;

::flixel::ui::FlxBarFillDirection FlxBarFillDirection_obj::HORIZONTAL_INSIDE_OUT;

::flixel::ui::FlxBarFillDirection FlxBarFillDirection_obj::HORIZONTAL_OUTSIDE_IN;

::flixel::ui::FlxBarFillDirection FlxBarFillDirection_obj::LEFT_TO_RIGHT;

::flixel::ui::FlxBarFillDirection FlxBarFillDirection_obj::RIGHT_TO_LEFT;

::flixel::ui::FlxBarFillDirection FlxBarFillDirection_obj::TOP_TO_BOTTOM;

::flixel::ui::FlxBarFillDirection FlxBarFillDirection_obj::VERTICAL_INSIDE_OUT;

::flixel::ui::FlxBarFillDirection FlxBarFillDirection_obj::VERTICAL_OUTSIDE_IN;

HX_DEFINE_CREATE_ENUM(FlxBarFillDirection_obj)

int FlxBarFillDirection_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("BOTTOM_TO_TOP")) return 3;
	if (inName==HX_CSTRING("HORIZONTAL_INSIDE_OUT")) return 4;
	if (inName==HX_CSTRING("HORIZONTAL_OUTSIDE_IN")) return 5;
	if (inName==HX_CSTRING("LEFT_TO_RIGHT")) return 0;
	if (inName==HX_CSTRING("RIGHT_TO_LEFT")) return 1;
	if (inName==HX_CSTRING("TOP_TO_BOTTOM")) return 2;
	if (inName==HX_CSTRING("VERTICAL_INSIDE_OUT")) return 6;
	if (inName==HX_CSTRING("VERTICAL_OUTSIDE_IN")) return 7;
	return super::__FindIndex(inName);
}

int FlxBarFillDirection_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("BOTTOM_TO_TOP")) return 0;
	if (inName==HX_CSTRING("HORIZONTAL_INSIDE_OUT")) return 0;
	if (inName==HX_CSTRING("HORIZONTAL_OUTSIDE_IN")) return 0;
	if (inName==HX_CSTRING("LEFT_TO_RIGHT")) return 0;
	if (inName==HX_CSTRING("RIGHT_TO_LEFT")) return 0;
	if (inName==HX_CSTRING("TOP_TO_BOTTOM")) return 0;
	if (inName==HX_CSTRING("VERTICAL_INSIDE_OUT")) return 0;
	if (inName==HX_CSTRING("VERTICAL_OUTSIDE_IN")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlxBarFillDirection_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("BOTTOM_TO_TOP")) return BOTTOM_TO_TOP;
	if (inName==HX_CSTRING("HORIZONTAL_INSIDE_OUT")) return HORIZONTAL_INSIDE_OUT;
	if (inName==HX_CSTRING("HORIZONTAL_OUTSIDE_IN")) return HORIZONTAL_OUTSIDE_IN;
	if (inName==HX_CSTRING("LEFT_TO_RIGHT")) return LEFT_TO_RIGHT;
	if (inName==HX_CSTRING("RIGHT_TO_LEFT")) return RIGHT_TO_LEFT;
	if (inName==HX_CSTRING("TOP_TO_BOTTOM")) return TOP_TO_BOTTOM;
	if (inName==HX_CSTRING("VERTICAL_INSIDE_OUT")) return VERTICAL_INSIDE_OUT;
	if (inName==HX_CSTRING("VERTICAL_OUTSIDE_IN")) return VERTICAL_OUTSIDE_IN;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("LEFT_TO_RIGHT"),
	HX_CSTRING("RIGHT_TO_LEFT"),
	HX_CSTRING("TOP_TO_BOTTOM"),
	HX_CSTRING("BOTTOM_TO_TOP"),
	HX_CSTRING("HORIZONTAL_INSIDE_OUT"),
	HX_CSTRING("HORIZONTAL_OUTSIDE_IN"),
	HX_CSTRING("VERTICAL_INSIDE_OUT"),
	HX_CSTRING("VERTICAL_OUTSIDE_IN"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBarFillDirection_obj::BOTTOM_TO_TOP,"BOTTOM_TO_TOP");
	HX_MARK_MEMBER_NAME(FlxBarFillDirection_obj::HORIZONTAL_INSIDE_OUT,"HORIZONTAL_INSIDE_OUT");
	HX_MARK_MEMBER_NAME(FlxBarFillDirection_obj::HORIZONTAL_OUTSIDE_IN,"HORIZONTAL_OUTSIDE_IN");
	HX_MARK_MEMBER_NAME(FlxBarFillDirection_obj::LEFT_TO_RIGHT,"LEFT_TO_RIGHT");
	HX_MARK_MEMBER_NAME(FlxBarFillDirection_obj::RIGHT_TO_LEFT,"RIGHT_TO_LEFT");
	HX_MARK_MEMBER_NAME(FlxBarFillDirection_obj::TOP_TO_BOTTOM,"TOP_TO_BOTTOM");
	HX_MARK_MEMBER_NAME(FlxBarFillDirection_obj::VERTICAL_INSIDE_OUT,"VERTICAL_INSIDE_OUT");
	HX_MARK_MEMBER_NAME(FlxBarFillDirection_obj::VERTICAL_OUTSIDE_IN,"VERTICAL_OUTSIDE_IN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBarFillDirection_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxBarFillDirection_obj::BOTTOM_TO_TOP,"BOTTOM_TO_TOP");
	HX_VISIT_MEMBER_NAME(FlxBarFillDirection_obj::HORIZONTAL_INSIDE_OUT,"HORIZONTAL_INSIDE_OUT");
	HX_VISIT_MEMBER_NAME(FlxBarFillDirection_obj::HORIZONTAL_OUTSIDE_IN,"HORIZONTAL_OUTSIDE_IN");
	HX_VISIT_MEMBER_NAME(FlxBarFillDirection_obj::LEFT_TO_RIGHT,"LEFT_TO_RIGHT");
	HX_VISIT_MEMBER_NAME(FlxBarFillDirection_obj::RIGHT_TO_LEFT,"RIGHT_TO_LEFT");
	HX_VISIT_MEMBER_NAME(FlxBarFillDirection_obj::TOP_TO_BOTTOM,"TOP_TO_BOTTOM");
	HX_VISIT_MEMBER_NAME(FlxBarFillDirection_obj::VERTICAL_INSIDE_OUT,"VERTICAL_INSIDE_OUT");
	HX_VISIT_MEMBER_NAME(FlxBarFillDirection_obj::VERTICAL_OUTSIDE_IN,"VERTICAL_OUTSIDE_IN");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class FlxBarFillDirection_obj::__mClass;

Dynamic __Create_FlxBarFillDirection_obj() { return new FlxBarFillDirection_obj; }

void FlxBarFillDirection_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.ui.FlxBarFillDirection"), hx::TCanCast< FlxBarFillDirection_obj >,sStaticFields,sMemberFields,
	&__Create_FlxBarFillDirection_obj, &__Create,
	&super::__SGetClass(), &CreateFlxBarFillDirection_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxBarFillDirection_obj::__boot()
{
hx::Static(BOTTOM_TO_TOP) = hx::CreateEnum< FlxBarFillDirection_obj >(HX_CSTRING("BOTTOM_TO_TOP"),3);
hx::Static(HORIZONTAL_INSIDE_OUT) = hx::CreateEnum< FlxBarFillDirection_obj >(HX_CSTRING("HORIZONTAL_INSIDE_OUT"),4);
hx::Static(HORIZONTAL_OUTSIDE_IN) = hx::CreateEnum< FlxBarFillDirection_obj >(HX_CSTRING("HORIZONTAL_OUTSIDE_IN"),5);
hx::Static(LEFT_TO_RIGHT) = hx::CreateEnum< FlxBarFillDirection_obj >(HX_CSTRING("LEFT_TO_RIGHT"),0);
hx::Static(RIGHT_TO_LEFT) = hx::CreateEnum< FlxBarFillDirection_obj >(HX_CSTRING("RIGHT_TO_LEFT"),1);
hx::Static(TOP_TO_BOTTOM) = hx::CreateEnum< FlxBarFillDirection_obj >(HX_CSTRING("TOP_TO_BOTTOM"),2);
hx::Static(VERTICAL_INSIDE_OUT) = hx::CreateEnum< FlxBarFillDirection_obj >(HX_CSTRING("VERTICAL_INSIDE_OUT"),6);
hx::Static(VERTICAL_OUTSIDE_IN) = hx::CreateEnum< FlxBarFillDirection_obj >(HX_CSTRING("VERTICAL_OUTSIDE_IN"),7);
}


} // end namespace flixel
} // end namespace ui
