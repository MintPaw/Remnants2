#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_ui_Rounding
#include <flixel/addons/ui/Rounding.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

::flixel::addons::ui::Rounding Rounding_obj::Ceil;

::flixel::addons::ui::Rounding Rounding_obj::Floor;

::flixel::addons::ui::Rounding Rounding_obj::None;

::flixel::addons::ui::Rounding Rounding_obj::Round;

HX_DEFINE_CREATE_ENUM(Rounding_obj)

int Rounding_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("Ceil")) return 1;
	if (inName==HX_CSTRING("Floor")) return 0;
	if (inName==HX_CSTRING("None")) return 3;
	if (inName==HX_CSTRING("Round")) return 2;
	return super::__FindIndex(inName);
}

int Rounding_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("Ceil")) return 0;
	if (inName==HX_CSTRING("Floor")) return 0;
	if (inName==HX_CSTRING("None")) return 0;
	if (inName==HX_CSTRING("Round")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Rounding_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("Ceil")) return Ceil;
	if (inName==HX_CSTRING("Floor")) return Floor;
	if (inName==HX_CSTRING("None")) return None;
	if (inName==HX_CSTRING("Round")) return Round;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Floor"),
	HX_CSTRING("Ceil"),
	HX_CSTRING("Round"),
	HX_CSTRING("None"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rounding_obj::Ceil,"Ceil");
	HX_MARK_MEMBER_NAME(Rounding_obj::Floor,"Floor");
	HX_MARK_MEMBER_NAME(Rounding_obj::None,"None");
	HX_MARK_MEMBER_NAME(Rounding_obj::Round,"Round");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rounding_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Rounding_obj::Ceil,"Ceil");
	HX_VISIT_MEMBER_NAME(Rounding_obj::Floor,"Floor");
	HX_VISIT_MEMBER_NAME(Rounding_obj::None,"None");
	HX_VISIT_MEMBER_NAME(Rounding_obj::Round,"Round");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Rounding_obj::__mClass;

Dynamic __Create_Rounding_obj() { return new Rounding_obj; }

void Rounding_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.Rounding"), hx::TCanCast< Rounding_obj >,sStaticFields,sMemberFields,
	&__Create_Rounding_obj, &__Create,
	&super::__SGetClass(), &CreateRounding_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Rounding_obj::__boot()
{
hx::Static(Ceil) = hx::CreateEnum< Rounding_obj >(HX_CSTRING("Ceil"),1);
hx::Static(Floor) = hx::CreateEnum< Rounding_obj >(HX_CSTRING("Floor"),0);
hx::Static(None) = hx::CreateEnum< Rounding_obj >(HX_CSTRING("None"),3);
hx::Static(Round) = hx::CreateEnum< Rounding_obj >(HX_CSTRING("Round"),2);
}


} // end namespace flixel
} // end namespace addons
} // end namespace ui
