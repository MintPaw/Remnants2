#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
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
#ifndef INCLUDED_openfl__v2_events_KeyboardEvent
#include <openfl/_v2/events/KeyboardEvent.h>
#endif
namespace flixel{
namespace input{

Void FlxKeyManager_obj::__construct(::Class keyListClass)
{
HX_STACK_FRAME("flixel.input.FlxKeyManager","new",0x4637a4fc,"flixel.input.FlxKeyManager.new","flixel/input/FlxKeyManager.hx",8,0xfedfa8b6)
HX_STACK_THIS(this)
HX_STACK_ARG(keyListClass,"keyListClass")
{
	HX_STACK_LINE(40)
	this->_keyListMap = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(36)
	this->_keyListArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(19)
	this->preventDefaultKeys = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(13)
	this->enabled = true;
	HX_STACK_LINE(198)
	::openfl::_v2::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::_v2::events::KeyboardEvent_obj::KEY_DOWN,this->onKeyDown_dyn(),null(),null(),null());
	HX_STACK_LINE(199)
	::openfl::_v2::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::_v2::events::KeyboardEvent_obj::KEY_UP,this->onKeyUp_dyn(),null(),null(),null());
	HX_STACK_LINE(201)
	Dynamic _g = ::Type_obj::createInstance(keyListClass,Dynamic( Array_obj<Dynamic>::__new().Add((int)1).Add(hx::ObjectPtr<OBJ_>(this))));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(201)
	this->pressed = _g;
	HX_STACK_LINE(202)
	Dynamic _g1 = ::Type_obj::createInstance(keyListClass,Dynamic( Array_obj<Dynamic>::__new().Add((int)2).Add(hx::ObjectPtr<OBJ_>(this))));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(202)
	this->justPressed = _g1;
	HX_STACK_LINE(203)
	Dynamic _g2 = ::Type_obj::createInstance(keyListClass,Dynamic( Array_obj<Dynamic>::__new().Add((int)-1).Add(hx::ObjectPtr<OBJ_>(this))));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(203)
	this->justReleased = _g2;
}
;
	return null();
}

//FlxKeyManager_obj::~FlxKeyManager_obj() { }

Dynamic FlxKeyManager_obj::__CreateEmpty() { return  new FlxKeyManager_obj; }
hx::ObjectPtr< FlxKeyManager_obj > FlxKeyManager_obj::__new(::Class keyListClass)
{  hx::ObjectPtr< FlxKeyManager_obj > result = new FlxKeyManager_obj();
	result->__construct(keyListClass);
	return result;}

Dynamic FlxKeyManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxKeyManager_obj > result = new FlxKeyManager_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *FlxKeyManager_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	if (inType==typeid( ::flixel::input::IFlxInputManager_obj)) return operator ::flixel::input::IFlxInputManager_obj *();
	return super::__ToInterface(inType);
}

bool FlxKeyManager_obj::anyPressed( Dynamic KeyArray){
	HX_STACK_FRAME("flixel.input.FlxKeyManager","anyPressed",0xbdbeabfa,"flixel.input.FlxKeyManager.anyPressed","flixel/input/FlxKeyManager.hx",50,0xfedfa8b6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_LINE(50)
	return this->checkKeyArrayState(KeyArray,(int)1);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyManager_obj,anyPressed,return )

bool FlxKeyManager_obj::anyJustPressed( Dynamic KeyArray){
	HX_STACK_FRAME("flixel.input.FlxKeyManager","anyJustPressed",0x4d22732e,"flixel.input.FlxKeyManager.anyJustPressed","flixel/input/FlxKeyManager.hx",61,0xfedfa8b6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_LINE(61)
	return this->checkKeyArrayState(KeyArray,(int)2);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyManager_obj,anyJustPressed,return )

bool FlxKeyManager_obj::anyJustReleased( Dynamic KeyArray){
	HX_STACK_FRAME("flixel.input.FlxKeyManager","anyJustReleased",0x37d862b1,"flixel.input.FlxKeyManager.anyJustReleased","flixel/input/FlxKeyManager.hx",72,0xfedfa8b6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_LINE(72)
	return this->checkKeyArrayState(KeyArray,(int)-1);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyManager_obj,anyJustReleased,return )

int FlxKeyManager_obj::firstPressed( ){
	HX_STACK_FRAME("flixel.input.FlxKeyManager","firstPressed",0xa191a036,"flixel.input.FlxKeyManager.firstPressed","flixel/input/FlxKeyManager.hx",81,0xfedfa8b6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(82)
	{
		HX_STACK_LINE(82)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(82)
		Array< ::Dynamic > _g1 = this->_keyListArray;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(82)
		while((true)){
			HX_STACK_LINE(82)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(82)
				break;
			}
			HX_STACK_LINE(82)
			::flixel::input::FlxInput key = _g1->__get(_g).StaticCast< ::flixel::input::FlxInput >();		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(82)
			++(_g);
			HX_STACK_LINE(84)
			if (((bool((key != null())) && bool(((bool((key->current == (int)1)) || bool((key->current == (int)2)))))))){
				HX_STACK_LINE(86)
				return key->ID;
			}
		}
	}
	HX_STACK_LINE(89)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,firstPressed,return )

int FlxKeyManager_obj::firstJustPressed( ){
	HX_STACK_FRAME("flixel.input.FlxKeyManager","firstJustPressed",0xd38a356a,"flixel.input.FlxKeyManager.firstJustPressed","flixel/input/FlxKeyManager.hx",98,0xfedfa8b6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(99)
		Array< ::Dynamic > _g1 = this->_keyListArray;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(99)
		while((true)){
			HX_STACK_LINE(99)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(99)
				break;
			}
			HX_STACK_LINE(99)
			::flixel::input::FlxInput key = _g1->__get(_g).StaticCast< ::flixel::input::FlxInput >();		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(99)
			++(_g);
			HX_STACK_LINE(101)
			if (((bool((key != null())) && bool((key->current == (int)2))))){
				HX_STACK_LINE(103)
				return key->ID;
			}
		}
	}
	HX_STACK_LINE(106)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,firstJustPressed,return )

int FlxKeyManager_obj::firstJustReleased( ){
	HX_STACK_FRAME("flixel.input.FlxKeyManager","firstJustReleased",0x4c3a94f5,"flixel.input.FlxKeyManager.firstJustReleased","flixel/input/FlxKeyManager.hx",115,0xfedfa8b6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(116)
	{
		HX_STACK_LINE(116)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(116)
		Array< ::Dynamic > _g1 = this->_keyListArray;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(116)
		while((true)){
			HX_STACK_LINE(116)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(116)
				break;
			}
			HX_STACK_LINE(116)
			::flixel::input::FlxInput key = _g1->__get(_g).StaticCast< ::flixel::input::FlxInput >();		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(116)
			++(_g);
			HX_STACK_LINE(118)
			if (((bool((key != null())) && bool((key->current == (int)-1))))){
				HX_STACK_LINE(120)
				return key->ID;
			}
		}
	}
	HX_STACK_LINE(123)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,firstJustReleased,return )

bool FlxKeyManager_obj::checkStatus( Dynamic KeyCode,int Status){
	HX_STACK_FRAME("flixel.input.FlxKeyManager","checkStatus",0xbf018ab6,"flixel.input.FlxKeyManager.checkStatus","flixel/input/FlxKeyManager.hx",134,0xfedfa8b6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyCode,"KeyCode")
	HX_STACK_ARG(Status,"Status")
	HX_STACK_LINE(135)
	::flixel::input::FlxInput key = this->_keyListMap->get(KeyCode);		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(137)
	if (((key != null()))){
		HX_STACK_LINE(139)
		if ((key->hasState(Status))){
			HX_STACK_LINE(141)
			return true;
		}
	}
	HX_STACK_LINE(151)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyManager_obj,checkStatus,return )

Array< ::Dynamic > FlxKeyManager_obj::getIsDown( ){
	HX_STACK_FRAME("flixel.input.FlxKeyManager","getIsDown",0x4bba783e,"flixel.input.FlxKeyManager.getIsDown","flixel/input/FlxKeyManager.hx",160,0xfedfa8b6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(161)
	Array< ::Dynamic > keysDown = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(keysDown,"keysDown");
	HX_STACK_LINE(163)
	{
		HX_STACK_LINE(163)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(163)
		Array< ::Dynamic > _g1 = this->_keyListArray;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(163)
		while((true)){
			HX_STACK_LINE(163)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(163)
				break;
			}
			HX_STACK_LINE(163)
			::flixel::input::FlxInput key = _g1->__get(_g).StaticCast< ::flixel::input::FlxInput >();		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(163)
			++(_g);
			HX_STACK_LINE(165)
			if (((bool((key != null())) && bool(((bool((key->current == (int)1)) || bool((key->current == (int)2)))))))){
				HX_STACK_LINE(167)
				keysDown->push(key);
			}
		}
	}
	HX_STACK_LINE(170)
	return keysDown;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,getIsDown,return )

Void FlxKeyManager_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.FlxKeyManager","destroy",0x5d667f96,"flixel.input.FlxKeyManager.destroy","flixel/input/FlxKeyManager.hx",177,0xfedfa8b6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(178)
		this->_keyListArray = null();
		HX_STACK_LINE(179)
		this->_keyListMap = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,destroy,(void))

Void FlxKeyManager_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.FlxKeyManager","reset",0x4cbf7d6b,"flixel.input.FlxKeyManager.reset","flixel/input/FlxKeyManager.hx",187,0xfedfa8b6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(187)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(187)
		Array< ::Dynamic > _g1 = this->_keyListArray;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(187)
		while((true)){
			HX_STACK_LINE(187)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(187)
				break;
			}
			HX_STACK_LINE(187)
			::flixel::input::FlxInput key = _g1->__get(_g).StaticCast< ::flixel::input::FlxInput >();		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(187)
			++(_g);
			HX_STACK_LINE(189)
			if (((key != null()))){
				HX_STACK_LINE(191)
				key->release();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,reset,(void))

Void FlxKeyManager_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.FlxKeyManager","update",0x595b7aed,"flixel.input.FlxKeyManager.update","flixel/input/FlxKeyManager.hx",211,0xfedfa8b6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(211)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(211)
		Array< ::Dynamic > _g1 = this->_keyListArray;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		while((true)){
			HX_STACK_LINE(211)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(211)
				break;
			}
			HX_STACK_LINE(211)
			::flixel::input::FlxInput key = _g1->__get(_g).StaticCast< ::flixel::input::FlxInput >();		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(211)
			++(_g);
			HX_STACK_LINE(213)
			if (((key != null()))){
				HX_STACK_LINE(215)
				key->update();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,update,(void))

bool FlxKeyManager_obj::checkKeyArrayState( Dynamic KeyArray,int State){
	HX_STACK_FRAME("flixel.input.FlxKeyManager","checkKeyArrayState",0xb44c8d33,"flixel.input.FlxKeyManager.checkKeyArrayState","flixel/input/FlxKeyManager.hx",228,0xfedfa8b6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_ARG(State,"State")
	HX_STACK_LINE(229)
	if (((KeyArray == null()))){
		HX_STACK_LINE(231)
		return false;
	}
	HX_STACK_LINE(234)
	{
		HX_STACK_LINE(234)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(234)
		while((true)){
			HX_STACK_LINE(234)
			if ((!(((_g < KeyArray->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(234)
				break;
			}
			HX_STACK_LINE(234)
			Dynamic code = KeyArray->__GetItem(_g);		HX_STACK_VAR(code,"code");
			HX_STACK_LINE(234)
			++(_g);
			HX_STACK_LINE(236)
			::flixel::input::FlxInput key = this->_keyListMap->get(code);		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(238)
			if (((key != null()))){
				HX_STACK_LINE(240)
				if ((key->hasState(State))){
					HX_STACK_LINE(242)
					return true;
				}
			}
		}
	}
	HX_STACK_LINE(247)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyManager_obj,checkKeyArrayState,return )

Void FlxKeyManager_obj::onKeyUp( ::openfl::_v2::events::KeyboardEvent event){
{
		HX_STACK_FRAME("flixel.input.FlxKeyManager","onKeyUp",0xae1caad7,"flixel.input.FlxKeyManager.onKeyUp","flixel/input/FlxKeyManager.hx",254,0xfedfa8b6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(255)
		int c = this->resolveKeyCode(event);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(256)
		this->handlePreventDefaultKeys(c,event);
		HX_STACK_LINE(258)
		if ((this->enabled)){
			HX_STACK_LINE(260)
			::flixel::input::FlxInput key = this->_keyListMap->get(c);		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(260)
			if (((key != null()))){
				HX_STACK_LINE(260)
				key->release();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyManager_obj,onKeyUp,(void))

Void FlxKeyManager_obj::onKeyDown( ::openfl::_v2::events::KeyboardEvent event){
{
		HX_STACK_FRAME("flixel.input.FlxKeyManager","onKeyDown",0xe38153de,"flixel.input.FlxKeyManager.onKeyDown","flixel/input/FlxKeyManager.hx",268,0xfedfa8b6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(269)
		int c = this->resolveKeyCode(event);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(270)
		this->handlePreventDefaultKeys(c,event);
		HX_STACK_LINE(272)
		if ((this->enabled)){
			HX_STACK_LINE(274)
			::flixel::input::FlxInput key = this->_keyListMap->get(c);		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(274)
			if (((key != null()))){
				HX_STACK_LINE(274)
				key->press();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyManager_obj,onKeyDown,(void))

Void FlxKeyManager_obj::handlePreventDefaultKeys( int keyCode,::openfl::_v2::events::KeyboardEvent event){
{
		HX_STACK_FRAME("flixel.input.FlxKeyManager","handlePreventDefaultKeys",0x60508309,"flixel.input.FlxKeyManager.handlePreventDefaultKeys","flixel/input/FlxKeyManager.hx",279,0xfedfa8b6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(280)
		::flixel::input::FlxInput key = this->_keyListMap->get(keyCode);		HX_STACK_VAR(key,"key");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::flixel::input::FlxKeyManager_obj > __this,::flixel::input::FlxInput &key){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/input/FlxKeyManager.hx",281,0xfedfa8b6)
				{
					HX_STACK_LINE(281)
					int _g = __this->preventDefaultKeys->__Field(HX_CSTRING("indexOf"),true)(key->ID,null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(281)
					return (_g != (int)-1);
				}
				return null();
			}
		};
		HX_STACK_LINE(281)
		if (((  (((bool((key != null())) && bool((this->preventDefaultKeys != null()))))) ? bool(_Function_1_1::Block(this,key)) : bool(false) ))){
			HX_STACK_LINE(286)
			event->stopImmediatePropagation();
			HX_STACK_LINE(287)
			event->stopPropagation();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyManager_obj,handlePreventDefaultKeys,(void))

bool FlxKeyManager_obj::inKeyArray( Dynamic KeyArray,Dynamic Key){
	HX_STACK_FRAME("flixel.input.FlxKeyManager","inKeyArray",0xf3ad4f63,"flixel.input.FlxKeyManager.inKeyArray","flixel/input/FlxKeyManager.hx",297,0xfedfa8b6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyArray,"KeyArray")
	HX_STACK_ARG(Key,"Key")
	HX_STACK_LINE(298)
	if (((KeyArray == null()))){
		HX_STACK_LINE(300)
		return false;
	}
	else{
		HX_STACK_LINE(304)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(304)
		while((true)){
			HX_STACK_LINE(304)
			if ((!(((_g < KeyArray->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(304)
				break;
			}
			HX_STACK_LINE(304)
			Dynamic key = KeyArray->__GetItem(_g);		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(304)
			++(_g);
			HX_STACK_LINE(306)
			if (((bool((key == Key)) || bool((key == (int)-2))))){
				HX_STACK_LINE(308)
				return true;
			}
		}
	}
	HX_STACK_LINE(312)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyManager_obj,inKeyArray,return )

int FlxKeyManager_obj::resolveKeyCode( ::openfl::_v2::events::KeyboardEvent e){
	HX_STACK_FRAME("flixel.input.FlxKeyManager","resolveKeyCode",0x9a8225c4,"flixel.input.FlxKeyManager.resolveKeyCode","flixel/input/FlxKeyManager.hx",317,0xfedfa8b6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(317)
	return e->keyCode;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyManager_obj,resolveKeyCode,return )

Void FlxKeyManager_obj::updateKeyStates( int KeyCode,bool Down){
{
		HX_STACK_FRAME("flixel.input.FlxKeyManager","updateKeyStates",0xe52c7794,"flixel.input.FlxKeyManager.updateKeyStates","flixel/input/FlxKeyManager.hx",324,0xfedfa8b6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(KeyCode,"KeyCode")
		HX_STACK_ARG(Down,"Down")
		HX_STACK_LINE(325)
		::flixel::input::FlxInput key = this->_keyListMap->get(KeyCode);		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(327)
		if (((key != null()))){
			HX_STACK_LINE(329)
			if ((Down)){
				HX_STACK_LINE(331)
				key->press();
			}
			else{
				HX_STACK_LINE(335)
				key->release();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxKeyManager_obj,updateKeyStates,(void))

Void FlxKeyManager_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.input.FlxKeyManager","onFocus",0xd3a750d5,"flixel.input.FlxKeyManager.onFocus","flixel/input/FlxKeyManager.hx",340,0xfedfa8b6)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,onFocus,(void))

Void FlxKeyManager_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.input.FlxKeyManager","onFocusLost",0x1879b559,"flixel.input.FlxKeyManager.onFocusLost","flixel/input/FlxKeyManager.hx",344,0xfedfa8b6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(344)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyManager_obj,onFocusLost,(void))

::flixel::input::FlxInput FlxKeyManager_obj::getKey( int KeyCode){
	HX_STACK_FRAME("flixel.input.FlxKeyManager","getKey",0x7576b78d,"flixel.input.FlxKeyManager.getKey","flixel/input/FlxKeyManager.hx",352,0xfedfa8b6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(KeyCode,"KeyCode")
	HX_STACK_LINE(352)
	return this->_keyListMap->get(KeyCode);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyManager_obj,getKey,return )


FlxKeyManager_obj::FlxKeyManager_obj()
{
}

void FlxKeyManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxKeyManager);
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(preventDefaultKeys,"preventDefaultKeys");
	HX_MARK_MEMBER_NAME(pressed,"pressed");
	HX_MARK_MEMBER_NAME(justPressed,"justPressed");
	HX_MARK_MEMBER_NAME(justReleased,"justReleased");
	HX_MARK_MEMBER_NAME(_keyListArray,"_keyListArray");
	HX_MARK_MEMBER_NAME(_keyListMap,"_keyListMap");
	HX_MARK_END_CLASS();
}

void FlxKeyManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(preventDefaultKeys,"preventDefaultKeys");
	HX_VISIT_MEMBER_NAME(pressed,"pressed");
	HX_VISIT_MEMBER_NAME(justPressed,"justPressed");
	HX_VISIT_MEMBER_NAME(justReleased,"justReleased");
	HX_VISIT_MEMBER_NAME(_keyListArray,"_keyListArray");
	HX_VISIT_MEMBER_NAME(_keyListMap,"_keyListMap");
}

Dynamic FlxKeyManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"getKey") ) { return getKey_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getIsDown") ) { return getIsDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"anyPressed") ) { return anyPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"inKeyArray") ) { return inKeyArray_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return justPressed; }
		if (HX_FIELD_EQ(inName,"_keyListMap") ) { return _keyListMap; }
		if (HX_FIELD_EQ(inName,"checkStatus") ) { return checkStatus_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased; }
		if (HX_FIELD_EQ(inName,"firstPressed") ) { return firstPressed_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_keyListArray") ) { return _keyListArray; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"anyJustPressed") ) { return anyJustPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"resolveKeyCode") ) { return resolveKeyCode_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"anyJustReleased") ) { return anyJustReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"updateKeyStates") ) { return updateKeyStates_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"firstJustPressed") ) { return firstJustPressed_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"firstJustReleased") ) { return firstJustReleased_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"preventDefaultKeys") ) { return preventDefaultKeys; }
		if (HX_FIELD_EQ(inName,"checkKeyArrayState") ) { return checkKeyArrayState_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"handlePreventDefaultKeys") ) { return handlePreventDefaultKeys_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxKeyManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pressed") ) { pressed=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { justPressed=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keyListMap") ) { _keyListMap=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { justReleased=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_keyListArray") ) { _keyListArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"preventDefaultKeys") ) { preventDefaultKeys=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxKeyManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("enabled"));
	outFields->push(HX_CSTRING("preventDefaultKeys"));
	outFields->push(HX_CSTRING("pressed"));
	outFields->push(HX_CSTRING("justPressed"));
	outFields->push(HX_CSTRING("justReleased"));
	outFields->push(HX_CSTRING("_keyListArray"));
	outFields->push(HX_CSTRING("_keyListMap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxKeyManager_obj,enabled),HX_CSTRING("enabled")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxKeyManager_obj,preventDefaultKeys),HX_CSTRING("preventDefaultKeys")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxKeyManager_obj,pressed),HX_CSTRING("pressed")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxKeyManager_obj,justPressed),HX_CSTRING("justPressed")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxKeyManager_obj,justReleased),HX_CSTRING("justReleased")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxKeyManager_obj,_keyListArray),HX_CSTRING("_keyListArray")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(FlxKeyManager_obj,_keyListMap),HX_CSTRING("_keyListMap")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("enabled"),
	HX_CSTRING("preventDefaultKeys"),
	HX_CSTRING("pressed"),
	HX_CSTRING("justPressed"),
	HX_CSTRING("justReleased"),
	HX_CSTRING("_keyListArray"),
	HX_CSTRING("_keyListMap"),
	HX_CSTRING("anyPressed"),
	HX_CSTRING("anyJustPressed"),
	HX_CSTRING("anyJustReleased"),
	HX_CSTRING("firstPressed"),
	HX_CSTRING("firstJustPressed"),
	HX_CSTRING("firstJustReleased"),
	HX_CSTRING("checkStatus"),
	HX_CSTRING("getIsDown"),
	HX_CSTRING("destroy"),
	HX_CSTRING("reset"),
	HX_CSTRING("update"),
	HX_CSTRING("checkKeyArrayState"),
	HX_CSTRING("onKeyUp"),
	HX_CSTRING("onKeyDown"),
	HX_CSTRING("handlePreventDefaultKeys"),
	HX_CSTRING("inKeyArray"),
	HX_CSTRING("resolveKeyCode"),
	HX_CSTRING("updateKeyStates"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("getKey"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxKeyManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxKeyManager_obj::__mClass,"__mClass");
};

#endif

Class FlxKeyManager_obj::__mClass;

void FlxKeyManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.FlxKeyManager"), hx::TCanCast< FlxKeyManager_obj> ,sStaticFields,sMemberFields,
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

void FlxKeyManager_obj::__boot()
{
}

} // end namespace flixel
} // end namespace input
