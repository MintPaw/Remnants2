#include <hxcpp.h>

#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{

HX_DEFINE_DYNAMIC_FUNC4(IEventGetter_obj,getEvent,)

HX_DEFINE_DYNAMIC_FUNC4(IEventGetter_obj,getRequest,return )


static ::String sMemberFields[] = {
	HX_CSTRING("getEvent"),
	HX_CSTRING("getRequest"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IEventGetter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IEventGetter_obj::__mClass,"__mClass");
};

#endif

Class IEventGetter_obj::__mClass;

void IEventGetter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.interfaces.IEventGetter"), hx::TCanCast< IEventGetter_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void IEventGetter_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces
