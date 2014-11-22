#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
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
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
namespace flixel{
namespace input{
namespace touch{

Void FlxTouch_obj::__construct(hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_pointID)
{
HX_STACK_FRAME("flixel.input.touch.FlxTouch","new",0xa47319c4,"flixel.input.touch.FlxTouch.new","flixel/input/touch/FlxTouch.hx",21,0x7bf286c9)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_pointID,"pointID")
int x = __o_x.Default(0);
int y = __o_y.Default(0);
int pointID = __o_pointID.Default(0);
{
	HX_STACK_LINE(38)
	this->justPressedTimeInTicks = (int)-1;
	struct _Function_1_1{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/input/touch/FlxTouch.hx",37,0x7bf286c9)
			{
				HX_STACK_LINE(37)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(37)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(37)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(37)
				point->_inPool = false;
				HX_STACK_LINE(37)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(37)
	this->justPressedPosition = _Function_1_1::Block();
	HX_STACK_LINE(35)
	this->flashPoint = ::openfl::_v2::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(64)
	super::__construct();
	HX_STACK_LINE(66)
	::flixel::input::FlxInput _g = ::flixel::input::FlxInput_obj::__new(pointID);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(66)
	this->input = _g;
	HX_STACK_LINE(67)
	this->setXY(x,y);
}
;
	return null();
}

//FlxTouch_obj::~FlxTouch_obj() { }

Dynamic FlxTouch_obj::__CreateEmpty() { return  new FlxTouch_obj; }
hx::ObjectPtr< FlxTouch_obj > FlxTouch_obj::__new(hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_pointID)
{  hx::ObjectPtr< FlxTouch_obj > result = new FlxTouch_obj();
	result->__construct(__o_x,__o_y,__o_pointID);
	return result;}

Dynamic FlxTouch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTouch_obj > result = new FlxTouch_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *FlxTouch_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	if (inType==typeid( ::flixel::input::IFlxInput_obj)) return operator ::flixel::input::IFlxInput_obj *();
	return super::__ToInterface(inType);
}

Void FlxTouch_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouch","destroy",0x988ff85e,"flixel.input.touch.FlxTouch.destroy","flixel/input/touch/FlxTouch.hx",41,0x7bf286c9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		this->input = null();
		HX_STACK_LINE(43)
		::flixel::math::FlxPoint _g = ::flixel::util::FlxDestroyUtil_obj::put(this->justPressedPosition);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		this->justPressedPosition = _g;
		HX_STACK_LINE(44)
		this->flashPoint = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,destroy,(void))

Void FlxTouch_obj::recycle( int x,int y,int pointID){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouch","recycle",0xab95db77,"flixel.input.touch.FlxTouch.recycle","flixel/input/touch/FlxTouch.hx",51,0x7bf286c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(pointID,"pointID")
		HX_STACK_LINE(52)
		this->setXY(x,y);
		HX_STACK_LINE(53)
		this->input->ID = pointID;
		HX_STACK_LINE(54)
		this->input->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTouch_obj,recycle,(void))

Void FlxTouch_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouch","update",0x82f33325,"flixel.input.touch.FlxTouch.update","flixel/input/touch/FlxTouch.hx",74,0x7bf286c9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(75)
		this->input->update();
		HX_STACK_LINE(77)
		if (((this->input->current == (int)2))){
			HX_STACK_LINE(79)
			this->justPressedPosition->set(this->screenX,this->screenY);
			HX_STACK_LINE(80)
			this->justPressedTimeInTicks = ::flixel::FlxG_obj::game->ticks;
		}
		else{
			HX_STACK_LINE(83)
			if (((this->input->current == (int)-1))){
				HX_STACK_LINE(85)
				::flixel::math::FlxPoint _g = this->getScreenPosition(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(85)
				::flixel::input::FlxSwipe _g1 = ::flixel::input::FlxSwipe_obj::__new(this->input->ID,this->justPressedPosition,_g,this->justPressedTimeInTicks);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(85)
				::flixel::FlxG_obj::swipes->push(_g1);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,update,(void))

Void FlxTouch_obj::setXY( int X,int Y){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouch","setXY",0xdbbeff87,"flixel.input.touch.FlxTouch.setXY","flixel/input/touch/FlxTouch.hx",97,0x7bf286c9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(98)
		this->flashPoint->x = X;
		HX_STACK_LINE(99)
		this->flashPoint->y = Y;
		HX_STACK_LINE(100)
		::openfl::_v2::geom::Point _g = ::flixel::FlxG_obj::game->globalToLocal(this->flashPoint);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(100)
		this->flashPoint = _g;
		HX_STACK_LINE(102)
		int _g1 = ::Std_obj::_int(this->flashPoint->x);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(102)
		this->_globalScreenX = _g1;
		HX_STACK_LINE(103)
		int _g2 = ::Std_obj::_int(this->flashPoint->y);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(103)
		this->_globalScreenY = _g2;
		HX_STACK_LINE(104)
		this->updatePositions();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTouch_obj,setXY,(void))

int FlxTouch_obj::get_touchPointID( ){
	HX_STACK_FRAME("flixel.input.touch.FlxTouch","get_touchPointID",0xed1e52d1,"flixel.input.touch.FlxTouch.get_touchPointID","flixel/input/touch/FlxTouch.hx",109,0x7bf286c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(109)
	return this->input->ID;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,get_touchPointID,return )

bool FlxTouch_obj::get_justReleased( ){
	HX_STACK_FRAME("flixel.input.touch.FlxTouch","get_justReleased",0xd7f5afae,"flixel.input.touch.FlxTouch.get_justReleased","flixel/input/touch/FlxTouch.hx",114,0x7bf286c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(114)
	return (this->input->current == (int)-1);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,get_justReleased,return )

bool FlxTouch_obj::get_released( ){
	HX_STACK_FRAME("flixel.input.touch.FlxTouch","get_released",0xe547a6e2,"flixel.input.touch.FlxTouch.get_released","flixel/input/touch/FlxTouch.hx",119,0x7bf286c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(119)
	::flixel::input::FlxInput _this = this->input;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(119)
	return (bool((_this->current == (int)0)) || bool((_this->current == (int)-1)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,get_released,return )

bool FlxTouch_obj::get_pressed( ){
	HX_STACK_FRAME("flixel.input.touch.FlxTouch","get_pressed",0x583e801d,"flixel.input.touch.FlxTouch.get_pressed","flixel/input/touch/FlxTouch.hx",124,0x7bf286c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(124)
	::flixel::input::FlxInput _this = this->input;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(124)
	return (bool((_this->current == (int)1)) || bool((_this->current == (int)2)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,get_pressed,return )

bool FlxTouch_obj::get_justPressed( ){
	HX_STACK_FRAME("flixel.input.touch.FlxTouch","get_justPressed",0xad2294d1,"flixel.input.touch.FlxTouch.get_justPressed","flixel/input/touch/FlxTouch.hx",129,0x7bf286c9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(129)
	return (this->input->current == (int)2);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouch_obj,get_justPressed,return )


FlxTouch_obj::FlxTouch_obj()
{
}

void FlxTouch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTouch);
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(flashPoint,"flashPoint");
	HX_MARK_MEMBER_NAME(justPressedPosition,"justPressedPosition");
	HX_MARK_MEMBER_NAME(justPressedTimeInTicks,"justPressedTimeInTicks");
	HX_MARK_END_CLASS();
}

void FlxTouch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(flashPoint,"flashPoint");
	HX_VISIT_MEMBER_NAME(justPressedPosition,"justPressedPosition");
	HX_VISIT_MEMBER_NAME(justPressedTimeInTicks,"justPressedTimeInTicks");
}

Dynamic FlxTouch_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		if (HX_FIELD_EQ(inName,"setXY") ) { return setXY_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { return get_pressed(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"released") ) { return get_released(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flashPoint") ) { return flashPoint; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return get_justPressed(); }
		if (HX_FIELD_EQ(inName,"get_pressed") ) { return get_pressed_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { return get_touchPointID(); }
		if (HX_FIELD_EQ(inName,"justReleased") ) { return get_justReleased(); }
		if (HX_FIELD_EQ(inName,"get_released") ) { return get_released_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_justPressed") ) { return get_justPressed_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_touchPointID") ) { return get_touchPointID_dyn(); }
		if (HX_FIELD_EQ(inName,"get_justReleased") ) { return get_justReleased_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"justPressedPosition") ) { return justPressedPosition; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"justPressedTimeInTicks") ) { return justPressedTimeInTicks; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTouch_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::flixel::input::FlxInput >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flashPoint") ) { flashPoint=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"justPressedPosition") ) { justPressedPosition=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"justPressedTimeInTicks") ) { justPressedTimeInTicks=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTouch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("touchPointID"));
	outFields->push(HX_CSTRING("justReleased"));
	outFields->push(HX_CSTRING("released"));
	outFields->push(HX_CSTRING("pressed"));
	outFields->push(HX_CSTRING("justPressed"));
	outFields->push(HX_CSTRING("input"));
	outFields->push(HX_CSTRING("flashPoint"));
	outFields->push(HX_CSTRING("justPressedPosition"));
	outFields->push(HX_CSTRING("justPressedTimeInTicks"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::input::FlxInput*/ ,(int)offsetof(FlxTouch_obj,input),HX_CSTRING("input")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(FlxTouch_obj,flashPoint),HX_CSTRING("flashPoint")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxTouch_obj,justPressedPosition),HX_CSTRING("justPressedPosition")},
	{hx::fsFloat,(int)offsetof(FlxTouch_obj,justPressedTimeInTicks),HX_CSTRING("justPressedTimeInTicks")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("input"),
	HX_CSTRING("flashPoint"),
	HX_CSTRING("justPressedPosition"),
	HX_CSTRING("justPressedTimeInTicks"),
	HX_CSTRING("destroy"),
	HX_CSTRING("recycle"),
	HX_CSTRING("update"),
	HX_CSTRING("setXY"),
	HX_CSTRING("get_touchPointID"),
	HX_CSTRING("get_justReleased"),
	HX_CSTRING("get_released"),
	HX_CSTRING("get_pressed"),
	HX_CSTRING("get_justPressed"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTouch_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTouch_obj::__mClass,"__mClass");
};

#endif

Class FlxTouch_obj::__mClass;

void FlxTouch_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.touch.FlxTouch"), hx::TCanCast< FlxTouch_obj> ,sStaticFields,sMemberFields,
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

void FlxTouch_obj::__boot()
{
}

} // end namespace flixel
} // end namespace input
} // end namespace touch
