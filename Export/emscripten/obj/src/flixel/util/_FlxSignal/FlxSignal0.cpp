#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalHandler
#include <flixel/util/_FlxSignal/FlxSignalHandler.h>
#endif
namespace flixel{
namespace util{
namespace _FlxSignal{

Void FlxSignal0_obj::__construct()
{
HX_STACK_FRAME("flixel.util._FlxSignal.FlxSignal0","new",0x845f8fe1,"flixel.util._FlxSignal.FlxSignal0.new","flixel/util/FlxSignal.hx",195,0x3c758c5e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(196)
	super::__construct();
	HX_STACK_LINE(197)
	this->dispatch = this->dispatch0_dyn();
}
;
	return null();
}

//FlxSignal0_obj::~FlxSignal0_obj() { }

Dynamic FlxSignal0_obj::__CreateEmpty() { return  new FlxSignal0_obj; }
hx::ObjectPtr< FlxSignal0_obj > FlxSignal0_obj::__new()
{  hx::ObjectPtr< FlxSignal0_obj > result = new FlxSignal0_obj();
	result->__construct();
	return result;}

Dynamic FlxSignal0_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSignal0_obj > result = new FlxSignal0_obj();
	result->__construct();
	return result;}

Void FlxSignal0_obj::dispatch0( ){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxSignal0","dispatch0",0x8f26ea77,"flixel.util._FlxSignal.FlxSignal0.dispatch0","flixel/util/FlxSignal.hx",280,0x3c758c5e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(280)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(280)
		Array< ::Dynamic > _g1 = this->_handlers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(280)
		while((true)){
			HX_STACK_LINE(280)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(280)
				break;
			}
			HX_STACK_LINE(280)
			::flixel::util::_FlxSignal::FlxSignalHandler handler = _g1->__get(_g).StaticCast< ::flixel::util::_FlxSignal::FlxSignalHandler >();		HX_STACK_VAR(handler,"handler");
			HX_STACK_LINE(280)
			++(_g);
			HX_STACK_LINE(282)
			handler->listener();
			HX_STACK_LINE(284)
			if ((handler->dispatchOnce)){
				HX_STACK_LINE(285)
				this->remove(handler->listener);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSignal0_obj,dispatch0,(void))


FlxSignal0_obj::FlxSignal0_obj()
{
}

Dynamic FlxSignal0_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"dispatch0") ) { return dispatch0_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSignal0_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSignal0_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("dispatch0"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSignal0_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSignal0_obj::__mClass,"__mClass");
};

#endif

Class FlxSignal0_obj::__mClass;

void FlxSignal0_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util._FlxSignal.FlxSignal0"), hx::TCanCast< FlxSignal0_obj> ,sStaticFields,sMemberFields,
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

void FlxSignal0_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal
