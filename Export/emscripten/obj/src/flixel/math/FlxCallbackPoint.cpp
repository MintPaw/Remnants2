#include <hxcpp.h>

#ifndef INCLUDED_flixel_math_FlxCallbackPoint
#include <flixel/math/FlxCallbackPoint.h>
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
namespace math{

Void FlxCallbackPoint_obj::__construct(Dynamic setXCallback,Dynamic setYCallback,Dynamic setXYCallback)
{
HX_STACK_FRAME("flixel.math.FlxCallbackPoint","new",0x2af621df,"flixel.math.FlxCallbackPoint.new","flixel/math/FlxPoint.hx",473,0xb3e1cd2c)
HX_STACK_THIS(this)
HX_STACK_ARG(setXCallback,"setXCallback")
HX_STACK_ARG(setYCallback,"setYCallback")
HX_STACK_ARG(setXYCallback,"setXYCallback")
{
	HX_STACK_LINE(474)
	super::__construct(null(),null());
	HX_STACK_LINE(476)
	this->_setXCallback = setXCallback;
	HX_STACK_LINE(477)
	this->_setYCallback = setXYCallback;
	HX_STACK_LINE(478)
	this->_setXYCallback = setXYCallback;
	HX_STACK_LINE(480)
	if (((this->_setXCallback_dyn() != null()))){
		HX_STACK_LINE(482)
		if (((this->_setYCallback_dyn() == null()))){
			HX_STACK_LINE(483)
			this->_setYCallback = setXCallback;
		}
		HX_STACK_LINE(484)
		if (((this->_setXYCallback_dyn() == null()))){
			HX_STACK_LINE(485)
			this->_setXYCallback = setXCallback;
		}
	}
}
;
	return null();
}

//FlxCallbackPoint_obj::~FlxCallbackPoint_obj() { }

Dynamic FlxCallbackPoint_obj::__CreateEmpty() { return  new FlxCallbackPoint_obj; }
hx::ObjectPtr< FlxCallbackPoint_obj > FlxCallbackPoint_obj::__new(Dynamic setXCallback,Dynamic setYCallback,Dynamic setXYCallback)
{  hx::ObjectPtr< FlxCallbackPoint_obj > result = new FlxCallbackPoint_obj();
	result->__construct(setXCallback,setYCallback,setXYCallback);
	return result;}

Dynamic FlxCallbackPoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxCallbackPoint_obj > result = new FlxCallbackPoint_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::flixel::math::FlxPoint FlxCallbackPoint_obj::set( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.math.FlxCallbackPoint","set",0x2af9ed21,"flixel.math.FlxCallbackPoint.set","flixel/math/FlxPoint.hx",490,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(491)
		this->super::set(X,Y);
		HX_STACK_LINE(492)
		if (((this->_setXYCallback_dyn() != null()))){
			HX_STACK_LINE(493)
			this->_setXYCallback(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(494)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


Float FlxCallbackPoint_obj::set_x( Float Value){
	HX_STACK_FRAME("flixel.math.FlxCallbackPoint","set_x",0x4f288a9a,"flixel.math.FlxCallbackPoint.set_x","flixel/math/FlxPoint.hx",498,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(499)
	this->super::set_x(Value);
	HX_STACK_LINE(500)
	if (((this->_setXCallback_dyn() != null()))){
		HX_STACK_LINE(501)
		this->_setXCallback(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(502)
	return Value;
}


Float FlxCallbackPoint_obj::set_y( Float Value){
	HX_STACK_FRAME("flixel.math.FlxCallbackPoint","set_y",0x4f288a9b,"flixel.math.FlxCallbackPoint.set_y","flixel/math/FlxPoint.hx",506,0xb3e1cd2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(507)
	this->super::set_y(Value);
	HX_STACK_LINE(508)
	if (((this->_setYCallback_dyn() != null()))){
		HX_STACK_LINE(509)
		this->_setYCallback(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(510)
	return Value;
}


Void FlxCallbackPoint_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.math.FlxCallbackPoint","destroy",0xdd08a9f9,"flixel.math.FlxCallbackPoint.destroy","flixel/math/FlxPoint.hx",514,0xb3e1cd2c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(515)
		this->super::destroy();
		HX_STACK_LINE(516)
		this->_setXCallback = null();
		HX_STACK_LINE(517)
		this->_setYCallback = null();
		HX_STACK_LINE(518)
		this->_setXYCallback = null();
	}
return null();
}


Void FlxCallbackPoint_obj::put( ){
{
		HX_STACK_FRAME("flixel.math.FlxCallbackPoint","put",0x2af7b44e,"flixel.math.FlxCallbackPoint.put","flixel/math/FlxPoint.hx",521,0xb3e1cd2c)
		HX_STACK_THIS(this)
	}
return null();
}



FlxCallbackPoint_obj::FlxCallbackPoint_obj()
{
}

void FlxCallbackPoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxCallbackPoint);
	HX_MARK_MEMBER_NAME(_setXCallback,"_setXCallback");
	HX_MARK_MEMBER_NAME(_setYCallback,"_setYCallback");
	HX_MARK_MEMBER_NAME(_setXYCallback,"_setXYCallback");
	HX_MARK_END_CLASS();
}

void FlxCallbackPoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_setXCallback,"_setXCallback");
	HX_VISIT_MEMBER_NAME(_setYCallback,"_setYCallback");
	HX_VISIT_MEMBER_NAME(_setXYCallback,"_setXYCallback");
}

Dynamic FlxCallbackPoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"put") ) { return put_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_setXCallback") ) { return _setXCallback; }
		if (HX_FIELD_EQ(inName,"_setYCallback") ) { return _setYCallback; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_setXYCallback") ) { return _setXYCallback; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxCallbackPoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_setXCallback") ) { _setXCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_setYCallback") ) { _setYCallback=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_setXYCallback") ) { _setXYCallback=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxCallbackPoint_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCallbackPoint_obj,_setXCallback),HX_CSTRING("_setXCallback")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCallbackPoint_obj,_setYCallback),HX_CSTRING("_setYCallback")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCallbackPoint_obj,_setXYCallback),HX_CSTRING("_setXYCallback")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_setXCallback"),
	HX_CSTRING("_setYCallback"),
	HX_CSTRING("_setXYCallback"),
	HX_CSTRING("set"),
	HX_CSTRING("set_x"),
	HX_CSTRING("set_y"),
	HX_CSTRING("destroy"),
	HX_CSTRING("put"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCallbackPoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCallbackPoint_obj::__mClass,"__mClass");
};

#endif

Class FlxCallbackPoint_obj::__mClass;

void FlxCallbackPoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.math.FlxCallbackPoint"), hx::TCanCast< FlxCallbackPoint_obj> ,sStaticFields,sMemberFields,
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

void FlxCallbackPoint_obj::__boot()
{
}

} // end namespace flixel
} // end namespace math
