#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace util{

Void FlxTimer_obj::__construct(Dynamic Time,Dynamic OnComplete,hx::Null< int >  __o_Loops)
{
HX_STACK_FRAME("flixel.util.FlxTimer","new",0xb89241df,"flixel.util.FlxTimer.new","flixel/util/FlxTimer.hx",13,0x0a681e11)
HX_STACK_THIS(this)
HX_STACK_ARG(Time,"Time")
HX_STACK_ARG(OnComplete,"OnComplete")
HX_STACK_ARG(__o_Loops,"Loops")
int Loops = __o_Loops.Default(1);
{
	HX_STACK_LINE(68)
	this->_inManager = false;
	HX_STACK_LINE(66)
	this->_loopsCounter = (int)0;
	HX_STACK_LINE(62)
	this->_timeCounter = (int)0;
	HX_STACK_LINE(32)
	this->finished = false;
	HX_STACK_LINE(28)
	this->active = false;
	HX_STACK_LINE(24)
	this->loops = (int)0;
	HX_STACK_LINE(20)
	this->time = (int)0;
	HX_STACK_LINE(80)
	if (((Time != null()))){
		HX_STACK_LINE(82)
		this->start(Time,OnComplete,Loops);
	}
}
;
	return null();
}

//FlxTimer_obj::~FlxTimer_obj() { }

Dynamic FlxTimer_obj::__CreateEmpty() { return  new FlxTimer_obj; }
hx::ObjectPtr< FlxTimer_obj > FlxTimer_obj::__new(Dynamic Time,Dynamic OnComplete,hx::Null< int >  __o_Loops)
{  hx::ObjectPtr< FlxTimer_obj > result = new FlxTimer_obj();
	result->__construct(Time,OnComplete,__o_Loops);
	return result;}

Dynamic FlxTimer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTimer_obj > result = new FlxTimer_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *FlxTimer_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

Void FlxTimer_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.FlxTimer","destroy",0x3b34c9f9,"flixel.util.FlxTimer.destroy","flixel/util/FlxTimer.hx",91,0x0a681e11)
		HX_STACK_THIS(this)
		HX_STACK_LINE(91)
		this->onComplete = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,destroy,(void))

::flixel::util::FlxTimer FlxTimer_obj::start( hx::Null< Float >  __o_Time,Dynamic OnComplete,hx::Null< int >  __o_Loops){
Float Time = __o_Time.Default(1);
int Loops = __o_Loops.Default(1);
	HX_STACK_FRAME("flixel.util.FlxTimer","start",0x9de883a1,"flixel.util.FlxTimer.start","flixel/util/FlxTimer.hx",104,0x0a681e11)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Time,"Time")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Loops,"Loops")
{
		HX_STACK_LINE(105)
		if (((bool((::flixel::util::FlxTimer_obj::manager != null())) && bool(!(this->_inManager))))){
			HX_STACK_LINE(107)
			::flixel::util::FlxTimer_obj::manager->add(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(108)
			this->_inManager = true;
		}
		HX_STACK_LINE(111)
		this->active = true;
		HX_STACK_LINE(112)
		this->finished = false;
		HX_STACK_LINE(113)
		Float _g = ::Math_obj::abs(Time);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(113)
		this->time = _g;
		HX_STACK_LINE(115)
		if (((Loops < (int)0))){
			HX_STACK_LINE(117)
			hx::MultEq(Loops,(int)-1);
		}
		HX_STACK_LINE(120)
		this->loops = Loops;
		HX_STACK_LINE(121)
		this->onComplete = OnComplete;
		HX_STACK_LINE(122)
		this->_timeCounter = (int)0;
		HX_STACK_LINE(123)
		this->_loopsCounter = (int)0;
		HX_STACK_LINE(124)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTimer_obj,start,return )

::flixel::util::FlxTimer FlxTimer_obj::reset( hx::Null< Float >  __o_NewTime){
Float NewTime = __o_NewTime.Default(-1);
	HX_STACK_FRAME("flixel.util.FlxTimer","reset",0x00a5590e,"flixel.util.FlxTimer.reset","flixel/util/FlxTimer.hx",132,0x0a681e11)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewTime,"NewTime")
{
		HX_STACK_LINE(133)
		if (((NewTime < (int)0))){
			HX_STACK_LINE(135)
			NewTime = this->time;
		}
		HX_STACK_LINE(137)
		this->start(NewTime,this->onComplete_dyn(),this->loops);
		HX_STACK_LINE(138)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTimer_obj,reset,return )

Void FlxTimer_obj::cancel( ){
{
		HX_STACK_FRAME("flixel.util.FlxTimer","cancel",0x3fc4355b,"flixel.util.FlxTimer.cancel","flixel/util/FlxTimer.hx",145,0x0a681e11)
		HX_STACK_THIS(this)
		HX_STACK_LINE(146)
		this->finished = true;
		HX_STACK_LINE(147)
		this->active = false;
		HX_STACK_LINE(149)
		if (((bool((::flixel::util::FlxTimer_obj::manager != null())) && bool(this->_inManager)))){
			HX_STACK_LINE(151)
			::flixel::util::FlxTimer_obj::manager->remove(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(152)
			this->_inManager = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,cancel,(void))

Void FlxTimer_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.util.FlxTimer","update",0x0e95cdea,"flixel.util.FlxTimer.update","flixel/util/FlxTimer.hx",163,0x0a681e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(164)
		hx::AddEq(this->_timeCounter,elapsed);
		HX_STACK_LINE(166)
		while((true)){
			HX_STACK_LINE(166)
			if ((!(((bool((bool((this->_timeCounter >= this->time)) && bool(this->active))) && bool(!(this->finished))))))){
				HX_STACK_LINE(166)
				break;
			}
			HX_STACK_LINE(168)
			hx::SubEq(this->_timeCounter,this->time);
			HX_STACK_LINE(169)
			(this->_loopsCounter)++;
			HX_STACK_LINE(171)
			if (((this->onComplete_dyn() != null()))){
				HX_STACK_LINE(173)
				this->onComplete(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(176)
			if (((bool((this->loops > (int)0)) && bool((this->_loopsCounter >= this->loops))))){
				HX_STACK_LINE(178)
				this->cancel();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTimer_obj,update,(void))

Float FlxTimer_obj::get_timeLeft( ){
	HX_STACK_FRAME("flixel.util.FlxTimer","get_timeLeft",0x3108255e,"flixel.util.FlxTimer.get_timeLeft","flixel/util/FlxTimer.hx",185,0x0a681e11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(185)
	return (this->time - this->_timeCounter);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,get_timeLeft,return )

Float FlxTimer_obj::get_elapsedTime( ){
	HX_STACK_FRAME("flixel.util.FlxTimer","get_elapsedTime",0x36d149ff,"flixel.util.FlxTimer.get_elapsedTime","flixel/util/FlxTimer.hx",190,0x0a681e11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(190)
	return this->_timeCounter;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,get_elapsedTime,return )

int FlxTimer_obj::get_loopsLeft( ){
	HX_STACK_FRAME("flixel.util.FlxTimer","get_loopsLeft",0x92ed534c,"flixel.util.FlxTimer.get_loopsLeft","flixel/util/FlxTimer.hx",195,0x0a681e11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(195)
	return (this->loops - this->_loopsCounter);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,get_loopsLeft,return )

int FlxTimer_obj::get_elapsedLoops( ){
	HX_STACK_FRAME("flixel.util.FlxTimer","get_elapsedLoops",0x2913a75d,"flixel.util.FlxTimer.get_elapsedLoops","flixel/util/FlxTimer.hx",200,0x0a681e11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(200)
	return this->_loopsCounter;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,get_elapsedLoops,return )

Float FlxTimer_obj::get_progress( ){
	HX_STACK_FRAME("flixel.util.FlxTimer","get_progress",0xcf219257,"flixel.util.FlxTimer.get_progress","flixel/util/FlxTimer.hx",205,0x0a681e11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(205)
	if (((this->time > (int)0))){
		HX_STACK_LINE(205)
		return (Float(this->_timeCounter) / Float(this->time));
	}
	else{
		HX_STACK_LINE(205)
		return (int)0;
	}
	HX_STACK_LINE(205)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,get_progress,return )

::flixel::util::FlxTimerManager FlxTimer_obj::manager;


FlxTimer_obj::FlxTimer_obj()
{
}

void FlxTimer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTimer);
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(loops,"loops");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(_timeCounter,"_timeCounter");
	HX_MARK_MEMBER_NAME(_loopsCounter,"_loopsCounter");
	HX_MARK_MEMBER_NAME(_inManager,"_inManager");
	HX_MARK_END_CLASS();
}

void FlxTimer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(loops,"loops");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(_timeCounter,"_timeCounter");
	HX_VISIT_MEMBER_NAME(_loopsCounter,"_loopsCounter");
	HX_VISIT_MEMBER_NAME(_inManager,"_inManager");
}

Dynamic FlxTimer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { return loops; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return manager; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { return finished; }
		if (HX_FIELD_EQ(inName,"timeLeft") ) { return get_timeLeft(); }
		if (HX_FIELD_EQ(inName,"progress") ) { return get_progress(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loopsLeft") ) { return get_loopsLeft(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		if (HX_FIELD_EQ(inName,"_inManager") ) { return _inManager; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"elapsedTime") ) { return get_elapsedTime(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"elapsedLoops") ) { return get_elapsedLoops(); }
		if (HX_FIELD_EQ(inName,"_timeCounter") ) { return _timeCounter; }
		if (HX_FIELD_EQ(inName,"get_timeLeft") ) { return get_timeLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"get_progress") ) { return get_progress_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_loopsCounter") ) { return _loopsCounter; }
		if (HX_FIELD_EQ(inName,"get_loopsLeft") ) { return get_loopsLeft_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_elapsedTime") ) { return get_elapsedTime_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_elapsedLoops") ) { return get_elapsedLoops_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTimer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { loops=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::flixel::util::FlxTimerManager >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inManager") ) { _inManager=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_timeCounter") ) { _timeCounter=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_loopsCounter") ) { _loopsCounter=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTimer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("time"));
	outFields->push(HX_CSTRING("loops"));
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("finished"));
	outFields->push(HX_CSTRING("timeLeft"));
	outFields->push(HX_CSTRING("elapsedTime"));
	outFields->push(HX_CSTRING("loopsLeft"));
	outFields->push(HX_CSTRING("elapsedLoops"));
	outFields->push(HX_CSTRING("progress"));
	outFields->push(HX_CSTRING("_timeCounter"));
	outFields->push(HX_CSTRING("_loopsCounter"));
	outFields->push(HX_CSTRING("_inManager"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("manager"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxTimer_obj,time),HX_CSTRING("time")},
	{hx::fsInt,(int)offsetof(FlxTimer_obj,loops),HX_CSTRING("loops")},
	{hx::fsBool,(int)offsetof(FlxTimer_obj,active),HX_CSTRING("active")},
	{hx::fsBool,(int)offsetof(FlxTimer_obj,finished),HX_CSTRING("finished")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTimer_obj,onComplete),HX_CSTRING("onComplete")},
	{hx::fsFloat,(int)offsetof(FlxTimer_obj,_timeCounter),HX_CSTRING("_timeCounter")},
	{hx::fsInt,(int)offsetof(FlxTimer_obj,_loopsCounter),HX_CSTRING("_loopsCounter")},
	{hx::fsBool,(int)offsetof(FlxTimer_obj,_inManager),HX_CSTRING("_inManager")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("time"),
	HX_CSTRING("loops"),
	HX_CSTRING("active"),
	HX_CSTRING("finished"),
	HX_CSTRING("onComplete"),
	HX_CSTRING("_timeCounter"),
	HX_CSTRING("_loopsCounter"),
	HX_CSTRING("_inManager"),
	HX_CSTRING("destroy"),
	HX_CSTRING("start"),
	HX_CSTRING("reset"),
	HX_CSTRING("cancel"),
	HX_CSTRING("update"),
	HX_CSTRING("get_timeLeft"),
	HX_CSTRING("get_elapsedTime"),
	HX_CSTRING("get_loopsLeft"),
	HX_CSTRING("get_elapsedLoops"),
	HX_CSTRING("get_progress"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTimer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTimer_obj::manager,"manager");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTimer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTimer_obj::manager,"manager");
};

#endif

Class FlxTimer_obj::__mClass;

void FlxTimer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxTimer"), hx::TCanCast< FlxTimer_obj> ,sStaticFields,sMemberFields,
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

void FlxTimer_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
