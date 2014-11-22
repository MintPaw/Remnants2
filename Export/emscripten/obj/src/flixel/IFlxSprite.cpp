#include <hxcpp.h>

#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
namespace flixel{

HX_DEFINE_DYNAMIC_FUNC2(IFlxSprite_obj,reset,)

HX_DEFINE_DYNAMIC_FUNC2(IFlxSprite_obj,setPosition,)


static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("alpha"),
	HX_CSTRING("angle"),
	HX_CSTRING("facing"),
	HX_CSTRING("moves"),
	HX_CSTRING("immovable"),
	HX_CSTRING("offset"),
	HX_CSTRING("origin"),
	HX_CSTRING("scale"),
	HX_CSTRING("velocity"),
	HX_CSTRING("maxVelocity"),
	HX_CSTRING("acceleration"),
	HX_CSTRING("drag"),
	HX_CSTRING("scrollFactor"),
	HX_CSTRING("reset"),
	HX_CSTRING("setPosition"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxSprite_obj::__mClass,"__mClass");
};

#endif

Class IFlxSprite_obj::__mClass;

void IFlxSprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.IFlxSprite"), hx::TCanCast< IFlxSprite_obj> ,0,sMemberFields,
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

void IFlxSprite_obj::__boot()
{
}

} // end namespace flixel
