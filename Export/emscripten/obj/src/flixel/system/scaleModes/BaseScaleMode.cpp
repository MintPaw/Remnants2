#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
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
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
namespace flixel{
namespace system{
namespace scaleModes{

Void BaseScaleMode_obj::__construct()
{
HX_STACK_FRAME("flixel.system.scaleModes.BaseScaleMode","new",0xb84381b3,"flixel.system.scaleModes.BaseScaleMode.new","flixel/system/scaleModes/BaseScaleMode.hx",21,0x5a3188fe)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(22)
	::flixel::math::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(22)
	{
		HX_STACK_LINE(22)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(22)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(22)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(22)
		point->_inPool = false;
		HX_STACK_LINE(22)
		_g = point;
	}
	HX_STACK_LINE(22)
	this->deviceSize = _g;
	HX_STACK_LINE(23)
	::flixel::math::FlxPoint _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(23)
	{
		HX_STACK_LINE(23)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(23)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(23)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(23)
		point->_inPool = false;
		HX_STACK_LINE(23)
		_g1 = point;
	}
	HX_STACK_LINE(23)
	this->gameSize = _g1;
	HX_STACK_LINE(24)
	::flixel::math::FlxPoint _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(24)
	{
		HX_STACK_LINE(24)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(24)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(24)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(24)
		point->_inPool = false;
		HX_STACK_LINE(24)
		_g2 = point;
	}
	HX_STACK_LINE(24)
	this->scale = _g2;
	HX_STACK_LINE(25)
	::flixel::math::FlxPoint _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(25)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(25)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(25)
		point->_inPool = false;
		HX_STACK_LINE(25)
		_g3 = point;
	}
	HX_STACK_LINE(25)
	this->offset = _g3;
}
;
	return null();
}

//BaseScaleMode_obj::~BaseScaleMode_obj() { }

Dynamic BaseScaleMode_obj::__CreateEmpty() { return  new BaseScaleMode_obj; }
hx::ObjectPtr< BaseScaleMode_obj > BaseScaleMode_obj::__new()
{  hx::ObjectPtr< BaseScaleMode_obj > result = new BaseScaleMode_obj();
	result->__construct();
	return result;}

Dynamic BaseScaleMode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BaseScaleMode_obj > result = new BaseScaleMode_obj();
	result->__construct();
	return result;}

Void BaseScaleMode_obj::onMeasure( int Width,int Height){
{
		HX_STACK_FRAME("flixel.system.scaleModes.BaseScaleMode","onMeasure",0xbc54a592,"flixel.system.scaleModes.BaseScaleMode.onMeasure","flixel/system/scaleModes/BaseScaleMode.hx",29,0x5a3188fe)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(30)
		::flixel::FlxG_obj::width = ::flixel::system::scaleModes::BaseScaleMode_obj::gWidth;
		HX_STACK_LINE(31)
		::flixel::FlxG_obj::height = ::flixel::system::scaleModes::BaseScaleMode_obj::gHeight;
		HX_STACK_LINE(33)
		this->updateGameSize(Width,Height);
		HX_STACK_LINE(34)
		this->updateDeviceSize(Width,Height);
		HX_STACK_LINE(35)
		this->updateScaleOffset();
		HX_STACK_LINE(36)
		this->updateGamePosition();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BaseScaleMode_obj,onMeasure,(void))

Void BaseScaleMode_obj::updateGameSize( int Width,int Height){
{
		HX_STACK_FRAME("flixel.system.scaleModes.BaseScaleMode","updateGameSize",0x99f00e89,"flixel.system.scaleModes.BaseScaleMode.updateGameSize","flixel/system/scaleModes/BaseScaleMode.hx",41,0x5a3188fe)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(41)
		this->gameSize->set(Width,Height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BaseScaleMode_obj,updateGameSize,(void))

Void BaseScaleMode_obj::updateDeviceSize( int Width,int Height){
{
		HX_STACK_FRAME("flixel.system.scaleModes.BaseScaleMode","updateDeviceSize",0xb35132ad,"flixel.system.scaleModes.BaseScaleMode.updateDeviceSize","flixel/system/scaleModes/BaseScaleMode.hx",46,0x5a3188fe)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(46)
		this->deviceSize->set(Width,Height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BaseScaleMode_obj,updateDeviceSize,(void))

Void BaseScaleMode_obj::updateScaleOffset( ){
{
		HX_STACK_FRAME("flixel.system.scaleModes.BaseScaleMode","updateScaleOffset",0x13e546c7,"flixel.system.scaleModes.BaseScaleMode.updateScaleOffset","flixel/system/scaleModes/BaseScaleMode.hx",50,0x5a3188fe)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		this->scale->set_x((Float(this->gameSize->x) / Float(((::flixel::FlxG_obj::width * ::flixel::FlxG_obj::initialZoom)))));
		HX_STACK_LINE(52)
		this->scale->set_y((Float(this->gameSize->y) / Float(((::flixel::FlxG_obj::height * ::flixel::FlxG_obj::initialZoom)))));
		HX_STACK_LINE(54)
		int _g = ::Math_obj::ceil((((this->deviceSize->x - this->gameSize->x)) * 0.5));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(54)
		this->offset->set_x(_g);
		HX_STACK_LINE(55)
		int _g1 = ::Math_obj::ceil((((this->deviceSize->y - this->gameSize->y)) * 0.5));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(55)
		this->offset->set_y(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseScaleMode_obj,updateScaleOffset,(void))

Void BaseScaleMode_obj::updateGamePosition( ){
{
		HX_STACK_FRAME("flixel.system.scaleModes.BaseScaleMode","updateGamePosition",0xebf59271,"flixel.system.scaleModes.BaseScaleMode.updateGamePosition","flixel/system/scaleModes/BaseScaleMode.hx",59,0x5a3188fe)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		::flixel::FlxG_obj::game->set_x(this->offset->x);
		HX_STACK_LINE(61)
		::flixel::FlxG_obj::game->set_y(this->offset->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseScaleMode_obj,updateGamePosition,(void))

int BaseScaleMode_obj::gWidth;

int BaseScaleMode_obj::gHeight;

::flixel::math::FlxPoint BaseScaleMode_obj::zoom;


BaseScaleMode_obj::BaseScaleMode_obj()
{
}

void BaseScaleMode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseScaleMode);
	HX_MARK_MEMBER_NAME(deviceSize,"deviceSize");
	HX_MARK_MEMBER_NAME(gameSize,"gameSize");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_END_CLASS();
}

void BaseScaleMode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(deviceSize,"deviceSize");
	HX_VISIT_MEMBER_NAME(gameSize,"gameSize");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(offset,"offset");
}

Dynamic BaseScaleMode_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { return zoom; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"gWidth") ) { return gWidth; }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gHeight") ) { return gHeight; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gameSize") ) { return gameSize; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onMeasure") ) { return onMeasure_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deviceSize") ) { return deviceSize; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateGameSize") ) { return updateGameSize_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateDeviceSize") ) { return updateDeviceSize_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateScaleOffset") ) { return updateScaleOffset_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"updateGamePosition") ) { return updateGamePosition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BaseScaleMode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { zoom=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"gWidth") ) { gWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gHeight") ) { gHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gameSize") ) { gameSize=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deviceSize") ) { deviceSize=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseScaleMode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("deviceSize"));
	outFields->push(HX_CSTRING("gameSize"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("offset"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("gWidth"),
	HX_CSTRING("gHeight"),
	HX_CSTRING("zoom"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(BaseScaleMode_obj,deviceSize),HX_CSTRING("deviceSize")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(BaseScaleMode_obj,gameSize),HX_CSTRING("gameSize")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(BaseScaleMode_obj,scale),HX_CSTRING("scale")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(BaseScaleMode_obj,offset),HX_CSTRING("offset")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("deviceSize"),
	HX_CSTRING("gameSize"),
	HX_CSTRING("scale"),
	HX_CSTRING("offset"),
	HX_CSTRING("onMeasure"),
	HX_CSTRING("updateGameSize"),
	HX_CSTRING("updateDeviceSize"),
	HX_CSTRING("updateScaleOffset"),
	HX_CSTRING("updateGamePosition"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BaseScaleMode_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BaseScaleMode_obj::gWidth,"gWidth");
	HX_MARK_MEMBER_NAME(BaseScaleMode_obj::gHeight,"gHeight");
	HX_MARK_MEMBER_NAME(BaseScaleMode_obj::zoom,"zoom");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BaseScaleMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BaseScaleMode_obj::gWidth,"gWidth");
	HX_VISIT_MEMBER_NAME(BaseScaleMode_obj::gHeight,"gHeight");
	HX_VISIT_MEMBER_NAME(BaseScaleMode_obj::zoom,"zoom");
};

#endif

Class BaseScaleMode_obj::__mClass;

void BaseScaleMode_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.scaleModes.BaseScaleMode"), hx::TCanCast< BaseScaleMode_obj> ,sStaticFields,sMemberFields,
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

void BaseScaleMode_obj::__boot()
{
struct _Function_0_1{
	inline static ::flixel::math::FlxPoint Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/scaleModes/BaseScaleMode.hx",18,0x5a3188fe)
		{
			HX_STACK_LINE(18)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(18)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(18)
			::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(18)
			point->_inPool = false;
			HX_STACK_LINE(18)
			return point;
		}
		return null();
	}
};
	zoom= _Function_0_1::Block();
}

} // end namespace flixel
} // end namespace system
} // end namespace scaleModes
