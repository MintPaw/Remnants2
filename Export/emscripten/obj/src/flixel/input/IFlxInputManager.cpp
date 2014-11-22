#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace input{

HX_DEFINE_DYNAMIC_FUNC0(IFlxInputManager_obj,reset,)

HX_DEFINE_DYNAMIC_FUNC0(IFlxInputManager_obj,update,)

HX_DEFINE_DYNAMIC_FUNC0(IFlxInputManager_obj,onFocus,)

HX_DEFINE_DYNAMIC_FUNC0(IFlxInputManager_obj,onFocusLost,)


static ::String sMemberFields[] = {
	HX_CSTRING("reset"),
	HX_CSTRING("update"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("onFocusLost"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxInputManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxInputManager_obj::__mClass,"__mClass");
};

#endif

Class IFlxInputManager_obj::__mClass;

void IFlxInputManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.IFlxInputManager"), hx::TCanCast< IFlxInputManager_obj> ,0,sMemberFields,
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

void IFlxInputManager_obj::__boot()
{
}

} // end namespace flixel
} // end namespace input
