#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#include <flixel/addons/ui/FlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIList
#include <flixel/addons/ui/FlxUIList.h>
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
namespace flixel{
namespace addons{
namespace ui{

Void FlxUIList_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Array< ::flixel::addons::ui::interfaces::IFlxUIWidget > Widgets,hx::Null< Float >  __o_W,hx::Null< Float >  __o_H,::String __o_MoreString,Dynamic __o_Stacking,Dynamic __o_Spacing,::flixel::math::FlxPoint PrevButtonOffset,::flixel::math::FlxPoint NextButtonOffset,::flixel::addons::ui::interfaces::IFlxUIButton PrevButton,::flixel::addons::ui::interfaces::IFlxUIButton NextButton)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUIList","new",0x6509e5c5,"flixel.addons.ui.FlxUIList.new","flixel/addons/ui/FlxUIList.hx",9,0xc14028ac)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(Widgets,"Widgets")
HX_STACK_ARG(__o_W,"W")
HX_STACK_ARG(__o_H,"H")
HX_STACK_ARG(__o_MoreString,"MoreString")
HX_STACK_ARG(__o_Stacking,"Stacking")
HX_STACK_ARG(__o_Spacing,"Spacing")
HX_STACK_ARG(PrevButtonOffset,"PrevButtonOffset")
HX_STACK_ARG(NextButtonOffset,"NextButtonOffset")
HX_STACK_ARG(PrevButton,"PrevButton")
HX_STACK_ARG(NextButton,"NextButton")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float W = __o_W.Default(0);
Float H = __o_H.Default(0);
::String MoreString = __o_MoreString.Default(HX_CSTRING("<X> more..."));
Dynamic Stacking = __o_Stacking.Default(1);
Dynamic Spacing = __o_Spacing.Default(0);
{
	HX_STACK_LINE(176)
	this->_skipRefresh = false;
	HX_STACK_LINE(15)
	this->scrollIndex = (int)0;
	HX_STACK_LINE(72)
	this->_skipRefresh = true;
	HX_STACK_LINE(73)
	super::__construct(X,Y);
	HX_STACK_LINE(74)
	this->set_stacking(Stacking);
	HX_STACK_LINE(75)
	this->set_spacing(Spacing);
	HX_STACK_LINE(76)
	if (((Widgets != null()))){
		HX_STACK_LINE(77)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(77)
		while((true)){
			HX_STACK_LINE(77)
			if ((!(((_g < Widgets->length))))){
				HX_STACK_LINE(77)
				break;
			}
			HX_STACK_LINE(77)
			::flixel::addons::ui::interfaces::IFlxUIWidget widget = Widgets->__get(_g);		HX_STACK_VAR(widget,"widget");
			HX_STACK_LINE(77)
			++(_g);
			HX_STACK_LINE(78)
			this->add(widget);
		}
	}
	HX_STACK_LINE(82)
	this->prevButton = PrevButton;
	HX_STACK_LINE(83)
	this->nextButton = NextButton;
	HX_STACK_LINE(84)
	this->prevButtonOffset = PrevButtonOffset;
	HX_STACK_LINE(85)
	this->nextButtonOffset = NextButtonOffset;
	HX_STACK_LINE(86)
	this->set_moreString(MoreString);
	HX_STACK_LINE(88)
	if (((this->prevButton == null()))){
		HX_STACK_LINE(89)
		Dynamic _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			Dynamic f = Dynamic( Array_obj<Dynamic>::__new().Add(this->onClick_dyn()));		HX_STACK_VAR(f,"f");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Dynamic,f)
			Void run(){
				HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","flixel/addons/ui/FlxUIList.hx",89,0xc14028ac)
				{
					HX_STACK_LINE(89)
					return null(f->__GetItem((int)0)((int)-1).Cast< Void >());
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(89)
			_g =  Dynamic(new _Function_3_1(f));
		}
		HX_STACK_LINE(89)
		::flixel::addons::ui::FlxUIButton pButton = ::flixel::addons::ui::FlxUIButton_obj::__new((int)0,(int)0,HX_CSTRING(" "),_g);		HX_STACK_VAR(pButton,"pButton");
		HX_STACK_LINE(90)
		if (((this->stacking == (int)0))){
			HX_STACK_LINE(91)
			pButton->loadGraphicsUpOverDown(HX_CSTRING("flixel/flixel-ui/img/button_arrow_left.png"),null(),null());
			HX_STACK_LINE(92)
			Float _g1 = pButton->label->__Field(HX_CSTRING("set_fieldWidth"),true)((int)100);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(92)
			pButton->label->__Field(HX_CSTRING("set_width"),true)(_g1);
			HX_STACK_LINE(93)
			::String _g2 = this->getMoreString((int)0);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(93)
			pButton->label->__Field(HX_CSTRING("set_text"),true)(_g2);
			HX_STACK_LINE(95)
			Float _g3 = pButton->get_width();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(95)
			Float _g4 = pButton->label->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(95)
			Float _g5 = (_g3 - _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(96)
			Float _g6 = pButton->get_height();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(96)
			Float _g7 = (_g6 + (int)2);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(95)
			pButton->setAllLabelOffsets(_g5,_g7);
			HX_STACK_LINE(97)
			pButton->label->__Field(HX_CSTRING("set_alignment"),true)(HX_CSTRING("right"));
		}
		else{
			HX_STACK_LINE(99)
			pButton->loadGraphicsUpOverDown(HX_CSTRING("flixel/flixel-ui/img/button_arrow_up.png"),null(),null());
			HX_STACK_LINE(100)
			Float _g8 = pButton->label->__Field(HX_CSTRING("set_fieldWidth"),true)((int)100);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(100)
			pButton->label->__Field(HX_CSTRING("set_width"),true)(_g8);
			HX_STACK_LINE(101)
			::String _g9 = this->getMoreString((int)0);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(101)
			pButton->label->__Field(HX_CSTRING("set_text"),true)(_g9);
			HX_STACK_LINE(102)
			pButton->setAllLabelOffsets((int)0,(int)0);
			HX_STACK_LINE(103)
			Float _g10 = pButton->get_width();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(103)
			Float _g11 = (_g10 + (int)2);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(103)
			Float _g12 = pButton->get_height();		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(103)
			Float _g13 = pButton->label->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(103)
			Float _g14 = (_g12 - _g13);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(103)
			pButton->setCenterLabelOffset(_g11,_g14);
			HX_STACK_LINE(104)
			pButton->label->__Field(HX_CSTRING("set_alignment"),true)(HX_CSTRING("left"));
		}
		HX_STACK_LINE(106)
		this->prevButton = pButton;
	}
	HX_STACK_LINE(108)
	if (((this->nextButton == null()))){
		HX_STACK_LINE(109)
		Dynamic _g15;		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(109)
		{
			HX_STACK_LINE(109)
			Dynamic f = Dynamic( Array_obj<Dynamic>::__new().Add(this->onClick_dyn()));		HX_STACK_VAR(f,"f");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Dynamic,f)
			Void run(){
				HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","flixel/addons/ui/FlxUIList.hx",109,0xc14028ac)
				{
					HX_STACK_LINE(109)
					return null(f->__GetItem((int)0)((int)1).Cast< Void >());
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(109)
			_g15 =  Dynamic(new _Function_3_1(f));
		}
		HX_STACK_LINE(109)
		::flixel::addons::ui::FlxUIButton nButton = ::flixel::addons::ui::FlxUIButton_obj::__new((int)0,(int)0,HX_CSTRING(" "),_g15);		HX_STACK_VAR(nButton,"nButton");
		HX_STACK_LINE(110)
		if (((this->stacking == (int)0))){
			HX_STACK_LINE(111)
			nButton->loadGraphicsUpOverDown(HX_CSTRING("flixel/flixel-ui/img/button_arrow_right.png"),null(),null());
			HX_STACK_LINE(112)
			Float _g16 = nButton->label->__Field(HX_CSTRING("set_fieldWidth"),true)((int)100);		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(112)
			nButton->label->__Field(HX_CSTRING("set_width"),true)(_g16);
			HX_STACK_LINE(114)
			::String _g17 = this->getMoreString((int)0);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(114)
			nButton->label->__Field(HX_CSTRING("set_text"),true)(_g17);
			HX_STACK_LINE(115)
			Float _g18 = nButton->get_height();		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(115)
			Float _g19 = (_g18 + (int)2);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(115)
			nButton->setAllLabelOffsets((int)0,_g19);
			HX_STACK_LINE(116)
			nButton->label->__Field(HX_CSTRING("set_alignment"),true)(HX_CSTRING("left"));
		}
		else{
			HX_STACK_LINE(118)
			nButton->loadGraphicsUpOverDown(HX_CSTRING("flixel/flixel-ui/img/button_arrow_down.png"),null(),null());
			HX_STACK_LINE(119)
			Float _g20 = nButton->label->__Field(HX_CSTRING("set_fieldWidth"),true)((int)100);		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(119)
			nButton->label->__Field(HX_CSTRING("set_width"),true)(_g20);
			HX_STACK_LINE(121)
			::String _g21 = this->getMoreString((int)0);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(121)
			nButton->label->__Field(HX_CSTRING("set_text"),true)(_g21);
			HX_STACK_LINE(122)
			nButton->setAllLabelOffsets((int)0,(int)0);
			HX_STACK_LINE(123)
			Float _g22 = nButton->get_width();		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(123)
			Float _g23 = (_g22 + (int)2);		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(123)
			nButton->setCenterLabelOffset(_g23,(int)0);
			HX_STACK_LINE(124)
			nButton->label->__Field(HX_CSTRING("set_alignment"),true)(HX_CSTRING("left"));
		}
		HX_STACK_LINE(126)
		this->nextButton = nButton;
	}
	HX_STACK_LINE(128)
	if (((this->prevButtonOffset == null()))){
		HX_STACK_LINE(129)
		::flixel::math::FlxPoint _g24;		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(129)
			point->_inPool = false;
			HX_STACK_LINE(129)
			_g24 = point;
		}
		HX_STACK_LINE(129)
		this->prevButtonOffset = _g24;
	}
	HX_STACK_LINE(131)
	if (((this->nextButtonOffset == null()))){
		HX_STACK_LINE(132)
		::flixel::math::FlxPoint _g25;		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(132)
			point->_inPool = false;
			HX_STACK_LINE(132)
			_g25 = point;
		}
		HX_STACK_LINE(132)
		this->nextButtonOffset = _g25;
	}
	HX_STACK_LINE(134)
	this->_skipRefresh = false;
	HX_STACK_LINE(135)
	this->setSize(W,H);
}
;
	return null();
}

//FlxUIList_obj::~FlxUIList_obj() { }

Dynamic FlxUIList_obj::__CreateEmpty() { return  new FlxUIList_obj; }
hx::ObjectPtr< FlxUIList_obj > FlxUIList_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Array< ::flixel::addons::ui::interfaces::IFlxUIWidget > Widgets,hx::Null< Float >  __o_W,hx::Null< Float >  __o_H,::String __o_MoreString,Dynamic __o_Stacking,Dynamic __o_Spacing,::flixel::math::FlxPoint PrevButtonOffset,::flixel::math::FlxPoint NextButtonOffset,::flixel::addons::ui::interfaces::IFlxUIButton PrevButton,::flixel::addons::ui::interfaces::IFlxUIButton NextButton)
{  hx::ObjectPtr< FlxUIList_obj > result = new FlxUIList_obj();
	result->__construct(__o_X,__o_Y,Widgets,__o_W,__o_H,__o_MoreString,__o_Stacking,__o_Spacing,PrevButtonOffset,NextButtonOffset,PrevButton,NextButton);
	return result;}

Dynamic FlxUIList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUIList_obj > result = new FlxUIList_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11]);
	return result;}

int FlxUIList_obj::set_scrollIndex( int i){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIList","set_scrollIndex",0xb192314d,"flixel.addons.ui.FlxUIList.set_scrollIndex","flixel/addons/ui/FlxUIList.hx",16,0xc14028ac)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(17)
	this->scrollIndex = i;
	HX_STACK_LINE(18)
	this->refreshList();
	HX_STACK_LINE(19)
	return i;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIList_obj,set_scrollIndex,return )

int FlxUIList_obj::set_stacking( int Stacking){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIList","set_stacking",0xb189d012,"flixel.addons.ui.FlxUIList.set_stacking","flixel/addons/ui/FlxUIList.hx",24,0xc14028ac)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Stacking,"Stacking")
	HX_STACK_LINE(25)
	this->stacking = Stacking;
	HX_STACK_LINE(26)
	this->refreshList();
	HX_STACK_LINE(27)
	return Stacking;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIList_obj,set_stacking,return )

Float FlxUIList_obj::set_spacing( Float Spacing){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIList","set_spacing",0x33b41d0b,"flixel.addons.ui.FlxUIList.set_spacing","flixel/addons/ui/FlxUIList.hx",32,0xc14028ac)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Spacing,"Spacing")
	HX_STACK_LINE(33)
	this->spacing = Spacing;
	HX_STACK_LINE(34)
	this->refreshList();
	HX_STACK_LINE(35)
	return Spacing;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIList_obj,set_spacing,return )

::String FlxUIList_obj::set_moreString( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIList","set_moreString",0xc23895be,"flixel.addons.ui.FlxUIList.set_moreString","flixel/addons/ui/FlxUIList.hx",45,0xc14028ac)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(46)
	this->moreString = str;
	HX_STACK_LINE(47)
	this->refreshList();
	HX_STACK_LINE(48)
	return this->moreString;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIList_obj,set_moreString,return )

Void FlxUIList_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIList","destroy",0xade358df,"flixel.addons.ui.FlxUIList.destroy","flixel/addons/ui/FlxUIList.hx",138,0xc14028ac)
		HX_STACK_THIS(this)
		HX_STACK_LINE(139)
		this->prevButton = null();
		HX_STACK_LINE(140)
		this->nextButton = null();
		HX_STACK_LINE(141)
		this->prevButtonOffset->put();
		HX_STACK_LINE(142)
		this->nextButtonOffset->put();
		HX_STACK_LINE(143)
		this->prevButtonOffset = null();
		HX_STACK_LINE(144)
		this->nextButtonOffset = null();
		HX_STACK_LINE(145)
		this->super::destroy();
	}
return null();
}


Void FlxUIList_obj::setSize( Float W,Float H){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIList","setSize",0x9b350d68,"flixel.addons.ui.FlxUIList.setSize","flixel/addons/ui/FlxUIList.hx",148,0xc14028ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(W,"W")
		HX_STACK_ARG(H,"H")
		HX_STACK_LINE(149)
		bool flip = false;		HX_STACK_VAR(flip,"flip");
		HX_STACK_LINE(150)
		if (((this->_skipRefresh == false))){
			HX_STACK_LINE(151)
			this->_skipRefresh = true;
			HX_STACK_LINE(152)
			flip = true;
		}
		HX_STACK_LINE(154)
		this->set_width(W);
		HX_STACK_LINE(155)
		this->set_height(H);
		HX_STACK_LINE(156)
		if ((flip)){
			HX_STACK_LINE(157)
			this->_skipRefresh = false;
		}
		HX_STACK_LINE(159)
		this->refreshList();
	}
return null();
}


Dynamic FlxUIList_obj::add( Dynamic _tmp_Object){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIList","add",0x65000786,"flixel.addons.ui.FlxUIList.add","flixel/addons/ui/FlxUIList.hx",162,0xc14028ac)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_tmp_Object,"_tmp_Object")
	HX_STACK_LINE(163)
	::flixel::FlxSprite Object = _tmp_Object;		HX_STACK_VAR(Object,"Object");
	HX_STACK_LINE(163)
	this->super::add(Object);
	HX_STACK_LINE(164)
	this->refreshList();
	HX_STACK_LINE(165)
	return Object;
}


::flixel::FlxSprite FlxUIList_obj::safeAdd( ::flixel::FlxSprite Object){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIList","safeAdd",0xfdf2e6b9,"flixel.addons.ui.FlxUIList.safeAdd","flixel/addons/ui/FlxUIList.hx",172,0xc14028ac)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(172)
	return this->super::add(Object);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIList_obj,safeAdd,return )

::String FlxUIList_obj::getMoreString( int i){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIList","getMoreString",0x93c9dc21,"flixel.addons.ui.FlxUIList.getMoreString","flixel/addons/ui/FlxUIList.hx",178,0xc14028ac)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(179)
	::String newString = this->moreString;		HX_STACK_VAR(newString,"newString");
	HX_STACK_LINE(180)
	while((true)){
		HX_STACK_LINE(180)
		int _g = newString.indexOf(HX_CSTRING("<X>"),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(180)
		if ((!(((_g != (int)-1))))){
			HX_STACK_LINE(180)
			break;
		}
		HX_STACK_LINE(181)
		::String _g1 = ::Std_obj::string(i);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(181)
		::String _g2 = ::StringTools_obj::replace(newString,HX_CSTRING("<X>"),_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(181)
		newString = _g2;
	}
	HX_STACK_LINE(183)
	return newString;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIList_obj,getMoreString,return )

bool FlxUIList_obj::set_visible( bool Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIList","set_visible",0x451d61fa,"flixel.addons.ui.FlxUIList.set_visible","flixel/addons/ui/FlxUIList.hx",187,0xc14028ac)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(188)
	this->super::set_visible(Value);
	HX_STACK_LINE(189)
	this->refreshList();
	HX_STACK_LINE(190)
	return Value;
}


Void FlxUIList_obj::onClick( int i){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIList","onClick",0x67f9468e,"flixel.addons.ui.FlxUIList.onClick","flixel/addons/ui/FlxUIList.hx",193,0xc14028ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(194)
		{
			HX_STACK_LINE(194)
			::flixel::addons::ui::FlxUIList _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(194)
			_g->set_scrollIndex((_g->scrollIndex + i));
		}
		HX_STACK_LINE(195)
		this->refreshList();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIList_obj,onClick,(void))

Void FlxUIList_obj::refreshList( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIList","refreshList",0x4de02e3e,"flixel.addons.ui.FlxUIList.refreshList","flixel/addons/ui/FlxUIList.hx",198,0xc14028ac)
		HX_STACK_THIS(this)
		HX_STACK_LINE(199)
		if ((this->_skipRefresh)){
			HX_STACK_LINE(200)
			return null();
		}
		HX_STACK_LINE(203)
		this->autoBounds = false;
		HX_STACK_LINE(205)
		int _g = this->group->members->__Field(HX_CSTRING("indexOf"),true)(this->prevButton,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(205)
		if (((_g != (int)-1))){
			HX_STACK_LINE(206)
			this->remove(this->prevButton,true);
		}
		HX_STACK_LINE(208)
		int _g1 = this->group->members->__Field(HX_CSTRING("indexOf"),true)(this->nextButton,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(208)
		if (((_g1 != (int)-1))){
			HX_STACK_LINE(209)
			this->remove(this->nextButton,true);
		}
		HX_STACK_LINE(212)
		Float XX = (int)0;		HX_STACK_VAR(XX,"XX");
		HX_STACK_LINE(213)
		Float YY = (int)0;		HX_STACK_VAR(YY,"YY");
		HX_STACK_LINE(215)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(216)
		bool inBounds = true;		HX_STACK_VAR(inBounds,"inBounds");
		HX_STACK_LINE(218)
		if (((this->stacking == (int)0))){
			HX_STACK_LINE(219)
			Float _g2 = this->prevButton->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(219)
			Float _g3 = (this->prevButtonOffset->x - _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(219)
			Float _g4 = (_g3 - (int)2);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(219)
			this->prevButton->__Field(HX_CSTRING("set_x"),true)(_g4);
			HX_STACK_LINE(220)
			this->prevButton->__Field(HX_CSTRING("set_y"),true)(this->prevButtonOffset->y);
			HX_STACK_LINE(221)
			Float _g5 = this->get_width();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(221)
			Float _g6 = (this->nextButtonOffset->x + _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(221)
			Float _g7 = (_g6 + (int)2);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(221)
			this->nextButton->__Field(HX_CSTRING("set_x"),true)(_g7);
			HX_STACK_LINE(222)
			this->nextButton->__Field(HX_CSTRING("set_y"),true)(this->nextButtonOffset->y);
		}
		else{
			HX_STACK_LINE(224)
			this->prevButton->__Field(HX_CSTRING("set_x"),true)(this->prevButtonOffset->x);
			HX_STACK_LINE(225)
			Float _g8 = this->prevButton->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(225)
			Float _g9 = (this->prevButtonOffset->y - _g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(225)
			Float _g10 = (_g9 - (int)2);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(225)
			this->prevButton->__Field(HX_CSTRING("set_y"),true)(_g10);
			HX_STACK_LINE(226)
			this->nextButton->__Field(HX_CSTRING("set_x"),true)(this->nextButtonOffset->x);
			HX_STACK_LINE(227)
			Float _g11 = this->get_height();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(227)
			Float _g12 = (this->nextButtonOffset->y + _g11);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(227)
			Float _g13 = (_g12 + (int)2);		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(227)
			this->nextButton->__Field(HX_CSTRING("set_y"),true)(_g13);
		}
		HX_STACK_LINE(230)
		int highestIndex = (int)0;		HX_STACK_VAR(highestIndex,"highestIndex");
		HX_STACK_LINE(232)
		{
			HX_STACK_LINE(232)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(232)
			Array< ::Dynamic > _g11 = this->group->members;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(232)
			while((true)){
				HX_STACK_LINE(232)
				if ((!(((_g2 < _g11->length))))){
					HX_STACK_LINE(232)
					break;
				}
				HX_STACK_LINE(232)
				::flixel::FlxSprite widget = _g11->__get(_g2).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(widget,"widget");
				HX_STACK_LINE(232)
				++(_g2);
				HX_STACK_LINE(233)
				inBounds = false;
				HX_STACK_LINE(234)
				if (((i >= this->scrollIndex))){
					HX_STACK_LINE(236)
					if (((this->stacking == (int)1))){
						HX_STACK_LINE(237)
						Float _g14 = widget->get_height();		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(237)
						Float _g15 = (YY + _g14);		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(237)
						Float _g16 = this->get_height();		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(237)
						bool _g18;		HX_STACK_VAR(_g18,"_g18");
						HX_STACK_LINE(237)
						if ((!(((_g15 <= _g16))))){
							HX_STACK_LINE(237)
							Float _g17 = this->get_height();		HX_STACK_VAR(_g17,"_g17");
							HX_STACK_LINE(237)
							_g18 = (_g17 <= (int)0);
						}
						else{
							HX_STACK_LINE(237)
							_g18 = true;
						}
						HX_STACK_LINE(237)
						inBounds = _g18;
					}
					else{
						HX_STACK_LINE(239)
						Float _g19 = widget->get_width();		HX_STACK_VAR(_g19,"_g19");
						HX_STACK_LINE(239)
						Float _g20 = (XX + _g19);		HX_STACK_VAR(_g20,"_g20");
						HX_STACK_LINE(239)
						Float _g21 = this->get_width();		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(239)
						bool _g23;		HX_STACK_VAR(_g23,"_g23");
						HX_STACK_LINE(239)
						if ((!(((_g20 <= _g21))))){
							HX_STACK_LINE(239)
							Float _g22 = this->get_width();		HX_STACK_VAR(_g22,"_g22");
							HX_STACK_LINE(239)
							_g23 = (_g22 <= (int)0);
						}
						else{
							HX_STACK_LINE(239)
							_g23 = true;
						}
						HX_STACK_LINE(239)
						inBounds = _g23;
					}
				}
				HX_STACK_LINE(242)
				if ((inBounds)){
					HX_STACK_LINE(244)
					highestIndex = i;
					HX_STACK_LINE(245)
					bool _g24 = widget->set_active(true);		HX_STACK_VAR(_g24,"_g24");
					HX_STACK_LINE(245)
					widget->set_visible(_g24);
					HX_STACK_LINE(246)
					widget->set_x((this->x + XX));
					HX_STACK_LINE(247)
					widget->set_y((this->y + YY));
					HX_STACK_LINE(248)
					if (((this->stacking == (int)1))){
						HX_STACK_LINE(250)
						Float _g25 = widget->get_height();		HX_STACK_VAR(_g25,"_g25");
						HX_STACK_LINE(250)
						Float _g26 = (_g25 + this->spacing);		HX_STACK_VAR(_g26,"_g26");
						HX_STACK_LINE(250)
						hx::AddEq(YY,_g26);
					}
					else{
						HX_STACK_LINE(254)
						Float _g27 = widget->get_width();		HX_STACK_VAR(_g27,"_g27");
						HX_STACK_LINE(254)
						Float _g28 = (_g27 + this->spacing);		HX_STACK_VAR(_g28,"_g28");
						HX_STACK_LINE(254)
						hx::AddEq(XX,_g28);
					}
				}
				else{
					HX_STACK_LINE(259)
					Float _g29 = widget->set_y((int)0);		HX_STACK_VAR(_g29,"_g29");
					HX_STACK_LINE(259)
					widget->set_x(_g29);
					HX_STACK_LINE(260)
					bool _g30 = widget->set_active(false);		HX_STACK_VAR(_g30,"_g30");
					HX_STACK_LINE(260)
					widget->set_visible(_g30);
				}
				HX_STACK_LINE(262)
				(i)++;
			}
		}
		HX_STACK_LINE(265)
		this->amountPrevious = this->scrollIndex;
		HX_STACK_LINE(266)
		this->amountNext = (this->group->members->__Field(HX_CSTRING("length"),true) - ((highestIndex + (int)1)));
		HX_STACK_LINE(268)
		::flixel::addons::ui::FlxUIButton fuibutton;		HX_STACK_VAR(fuibutton,"fuibutton");
		HX_STACK_LINE(270)
		if (((this->amountPrevious > (int)0))){
			HX_STACK_LINE(271)
			this->safeAdd(this->prevButton);
			HX_STACK_LINE(272)
			if ((::Std_obj::is(this->prevButton,hx::ClassOf< ::flixel::addons::ui::FlxUIButton >()))){
				HX_STACK_LINE(273)
				fuibutton = this->prevButton;
				HX_STACK_LINE(274)
				::String _g31 = this->getMoreString(this->amountPrevious);		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(274)
				fuibutton->label->__Field(HX_CSTRING("set_text"),true)(_g31);
			}
		}
		HX_STACK_LINE(277)
		if (((this->amountNext > (int)0))){
			HX_STACK_LINE(278)
			this->safeAdd(this->nextButton);
			HX_STACK_LINE(279)
			if ((::Std_obj::is(this->nextButton,hx::ClassOf< ::flixel::addons::ui::FlxUIButton >()))){
				HX_STACK_LINE(280)
				fuibutton = this->nextButton;
				HX_STACK_LINE(281)
				::String _g32 = this->getMoreString(this->amountNext);		HX_STACK_VAR(_g32,"_g32");
				HX_STACK_LINE(281)
				fuibutton->label->__Field(HX_CSTRING("set_text"),true)(_g32);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIList_obj,refreshList,(void))

Float FlxUIList_obj::get_width( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIList","get_width",0x89f7c182,"flixel.addons.ui.FlxUIList.get_width","flixel/addons/ui/FlxUIList.hx",287,0xc14028ac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(287)
	return this->width;
}


Float FlxUIList_obj::get_height( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIList","get_height",0xe52108eb,"flixel.addons.ui.FlxUIList.get_height","flixel/addons/ui/FlxUIList.hx",291,0xc14028ac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(291)
	return this->height;
}


Float FlxUIList_obj::set_width( Float W){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIList","set_width",0x6d48ad8e,"flixel.addons.ui.FlxUIList.set_width","flixel/addons/ui/FlxUIList.hx",294,0xc14028ac)
	HX_STACK_THIS(this)
	HX_STACK_ARG(W,"W")
	HX_STACK_LINE(295)
	this->width = W;
	HX_STACK_LINE(296)
	this->refreshList();
	HX_STACK_LINE(297)
	return W;
}


Float FlxUIList_obj::set_height( Float H){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIList","set_height",0xe89ea75f,"flixel.addons.ui.FlxUIList.set_height","flixel/addons/ui/FlxUIList.hx",300,0xc14028ac)
	HX_STACK_THIS(this)
	HX_STACK_ARG(H,"H")
	HX_STACK_LINE(301)
	this->height = H;
	HX_STACK_LINE(302)
	this->refreshList();
	HX_STACK_LINE(303)
	return H;
}


int FlxUIList_obj::STACK_HORIZONTAL;

int FlxUIList_obj::STACK_VERTICAL;


FlxUIList_obj::FlxUIList_obj()
{
}

void FlxUIList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIList);
	HX_MARK_MEMBER_NAME(scrollIndex,"scrollIndex");
	HX_MARK_MEMBER_NAME(stacking,"stacking");
	HX_MARK_MEMBER_NAME(spacing,"spacing");
	HX_MARK_MEMBER_NAME(prevButtonOffset,"prevButtonOffset");
	HX_MARK_MEMBER_NAME(nextButtonOffset,"nextButtonOffset");
	HX_MARK_MEMBER_NAME(prevButton,"prevButton");
	HX_MARK_MEMBER_NAME(nextButton,"nextButton");
	HX_MARK_MEMBER_NAME(moreString,"moreString");
	HX_MARK_MEMBER_NAME(amountPrevious,"amountPrevious");
	HX_MARK_MEMBER_NAME(amountNext,"amountNext");
	HX_MARK_MEMBER_NAME(_skipRefresh,"_skipRefresh");
	::flixel::addons::ui::FlxUIGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(scrollIndex,"scrollIndex");
	HX_VISIT_MEMBER_NAME(stacking,"stacking");
	HX_VISIT_MEMBER_NAME(spacing,"spacing");
	HX_VISIT_MEMBER_NAME(prevButtonOffset,"prevButtonOffset");
	HX_VISIT_MEMBER_NAME(nextButtonOffset,"nextButtonOffset");
	HX_VISIT_MEMBER_NAME(prevButton,"prevButton");
	HX_VISIT_MEMBER_NAME(nextButton,"nextButton");
	HX_VISIT_MEMBER_NAME(moreString,"moreString");
	HX_VISIT_MEMBER_NAME(amountPrevious,"amountPrevious");
	HX_VISIT_MEMBER_NAME(amountNext,"amountNext");
	HX_VISIT_MEMBER_NAME(_skipRefresh,"_skipRefresh");
	::flixel::addons::ui::FlxUIGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUIList_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"spacing") ) { return spacing; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		if (HX_FIELD_EQ(inName,"safeAdd") ) { return safeAdd_dyn(); }
		if (HX_FIELD_EQ(inName,"onClick") ) { return onClick_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stacking") ) { return stacking; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"prevButton") ) { return prevButton; }
		if (HX_FIELD_EQ(inName,"nextButton") ) { return nextButton; }
		if (HX_FIELD_EQ(inName,"moreString") ) { return moreString; }
		if (HX_FIELD_EQ(inName,"amountNext") ) { return amountNext; }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scrollIndex") ) { return scrollIndex; }
		if (HX_FIELD_EQ(inName,"set_spacing") ) { return set_spacing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"refreshList") ) { return refreshList_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_stacking") ) { return set_stacking_dyn(); }
		if (HX_FIELD_EQ(inName,"_skipRefresh") ) { return _skipRefresh; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getMoreString") ) { return getMoreString_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_moreString") ) { return set_moreString_dyn(); }
		if (HX_FIELD_EQ(inName,"amountPrevious") ) { return amountPrevious; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_scrollIndex") ) { return set_scrollIndex_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"prevButtonOffset") ) { return prevButtonOffset; }
		if (HX_FIELD_EQ(inName,"nextButtonOffset") ) { return nextButtonOffset; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUIList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"spacing") ) { if (inCallProp) return set_spacing(inValue);spacing=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stacking") ) { if (inCallProp) return set_stacking(inValue);stacking=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"prevButton") ) { prevButton=inValue.Cast< ::flixel::addons::ui::interfaces::IFlxUIButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextButton") ) { nextButton=inValue.Cast< ::flixel::addons::ui::interfaces::IFlxUIButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moreString") ) { if (inCallProp) return set_moreString(inValue);moreString=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"amountNext") ) { amountNext=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scrollIndex") ) { if (inCallProp) return set_scrollIndex(inValue);scrollIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_skipRefresh") ) { _skipRefresh=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"amountPrevious") ) { amountPrevious=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"prevButtonOffset") ) { prevButtonOffset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextButtonOffset") ) { nextButtonOffset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUIList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("scrollIndex"));
	outFields->push(HX_CSTRING("stacking"));
	outFields->push(HX_CSTRING("spacing"));
	outFields->push(HX_CSTRING("prevButtonOffset"));
	outFields->push(HX_CSTRING("nextButtonOffset"));
	outFields->push(HX_CSTRING("prevButton"));
	outFields->push(HX_CSTRING("nextButton"));
	outFields->push(HX_CSTRING("moreString"));
	outFields->push(HX_CSTRING("amountPrevious"));
	outFields->push(HX_CSTRING("amountNext"));
	outFields->push(HX_CSTRING("_skipRefresh"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("STACK_HORIZONTAL"),
	HX_CSTRING("STACK_VERTICAL"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxUIList_obj,scrollIndex),HX_CSTRING("scrollIndex")},
	{hx::fsInt,(int)offsetof(FlxUIList_obj,stacking),HX_CSTRING("stacking")},
	{hx::fsFloat,(int)offsetof(FlxUIList_obj,spacing),HX_CSTRING("spacing")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxUIList_obj,prevButtonOffset),HX_CSTRING("prevButtonOffset")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxUIList_obj,nextButtonOffset),HX_CSTRING("nextButtonOffset")},
	{hx::fsObject /*::flixel::addons::ui::interfaces::IFlxUIButton*/ ,(int)offsetof(FlxUIList_obj,prevButton),HX_CSTRING("prevButton")},
	{hx::fsObject /*::flixel::addons::ui::interfaces::IFlxUIButton*/ ,(int)offsetof(FlxUIList_obj,nextButton),HX_CSTRING("nextButton")},
	{hx::fsString,(int)offsetof(FlxUIList_obj,moreString),HX_CSTRING("moreString")},
	{hx::fsInt,(int)offsetof(FlxUIList_obj,amountPrevious),HX_CSTRING("amountPrevious")},
	{hx::fsInt,(int)offsetof(FlxUIList_obj,amountNext),HX_CSTRING("amountNext")},
	{hx::fsBool,(int)offsetof(FlxUIList_obj,_skipRefresh),HX_CSTRING("_skipRefresh")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("scrollIndex"),
	HX_CSTRING("set_scrollIndex"),
	HX_CSTRING("stacking"),
	HX_CSTRING("set_stacking"),
	HX_CSTRING("spacing"),
	HX_CSTRING("set_spacing"),
	HX_CSTRING("prevButtonOffset"),
	HX_CSTRING("nextButtonOffset"),
	HX_CSTRING("prevButton"),
	HX_CSTRING("nextButton"),
	HX_CSTRING("moreString"),
	HX_CSTRING("set_moreString"),
	HX_CSTRING("amountPrevious"),
	HX_CSTRING("amountNext"),
	HX_CSTRING("destroy"),
	HX_CSTRING("setSize"),
	HX_CSTRING("add"),
	HX_CSTRING("safeAdd"),
	HX_CSTRING("_skipRefresh"),
	HX_CSTRING("getMoreString"),
	HX_CSTRING("set_visible"),
	HX_CSTRING("onClick"),
	HX_CSTRING("refreshList"),
	HX_CSTRING("get_width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("set_width"),
	HX_CSTRING("set_height"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIList_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxUIList_obj::STACK_HORIZONTAL,"STACK_HORIZONTAL");
	HX_MARK_MEMBER_NAME(FlxUIList_obj::STACK_VERTICAL,"STACK_VERTICAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIList_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxUIList_obj::STACK_HORIZONTAL,"STACK_HORIZONTAL");
	HX_VISIT_MEMBER_NAME(FlxUIList_obj::STACK_VERTICAL,"STACK_VERTICAL");
};

#endif

Class FlxUIList_obj::__mClass;

void FlxUIList_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxUIList"), hx::TCanCast< FlxUIList_obj> ,sStaticFields,sMemberFields,
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

void FlxUIList_obj::__boot()
{
	STACK_HORIZONTAL= (int)0;
	STACK_VERTICAL= (int)1;
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
