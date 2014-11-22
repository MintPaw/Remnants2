#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
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
#ifndef INCLUDED_openfl__v2_display_MovieClip
#include <openfl/_v2/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Stage
#include <openfl/_v2/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_MouseEvent
#include <openfl/_v2/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__v2_events_TouchEvent
#include <openfl/_v2/events/TouchEvent.h>
#endif
#ifndef INCLUDED_openfl__v2_ui_Multitouch
#include <openfl/_v2/ui/Multitouch.h>
#endif
#ifndef INCLUDED_openfl_ui_MultitouchInputMode
#include <openfl/ui/MultitouchInputMode.h>
#endif
namespace flixel{
namespace input{
namespace touch{

Void FlxTouchManager_obj::__construct()
{
HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","new",0x0e972b2d,"flixel.input.touch.FlxTouchManager.new","flixel/input/touch/FlxTouchManager.hx",161,0xc27259e6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(162)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(162)
	this->list = _g;
	HX_STACK_LINE(163)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(163)
	this->_inactiveTouches = _g1;
	HX_STACK_LINE(164)
	::haxe::ds::IntMap _g2 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(164)
	this->_touchesCache = _g2;
	HX_STACK_LINE(165)
	::flixel::input::touch::FlxTouchManager_obj::maxTouchPoints = ::openfl::_v2::ui::Multitouch_obj::maxTouchPoints;
	HX_STACK_LINE(166)
	::openfl::_v2::ui::Multitouch_obj::set_inputMode(::openfl::ui::MultitouchInputMode_obj::TOUCH_POINT);
	HX_STACK_LINE(168)
	::openfl::_v2::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::_v2::events::TouchEvent_obj::TOUCH_BEGIN,this->handleTouchBegin_dyn(),null(),null(),null());
	HX_STACK_LINE(169)
	::openfl::_v2::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::_v2::events::TouchEvent_obj::TOUCH_END,this->handleTouchEnd_dyn(),null(),null(),null());
	HX_STACK_LINE(170)
	::openfl::_v2::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::_v2::events::TouchEvent_obj::TOUCH_MOVE,this->handleTouchMove_dyn(),null(),null(),null());
}
;
	return null();
}

//FlxTouchManager_obj::~FlxTouchManager_obj() { }

Dynamic FlxTouchManager_obj::__CreateEmpty() { return  new FlxTouchManager_obj; }
hx::ObjectPtr< FlxTouchManager_obj > FlxTouchManager_obj::__new()
{  hx::ObjectPtr< FlxTouchManager_obj > result = new FlxTouchManager_obj();
	result->__construct();
	return result;}

Dynamic FlxTouchManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTouchManager_obj > result = new FlxTouchManager_obj();
	result->__construct();
	return result;}

hx::Object *FlxTouchManager_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	if (inType==typeid( ::flixel::input::IFlxInputManager_obj)) return operator ::flixel::input::IFlxInputManager_obj *();
	return super::__ToInterface(inType);
}

::flixel::input::touch::FlxTouch FlxTouchManager_obj::getByID( int TouchPointID){
	HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","getByID",0x18c2ee75,"flixel.input.touch.FlxTouchManager.getByID","flixel/input/touch/FlxTouchManager.hx",40,0xc27259e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TouchPointID,"TouchPointID")
	HX_STACK_LINE(40)
	return this->_touchesCache->get(TouchPointID);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,getByID,return )

::flixel::input::touch::FlxTouch FlxTouchManager_obj::getFirst( ){
	HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","getFirst",0xd4f3e5cd,"flixel.input.touch.FlxTouchManager.getFirst","flixel/input/touch/FlxTouchManager.hx",48,0xc27259e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	if (((this->list->__get((int)0).StaticCast< ::flixel::input::touch::FlxTouch >() != null()))){
		HX_STACK_LINE(50)
		return this->list->__get((int)0).StaticCast< ::flixel::input::touch::FlxTouch >();
	}
	else{
		HX_STACK_LINE(54)
		return null();
	}
	HX_STACK_LINE(48)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,getFirst,return )

Void FlxTouchManager_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","destroy",0x29a37247,"flixel.input.touch.FlxTouchManager.destroy","flixel/input/touch/FlxTouchManager.hx",63,0xc27259e6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(64)
			Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(64)
			while((true)){
				HX_STACK_LINE(64)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(64)
					break;
				}
				HX_STACK_LINE(64)
				::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(64)
				++(_g);
				HX_STACK_LINE(66)
				touch->destroy();
			}
		}
		HX_STACK_LINE(68)
		this->list = null();
		HX_STACK_LINE(70)
		{
			HX_STACK_LINE(70)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(70)
			Array< ::Dynamic > _g1 = this->_inactiveTouches;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(70)
			while((true)){
				HX_STACK_LINE(70)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(70)
					break;
				}
				HX_STACK_LINE(70)
				::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(70)
				++(_g);
				HX_STACK_LINE(72)
				touch->destroy();
			}
		}
		HX_STACK_LINE(74)
		this->_inactiveTouches = null();
		HX_STACK_LINE(76)
		this->_touchesCache = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,destroy,(void))

Array< ::Dynamic > FlxTouchManager_obj::justStarted( Array< ::Dynamic > TouchArray){
	HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","justStarted",0x4159d442,"flixel.input.touch.FlxTouchManager.justStarted","flixel/input/touch/FlxTouchManager.hx",86,0xc27259e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TouchArray,"TouchArray")
	HX_STACK_LINE(87)
	if (((TouchArray == null()))){
		HX_STACK_LINE(89)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(89)
		TouchArray = _g;
	}
	HX_STACK_LINE(92)
	int touchLen = TouchArray->length;		HX_STACK_VAR(touchLen,"touchLen");
	HX_STACK_LINE(94)
	if (((touchLen > (int)0))){
		HX_STACK_LINE(96)
		TouchArray->splice((int)0,touchLen);
	}
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(99)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(99)
		while((true)){
			HX_STACK_LINE(99)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(99)
				break;
			}
			HX_STACK_LINE(99)
			::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(99)
			++(_g);
			HX_STACK_LINE(101)
			if (((touch->input->current == (int)2))){
				HX_STACK_LINE(103)
				TouchArray->push(touch);
			}
		}
	}
	HX_STACK_LINE(107)
	return TouchArray;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,justStarted,return )

Array< ::Dynamic > FlxTouchManager_obj::justReleased( Array< ::Dynamic > TouchArray){
	HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","justReleased",0x217e7e9c,"flixel.input.touch.FlxTouchManager.justReleased","flixel/input/touch/FlxTouchManager.hx",117,0xc27259e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TouchArray,"TouchArray")
	HX_STACK_LINE(118)
	if (((TouchArray == null()))){
		HX_STACK_LINE(120)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(120)
		TouchArray = _g;
	}
	HX_STACK_LINE(123)
	int touchLen = TouchArray->length;		HX_STACK_VAR(touchLen,"touchLen");
	HX_STACK_LINE(124)
	if (((touchLen > (int)0))){
		HX_STACK_LINE(126)
		TouchArray->splice((int)0,touchLen);
	}
	HX_STACK_LINE(129)
	{
		HX_STACK_LINE(129)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(129)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(129)
		while((true)){
			HX_STACK_LINE(129)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(129)
				break;
			}
			HX_STACK_LINE(129)
			::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(129)
			++(_g);
			HX_STACK_LINE(131)
			if (((touch->input->current == (int)-1))){
				HX_STACK_LINE(133)
				TouchArray->push(touch);
			}
		}
	}
	HX_STACK_LINE(137)
	return TouchArray;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,justReleased,return )

Void FlxTouchManager_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","reset",0x90b1b1dc,"flixel.input.touch.FlxTouchManager.reset","flixel/input/touch/FlxTouchManager.hx",144,0xc27259e6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(145)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->_touchesCache->keys());  __it->hasNext(); ){
			int key = __it->next();
			this->_touchesCache->remove(key);
		}
		HX_STACK_LINE(150)
		{
			HX_STACK_LINE(150)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(150)
			Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(150)
			while((true)){
				HX_STACK_LINE(150)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(150)
					break;
				}
				HX_STACK_LINE(150)
				::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(150)
				++(_g);
				HX_STACK_LINE(152)
				touch->input->reset();
				HX_STACK_LINE(153)
				this->_inactiveTouches->push(touch);
			}
		}
		HX_STACK_LINE(156)
		this->list->splice((int)0,this->list->length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,reset,(void))

Void FlxTouchManager_obj::handleTouchBegin( ::openfl::_v2::events::TouchEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","handleTouchBegin",0x51a5a0c5,"flixel.input.touch.FlxTouchManager.handleTouchBegin","flixel/input/touch/FlxTouchManager.hx",177,0xc27259e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(178)
		::flixel::input::touch::FlxTouch touch = this->_touchesCache->get(FlashEvent->touchPointID);		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(179)
		if (((touch != null()))){
			HX_STACK_LINE(181)
			int _g = ::Std_obj::_int(FlashEvent->stageX);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(181)
			int _g1 = ::Std_obj::_int(FlashEvent->stageY);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(181)
			touch->setXY(_g,_g1);
		}
		else{
			HX_STACK_LINE(185)
			int _g2 = ::Std_obj::_int(FlashEvent->stageX);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(185)
			int _g3 = ::Std_obj::_int(FlashEvent->stageY);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(185)
			::flixel::input::touch::FlxTouch _g4 = this->recycle(_g2,_g3,FlashEvent->touchPointID);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(185)
			touch = _g4;
		}
		HX_STACK_LINE(187)
		touch->input->press();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,handleTouchBegin,(void))

Void FlxTouchManager_obj::handleTouchEnd( ::openfl::_v2::events::TouchEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","handleTouchEnd",0xa3529b77,"flixel.input.touch.FlxTouchManager.handleTouchEnd","flixel/input/touch/FlxTouchManager.hx",194,0xc27259e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(195)
		::flixel::input::touch::FlxTouch touch = this->_touchesCache->get(FlashEvent->touchPointID);		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(197)
		if (((touch != null()))){
			HX_STACK_LINE(199)
			touch->input->release();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,handleTouchEnd,(void))

Void FlxTouchManager_obj::handleTouchMove( ::openfl::_v2::events::TouchEvent FlashEvent){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","handleTouchMove",0x4a3ff3f5,"flixel.input.touch.FlxTouchManager.handleTouchMove","flixel/input/touch/FlxTouchManager.hx",207,0xc27259e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FlashEvent,"FlashEvent")
		HX_STACK_LINE(208)
		::flixel::input::touch::FlxTouch touch = this->_touchesCache->get(FlashEvent->touchPointID);		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(210)
		if (((touch != null()))){
			HX_STACK_LINE(212)
			int _g = ::Std_obj::_int(FlashEvent->stageX);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(212)
			int _g1 = ::Std_obj::_int(FlashEvent->stageY);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(212)
			touch->setXY(_g,_g1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,handleTouchMove,(void))

::flixel::input::touch::FlxTouch FlxTouchManager_obj::add( ::flixel::input::touch::FlxTouch Touch){
	HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","add",0x0e8d4cee,"flixel.input.touch.FlxTouchManager.add","flixel/input/touch/FlxTouchManager.hx",223,0xc27259e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Touch,"Touch")
	HX_STACK_LINE(224)
	this->list->push(Touch);
	HX_STACK_LINE(225)
	this->_touchesCache->set(Touch->input->ID,Touch);
	HX_STACK_LINE(226)
	return Touch;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,add,return )

::flixel::input::touch::FlxTouch FlxTouchManager_obj::recycle( int X,int Y,int PointID){
	HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","recycle",0x3ca95560,"flixel.input.touch.FlxTouchManager.recycle","flixel/input/touch/FlxTouchManager.hx",238,0xc27259e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(PointID,"PointID")
	HX_STACK_LINE(239)
	if (((this->_inactiveTouches->length > (int)0))){
		HX_STACK_LINE(241)
		::flixel::input::touch::FlxTouch touch = this->_inactiveTouches->pop().StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(242)
		touch->recycle(X,Y,PointID);
		HX_STACK_LINE(243)
		return this->add(touch);
	}
	HX_STACK_LINE(246)
	::flixel::input::touch::FlxTouch _g = ::flixel::input::touch::FlxTouch_obj::__new(X,Y,PointID);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(246)
	return this->add(_g);
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTouchManager_obj,recycle,return )

Void FlxTouchManager_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","update",0x8957295c,"flixel.input.touch.FlxTouchManager.update","flixel/input/touch/FlxTouchManager.hx",254,0xc27259e6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(255)
		int i = (this->list->length - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(256)
		::flixel::input::touch::FlxTouch touch;		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(258)
		while((true)){
			HX_STACK_LINE(258)
			if ((!(((i >= (int)0))))){
				HX_STACK_LINE(258)
				break;
			}
			HX_STACK_LINE(260)
			touch = this->list->__get(i).StaticCast< ::flixel::input::touch::FlxTouch >();
			struct _Function_2_1{
				inline static bool Block( ::flixel::input::touch::FlxTouch &touch){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/input/touch/FlxTouchManager.hx",263,0xc27259e6)
					{
						HX_STACK_LINE(263)
						::flixel::input::FlxInput _this = touch->input;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(263)
						return (bool((_this->current == (int)0)) || bool((_this->current == (int)-1)));
					}
					return null();
				}
			};
			HX_STACK_LINE(263)
			if (((bool(_Function_2_1::Block(touch)) && bool(!(((touch->input->current == (int)-1))))))){
				HX_STACK_LINE(265)
				touch->input->reset();
				HX_STACK_LINE(266)
				this->_touchesCache->remove(touch->input->ID);
				HX_STACK_LINE(267)
				this->list->splice(i,(int)1);
				HX_STACK_LINE(268)
				this->_inactiveTouches->push(touch);
			}
			else{
				HX_STACK_LINE(272)
				touch->update();
			}
			HX_STACK_LINE(275)
			(i)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,update,(void))

Void FlxTouchManager_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","onFocus",0x9fe44386,"flixel.input.touch.FlxTouchManager.onFocus","flixel/input/touch/FlxTouchManager.hx",279,0xc27259e6)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,onFocus,(void))

Void FlxTouchManager_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.input.touch.FlxTouchManager","onFocusLost",0x9504548a,"flixel.input.touch.FlxTouchManager.onFocusLost","flixel/input/touch/FlxTouchManager.hx",283,0xc27259e6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(283)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,onFocusLost,(void))

int FlxTouchManager_obj::maxTouchPoints;


FlxTouchManager_obj::FlxTouchManager_obj()
{
}

void FlxTouchManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTouchManager);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(_inactiveTouches,"_inactiveTouches");
	HX_MARK_MEMBER_NAME(_touchesCache,"_touchesCache");
	HX_MARK_END_CLASS();
}

void FlxTouchManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(_inactiveTouches,"_inactiveTouches");
	HX_VISIT_MEMBER_NAME(_touchesCache,"_touchesCache");
}

Dynamic FlxTouchManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getByID") ) { return getByID_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getFirst") ) { return getFirst_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justStarted") ) { return justStarted_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_touchesCache") ) { return _touchesCache; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxTouchPoints") ) { return maxTouchPoints; }
		if (HX_FIELD_EQ(inName,"handleTouchEnd") ) { return handleTouchEnd_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"handleTouchMove") ) { return handleTouchMove_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_inactiveTouches") ) { return _inactiveTouches; }
		if (HX_FIELD_EQ(inName,"handleTouchBegin") ) { return handleTouchBegin_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTouchManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_touchesCache") ) { _touchesCache=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxTouchPoints") ) { maxTouchPoints=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_inactiveTouches") ) { _inactiveTouches=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTouchManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("list"));
	outFields->push(HX_CSTRING("_inactiveTouches"));
	outFields->push(HX_CSTRING("_touchesCache"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("maxTouchPoints"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTouchManager_obj,list),HX_CSTRING("list")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTouchManager_obj,_inactiveTouches),HX_CSTRING("_inactiveTouches")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(FlxTouchManager_obj,_touchesCache),HX_CSTRING("_touchesCache")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("list"),
	HX_CSTRING("_inactiveTouches"),
	HX_CSTRING("_touchesCache"),
	HX_CSTRING("getByID"),
	HX_CSTRING("getFirst"),
	HX_CSTRING("destroy"),
	HX_CSTRING("justStarted"),
	HX_CSTRING("justReleased"),
	HX_CSTRING("reset"),
	HX_CSTRING("handleTouchBegin"),
	HX_CSTRING("handleTouchEnd"),
	HX_CSTRING("handleTouchMove"),
	HX_CSTRING("add"),
	HX_CSTRING("recycle"),
	HX_CSTRING("update"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("onFocusLost"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTouchManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTouchManager_obj::maxTouchPoints,"maxTouchPoints");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTouchManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTouchManager_obj::maxTouchPoints,"maxTouchPoints");
};

#endif

Class FlxTouchManager_obj::__mClass;

void FlxTouchManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.touch.FlxTouchManager"), hx::TCanCast< FlxTouchManager_obj> ,sStaticFields,sMemberFields,
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

void FlxTouchManager_obj::__boot()
{
	maxTouchPoints= (int)0;
}

} // end namespace flixel
} // end namespace input
} // end namespace touch
