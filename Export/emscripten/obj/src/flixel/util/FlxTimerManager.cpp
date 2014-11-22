#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
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
namespace flixel{
namespace util{

Void FlxTimerManager_obj::__construct()
{
HX_STACK_FRAME("flixel.util.FlxTimerManager","new",0x367f0c72,"flixel.util.FlxTimerManager.new","flixel/util/FlxTimer.hx",212,0x0a681e11)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(214)
	this->_timers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(221)
	super::__construct();
	HX_STACK_LINE(224)
	this->set_visible(false);
	HX_STACK_LINE(226)
	::flixel::FlxG_obj::signals->stateSwitched->add(this->clear_dyn());
}
;
	return null();
}

//FlxTimerManager_obj::~FlxTimerManager_obj() { }

Dynamic FlxTimerManager_obj::__CreateEmpty() { return  new FlxTimerManager_obj; }
hx::ObjectPtr< FlxTimerManager_obj > FlxTimerManager_obj::__new()
{  hx::ObjectPtr< FlxTimerManager_obj > result = new FlxTimerManager_obj();
	result->__construct();
	return result;}

Dynamic FlxTimerManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTimerManager_obj > result = new FlxTimerManager_obj();
	result->__construct();
	return result;}

Void FlxTimerManager_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.FlxTimerManager","destroy",0xb435da0c,"flixel.util.FlxTimerManager.destroy","flixel/util/FlxTimer.hx",233,0x0a681e11)
		HX_STACK_THIS(this)
		HX_STACK_LINE(234)
		::flixel::util::FlxArrayUtil_obj::clearArray_flixel_util_FlxTimer(this->_timers,null());
		HX_STACK_LINE(235)
		this->_timers = null();
		HX_STACK_LINE(236)
		::flixel::FlxG_obj::signals->stateSwitched->remove(this->clear_dyn());
		HX_STACK_LINE(237)
		this->super::destroy();
	}
return null();
}


Void FlxTimerManager_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.util.FlxTimerManager","update",0xf26da137,"flixel.util.FlxTimerManager.update","flixel/util/FlxTimer.hx",246,0x0a681e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(246)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(246)
		Array< ::Dynamic > _g1 = this->_timers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(246)
		while((true)){
			HX_STACK_LINE(246)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(246)
				break;
			}
			HX_STACK_LINE(246)
			::flixel::util::FlxTimer timer = _g1->__get(_g).StaticCast< ::flixel::util::FlxTimer >();		HX_STACK_VAR(timer,"timer");
			HX_STACK_LINE(246)
			++(_g);
			HX_STACK_LINE(248)
			if (((bool((bool(timer->active) && bool(!(timer->finished)))) && bool((timer->time >= (int)0))))){
				HX_STACK_LINE(250)
				timer->update(elapsed);
			}
		}
	}
return null();
}


Void FlxTimerManager_obj::add( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_FRAME("flixel.util.FlxTimerManager","add",0x36752e33,"flixel.util.FlxTimerManager.add","flixel/util/FlxTimer.hx",264,0x0a681e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Timer,"Timer")
		HX_STACK_LINE(264)
		this->_timers->push(Timer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTimerManager_obj,add,(void))

Void FlxTimerManager_obj::remove( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_FRAME("flixel.util.FlxTimerManager","remove",0x6ff0b772,"flixel.util.FlxTimerManager.remove","flixel/util/FlxTimer.hx",277,0x0a681e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Timer,"Timer")
		HX_STACK_LINE(277)
		Array< ::Dynamic > array = this->_timers;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(277)
		int index = array->indexOf(Timer,null());		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(277)
		if (((index != (int)-1))){
			HX_STACK_LINE(277)
			array[index] = array->__get((array->length - (int)1)).StaticCast< ::flixel::util::FlxTimer >();
			HX_STACK_LINE(277)
			array->pop().StaticCast< ::flixel::util::FlxTimer >();
			HX_STACK_LINE(277)
			array;
		}
		else{
			HX_STACK_LINE(277)
			array;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTimerManager_obj,remove,(void))

Void FlxTimerManager_obj::clear( ){
{
		HX_STACK_FRAME("flixel.util.FlxTimerManager","clear",0xccdb561f,"flixel.util.FlxTimerManager.clear","flixel/util/FlxTimer.hx",285,0x0a681e11)
		HX_STACK_THIS(this)
		HX_STACK_LINE(285)
		::flixel::util::FlxArrayUtil_obj::clearArray_flixel_util_FlxTimer(this->_timers,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimerManager_obj,clear,(void))


FlxTimerManager_obj::FlxTimerManager_obj()
{
}

void FlxTimerManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTimerManager);
	HX_MARK_MEMBER_NAME(_timers,"_timers");
	::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTimerManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_timers,"_timers");
	::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTimerManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_timers") ) { return _timers; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTimerManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_timers") ) { _timers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTimerManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_timers"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTimerManager_obj,_timers),HX_CSTRING("_timers")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_timers"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("add"),
	HX_CSTRING("remove"),
	HX_CSTRING("clear"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTimerManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTimerManager_obj::__mClass,"__mClass");
};

#endif

Class FlxTimerManager_obj::__mClass;

void FlxTimerManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxTimerManager"), hx::TCanCast< FlxTimerManager_obj> ,sStaticFields,sMemberFields,
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

void FlxTimerManager_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
