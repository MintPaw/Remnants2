#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxInputText
#include <flixel/addons/ui/FlxInputText.h>
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
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
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
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormat
#include <openfl/_v2/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxInputText_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Width,::String Text,hx::Null< int >  __o_size,hx::Null< int >  __o_TextColor,hx::Null< int >  __o_BackgroundColor,hx::Null< bool >  __o_EmbeddedFont)
{
HX_STACK_FRAME("flixel.addons.ui.FlxInputText","new",0xf37b21c8,"flixel.addons.ui.FlxInputText.new","flixel/addons/ui/FlxInputText.hx",29,0x19fbd1e7)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Width,"Width")
HX_STACK_ARG(Text,"Text")
HX_STACK_ARG(__o_size,"size")
HX_STACK_ARG(__o_TextColor,"TextColor")
HX_STACK_ARG(__o_BackgroundColor,"BackgroundColor")
HX_STACK_ARG(__o_EmbeddedFont,"EmbeddedFont")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
int Width = __o_Width.Default(150);
int size = __o_size.Default(8);
int TextColor = __o_TextColor.Default(-16777216);
int BackgroundColor = __o_BackgroundColor.Default(-1);
bool EmbeddedFont = __o_EmbeddedFont.Default(true);
{
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxInputText.hx",164,0x19fbd1e7)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("left") , (int)0,false);
				__result->Add(HX_CSTRING("right") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(164)
	this->_scrollBoundIndeces = _Function_1_1::Block();
	HX_STACK_LINE(139)
	this->backgroundColor = (int)-1;
	HX_STACK_LINE(134)
	this->fieldBorderThickness = (int)1;
	HX_STACK_LINE(129)
	this->fieldBorderColor = (int)-16777216;
	HX_STACK_LINE(124)
	this->filterMode = (int)0;
	HX_STACK_LINE(113)
	this->maxLength = (int)0;
	HX_STACK_LINE(107)
	this->forceCase = (int)0;
	HX_STACK_LINE(102)
	this->caretIndex = (int)0;
	HX_STACK_LINE(97)
	this->hasFocus = false;
	HX_STACK_LINE(79)
	this->caretWidth = (int)1;
	HX_STACK_LINE(66)
	this->background = false;
	HX_STACK_LINE(186)
	super::__construct(X,Y,Width,Text,size,EmbeddedFont);
	HX_STACK_LINE(187)
	this->set_backgroundColor(BackgroundColor);
	HX_STACK_LINE(189)
	if ((((int)0 != BackgroundColor))){
		HX_STACK_LINE(191)
		this->background = true;
	}
	HX_STACK_LINE(194)
	this->set_color(TextColor);
	HX_STACK_LINE(195)
	this->set_caretColor(TextColor);
	HX_STACK_LINE(197)
	::flixel::FlxSprite _g = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(197)
	this->caret = _g;
	HX_STACK_LINE(198)
	int _g1 = ::Std_obj::_int((size + (int)2));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(198)
	this->caret->makeGraphic(this->caretWidth,_g1,null(),null(),null());
	HX_STACK_LINE(199)
	::flixel::util::FlxTimer _g2 = ::flixel::util::FlxTimer_obj::__new(null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(199)
	this->_caretTimer = _g2;
	HX_STACK_LINE(201)
	this->set_caretIndex((int)0);
	HX_STACK_LINE(202)
	this->set_hasFocus(false);
	HX_STACK_LINE(203)
	if ((this->background)){
		HX_STACK_LINE(204)
		::flixel::FlxSprite _g3 = ::flixel::FlxSprite_obj::__new(X,Y,null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(204)
		this->fieldBorderSprite = _g3;
		HX_STACK_LINE(205)
		::flixel::FlxSprite _g4 = ::flixel::FlxSprite_obj::__new(X,Y,null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(205)
		this->backgroundSprite = _g4;
	}
	HX_STACK_LINE(208)
	this->set_lines((int)1);
	HX_STACK_LINE(209)
	::openfl::_v2::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::_v2::events::KeyboardEvent_obj::KEY_DOWN,this->onKeyDown_dyn(),null(),null(),null());
	HX_STACK_LINE(211)
	if (((Text == null()))){
		HX_STACK_LINE(212)
		Text = HX_CSTRING("");
	}
	HX_STACK_LINE(215)
	this->set_text(Text);
	HX_STACK_LINE(217)
	this->calcFrame(null());
}
;
	return null();
}

//FlxInputText_obj::~FlxInputText_obj() { }

Dynamic FlxInputText_obj::__CreateEmpty() { return  new FlxInputText_obj; }
hx::ObjectPtr< FlxInputText_obj > FlxInputText_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Width,::String Text,hx::Null< int >  __o_size,hx::Null< int >  __o_TextColor,hx::Null< int >  __o_BackgroundColor,hx::Null< bool >  __o_EmbeddedFont)
{  hx::ObjectPtr< FlxInputText_obj > result = new FlxInputText_obj();
	result->__construct(__o_X,__o_Y,__o_Width,Text,__o_size,__o_TextColor,__o_BackgroundColor,__o_EmbeddedFont);
	return result;}

Dynamic FlxInputText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxInputText_obj > result = new FlxInputText_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}

::EReg FlxInputText_obj::set_customFilterPattern( ::EReg cfp){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_customFilterPattern",0x8ca18812,"flixel.addons.ui.FlxInputText.set_customFilterPattern","flixel/addons/ui/FlxInputText.hx",52,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cfp,"cfp")
	HX_STACK_LINE(53)
	this->customFilterPattern = cfp;
	HX_STACK_LINE(54)
	this->set_filterMode((int)4);
	HX_STACK_LINE(55)
	return this->customFilterPattern;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_customFilterPattern,return )

int FlxInputText_obj::set_caretColor( int i){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_caretColor",0xe765d535,"flixel.addons.ui.FlxInputText.set_caretColor","flixel/addons/ui/FlxInputText.hx",73,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(74)
	this->caretColor = i;
	HX_STACK_LINE(75)
	this->dirty = true;
	HX_STACK_LINE(76)
	return this->caretColor;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_caretColor,return )

int FlxInputText_obj::set_caretWidth( int i){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_caretWidth",0x676c19d8,"flixel.addons.ui.FlxInputText.set_caretWidth","flixel/addons/ui/FlxInputText.hx",81,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(82)
	this->caretWidth = i;
	HX_STACK_LINE(83)
	this->dirty = true;
	HX_STACK_LINE(84)
	return this->caretWidth;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_caretWidth,return )

Void FlxInputText_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxInputText","destroy",0x8dd65262,"flixel.addons.ui.FlxInputText.destroy","flixel/addons/ui/FlxInputText.hx",224,0x19fbd1e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(225)
		::openfl::_v2::Lib_obj::get_current()->get_stage()->removeEventListener(::openfl::_v2::events::KeyboardEvent_obj::KEY_DOWN,this->onKeyDown_dyn(),null());
		HX_STACK_LINE(227)
		::flixel::FlxSprite _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->backgroundSprite);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(227)
		this->backgroundSprite = _g;
		HX_STACK_LINE(228)
		::flixel::FlxSprite _g1 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->fieldBorderSprite);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(228)
		this->fieldBorderSprite = _g1;
		HX_STACK_LINE(229)
		this->callback = null();
		HX_STACK_LINE(232)
		if (((this->_charBoundaries != null()))){
			HX_STACK_LINE(234)
			while((true)){
				HX_STACK_LINE(234)
				if ((!(((this->_charBoundaries->length > (int)0))))){
					HX_STACK_LINE(234)
					break;
				}
				HX_STACK_LINE(236)
				this->_charBoundaries->pop().StaticCast< ::flixel::math::FlxRect >();
			}
			HX_STACK_LINE(238)
			this->_charBoundaries = null();
		}
		HX_STACK_LINE(242)
		this->super::destroy();
	}
return null();
}


Void FlxInputText_obj::draw( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxInputText","draw",0x11b0159c,"flixel.addons.ui.FlxInputText.draw","flixel/addons/ui/FlxInputText.hx",249,0x19fbd1e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(250)
		this->drawSprite(this->fieldBorderSprite);
		HX_STACK_LINE(251)
		this->drawSprite(this->backgroundSprite);
		HX_STACK_LINE(253)
		this->super::draw();
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::flixel::addons::ui::FlxInputText_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxInputText.hx",256,0x19fbd1e7)
				{
					HX_STACK_LINE(256)
					Float _g = __this->caret->get_height();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(256)
					return (_g != (__this->_defaultFormat->size + (int)2));
				}
				return null();
			}
		};
		HX_STACK_LINE(256)
		if (((  ((!(((this->caret->color != this->caretColor))))) ? bool(_Function_1_1::Block(this)) : bool(true) ))){
			HX_STACK_LINE(258)
			this->caret->set_color(this->caretColor);
		}
		HX_STACK_LINE(261)
		this->drawSprite(this->caret);
	}
return null();
}


Void FlxInputText_obj::drawSprite( ::flixel::FlxSprite Sprite){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxInputText","drawSprite",0x07ac82c1,"flixel.addons.ui.FlxInputText.drawSprite","flixel/addons/ui/FlxInputText.hx",270,0x19fbd1e7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_LINE(270)
		if (((bool((Sprite != null())) && bool(Sprite->visible)))){
			HX_STACK_LINE(272)
			Sprite->scrollFactor = this->scrollFactor;
			HX_STACK_LINE(273)
			Array< ::Dynamic > _g = this->get_cameras();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(273)
			Sprite->set_cameras(_g);
			HX_STACK_LINE(274)
			Sprite->draw();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,drawSprite,(void))

Void FlxInputText_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxInputText","update",0x954505a1,"flixel.addons.ui.FlxInputText.update","flixel/addons/ui/FlxInputText.hx",282,0x19fbd1e7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(283)
		this->super::update(elapsed);
		HX_STACK_LINE(287)
		if (((::flixel::FlxG_obj::mouse->_leftButton->current == (int)2))){
			HX_STACK_LINE(289)
			if ((::flixel::FlxG_obj::mouse->overlaps(hx::ObjectPtr<OBJ_>(this),null()))){
				HX_STACK_LINE(291)
				::flixel::math::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(291)
				{
					HX_STACK_LINE(291)
					::flixel::input::mouse::FlxMouse _this = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(291)
					{
						HX_STACK_LINE(291)
						::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(_this->x,_this->y);		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(291)
						point->_inPool = false;
						HX_STACK_LINE(291)
						_g = point;
					}
				}
				HX_STACK_LINE(291)
				int _g1 = this->getCaretIndexFromPoint(_g);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(291)
				this->set_caretIndex(_g1);
				HX_STACK_LINE(292)
				this->set_hasFocus(true);
			}
			else{
				HX_STACK_LINE(296)
				this->set_hasFocus(false);
			}
		}
	}
return null();
}


Void FlxInputText_obj::onKeyDown( ::openfl::_v2::events::KeyboardEvent e){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxInputText","onKeyDown",0xeda471aa,"flixel.addons.ui.FlxInputText.onKeyDown","flixel/addons/ui/FlxInputText.hx",306,0x19fbd1e7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(307)
		int key = e->keyCode;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(309)
		if ((this->hasFocus)){
			HX_STACK_LINE(312)
			if (((bool((bool((bool((key == (int)16)) || bool((key == (int)17)))) || bool((key == (int)220)))) || bool((key == (int)27))))){
				HX_STACK_LINE(314)
				return null();
			}
			else{
				HX_STACK_LINE(317)
				if (((key == (int)37))){
					HX_STACK_LINE(319)
					if (((this->caretIndex > (int)0))){
						HX_STACK_LINE(320)
						{
							HX_STACK_LINE(320)
							::flixel::addons::ui::FlxInputText _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(320)
							int _g1 = _g->caretIndex;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(320)
							_g->set_caretIndex((_g1 - (int)1));
							HX_STACK_LINE(320)
							_g1;
						}
						HX_STACK_LINE(321)
						::String _g = this->textField->get_text();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(321)
						this->set_text(_g);
					}
				}
				else{
					HX_STACK_LINE(325)
					if (((key == (int)39))){
						HX_STACK_LINE(327)
						if (((this->caretIndex < this->textField->get_text().length))){
							HX_STACK_LINE(328)
							{
								HX_STACK_LINE(328)
								::flixel::addons::ui::FlxInputText _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(328)
								int _g1 = _g->caretIndex;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(328)
								_g->set_caretIndex((_g1 + (int)1));
								HX_STACK_LINE(328)
								_g1;
							}
							HX_STACK_LINE(329)
							::String _g1 = this->textField->get_text();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(329)
							this->set_text(_g1);
						}
					}
					else{
						HX_STACK_LINE(333)
						if (((key == (int)35))){
							HX_STACK_LINE(335)
							this->set_caretIndex(this->textField->get_text().length);
							HX_STACK_LINE(336)
							::String _g2 = this->textField->get_text();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(336)
							this->set_text(_g2);
						}
						else{
							HX_STACK_LINE(339)
							if (((key == (int)36))){
								HX_STACK_LINE(341)
								this->set_caretIndex((int)0);
								HX_STACK_LINE(342)
								::String _g3 = this->textField->get_text();		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(342)
								this->set_text(_g3);
							}
							else{
								HX_STACK_LINE(345)
								if (((key == (int)8))){
									HX_STACK_LINE(347)
									if (((this->caretIndex > (int)0))){
										HX_STACK_LINE(349)
										::String s;		HX_STACK_VAR(s,"s");
										HX_STACK_LINE(350)
										{
											HX_STACK_LINE(350)
											::flixel::addons::ui::FlxInputText _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(350)
											int _g1 = _g->caretIndex;		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(350)
											_g->set_caretIndex((_g1 - (int)1));
											HX_STACK_LINE(350)
											_g1;
										}
										HX_STACK_LINE(351)
										::String _g4 = this->textField->get_text().substring((int)0,this->caretIndex);		HX_STACK_VAR(_g4,"_g4");
										HX_STACK_LINE(351)
										::String _g5 = this->textField->get_text().substring((this->caretIndex + (int)1),null());		HX_STACK_VAR(_g5,"_g5");
										HX_STACK_LINE(351)
										::String _g6 = (_g4 + _g5);		HX_STACK_VAR(_g6,"_g6");
										HX_STACK_LINE(351)
										this->set_text(_g6);
										HX_STACK_LINE(352)
										this->onChange(HX_CSTRING("backspace"));
									}
								}
								else{
									HX_STACK_LINE(356)
									if (((key == (int)46))){
										HX_STACK_LINE(358)
										if (((bool((this->textField->get_text().length > (int)0)) && bool((this->caretIndex < this->textField->get_text().length))))){
											HX_STACK_LINE(360)
											::String _g7 = this->textField->get_text().substring((int)0,this->caretIndex);		HX_STACK_VAR(_g7,"_g7");
											HX_STACK_LINE(360)
											::String _g8 = this->textField->get_text().substring((this->caretIndex + (int)1),null());		HX_STACK_VAR(_g8,"_g8");
											HX_STACK_LINE(360)
											::String _g9 = (_g7 + _g8);		HX_STACK_VAR(_g9,"_g9");
											HX_STACK_LINE(360)
											this->set_text(_g9);
											HX_STACK_LINE(361)
											this->onChange(HX_CSTRING("delete"));
										}
									}
									else{
										HX_STACK_LINE(365)
										if (((key == (int)13))){
											HX_STACK_LINE(367)
											this->onChange(HX_CSTRING("enter"));
										}
										else{
											HX_STACK_LINE(372)
											if (((e->charCode == (int)0))){
												HX_STACK_LINE(374)
												return null();
											}
											HX_STACK_LINE(376)
											::String _g10 = ::String::fromCharCode(e->charCode);		HX_STACK_VAR(_g10,"_g10");
											HX_STACK_LINE(376)
											::String newText = this->filter(_g10);		HX_STACK_VAR(newText,"newText");
											HX_STACK_LINE(378)
											if (((bool((newText.length > (int)0)) && bool(((bool((this->maxLength == (int)0)) || bool(((this->textField->get_text().length + newText.length) < this->maxLength)))))))){
												HX_STACK_LINE(380)
												{
													HX_STACK_LINE(380)
													::flixel::addons::ui::FlxInputText _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
													HX_STACK_LINE(380)
													int _g1 = _g->caretIndex;		HX_STACK_VAR(_g1,"_g1");
													HX_STACK_LINE(380)
													_g->set_caretIndex((_g1 + (int)1));
													HX_STACK_LINE(380)
													_g1;
												}
												HX_STACK_LINE(381)
												::String _g11 = this->textField->get_text();		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(381)
												::String _g12 = this->insertSubstring(_g11,newText,this->caretIndex);		HX_STACK_VAR(_g12,"_g12");
												HX_STACK_LINE(381)
												this->set_text(_g12);
												HX_STACK_LINE(382)
												this->onChange(HX_CSTRING("input"));
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,onKeyDown,(void))

Void FlxInputText_obj::onChange( ::String action){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxInputText","onChange",0x53f01d87,"flixel.addons.ui.FlxInputText.onChange","flixel/addons/ui/FlxInputText.hx",390,0x19fbd1e7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(action,"action")
		HX_STACK_LINE(390)
		if (((this->callback_dyn() != null()))){
			HX_STACK_LINE(392)
			::String _g = this->textField->get_text();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(392)
			this->callback(_g,action);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,onChange,(void))

::String FlxInputText_obj::insertSubstring( ::String Original,::String Insert,int Index){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","insertSubstring",0xe0c1ad40,"flixel.addons.ui.FlxInputText.insertSubstring","flixel/addons/ui/FlxInputText.hx",405,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Original,"Original")
	HX_STACK_ARG(Insert,"Insert")
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(406)
	if (((Index != Original.length))){
		HX_STACK_LINE(408)
		::String _g = Original.substring((int)0,Index);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(408)
		::String _g1 = (_g + Insert);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(408)
		::String _g2 = Original.substring(Index,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(408)
		::String _g3 = (_g1 + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(408)
		Original = _g3;
	}
	else{
		HX_STACK_LINE(412)
		Original = (Original + Insert);
	}
	HX_STACK_LINE(414)
	return Original;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxInputText_obj,insertSubstring,return )

int FlxInputText_obj::getCaretIndexFromPoint( ::flixel::math::FlxPoint Landing){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","getCaretIndexFromPoint",0xe14b9a99,"flixel.addons.ui.FlxInputText.getCaretIndexFromPoint","flixel/addons/ui/FlxInputText.hx",424,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Landing,"Landing")
	HX_STACK_LINE(426)
	::flixel::math::FlxPoint hit;		HX_STACK_VAR(hit,"hit");
	HX_STACK_LINE(426)
	{
		HX_STACK_LINE(426)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((::flixel::FlxG_obj::mouse->x - this->x),(::flixel::FlxG_obj::mouse->y - this->y));		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(426)
		point->_inPool = false;
		HX_STACK_LINE(426)
		hit = point;
	}
	HX_STACK_LINE(427)
	return this->getCharIndexAtPoint(hit->x,hit->y);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,getCaretIndexFromPoint,return )

::openfl::_v2::geom::Rectangle FlxInputText_obj::getCharBoundaries( int charIndex){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","getCharBoundaries",0x38cd7cdc,"flixel.addons.ui.FlxInputText.getCharBoundaries","flixel/addons/ui/FlxInputText.hx",435,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(charIndex,"charIndex")
	HX_STACK_LINE(436)
	if (((bool((bool((this->_charBoundaries != null())) && bool((charIndex >= (int)0)))) && bool((this->_charBoundaries->length > (int)0))))){
		HX_STACK_LINE(438)
		::openfl::_v2::geom::Rectangle r = ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(439)
		if (((charIndex >= this->_charBoundaries->length))){
			HX_STACK_LINE(441)
			::flixel::math::FlxRect _this = this->_charBoundaries->__get((this->_charBoundaries->length - (int)1)).StaticCast< ::flixel::math::FlxRect >();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(441)
			::openfl::_v2::geom::Rectangle FlashRect = r;		HX_STACK_VAR(FlashRect,"FlashRect");
			HX_STACK_LINE(441)
			if (((FlashRect == null()))){
				HX_STACK_LINE(441)
				::openfl::_v2::geom::Rectangle _g = ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(441)
				FlashRect = _g;
			}
			HX_STACK_LINE(441)
			FlashRect->x = _this->x;
			HX_STACK_LINE(441)
			FlashRect->y = _this->y;
			HX_STACK_LINE(441)
			FlashRect->width = _this->width;
			HX_STACK_LINE(441)
			FlashRect->height = _this->height;
			HX_STACK_LINE(441)
			FlashRect;
		}
		else{
			HX_STACK_LINE(444)
			::flixel::math::FlxRect _this = this->_charBoundaries->__get(charIndex).StaticCast< ::flixel::math::FlxRect >();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(444)
			::openfl::_v2::geom::Rectangle FlashRect = r;		HX_STACK_VAR(FlashRect,"FlashRect");
			HX_STACK_LINE(444)
			if (((FlashRect == null()))){
				HX_STACK_LINE(444)
				::openfl::_v2::geom::Rectangle _g1 = ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(444)
				FlashRect = _g1;
			}
			HX_STACK_LINE(444)
			FlashRect->x = _this->x;
			HX_STACK_LINE(444)
			FlashRect->y = _this->y;
			HX_STACK_LINE(444)
			FlashRect->width = _this->width;
			HX_STACK_LINE(444)
			FlashRect->height = _this->height;
			HX_STACK_LINE(444)
			FlashRect;
		}
		HX_STACK_LINE(446)
		return r;
	}
	HX_STACK_LINE(448)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,getCharBoundaries,return )

::String FlxInputText_obj::set_text( ::String Text){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_text",0x37e27742,"flixel.addons.ui.FlxInputText.set_text","flixel/addons/ui/FlxInputText.hx",452,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Text,"Text")
	HX_STACK_LINE(454)
	int _g = this->textField->get_scrollH();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(454)
	this->lastScroll = _g;
	HX_STACK_LINE(456)
	::String return_text = this->super::set_text(Text);		HX_STACK_VAR(return_text,"return_text");
	HX_STACK_LINE(457)
	int numChars = Text.length;		HX_STACK_VAR(numChars,"numChars");
	HX_STACK_LINE(458)
	this->prepareCharBoundaries(numChars);
	HX_STACK_LINE(459)
	this->textField->set_text(HX_CSTRING(""));
	HX_STACK_LINE(460)
	Float textH = (int)0;		HX_STACK_VAR(textH,"textH");
	HX_STACK_LINE(461)
	Float textW = (int)0;		HX_STACK_VAR(textW,"textW");
	HX_STACK_LINE(462)
	Float lastW = (int)0;		HX_STACK_VAR(lastW,"lastW");
	HX_STACK_LINE(467)
	Float magicX = (int)2;		HX_STACK_VAR(magicX,"magicX");
	HX_STACK_LINE(468)
	Float magicY = (int)2;		HX_STACK_VAR(magicY,"magicY");
	HX_STACK_LINE(470)
	{
		HX_STACK_LINE(470)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(470)
		while((true)){
			HX_STACK_LINE(470)
			if ((!(((_g1 < numChars))))){
				HX_STACK_LINE(470)
				break;
			}
			HX_STACK_LINE(470)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(472)
			::String _g11 = Text.substr(i,(int)1);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(472)
			this->textField->appendText(_g11);
			HX_STACK_LINE(473)
			Float _g2 = this->textField->get_textWidth();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(473)
			textW = _g2;
			HX_STACK_LINE(474)
			if (((i == (int)0))){
				HX_STACK_LINE(476)
				Float _g3 = this->textField->get_textHeight();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(476)
				textH = _g3;
			}
			HX_STACK_LINE(478)
			this->_charBoundaries->__get(i).StaticCast< ::flixel::math::FlxRect >()->x = (magicX + lastW);
			HX_STACK_LINE(479)
			this->_charBoundaries->__get(i).StaticCast< ::flixel::math::FlxRect >()->y = magicY;
			HX_STACK_LINE(480)
			this->_charBoundaries->__get(i).StaticCast< ::flixel::math::FlxRect >()->width = (textW - lastW);
			HX_STACK_LINE(481)
			this->_charBoundaries->__get(i).StaticCast< ::flixel::math::FlxRect >()->height = textH;
			HX_STACK_LINE(482)
			lastW = textW;
		}
	}
	HX_STACK_LINE(484)
	this->textField->set_text(Text);
	HX_STACK_LINE(485)
	this->onSetTextCheck();
	HX_STACK_LINE(486)
	return return_text;
}


int FlxInputText_obj::getCharIndexAtPoint( Float X,Float Y){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","getCharIndexAtPoint",0xf4438f7f,"flixel.addons.ui.FlxInputText.getCharIndexAtPoint","flixel/addons/ui/FlxInputText.hx",490,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_LINE(491)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(493)
	int _g = this->textField->get_scrollH();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(493)
	int _g1 = (_g + (int)2);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(493)
	hx::AddEq(X,_g1);
	HX_STACK_LINE(495)
	int offx;		HX_STACK_VAR(offx,"offx");
	HX_STACK_LINE(498)
	if (((bool((this->_charBoundaries != null())) && bool((this->_charBoundaries->length > (int)0))))){
		HX_STACK_LINE(500)
		Float _g2 = this->textField->get_textWidth();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(500)
		Float _g3 = this->textField->get_width();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(500)
		if (((_g2 <= _g3))){
			HX_STACK_LINE(501)
			::String _g4 = this->getAlignStr();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(501)
			::String _switch_1 = (_g4);
			if (  ( _switch_1==HX_CSTRING("right"))){
				HX_STACK_LINE(504)
				Float _g41 = this->textField->get_width();		HX_STACK_VAR(_g41,"_g41");
				HX_STACK_LINE(504)
				Float _g5 = (X - _g41);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(504)
				Float _g6 = this->textField->get_textWidth();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(504)
				Float _g7 = (_g5 + _g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(504)
				X = _g7;
			}
			else if (  ( _switch_1==HX_CSTRING("center"))){
				HX_STACK_LINE(506)
				Float _g8 = this->textField->get_width();		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(506)
				Float _g9 = (Float(_g8) / Float((int)2));		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(506)
				Float _g10 = (X - _g9);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(506)
				Float _g11 = this->textField->get_textWidth();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(506)
				Float _g12 = (Float(_g11) / Float((int)2));		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(506)
				Float _g13 = (_g10 + _g12);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(506)
				X = _g13;
			}
			else  {
			}
;
;
		}
	}
	HX_STACK_LINE(513)
	if (((this->_charBoundaries != null()))){
		HX_STACK_LINE(515)
		int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(515)
		Array< ::Dynamic > _g11 = this->_charBoundaries;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(515)
		while((true)){
			HX_STACK_LINE(515)
			if ((!(((_g2 < _g11->length))))){
				HX_STACK_LINE(515)
				break;
			}
			HX_STACK_LINE(515)
			::flixel::math::FlxRect r = _g11->__get(_g2).StaticCast< ::flixel::math::FlxRect >();		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(515)
			++(_g2);
			HX_STACK_LINE(517)
			if (((bool((X >= r->x)) && bool((X <= (r->x + r->width)))))){
				HX_STACK_LINE(519)
				return i;
			}
			HX_STACK_LINE(521)
			(i)++;
		}
	}
	HX_STACK_LINE(526)
	if (((bool((this->_charBoundaries != null())) && bool((this->_charBoundaries->length > (int)0))))){
		HX_STACK_LINE(528)
		Float _g14 = this->textField->get_textWidth();		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(528)
		if (((X > _g14))){
			HX_STACK_LINE(530)
			return this->_charBoundaries->length;
		}
	}
	HX_STACK_LINE(535)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxInputText_obj,getCharIndexAtPoint,return )

Void FlxInputText_obj::prepareCharBoundaries( int numChars){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxInputText","prepareCharBoundaries",0x33edc58d,"flixel.addons.ui.FlxInputText.prepareCharBoundaries","flixel/addons/ui/FlxInputText.hx",539,0x19fbd1e7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(numChars,"numChars")
		HX_STACK_LINE(540)
		if (((this->_charBoundaries == null()))){
			HX_STACK_LINE(542)
			this->_charBoundaries = Array_obj< ::Dynamic >::__new();
		}
		HX_STACK_LINE(545)
		if (((this->_charBoundaries->length > numChars))){
			HX_STACK_LINE(547)
			int diff = (this->_charBoundaries->length - numChars);		HX_STACK_VAR(diff,"diff");
			HX_STACK_LINE(548)
			{
				HX_STACK_LINE(548)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(548)
				while((true)){
					HX_STACK_LINE(548)
					if ((!(((_g < diff))))){
						HX_STACK_LINE(548)
						break;
					}
					HX_STACK_LINE(548)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(550)
					this->_charBoundaries->pop().StaticCast< ::flixel::math::FlxRect >();
				}
			}
		}
		HX_STACK_LINE(554)
		{
			HX_STACK_LINE(554)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(554)
			while((true)){
				HX_STACK_LINE(554)
				if ((!(((_g < numChars))))){
					HX_STACK_LINE(554)
					break;
				}
				HX_STACK_LINE(554)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(556)
				if ((((this->_charBoundaries->length - (int)1) < i))){
					HX_STACK_LINE(558)
					::flixel::math::FlxRect _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(558)
					{
						HX_STACK_LINE(558)
						::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(558)
						{
							HX_STACK_LINE(558)
							::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(558)
							_this->x = (int)0;
							HX_STACK_LINE(558)
							_this->y = (int)0;
							HX_STACK_LINE(558)
							_this->width = (int)0;
							HX_STACK_LINE(558)
							_this->height = (int)0;
							HX_STACK_LINE(558)
							rect = _this;
						}
						HX_STACK_LINE(558)
						rect->_inPool = false;
						HX_STACK_LINE(558)
						_g1 = rect;
					}
					HX_STACK_LINE(558)
					this->_charBoundaries->push(_g1);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,prepareCharBoundaries,(void))

Void FlxInputText_obj::onSetTextCheck( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxInputText","onSetTextCheck",0x14902030,"flixel.addons.ui.FlxInputText.onSetTextCheck","flixel/addons/ui/FlxInputText.hx",566,0x19fbd1e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(568)
		::openfl::_v2::geom::Rectangle boundary = null();		HX_STACK_VAR(boundary,"boundary");
		HX_STACK_LINE(569)
		if (((this->caretIndex == (int)-1))){
			HX_STACK_LINE(571)
			::openfl::_v2::geom::Rectangle _g = this->getCharBoundaries((this->textField->get_text().length - (int)1));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(571)
			boundary = _g;
		}
		else{
			HX_STACK_LINE(574)
			::openfl::_v2::geom::Rectangle _g1 = this->getCharBoundaries(this->caretIndex);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(574)
			boundary = _g1;
		}
		HX_STACK_LINE(577)
		if (((boundary != null()))){
			HX_STACK_LINE(580)
			int diffW = (int)0;		HX_STACK_VAR(diffW,"diffW");
			HX_STACK_LINE(581)
			Float _g2 = boundary->get_right();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(581)
			Float _g3 = this->textField->get_width();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(581)
			Float _g4 = (this->lastScroll + _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(581)
			Float _g5 = (_g4 - (int)2);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(581)
			if (((_g2 > _g5))){
				HX_STACK_LINE(583)
				Float _g6 = this->textField->get_width();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(583)
				Float _g7 = (_g6 - (int)2);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(583)
				Float _g8 = boundary->get_right();		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(583)
				Float _g9 = (_g7 - _g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(583)
				int _g10 = -(::Std_obj::_int(_g9));		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(583)
				diffW = _g10;
			}
			else{
				HX_STACK_LINE(584)
				Float _g11 = boundary->get_left();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(584)
				if (((_g11 < this->lastScroll))){
					HX_STACK_LINE(586)
					Float _g12 = boundary->get_left();		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(586)
					int _g13 = ::Std_obj::_int(_g12);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(586)
					int _g14 = (_g13 - (int)2);		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(586)
					diffW = _g14;
				}
				else{
					HX_STACK_LINE(589)
					diffW = this->lastScroll;
				}
			}
			HX_STACK_LINE(593)
			this->textField->set_scrollH(diffW);
			HX_STACK_LINE(595)
			this->calcFrame(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxInputText_obj,onSetTextCheck,(void))

Void FlxInputText_obj::calcFrame( hx::Null< bool >  __o_RunOnCpp){
bool RunOnCpp = __o_RunOnCpp.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","calcFrame",0x733ee2c0,"flixel.addons.ui.FlxInputText.calcFrame","flixel/addons/ui/FlxInputText.hx",606,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RunOnCpp,"RunOnCpp")
{
		HX_STACK_LINE(607)
		this->super::calcFrame(RunOnCpp);
		HX_STACK_LINE(609)
		if (((this->fieldBorderSprite != null()))){
			HX_STACK_LINE(611)
			if (((this->fieldBorderThickness > (int)0))){
				HX_STACK_LINE(613)
				Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(613)
				Float _g1 = (_g + (this->fieldBorderThickness * (int)2));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(613)
				int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(613)
				Float _g3 = this->get_height();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(613)
				Float _g4 = (_g3 + (this->fieldBorderThickness * (int)2));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(613)
				int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(613)
				this->fieldBorderSprite->makeGraphic(_g2,_g5,this->fieldBorderColor,null(),null());
				HX_STACK_LINE(614)
				this->fieldBorderSprite->set_x((this->x - this->fieldBorderThickness));
				HX_STACK_LINE(615)
				this->fieldBorderSprite->set_y((this->y - this->fieldBorderThickness));
			}
			else{
				HX_STACK_LINE(617)
				if (((this->fieldBorderThickness == (int)0))){
					HX_STACK_LINE(619)
					this->fieldBorderSprite->set_visible(false);
				}
			}
		}
		HX_STACK_LINE(623)
		if (((this->backgroundSprite != null()))){
			HX_STACK_LINE(625)
			if ((this->background)){
				HX_STACK_LINE(627)
				Float _g6 = this->get_width();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(627)
				int _g7 = ::Std_obj::_int(_g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(627)
				Float _g8 = this->get_height();		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(627)
				int _g9 = ::Std_obj::_int(_g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(627)
				this->backgroundSprite->makeGraphic(_g7,_g9,this->backgroundColor,null(),null());
				HX_STACK_LINE(628)
				this->backgroundSprite->set_x(this->x);
				HX_STACK_LINE(629)
				this->backgroundSprite->set_y(this->y);
			}
			else{
				HX_STACK_LINE(633)
				this->backgroundSprite->set_visible(false);
			}
		}
		HX_STACK_LINE(637)
		if (((this->caret != null()))){
			HX_STACK_LINE(642)
			int cw = this->caretWidth;		HX_STACK_VAR(cw,"cw");
			HX_STACK_LINE(643)
			int ch = ::Std_obj::_int((this->_defaultFormat->size + (int)2));		HX_STACK_VAR(ch,"ch");
			HX_STACK_LINE(646)
			int borderC = (int((int)-16777216) | int((int(this->borderColor) & int((int)16777215))));		HX_STACK_VAR(borderC,"borderC");
			HX_STACK_LINE(647)
			int caretC = (int((int)-16777216) | int((int(this->caretColor) & int((int)16777215))));		HX_STACK_VAR(caretC,"caretC");
			HX_STACK_LINE(650)
			::String _g10 = ::Std_obj::string(this->borderStyle);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(650)
			::String _g11 = (((((((HX_CSTRING("caret") + cw) + HX_CSTRING("x")) + ch) + HX_CSTRING("c:")) + caretC) + HX_CSTRING("b:")) + _g10);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(650)
			::String _g12 = (_g11 + HX_CSTRING(","));		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(650)
			::String _g13 = (_g12 + this->borderSize);		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(650)
			::String _g14 = (_g13 + HX_CSTRING(","));		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(650)
			::String caretKey = (_g14 + borderC);		HX_STACK_VAR(caretKey,"caretKey");
			HX_STACK_LINE(651)
			{
				HX_STACK_LINE(651)
				::flixel::text::FlxTextBorderStyle _g = this->borderStyle;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(651)
				switch( (int)(_g->__Index())){
					case (int)0: {
						HX_STACK_LINE(655)
						this->caret->makeGraphic(cw,ch,caretC,false,caretKey);
						HX_STACK_LINE(656)
						Float _g15 = this->caret->offset->set_y((int)0);		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(656)
						this->caret->offset->set_x(_g15);
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(660)
						int _g16 = ::Std_obj::_int(this->borderSize);		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(660)
						hx::AddEq(cw,_g16);
						HX_STACK_LINE(661)
						int _g17 = ::Std_obj::_int(this->borderSize);		HX_STACK_VAR(_g17,"_g17");
						HX_STACK_LINE(661)
						hx::AddEq(ch,_g17);
						HX_STACK_LINE(662)
						this->caret->makeGraphic(cw,ch,(int)0,false,caretKey);
						HX_STACK_LINE(663)
						int _g18 = ::Std_obj::_int((this->_defaultFormat->size + (int)2));		HX_STACK_VAR(_g18,"_g18");
						HX_STACK_LINE(663)
						::openfl::_v2::geom::Rectangle r = ::openfl::_v2::geom::Rectangle_obj::__new(this->borderSize,this->borderSize,this->caretWidth,_g18);		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(664)
						this->caret->get_pixels()->fillRect(r,borderC);
						HX_STACK_LINE(665)
						Float _g19 = r->y = (int)0;		HX_STACK_VAR(_g19,"_g19");
						HX_STACK_LINE(665)
						r->x = _g19;
						HX_STACK_LINE(666)
						this->caret->get_pixels()->fillRect(r,caretC);
						HX_STACK_LINE(667)
						Float _g20 = this->caret->offset->set_y((int)0);		HX_STACK_VAR(_g20,"_g20");
						HX_STACK_LINE(667)
						this->caret->offset->set_x(_g20);
					}
					;break;
					case (int)3: case (int)2: {
						HX_STACK_LINE(671)
						int _g21 = ::Std_obj::_int((this->borderSize * (int)2));		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(671)
						hx::AddEq(cw,_g21);
						HX_STACK_LINE(672)
						int _g22 = ::Std_obj::_int((this->borderSize * (int)2));		HX_STACK_VAR(_g22,"_g22");
						HX_STACK_LINE(672)
						hx::AddEq(ch,_g22);
						HX_STACK_LINE(673)
						this->caret->makeGraphic(cw,ch,borderC,false,caretKey);
						HX_STACK_LINE(674)
						int _g23 = ::Std_obj::_int((this->_defaultFormat->size + (int)2));		HX_STACK_VAR(_g23,"_g23");
						HX_STACK_LINE(674)
						::openfl::_v2::geom::Rectangle r = ::openfl::_v2::geom::Rectangle_obj::__new(this->borderSize,this->borderSize,this->caretWidth,_g23);		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(675)
						this->caret->get_pixels()->fillRect(r,caretC);
						HX_STACK_LINE(677)
						Float _g24 = this->caret->offset->set_y(this->borderSize);		HX_STACK_VAR(_g24,"_g24");
						HX_STACK_LINE(677)
						this->caret->offset->set_x(_g24);
					}
					;break;
				}
			}
			HX_STACK_LINE(680)
			this->caret->set_width(cw);
			HX_STACK_LINE(681)
			this->caret->set_height(ch);
			HX_STACK_LINE(683)
			this->set_caretIndex(this->caretIndex);
		}
	}
return null();
}


Void FlxInputText_obj::toggleCaret( ::flixel::util::FlxTimer timer){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxInputText","toggleCaret",0x6f59aab7,"flixel.addons.ui.FlxInputText.toggleCaret","flixel/addons/ui/FlxInputText.hx",692,0x19fbd1e7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(timer,"timer")
		HX_STACK_LINE(692)
		this->caret->set_visible(!(this->caret->visible));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,toggleCaret,(void))

::String FlxInputText_obj::filter( ::String text){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","filter",0x93749f50,"flixel.addons.ui.FlxInputText.filter","flixel/addons/ui/FlxInputText.hx",700,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_LINE(701)
	if (((this->forceCase == (int)1))){
		HX_STACK_LINE(703)
		::String _g = text.toUpperCase();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(703)
		text = _g;
	}
	else{
		HX_STACK_LINE(705)
		if (((this->forceCase == (int)2))){
			HX_STACK_LINE(707)
			::String _g1 = text.toLowerCase();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(707)
			text = _g1;
		}
	}
	HX_STACK_LINE(710)
	if (((this->filterMode != (int)0))){
		HX_STACK_LINE(712)
		::EReg pattern;		HX_STACK_VAR(pattern,"pattern");
		HX_STACK_LINE(713)
		{
			HX_STACK_LINE(713)
			int _g = this->filterMode;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(713)
			switch( (int)(_g)){
				case (int)1: {
					HX_STACK_LINE(715)
					::EReg _g2 = ::EReg_obj::__new(HX_CSTRING("[^a-zA-Z]*"),HX_CSTRING("g"));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(715)
					pattern = _g2;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(716)
					::EReg _g3 = ::EReg_obj::__new(HX_CSTRING("[^0-9]*"),HX_CSTRING("g"));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(716)
					pattern = _g3;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(717)
					::EReg _g4 = ::EReg_obj::__new(HX_CSTRING("[^a-zA-Z0-9]*"),HX_CSTRING("g"));		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(717)
					pattern = _g4;
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(718)
					pattern = this->customFilterPattern;
				}
				;break;
				default: {
					HX_STACK_LINE(720)
					HX_STACK_DO_THROW(::openfl::errors::Error_obj::__new(((HX_CSTRING("FlxInputText: Unknown filterMode (") + this->filterMode) + HX_CSTRING(")")),null()));
				}
			}
		}
		HX_STACK_LINE(722)
		pattern->replace(text,HX_CSTRING(""));
	}
	HX_STACK_LINE(724)
	return text;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,filter,return )

Dynamic FlxInputText_obj::set_params( Dynamic p){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_params",0xe3d3351b,"flixel.addons.ui.FlxInputText.set_params","flixel/addons/ui/FlxInputText.hx",728,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(729)
	this->params = p;
	HX_STACK_LINE(730)
	if (((this->params == null()))){
		HX_STACK_LINE(732)
		this->params = Dynamic( Array_obj<Dynamic>::__new());
	}
	HX_STACK_LINE(734)
	::String _g = this->textField->get_text();		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &_g){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxInputText.hx",734,0x19fbd1e7)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("name") , HX_CSTRING("value"),false);
				__result->Add(HX_CSTRING("value") , _g,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(734)
	Dynamic namedValue = _Function_1_1::Block(_g);		HX_STACK_VAR(namedValue,"namedValue");
	HX_STACK_LINE(735)
	this->params->__Field(HX_CSTRING("push"),true)(namedValue);
	HX_STACK_LINE(736)
	return p;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_params,return )

Float FlxInputText_obj::set_x( Float X){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_x",0x02dc16c3,"flixel.addons.ui.FlxInputText.set_x","flixel/addons/ui/FlxInputText.hx",740,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_LINE(741)
	if (((bool((this->fieldBorderSprite != null())) && bool((this->fieldBorderThickness > (int)0))))){
		HX_STACK_LINE(743)
		this->fieldBorderSprite->set_x((X - this->fieldBorderThickness));
	}
	HX_STACK_LINE(745)
	if (((bool((this->backgroundSprite != null())) && bool(this->background)))){
		HX_STACK_LINE(747)
		this->backgroundSprite->set_x(X);
	}
	HX_STACK_LINE(749)
	return this->super::set_x(X);
}


Float FlxInputText_obj::set_y( Float Y){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_y",0x02dc16c4,"flixel.addons.ui.FlxInputText.set_y","flixel/addons/ui/FlxInputText.hx",753,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Y,"Y")
	HX_STACK_LINE(754)
	if (((bool((this->fieldBorderSprite != null())) && bool((this->fieldBorderThickness > (int)0))))){
		HX_STACK_LINE(756)
		this->fieldBorderSprite->set_y((Y - this->fieldBorderThickness));
	}
	HX_STACK_LINE(758)
	if (((bool((this->backgroundSprite != null())) && bool(this->background)))){
		HX_STACK_LINE(760)
		this->backgroundSprite->set_y(Y);
	}
	HX_STACK_LINE(762)
	return this->super::set_y(Y);
}


bool FlxInputText_obj::set_hasFocus( bool newFocus){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_hasFocus",0xf91bc333,"flixel.addons.ui.FlxInputText.set_hasFocus","flixel/addons/ui/FlxInputText.hx",766,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newFocus,"newFocus")
	HX_STACK_LINE(767)
	if ((newFocus)){
		HX_STACK_LINE(769)
		if (((this->hasFocus != newFocus))){
			HX_STACK_LINE(771)
			::flixel::util::FlxTimer _g = ::flixel::util::FlxTimer_obj::__new(0.5,this->toggleCaret_dyn(),(int)0);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(771)
			this->_caretTimer = _g;
			HX_STACK_LINE(772)
			this->caret->set_visible(true);
			HX_STACK_LINE(773)
			this->set_caretIndex(this->textField->get_text().length);
		}
	}
	else{
		HX_STACK_LINE(779)
		this->caret->set_visible(false);
		HX_STACK_LINE(780)
		if (((this->_caretTimer != null()))){
			HX_STACK_LINE(782)
			this->_caretTimer->cancel();
		}
	}
	HX_STACK_LINE(786)
	if (((newFocus != this->hasFocus))){
		HX_STACK_LINE(788)
		this->calcFrame(null());
	}
	HX_STACK_LINE(790)
	return this->hasFocus = newFocus;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_hasFocus,return )

::String FlxInputText_obj::getAlignStr( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","getAlignStr",0xf6458f0a,"flixel.addons.ui.FlxInputText.getAlignStr","flixel/addons/ui/FlxInputText.hx",793,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(794)
	::String alignStr = HX_CSTRING("left");		HX_STACK_VAR(alignStr,"alignStr");
	HX_STACK_LINE(795)
	if (((bool((this->_defaultFormat != null())) && bool((this->_defaultFormat->align != null()))))){
		HX_STACK_LINE(796)
		::String _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(796)
		_g = hx::TCast< String >::cast(this->_defaultFormat->align);
		HX_STACK_LINE(796)
		alignStr = _g;
	}
	HX_STACK_LINE(798)
	return alignStr;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxInputText_obj,getAlignStr,return )

int FlxInputText_obj::set_caretIndex( int newCaretIndex){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_caretIndex",0x5b1dfee4,"flixel.addons.ui.FlxInputText.set_caretIndex","flixel/addons/ui/FlxInputText.hx",802,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newCaretIndex,"newCaretIndex")
	HX_STACK_LINE(803)
	Float offx = (int)0;		HX_STACK_VAR(offx,"offx");
	HX_STACK_LINE(805)
	::String alignStr = this->getAlignStr();		HX_STACK_VAR(alignStr,"alignStr");
	HX_STACK_LINE(807)
	::String _switch_2 = (alignStr);
	if (  ( _switch_2==HX_CSTRING("right"))){
		HX_STACK_LINE(809)
		Float _g = this->textField->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(809)
		Float _g1 = (_g - (int)2);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(809)
		Float _g2 = this->textField->get_textWidth();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(809)
		Float _g3 = (_g1 - _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(809)
		Float _g4 = (_g3 - (int)2);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(809)
		offx = _g4;
		HX_STACK_LINE(810)
		if (((offx < (int)0))){
			HX_STACK_LINE(810)
			offx = (int)0;
		}
	}
	else if (  ( _switch_2==HX_CSTRING("center"))){
		HX_STACK_LINE(814)
		Float _g5 = this->textField->get_width();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(814)
		Float _g6 = (_g5 - (int)2);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(814)
		Float _g7 = this->textField->get_textWidth();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(814)
		Float _g8 = (_g6 - _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(814)
		Float _g9 = (Float(_g8) / Float((int)2));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(814)
		int _g10 = this->textField->get_scrollH();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(814)
		Float _g11 = (Float(_g10) / Float((int)2));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(814)
		Float _g12 = (_g9 + _g11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(814)
		offx = _g12;
		HX_STACK_LINE(816)
		if (((offx <= (int)1))){
			HX_STACK_LINE(816)
			offx = (int)0;
		}
	}
	else  {
		HX_STACK_LINE(818)
		offx = (int)0;
	}
;
;
	HX_STACK_LINE(821)
	this->caretIndex = newCaretIndex;
	HX_STACK_LINE(824)
	if (((this->caretIndex > (this->textField->get_text().length + (int)1)))){
		HX_STACK_LINE(826)
		this->caretIndex = (int)-1;
	}
	HX_STACK_LINE(830)
	if (((this->caretIndex != (int)-1))){
		HX_STACK_LINE(832)
		::openfl::_v2::geom::Rectangle boundaries = null();		HX_STACK_VAR(boundaries,"boundaries");
		HX_STACK_LINE(835)
		if (((this->caretIndex < this->textField->get_text().length))){
			HX_STACK_LINE(836)
			::openfl::_v2::geom::Rectangle _g13 = this->getCharBoundaries(this->caretIndex);		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(836)
			boundaries = _g13;
			HX_STACK_LINE(837)
			if (((boundaries != null()))){
				HX_STACK_LINE(839)
				Float _g14 = boundaries->get_left();		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(839)
				Float _g15 = (offx + _g14);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(839)
				Float _g16 = (_g15 + this->x);		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(839)
				this->caret->set_x(_g16);
				HX_STACK_LINE(840)
				Float _g17 = boundaries->get_top();		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(840)
				Float _g18 = (_g17 + this->y);		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(840)
				this->caret->set_y(_g18);
			}
		}
		else{
			HX_STACK_LINE(845)
			::openfl::_v2::geom::Rectangle _g19 = this->getCharBoundaries((this->caretIndex - (int)1));		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(845)
			boundaries = _g19;
			HX_STACK_LINE(846)
			if (((boundaries != null()))){
				HX_STACK_LINE(848)
				Float _g20 = boundaries->get_right();		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(848)
				Float _g21 = (offx + _g20);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(848)
				Float _g22 = (_g21 + this->x);		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(848)
				this->caret->set_x(_g22);
				HX_STACK_LINE(849)
				Float _g23 = boundaries->get_top();		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(849)
				Float _g24 = (_g23 + this->y);		HX_STACK_VAR(_g24,"_g24");
				HX_STACK_LINE(849)
				this->caret->set_y(_g24);
			}
			else{
				HX_STACK_LINE(852)
				if (((this->textField->get_text().length == (int)0))){
					HX_STACK_LINE(855)
					this->caret->set_x(((this->x + offx) + (int)2));
					HX_STACK_LINE(856)
					this->caret->set_y((this->y + (int)2));
				}
			}
		}
	}
	HX_STACK_LINE(862)
	{
		HX_STACK_LINE(862)
		::flixel::FlxSprite _g = this->caret;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(862)
		int _g25 = this->textField->get_scrollH();		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(862)
		Float _g26 = (_g->x - _g25);		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(862)
		_g->set_x(_g26);
	}
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::flixel::addons::ui::FlxInputText_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxInputText.hx",866,0x19fbd1e7)
			{
				HX_STACK_LINE(866)
				Float _g27 = __this->caret->get_width();		HX_STACK_VAR(_g27,"_g27");
				HX_STACK_LINE(866)
				Float _g28 = (__this->caret->x + _g27);		HX_STACK_VAR(_g28,"_g28");
				HX_STACK_LINE(866)
				Float _g29 = __this->get_width();		HX_STACK_VAR(_g29,"_g29");
				HX_STACK_LINE(866)
				Float _g30 = (__this->x + _g29);		HX_STACK_VAR(_g30,"_g30");
				HX_STACK_LINE(866)
				return (_g28 > _g30);
			}
			return null();
		}
	};
	HX_STACK_LINE(866)
	if (((  (((this->lines == (int)1))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
		HX_STACK_LINE(868)
		Float _g31 = this->get_width();		HX_STACK_VAR(_g31,"_g31");
		HX_STACK_LINE(868)
		Float _g32 = (this->x + _g31);		HX_STACK_VAR(_g32,"_g32");
		HX_STACK_LINE(868)
		Float _g33 = (_g32 - (int)2);		HX_STACK_VAR(_g33,"_g33");
		HX_STACK_LINE(868)
		this->caret->set_x(_g33);
	}
	HX_STACK_LINE(871)
	return this->caretIndex;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_caretIndex,return )

int FlxInputText_obj::set_forceCase( int Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_forceCase",0x119aa786,"flixel.addons.ui.FlxInputText.set_forceCase","flixel/addons/ui/FlxInputText.hx",875,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(876)
	this->forceCase = Value;
	HX_STACK_LINE(877)
	::String _g = this->textField->get_text();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(877)
	::String _g1 = this->filter(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(877)
	this->set_text(_g1);
	HX_STACK_LINE(878)
	return this->forceCase;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_forceCase,return )

Float FlxInputText_obj::set_size( Float Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_size",0x373c4b56,"flixel.addons.ui.FlxInputText.set_size","flixel/addons/ui/FlxInputText.hx",882,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(883)
	this->super::set_size(Value);
	HX_STACK_LINE(884)
	int _g = ::Std_obj::_int((this->_defaultFormat->size + (int)2));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(884)
	this->caret->makeGraphic((int)1,_g,null(),null(),null());
	HX_STACK_LINE(885)
	return Value;
}


int FlxInputText_obj::set_maxLength( int Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_maxLength",0x992e7ff5,"flixel.addons.ui.FlxInputText.set_maxLength","flixel/addons/ui/FlxInputText.hx",889,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(890)
	this->maxLength = Value;
	HX_STACK_LINE(891)
	if (((this->textField->get_text().length > this->maxLength))){
		HX_STACK_LINE(893)
		::String _g = this->textField->get_text().substring((int)0,this->maxLength);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(893)
		this->set_text(_g);
	}
	HX_STACK_LINE(895)
	return this->maxLength;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_maxLength,return )

int FlxInputText_obj::set_lines( int Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_lines",0x15ae75ca,"flixel.addons.ui.FlxInputText.set_lines","flixel/addons/ui/FlxInputText.hx",899,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(900)
	if (((Value == (int)0))){
		HX_STACK_LINE(900)
		return (int)0;
	}
	HX_STACK_LINE(902)
	if (((Value > (int)1))){
		HX_STACK_LINE(903)
		this->textField->set_wordWrap(true);
		HX_STACK_LINE(904)
		this->textField->set_multiline(true);
	}
	else{
		HX_STACK_LINE(907)
		this->textField->set_wordWrap(false);
		HX_STACK_LINE(908)
		this->textField->set_multiline(false);
	}
	HX_STACK_LINE(911)
	this->lines = Value;
	HX_STACK_LINE(912)
	this->calcFrame(null());
	HX_STACK_LINE(913)
	return this->lines;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_lines,return )

bool FlxInputText_obj::get_passwordMode( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","get_passwordMode",0x890c263f,"flixel.addons.ui.FlxInputText.get_passwordMode","flixel/addons/ui/FlxInputText.hx",918,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(918)
	return this->textField->get_displayAsPassword();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxInputText_obj,get_passwordMode,return )

bool FlxInputText_obj::set_passwordMode( bool value){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_passwordMode",0xdf4e13b3,"flixel.addons.ui.FlxInputText.set_passwordMode","flixel/addons/ui/FlxInputText.hx",922,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(923)
	this->textField->set_displayAsPassword(value);
	HX_STACK_LINE(924)
	this->calcFrame(null());
	HX_STACK_LINE(925)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_passwordMode,return )

int FlxInputText_obj::set_filterMode( int Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_filterMode",0xd267a390,"flixel.addons.ui.FlxInputText.set_filterMode","flixel/addons/ui/FlxInputText.hx",929,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(930)
	this->filterMode = Value;
	HX_STACK_LINE(931)
	::String _g = this->textField->get_text();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(931)
	::String _g1 = this->filter(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(931)
	this->set_text(_g1);
	HX_STACK_LINE(932)
	return this->filterMode;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_filterMode,return )

int FlxInputText_obj::set_fieldBorderColor( int Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_fieldBorderColor",0x31131c52,"flixel.addons.ui.FlxInputText.set_fieldBorderColor","flixel/addons/ui/FlxInputText.hx",936,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(937)
	this->fieldBorderColor = Value;
	HX_STACK_LINE(938)
	this->calcFrame(null());
	HX_STACK_LINE(939)
	return this->fieldBorderColor;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_fieldBorderColor,return )

int FlxInputText_obj::set_fieldBorderThickness( int Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_fieldBorderThickness",0x8f7f3fe3,"flixel.addons.ui.FlxInputText.set_fieldBorderThickness","flixel/addons/ui/FlxInputText.hx",943,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(944)
	this->fieldBorderThickness = Value;
	HX_STACK_LINE(945)
	this->calcFrame(null());
	HX_STACK_LINE(946)
	return this->fieldBorderThickness;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_fieldBorderThickness,return )

int FlxInputText_obj::set_backgroundColor( int Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_backgroundColor",0x1e95b220,"flixel.addons.ui.FlxInputText.set_backgroundColor","flixel/addons/ui/FlxInputText.hx",950,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(951)
	this->backgroundColor = Value;
	HX_STACK_LINE(952)
	this->calcFrame(null());
	HX_STACK_LINE(953)
	return this->backgroundColor;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_backgroundColor,return )

int FlxInputText_obj::NO_FILTER;

int FlxInputText_obj::ONLY_ALPHA;

int FlxInputText_obj::ONLY_NUMERIC;

int FlxInputText_obj::ONLY_ALPHANUMERIC;

int FlxInputText_obj::CUSTOM_FILTER;

int FlxInputText_obj::ALL_CASES;

int FlxInputText_obj::UPPER_CASE;

int FlxInputText_obj::LOWER_CASE;

::String FlxInputText_obj::BACKSPACE_ACTION;

::String FlxInputText_obj::DELETE_ACTION;

::String FlxInputText_obj::ENTER_ACTION;

::String FlxInputText_obj::INPUT_ACTION;


FlxInputText_obj::FlxInputText_obj()
{
}

void FlxInputText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxInputText);
	HX_MARK_MEMBER_NAME(customFilterPattern,"customFilterPattern");
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(caretColor,"caretColor");
	HX_MARK_MEMBER_NAME(caretWidth,"caretWidth");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(hasFocus,"hasFocus");
	HX_MARK_MEMBER_NAME(caretIndex,"caretIndex");
	HX_MARK_MEMBER_NAME(forceCase,"forceCase");
	HX_MARK_MEMBER_NAME(maxLength,"maxLength");
	HX_MARK_MEMBER_NAME(lines,"lines");
	HX_MARK_MEMBER_NAME(filterMode,"filterMode");
	HX_MARK_MEMBER_NAME(fieldBorderColor,"fieldBorderColor");
	HX_MARK_MEMBER_NAME(fieldBorderThickness,"fieldBorderThickness");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(backgroundSprite,"backgroundSprite");
	HX_MARK_MEMBER_NAME(_caretTimer,"_caretTimer");
	HX_MARK_MEMBER_NAME(caret,"caret");
	HX_MARK_MEMBER_NAME(fieldBorderSprite,"fieldBorderSprite");
	HX_MARK_MEMBER_NAME(_scrollBoundIndeces,"_scrollBoundIndeces");
	HX_MARK_MEMBER_NAME(_charBoundaries,"_charBoundaries");
	HX_MARK_MEMBER_NAME(lastScroll,"lastScroll");
	::flixel::text::FlxText_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxInputText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(customFilterPattern,"customFilterPattern");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(caretColor,"caretColor");
	HX_VISIT_MEMBER_NAME(caretWidth,"caretWidth");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(hasFocus,"hasFocus");
	HX_VISIT_MEMBER_NAME(caretIndex,"caretIndex");
	HX_VISIT_MEMBER_NAME(forceCase,"forceCase");
	HX_VISIT_MEMBER_NAME(maxLength,"maxLength");
	HX_VISIT_MEMBER_NAME(lines,"lines");
	HX_VISIT_MEMBER_NAME(filterMode,"filterMode");
	HX_VISIT_MEMBER_NAME(fieldBorderColor,"fieldBorderColor");
	HX_VISIT_MEMBER_NAME(fieldBorderThickness,"fieldBorderThickness");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(backgroundSprite,"backgroundSprite");
	HX_VISIT_MEMBER_NAME(_caretTimer,"_caretTimer");
	HX_VISIT_MEMBER_NAME(caret,"caret");
	HX_VISIT_MEMBER_NAME(fieldBorderSprite,"fieldBorderSprite");
	HX_VISIT_MEMBER_NAME(_scrollBoundIndeces,"_scrollBoundIndeces");
	HX_VISIT_MEMBER_NAME(_charBoundaries,"_charBoundaries");
	HX_VISIT_MEMBER_NAME(lastScroll,"lastScroll");
	::flixel::text::FlxText_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxInputText_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lines") ) { return lines; }
		if (HX_FIELD_EQ(inName,"caret") ) { return caret; }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return params; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"filter") ) { return filter_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return callback; }
		if (HX_FIELD_EQ(inName,"hasFocus") ) { return hasFocus; }
		if (HX_FIELD_EQ(inName,"onChange") ) { return onChange_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"forceCase") ) { return forceCase; }
		if (HX_FIELD_EQ(inName,"maxLength") ) { return maxLength; }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return calcFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"set_lines") ) { return set_lines_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		if (HX_FIELD_EQ(inName,"caretColor") ) { return caretColor; }
		if (HX_FIELD_EQ(inName,"caretWidth") ) { return caretWidth; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { return caretIndex; }
		if (HX_FIELD_EQ(inName,"filterMode") ) { return filterMode; }
		if (HX_FIELD_EQ(inName,"lastScroll") ) { return lastScroll; }
		if (HX_FIELD_EQ(inName,"drawSprite") ) { return drawSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"set_params") ) { return set_params_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_caretTimer") ) { return _caretTimer; }
		if (HX_FIELD_EQ(inName,"toggleCaret") ) { return toggleCaret_dyn(); }
		if (HX_FIELD_EQ(inName,"getAlignStr") ) { return getAlignStr_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"passwordMode") ) { return get_passwordMode(); }
		if (HX_FIELD_EQ(inName,"set_hasFocus") ) { return set_hasFocus_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_forceCase") ) { return set_forceCase_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxLength") ) { return set_maxLength_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_caretColor") ) { return set_caretColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_caretWidth") ) { return set_caretWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"onSetTextCheck") ) { return onSetTextCheck_dyn(); }
		if (HX_FIELD_EQ(inName,"set_caretIndex") ) { return set_caretIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_filterMode") ) { return set_filterMode_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return backgroundColor; }
		if (HX_FIELD_EQ(inName,"_charBoundaries") ) { return _charBoundaries; }
		if (HX_FIELD_EQ(inName,"insertSubstring") ) { return insertSubstring_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fieldBorderColor") ) { return fieldBorderColor; }
		if (HX_FIELD_EQ(inName,"backgroundSprite") ) { return backgroundSprite; }
		if (HX_FIELD_EQ(inName,"get_passwordMode") ) { return get_passwordMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_passwordMode") ) { return set_passwordMode_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fieldBorderSprite") ) { return fieldBorderSprite; }
		if (HX_FIELD_EQ(inName,"getCharBoundaries") ) { return getCharBoundaries_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"customFilterPattern") ) { return customFilterPattern; }
		if (HX_FIELD_EQ(inName,"_scrollBoundIndeces") ) { return _scrollBoundIndeces; }
		if (HX_FIELD_EQ(inName,"getCharIndexAtPoint") ) { return getCharIndexAtPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return set_backgroundColor_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fieldBorderThickness") ) { return fieldBorderThickness; }
		if (HX_FIELD_EQ(inName,"set_fieldBorderColor") ) { return set_fieldBorderColor_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"prepareCharBoundaries") ) { return prepareCharBoundaries_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getCaretIndexFromPoint") ) { return getCaretIndexFromPoint_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"set_customFilterPattern") ) { return set_customFilterPattern_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"set_fieldBorderThickness") ) { return set_fieldBorderThickness_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxInputText_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"lines") ) { if (inCallProp) return set_lines(inValue);lines=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caret") ) { caret=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { if (inCallProp) return set_params(inValue);params=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasFocus") ) { if (inCallProp) return set_hasFocus(inValue);hasFocus=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"forceCase") ) { if (inCallProp) return set_forceCase(inValue);forceCase=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxLength") ) { if (inCallProp) return set_maxLength(inValue);maxLength=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretColor") ) { if (inCallProp) return set_caretColor(inValue);caretColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretWidth") ) { if (inCallProp) return set_caretWidth(inValue);caretWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { if (inCallProp) return set_caretIndex(inValue);caretIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filterMode") ) { if (inCallProp) return set_filterMode(inValue);filterMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastScroll") ) { lastScroll=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_caretTimer") ) { _caretTimer=inValue.Cast< ::flixel::util::FlxTimer >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"passwordMode") ) { return set_passwordMode(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp) return set_backgroundColor(inValue);backgroundColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_charBoundaries") ) { _charBoundaries=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fieldBorderColor") ) { if (inCallProp) return set_fieldBorderColor(inValue);fieldBorderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundSprite") ) { backgroundSprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fieldBorderSprite") ) { fieldBorderSprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"customFilterPattern") ) { if (inCallProp) return set_customFilterPattern(inValue);customFilterPattern=inValue.Cast< ::EReg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollBoundIndeces") ) { _scrollBoundIndeces=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fieldBorderThickness") ) { if (inCallProp) return set_fieldBorderThickness(inValue);fieldBorderThickness=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxInputText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("customFilterPattern"));
	outFields->push(HX_CSTRING("background"));
	outFields->push(HX_CSTRING("caretColor"));
	outFields->push(HX_CSTRING("caretWidth"));
	outFields->push(HX_CSTRING("params"));
	outFields->push(HX_CSTRING("passwordMode"));
	outFields->push(HX_CSTRING("hasFocus"));
	outFields->push(HX_CSTRING("caretIndex"));
	outFields->push(HX_CSTRING("forceCase"));
	outFields->push(HX_CSTRING("maxLength"));
	outFields->push(HX_CSTRING("lines"));
	outFields->push(HX_CSTRING("filterMode"));
	outFields->push(HX_CSTRING("fieldBorderColor"));
	outFields->push(HX_CSTRING("fieldBorderThickness"));
	outFields->push(HX_CSTRING("backgroundColor"));
	outFields->push(HX_CSTRING("backgroundSprite"));
	outFields->push(HX_CSTRING("_caretTimer"));
	outFields->push(HX_CSTRING("caret"));
	outFields->push(HX_CSTRING("fieldBorderSprite"));
	outFields->push(HX_CSTRING("_scrollBoundIndeces"));
	outFields->push(HX_CSTRING("_charBoundaries"));
	outFields->push(HX_CSTRING("lastScroll"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NO_FILTER"),
	HX_CSTRING("ONLY_ALPHA"),
	HX_CSTRING("ONLY_NUMERIC"),
	HX_CSTRING("ONLY_ALPHANUMERIC"),
	HX_CSTRING("CUSTOM_FILTER"),
	HX_CSTRING("ALL_CASES"),
	HX_CSTRING("UPPER_CASE"),
	HX_CSTRING("LOWER_CASE"),
	HX_CSTRING("BACKSPACE_ACTION"),
	HX_CSTRING("DELETE_ACTION"),
	HX_CSTRING("ENTER_ACTION"),
	HX_CSTRING("INPUT_ACTION"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::EReg*/ ,(int)offsetof(FlxInputText_obj,customFilterPattern),HX_CSTRING("customFilterPattern")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxInputText_obj,callback),HX_CSTRING("callback")},
	{hx::fsBool,(int)offsetof(FlxInputText_obj,background),HX_CSTRING("background")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,caretColor),HX_CSTRING("caretColor")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,caretWidth),HX_CSTRING("caretWidth")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxInputText_obj,params),HX_CSTRING("params")},
	{hx::fsBool,(int)offsetof(FlxInputText_obj,hasFocus),HX_CSTRING("hasFocus")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,caretIndex),HX_CSTRING("caretIndex")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,forceCase),HX_CSTRING("forceCase")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,maxLength),HX_CSTRING("maxLength")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,lines),HX_CSTRING("lines")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,filterMode),HX_CSTRING("filterMode")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,fieldBorderColor),HX_CSTRING("fieldBorderColor")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,fieldBorderThickness),HX_CSTRING("fieldBorderThickness")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,backgroundColor),HX_CSTRING("backgroundColor")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxInputText_obj,backgroundSprite),HX_CSTRING("backgroundSprite")},
	{hx::fsObject /*::flixel::util::FlxTimer*/ ,(int)offsetof(FlxInputText_obj,_caretTimer),HX_CSTRING("_caretTimer")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxInputText_obj,caret),HX_CSTRING("caret")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxInputText_obj,fieldBorderSprite),HX_CSTRING("fieldBorderSprite")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxInputText_obj,_scrollBoundIndeces),HX_CSTRING("_scrollBoundIndeces")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxInputText_obj,_charBoundaries),HX_CSTRING("_charBoundaries")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,lastScroll),HX_CSTRING("lastScroll")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("customFilterPattern"),
	HX_CSTRING("set_customFilterPattern"),
	HX_CSTRING("callback"),
	HX_CSTRING("background"),
	HX_CSTRING("caretColor"),
	HX_CSTRING("set_caretColor"),
	HX_CSTRING("caretWidth"),
	HX_CSTRING("set_caretWidth"),
	HX_CSTRING("params"),
	HX_CSTRING("hasFocus"),
	HX_CSTRING("caretIndex"),
	HX_CSTRING("forceCase"),
	HX_CSTRING("maxLength"),
	HX_CSTRING("lines"),
	HX_CSTRING("filterMode"),
	HX_CSTRING("fieldBorderColor"),
	HX_CSTRING("fieldBorderThickness"),
	HX_CSTRING("backgroundColor"),
	HX_CSTRING("backgroundSprite"),
	HX_CSTRING("_caretTimer"),
	HX_CSTRING("caret"),
	HX_CSTRING("fieldBorderSprite"),
	HX_CSTRING("_scrollBoundIndeces"),
	HX_CSTRING("_charBoundaries"),
	HX_CSTRING("lastScroll"),
	HX_CSTRING("destroy"),
	HX_CSTRING("draw"),
	HX_CSTRING("drawSprite"),
	HX_CSTRING("update"),
	HX_CSTRING("onKeyDown"),
	HX_CSTRING("onChange"),
	HX_CSTRING("insertSubstring"),
	HX_CSTRING("getCaretIndexFromPoint"),
	HX_CSTRING("getCharBoundaries"),
	HX_CSTRING("set_text"),
	HX_CSTRING("getCharIndexAtPoint"),
	HX_CSTRING("prepareCharBoundaries"),
	HX_CSTRING("onSetTextCheck"),
	HX_CSTRING("calcFrame"),
	HX_CSTRING("toggleCaret"),
	HX_CSTRING("filter"),
	HX_CSTRING("set_params"),
	HX_CSTRING("set_x"),
	HX_CSTRING("set_y"),
	HX_CSTRING("set_hasFocus"),
	HX_CSTRING("getAlignStr"),
	HX_CSTRING("set_caretIndex"),
	HX_CSTRING("set_forceCase"),
	HX_CSTRING("set_size"),
	HX_CSTRING("set_maxLength"),
	HX_CSTRING("set_lines"),
	HX_CSTRING("get_passwordMode"),
	HX_CSTRING("set_passwordMode"),
	HX_CSTRING("set_filterMode"),
	HX_CSTRING("set_fieldBorderColor"),
	HX_CSTRING("set_fieldBorderThickness"),
	HX_CSTRING("set_backgroundColor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxInputText_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::NO_FILTER,"NO_FILTER");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ONLY_ALPHA,"ONLY_ALPHA");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ONLY_NUMERIC,"ONLY_NUMERIC");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ONLY_ALPHANUMERIC,"ONLY_ALPHANUMERIC");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::CUSTOM_FILTER,"CUSTOM_FILTER");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ALL_CASES,"ALL_CASES");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::UPPER_CASE,"UPPER_CASE");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::LOWER_CASE,"LOWER_CASE");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::BACKSPACE_ACTION,"BACKSPACE_ACTION");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::DELETE_ACTION,"DELETE_ACTION");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ENTER_ACTION,"ENTER_ACTION");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::INPUT_ACTION,"INPUT_ACTION");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::NO_FILTER,"NO_FILTER");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ONLY_ALPHA,"ONLY_ALPHA");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ONLY_NUMERIC,"ONLY_NUMERIC");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ONLY_ALPHANUMERIC,"ONLY_ALPHANUMERIC");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::CUSTOM_FILTER,"CUSTOM_FILTER");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ALL_CASES,"ALL_CASES");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::UPPER_CASE,"UPPER_CASE");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::LOWER_CASE,"LOWER_CASE");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::BACKSPACE_ACTION,"BACKSPACE_ACTION");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::DELETE_ACTION,"DELETE_ACTION");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ENTER_ACTION,"ENTER_ACTION");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::INPUT_ACTION,"INPUT_ACTION");
};

#endif

Class FlxInputText_obj::__mClass;

void FlxInputText_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxInputText"), hx::TCanCast< FlxInputText_obj> ,sStaticFields,sMemberFields,
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

void FlxInputText_obj::__boot()
{
	NO_FILTER= (int)0;
	ONLY_ALPHA= (int)1;
	ONLY_NUMERIC= (int)2;
	ONLY_ALPHANUMERIC= (int)3;
	CUSTOM_FILTER= (int)4;
	ALL_CASES= (int)0;
	UPPER_CASE= (int)1;
	LOWER_CASE= (int)2;
	BACKSPACE_ACTION= HX_CSTRING("backspace");
	DELETE_ACTION= HX_CSTRING("delete");
	ENTER_ACTION= HX_CSTRING("enter");
	INPUT_ACTION= HX_CSTRING("input");
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
