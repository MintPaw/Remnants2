#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_RatioScaleMode
#include <flixel/system/scaleModes/RatioScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace system{
namespace scaleModes{

Void RatioScaleMode_obj::__construct(hx::Null< bool >  __o_fillScreen)
{
HX_STACK_FRAME("flixel.system.scaleModes.RatioScaleMode","new",0x00d4d0cf,"flixel.system.scaleModes.RatioScaleMode.new","flixel/system/scaleModes/RatioScaleMode.hx",14,0x35e4ce80)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_fillScreen,"fillScreen")
bool fillScreen = __o_fillScreen.Default(false);
{
	HX_STACK_LINE(15)
	super::__construct();
	HX_STACK_LINE(16)
	this->fillScreen = fillScreen;
}
;
	return null();
}

//RatioScaleMode_obj::~RatioScaleMode_obj() { }

Dynamic RatioScaleMode_obj::__CreateEmpty() { return  new RatioScaleMode_obj; }
hx::ObjectPtr< RatioScaleMode_obj > RatioScaleMode_obj::__new(hx::Null< bool >  __o_fillScreen)
{  hx::ObjectPtr< RatioScaleMode_obj > result = new RatioScaleMode_obj();
	result->__construct(__o_fillScreen);
	return result;}

Dynamic RatioScaleMode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RatioScaleMode_obj > result = new RatioScaleMode_obj();
	result->__construct(inArgs[0]);
	return result;}

Void RatioScaleMode_obj::updateGameSize( int Width,int Height){
{
		HX_STACK_FRAME("flixel.system.scaleModes.RatioScaleMode","updateGameSize",0xacc31ced,"flixel.system.scaleModes.RatioScaleMode.updateGameSize","flixel/system/scaleModes/RatioScaleMode.hx",20,0x35e4ce80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(21)
		Float ratio = (Float(::flixel::FlxG_obj::width) / Float(::flixel::FlxG_obj::height));		HX_STACK_VAR(ratio,"ratio");
		HX_STACK_LINE(22)
		Float realRatio = (Float(Width) / Float(Height));		HX_STACK_VAR(realRatio,"realRatio");
		HX_STACK_LINE(24)
		bool scaleY = (realRatio < ratio);		HX_STACK_VAR(scaleY,"scaleY");
		HX_STACK_LINE(25)
		if ((this->fillScreen)){
			HX_STACK_LINE(27)
			scaleY = !(scaleY);
		}
		HX_STACK_LINE(30)
		if ((scaleY)){
			HX_STACK_LINE(32)
			this->gameSize->set_x(Width);
			HX_STACK_LINE(33)
			int _g = ::Math_obj::floor((Float(this->gameSize->x) / Float(ratio)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(33)
			this->gameSize->set_y(_g);
		}
		else{
			HX_STACK_LINE(37)
			this->gameSize->set_y(Height);
			HX_STACK_LINE(38)
			int _g1 = ::Math_obj::floor((this->gameSize->y * ratio));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(38)
			this->gameSize->set_x(_g1);
		}
	}
return null();
}



RatioScaleMode_obj::RatioScaleMode_obj()
{
}

Dynamic RatioScaleMode_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fillScreen") ) { return fillScreen; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateGameSize") ) { return updateGameSize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RatioScaleMode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fillScreen") ) { fillScreen=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RatioScaleMode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("fillScreen"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(RatioScaleMode_obj,fillScreen),HX_CSTRING("fillScreen")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("fillScreen"),
	HX_CSTRING("updateGameSize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RatioScaleMode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RatioScaleMode_obj::__mClass,"__mClass");
};

#endif

Class RatioScaleMode_obj::__mClass;

void RatioScaleMode_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.scaleModes.RatioScaleMode"), hx::TCanCast< RatioScaleMode_obj> ,sStaticFields,sMemberFields,
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

void RatioScaleMode_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace scaleModes
