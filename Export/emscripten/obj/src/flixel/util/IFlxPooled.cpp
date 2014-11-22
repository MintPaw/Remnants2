#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
namespace flixel{
namespace util{

HX_DEFINE_DYNAMIC_FUNC0(IFlxPooled_obj,put,)


static ::String sMemberFields[] = {
	HX_CSTRING("put"),
	HX_CSTRING("_inPool"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxPooled_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxPooled_obj::__mClass,"__mClass");
};

#endif

Class IFlxPooled_obj::__mClass;

void IFlxPooled_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.IFlxPooled"), hx::TCanCast< IFlxPooled_obj> ,0,sMemberFields,
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

void IFlxPooled_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
