#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
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
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal2
#include <flixel/util/_FlxSignal/FlxSignal2.h>
#endif
namespace flixel{
namespace system{
namespace frontEnds{

Void SignalFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.SignalFrontEnd","new",0xa84da1e6,"flixel.system.frontEnds.SignalFrontEnd.new","flixel/system/frontEnds/SignalFrontEnd.hx",6,0x6eb9cd09)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(28)
	this->focusLost = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();
	HX_STACK_LINE(27)
	this->focusGained = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();
	HX_STACK_LINE(26)
	this->postDraw = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();
	HX_STACK_LINE(25)
	this->preDraw = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();
	HX_STACK_LINE(24)
	this->postUpdate = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();
	HX_STACK_LINE(23)
	this->preUpdate = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();
	HX_STACK_LINE(22)
	this->gameStarted = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();
	HX_STACK_LINE(18)
	this->postGameReset = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();
	HX_STACK_LINE(17)
	this->preGameReset = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();
	HX_STACK_LINE(16)
	this->gameResized = ::flixel::util::_FlxSignal::FlxSignal2_obj::__new();
	HX_STACK_LINE(11)
	this->stateSwitched = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();
}
;
	return null();
}

//SignalFrontEnd_obj::~SignalFrontEnd_obj() { }

Dynamic SignalFrontEnd_obj::__CreateEmpty() { return  new SignalFrontEnd_obj; }
hx::ObjectPtr< SignalFrontEnd_obj > SignalFrontEnd_obj::__new()
{  hx::ObjectPtr< SignalFrontEnd_obj > result = new SignalFrontEnd_obj();
	result->__construct();
	return result;}

Dynamic SignalFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SignalFrontEnd_obj > result = new SignalFrontEnd_obj();
	result->__construct();
	return result;}


SignalFrontEnd_obj::SignalFrontEnd_obj()
{
}

void SignalFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SignalFrontEnd);
	HX_MARK_MEMBER_NAME(stateSwitched,"stateSwitched");
	HX_MARK_MEMBER_NAME(gameResized,"gameResized");
	HX_MARK_MEMBER_NAME(preGameReset,"preGameReset");
	HX_MARK_MEMBER_NAME(postGameReset,"postGameReset");
	HX_MARK_MEMBER_NAME(gameStarted,"gameStarted");
	HX_MARK_MEMBER_NAME(preUpdate,"preUpdate");
	HX_MARK_MEMBER_NAME(postUpdate,"postUpdate");
	HX_MARK_MEMBER_NAME(preDraw,"preDraw");
	HX_MARK_MEMBER_NAME(postDraw,"postDraw");
	HX_MARK_MEMBER_NAME(focusGained,"focusGained");
	HX_MARK_MEMBER_NAME(focusLost,"focusLost");
	HX_MARK_END_CLASS();
}

void SignalFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stateSwitched,"stateSwitched");
	HX_VISIT_MEMBER_NAME(gameResized,"gameResized");
	HX_VISIT_MEMBER_NAME(preGameReset,"preGameReset");
	HX_VISIT_MEMBER_NAME(postGameReset,"postGameReset");
	HX_VISIT_MEMBER_NAME(gameStarted,"gameStarted");
	HX_VISIT_MEMBER_NAME(preUpdate,"preUpdate");
	HX_VISIT_MEMBER_NAME(postUpdate,"postUpdate");
	HX_VISIT_MEMBER_NAME(preDraw,"preDraw");
	HX_VISIT_MEMBER_NAME(postDraw,"postDraw");
	HX_VISIT_MEMBER_NAME(focusGained,"focusGained");
	HX_VISIT_MEMBER_NAME(focusLost,"focusLost");
}

Dynamic SignalFrontEnd_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"preDraw") ) { return preDraw; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"postDraw") ) { return postDraw; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"preUpdate") ) { return preUpdate; }
		if (HX_FIELD_EQ(inName,"focusLost") ) { return focusLost; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"postUpdate") ) { return postUpdate; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"gameResized") ) { return gameResized; }
		if (HX_FIELD_EQ(inName,"gameStarted") ) { return gameStarted; }
		if (HX_FIELD_EQ(inName,"focusGained") ) { return focusGained; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"preGameReset") ) { return preGameReset; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stateSwitched") ) { return stateSwitched; }
		if (HX_FIELD_EQ(inName,"postGameReset") ) { return postGameReset; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SignalFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"preDraw") ) { preDraw=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"postDraw") ) { postDraw=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"preUpdate") ) { preUpdate=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"focusLost") ) { focusLost=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"postUpdate") ) { postUpdate=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"gameResized") ) { gameResized=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gameStarted") ) { gameStarted=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"focusGained") ) { focusGained=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"preGameReset") ) { preGameReset=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stateSwitched") ) { stateSwitched=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"postGameReset") ) { postGameReset=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SignalFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("stateSwitched"));
	outFields->push(HX_CSTRING("gameResized"));
	outFields->push(HX_CSTRING("preGameReset"));
	outFields->push(HX_CSTRING("postGameReset"));
	outFields->push(HX_CSTRING("gameStarted"));
	outFields->push(HX_CSTRING("preUpdate"));
	outFields->push(HX_CSTRING("postUpdate"));
	outFields->push(HX_CSTRING("preDraw"));
	outFields->push(HX_CSTRING("postDraw"));
	outFields->push(HX_CSTRING("focusGained"));
	outFields->push(HX_CSTRING("focusLost"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,stateSwitched),HX_CSTRING("stateSwitched")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal2*/ ,(int)offsetof(SignalFrontEnd_obj,gameResized),HX_CSTRING("gameResized")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,preGameReset),HX_CSTRING("preGameReset")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,postGameReset),HX_CSTRING("postGameReset")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,gameStarted),HX_CSTRING("gameStarted")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,preUpdate),HX_CSTRING("preUpdate")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,postUpdate),HX_CSTRING("postUpdate")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,preDraw),HX_CSTRING("preDraw")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,postDraw),HX_CSTRING("postDraw")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,focusGained),HX_CSTRING("focusGained")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,focusLost),HX_CSTRING("focusLost")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("stateSwitched"),
	HX_CSTRING("gameResized"),
	HX_CSTRING("preGameReset"),
	HX_CSTRING("postGameReset"),
	HX_CSTRING("gameStarted"),
	HX_CSTRING("preUpdate"),
	HX_CSTRING("postUpdate"),
	HX_CSTRING("preDraw"),
	HX_CSTRING("postDraw"),
	HX_CSTRING("focusGained"),
	HX_CSTRING("focusLost"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SignalFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SignalFrontEnd_obj::__mClass,"__mClass");
};

#endif

Class SignalFrontEnd_obj::__mClass;

void SignalFrontEnd_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.frontEnds.SignalFrontEnd"), hx::TCanCast< SignalFrontEnd_obj> ,sStaticFields,sMemberFields,
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

void SignalFrontEnd_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
