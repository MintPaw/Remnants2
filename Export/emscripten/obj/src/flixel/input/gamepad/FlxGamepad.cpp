#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxAxes
#include <flixel/input/gamepad/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadDeadZoneMode
#include <flixel/input/gamepad/FlxGamepadDeadZoneMode.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVector
#include <flixel/math/FlxVector.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxVector
#include <flixel/util/FlxPool_flixel_math_FlxVector.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

Void FlxGamepad_obj::__construct(int ID,hx::Null< Float >  __o_GlobalDeadZone)
{
HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","new",0x48c92544,"flixel.input.gamepad.FlxGamepad.new","flixel/input/gamepad/FlxGamepad.hx",15,0xdb78a809)
HX_STACK_THIS(this)
HX_STACK_ARG(ID,"ID")
HX_STACK_ARG(__o_GlobalDeadZone,"GlobalDeadZone")
Float GlobalDeadZone = __o_GlobalDeadZone.Default(0);
{
	struct _Function_1_1{
		inline static Array< Float > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/input/gamepad/FlxGamepad.hx",44,0xdb78a809)
			{
				HX_STACK_LINE(44)
				Array< Float > _g = Array_obj< Float >::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(44)
				{
					HX_STACK_LINE(44)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(44)
					while((true)){
						HX_STACK_LINE(44)
						if ((!(((_g1 < (int)6))))){
							HX_STACK_LINE(44)
							break;
						}
						HX_STACK_LINE(44)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(44)
						_g->push((int)0);
					}
				}
				HX_STACK_LINE(44)
				return _g;
			}
			return null();
		}
	};
	HX_STACK_LINE(44)
	this->axis = _Function_1_1::Block();
	HX_STACK_LINE(38)
	this->dpadRight = false;
	HX_STACK_LINE(37)
	this->dpadLeft = false;
	HX_STACK_LINE(36)
	this->dpadDown = false;
	HX_STACK_LINE(35)
	this->dpadUp = false;
	struct _Function_1_2{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/input/gamepad/FlxGamepad.hx",33,0xdb78a809)
			{
				HX_STACK_LINE(33)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(33)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(33)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(33)
				point->_inPool = false;
				HX_STACK_LINE(33)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(33)
	this->ball = _Function_1_2::Block();
	struct _Function_1_3{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/input/gamepad/FlxGamepad.hx",32,0xdb78a809)
			{
				HX_STACK_LINE(32)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(32)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(32)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(32)
				point->_inPool = false;
				HX_STACK_LINE(32)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(32)
	this->hat = _Function_1_3::Block();
	HX_STACK_LINE(29)
	this->deadZoneMode = ::flixel::input::gamepad::FlxGamepadDeadZoneMode_obj::INDEPENDANT_AXES;
	HX_STACK_LINE(25)
	this->deadZone = 0.15;
	HX_STACK_LINE(19)
	this->connected = true;
	HX_STACK_LINE(18)
	this->buttons = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(52)
	this->id = ID;
	HX_STACK_LINE(54)
	if (((GlobalDeadZone != (int)0))){
		HX_STACK_LINE(56)
		this->deadZone = GlobalDeadZone;
	}
}
;
	return null();
}

//FlxGamepad_obj::~FlxGamepad_obj() { }

Dynamic FlxGamepad_obj::__CreateEmpty() { return  new FlxGamepad_obj; }
hx::ObjectPtr< FlxGamepad_obj > FlxGamepad_obj::__new(int ID,hx::Null< Float >  __o_GlobalDeadZone)
{  hx::ObjectPtr< FlxGamepad_obj > result = new FlxGamepad_obj();
	result->__construct(ID,__o_GlobalDeadZone);
	return result;}

Dynamic FlxGamepad_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGamepad_obj > result = new FlxGamepad_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *FlxGamepad_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

::flixel::input::gamepad::FlxGamepadButton FlxGamepad_obj::getButton( int ButtonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getButton",0xf881030c,"flixel.input.gamepad.FlxGamepad.getButton","flixel/input/gamepad/FlxGamepad.hx",61,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonID,"ButtonID")
	HX_STACK_LINE(62)
	::flixel::input::gamepad::FlxGamepadButton gamepadButton = this->buttons->__get(ButtonID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(gamepadButton,"gamepadButton");
	HX_STACK_LINE(64)
	if (((gamepadButton == null()))){
		HX_STACK_LINE(66)
		::flixel::input::gamepad::FlxGamepadButton _g = ::flixel::input::gamepad::FlxGamepadButton_obj::__new(ButtonID);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(66)
		gamepadButton = _g;
		HX_STACK_LINE(67)
		this->buttons[ButtonID] = gamepadButton;
	}
	HX_STACK_LINE(70)
	return gamepadButton;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getButton,return )

Void FlxGamepad_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","update",0x525157a5,"flixel.input.gamepad.FlxGamepad.update","flixel/input/gamepad/FlxGamepad.hx",104,0xdb78a809)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(104)
		Array< ::Dynamic > _g1 = this->buttons;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(104)
		while((true)){
			HX_STACK_LINE(104)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(104)
				break;
			}
			HX_STACK_LINE(104)
			::flixel::input::gamepad::FlxGamepadButton button = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(button,"button");
			HX_STACK_LINE(104)
			++(_g);
			HX_STACK_LINE(106)
			if (((button != null()))){
				HX_STACK_LINE(108)
				button->update();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,update,(void))

Void FlxGamepad_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","reset",0x36e79fb3,"flixel.input.gamepad.FlxGamepad.reset","flixel/input/gamepad/FlxGamepad.hx",114,0xdb78a809)
		HX_STACK_THIS(this)
		HX_STACK_LINE(115)
		{
			HX_STACK_LINE(115)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(115)
			Array< ::Dynamic > _g1 = this->buttons;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(115)
			while((true)){
				HX_STACK_LINE(115)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(115)
					break;
				}
				HX_STACK_LINE(115)
				::flixel::input::gamepad::FlxGamepadButton button = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(button,"button");
				HX_STACK_LINE(115)
				++(_g);
				HX_STACK_LINE(117)
				if (((button != null()))){
					HX_STACK_LINE(119)
					button->reset();
				}
			}
		}
		HX_STACK_LINE(123)
		int numAxis = this->axis->length;		HX_STACK_VAR(numAxis,"numAxis");
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(125)
			while((true)){
				HX_STACK_LINE(125)
				if ((!(((_g < numAxis))))){
					HX_STACK_LINE(125)
					break;
				}
				HX_STACK_LINE(125)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(127)
				this->axis[i] = (int)0;
			}
		}
		HX_STACK_LINE(131)
		this->hat->set(null(),null());
		HX_STACK_LINE(132)
		this->ball->set(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,reset,(void))

Void FlxGamepad_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","destroy",0x3b91c3de,"flixel.input.gamepad.FlxGamepad.destroy","flixel/input/gamepad/FlxGamepad.hx",137,0xdb78a809)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		this->connected = false;
		HX_STACK_LINE(140)
		this->buttons = null();
		HX_STACK_LINE(141)
		this->axis = null();
		HX_STACK_LINE(144)
		::flixel::math::FlxPoint _g = ::flixel::util::FlxDestroyUtil_obj::put(this->hat);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(144)
		this->hat = _g;
		HX_STACK_LINE(145)
		::flixel::math::FlxPoint _g1 = ::flixel::util::FlxDestroyUtil_obj::put(this->ball);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(145)
		this->ball = _g1;
		HX_STACK_LINE(147)
		this->hat = null();
		HX_STACK_LINE(148)
		this->ball = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,destroy,(void))

bool FlxGamepad_obj::checkStatus( int ButtonID,int Status){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","checkStatus",0x42f892fe,"flixel.input.gamepad.FlxGamepad.checkStatus","flixel/input/gamepad/FlxGamepad.hx",160,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonID,"ButtonID")
	HX_STACK_ARG(Status,"Status")
	HX_STACK_LINE(161)
	if (((this->buttons->__get(ButtonID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >() != null()))){
		HX_STACK_LINE(163)
		return (this->buttons->__get(ButtonID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >()->current == Status);
	}
	HX_STACK_LINE(165)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGamepad_obj,checkStatus,return )

bool FlxGamepad_obj::anyPressed( Array< int > ButtonIDArray){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","anyPressed",0xee8d44b2,"flixel.input.gamepad.FlxGamepad.anyPressed","flixel/input/gamepad/FlxGamepad.hx",175,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonIDArray,"ButtonIDArray")
	HX_STACK_LINE(176)
	{
		HX_STACK_LINE(176)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(176)
		while((true)){
			HX_STACK_LINE(176)
			if ((!(((_g < ButtonIDArray->length))))){
				HX_STACK_LINE(176)
				break;
			}
			HX_STACK_LINE(176)
			int b = ButtonIDArray->__get(_g);		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(176)
			++(_g);
			HX_STACK_LINE(178)
			if (((this->buttons->__get(b).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >() != null()))){
				struct _Function_4_1{
					inline static bool Block( hx::ObjectPtr< ::flixel::input::gamepad::FlxGamepad_obj > __this,int &b){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/input/gamepad/FlxGamepad.hx",180,0xdb78a809)
						{
							HX_STACK_LINE(180)
							::flixel::input::gamepad::FlxGamepadButton _this = __this->buttons->__get(b).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(180)
							return (bool((_this->current == (int)1)) || bool((_this->current == (int)2)));
						}
						return null();
					}
				};
				HX_STACK_LINE(180)
				if ((_Function_4_1::Block(this,b))){
					HX_STACK_LINE(181)
					return true;
				}
			}
		}
	}
	HX_STACK_LINE(185)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,anyPressed,return )

bool FlxGamepad_obj::anyJustPressed( Array< int > ButtonIDArray){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","anyJustPressed",0xd6d7c7e6,"flixel.input.gamepad.FlxGamepad.anyJustPressed","flixel/input/gamepad/FlxGamepad.hx",195,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonIDArray,"ButtonIDArray")
	HX_STACK_LINE(196)
	{
		HX_STACK_LINE(196)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(196)
		while((true)){
			HX_STACK_LINE(196)
			if ((!(((_g < ButtonIDArray->length))))){
				HX_STACK_LINE(196)
				break;
			}
			HX_STACK_LINE(196)
			int b = ButtonIDArray->__get(_g);		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(196)
			++(_g);
			HX_STACK_LINE(198)
			if (((this->buttons->__get(b).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >() != null()))){
				HX_STACK_LINE(200)
				if (((this->buttons->__get(b).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >()->current == (int)2))){
					HX_STACK_LINE(201)
					return true;
				}
			}
		}
	}
	HX_STACK_LINE(205)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,anyJustPressed,return )

bool FlxGamepad_obj::anyJustReleased( Array< int > ButtonIDArray){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","anyJustReleased",0x2ccd2ef9,"flixel.input.gamepad.FlxGamepad.anyJustReleased","flixel/input/gamepad/FlxGamepad.hx",215,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonIDArray,"ButtonIDArray")
	HX_STACK_LINE(216)
	{
		HX_STACK_LINE(216)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(216)
		while((true)){
			HX_STACK_LINE(216)
			if ((!(((_g < ButtonIDArray->length))))){
				HX_STACK_LINE(216)
				break;
			}
			HX_STACK_LINE(216)
			int b = ButtonIDArray->__get(_g);		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(216)
			++(_g);
			HX_STACK_LINE(218)
			if (((this->buttons->__get(b).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >() != null()))){
				HX_STACK_LINE(220)
				if (((this->buttons->__get(b).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >()->current == (int)-1))){
					HX_STACK_LINE(221)
					return true;
				}
			}
		}
	}
	HX_STACK_LINE(225)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,anyJustReleased,return )

bool FlxGamepad_obj::pressed( int ButtonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","pressed",0x50f26986,"flixel.input.gamepad.FlxGamepad.pressed","flixel/input/gamepad/FlxGamepad.hx",235,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonID,"ButtonID")
	HX_STACK_LINE(236)
	if (((this->buttons->__get(ButtonID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >() != null()))){
		HX_STACK_LINE(238)
		::flixel::input::gamepad::FlxGamepadButton _this = this->buttons->__get(ButtonID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(238)
		return (bool((_this->current == (int)1)) || bool((_this->current == (int)2)));
	}
	HX_STACK_LINE(240)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,pressed,return )

bool FlxGamepad_obj::justPressed( int ButtonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","justPressed",0x4d91e6ba,"flixel.input.gamepad.FlxGamepad.justPressed","flixel/input/gamepad/FlxGamepad.hx",250,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonID,"ButtonID")
	HX_STACK_LINE(251)
	if (((this->buttons->__get(ButtonID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >() != null()))){
		HX_STACK_LINE(253)
		return (this->buttons->__get(ButtonID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >()->current == (int)2);
	}
	HX_STACK_LINE(255)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,justPressed,return )

bool FlxGamepad_obj::justReleased( int ButtonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","justReleased",0x98ee09a5,"flixel.input.gamepad.FlxGamepad.justReleased","flixel/input/gamepad/FlxGamepad.hx",265,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ButtonID,"ButtonID")
	HX_STACK_LINE(266)
	if (((this->buttons->__get(ButtonID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >() != null()))){
		HX_STACK_LINE(268)
		return (this->buttons->__get(ButtonID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >()->current == (int)-1);
	}
	HX_STACK_LINE(270)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,justReleased,return )

int FlxGamepad_obj::firstPressedButtonID( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","firstPressedButtonID",0xdedbb35b,"flixel.input.gamepad.FlxGamepad.firstPressedButtonID","flixel/input/gamepad/FlxGamepad.hx",278,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(279)
	{
		HX_STACK_LINE(279)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(279)
		Array< ::Dynamic > _g1 = this->buttons;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(279)
		while((true)){
			HX_STACK_LINE(279)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(279)
				break;
			}
			HX_STACK_LINE(279)
			::flixel::input::gamepad::FlxGamepadButton button = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(button,"button");
			HX_STACK_LINE(279)
			++(_g);
			HX_STACK_LINE(281)
			if (((bool((button != null())) && bool(((bool((button->current == (int)0)) || bool((button->current == (int)-1)))))))){
				HX_STACK_LINE(283)
				return button->ID;
			}
		}
	}
	HX_STACK_LINE(286)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,firstPressedButtonID,return )

int FlxGamepad_obj::firstJustPressedButtonID( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","firstJustPressedButtonID",0x2f24588f,"flixel.input.gamepad.FlxGamepad.firstJustPressedButtonID","flixel/input/gamepad/FlxGamepad.hx",294,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(295)
	{
		HX_STACK_LINE(295)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(295)
		Array< ::Dynamic > _g1 = this->buttons;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(295)
		while((true)){
			HX_STACK_LINE(295)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(295)
				break;
			}
			HX_STACK_LINE(295)
			::flixel::input::gamepad::FlxGamepadButton button = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(button,"button");
			HX_STACK_LINE(295)
			++(_g);
			HX_STACK_LINE(297)
			if (((bool((button != null())) && bool((button->current == (int)2))))){
				HX_STACK_LINE(299)
				return button->ID;
			}
		}
	}
	HX_STACK_LINE(302)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,firstJustPressedButtonID,return )

int FlxGamepad_obj::firstJustReleasedButtonID( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","firstJustReleasedButtonID",0x67d646aa,"flixel.input.gamepad.FlxGamepad.firstJustReleasedButtonID","flixel/input/gamepad/FlxGamepad.hx",310,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(311)
	{
		HX_STACK_LINE(311)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(311)
		Array< ::Dynamic > _g1 = this->buttons;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(311)
		while((true)){
			HX_STACK_LINE(311)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(311)
				break;
			}
			HX_STACK_LINE(311)
			::flixel::input::gamepad::FlxGamepadButton button = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(button,"button");
			HX_STACK_LINE(311)
			++(_g);
			HX_STACK_LINE(313)
			if (((bool((button != null())) && bool((button->current == (int)-1))))){
				HX_STACK_LINE(315)
				return button->ID;
			}
		}
	}
	HX_STACK_LINE(318)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,firstJustReleasedButtonID,return )

Float FlxGamepad_obj::getAxis( int AxisID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getAxis",0x2a07633b,"flixel.input.gamepad.FlxGamepad.getAxis","flixel/input/gamepad/FlxGamepad.hx",326,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AxisID,"AxisID")
	HX_STACK_LINE(327)
	Float axisValue = this->getAxisValue(AxisID);		HX_STACK_VAR(axisValue,"axisValue");
	HX_STACK_LINE(328)
	Float _g = ::Math_obj::abs(axisValue);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(328)
	if (((_g > this->deadZone))){
		HX_STACK_LINE(330)
		return axisValue;
	}
	HX_STACK_LINE(332)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getAxis,return )

Float FlxGamepad_obj::getXAxis( ::haxe::ds::EnumValueMap Axes){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getXAxis",0xb657655f,"flixel.input.gamepad.FlxGamepad.getXAxis","flixel/input/gamepad/FlxGamepad.hx",340,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Axes,"Axes")
	HX_STACK_LINE(340)
	return this->getAnalogueAxisValue(::flixel::input::gamepad::FlxAxes_obj::X,Axes);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getXAxis,return )

Float FlxGamepad_obj::getYAxis( ::haxe::ds::EnumValueMap Axes){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getYAxis",0x49bdf9e0,"flixel.input.gamepad.FlxGamepad.getYAxis","flixel/input/gamepad/FlxGamepad.hx",348,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Axes,"Axes")
	HX_STACK_LINE(349)
	Float axisValue = this->getAnalogueAxisValue(::flixel::input::gamepad::FlxAxes_obj::Y,Axes);		HX_STACK_VAR(axisValue,"axisValue");
	HX_STACK_LINE(361)
	return axisValue;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getYAxis,return )

bool FlxGamepad_obj::anyButton( hx::Null< int >  __o_state){
int state = __o_state.Default(1);
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","anyButton",0xd989e1e2,"flixel.input.gamepad.FlxGamepad.anyButton","flixel/input/gamepad/FlxGamepad.hx",368,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(state,"state")
{
		HX_STACK_LINE(369)
		{
			HX_STACK_LINE(369)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(369)
			Array< ::Dynamic > _g1 = this->buttons;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(369)
			while((true)){
				HX_STACK_LINE(369)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(369)
					break;
				}
				HX_STACK_LINE(369)
				::flixel::input::gamepad::FlxGamepadButton button = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(button,"button");
				HX_STACK_LINE(369)
				++(_g);
				HX_STACK_LINE(371)
				if (((  (((button != null()))) ? bool(button->hasState(state)) : bool(false) ))){
					HX_STACK_LINE(373)
					return true;
				}
			}
		}
		HX_STACK_LINE(376)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,anyButton,return )

bool FlxGamepad_obj::anyInput( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","anyInput",0x4fe8921a,"flixel.input.gamepad.FlxGamepad.anyInput","flixel/input/gamepad/FlxGamepad.hx",383,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(384)
	if ((this->anyButton(null()))){
		HX_STACK_LINE(385)
		return true;
	}
	HX_STACK_LINE(387)
	int numAxis = this->axis->length;		HX_STACK_VAR(numAxis,"numAxis");
	HX_STACK_LINE(389)
	{
		HX_STACK_LINE(389)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(389)
		while((true)){
			HX_STACK_LINE(389)
			if ((!(((_g < numAxis))))){
				HX_STACK_LINE(389)
				break;
			}
			HX_STACK_LINE(389)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(391)
			if (((this->axis->__get((int)0) != (int)0))){
				HX_STACK_LINE(393)
				return true;
			}
		}
	}
	HX_STACK_LINE(398)
	if (((bool((this->ball->x != (int)0)) || bool((this->ball->y != (int)0))))){
		HX_STACK_LINE(400)
		return true;
	}
	HX_STACK_LINE(403)
	if (((bool((this->hat->x != (int)0)) || bool((this->hat->y != (int)0))))){
		HX_STACK_LINE(405)
		return true;
	}
	HX_STACK_LINE(409)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,anyInput,return )

Float FlxGamepad_obj::getAxisValue( int AxisID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getAxisValue",0xcd45f636,"flixel.input.gamepad.FlxGamepad.getAxisValue","flixel/input/gamepad/FlxGamepad.hx",413,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AxisID,"AxisID")
	HX_STACK_LINE(414)
	if (((bool((AxisID < (int)0)) || bool((AxisID >= this->axis->length))))){
		HX_STACK_LINE(416)
		return (int)0;
	}
	HX_STACK_LINE(419)
	Float axisValue = (int)0;		HX_STACK_VAR(axisValue,"axisValue");
	HX_STACK_LINE(427)
	axisValue = this->axis->__get(AxisID);
	HX_STACK_LINE(430)
	return axisValue;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getAxisValue,return )

Float FlxGamepad_obj::getAnalogueAxisValue( ::flixel::input::gamepad::FlxAxes Axis,::haxe::ds::EnumValueMap Axes){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getAnalogueAxisValue",0xa3003396,"flixel.input.gamepad.FlxGamepad.getAnalogueAxisValue","flixel/input/gamepad/FlxGamepad.hx",434,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Axis,"Axis")
	HX_STACK_ARG(Axes,"Axes")
	HX_STACK_LINE(435)
	if (((this->deadZoneMode == ::flixel::input::gamepad::FlxGamepadDeadZoneMode_obj::CIRCULAR))){
		HX_STACK_LINE(437)
		Dynamic _g = Axes->get(::flixel::input::gamepad::FlxAxes_obj::X);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(437)
		Float xAxis = this->getAxisValue(_g);		HX_STACK_VAR(xAxis,"xAxis");
		HX_STACK_LINE(438)
		Dynamic _g1 = Axes->get(::flixel::input::gamepad::FlxAxes_obj::Y);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(438)
		Float yAxis = this->getAxisValue(_g1);		HX_STACK_VAR(yAxis,"yAxis");
		HX_STACK_LINE(440)
		::flixel::math::FlxVector vector;		HX_STACK_VAR(vector,"vector");
		HX_STACK_LINE(440)
		{
			HX_STACK_LINE(440)
			::flixel::math::FlxVector vector1 = hx::TCast< ::flixel::math::FlxVector >::cast(::flixel::math::FlxVector_obj::_pool->get()->set(xAxis,yAxis));		HX_STACK_VAR(vector1,"vector1");
			HX_STACK_LINE(440)
			vector1->_inPool = false;
			HX_STACK_LINE(440)
			vector = vector1;
		}
		HX_STACK_LINE(441)
		Float length = ::Math_obj::sqrt(((vector->x * vector->x) + (vector->y * vector->y)));		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(442)
		vector->put();
		HX_STACK_LINE(444)
		if (((length > this->deadZone))){
			HX_STACK_LINE(446)
			if (((Axis == ::flixel::input::gamepad::FlxAxes_obj::X))){
				HX_STACK_LINE(446)
				return xAxis;
			}
			else{
				HX_STACK_LINE(446)
				return yAxis;
			}
		}
	}
	else{
		HX_STACK_LINE(451)
		Dynamic _g2 = Axes->get(Axis);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(451)
		Float axisValue = this->getAxisValue(_g2);		HX_STACK_VAR(axisValue,"axisValue");
		HX_STACK_LINE(452)
		Float _g3 = ::Math_obj::abs(axisValue);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(452)
		if (((_g3 > this->deadZone))){
			HX_STACK_LINE(454)
			return axisValue;
		}
	}
	HX_STACK_LINE(458)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGamepad_obj,getAnalogueAxisValue,return )

bool FlxGamepad_obj::get_dpadUp( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","get_dpadUp",0x080d2b0f,"flixel.input.gamepad.FlxGamepad.get_dpadUp","flixel/input/gamepad/FlxGamepad.hx",462,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(462)
	return (this->hat->y < (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,get_dpadUp,return )

bool FlxGamepad_obj::get_dpadDown( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","get_dpadDown",0xfabc5216,"flixel.input.gamepad.FlxGamepad.get_dpadDown","flixel/input/gamepad/FlxGamepad.hx",463,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(463)
	return (this->hat->y > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,get_dpadDown,return )

bool FlxGamepad_obj::get_dpadLeft( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","get_dpadLeft",0xfffe61bb,"flixel.input.gamepad.FlxGamepad.get_dpadLeft","flixel/input/gamepad/FlxGamepad.hx",464,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(464)
	return (this->hat->x < (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,get_dpadLeft,return )

bool FlxGamepad_obj::get_dpadRight( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","get_dpadRight",0x75a42fa8,"flixel.input.gamepad.FlxGamepad.get_dpadRight","flixel/input/gamepad/FlxGamepad.hx",465,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(465)
	return (this->hat->x > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,get_dpadRight,return )


FlxGamepad_obj::FlxGamepad_obj()
{
}

void FlxGamepad_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepad);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(buttons,"buttons");
	HX_MARK_MEMBER_NAME(connected,"connected");
	HX_MARK_MEMBER_NAME(deadZone,"deadZone");
	HX_MARK_MEMBER_NAME(deadZoneMode,"deadZoneMode");
	HX_MARK_MEMBER_NAME(hat,"hat");
	HX_MARK_MEMBER_NAME(ball,"ball");
	HX_MARK_MEMBER_NAME(dpadUp,"dpadUp");
	HX_MARK_MEMBER_NAME(dpadDown,"dpadDown");
	HX_MARK_MEMBER_NAME(dpadLeft,"dpadLeft");
	HX_MARK_MEMBER_NAME(dpadRight,"dpadRight");
	HX_MARK_MEMBER_NAME(axis,"axis");
	HX_MARK_END_CLASS();
}

void FlxGamepad_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(buttons,"buttons");
	HX_VISIT_MEMBER_NAME(connected,"connected");
	HX_VISIT_MEMBER_NAME(deadZone,"deadZone");
	HX_VISIT_MEMBER_NAME(deadZoneMode,"deadZoneMode");
	HX_VISIT_MEMBER_NAME(hat,"hat");
	HX_VISIT_MEMBER_NAME(ball,"ball");
	HX_VISIT_MEMBER_NAME(dpadUp,"dpadUp");
	HX_VISIT_MEMBER_NAME(dpadDown,"dpadDown");
	HX_VISIT_MEMBER_NAME(dpadLeft,"dpadLeft");
	HX_VISIT_MEMBER_NAME(dpadRight,"dpadRight");
	HX_VISIT_MEMBER_NAME(axis,"axis");
}

Dynamic FlxGamepad_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"hat") ) { return hat; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { return ball; }
		if (HX_FIELD_EQ(inName,"axis") ) { return axis; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"dpadUp") ) { return inCallProp ? get_dpadUp() : dpadUp; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttons") ) { return buttons; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"getAxis") ) { return getAxis_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadZone") ) { return deadZone; }
		if (HX_FIELD_EQ(inName,"dpadDown") ) { return inCallProp ? get_dpadDown() : dpadDown; }
		if (HX_FIELD_EQ(inName,"dpadLeft") ) { return inCallProp ? get_dpadLeft() : dpadLeft; }
		if (HX_FIELD_EQ(inName,"getXAxis") ) { return getXAxis_dyn(); }
		if (HX_FIELD_EQ(inName,"getYAxis") ) { return getYAxis_dyn(); }
		if (HX_FIELD_EQ(inName,"anyInput") ) { return anyInput_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { return connected; }
		if (HX_FIELD_EQ(inName,"dpadRight") ) { return inCallProp ? get_dpadRight() : dpadRight; }
		if (HX_FIELD_EQ(inName,"getButton") ) { return getButton_dyn(); }
		if (HX_FIELD_EQ(inName,"anyButton") ) { return anyButton_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"anyPressed") ) { return anyPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dpadUp") ) { return get_dpadUp_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"checkStatus") ) { return checkStatus_dyn(); }
		if (HX_FIELD_EQ(inName,"justPressed") ) { return justPressed_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"deadZoneMode") ) { return deadZoneMode; }
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"getAxisValue") ) { return getAxisValue_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dpadDown") ) { return get_dpadDown_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dpadLeft") ) { return get_dpadLeft_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_dpadRight") ) { return get_dpadRight_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"anyJustPressed") ) { return anyJustPressed_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"anyJustReleased") ) { return anyJustReleased_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"firstPressedButtonID") ) { return firstPressedButtonID_dyn(); }
		if (HX_FIELD_EQ(inName,"getAnalogueAxisValue") ) { return getAnalogueAxisValue_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"firstJustPressedButtonID") ) { return firstJustPressedButtonID_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"firstJustReleasedButtonID") ) { return firstJustReleasedButtonID_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGamepad_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"hat") ) { hat=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { ball=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"axis") ) { axis=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"dpadUp") ) { dpadUp=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttons") ) { buttons=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadZone") ) { deadZone=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dpadDown") ) { dpadDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dpadLeft") ) { dpadLeft=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { connected=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dpadRight") ) { dpadRight=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"deadZoneMode") ) { deadZoneMode=inValue.Cast< ::flixel::input::gamepad::FlxGamepadDeadZoneMode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("buttons"));
	outFields->push(HX_CSTRING("connected"));
	outFields->push(HX_CSTRING("deadZone"));
	outFields->push(HX_CSTRING("deadZoneMode"));
	outFields->push(HX_CSTRING("hat"));
	outFields->push(HX_CSTRING("ball"));
	outFields->push(HX_CSTRING("dpadUp"));
	outFields->push(HX_CSTRING("dpadDown"));
	outFields->push(HX_CSTRING("dpadLeft"));
	outFields->push(HX_CSTRING("dpadRight"));
	outFields->push(HX_CSTRING("axis"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxGamepad_obj,id),HX_CSTRING("id")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxGamepad_obj,buttons),HX_CSTRING("buttons")},
	{hx::fsBool,(int)offsetof(FlxGamepad_obj,connected),HX_CSTRING("connected")},
	{hx::fsFloat,(int)offsetof(FlxGamepad_obj,deadZone),HX_CSTRING("deadZone")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadDeadZoneMode*/ ,(int)offsetof(FlxGamepad_obj,deadZoneMode),HX_CSTRING("deadZoneMode")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxGamepad_obj,hat),HX_CSTRING("hat")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxGamepad_obj,ball),HX_CSTRING("ball")},
	{hx::fsBool,(int)offsetof(FlxGamepad_obj,dpadUp),HX_CSTRING("dpadUp")},
	{hx::fsBool,(int)offsetof(FlxGamepad_obj,dpadDown),HX_CSTRING("dpadDown")},
	{hx::fsBool,(int)offsetof(FlxGamepad_obj,dpadLeft),HX_CSTRING("dpadLeft")},
	{hx::fsBool,(int)offsetof(FlxGamepad_obj,dpadRight),HX_CSTRING("dpadRight")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxGamepad_obj,axis),HX_CSTRING("axis")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("buttons"),
	HX_CSTRING("connected"),
	HX_CSTRING("deadZone"),
	HX_CSTRING("deadZoneMode"),
	HX_CSTRING("hat"),
	HX_CSTRING("ball"),
	HX_CSTRING("dpadUp"),
	HX_CSTRING("dpadDown"),
	HX_CSTRING("dpadLeft"),
	HX_CSTRING("dpadRight"),
	HX_CSTRING("axis"),
	HX_CSTRING("getButton"),
	HX_CSTRING("update"),
	HX_CSTRING("reset"),
	HX_CSTRING("destroy"),
	HX_CSTRING("checkStatus"),
	HX_CSTRING("anyPressed"),
	HX_CSTRING("anyJustPressed"),
	HX_CSTRING("anyJustReleased"),
	HX_CSTRING("pressed"),
	HX_CSTRING("justPressed"),
	HX_CSTRING("justReleased"),
	HX_CSTRING("firstPressedButtonID"),
	HX_CSTRING("firstJustPressedButtonID"),
	HX_CSTRING("firstJustReleasedButtonID"),
	HX_CSTRING("getAxis"),
	HX_CSTRING("getXAxis"),
	HX_CSTRING("getYAxis"),
	HX_CSTRING("anyButton"),
	HX_CSTRING("anyInput"),
	HX_CSTRING("getAxisValue"),
	HX_CSTRING("getAnalogueAxisValue"),
	HX_CSTRING("get_dpadUp"),
	HX_CSTRING("get_dpadDown"),
	HX_CSTRING("get_dpadLeft"),
	HX_CSTRING("get_dpadRight"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepad_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepad_obj::__mClass,"__mClass");
};

#endif

Class FlxGamepad_obj::__mClass;

void FlxGamepad_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.gamepad.FlxGamepad"), hx::TCanCast< FlxGamepad_obj> ,sStaticFields,sMemberFields,
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

void FlxGamepad_obj::__boot()
{
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
