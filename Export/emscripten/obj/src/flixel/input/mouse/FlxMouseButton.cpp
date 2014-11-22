#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
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
namespace flixel{
namespace input{
namespace mouse{

Void FlxMouseButton_obj::__construct(int ID)
{
HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","new",0xa21f5d96,"flixel.input.mouse.FlxMouseButton.new","flixel/input/mouse/FlxMouseButton.hx",10,0x7fcdf6f7)
HX_STACK_THIS(this)
HX_STACK_ARG(ID,"ID")
{
	HX_STACK_LINE(28)
	this->justPressedTimeInTicks = (int)-1;
	struct _Function_1_1{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/input/mouse/FlxMouseButton.hx",27,0x7fcdf6f7)
			{
				HX_STACK_LINE(27)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(27)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(27)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(27)
				point->_inPool = false;
				HX_STACK_LINE(27)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(27)
	this->justPressedPosition = _Function_1_1::Block();
	HX_STACK_LINE(10)
	super::__construct(ID);
}
;
	return null();
}

//FlxMouseButton_obj::~FlxMouseButton_obj() { }

Dynamic FlxMouseButton_obj::__CreateEmpty() { return  new FlxMouseButton_obj; }
hx::ObjectPtr< FlxMouseButton_obj > FlxMouseButton_obj::__new(int ID)
{  hx::ObjectPtr< FlxMouseButton_obj > result = new FlxMouseButton_obj();
	result->__construct(ID);
	return result;}

Dynamic FlxMouseButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMouseButton_obj > result = new FlxMouseButton_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *FlxMouseButton_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

Void FlxMouseButton_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","update",0x2ce19e93,"flixel.input.mouse.FlxMouseButton.update","flixel/input/mouse/FlxMouseButton.hx",34,0x7fcdf6f7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->super::update();
		HX_STACK_LINE(37)
		if (((this->current == (int)2))){
			HX_STACK_LINE(39)
			this->justPressedPosition->set(::flixel::FlxG_obj::mouse->screenX,::flixel::FlxG_obj::mouse->screenY);
			HX_STACK_LINE(40)
			this->justPressedTimeInTicks = ::flixel::FlxG_obj::game->ticks;
		}
		else{
			HX_STACK_LINE(43)
			if (((this->current == (int)-1))){
				HX_STACK_LINE(45)
				::flixel::math::FlxPoint _g = ::flixel::FlxG_obj::mouse->getScreenPosition(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(45)
				::flixel::input::FlxSwipe _g1 = ::flixel::input::FlxSwipe_obj::__new(this->ID,this->justPressedPosition,_g,this->justPressedTimeInTicks);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(45)
				::flixel::FlxG_obj::swipes->push(_g1);
			}
		}
	}
return null();
}


Void FlxMouseButton_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","destroy",0x9f3f8d30,"flixel.input.mouse.FlxMouseButton.destroy","flixel/input/mouse/FlxMouseButton.hx",51,0x7fcdf6f7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		::flixel::math::FlxPoint _g = ::flixel::util::FlxDestroyUtil_obj::put(this->justPressedPosition);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(52)
		this->justPressedPosition = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseButton_obj,destroy,(void))

Void FlxMouseButton_obj::onDown( Dynamic _){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","onDown",0x8ad419ab,"flixel.input.mouse.FlxMouseButton.onDown","flixel/input/mouse/FlxMouseButton.hx",87,0x7fcdf6f7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(87)
		this->press();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseButton_obj,onDown,(void))

Void FlxMouseButton_obj::onUp( Dynamic _){
{
		HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","onUp",0x3a027364,"flixel.input.mouse.FlxMouseButton.onUp","flixel/input/mouse/FlxMouseButton.hx",100,0x7fcdf6f7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(100)
		this->release();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseButton_obj,onUp,(void))

::flixel::input::mouse::FlxMouseButton FlxMouseButton_obj::getFromID( int id){
	HX_STACK_FRAME("flixel.input.mouse.FlxMouseButton","getFromID",0xd61776b1,"flixel.input.mouse.FlxMouseButton.getFromID","flixel/input/mouse/FlxMouseButton.hx",14,0x7fcdf6f7)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(14)
	switch( (int)(id)){
		case (int)-1: {
			HX_STACK_LINE(16)
			return ::flixel::FlxG_obj::mouse->_leftButton;
		}
		;break;
		case (int)-2: {
			HX_STACK_LINE(19)
			return ::flixel::FlxG_obj::mouse->_middleButton;
		}
		;break;
		case (int)-3: {
			HX_STACK_LINE(20)
			return ::flixel::FlxG_obj::mouse->_rightButton;
		}
		;break;
	}
	HX_STACK_LINE(14)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMouseButton_obj,getFromID,return )


FlxMouseButton_obj::FlxMouseButton_obj()
{
}

void FlxMouseButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMouseButton);
	HX_MARK_MEMBER_NAME(justPressedPosition,"justPressedPosition");
	HX_MARK_MEMBER_NAME(justPressedTimeInTicks,"justPressedTimeInTicks");
	::flixel::input::FlxInput_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxMouseButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(justPressedPosition,"justPressedPosition");
	HX_VISIT_MEMBER_NAME(justPressedTimeInTicks,"justPressedTimeInTicks");
	::flixel::input::FlxInput_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxMouseButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"onUp") ) { return onUp_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"onDown") ) { return onDown_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getFromID") ) { return getFromID_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"justPressedPosition") ) { return justPressedPosition; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"justPressedTimeInTicks") ) { return justPressedTimeInTicks; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxMouseButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"justPressedPosition") ) { justPressedPosition=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"justPressedTimeInTicks") ) { justPressedTimeInTicks=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMouseButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("justPressedPosition"));
	outFields->push(HX_CSTRING("justPressedTimeInTicks"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getFromID"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxMouseButton_obj,justPressedPosition),HX_CSTRING("justPressedPosition")},
	{hx::fsFloat,(int)offsetof(FlxMouseButton_obj,justPressedTimeInTicks),HX_CSTRING("justPressedTimeInTicks")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("justPressedPosition"),
	HX_CSTRING("justPressedTimeInTicks"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("onDown"),
	HX_CSTRING("onUp"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMouseButton_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMouseButton_obj::__mClass,"__mClass");
};

#endif

Class FlxMouseButton_obj::__mClass;

void FlxMouseButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.mouse.FlxMouseButton"), hx::TCanCast< FlxMouseButton_obj> ,sStaticFields,sMemberFields,
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

void FlxMouseButton_obj::__boot()
{
}

} // end namespace flixel
} // end namespace input
} // end namespace mouse
