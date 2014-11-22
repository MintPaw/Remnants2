#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
namespace flixel{
namespace util{

Void FlxDestroyUtil_obj::__construct()
{
	return null();
}

//FlxDestroyUtil_obj::~FlxDestroyUtil_obj() { }

Dynamic FlxDestroyUtil_obj::__CreateEmpty() { return  new FlxDestroyUtil_obj; }
hx::ObjectPtr< FlxDestroyUtil_obj > FlxDestroyUtil_obj::__new()
{  hx::ObjectPtr< FlxDestroyUtil_obj > result = new FlxDestroyUtil_obj();
	result->__construct();
	return result;}

Dynamic FlxDestroyUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxDestroyUtil_obj > result = new FlxDestroyUtil_obj();
	result->__construct();
	return result;}

Dynamic FlxDestroyUtil_obj::destroy( ::flixel::util::IFlxDestroyable object){
	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","destroy",0xd7e4dd50,"flixel.util.FlxDestroyUtil.destroy","flixel/util/FlxDestroyUtil.hx",17,0xaf22421a)
	HX_STACK_ARG(object,"object")
	HX_STACK_LINE(18)
	if (((object != null()))){
		HX_STACK_LINE(20)
		object->destroy();
	}
	HX_STACK_LINE(22)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,destroy,return )

Dynamic FlxDestroyUtil_obj::destroyArray( Dynamic array){
	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","destroyArray",0xa1a3be29,"flixel.util.FlxDestroyUtil.destroyArray","flixel/util/FlxDestroyUtil.hx",32,0xaf22421a)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(33)
	if (((array != null()))){
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(35)
			while((true)){
				HX_STACK_LINE(35)
				if ((!(((_g < array->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(35)
					break;
				}
				HX_STACK_LINE(35)
				Dynamic e = array->__GetItem(_g);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(35)
				++(_g);
				HX_STACK_LINE(35)
				::flixel::util::FlxDestroyUtil_obj::destroy(e);
			}
		}
		HX_STACK_LINE(36)
		array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
	}
	HX_STACK_LINE(38)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,destroyArray,return )

Dynamic FlxDestroyUtil_obj::put( ::flixel::util::IFlxPooled object){
	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","put",0xdd93b025,"flixel.util.FlxDestroyUtil.put","flixel/util/FlxDestroyUtil.hx",48,0xaf22421a)
	HX_STACK_ARG(object,"object")
	HX_STACK_LINE(49)
	if (((object != null()))){
		HX_STACK_LINE(51)
		object->put();
	}
	HX_STACK_LINE(53)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,put,return )

Dynamic FlxDestroyUtil_obj::putArray( Dynamic array){
	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","putArray",0x60ff8734,"flixel.util.FlxDestroyUtil.putArray","flixel/util/FlxDestroyUtil.hx",64,0xaf22421a)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(65)
	if (((array != null()))){
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(67)
			while((true)){
				HX_STACK_LINE(67)
				if ((!(((_g < array->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(67)
					break;
				}
				HX_STACK_LINE(67)
				Dynamic e = array->__GetItem(_g);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(67)
				++(_g);
				HX_STACK_LINE(67)
				::flixel::util::FlxDestroyUtil_obj::put(e);
			}
		}
		HX_STACK_LINE(68)
		array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
	}
	HX_STACK_LINE(70)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,putArray,return )

::openfl::_v2::display::BitmapData FlxDestroyUtil_obj::dispose( ::openfl::_v2::display::BitmapData bitmapData){
	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","dispose",0x6eab30f5,"flixel.util.FlxDestroyUtil.dispose","flixel/util/FlxDestroyUtil.hx",81,0xaf22421a)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_LINE(82)
	if (((bitmapData != null()))){
		HX_STACK_LINE(84)
		bitmapData->dispose();
	}
	HX_STACK_LINE(86)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDestroyUtil_obj,dispose,return )

Dynamic FlxDestroyUtil_obj::removeChild( ::openfl::_v2::display::DisplayObjectContainer parent,Dynamic child){
	HX_STACK_FRAME("flixel.util.FlxDestroyUtil","removeChild",0x08da1a0e,"flixel.util.FlxDestroyUtil.removeChild","flixel/util/FlxDestroyUtil.hx",90,0xaf22421a)
	HX_STACK_ARG(parent,"parent")
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(91)
	if (((  (((bool((parent != null())) && bool((child != null()))))) ? bool(parent->contains(child)) : bool(false) ))){
		HX_STACK_LINE(93)
		parent->removeChild(child);
	}
	HX_STACK_LINE(95)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxDestroyUtil_obj,removeChild,return )


FlxDestroyUtil_obj::FlxDestroyUtil_obj()
{
}

Dynamic FlxDestroyUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"put") ) { return put_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"putArray") ) { return putArray_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"destroyArray") ) { return destroyArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxDestroyUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxDestroyUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("destroy"),
	HX_CSTRING("destroyArray"),
	HX_CSTRING("put"),
	HX_CSTRING("putArray"),
	HX_CSTRING("dispose"),
	HX_CSTRING("removeChild"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDestroyUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDestroyUtil_obj::__mClass,"__mClass");
};

#endif

Class FlxDestroyUtil_obj::__mClass;

void FlxDestroyUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxDestroyUtil"), hx::TCanCast< FlxDestroyUtil_obj> ,sStaticFields,sMemberFields,
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

void FlxDestroyUtil_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
