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
#ifndef INCLUDED_flixel_addons_ui_BorderDef
#include <flixel/addons/ui/BorderDef.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_ButtonLabelStyle
#include <flixel/addons/ui/ButtonLabelStyle.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_CheckStyle
#include <flixel/addons/ui/CheckStyle.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxUIList
#include <flixel/addons/ui/FlxUIList.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIRadioGroup
#include <flixel/addons/ui/FlxUIRadioGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FontDef
#include <flixel/addons/ui/FontDef.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_U
#include <flixel/addons/ui/U.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormat
#include <openfl/_v2/text/TextFormat.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUIRadioGroup_obj::__construct(Float X,Float Y,Array< ::String > ids_,Array< ::String > labels_,Dynamic callback_,hx::Null< Float >  __o_y_space_,hx::Null< int >  __o_width_,hx::Null< int >  __o_height_,hx::Null< int >  __o_label_width_,::String __o_MoreString,::flixel::math::FlxPoint PrevButtonOffset,::flixel::math::FlxPoint NextButtonOffset,::flixel::addons::ui::interfaces::IFlxUIButton PrevButton,::flixel::addons::ui::interfaces::IFlxUIButton NextButton)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","new",0xb1b15e6b,"flixel.addons.ui.FlxUIRadioGroup.new","flixel/addons/ui/FlxUIRadioGroup.hx",14,0x807a4586)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(ids_,"ids_")
HX_STACK_ARG(labels_,"labels_")
HX_STACK_ARG(callback_,"callback_")
HX_STACK_ARG(__o_y_space_,"y_space_")
HX_STACK_ARG(__o_width_,"width_")
HX_STACK_ARG(__o_height_,"height_")
HX_STACK_ARG(__o_label_width_,"label_width_")
HX_STACK_ARG(__o_MoreString,"MoreString")
HX_STACK_ARG(PrevButtonOffset,"PrevButtonOffset")
HX_STACK_ARG(NextButtonOffset,"NextButtonOffset")
HX_STACK_ARG(PrevButton,"PrevButton")
HX_STACK_ARG(NextButton,"NextButton")
Float y_space_ = __o_y_space_.Default(25);
int width_ = __o_width_.Default(100);
int height_ = __o_height_.Default(20);
int label_width_ = __o_label_width_.Default(100);
::String MoreString = __o_MoreString.Default(HX_CSTRING("<X> more..."));
{
	HX_STACK_LINE(325)
	this->_clickable = true;
	HX_STACK_LINE(323)
	this->_selected = (int)0;
	HX_STACK_LINE(322)
	this->_y_space = (int)25;
	HX_STACK_LINE(320)
	this->_height = (int)20;
	HX_STACK_LINE(319)
	this->_width = (int)100;
	HX_STACK_LINE(318)
	this->_label_width = (int)100;
	HX_STACK_LINE(64)
	this->fixedSize = false;
	HX_STACK_LINE(105)
	super::__construct(null(),null());
	HX_STACK_LINE(106)
	this->_y_space = y_space_;
	HX_STACK_LINE(107)
	this->_width = width_;
	HX_STACK_LINE(108)
	this->_height = height_;
	HX_STACK_LINE(109)
	this->_label_width = label_width_;
	HX_STACK_LINE(110)
	this->callback = callback_;
	HX_STACK_LINE(111)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(111)
	this->_list_radios = _g;
	HX_STACK_LINE(112)
	this->_list_active = Array_obj< bool >::__new();
	HX_STACK_LINE(113)
	::flixel::addons::ui::FlxUIList _g1 = ::flixel::addons::ui::FlxUIList_obj::__new((int)0,(int)0,null(),(int)0,(int)0,MoreString,(int)1,(int)0,PrevButtonOffset,NextButtonOffset,PrevButton,NextButton);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(113)
	this->_list = _g1;
	HX_STACK_LINE(114)
	this->add(this->_list);
	HX_STACK_LINE(115)
	this->updateRadios(ids_,labels_);
	HX_STACK_LINE(116)
	this->loadGraphics(null(),null());
	HX_STACK_LINE(117)
	this->set_x(X);
	HX_STACK_LINE(118)
	this->set_y(Y);
}
;
	return null();
}

//FlxUIRadioGroup_obj::~FlxUIRadioGroup_obj() { }

Dynamic FlxUIRadioGroup_obj::__CreateEmpty() { return  new FlxUIRadioGroup_obj; }
hx::ObjectPtr< FlxUIRadioGroup_obj > FlxUIRadioGroup_obj::__new(Float X,Float Y,Array< ::String > ids_,Array< ::String > labels_,Dynamic callback_,hx::Null< Float >  __o_y_space_,hx::Null< int >  __o_width_,hx::Null< int >  __o_height_,hx::Null< int >  __o_label_width_,::String __o_MoreString,::flixel::math::FlxPoint PrevButtonOffset,::flixel::math::FlxPoint NextButtonOffset,::flixel::addons::ui::interfaces::IFlxUIButton PrevButton,::flixel::addons::ui::interfaces::IFlxUIButton NextButton)
{  hx::ObjectPtr< FlxUIRadioGroup_obj > result = new FlxUIRadioGroup_obj();
	result->__construct(X,Y,ids_,labels_,callback_,__o_y_space_,__o_width_,__o_height_,__o_label_width_,__o_MoreString,PrevButtonOffset,NextButtonOffset,PrevButton,NextButton);
	return result;}

Dynamic FlxUIRadioGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUIRadioGroup_obj > result = new FlxUIRadioGroup_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12],inArgs[13]);
	return result;}

hx::Object *FlxUIRadioGroup_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIClickable_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IHasParams_obj)) return operator ::flixel::addons::ui::interfaces::IHasParams_obj *();
	return super::__ToInterface(inType);
}

::flixel::addons::ui::CheckStyle FlxUIRadioGroup_obj::set_activeStyle( ::flixel::addons::ui::CheckStyle b){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","set_activeStyle",0x2acfccb9,"flixel.addons.ui.FlxUIRadioGroup.set_activeStyle","flixel/addons/ui/FlxUIRadioGroup.hx",22,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(23)
	this->activeStyle = b;
	HX_STACK_LINE(24)
	this->updateActives();
	HX_STACK_LINE(25)
	return this->activeStyle;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,set_activeStyle,return )

::flixel::addons::ui::CheckStyle FlxUIRadioGroup_obj::set_inactiveStyle( ::flixel::addons::ui::CheckStyle b){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","set_inactiveStyle",0x59ff0874,"flixel.addons.ui.FlxUIRadioGroup.set_inactiveStyle","flixel/addons/ui/FlxUIRadioGroup.hx",29,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(30)
	this->inactiveStyle = b;
	HX_STACK_LINE(31)
	this->updateActives();
	HX_STACK_LINE(32)
	return this->inactiveStyle;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,set_inactiveStyle,return )

int FlxUIRadioGroup_obj::get_numRadios( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","get_numRadios",0xf40593a0,"flixel.addons.ui.FlxUIRadioGroup.get_numRadios","flixel/addons/ui/FlxUIRadioGroup.hx",37,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	return this->_list_radios->length;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIRadioGroup_obj,get_numRadios,return )

bool FlxUIRadioGroup_obj::set_skipButtonUpdate( bool b){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","set_skipButtonUpdate",0x2de214cc,"flixel.addons.ui.FlxUIRadioGroup.set_skipButtonUpdate","flixel/addons/ui/FlxUIRadioGroup.hx",43,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(44)
	this->skipButtonUpdate = b;
	HX_STACK_LINE(45)
	::flixel::addons::ui::FlxUICheckBox fcb;		HX_STACK_VAR(fcb,"fcb");
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(46)
		Array< ::Dynamic > _g1 = this->_list_radios;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(46)
		while((true)){
			HX_STACK_LINE(46)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(46)
				break;
			}
			HX_STACK_LINE(46)
			::flixel::addons::ui::FlxUICheckBox fcb1 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(fcb1,"fcb1");
			HX_STACK_LINE(46)
			++(_g);
			HX_STACK_LINE(47)
			fcb1->set_skipButtonUpdate(b);
		}
	}
	HX_STACK_LINE(49)
	return this->skipButtonUpdate;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,set_skipButtonUpdate,return )

Dynamic FlxUIRadioGroup_obj::set_params( Dynamic p){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","set_params",0x363b22d8,"flixel.addons.ui.FlxUIRadioGroup.set_params","flixel/addons/ui/FlxUIRadioGroup.hx",55,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(56)
	this->params = p;
	HX_STACK_LINE(57)
	return this->params;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,set_params,return )

Float FlxUIRadioGroup_obj::set_width( Float Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","set_width",0x37c526b4,"flixel.addons.ui.FlxUIRadioGroup.set_width","flixel/addons/ui/FlxUIRadioGroup.hx",66,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(67)
	this->super::set_width(Value);
	HX_STACK_LINE(68)
	if ((this->fixedSize)){
		HX_STACK_LINE(69)
		if (((this->_list != null()))){
			HX_STACK_LINE(70)
			this->_list->set_width(Value);
		}
	}
	HX_STACK_LINE(73)
	return Value;
}


Float FlxUIRadioGroup_obj::set_height( Float Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","set_height",0x4b0c2f79,"flixel.addons.ui.FlxUIRadioGroup.set_height","flixel/addons/ui/FlxUIRadioGroup.hx",76,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(77)
	this->super::set_height(Value);
	HX_STACK_LINE(78)
	if ((this->fixedSize)){
		HX_STACK_LINE(79)
		if (((this->_list != null()))){
			HX_STACK_LINE(80)
			this->_list->set_height(Value);
		}
	}
	HX_STACK_LINE(83)
	return Value;
}


Void FlxUIRadioGroup_obj::loadGraphics( Dynamic Box,Dynamic Dot){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","loadGraphics",0x1884bda6,"flixel.addons.ui.FlxUIRadioGroup.loadGraphics","flixel/addons/ui/FlxUIRadioGroup.hx",121,0x807a4586)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Box,"Box")
		HX_STACK_ARG(Dot,"Dot")
		HX_STACK_LINE(122)
		if (((Box != null()))){
			HX_STACK_LINE(123)
			this->_box_asset = Box;
		}
		else{
			HX_STACK_LINE(125)
			this->_box_asset = HX_CSTRING("flixel/flixel-ui/img/radio.png");
		}
		HX_STACK_LINE(127)
		if (((Dot != null()))){
			HX_STACK_LINE(128)
			this->_dot_asset = Dot;
		}
		else{
			HX_STACK_LINE(130)
			this->_dot_asset = HX_CSTRING("flixel/flixel-ui/img/radio_dot.png");
		}
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(133)
			Array< ::Dynamic > _g1 = this->_list_radios;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(133)
			while((true)){
				HX_STACK_LINE(133)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(133)
					break;
				}
				HX_STACK_LINE(133)
				::flixel::addons::ui::FlxUICheckBox c = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(133)
				++(_g);
				HX_STACK_LINE(134)
				c->box->loadGraphic(this->_box_asset,true,null(),null(),null(),null());
				HX_STACK_LINE(135)
				c->mark->loadGraphic(this->_dot_asset,null(),null(),null(),null(),null());
			}
		}
		HX_STACK_LINE(137)
		this->_refreshRadios();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRadioGroup_obj,loadGraphics,(void))

Void FlxUIRadioGroup_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","destroy",0x842b1c85,"flixel.addons.ui.FlxUIRadioGroup.destroy","flixel/addons/ui/FlxUIRadioGroup.hx",140,0x807a4586)
		HX_STACK_THIS(this)
		HX_STACK_LINE(141)
		if (((this->_list_radios != null()))){
			HX_STACK_LINE(143)
			::flixel::addons::ui::U_obj::clearArray(this->_list_radios);
		}
		HX_STACK_LINE(145)
		if (((this->_list_active != null()))){
			HX_STACK_LINE(147)
			::flixel::addons::ui::U_obj::clearArray(this->_list_active);
		}
		HX_STACK_LINE(149)
		this->_list_active = null();
		HX_STACK_LINE(150)
		this->_list_radios = null();
		HX_STACK_LINE(151)
		this->_list = null();
		HX_STACK_LINE(152)
		this->_ids = null();
		HX_STACK_LINE(153)
		this->_labels = null();
		HX_STACK_LINE(154)
		this->super::destroy();
	}
return null();
}


bool FlxUIRadioGroup_obj::updateLabel( int i,::String label_){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","updateLabel",0x24428836,"flixel.addons.ui.FlxUIRadioGroup.updateLabel","flixel/addons/ui/FlxUIRadioGroup.hx",157,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_ARG(label_,"label_")
	HX_STACK_LINE(158)
	if (((i >= this->_list_radios->length))){
		HX_STACK_LINE(158)
		return false;
	}
	HX_STACK_LINE(159)
	this->_labels[i] = label_;
	HX_STACK_LINE(160)
	::flixel::addons::ui::FlxUICheckBox c = this->_list_radios->__get(i).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(161)
	if (((c != null()))){
		HX_STACK_LINE(162)
		c->button->set_width(this->_label_width);
		HX_STACK_LINE(163)
		c->set_text(label_);
	}
	HX_STACK_LINE(165)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRadioGroup_obj,updateLabel,return )

bool FlxUIRadioGroup_obj::updateId( int i,::String id_){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","updateId",0xc8a6c459,"flixel.addons.ui.FlxUIRadioGroup.updateId","flixel/addons/ui/FlxUIRadioGroup.hx",168,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_ARG(id_,"id_")
	HX_STACK_LINE(169)
	if (((i >= this->_list_radios->length))){
		HX_STACK_LINE(169)
		return false;
	}
	HX_STACK_LINE(170)
	this->_ids[i] = id_;
	HX_STACK_LINE(171)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRadioGroup_obj,updateId,return )

Void FlxUIRadioGroup_obj::show( bool b){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","show",0xccd19092,"flixel.addons.ui.FlxUIRadioGroup.show","flixel/addons/ui/FlxUIRadioGroup.hx",175,0x807a4586)
		HX_STACK_THIS(this)
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(175)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(175)
		Array< ::Dynamic > _g1 = this->_list->group->members;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(175)
		while((true)){
			HX_STACK_LINE(175)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(175)
				break;
			}
			HX_STACK_LINE(175)
			::flixel::FlxSprite fo = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(fo,"fo");
			HX_STACK_LINE(175)
			++(_g);
			HX_STACK_LINE(176)
			fo->set_visible(b);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,show,(void))

Void FlxUIRadioGroup_obj::updateRadios( Array< ::String > ids_,Array< ::String > labels_){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","updateRadios",0xfd6e4a96,"flixel.addons.ui.FlxUIRadioGroup.updateRadios","flixel/addons/ui/FlxUIRadioGroup.hx",180,0x807a4586)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ids_,"ids_")
		HX_STACK_ARG(labels_,"labels_")
		HX_STACK_LINE(181)
		this->_ids = ids_;
		HX_STACK_LINE(182)
		this->_labels = labels_;
		HX_STACK_LINE(183)
		{
			HX_STACK_LINE(183)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(183)
			Array< ::Dynamic > _g1 = this->_list_radios;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(183)
			while((true)){
				HX_STACK_LINE(183)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(183)
					break;
				}
				HX_STACK_LINE(183)
				::flixel::addons::ui::FlxUICheckBox c = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(183)
				++(_g);
				HX_STACK_LINE(184)
				c->set_visible(false);
			}
		}
		HX_STACK_LINE(186)
		this->_refreshRadios();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRadioGroup_obj,updateRadios,(void))

Array< ::Dynamic > FlxUIRadioGroup_obj::getRadios( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","getRadios",0x73b57c99,"flixel.addons.ui.FlxUIRadioGroup.getRadios","flixel/addons/ui/FlxUIRadioGroup.hx",190,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(190)
	return this->_list_radios;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIRadioGroup_obj,getRadios,return )

::String FlxUIRadioGroup_obj::getLabel( int i){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","getLabel",0x2032c793,"flixel.addons.ui.FlxUIRadioGroup.getLabel","flixel/addons/ui/FlxUIRadioGroup.hx",193,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(194)
	if (((bool((i >= (int)0)) && bool((i < this->_labels->length))))){
		HX_STACK_LINE(195)
		return this->_labels->__get(i);
	}
	HX_STACK_LINE(197)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,getLabel,return )

::String FlxUIRadioGroup_obj::getId( int i){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","getId",0x7fc5f8dc,"flixel.addons.ui.FlxUIRadioGroup.getId","flixel/addons/ui/FlxUIRadioGroup.hx",200,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(201)
	if (((bool((i >= (int)0)) && bool((i < this->_ids->length))))){
		HX_STACK_LINE(202)
		return this->_ids->__get(i);
	}
	HX_STACK_LINE(204)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,getId,return )

bool FlxUIRadioGroup_obj::getIsVisible( int i){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","getIsVisible",0x032d6ac7,"flixel.addons.ui.FlxUIRadioGroup.getIsVisible","flixel/addons/ui/FlxUIRadioGroup.hx",207,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(208)
	if (((bool((i >= (int)0)) && bool((i < this->_list_radios->length))))){
		HX_STACK_LINE(209)
		return this->_list_radios->__get(i).StaticCast< ::flixel::addons::ui::FlxUICheckBox >()->visible;
	}
	HX_STACK_LINE(211)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,getIsVisible,return )

bool FlxUIRadioGroup_obj::get_clickable( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","get_clickable",0xc69c2b84,"flixel.addons.ui.FlxUIRadioGroup.get_clickable","flixel/addons/ui/FlxUIRadioGroup.hx",216,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(216)
	return this->_clickable;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIRadioGroup_obj,get_clickable,return )

bool FlxUIRadioGroup_obj::set_clickable( bool b){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","set_clickable",0x0ba20d90,"flixel.addons.ui.FlxUIRadioGroup.set_clickable","flixel/addons/ui/FlxUIRadioGroup.hx",217,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(218)
	this->_clickable = b;
	HX_STACK_LINE(219)
	{
		HX_STACK_LINE(219)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(219)
		Array< ::Dynamic > _g1 = this->_list_radios;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(219)
		while((true)){
			HX_STACK_LINE(219)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(219)
				break;
			}
			HX_STACK_LINE(219)
			::flixel::addons::ui::FlxUICheckBox c = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(219)
			++(_g);
			HX_STACK_LINE(220)
			c->set_active(b);
		}
	}
	HX_STACK_LINE(222)
	return this->_clickable;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,set_clickable,return )

int FlxUIRadioGroup_obj::get_selectedIndex( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","get_selectedIndex",0x2e506d59,"flixel.addons.ui.FlxUIRadioGroup.get_selectedIndex","flixel/addons/ui/FlxUIRadioGroup.hx",225,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(225)
	return this->_selected;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIRadioGroup_obj,get_selectedIndex,return )

int FlxUIRadioGroup_obj::set_selectedIndex( int i){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","set_selectedIndex",0x51be4565,"flixel.addons.ui.FlxUIRadioGroup.set_selectedIndex","flixel/addons/ui/FlxUIRadioGroup.hx",226,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(227)
	this->_selected = i;
	HX_STACK_LINE(228)
	int j = (int)0;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(229)
	{
		HX_STACK_LINE(229)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(229)
		Array< ::Dynamic > _g1 = this->_list_radios;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(229)
		while((true)){
			HX_STACK_LINE(229)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(229)
				break;
			}
			HX_STACK_LINE(229)
			::flixel::addons::ui::FlxUICheckBox c = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(229)
			++(_g);
			HX_STACK_LINE(230)
			c->set_checked(false);
			HX_STACK_LINE(231)
			if (((j == i))){
				HX_STACK_LINE(232)
				c->set_checked(true);
			}
			HX_STACK_LINE(234)
			(j)++;
		}
	}
	HX_STACK_LINE(236)
	if (((bool((this->_selected < (int)0)) || bool((this->_selected >= this->_list_radios->length))))){
		HX_STACK_LINE(238)
		this->_selected = (int)-1;
	}
	HX_STACK_LINE(240)
	return this->_selected;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,set_selectedIndex,return )

::String FlxUIRadioGroup_obj::get_selectedLabel( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","get_selectedLabel",0xdfeae03b,"flixel.addons.ui.FlxUIRadioGroup.get_selectedLabel","flixel/addons/ui/FlxUIRadioGroup.hx",243,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(243)
	return this->_labels->__get(this->_selected);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIRadioGroup_obj,get_selectedLabel,return )

::String FlxUIRadioGroup_obj::set_selectedLabel( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","set_selectedLabel",0x0358b847,"flixel.addons.ui.FlxUIRadioGroup.set_selectedLabel","flixel/addons/ui/FlxUIRadioGroup.hx",244,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(245)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(246)
	this->_selected = (int)-1;
	HX_STACK_LINE(247)
	{
		HX_STACK_LINE(247)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(247)
		Array< ::Dynamic > _g1 = this->_list_radios;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(247)
		while((true)){
			HX_STACK_LINE(247)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(247)
				break;
			}
			HX_STACK_LINE(247)
			::flixel::addons::ui::FlxUICheckBox c = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(247)
			++(_g);
			HX_STACK_LINE(248)
			c->set_checked(false);
			HX_STACK_LINE(249)
			if (((this->_labels->__get(i) == str))){
				HX_STACK_LINE(250)
				this->_selected = i;
				HX_STACK_LINE(251)
				c->set_checked(true);
			}
			HX_STACK_LINE(253)
			(i)++;
		}
	}
	HX_STACK_LINE(255)
	if (((bool((this->_selected >= (int)0)) && bool((this->_selected < this->_labels->length))))){
		HX_STACK_LINE(256)
		return this->_labels->__get(this->_selected);
	}
	HX_STACK_LINE(258)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,set_selectedLabel,return )

::String FlxUIRadioGroup_obj::get_selectedId( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","get_selectedId",0x00916734,"flixel.addons.ui.FlxUIRadioGroup.get_selectedId","flixel/addons/ui/FlxUIRadioGroup.hx",261,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(261)
	return this->_ids->__get(this->_selected);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIRadioGroup_obj,get_selectedId,return )

::String FlxUIRadioGroup_obj::set_selectedId( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","set_selectedId",0x20b14fa8,"flixel.addons.ui.FlxUIRadioGroup.set_selectedId","flixel/addons/ui/FlxUIRadioGroup.hx",262,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(263)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(264)
	this->_selected = (int)-1;
	HX_STACK_LINE(265)
	{
		HX_STACK_LINE(265)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(265)
		Array< ::Dynamic > _g1 = this->_list_radios;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(265)
		while((true)){
			HX_STACK_LINE(265)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(265)
				break;
			}
			HX_STACK_LINE(265)
			::flixel::addons::ui::FlxUICheckBox c = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(265)
			++(_g);
			HX_STACK_LINE(266)
			c->set_checked(false);
			HX_STACK_LINE(267)
			if (((this->_ids->__get(i) == str))){
				HX_STACK_LINE(268)
				this->_selected = i;
				HX_STACK_LINE(269)
				c->set_checked(true);
			}
			HX_STACK_LINE(271)
			(i)++;
		}
	}
	HX_STACK_LINE(273)
	if (((bool((this->_selected >= (int)0)) && bool((this->_selected < this->_ids->length))))){
		HX_STACK_LINE(274)
		return this->_ids->__get(this->_selected);
	}
	HX_STACK_LINE(276)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,set_selectedId,return )

::flixel::math::FlxPoint FlxUIRadioGroup_obj::setLineScroll( int scroll,Dynamic max_items){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","setLineScroll",0x8e2ebb2e,"flixel.addons.ui.FlxUIRadioGroup.setLineScroll","flixel/addons/ui/FlxUIRadioGroup.hx",288,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scroll,"scroll")
	HX_STACK_ARG(max_items,"max_items")
	HX_STACK_LINE(289)
	this->_list->set_scrollIndex(scroll);
	HX_STACK_LINE(290)
	if (((max_items != null()))){
		HX_STACK_LINE(292)
		if (((this->_list->stacking == (int)1))){
			HX_STACK_LINE(293)
			this->set_height(((this->_y_space * max_items) + (int)1));
		}
	}
	HX_STACK_LINE(296)
	::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(this->_list->amountPrevious,this->_list->amountNext);		HX_STACK_VAR(point,"point");
	HX_STACK_LINE(296)
	point->_inPool = false;
	HX_STACK_LINE(296)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRadioGroup_obj,setLineScroll,return )

Void FlxUIRadioGroup_obj::setRadioActive( int i,bool b){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","setRadioActive",0xd9735874,"flixel.addons.ui.FlxUIRadioGroup.setRadioActive","flixel/addons/ui/FlxUIRadioGroup.hx",299,0x807a4586)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(300)
		if (((bool((i >= (int)0)) && bool((i < this->_list_active->length))))){
			HX_STACK_LINE(301)
			this->_list_active[i] = b;
		}
		HX_STACK_LINE(303)
		this->updateActives();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRadioGroup_obj,setRadioActive,(void))

Void FlxUIRadioGroup_obj::_refreshRadios( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","_refreshRadios",0xb14e4769,"flixel.addons.ui.FlxUIRadioGroup._refreshRadios","flixel/addons/ui/FlxUIRadioGroup.hx",332,0x807a4586)
		HX_STACK_THIS(this)
		HX_STACK_LINE(333)
		Float xx = (int)0;		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(334)
		Float yy = (int)0;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(335)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(337)
		Float maxX = (int)0;		HX_STACK_VAR(maxX,"maxX");
		HX_STACK_LINE(338)
		Float maxY = (int)0;		HX_STACK_VAR(maxY,"maxY");
		HX_STACK_LINE(340)
		this->_list->_skipRefresh = true;
		HX_STACK_LINE(342)
		{
			HX_STACK_LINE(342)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(342)
			Array< ::String > _g1 = this->_ids;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(342)
			while((true)){
				HX_STACK_LINE(342)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(342)
					break;
				}
				HX_STACK_LINE(342)
				::String id = _g1->__get(_g);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(342)
				++(_g);
				HX_STACK_LINE(343)
				::String label = HX_CSTRING("");		HX_STACK_VAR(label,"label");
				HX_STACK_LINE(344)
				if (((bool((this->_labels != null())) && bool((this->_labels->length > i))))){
					HX_STACK_LINE(345)
					label = this->_labels->__get(i);
				}
				else{
					HX_STACK_LINE(347)
					label = ((HX_CSTRING("<") + id) + HX_CSTRING(">"));
				}
				HX_STACK_LINE(349)
				::flixel::addons::ui::FlxUICheckBox c;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(350)
				if (((this->_list_radios->length > i))){
					HX_STACK_LINE(351)
					c = this->_list_radios->__get(i).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();
					HX_STACK_LINE(352)
					c->set_visible(true);
					HX_STACK_LINE(353)
					c->set_text(label);
					HX_STACK_LINE(354)
					if (((i == (int)0))){
						HX_STACK_LINE(356)
						xx = c->x;
						HX_STACK_LINE(357)
						yy = c->y;
					}
					else{
						HX_STACK_LINE(361)
						int _g2 = ::Std_obj::_int(xx);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(361)
						c->set_x(_g2);
						HX_STACK_LINE(362)
						int _g11 = ::Std_obj::_int(yy);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(362)
						c->set_y(_g11);
					}
				}
				else{
					HX_STACK_LINE(367)
					::flixel::addons::ui::FlxUICheckBox _g2 = ::flixel::addons::ui::FlxUICheckBox_obj::__new((int)0,(int)0,this->_box_asset,this->_dot_asset,label,this->_label_width,Dynamic( Array_obj<Dynamic>::__new().Add(id).Add(false)),null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(367)
					c = _g2;
					HX_STACK_LINE(368)
					c->broadcastToFlxUI = false;
					HX_STACK_LINE(369)
					Dynamic _g3;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(369)
					{
						HX_STACK_LINE(369)
						Dynamic f = Dynamic( Array_obj<Dynamic>::__new().Add(this->_onCheckBoxEvent_dyn()));		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(369)
						Array< ::Dynamic > a1 = Array_obj< ::Dynamic >::__new().Add(c);		HX_STACK_VAR(a1,"a1");

						HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_5_1,Array< ::Dynamic >,a1,Dynamic,f)
						Void run(){
							HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","flixel/addons/ui/FlxUIRadioGroup.hx",369,0x807a4586)
							{
								HX_STACK_LINE(369)
								return null(f->__GetItem((int)0)(a1->__get((int)0).StaticCast< ::flixel::addons::ui::FlxUICheckBox >()).Cast< Void >());
							}
							return null();
						}
						HX_END_LOCAL_FUNC0((void))

						HX_STACK_LINE(369)
						_g3 =  Dynamic(new _Function_5_1(a1,f));
					}
					HX_STACK_LINE(369)
					c->callback = _g3;
					HX_STACK_LINE(371)
					this->_list->add(c);
					HX_STACK_LINE(373)
					int _g4 = ::Std_obj::_int(xx);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(373)
					c->set_x(_g4);
					HX_STACK_LINE(374)
					int _g5 = ::Std_obj::_int(yy);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(374)
					c->set_y(_g5);
					HX_STACK_LINE(376)
					c->set_text(label);
					HX_STACK_LINE(377)
					if (((this->_list_radios->length > (int)0))){
						HX_STACK_LINE(378)
						c->button->copyStyle(this->_list_radios->__get((int)0).StaticCast< ::flixel::addons::ui::FlxUICheckBox >()->button);
						HX_STACK_LINE(379)
						if (((this->activeStyle == null()))){
							HX_STACK_LINE(380)
							::flixel::addons::ui::CheckStyle _g6 = this->makeActiveStyle();		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(380)
							this->set_activeStyle(_g6);
						}
						HX_STACK_LINE(382)
						Float _g7 = this->_list_radios->__get((int)0).StaticCast< ::flixel::addons::ui::FlxUICheckBox >()->button->get_width();		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(382)
						c->button->set_width(_g7);
						HX_STACK_LINE(383)
						Float _g8 = this->_list_radios->__get((int)0).StaticCast< ::flixel::addons::ui::FlxUICheckBox >()->button->get_height();		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(383)
						c->button->set_height(_g8);
						HX_STACK_LINE(384)
						c->set_textX(this->_list_radios->__get((int)0).StaticCast< ::flixel::addons::ui::FlxUICheckBox >()->textX);
						HX_STACK_LINE(385)
						c->set_textY(this->_list_radios->__get((int)0).StaticCast< ::flixel::addons::ui::FlxUICheckBox >()->textY);
					}
					HX_STACK_LINE(388)
					this->_list_radios->push(c);
					HX_STACK_LINE(389)
					this->_list_active->push(true);
				}
				HX_STACK_LINE(392)
				Float _g9 = c->get_width();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(392)
				Float _g10 = (xx + _g9);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(392)
				if (((_g10 > maxX))){
					HX_STACK_LINE(393)
					Float _g11 = c->get_width();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(393)
					Float _g12 = (xx + _g11);		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(393)
					maxX = _g12;
				}
				HX_STACK_LINE(395)
				Float _g13 = c->get_height();		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(395)
				Float _g14 = (yy + _g13);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(395)
				if (((_g14 > maxY))){
					HX_STACK_LINE(396)
					Float _g15 = c->get_height();		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(396)
					Float _g16 = (yy + _g15);		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(396)
					maxY = _g16;
				}
				HX_STACK_LINE(399)
				hx::AddEq(yy,this->_y_space);
				HX_STACK_LINE(400)
				(i)++;
			}
		}
		HX_STACK_LINE(402)
		if (((this->fixedSize == false))){
			HX_STACK_LINE(403)
			hx::AddEq(maxX,(int)5);
			HX_STACK_LINE(404)
			hx::AddEq(maxY,(int)5);
			HX_STACK_LINE(405)
			Float _g17 = this->_list->get_width();		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(405)
			if (((maxX > _g17))){
				HX_STACK_LINE(406)
				this->_list->set_width(maxX);
			}
			HX_STACK_LINE(408)
			Float _g18 = this->_list->get_height();		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(408)
			if (((maxY > _g18))){
				HX_STACK_LINE(409)
				this->_list->set_height(maxY);
			}
			HX_STACK_LINE(411)
			this->set_width(maxX);
			HX_STACK_LINE(412)
			this->set_height(maxY);
		}
		HX_STACK_LINE(414)
		this->_list->_skipRefresh = false;
		HX_STACK_LINE(416)
		if (((this->fixedSize == true))){
			HX_STACK_LINE(417)
			this->_list->refreshList();
		}
		HX_STACK_LINE(420)
		this->updateActives();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIRadioGroup_obj,_refreshRadios,(void))

Void FlxUIRadioGroup_obj::updateActives( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","updateActives",0x034b5aaf,"flixel.addons.ui.FlxUIRadioGroup.updateActives","flixel/addons/ui/FlxUIRadioGroup.hx",423,0x807a4586)
		HX_STACK_THIS(this)
		HX_STACK_LINE(424)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(425)
		{
			HX_STACK_LINE(425)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(425)
			Array< ::Dynamic > _g1 = this->_list_radios;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(425)
			while((true)){
				HX_STACK_LINE(425)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(425)
					break;
				}
				HX_STACK_LINE(425)
				::flixel::addons::ui::FlxUICheckBox r = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(425)
				++(_g);
				HX_STACK_LINE(426)
				r->set_active(this->_list_active->__get(i));
				HX_STACK_LINE(427)
				if (((bool((this->_list_active->__get(i) == false)) && bool((this->inactiveStyle != null()))))){
					HX_STACK_LINE(428)
					this->inactiveStyle->applyToCheck(r);
				}
				else{
					HX_STACK_LINE(429)
					if (((bool((this->_list_active->__get(i) == true)) && bool((this->activeStyle != null()))))){
						HX_STACK_LINE(430)
						this->activeStyle->applyToCheck(r);
					}
				}
				HX_STACK_LINE(432)
				(i)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIRadioGroup_obj,updateActives,(void))

::flixel::addons::ui::CheckStyle FlxUIRadioGroup_obj::makeActiveStyle( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","makeActiveStyle",0x9d1f80c8,"flixel.addons.ui.FlxUIRadioGroup.makeActiveStyle","flixel/addons/ui/FlxUIRadioGroup.hx",436,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(437)
	if (((this->_list_radios->length > (int)0))){
		HX_STACK_LINE(438)
		::flixel::addons::ui::FlxUIButton btn = this->_list_radios->__get((int)0).StaticCast< ::flixel::addons::ui::FlxUICheckBox >()->button;		HX_STACK_VAR(btn,"btn");
		HX_STACK_LINE(439)
		::flixel::text::FlxText t = btn->label;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(440)
		::flixel::addons::ui::FontDef _g = ::flixel::addons::ui::FontDef_obj::copyFromFlxText(t);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(440)
		::String _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(440)
		_g1 = hx::TCast< String >::cast(t->_defaultFormat->align);
		HX_STACK_LINE(440)
		::flixel::addons::ui::BorderDef _g2 = ::flixel::addons::ui::BorderDef_obj::__new(t->borderStyle,t->borderColor,t->borderSize,t->borderQuality);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(440)
		::flixel::addons::ui::CheckStyle cs = ::flixel::addons::ui::CheckStyle_obj::__new((int)16777215,_g,_g1,t->color,_g2);		HX_STACK_VAR(cs,"cs");
		HX_STACK_LINE(441)
		return cs;
	}
	HX_STACK_LINE(443)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIRadioGroup_obj,makeActiveStyle,return )

Void FlxUIRadioGroup_obj::_onCheckBoxEvent( ::flixel::addons::ui::FlxUICheckBox checkBox){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","_onCheckBoxEvent",0xc5d5ffee,"flixel.addons.ui.FlxUIRadioGroup._onCheckBoxEvent","flixel/addons/ui/FlxUIRadioGroup.hx",448,0x807a4586)
		HX_STACK_THIS(this)
		HX_STACK_ARG(checkBox,"checkBox")
		HX_STACK_LINE(448)
		this->_onClick(checkBox,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,_onCheckBoxEvent,(void))

bool FlxUIRadioGroup_obj::_onClick( ::flixel::addons::ui::FlxUICheckBox checkBox,bool doCallback){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","_onClick",0x69011e3f,"flixel.addons.ui.FlxUIRadioGroup._onClick","flixel/addons/ui/FlxUIRadioGroup.hx",451,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(checkBox,"checkBox")
	HX_STACK_ARG(doCallback,"doCallback")
	HX_STACK_LINE(452)
	if ((!(this->_clickable))){
		HX_STACK_LINE(452)
		return false;
	}
	HX_STACK_LINE(454)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(455)
	{
		HX_STACK_LINE(455)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(455)
		Array< ::Dynamic > _g1 = this->_list_radios;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(455)
		while((true)){
			HX_STACK_LINE(455)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(455)
				break;
			}
			HX_STACK_LINE(455)
			::flixel::addons::ui::FlxUICheckBox c = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(455)
			++(_g);
			HX_STACK_LINE(456)
			c->set_checked(false);
			HX_STACK_LINE(457)
			if (((checkBox == c))){
				HX_STACK_LINE(458)
				this->_selected = i;
				HX_STACK_LINE(459)
				c->set_checked(true);
			}
			HX_STACK_LINE(461)
			(i)++;
		}
	}
	HX_STACK_LINE(464)
	if ((doCallback)){
		HX_STACK_LINE(465)
		if (((this->callback_dyn() != null()))){
			HX_STACK_LINE(466)
			::String _g = this->get_selectedId();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(466)
			this->callback(_g);
		}
		HX_STACK_LINE(469)
		if ((this->broadcastToFlxUI)){
			HX_STACK_LINE(470)
			::flixel::addons::ui::FlxUI_obj::event(HX_CSTRING("click_radio_group"),hx::ObjectPtr<OBJ_>(this),this->_ids->__get(this->_selected),this->params);
		}
	}
	HX_STACK_LINE(473)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRadioGroup_obj,_onClick,return )

::String FlxUIRadioGroup_obj::CLICK_EVENT;


FlxUIRadioGroup_obj::FlxUIRadioGroup_obj()
{
}

void FlxUIRadioGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIRadioGroup);
	HX_MARK_MEMBER_NAME(activeStyle,"activeStyle");
	HX_MARK_MEMBER_NAME(inactiveStyle,"inactiveStyle");
	HX_MARK_MEMBER_NAME(numRadios,"numRadios");
	HX_MARK_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(fixedSize,"fixedSize");
	HX_MARK_MEMBER_NAME(_list_active,"_list_active");
	HX_MARK_MEMBER_NAME(_list,"_list");
	HX_MARK_MEMBER_NAME(_box_asset,"_box_asset");
	HX_MARK_MEMBER_NAME(_dot_asset,"_dot_asset");
	HX_MARK_MEMBER_NAME(_labels,"_labels");
	HX_MARK_MEMBER_NAME(_ids,"_ids");
	HX_MARK_MEMBER_NAME(_label_width,"_label_width");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_y_space,"_y_space");
	HX_MARK_MEMBER_NAME(_selected,"_selected");
	HX_MARK_MEMBER_NAME(_clickable,"_clickable");
	HX_MARK_MEMBER_NAME(_list_radios,"_list_radios");
	::flixel::addons::ui::FlxUIGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIRadioGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(activeStyle,"activeStyle");
	HX_VISIT_MEMBER_NAME(inactiveStyle,"inactiveStyle");
	HX_VISIT_MEMBER_NAME(numRadios,"numRadios");
	HX_VISIT_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(fixedSize,"fixedSize");
	HX_VISIT_MEMBER_NAME(_list_active,"_list_active");
	HX_VISIT_MEMBER_NAME(_list,"_list");
	HX_VISIT_MEMBER_NAME(_box_asset,"_box_asset");
	HX_VISIT_MEMBER_NAME(_dot_asset,"_dot_asset");
	HX_VISIT_MEMBER_NAME(_labels,"_labels");
	HX_VISIT_MEMBER_NAME(_ids,"_ids");
	HX_VISIT_MEMBER_NAME(_label_width,"_label_width");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_y_space,"_y_space");
	HX_VISIT_MEMBER_NAME(_selected,"_selected");
	HX_VISIT_MEMBER_NAME(_clickable,"_clickable");
	HX_VISIT_MEMBER_NAME(_list_radios,"_list_radios");
	::flixel::addons::ui::FlxUIGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUIRadioGroup_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"_ids") ) { return _ids; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"getId") ) { return getId_dyn(); }
		if (HX_FIELD_EQ(inName,"_list") ) { return _list; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return params; }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_labels") ) { return _labels; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return callback; }
		if (HX_FIELD_EQ(inName,"updateId") ) { return updateId_dyn(); }
		if (HX_FIELD_EQ(inName,"getLabel") ) { return getLabel_dyn(); }
		if (HX_FIELD_EQ(inName,"_y_space") ) { return _y_space; }
		if (HX_FIELD_EQ(inName,"_onClick") ) { return _onClick_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clickable") ) { return get_clickable(); }
		if (HX_FIELD_EQ(inName,"numRadios") ) { return inCallProp ? get_numRadios() : numRadios; }
		if (HX_FIELD_EQ(inName,"fixedSize") ) { return fixedSize; }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"getRadios") ) { return getRadios_dyn(); }
		if (HX_FIELD_EQ(inName,"_selected") ) { return _selected; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"selectedId") ) { return get_selectedId(); }
		if (HX_FIELD_EQ(inName,"set_params") ) { return set_params_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"_box_asset") ) { return _box_asset; }
		if (HX_FIELD_EQ(inName,"_dot_asset") ) { return _dot_asset; }
		if (HX_FIELD_EQ(inName,"_clickable") ) { return _clickable; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"activeStyle") ) { return activeStyle; }
		if (HX_FIELD_EQ(inName,"updateLabel") ) { return updateLabel_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadGraphics") ) { return loadGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"updateRadios") ) { return updateRadios_dyn(); }
		if (HX_FIELD_EQ(inName,"getIsVisible") ) { return getIsVisible_dyn(); }
		if (HX_FIELD_EQ(inName,"_list_active") ) { return _list_active; }
		if (HX_FIELD_EQ(inName,"_label_width") ) { return _label_width; }
		if (HX_FIELD_EQ(inName,"_list_radios") ) { return _list_radios; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedLabel") ) { return get_selectedLabel(); }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { return get_selectedIndex(); }
		if (HX_FIELD_EQ(inName,"inactiveStyle") ) { return inactiveStyle; }
		if (HX_FIELD_EQ(inName,"get_numRadios") ) { return get_numRadios_dyn(); }
		if (HX_FIELD_EQ(inName,"get_clickable") ) { return get_clickable_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clickable") ) { return set_clickable_dyn(); }
		if (HX_FIELD_EQ(inName,"setLineScroll") ) { return setLineScroll_dyn(); }
		if (HX_FIELD_EQ(inName,"updateActives") ) { return updateActives_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_selectedId") ) { return get_selectedId_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedId") ) { return set_selectedId_dyn(); }
		if (HX_FIELD_EQ(inName,"setRadioActive") ) { return setRadioActive_dyn(); }
		if (HX_FIELD_EQ(inName,"_refreshRadios") ) { return _refreshRadios_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_activeStyle") ) { return set_activeStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"makeActiveStyle") ) { return makeActiveStyle_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { return skipButtonUpdate; }
		if (HX_FIELD_EQ(inName,"_onCheckBoxEvent") ) { return _onCheckBoxEvent_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_inactiveStyle") ) { return set_inactiveStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return get_selectedIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return set_selectedIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selectedLabel") ) { return get_selectedLabel_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedLabel") ) { return set_selectedLabel_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_skipButtonUpdate") ) { return set_skipButtonUpdate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUIRadioGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ids") ) { _ids=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_list") ) { _list=inValue.Cast< ::flixel::addons::ui::FlxUIList >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { if (inCallProp) return set_params(inValue);params=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_labels") ) { _labels=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_y_space") ) { _y_space=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clickable") ) { return set_clickable(inValue); }
		if (HX_FIELD_EQ(inName,"numRadios") ) { numRadios=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fixedSize") ) { fixedSize=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_selected") ) { _selected=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"selectedId") ) { return set_selectedId(inValue); }
		if (HX_FIELD_EQ(inName,"_box_asset") ) { _box_asset=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dot_asset") ) { _dot_asset=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_clickable") ) { _clickable=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"activeStyle") ) { if (inCallProp) return set_activeStyle(inValue);activeStyle=inValue.Cast< ::flixel::addons::ui::CheckStyle >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_list_active") ) { _list_active=inValue.Cast< Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_label_width") ) { _label_width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_list_radios") ) { _list_radios=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedLabel") ) { return set_selectedLabel(inValue); }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { return set_selectedIndex(inValue); }
		if (HX_FIELD_EQ(inName,"inactiveStyle") ) { if (inCallProp) return set_inactiveStyle(inValue);inactiveStyle=inValue.Cast< ::flixel::addons::ui::CheckStyle >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { if (inCallProp) return set_skipButtonUpdate(inValue);skipButtonUpdate=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUIRadioGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("clickable"));
	outFields->push(HX_CSTRING("selectedId"));
	outFields->push(HX_CSTRING("selectedLabel"));
	outFields->push(HX_CSTRING("selectedIndex"));
	outFields->push(HX_CSTRING("activeStyle"));
	outFields->push(HX_CSTRING("inactiveStyle"));
	outFields->push(HX_CSTRING("numRadios"));
	outFields->push(HX_CSTRING("skipButtonUpdate"));
	outFields->push(HX_CSTRING("params"));
	outFields->push(HX_CSTRING("fixedSize"));
	outFields->push(HX_CSTRING("_list_active"));
	outFields->push(HX_CSTRING("_list"));
	outFields->push(HX_CSTRING("_box_asset"));
	outFields->push(HX_CSTRING("_dot_asset"));
	outFields->push(HX_CSTRING("_labels"));
	outFields->push(HX_CSTRING("_ids"));
	outFields->push(HX_CSTRING("_label_width"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_y_space"));
	outFields->push(HX_CSTRING("_selected"));
	outFields->push(HX_CSTRING("_clickable"));
	outFields->push(HX_CSTRING("_list_radios"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CLICK_EVENT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::addons::ui::CheckStyle*/ ,(int)offsetof(FlxUIRadioGroup_obj,activeStyle),HX_CSTRING("activeStyle")},
	{hx::fsObject /*::flixel::addons::ui::CheckStyle*/ ,(int)offsetof(FlxUIRadioGroup_obj,inactiveStyle),HX_CSTRING("inactiveStyle")},
	{hx::fsInt,(int)offsetof(FlxUIRadioGroup_obj,numRadios),HX_CSTRING("numRadios")},
	{hx::fsBool,(int)offsetof(FlxUIRadioGroup_obj,skipButtonUpdate),HX_CSTRING("skipButtonUpdate")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUIRadioGroup_obj,callback),HX_CSTRING("callback")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUIRadioGroup_obj,params),HX_CSTRING("params")},
	{hx::fsBool,(int)offsetof(FlxUIRadioGroup_obj,fixedSize),HX_CSTRING("fixedSize")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(FlxUIRadioGroup_obj,_list_active),HX_CSTRING("_list_active")},
	{hx::fsObject /*::flixel::addons::ui::FlxUIList*/ ,(int)offsetof(FlxUIRadioGroup_obj,_list),HX_CSTRING("_list")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUIRadioGroup_obj,_box_asset),HX_CSTRING("_box_asset")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUIRadioGroup_obj,_dot_asset),HX_CSTRING("_dot_asset")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(FlxUIRadioGroup_obj,_labels),HX_CSTRING("_labels")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(FlxUIRadioGroup_obj,_ids),HX_CSTRING("_ids")},
	{hx::fsInt,(int)offsetof(FlxUIRadioGroup_obj,_label_width),HX_CSTRING("_label_width")},
	{hx::fsInt,(int)offsetof(FlxUIRadioGroup_obj,_width),HX_CSTRING("_width")},
	{hx::fsInt,(int)offsetof(FlxUIRadioGroup_obj,_height),HX_CSTRING("_height")},
	{hx::fsFloat,(int)offsetof(FlxUIRadioGroup_obj,_y_space),HX_CSTRING("_y_space")},
	{hx::fsInt,(int)offsetof(FlxUIRadioGroup_obj,_selected),HX_CSTRING("_selected")},
	{hx::fsBool,(int)offsetof(FlxUIRadioGroup_obj,_clickable),HX_CSTRING("_clickable")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxUIRadioGroup_obj,_list_radios),HX_CSTRING("_list_radios")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("activeStyle"),
	HX_CSTRING("set_activeStyle"),
	HX_CSTRING("inactiveStyle"),
	HX_CSTRING("set_inactiveStyle"),
	HX_CSTRING("numRadios"),
	HX_CSTRING("get_numRadios"),
	HX_CSTRING("skipButtonUpdate"),
	HX_CSTRING("set_skipButtonUpdate"),
	HX_CSTRING("callback"),
	HX_CSTRING("params"),
	HX_CSTRING("set_params"),
	HX_CSTRING("fixedSize"),
	HX_CSTRING("set_width"),
	HX_CSTRING("set_height"),
	HX_CSTRING("loadGraphics"),
	HX_CSTRING("destroy"),
	HX_CSTRING("updateLabel"),
	HX_CSTRING("updateId"),
	HX_CSTRING("show"),
	HX_CSTRING("updateRadios"),
	HX_CSTRING("getRadios"),
	HX_CSTRING("getLabel"),
	HX_CSTRING("getId"),
	HX_CSTRING("getIsVisible"),
	HX_CSTRING("get_clickable"),
	HX_CSTRING("set_clickable"),
	HX_CSTRING("get_selectedIndex"),
	HX_CSTRING("set_selectedIndex"),
	HX_CSTRING("get_selectedLabel"),
	HX_CSTRING("set_selectedLabel"),
	HX_CSTRING("get_selectedId"),
	HX_CSTRING("set_selectedId"),
	HX_CSTRING("setLineScroll"),
	HX_CSTRING("setRadioActive"),
	HX_CSTRING("_list_active"),
	HX_CSTRING("_list"),
	HX_CSTRING("_box_asset"),
	HX_CSTRING("_dot_asset"),
	HX_CSTRING("_labels"),
	HX_CSTRING("_ids"),
	HX_CSTRING("_label_width"),
	HX_CSTRING("_width"),
	HX_CSTRING("_height"),
	HX_CSTRING("_y_space"),
	HX_CSTRING("_selected"),
	HX_CSTRING("_clickable"),
	HX_CSTRING("_list_radios"),
	HX_CSTRING("_refreshRadios"),
	HX_CSTRING("updateActives"),
	HX_CSTRING("makeActiveStyle"),
	HX_CSTRING("_onCheckBoxEvent"),
	HX_CSTRING("_onClick"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIRadioGroup_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxUIRadioGroup_obj::CLICK_EVENT,"CLICK_EVENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIRadioGroup_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxUIRadioGroup_obj::CLICK_EVENT,"CLICK_EVENT");
};

#endif

Class FlxUIRadioGroup_obj::__mClass;

void FlxUIRadioGroup_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxUIRadioGroup"), hx::TCanCast< FlxUIRadioGroup_obj> ,sStaticFields,sMemberFields,
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

void FlxUIRadioGroup_obj::__boot()
{
	CLICK_EVENT= HX_CSTRING("click_radio_group");
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
