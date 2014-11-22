#include <hxcpp.h>

#ifndef INCLUDED_Console
#include <Console.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Inputs
#include <Inputs.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxInputText
#include <flixel/addons/ui/FlxInputText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard__FlxKey_FlxKey_Impl_
#include <flixel/input/keyboard/_FlxKey/FlxKey_Impl_.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hscript_Error
#include <hscript/Error.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
#ifndef INCLUDED_hscript_Parser
#include <hscript/Parser.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
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
#ifndef INCLUDED_openfl__v2_net_URLLoader
#include <openfl/_v2/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl__v2_net_URLRequest
#include <openfl/_v2/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl__v2_text_Font
#include <openfl/_v2/text/Font.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormat
#include <openfl/_v2/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldType
#include <openfl/text/TextFieldType.h>
#endif

Void Console_obj::__construct()
{
HX_STACK_FRAME("Console","new",0xec721ba9,"Console.new","Console.hx",21,0xdfc4cbe7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(24)
	this->_interp = ::hscript::Interp_obj::__new();
	HX_STACK_LINE(23)
	this->_parser = ::hscript::Parser_obj::__new();
	HX_STACK_LINE(33)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(35)
	::openfl::_v2::text::TextField _g = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(35)
	this->_inputText = _g;
	HX_STACK_LINE(36)
	::openfl::_v2::text::TextFormat _g1 = ::openfl::_v2::text::TextFormat_obj::__new(::openfl::_v2::Assets_obj::getFont(HX_CSTRING("assets/font/DroidSans.ttf"),null())->fontName,(int)20,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(36)
	this->_inputText->set_defaultTextFormat(_g1);
	HX_STACK_LINE(37)
	this->_inputText->set_type(::openfl::text::TextFieldType_obj::INPUT);
	HX_STACK_LINE(38)
	this->_inputText->set_border(true);
	HX_STACK_LINE(39)
	this->_inputText->set_backgroundColor((int)5592405);
	HX_STACK_LINE(40)
	this->_inputText->set_background(true);
	HX_STACK_LINE(41)
	int _g2 = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(41)
	this->_inputText->set_width(_g2);
	HX_STACK_LINE(42)
	this->_inputText->set_height((int)30);
	HX_STACK_LINE(43)
	int _g3 = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(43)
	Float _g4 = this->_inputText->get_height();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(43)
	Float _g5 = (_g3 - _g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(43)
	Float _g6 = (_g5 - (int)2);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(43)
	this->_inputText->set_y(_g6);
	HX_STACK_LINE(44)
	::flixel::FlxG_obj::addChildBelowMouse_openfl__v2_text_TextField(this->_inputText,null());
	HX_STACK_LINE(46)
	::flixel::addons::ui::FlxUIText _g7 = ::flixel::addons::ui::FlxUIText_obj::__new((int)0,(int)0,::flixel::FlxG_obj::width,HX_CSTRING(""),null(),null());		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(46)
	this->_outputText = _g7;
	HX_STACK_LINE(48)
	::flixel::FlxSprite _g8 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(48)
	this->_outputGraphic = _g8;
	HX_STACK_LINE(49)
	this->_outputGraphic->set_x(this->_outputText->x);
	HX_STACK_LINE(50)
	this->_outputGraphic->set_y(this->_outputText->y);
	HX_STACK_LINE(51)
	Float _g9 = this->_outputText->get_width();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(51)
	int _g10 = ::Std_obj::_int(_g9);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(51)
	this->_outputGraphic->makeGraphic(_g10,::flixel::FlxG_obj::height,(int)-1728053248,null(),null());
	HX_STACK_LINE(53)
	this->add(this->_outputGraphic);
	HX_STACK_LINE(54)
	this->add(this->_outputText);
	HX_STACK_LINE(56)
	this->cls();
	HX_STACK_LINE(57)
	this->toggleShow();
	HX_STACK_LINE(58)
	this->passInReference(HX_CSTRING("C"),hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(59)
	this->passInReference(HX_CSTRING("I"),hx::ClassOf< ::Inputs >());
	HX_STACK_LINE(60)
	this->passInReference(HX_CSTRING("FlxSprite"),hx::ClassOf< ::flixel::FlxSprite >());
	HX_STACK_LINE(61)
	this->passInReference(HX_CSTRING("FlxKey"),hx::ClassOf< ::flixel::input::keyboard::_FlxKey::FlxKey_Impl_ >());
	HX_STACK_LINE(63)
	this->scrollFactor->set(null(),null());
}
;
	return null();
}

//Console_obj::~Console_obj() { }

Dynamic Console_obj::__CreateEmpty() { return  new Console_obj; }
hx::ObjectPtr< Console_obj > Console_obj::__new()
{  hx::ObjectPtr< Console_obj > result = new Console_obj();
	result->__construct();
	return result;}

Dynamic Console_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Console_obj > result = new Console_obj();
	result->__construct();
	return result;}

Void Console_obj::update( Float elapsed){
{
		HX_STACK_FRAME("Console","update",0x44e8ae60,"Console.update","Console.hx",67,0xdfc4cbe7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		struct _Function_1_1{
			inline static bool Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Console.hx",68,0xdfc4cbe7)
				{
					HX_STACK_LINE(68)
					::flixel::input::keyboard::FlxKeyList _this = ::flixel::FlxG_obj::keys->justPressed;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(68)
					return _this->keyManager->checkStatus((int)9,_this->status);
				}
				return null();
			}
		};
		HX_STACK_LINE(68)
		if ((_Function_1_1::Block())){
			HX_STACK_LINE(68)
			this->toggleShow();
		}
		struct _Function_1_2{
			inline static bool Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Console.hx",70,0xdfc4cbe7)
				{
					HX_STACK_LINE(70)
					::flixel::input::keyboard::FlxKeyList _this = ::flixel::FlxG_obj::keys->justPressed;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(70)
					return _this->keyManager->checkStatus((int)13,_this->status);
				}
				return null();
			}
		};
		HX_STACK_LINE(70)
		if ((_Function_1_2::Block())){
			HX_STACK_LINE(70)
			this->runLine();
		}
		HX_STACK_LINE(72)
		this->super::update(elapsed);
	}
return null();
}


Void Console_obj::runLine( ){
{
		HX_STACK_FRAME("Console","runLine",0x3dd050a8,"Console.runLine","Console.hx",76,0xdfc4cbe7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			::flixel::addons::ui::FlxUIText _g = this->_outputText;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(77)
			::String _g1 = _g->textField->get_text();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(77)
			::String _g11 = this->_inputText->get_text();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(77)
			::String _g2 = (HX_CSTRING("\n") + _g11);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(77)
			::String _g3 = (_g1 + _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(77)
			_g->set_text(_g3);
		}
		HX_STACK_LINE(78)
		Float _g4 = this->_outputText->get_height();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(78)
		Float _g5 = this->_inputText->get_height();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(78)
		Float _g6 = (_g5 * (int)2);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(78)
		Float _g7 = (::flixel::FlxG_obj::height - _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(78)
		if (((_g4 > _g7))){
			HX_STACK_LINE(78)
			Float _g8 = this->_inputText->get_height();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(78)
			Float _g9 = (_g8 * (int)2);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(78)
			Float _g10 = (::flixel::FlxG_obj::height - _g9);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(78)
			Float _g11 = this->_outputText->get_height();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(78)
			Float _g12 = (_g10 - _g11);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(78)
			this->_outputText->set_y(_g12);
		}
		HX_STACK_LINE(80)
		::String code = this->_inputText->get_text();		HX_STACK_VAR(code,"code");
		HX_STACK_LINE(81)
		this->_inputText->set_text(HX_CSTRING(""));
		HX_STACK_LINE(83)
		try
		{
		HX_STACK_CATCHABLE(::hscript::Error, 0);
		{
			HX_STACK_LINE(85)
			this->runCode(code);
		}
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::hscript::Error >() ){
				HX_STACK_BEGIN_CATCH
				::hscript::Error e = __e;{
					HX_STACK_LINE(87)
					::String _g13 = ::Type_obj::enumConstructor(e);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(87)
					::String _g14 = (HX_CSTRING("\nERROR: ") + _g13);		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(87)
					::String _g15 = (_g14 + HX_CSTRING(" "));		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(87)
					Dynamic _g16 = ::Type_obj::enumParameters(e);		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(87)
					::String _g17 = ::Std_obj::string(_g16);		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(87)
					::String _g18 = (_g15 + _g17);		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(87)
					this->echo(_g18);
				}
			}
			else {
			    HX_STACK_DO_THROW(__e);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,runLine,(void))

Void Console_obj::runCode( ::String s){
{
		HX_STACK_FRAME("Console","runCode",0x37e1e9e1,"Console.runCode","Console.hx",92,0xdfc4cbe7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(93)
		Dynamic prog = this->_parser->parseString(s);		HX_STACK_VAR(prog,"prog");
		HX_STACK_LINE(94)
		this->_interp->execute(prog);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,runCode,(void))

Void Console_obj::echo( ::String s){
{
		HX_STACK_FRAME("Console","echo",0xf1719b7c,"Console.echo","Console.hx",99,0xdfc4cbe7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(99)
		::flixel::addons::ui::FlxUIText _g = this->_outputText;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(99)
		::String _g1 = _g->textField->get_text();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(99)
		::String _g11 = (_g1 + ((HX_CSTRING("\n") + s)));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(99)
		_g->set_text(_g11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,echo,(void))

Void Console_obj::toggleShow( ){
{
		HX_STACK_FRAME("Console","toggleShow",0xee7cba88,"Console.toggleShow","Console.hx",103,0xdfc4cbe7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		this->set_visible(!(this->visible));
		HX_STACK_LINE(105)
		this->_inputText->set_visible(this->visible);
		HX_STACK_LINE(107)
		::openfl::_v2::display::InteractiveObject _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(107)
		if ((this->visible)){
			HX_STACK_LINE(107)
			_g = this->_inputText;
		}
		else{
			HX_STACK_LINE(107)
			_g = ::openfl::_v2::Lib_obj::get_current()->get_stage();
		}
		HX_STACK_LINE(107)
		::openfl::_v2::Lib_obj::get_current()->get_stage()->set_focus(_g);
		HX_STACK_LINE(109)
		::String _g1 = HX_CSTRING("\t");		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(109)
		::String _g2 = this->_inputText->get_text().split(_g1)->join(HX_CSTRING(""));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(109)
		this->_inputText->set_text(_g2);
		HX_STACK_LINE(111)
		::flixel::FlxG_obj::game->_state->remove(hx::ObjectPtr<OBJ_>(this),true);
		HX_STACK_LINE(112)
		::flixel::FlxG_obj::game->_state->add(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,toggleShow,(void))

Void Console_obj::cls( ){
{
		HX_STACK_FRAME("Console","cls",0xec69c8f3,"Console.cls","Console.hx",116,0xdfc4cbe7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		this->_outputText->set_text(HX_CSTRING("<Console>"));
		HX_STACK_LINE(118)
		this->_outputText->set_height((int)50);
		HX_STACK_LINE(119)
		this->_outputText->set_y((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,cls,(void))

Void Console_obj::exec( ::String fileName){
{
		HX_STACK_FRAME("Console","exec",0xf1818828,"Console.exec","Console.hx",123,0xdfc4cbe7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fileName,"fileName")
		HX_STACK_LINE(124)
		::String _g = ::openfl::_v2::Assets_obj::getText(((HX_CSTRING("assets/cfg/") + fileName) + HX_CSTRING(".cfg")));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(124)
		this->runCode(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,exec,(void))

Void Console_obj::loadExec( ::String url){
{
		HX_STACK_FRAME("Console","loadExec",0x0efcf0ee,"Console.loadExec","Console.hx",128,0xdfc4cbe7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(url,"url")
		HX_STACK_LINE(129)
		::openfl::_v2::net::URLLoader l = ::openfl::_v2::net::URLLoader_obj::__new(null());		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(130)
		l->addEventListener(::openfl::_v2::events::Event_obj::COMPLETE,this->loaderExec_dyn(),null(),null(),null());
		HX_STACK_LINE(131)
		::openfl::_v2::net::URLRequest _g = ::openfl::_v2::net::URLRequest_obj::__new(url);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(131)
		l->load(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,loadExec,(void))

Void Console_obj::passInReference( ::String s,Dynamic o){
{
		HX_STACK_FRAME("Console","passInReference",0x1603ae9e,"Console.passInReference","Console.hx",136,0xdfc4cbe7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_ARG(o,"o")
		HX_STACK_LINE(136)
		Dynamic value = o;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(136)
		this->_interp->variables->set(s,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,passInReference,(void))

Void Console_obj::loaderExec( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("Console","loaderExec",0xbebb0d1b,"Console.loaderExec","Console.hx",141,0xdfc4cbe7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(141)
		this->runCode(e->get_target()->__Field(HX_CSTRING("data"),true));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,loaderExec,(void))


Console_obj::Console_obj()
{
}

void Console_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Console);
	HX_MARK_MEMBER_NAME(_parser,"_parser");
	HX_MARK_MEMBER_NAME(_interp,"_interp");
	HX_MARK_MEMBER_NAME(_inputText,"_inputText");
	HX_MARK_MEMBER_NAME(_outputText,"_outputText");
	HX_MARK_MEMBER_NAME(_inputGraphic,"_inputGraphic");
	HX_MARK_MEMBER_NAME(_outputGraphic,"_outputGraphic");
	::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Console_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_parser,"_parser");
	HX_VISIT_MEMBER_NAME(_interp,"_interp");
	HX_VISIT_MEMBER_NAME(_inputText,"_inputText");
	HX_VISIT_MEMBER_NAME(_outputText,"_outputText");
	HX_VISIT_MEMBER_NAME(_inputGraphic,"_inputGraphic");
	HX_VISIT_MEMBER_NAME(_outputGraphic,"_outputGraphic");
	::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Console_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cls") ) { return cls_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"echo") ) { return echo_dyn(); }
		if (HX_FIELD_EQ(inName,"exec") ) { return exec_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_parser") ) { return _parser; }
		if (HX_FIELD_EQ(inName,"_interp") ) { return _interp; }
		if (HX_FIELD_EQ(inName,"runLine") ) { return runLine_dyn(); }
		if (HX_FIELD_EQ(inName,"runCode") ) { return runCode_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loadExec") ) { return loadExec_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_inputText") ) { return _inputText; }
		if (HX_FIELD_EQ(inName,"toggleShow") ) { return toggleShow_dyn(); }
		if (HX_FIELD_EQ(inName,"loaderExec") ) { return loaderExec_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_outputText") ) { return _outputText; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_inputGraphic") ) { return _inputGraphic; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_outputGraphic") ) { return _outputGraphic; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"passInReference") ) { return passInReference_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Console_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_parser") ) { _parser=inValue.Cast< ::hscript::Parser >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_interp") ) { _interp=inValue.Cast< ::hscript::Interp >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_inputText") ) { _inputText=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_outputText") ) { _outputText=inValue.Cast< ::flixel::addons::ui::FlxUIText >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_inputGraphic") ) { _inputGraphic=inValue.Cast< ::flixel::addons::ui::FlxInputText >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_outputGraphic") ) { _outputGraphic=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Console_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_parser"));
	outFields->push(HX_CSTRING("_interp"));
	outFields->push(HX_CSTRING("_inputText"));
	outFields->push(HX_CSTRING("_outputText"));
	outFields->push(HX_CSTRING("_inputGraphic"));
	outFields->push(HX_CSTRING("_outputGraphic"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::hscript::Parser*/ ,(int)offsetof(Console_obj,_parser),HX_CSTRING("_parser")},
	{hx::fsObject /*::hscript::Interp*/ ,(int)offsetof(Console_obj,_interp),HX_CSTRING("_interp")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(Console_obj,_inputText),HX_CSTRING("_inputText")},
	{hx::fsObject /*::flixel::addons::ui::FlxUIText*/ ,(int)offsetof(Console_obj,_outputText),HX_CSTRING("_outputText")},
	{hx::fsObject /*::flixel::addons::ui::FlxInputText*/ ,(int)offsetof(Console_obj,_inputGraphic),HX_CSTRING("_inputGraphic")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Console_obj,_outputGraphic),HX_CSTRING("_outputGraphic")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_parser"),
	HX_CSTRING("_interp"),
	HX_CSTRING("_inputText"),
	HX_CSTRING("_outputText"),
	HX_CSTRING("_inputGraphic"),
	HX_CSTRING("_outputGraphic"),
	HX_CSTRING("update"),
	HX_CSTRING("runLine"),
	HX_CSTRING("runCode"),
	HX_CSTRING("echo"),
	HX_CSTRING("toggleShow"),
	HX_CSTRING("cls"),
	HX_CSTRING("exec"),
	HX_CSTRING("loadExec"),
	HX_CSTRING("passInReference"),
	HX_CSTRING("loaderExec"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Console_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Console_obj::__mClass,"__mClass");
};

#endif

Class Console_obj::__mClass;

void Console_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Console"), hx::TCanCast< Console_obj> ,sStaticFields,sMemberFields,
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

void Console_obj::__boot()
{
}

