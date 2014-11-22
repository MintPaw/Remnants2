#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace system{
namespace frontEnds{

Void InputFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","new",0x5285aa54,"flixel.system.frontEnds.InputFrontEnd.new","flixel/system/frontEnds/InputFrontEnd.hx",9,0x759f67bd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	this->resetOnStateSwitch = true;
	HX_STACK_LINE(14)
	this->list = Array_obj< ::flixel::input::IFlxInputManager >::__new();
}
;
	return null();
}

//InputFrontEnd_obj::~InputFrontEnd_obj() { }

Dynamic InputFrontEnd_obj::__CreateEmpty() { return  new InputFrontEnd_obj; }
hx::ObjectPtr< InputFrontEnd_obj > InputFrontEnd_obj::__new()
{  hx::ObjectPtr< InputFrontEnd_obj > result = new InputFrontEnd_obj();
	result->__construct();
	return result;}

Dynamic InputFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InputFrontEnd_obj > result = new InputFrontEnd_obj();
	result->__construct();
	return result;}

::flixel::input::mouse::FlxMouse InputFrontEnd_obj::replace_flixel_input_mouse_FlxMouse( ::flixel::input::mouse::FlxMouse Old,::flixel::input::mouse::FlxMouse New){
	HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","replace_flixel_input_mouse_FlxMouse",0x59a38f0e,"flixel.system.frontEnds.InputFrontEnd.replace_flixel_input_mouse_FlxMouse","flixel/system/frontEnds/InputFrontEnd.hx",75,0x759f67bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Old,"Old")
	HX_STACK_ARG(New,"New")
	HX_STACK_LINE(76)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(77)
	bool success = false;		HX_STACK_VAR(success,"success");
	HX_STACK_LINE(78)
	{
		HX_STACK_LINE(78)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(78)
		Array< ::flixel::input::IFlxInputManager > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(78)
		while((true)){
			HX_STACK_LINE(78)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(78)
				break;
			}
			HX_STACK_LINE(78)
			::flixel::input::IFlxInputManager input = _g1->__get(_g);		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(78)
			++(_g);
			HX_STACK_LINE(80)
			if (((input == Old))){
				HX_STACK_LINE(82)
				this->list[i] = New;
				HX_STACK_LINE(83)
				success = true;
				HX_STACK_LINE(84)
				break;
			}
			HX_STACK_LINE(86)
			(i)++;
		}
	}
	HX_STACK_LINE(89)
	if ((success)){
		HX_STACK_LINE(91)
		return New;
	}
	HX_STACK_LINE(93)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(InputFrontEnd_obj,replace_flixel_input_mouse_FlxMouse,return )

::flixel::input::gamepad::FlxGamepadManager InputFrontEnd_obj::add_flixel_input_gamepad_FlxGamepadManager( ::flixel::input::gamepad::FlxGamepadManager Input){
	HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","add_flixel_input_gamepad_FlxGamepadManager",0x189964b2,"flixel.system.frontEnds.InputFrontEnd.add_flixel_input_gamepad_FlxGamepadManager","flixel/system/frontEnds/InputFrontEnd.hx",30,0x759f67bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Input,"Input")
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(32)
		Array< ::flixel::input::IFlxInputManager > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(32)
		while((true)){
			HX_STACK_LINE(32)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(32)
				break;
			}
			HX_STACK_LINE(32)
			::flixel::input::IFlxInputManager input = _g1->__get(_g);		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(32)
			++(_g);
			struct _Function_3_1{
				inline static bool Block( ::flixel::input::gamepad::FlxGamepadManager &Input,::flixel::input::IFlxInputManager &input){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/frontEnds/InputFrontEnd.hx",34,0x759f67bd)
					{
						HX_STACK_LINE(34)
						bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
						HX_STACK_LINE(34)
						::String _g5;		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(34)
						{
							HX_STACK_LINE(34)
							::Class cl;		HX_STACK_VAR(cl,"cl");
							HX_STACK_LINE(34)
							if ((::Std_obj::is(Input,hx::ClassOf< ::Class >()))){
								HX_STACK_LINE(34)
								cl = Input;
							}
							else{
								HX_STACK_LINE(34)
								::Class _g2 = ::Type_obj::getClass(Input);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(34)
								cl = _g2;
							}
							HX_STACK_LINE(34)
							::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(34)
							if (((s != null()))){
								HX_STACK_LINE(34)
								::String _g11 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(34)
								s = _g11;
								HX_STACK_LINE(34)
								if ((Simple)){
									HX_STACK_LINE(34)
									int _g2 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(34)
									int _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(34)
									::String _g4 = s.substr(_g3,null());		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(34)
									s = _g4;
								}
							}
							HX_STACK_LINE(34)
							_g5 = s;
						}
						HX_STACK_LINE(34)
						::String _g11;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(34)
						{
							HX_STACK_LINE(34)
							::Class cl;		HX_STACK_VAR(cl,"cl");
							HX_STACK_LINE(34)
							if ((::Std_obj::is(input,hx::ClassOf< ::Class >()))){
								HX_STACK_LINE(34)
								cl = input;
							}
							else{
								HX_STACK_LINE(34)
								::Class _g6 = ::Type_obj::getClass(input);		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(34)
								cl = _g6;
							}
							HX_STACK_LINE(34)
							::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(34)
							if (((s != null()))){
								HX_STACK_LINE(34)
								::String _g7 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(34)
								s = _g7;
								HX_STACK_LINE(34)
								if ((Simple)){
									HX_STACK_LINE(34)
									int _g8 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g8,"_g8");
									HX_STACK_LINE(34)
									int _g9 = (_g8 + (int)1);		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(34)
									::String _g10 = s.substr(_g9,null());		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(34)
									s = _g10;
								}
							}
							HX_STACK_LINE(34)
							_g11 = s;
						}
						HX_STACK_LINE(34)
						return (_g5 == _g11);
					}
					return null();
				}
			};
			HX_STACK_LINE(34)
			if ((_Function_3_1::Block(Input,input))){
				HX_STACK_LINE(36)
				return Input;
			}
		}
	}
	HX_STACK_LINE(40)
	this->list->push(Input);
	HX_STACK_LINE(41)
	return Input;
}


HX_DEFINE_DYNAMIC_FUNC1(InputFrontEnd_obj,add_flixel_input_gamepad_FlxGamepadManager,return )

::flixel::input::touch::FlxTouchManager InputFrontEnd_obj::add_flixel_input_touch_FlxTouchManager( ::flixel::input::touch::FlxTouchManager Input){
	HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","add_flixel_input_touch_FlxTouchManager",0x760d6272,"flixel.system.frontEnds.InputFrontEnd.add_flixel_input_touch_FlxTouchManager","flixel/system/frontEnds/InputFrontEnd.hx",30,0x759f67bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Input,"Input")
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(32)
		Array< ::flixel::input::IFlxInputManager > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(32)
		while((true)){
			HX_STACK_LINE(32)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(32)
				break;
			}
			HX_STACK_LINE(32)
			::flixel::input::IFlxInputManager input = _g1->__get(_g);		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(32)
			++(_g);
			struct _Function_3_1{
				inline static bool Block( ::flixel::input::touch::FlxTouchManager &Input,::flixel::input::IFlxInputManager &input){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/frontEnds/InputFrontEnd.hx",34,0x759f67bd)
					{
						HX_STACK_LINE(34)
						bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
						HX_STACK_LINE(34)
						::String _g5;		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(34)
						{
							HX_STACK_LINE(34)
							::Class cl;		HX_STACK_VAR(cl,"cl");
							HX_STACK_LINE(34)
							if ((::Std_obj::is(Input,hx::ClassOf< ::Class >()))){
								HX_STACK_LINE(34)
								cl = Input;
							}
							else{
								HX_STACK_LINE(34)
								::Class _g2 = ::Type_obj::getClass(Input);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(34)
								cl = _g2;
							}
							HX_STACK_LINE(34)
							::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(34)
							if (((s != null()))){
								HX_STACK_LINE(34)
								::String _g11 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(34)
								s = _g11;
								HX_STACK_LINE(34)
								if ((Simple)){
									HX_STACK_LINE(34)
									int _g2 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(34)
									int _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(34)
									::String _g4 = s.substr(_g3,null());		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(34)
									s = _g4;
								}
							}
							HX_STACK_LINE(34)
							_g5 = s;
						}
						HX_STACK_LINE(34)
						::String _g11;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(34)
						{
							HX_STACK_LINE(34)
							::Class cl;		HX_STACK_VAR(cl,"cl");
							HX_STACK_LINE(34)
							if ((::Std_obj::is(input,hx::ClassOf< ::Class >()))){
								HX_STACK_LINE(34)
								cl = input;
							}
							else{
								HX_STACK_LINE(34)
								::Class _g6 = ::Type_obj::getClass(input);		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(34)
								cl = _g6;
							}
							HX_STACK_LINE(34)
							::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(34)
							if (((s != null()))){
								HX_STACK_LINE(34)
								::String _g7 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(34)
								s = _g7;
								HX_STACK_LINE(34)
								if ((Simple)){
									HX_STACK_LINE(34)
									int _g8 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g8,"_g8");
									HX_STACK_LINE(34)
									int _g9 = (_g8 + (int)1);		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(34)
									::String _g10 = s.substr(_g9,null());		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(34)
									s = _g10;
								}
							}
							HX_STACK_LINE(34)
							_g11 = s;
						}
						HX_STACK_LINE(34)
						return (_g5 == _g11);
					}
					return null();
				}
			};
			HX_STACK_LINE(34)
			if ((_Function_3_1::Block(Input,input))){
				HX_STACK_LINE(36)
				return Input;
			}
		}
	}
	HX_STACK_LINE(40)
	this->list->push(Input);
	HX_STACK_LINE(41)
	return Input;
}


HX_DEFINE_DYNAMIC_FUNC1(InputFrontEnd_obj,add_flixel_input_touch_FlxTouchManager,return )

::flixel::input::mouse::FlxMouse InputFrontEnd_obj::add_flixel_input_mouse_FlxMouse( ::flixel::input::mouse::FlxMouse Input){
	HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","add_flixel_input_mouse_FlxMouse",0xe1e4487b,"flixel.system.frontEnds.InputFrontEnd.add_flixel_input_mouse_FlxMouse","flixel/system/frontEnds/InputFrontEnd.hx",30,0x759f67bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Input,"Input")
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(32)
		Array< ::flixel::input::IFlxInputManager > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(32)
		while((true)){
			HX_STACK_LINE(32)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(32)
				break;
			}
			HX_STACK_LINE(32)
			::flixel::input::IFlxInputManager input = _g1->__get(_g);		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(32)
			++(_g);
			struct _Function_3_1{
				inline static bool Block( ::flixel::input::mouse::FlxMouse &Input,::flixel::input::IFlxInputManager &input){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/frontEnds/InputFrontEnd.hx",34,0x759f67bd)
					{
						HX_STACK_LINE(34)
						bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
						HX_STACK_LINE(34)
						::String _g5;		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(34)
						{
							HX_STACK_LINE(34)
							::Class cl;		HX_STACK_VAR(cl,"cl");
							HX_STACK_LINE(34)
							if ((::Std_obj::is(Input,hx::ClassOf< ::Class >()))){
								HX_STACK_LINE(34)
								cl = Input;
							}
							else{
								HX_STACK_LINE(34)
								::Class _g2 = ::Type_obj::getClass(Input);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(34)
								cl = _g2;
							}
							HX_STACK_LINE(34)
							::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(34)
							if (((s != null()))){
								HX_STACK_LINE(34)
								::String _g11 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(34)
								s = _g11;
								HX_STACK_LINE(34)
								if ((Simple)){
									HX_STACK_LINE(34)
									int _g2 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(34)
									int _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(34)
									::String _g4 = s.substr(_g3,null());		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(34)
									s = _g4;
								}
							}
							HX_STACK_LINE(34)
							_g5 = s;
						}
						HX_STACK_LINE(34)
						::String _g11;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(34)
						{
							HX_STACK_LINE(34)
							::Class cl;		HX_STACK_VAR(cl,"cl");
							HX_STACK_LINE(34)
							if ((::Std_obj::is(input,hx::ClassOf< ::Class >()))){
								HX_STACK_LINE(34)
								cl = input;
							}
							else{
								HX_STACK_LINE(34)
								::Class _g6 = ::Type_obj::getClass(input);		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(34)
								cl = _g6;
							}
							HX_STACK_LINE(34)
							::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(34)
							if (((s != null()))){
								HX_STACK_LINE(34)
								::String _g7 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(34)
								s = _g7;
								HX_STACK_LINE(34)
								if ((Simple)){
									HX_STACK_LINE(34)
									int _g8 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g8,"_g8");
									HX_STACK_LINE(34)
									int _g9 = (_g8 + (int)1);		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(34)
									::String _g10 = s.substr(_g9,null());		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(34)
									s = _g10;
								}
							}
							HX_STACK_LINE(34)
							_g11 = s;
						}
						HX_STACK_LINE(34)
						return (_g5 == _g11);
					}
					return null();
				}
			};
			HX_STACK_LINE(34)
			if ((_Function_3_1::Block(Input,input))){
				HX_STACK_LINE(36)
				return Input;
			}
		}
	}
	HX_STACK_LINE(40)
	this->list->push(Input);
	HX_STACK_LINE(41)
	return Input;
}


HX_DEFINE_DYNAMIC_FUNC1(InputFrontEnd_obj,add_flixel_input_mouse_FlxMouse,return )

::flixel::input::keyboard::FlxKeyboard InputFrontEnd_obj::add_flixel_input_keyboard_FlxKeyboard( ::flixel::input::keyboard::FlxKeyboard Input){
	HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","add_flixel_input_keyboard_FlxKeyboard",0xa934da2f,"flixel.system.frontEnds.InputFrontEnd.add_flixel_input_keyboard_FlxKeyboard","flixel/system/frontEnds/InputFrontEnd.hx",30,0x759f67bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Input,"Input")
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(32)
		Array< ::flixel::input::IFlxInputManager > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(32)
		while((true)){
			HX_STACK_LINE(32)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(32)
				break;
			}
			HX_STACK_LINE(32)
			::flixel::input::IFlxInputManager input = _g1->__get(_g);		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(32)
			++(_g);
			struct _Function_3_1{
				inline static bool Block( ::flixel::input::keyboard::FlxKeyboard &Input,::flixel::input::IFlxInputManager &input){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/frontEnds/InputFrontEnd.hx",34,0x759f67bd)
					{
						HX_STACK_LINE(34)
						bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
						HX_STACK_LINE(34)
						::String _g5;		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(34)
						{
							HX_STACK_LINE(34)
							::Class cl;		HX_STACK_VAR(cl,"cl");
							HX_STACK_LINE(34)
							if ((::Std_obj::is(Input,hx::ClassOf< ::Class >()))){
								HX_STACK_LINE(34)
								cl = Input;
							}
							else{
								HX_STACK_LINE(34)
								::Class _g2 = ::Type_obj::getClass(Input);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(34)
								cl = _g2;
							}
							HX_STACK_LINE(34)
							::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(34)
							if (((s != null()))){
								HX_STACK_LINE(34)
								::String _g11 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(34)
								s = _g11;
								HX_STACK_LINE(34)
								if ((Simple)){
									HX_STACK_LINE(34)
									int _g2 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(34)
									int _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(34)
									::String _g4 = s.substr(_g3,null());		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(34)
									s = _g4;
								}
							}
							HX_STACK_LINE(34)
							_g5 = s;
						}
						HX_STACK_LINE(34)
						::String _g11;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(34)
						{
							HX_STACK_LINE(34)
							::Class cl;		HX_STACK_VAR(cl,"cl");
							HX_STACK_LINE(34)
							if ((::Std_obj::is(input,hx::ClassOf< ::Class >()))){
								HX_STACK_LINE(34)
								cl = input;
							}
							else{
								HX_STACK_LINE(34)
								::Class _g6 = ::Type_obj::getClass(input);		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(34)
								cl = _g6;
							}
							HX_STACK_LINE(34)
							::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(34)
							if (((s != null()))){
								HX_STACK_LINE(34)
								::String _g7 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(34)
								s = _g7;
								HX_STACK_LINE(34)
								if ((Simple)){
									HX_STACK_LINE(34)
									int _g8 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g8,"_g8");
									HX_STACK_LINE(34)
									int _g9 = (_g8 + (int)1);		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(34)
									::String _g10 = s.substr(_g9,null());		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(34)
									s = _g10;
								}
							}
							HX_STACK_LINE(34)
							_g11 = s;
						}
						HX_STACK_LINE(34)
						return (_g5 == _g11);
					}
					return null();
				}
			};
			HX_STACK_LINE(34)
			if ((_Function_3_1::Block(Input,input))){
				HX_STACK_LINE(36)
				return Input;
			}
		}
	}
	HX_STACK_LINE(40)
	this->list->push(Input);
	HX_STACK_LINE(41)
	return Input;
}


HX_DEFINE_DYNAMIC_FUNC1(InputFrontEnd_obj,add_flixel_input_keyboard_FlxKeyboard,return )

Void InputFrontEnd_obj::reset( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","reset",0x8c9b88c3,"flixel.system.frontEnds.InputFrontEnd.reset","flixel/system/frontEnds/InputFrontEnd.hx",98,0x759f67bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(98)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(98)
		Array< ::flixel::input::IFlxInputManager > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(98)
		while((true)){
			HX_STACK_LINE(98)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(98)
				break;
			}
			HX_STACK_LINE(98)
			::flixel::input::IFlxInputManager input = _g1->__get(_g);		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(98)
			++(_g);
			HX_STACK_LINE(100)
			input->reset();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,reset,(void))

Void InputFrontEnd_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","update",0xfa095c95,"flixel.system.frontEnds.InputFrontEnd.update","flixel/system/frontEnds/InputFrontEnd.hx",108,0x759f67bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(108)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(108)
		Array< ::flixel::input::IFlxInputManager > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(108)
		while((true)){
			HX_STACK_LINE(108)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(108)
				break;
			}
			HX_STACK_LINE(108)
			::flixel::input::IFlxInputManager input = _g1->__get(_g);		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(108)
			++(_g);
			HX_STACK_LINE(110)
			input->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,update,(void))

Void InputFrontEnd_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","onFocus",0xcb1ee22d,"flixel.system.frontEnds.InputFrontEnd.onFocus","flixel/system/frontEnds/InputFrontEnd.hx",116,0x759f67bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(116)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(116)
		Array< ::flixel::input::IFlxInputManager > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(116)
		while((true)){
			HX_STACK_LINE(116)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(116)
				break;
			}
			HX_STACK_LINE(116)
			::flixel::input::IFlxInputManager input = _g1->__get(_g);		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(116)
			++(_g);
			HX_STACK_LINE(118)
			input->onFocus();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,onFocus,(void))

Void InputFrontEnd_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","onFocusLost",0x5cd0d2b1,"flixel.system.frontEnds.InputFrontEnd.onFocusLost","flixel/system/frontEnds/InputFrontEnd.hx",124,0x759f67bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(124)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(124)
		Array< ::flixel::input::IFlxInputManager > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(124)
		while((true)){
			HX_STACK_LINE(124)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(124)
				break;
			}
			HX_STACK_LINE(124)
			::flixel::input::IFlxInputManager input = _g1->__get(_g);		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(124)
			++(_g);
			HX_STACK_LINE(126)
			input->onFocusLost();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,onFocusLost,(void))

Void InputFrontEnd_obj::onStateSwitch( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","onStateSwitch",0x594606fa,"flixel.system.frontEnds.InputFrontEnd.onStateSwitch","flixel/system/frontEnds/InputFrontEnd.hx",132,0x759f67bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(132)
		if ((this->resetOnStateSwitch)){
			HX_STACK_LINE(134)
			this->reset();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,onStateSwitch,(void))

Void InputFrontEnd_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","destroy",0x54de10ee,"flixel.system.frontEnds.InputFrontEnd.destroy","flixel/system/frontEnds/InputFrontEnd.hx",140,0x759f67bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(140)
		Array< ::flixel::input::IFlxInputManager > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(140)
		while((true)){
			HX_STACK_LINE(140)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(140)
				break;
			}
			HX_STACK_LINE(140)
			::flixel::input::IFlxInputManager input = _g1->__get(_g);		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(140)
			++(_g);
			HX_STACK_LINE(142)
			::flixel::input::IFlxInputManager _g2 = ::flixel::util::FlxDestroyUtil_obj::destroy(input);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(142)
			input = _g2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,destroy,(void))


InputFrontEnd_obj::InputFrontEnd_obj()
{
}

void InputFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InputFrontEnd);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(resetOnStateSwitch,"resetOnStateSwitch");
	HX_MARK_END_CLASS();
}

void InputFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(resetOnStateSwitch,"resetOnStateSwitch");
}

Dynamic InputFrontEnd_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
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
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onStateSwitch") ) { return onStateSwitch_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"resetOnStateSwitch") ) { return resetOnStateSwitch; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"add_flixel_input_mouse_FlxMouse") ) { return add_flixel_input_mouse_FlxMouse_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"replace_flixel_input_mouse_FlxMouse") ) { return replace_flixel_input_mouse_FlxMouse_dyn(); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"add_flixel_input_keyboard_FlxKeyboard") ) { return add_flixel_input_keyboard_FlxKeyboard_dyn(); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"add_flixel_input_touch_FlxTouchManager") ) { return add_flixel_input_touch_FlxTouchManager_dyn(); }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"add_flixel_input_gamepad_FlxGamepadManager") ) { return add_flixel_input_gamepad_FlxGamepadManager_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InputFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::flixel::input::IFlxInputManager > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"resetOnStateSwitch") ) { resetOnStateSwitch=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InputFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("list"));
	outFields->push(HX_CSTRING("resetOnStateSwitch"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::flixel::input::IFlxInputManager >*/ ,(int)offsetof(InputFrontEnd_obj,list),HX_CSTRING("list")},
	{hx::fsBool,(int)offsetof(InputFrontEnd_obj,resetOnStateSwitch),HX_CSTRING("resetOnStateSwitch")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("replace_flixel_input_mouse_FlxMouse"),
	HX_CSTRING("add_flixel_input_gamepad_FlxGamepadManager"),
	HX_CSTRING("add_flixel_input_touch_FlxTouchManager"),
	HX_CSTRING("add_flixel_input_mouse_FlxMouse"),
	HX_CSTRING("add_flixel_input_keyboard_FlxKeyboard"),
	HX_CSTRING("list"),
	HX_CSTRING("resetOnStateSwitch"),
	HX_CSTRING("reset"),
	HX_CSTRING("update"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onStateSwitch"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InputFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InputFrontEnd_obj::__mClass,"__mClass");
};

#endif

Class InputFrontEnd_obj::__mClass;

void InputFrontEnd_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.frontEnds.InputFrontEnd"), hx::TCanCast< InputFrontEnd_obj> ,sStaticFields,sMemberFields,
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

void InputFrontEnd_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
