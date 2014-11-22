#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUI
#include <flixel/addons/ui/FlxUI.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#include <flixel/addons/ui/FlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUICheckBox
#include <flixel/addons/ui/FlxUICheckBox.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ILabeled
#include <flixel/addons/ui/interfaces/ILabeled.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonEvent
#include <flixel/ui/_FlxButton/FlxButtonEvent.h>
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
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUICheckBox_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic Box,Dynamic Check,::String Label,Dynamic __o_LabelW,Dynamic Params,Dynamic Callback)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","new",0x24a5788a,"flixel.addons.ui.FlxUICheckBox.new","flixel/addons/ui/FlxUICheckBox.hx",17,0xab9d9a07)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(Box,"Box")
HX_STACK_ARG(Check,"Check")
HX_STACK_ARG(Label,"Label")
HX_STACK_ARG(__o_LabelW,"LabelW")
HX_STACK_ARG(Params,"Params")
HX_STACK_ARG(Callback,"Callback")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Dynamic LabelW = __o_LabelW.Default(100);
{
	HX_STACK_LINE(37)
	this->skipButtonUpdate = false;
	HX_STACK_LINE(35)
	this->box_space = (int)2;
	HX_STACK_LINE(33)
	this->textY = (int)0;
	HX_STACK_LINE(32)
	this->textX = (int)0;
	HX_STACK_LINE(30)
	this->checkbox_dirty = false;
	HX_STACK_LINE(28)
	this->textIsClickable = true;
	HX_STACK_LINE(24)
	this->checked = false;
	HX_STACK_LINE(22)
	this->max_width = (int)-1;
	HX_STACK_LINE(69)
	super::__construct(null(),null());
	HX_STACK_LINE(71)
	this->callback = Callback;
	HX_STACK_LINE(73)
	this->set_params(Params);
	HX_STACK_LINE(75)
	::flixel::FlxSprite _g = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(75)
	this->box = _g;
	HX_STACK_LINE(76)
	if (((Box == null()))){
		HX_STACK_LINE(78)
		Box = HX_CSTRING("flixel/flixel-ui/img/check_box.png");
	}
	HX_STACK_LINE(81)
	this->box->loadGraphic(Box,true,null(),null(),null(),null());
	HX_STACK_LINE(83)
	::flixel::addons::ui::FlxUIButton _g1 = ::flixel::addons::ui::FlxUIButton_obj::__new((int)0,(int)0,Label,this->_clickCheck_dyn());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(83)
	this->button = _g1;
	HX_STACK_LINE(86)
	this->button->label->__Field(HX_CSTRING("setFormat"),true)(null(),(int)8,(int)16777215,HX_CSTRING("left"),::flixel::text::FlxTextBorderStyle_obj::OUTLINE,null(),null());
	HX_STACK_LINE(87)
	this->button->up_color = (int)16777215;
	HX_STACK_LINE(88)
	this->button->down_color = (int)16777215;
	HX_STACK_LINE(89)
	this->button->over_color = (int)16777215;
	HX_STACK_LINE(90)
	this->button->up_toggle_color = (int)16777215;
	HX_STACK_LINE(91)
	this->button->down_toggle_color = (int)16777215;
	HX_STACK_LINE(92)
	this->button->over_toggle_color = (int)16777215;
	HX_STACK_LINE(94)
	Float _g2 = this->box->get_width();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(94)
	Float _g3 = (_g2 + this->box_space);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(94)
	Float _g4 = (_g3 + LabelW);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(94)
	int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(94)
	Float _g6 = this->box->get_height();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(94)
	int _g7 = ::Std_obj::_int(_g6);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(94)
	this->button->loadGraphicSlice9(Array_obj< ::String >::__new().Add(HX_CSTRING("")).Add(HX_CSTRING("")).Add(HX_CSTRING("")),_g5,_g7,null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(96)
	Float _g8 = this->box->get_width();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(96)
	Float _g9 = (_g8 + this->box_space);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(96)
	Float _g10 = (_g9 + LabelW);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(96)
	int _g11 = ::Std_obj::_int(_g10);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(96)
	this->max_width = _g11;
	HX_STACK_LINE(98)
	this->button->onUp->callback = this->_clickCheck_dyn();
	HX_STACK_LINE(100)
	::flixel::FlxSprite _g12 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(100)
	this->mark = _g12;
	HX_STACK_LINE(101)
	if (((Check == null()))){
		HX_STACK_LINE(103)
		Check = HX_CSTRING("flixel/flixel-ui/img/check_mark.png");
	}
	HX_STACK_LINE(106)
	this->mark->loadGraphic(Check,null(),null(),null(),null(),null());
	HX_STACK_LINE(108)
	this->add(this->box);
	HX_STACK_LINE(109)
	this->add(this->mark);
	HX_STACK_LINE(110)
	this->add(this->button);
	HX_STACK_LINE(112)
	this->anchorLabelX();
	HX_STACK_LINE(113)
	this->anchorLabelY();
	HX_STACK_LINE(115)
	this->set_checked(false);
	HX_STACK_LINE(118)
	this->button->setAllLabelOffsets((int)0,(int)0);
	HX_STACK_LINE(120)
	this->set_x(X);
	HX_STACK_LINE(121)
	this->set_y(Y);
	HX_STACK_LINE(123)
	this->set_textX((int)0);
	HX_STACK_LINE(124)
	this->set_textY((int)0);
}
;
	return null();
}

//FlxUICheckBox_obj::~FlxUICheckBox_obj() { }

Dynamic FlxUICheckBox_obj::__CreateEmpty() { return  new FlxUICheckBox_obj; }
hx::ObjectPtr< FlxUICheckBox_obj > FlxUICheckBox_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic Box,Dynamic Check,::String Label,Dynamic __o_LabelW,Dynamic Params,Dynamic Callback)
{  hx::ObjectPtr< FlxUICheckBox_obj > result = new FlxUICheckBox_obj();
	result->__construct(__o_X,__o_Y,Box,Check,Label,__o_LabelW,Params,Callback);
	return result;}

Dynamic FlxUICheckBox_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUICheckBox_obj > result = new FlxUICheckBox_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}

hx::Object *FlxUICheckBox_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIClickable_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::ILabeled_obj)) return operator ::flixel::addons::ui::interfaces::ILabeled_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IHasParams_obj)) return operator ::flixel::addons::ui::interfaces::IHasParams_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::ICursorPointable_obj)) return operator ::flixel::addons::ui::interfaces::ICursorPointable_obj *();
	return super::__ToInterface(inType);
}

bool FlxUICheckBox_obj::set_skipButtonUpdate( bool b){
	HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","set_skipButtonUpdate",0x88caa7cd,"flixel.addons.ui.FlxUICheckBox.set_skipButtonUpdate","flixel/addons/ui/FlxUICheckBox.hx",43,0xab9d9a07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(44)
	this->skipButtonUpdate = b;
	HX_STACK_LINE(45)
	this->button->set_skipButtonUpdate(this->skipButtonUpdate);
	HX_STACK_LINE(46)
	return this->skipButtonUpdate;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,set_skipButtonUpdate,return )

Dynamic FlxUICheckBox_obj::set_params( Dynamic p){
	HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","set_params",0xd67a1a99,"flixel.addons.ui.FlxUICheckBox.set_params","flixel/addons/ui/FlxUICheckBox.hx",48,0xab9d9a07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(49)
	this->params = p;
	HX_STACK_LINE(50)
	if (((this->params == null()))){
		HX_STACK_LINE(52)
		this->params = Dynamic( Array_obj<Dynamic>::__new());
	}
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUICheckBox.hx",54,0xab9d9a07)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("name") , HX_CSTRING("checked"),false);
				__result->Add(HX_CSTRING("value") , false,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(54)
	Dynamic nb = _Function_1_1::Block();		HX_STACK_VAR(nb,"nb");
	HX_STACK_LINE(55)
	this->params->__Field(HX_CSTRING("push"),true)(nb);
	HX_STACK_LINE(56)
	return this->params;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,set_params,return )

int FlxUICheckBox_obj::set_color( int _tmp_Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","set_color",0x10dbdd70,"flixel.addons.ui.FlxUICheckBox.set_color","flixel/addons/ui/FlxUICheckBox.hx",59,0xab9d9a07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_tmp_Value,"_tmp_Value")
	HX_STACK_LINE(60)
	int Value = _tmp_Value;		HX_STACK_VAR(Value,"Value");
	HX_STACK_LINE(60)
	if (((this->button != null()))){
		HX_STACK_LINE(62)
		this->button->label->__Field(HX_CSTRING("set_color"),true)(Value);
	}
	HX_STACK_LINE(64)
	return this->super::set_color(Value);
}


::flixel::addons::ui::FlxUIText FlxUICheckBox_obj::setLabel( ::flixel::addons::ui::FlxUIText t){
	HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","setLabel",0xd38df688,"flixel.addons.ui.FlxUICheckBox.setLabel","flixel/addons/ui/FlxUICheckBox.hx",138,0xab9d9a07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(138)
	if (((this->button == null()))){
		HX_STACK_LINE(138)
		return null();
	}
	HX_STACK_LINE(138)
	this->button->set_label(t);
	HX_STACK_LINE(138)
	return this->button->label;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,setLabel,return )

::flixel::addons::ui::FlxUIText FlxUICheckBox_obj::getLabel( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","getLabel",0x25309d14,"flixel.addons.ui.FlxUICheckBox.getLabel","flixel/addons/ui/FlxUICheckBox.hx",139,0xab9d9a07)
	HX_STACK_THIS(this)
	HX_STACK_LINE(139)
	if (((this->button == null()))){
		HX_STACK_LINE(139)
		return null();
	}
	HX_STACK_LINE(139)
	return this->button->label;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUICheckBox_obj,getLabel,return )

bool FlxUICheckBox_obj::set_visible( bool Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","set_visible",0x9960c1bf,"flixel.addons.ui.FlxUICheckBox.set_visible","flixel/addons/ui/FlxUICheckBox.hx",142,0xab9d9a07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(144)
	this->visible = Value;
	HX_STACK_LINE(145)
	return this->visible;
}


Void FlxUICheckBox_obj::anchorTime( ::flixel::util::FlxTimer f){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","anchorTime",0xb5482238,"flixel.addons.ui.FlxUICheckBox.anchorTime","flixel/addons/ui/FlxUICheckBox.hx",149,0xab9d9a07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(149)
		this->anchorLabelY();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,anchorTime,(void))

Float FlxUICheckBox_obj::set_textX( Float n){
	HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","set_textX",0xd418b718,"flixel.addons.ui.FlxUICheckBox.set_textX","flixel/addons/ui/FlxUICheckBox.hx",152,0xab9d9a07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(153)
	this->textX = n;
	HX_STACK_LINE(154)
	this->anchorLabelX();
	HX_STACK_LINE(155)
	return this->textX;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,set_textX,return )

Float FlxUICheckBox_obj::set_textY( Float n){
	HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","set_textY",0xd418b719,"flixel.addons.ui.FlxUICheckBox.set_textY","flixel/addons/ui/FlxUICheckBox.hx",158,0xab9d9a07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(159)
	this->textY = n;
	HX_STACK_LINE(160)
	this->anchorLabelY();
	HX_STACK_LINE(161)
	return this->textY;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,set_textY,return )

Void FlxUICheckBox_obj::anchorLabelX( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","anchorLabelX",0xdbea9ecf,"flixel.addons.ui.FlxUICheckBox.anchorLabelX","flixel/addons/ui/FlxUICheckBox.hx",165,0xab9d9a07)
		HX_STACK_THIS(this)
		HX_STACK_LINE(165)
		if (((this->button != null()))){
			HX_STACK_LINE(166)
			Float _g = this->box->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(166)
			Float _g1 = (_g + this->box_space);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(166)
			Float _g2 = -(((_g1 + this->textX)));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(166)
			this->button->label->__Field(HX_CSTRING("offset"),true)->__Field(HX_CSTRING("set_x"),true)(_g2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUICheckBox_obj,anchorLabelX,(void))

Void FlxUICheckBox_obj::anchorLabelY( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","anchorLabelY",0xdbea9ed0,"flixel.addons.ui.FlxUICheckBox.anchorLabelY","flixel/addons/ui/FlxUICheckBox.hx",171,0xab9d9a07)
		HX_STACK_THIS(this)
		HX_STACK_LINE(171)
		if (((this->button != null()))){
			HX_STACK_LINE(172)
			Float _g = this->box->get_height();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(172)
			Float _g1 = this->button->get_height();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(172)
			Float _g2 = (_g - _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(172)
			Float _g3 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(172)
			Float _g4 = (this->box->y + _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(172)
			Float _g5 = (_g4 + this->textY);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(172)
			this->button->set_y(_g5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUICheckBox_obj,anchorLabelY,(void))

Void FlxUICheckBox_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","destroy",0xc5a03224,"flixel.addons.ui.FlxUICheckBox.destroy","flixel/addons/ui/FlxUICheckBox.hx",177,0xab9d9a07)
		HX_STACK_THIS(this)
		HX_STACK_LINE(178)
		this->super::destroy();
		HX_STACK_LINE(179)
		if (((this->mark != null()))){
			HX_STACK_LINE(180)
			this->mark->destroy();
			HX_STACK_LINE(181)
			this->mark = null();
		}
		HX_STACK_LINE(183)
		if (((this->box != null()))){
			HX_STACK_LINE(184)
			this->box->destroy();
			HX_STACK_LINE(185)
			this->box = null();
		}
		HX_STACK_LINE(187)
		if (((this->button != null()))){
			HX_STACK_LINE(188)
			this->button->destroy();
			HX_STACK_LINE(189)
			this->button = null();
		}
	}
return null();
}


::String FlxUICheckBox_obj::get_text( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","get_text",0x225f07cc,"flixel.addons.ui.FlxUICheckBox.get_text","flixel/addons/ui/FlxUICheckBox.hx",194,0xab9d9a07)
	HX_STACK_THIS(this)
	HX_STACK_LINE(194)
	return this->button->label->__Field(HX_CSTRING("textField"),true)->__Field(HX_CSTRING("get_text"),true)();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUICheckBox_obj,get_text,return )

::String FlxUICheckBox_obj::set_text( ::String value){
	HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","set_text",0xd0bc6140,"flixel.addons.ui.FlxUICheckBox.set_text","flixel/addons/ui/FlxUICheckBox.hx",196,0xab9d9a07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(197)
	this->button->label->__Field(HX_CSTRING("set_text"),true)(value);
	HX_STACK_LINE(198)
	this->checkbox_dirty = true;
	HX_STACK_LINE(199)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,set_text,return )

Void FlxUICheckBox_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","update",0x52efd41f,"flixel.addons.ui.FlxUICheckBox.update","flixel/addons/ui/FlxUICheckBox.hx",202,0xab9d9a07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(203)
		this->super::update(elapsed);
		HX_STACK_LINE(205)
		if ((this->checkbox_dirty)){
			HX_STACK_LINE(206)
			if (((this->button->label != null()))){
				HX_STACK_LINE(207)
				if ((::Std_obj::is(this->button->label,hx::ClassOf< ::flixel::addons::ui::FlxUIText >()))){
					HX_STACK_LINE(208)
					::flixel::addons::ui::FlxUIText ftu = this->button->label;		HX_STACK_VAR(ftu,"ftu");
					HX_STACK_LINE(209)
					ftu->drawFrame(null());
				}
				HX_STACK_LINE(211)
				this->anchorLabelX();
				HX_STACK_LINE(212)
				this->anchorLabelY();
				HX_STACK_LINE(213)
				Float _g = this->button->label->__Field(HX_CSTRING("textField"),true)->__Field(HX_CSTRING("get_textWidth"),true)();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(213)
				Float _g1 = ((this->box->frameWidth + this->box_space) + _g);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(213)
				this->button->set_width(_g1);
				HX_STACK_LINE(214)
				this->checkbox_dirty = false;
			}
		}
	}
return null();
}


bool FlxUICheckBox_obj::set_checked( bool b){
	HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","set_checked",0x0960fc74,"flixel.addons.ui.FlxUICheckBox.set_checked","flixel/addons/ui/FlxUICheckBox.hx",221,0xab9d9a07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(222)
	this->mark->set_visible(b);
	HX_STACK_LINE(223)
	return this->checked = b;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,set_checked,return )

Void FlxUICheckBox_obj::_clickCheck( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","_clickCheck",0xbe94b6a9,"flixel.addons.ui.FlxUICheckBox._clickCheck","flixel/addons/ui/FlxUICheckBox.hx",229,0xab9d9a07)
		HX_STACK_THIS(this)
		HX_STACK_LINE(230)
		this->set_checked(!(this->checked));
		HX_STACK_LINE(231)
		if (((this->callback_dyn() != null()))){
			HX_STACK_LINE(232)
			this->callback();
		}
		HX_STACK_LINE(234)
		if ((this->broadcastToFlxUI)){
			HX_STACK_LINE(235)
			::flixel::addons::ui::FlxUI_obj::event(HX_CSTRING("click_check_box"),hx::ObjectPtr<OBJ_>(this),this->checked,this->params);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUICheckBox_obj,_clickCheck,(void))

::String FlxUICheckBox_obj::CLICK_EVENT;


FlxUICheckBox_obj::FlxUICheckBox_obj()
{
}

void FlxUICheckBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUICheckBox);
	HX_MARK_MEMBER_NAME(box,"box");
	HX_MARK_MEMBER_NAME(mark,"mark");
	HX_MARK_MEMBER_NAME(button,"button");
	HX_MARK_MEMBER_NAME(max_width,"max_width");
	HX_MARK_MEMBER_NAME(checked,"checked");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(textIsClickable,"textIsClickable");
	HX_MARK_MEMBER_NAME(checkbox_dirty,"checkbox_dirty");
	HX_MARK_MEMBER_NAME(textX,"textX");
	HX_MARK_MEMBER_NAME(textY,"textY");
	HX_MARK_MEMBER_NAME(box_space,"box_space");
	HX_MARK_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_MARK_MEMBER_NAME(callback,"callback");
	::flixel::addons::ui::FlxUIGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUICheckBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(box,"box");
	HX_VISIT_MEMBER_NAME(mark,"mark");
	HX_VISIT_MEMBER_NAME(button,"button");
	HX_VISIT_MEMBER_NAME(max_width,"max_width");
	HX_VISIT_MEMBER_NAME(checked,"checked");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(textIsClickable,"textIsClickable");
	HX_VISIT_MEMBER_NAME(checkbox_dirty,"checkbox_dirty");
	HX_VISIT_MEMBER_NAME(textX,"textX");
	HX_VISIT_MEMBER_NAME(textY,"textY");
	HX_VISIT_MEMBER_NAME(box_space,"box_space");
	HX_VISIT_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	::flixel::addons::ui::FlxUIGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUICheckBox_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { return box; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mark") ) { return mark; }
		if (HX_FIELD_EQ(inName,"text") ) { return get_text(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"textX") ) { return textX; }
		if (HX_FIELD_EQ(inName,"textY") ) { return textY; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return button; }
		if (HX_FIELD_EQ(inName,"params") ) { return params; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"checked") ) { return checked; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return callback; }
		if (HX_FIELD_EQ(inName,"setLabel") ) { return setLabel_dyn(); }
		if (HX_FIELD_EQ(inName,"getLabel") ) { return getLabel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"max_width") ) { return max_width; }
		if (HX_FIELD_EQ(inName,"box_space") ) { return box_space; }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textX") ) { return set_textX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textY") ) { return set_textY_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_params") ) { return set_params_dyn(); }
		if (HX_FIELD_EQ(inName,"anchorTime") ) { return anchorTime_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_checked") ) { return set_checked_dyn(); }
		if (HX_FIELD_EQ(inName,"_clickCheck") ) { return _clickCheck_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"anchorLabelX") ) { return anchorLabelX_dyn(); }
		if (HX_FIELD_EQ(inName,"anchorLabelY") ) { return anchorLabelY_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"checkbox_dirty") ) { return checkbox_dirty; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"textIsClickable") ) { return textIsClickable; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { return skipButtonUpdate; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_skipButtonUpdate") ) { return set_skipButtonUpdate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUICheckBox_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { box=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mark") ) { mark=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { return set_text(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"textX") ) { if (inCallProp) return set_textX(inValue);textX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textY") ) { if (inCallProp) return set_textY(inValue);textY=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< ::flixel::addons::ui::FlxUIButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"params") ) { if (inCallProp) return set_params(inValue);params=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"checked") ) { if (inCallProp) return set_checked(inValue);checked=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"max_width") ) { max_width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"box_space") ) { box_space=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"checkbox_dirty") ) { checkbox_dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"textIsClickable") ) { textIsClickable=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { if (inCallProp) return set_skipButtonUpdate(inValue);skipButtonUpdate=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUICheckBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("box"));
	outFields->push(HX_CSTRING("mark"));
	outFields->push(HX_CSTRING("button"));
	outFields->push(HX_CSTRING("max_width"));
	outFields->push(HX_CSTRING("checked"));
	outFields->push(HX_CSTRING("params"));
	outFields->push(HX_CSTRING("textIsClickable"));
	outFields->push(HX_CSTRING("checkbox_dirty"));
	outFields->push(HX_CSTRING("textX"));
	outFields->push(HX_CSTRING("textY"));
	outFields->push(HX_CSTRING("box_space"));
	outFields->push(HX_CSTRING("skipButtonUpdate"));
	outFields->push(HX_CSTRING("text"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CLICK_EVENT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxUICheckBox_obj,box),HX_CSTRING("box")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxUICheckBox_obj,mark),HX_CSTRING("mark")},
	{hx::fsObject /*::flixel::addons::ui::FlxUIButton*/ ,(int)offsetof(FlxUICheckBox_obj,button),HX_CSTRING("button")},
	{hx::fsFloat,(int)offsetof(FlxUICheckBox_obj,max_width),HX_CSTRING("max_width")},
	{hx::fsBool,(int)offsetof(FlxUICheckBox_obj,checked),HX_CSTRING("checked")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUICheckBox_obj,params),HX_CSTRING("params")},
	{hx::fsBool,(int)offsetof(FlxUICheckBox_obj,textIsClickable),HX_CSTRING("textIsClickable")},
	{hx::fsBool,(int)offsetof(FlxUICheckBox_obj,checkbox_dirty),HX_CSTRING("checkbox_dirty")},
	{hx::fsFloat,(int)offsetof(FlxUICheckBox_obj,textX),HX_CSTRING("textX")},
	{hx::fsFloat,(int)offsetof(FlxUICheckBox_obj,textY),HX_CSTRING("textY")},
	{hx::fsFloat,(int)offsetof(FlxUICheckBox_obj,box_space),HX_CSTRING("box_space")},
	{hx::fsBool,(int)offsetof(FlxUICheckBox_obj,skipButtonUpdate),HX_CSTRING("skipButtonUpdate")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUICheckBox_obj,callback),HX_CSTRING("callback")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("box"),
	HX_CSTRING("mark"),
	HX_CSTRING("button"),
	HX_CSTRING("max_width"),
	HX_CSTRING("checked"),
	HX_CSTRING("params"),
	HX_CSTRING("textIsClickable"),
	HX_CSTRING("checkbox_dirty"),
	HX_CSTRING("textX"),
	HX_CSTRING("textY"),
	HX_CSTRING("box_space"),
	HX_CSTRING("skipButtonUpdate"),
	HX_CSTRING("callback"),
	HX_CSTRING("set_skipButtonUpdate"),
	HX_CSTRING("set_params"),
	HX_CSTRING("set_color"),
	HX_CSTRING("setLabel"),
	HX_CSTRING("getLabel"),
	HX_CSTRING("set_visible"),
	HX_CSTRING("anchorTime"),
	HX_CSTRING("set_textX"),
	HX_CSTRING("set_textY"),
	HX_CSTRING("anchorLabelX"),
	HX_CSTRING("anchorLabelY"),
	HX_CSTRING("destroy"),
	HX_CSTRING("get_text"),
	HX_CSTRING("set_text"),
	HX_CSTRING("update"),
	HX_CSTRING("set_checked"),
	HX_CSTRING("_clickCheck"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUICheckBox_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxUICheckBox_obj::CLICK_EVENT,"CLICK_EVENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUICheckBox_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxUICheckBox_obj::CLICK_EVENT,"CLICK_EVENT");
};

#endif

Class FlxUICheckBox_obj::__mClass;

void FlxUICheckBox_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxUICheckBox"), hx::TCanCast< FlxUICheckBox_obj> ,sStaticFields,sMemberFields,
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

void FlxUICheckBox_obj::__boot()
{
	CLICK_EVENT= HX_CSTRING("click_check_box");
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
