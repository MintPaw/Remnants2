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
#ifndef INCLUDED_flixel_addons_ui_FlxUI9SliceSprite
#include <flixel/addons/ui/FlxUI9SliceSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#include <flixel/addons/ui/FlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITabMenu
#include <flixel/addons/ui/FlxUITabMenu.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
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
#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonEvent
#include <flixel/ui/_FlxButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUITabMenu_obj::__construct(::flixel::FlxSprite back_,Array< ::flixel::addons::ui::interfaces::IFlxUIButton > tabs_,Dynamic tab_ids_and_labels_,::flixel::math::FlxPoint tab_offset,Dynamic __o_stretch_tabs,Dynamic tab_spacing,Array< ::String > tab_stacking)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","new",0xc82b8b31,"flixel.addons.ui.FlxUITabMenu.new","flixel/addons/ui/FlxUITabMenu.hx",20,0x21d3489e)
HX_STACK_THIS(this)
HX_STACK_ARG(back_,"back_")
HX_STACK_ARG(tabs_,"tabs_")
HX_STACK_ARG(tab_ids_and_labels_,"tab_ids_and_labels_")
HX_STACK_ARG(tab_offset,"tab_offset")
HX_STACK_ARG(__o_stretch_tabs,"stretch_tabs")
HX_STACK_ARG(tab_spacing,"tab_spacing")
HX_STACK_ARG(tab_stacking,"tab_stacking")
Dynamic stretch_tabs = __o_stretch_tabs.Default(false);
{
	HX_STACK_LINE(336)
	this->_selected_tab = (int)-1;
	HX_STACK_LINE(335)
	this->_selected_tab_id = HX_CSTRING("");
	HX_STACK_LINE(333)
	this->_tab_offset = null();
	HX_STACK_LINE(332)
	this->_tab_stacking = null();
	HX_STACK_LINE(331)
	this->_tab_spacing = null();
	HX_STACK_LINE(330)
	this->_stretch_tabs = false;
	HX_STACK_LINE(120)
	super::__construct(null(),null());
	HX_STACK_LINE(122)
	if (((back_ == null()))){
		HX_STACK_LINE(124)
		::openfl::_v2::geom::Rectangle _g = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,(int)200,(int)200);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(124)
		::flixel::addons::ui::FlxUI9SliceSprite _g1 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::__new((int)0,(int)0,HX_CSTRING("flixel/flixel-ui/img/chrome_flat.png"),_g,null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(124)
		back_ = _g1;
	}
	HX_STACK_LINE(127)
	this->_back = back_;
	HX_STACK_LINE(128)
	this->add(this->_back);
	HX_STACK_LINE(130)
	if (((tabs_ == null()))){
		HX_STACK_LINE(131)
		if (((tab_ids_and_labels_ != null()))){
			HX_STACK_LINE(132)
			Array< ::flixel::addons::ui::interfaces::IFlxUIButton > _g2 = Array_obj< ::flixel::addons::ui::interfaces::IFlxUIButton >::__new();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(132)
			tabs_ = _g2;
			HX_STACK_LINE(135)
			{
				HX_STACK_LINE(135)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(135)
				while((true)){
					HX_STACK_LINE(135)
					if ((!(((_g < tab_ids_and_labels_->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(135)
						break;
					}
					HX_STACK_LINE(135)
					Dynamic tdata = tab_ids_and_labels_->__GetItem(_g);		HX_STACK_VAR(tdata,"tdata");
					HX_STACK_LINE(135)
					++(_g);
					HX_STACK_LINE(137)
					::flixel::addons::ui::FlxUIButton fb = ::flixel::addons::ui::FlxUIButton_obj::__new((int)0,(int)0,tdata->__Field(HX_CSTRING("label"),true),null());		HX_STACK_VAR(fb,"fb");
					HX_STACK_LINE(140)
					fb->up_color = (int)16777215;
					HX_STACK_LINE(141)
					fb->down_color = (int)16777215;
					HX_STACK_LINE(142)
					fb->over_color = (int)16777215;
					HX_STACK_LINE(143)
					fb->up_toggle_color = (int)16777215;
					HX_STACK_LINE(144)
					fb->down_toggle_color = (int)16777215;
					HX_STACK_LINE(145)
					fb->over_toggle_color = (int)16777215;
					HX_STACK_LINE(147)
					fb->label->__Field(HX_CSTRING("set_color"),true)((int)16777215);
					HX_STACK_LINE(148)
					{
						HX_STACK_LINE(148)
						::flixel::addons::ui::FlxUIText _this = fb->label;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(148)
						int Color = (int)0;		HX_STACK_VAR(Color,"Color");
						HX_STACK_LINE(148)
						Float Size = (int)1;		HX_STACK_VAR(Size,"Size");
						HX_STACK_LINE(148)
						Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
						HX_STACK_LINE(148)
						_this->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE);
						HX_STACK_LINE(148)
						_this->set_borderColor(Color);
						HX_STACK_LINE(148)
						_this->set_borderSize(Size);
						HX_STACK_LINE(148)
						_this->set_borderQuality(Quality);
					}
					HX_STACK_LINE(150)
					fb->id = tdata->__Field(HX_CSTRING("id"),true);
					HX_STACK_LINE(153)
					Array< ::String > graphic_ids = Array_obj< ::String >::__new().Add(HX_CSTRING("flixel/flixel-ui/img/tab_back.png")).Add(HX_CSTRING("flixel/flixel-ui/img/tab_back.png")).Add(HX_CSTRING("flixel/flixel-ui/img/tab_back.png")).Add(HX_CSTRING("flixel/flixel-ui/img/tab.png")).Add(HX_CSTRING("flixel/flixel-ui/img/tab.png")).Add(HX_CSTRING("flixel/flixel-ui/img/tab.png"));		HX_STACK_VAR(graphic_ids,"graphic_ids");
					HX_STACK_LINE(154)
					Array< int > slice9tab = ::flixel::util::FlxStringUtil_obj::toIntArray(HX_CSTRING("6,6,11,11"));		HX_STACK_VAR(slice9tab,"slice9tab");
					HX_STACK_LINE(155)
					Array< ::Dynamic > slice9_ids = Array_obj< ::Dynamic >::__new().Add(slice9tab).Add(slice9tab).Add(slice9tab).Add(slice9tab).Add(slice9tab).Add(slice9tab);		HX_STACK_VAR(slice9_ids,"slice9_ids");
					HX_STACK_LINE(156)
					fb->loadGraphicSlice9(graphic_ids,(int)0,(int)0,slice9_ids,(int)0,(int)-1,true,null(),null(),null());
					HX_STACK_LINE(157)
					tabs_->push(fb);
				}
			}
		}
	}
	HX_STACK_LINE(162)
	this->_tabs = tabs_;
	HX_STACK_LINE(163)
	this->_stretch_tabs = stretch_tabs;
	HX_STACK_LINE(164)
	this->_tab_spacing = tab_spacing;
	HX_STACK_LINE(165)
	this->_tab_stacking = tab_stacking;
	HX_STACK_LINE(166)
	if (((this->_tab_stacking == null()))){
		HX_STACK_LINE(167)
		this->_tab_stacking = Array_obj< ::String >::__new().Add(HX_CSTRING("front")).Add(HX_CSTRING("back"));
	}
	HX_STACK_LINE(169)
	this->_tab_offset = tab_offset;
	HX_STACK_LINE(171)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(172)
	::flixel::addons::ui::FlxUITypedButton tab = null();		HX_STACK_VAR(tab,"tab");
	HX_STACK_LINE(173)
	{
		HX_STACK_LINE(173)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(173)
		Array< ::flixel::addons::ui::interfaces::IFlxUIButton > _g1 = this->_tabs;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(173)
		while((true)){
			HX_STACK_LINE(173)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(173)
				break;
			}
			HX_STACK_LINE(173)
			::flixel::addons::ui::interfaces::IFlxUIButton t = _g1->__get(_g);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(173)
			++(_g);
			HX_STACK_LINE(175)
			tab = t;
			HX_STACK_LINE(176)
			this->add(tab);
			HX_STACK_LINE(177)
			Dynamic _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(177)
			{
				HX_STACK_LINE(177)
				Dynamic f = Dynamic( Array_obj<Dynamic>::__new().Add(this->_onTabEvent_dyn()));		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(177)
				Array< ::String > id = Array_obj< ::String >::__new().Add(tab->id);		HX_STACK_VAR(id,"id");

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Dynamic,f,Array< ::String >,id)
				Void run(){
					HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","flixel/addons/ui/FlxUITabMenu.hx",177,0x21d3489e)
					{
						HX_STACK_LINE(177)
						return null(f->__GetItem((int)0)(id->__get((int)0)).Cast< Void >());
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(177)
				_g3 =  Dynamic(new _Function_4_1(f,id));
			}
			HX_STACK_LINE(177)
			tab->onUp->callback = _g3;
			HX_STACK_LINE(178)
			(i)++;
		}
	}
	HX_STACK_LINE(181)
	this->distributeTabs(null());
	HX_STACK_LINE(183)
	Array< ::Dynamic > _g4 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(183)
	this->_tab_groups = _g4;
}
;
	return null();
}

//FlxUITabMenu_obj::~FlxUITabMenu_obj() { }

Dynamic FlxUITabMenu_obj::__CreateEmpty() { return  new FlxUITabMenu_obj; }
hx::ObjectPtr< FlxUITabMenu_obj > FlxUITabMenu_obj::__new(::flixel::FlxSprite back_,Array< ::flixel::addons::ui::interfaces::IFlxUIButton > tabs_,Dynamic tab_ids_and_labels_,::flixel::math::FlxPoint tab_offset,Dynamic __o_stretch_tabs,Dynamic tab_spacing,Array< ::String > tab_stacking)
{  hx::ObjectPtr< FlxUITabMenu_obj > result = new FlxUITabMenu_obj();
	result->__construct(back_,tabs_,tab_ids_and_labels_,tab_offset,__o_stretch_tabs,tab_spacing,tab_stacking);
	return result;}

Dynamic FlxUITabMenu_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUITabMenu_obj > result = new FlxUITabMenu_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

hx::Object *FlxUITabMenu_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::addons::ui::interfaces::IEventGetter_obj)) return operator ::flixel::addons::ui::interfaces::IEventGetter_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIClickable_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IResizable_obj)) return operator ::flixel::addons::ui::interfaces::IResizable_obj *();
	return super::__ToInterface(inType);
}

int FlxUITabMenu_obj::get_numTabs( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","get_numTabs",0xbaaa29cc,"flixel.addons.ui.FlxUITabMenu.get_numTabs","flixel/addons/ui/FlxUITabMenu.hx",29,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	if (((this->_tabs != null()))){
		HX_STACK_LINE(32)
		return this->_tabs->length;
	}
	HX_STACK_LINE(34)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITabMenu_obj,get_numTabs,return )

Void FlxUITabMenu_obj::getEvent( ::String name,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,Dynamic params){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","getEvent",0x34184733,"flixel.addons.ui.FlxUITabMenu.getEvent","flixel/addons/ui/FlxUITabMenu.hx",38,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(sender,"sender")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(params,"params")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxUITabMenu_obj,getEvent,(void))

Dynamic FlxUITabMenu_obj::getRequest( ::String name,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,Dynamic params){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","getRequest",0xde0916a8,"flixel.addons.ui.FlxUITabMenu.getRequest","flixel/addons/ui/FlxUITabMenu.hx",44,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(sender,"sender")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(44)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxUITabMenu_obj,getRequest,return )

bool FlxUITabMenu_obj::set_skipButtonUpdate( bool b){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","set_skipButtonUpdate",0x94812946,"flixel.addons.ui.FlxUITabMenu.set_skipButtonUpdate","flixel/addons/ui/FlxUITabMenu.hx",50,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(51)
	this->skipButtonUpdate = b;
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(52)
		Array< ::flixel::addons::ui::interfaces::IFlxUIButton > _g1 = this->_tabs;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(52)
			::flixel::addons::ui::interfaces::IFlxUIButton tab = _g1->__get(_g);		HX_STACK_VAR(tab,"tab");
			HX_STACK_LINE(52)
			++(_g);
			HX_STACK_LINE(53)
			::flixel::addons::ui::FlxUITypedButton tabtyped = tab;		HX_STACK_VAR(tabtyped,"tabtyped");
			HX_STACK_LINE(54)
			tabtyped->set_skipButtonUpdate(b);
		}
	}
	HX_STACK_LINE(56)
	::flixel::addons::ui::FlxUIGroup group;		HX_STACK_VAR(group,"group");
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(57)
		Array< ::Dynamic > _g1 = this->_tab_groups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(57)
		while((true)){
			HX_STACK_LINE(57)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(57)
				break;
			}
			HX_STACK_LINE(57)
			::flixel::addons::ui::FlxUIGroup group1 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIGroup >();		HX_STACK_VAR(group1,"group1");
			HX_STACK_LINE(57)
			++(_g);
			HX_STACK_LINE(58)
			::flixel::FlxSprite sprite;		HX_STACK_VAR(sprite,"sprite");
			HX_STACK_LINE(59)
			{
				HX_STACK_LINE(59)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(59)
				Array< ::Dynamic > _g3 = group1->group->members;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(59)
				while((true)){
					HX_STACK_LINE(59)
					if ((!(((_g2 < _g3->length))))){
						HX_STACK_LINE(59)
						break;
					}
					HX_STACK_LINE(59)
					::flixel::FlxSprite sprite1 = _g3->__get(_g2).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(sprite1,"sprite1");
					HX_STACK_LINE(59)
					++(_g2);
					HX_STACK_LINE(60)
					if ((::Std_obj::is(sprite1,hx::ClassOf< ::flixel::addons::ui::interfaces::IFlxUIClickable >()))){
						HX_STACK_LINE(61)
						::flixel::addons::ui::interfaces::IFlxUIClickable widget = sprite1;		HX_STACK_VAR(widget,"widget");
						HX_STACK_LINE(62)
						widget->__Field(HX_CSTRING("set_skipButtonUpdate"),true)(b);
					}
				}
			}
		}
	}
	HX_STACK_LINE(66)
	return b;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,set_skipButtonUpdate,return )

Float FlxUITabMenu_obj::get_width( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","get_width",0x5c713fee,"flixel.addons.ui.FlxUITabMenu.get_width","flixel/addons/ui/FlxUITabMenu.hx",72,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	return this->_back->get_width();
}


Float FlxUITabMenu_obj::get_height( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","get_height",0x3cf628ff,"flixel.addons.ui.FlxUITabMenu.get_height","flixel/addons/ui/FlxUITabMenu.hx",75,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(76)
	::flixel::addons::ui::interfaces::IFlxUIButton fbt = this->getFirstTab();		HX_STACK_VAR(fbt,"fbt");
	HX_STACK_LINE(77)
	if (((fbt != null()))){
		HX_STACK_LINE(78)
		Float _g = this->_back->get_height();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(78)
		Float _g1 = (this->_back->y + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(78)
		return (_g1 - fbt->__Field(HX_CSTRING("y"),true));
	}
	HX_STACK_LINE(80)
	return this->_back->get_height();
}


Void FlxUITabMenu_obj::resize( Float W,Float H){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","resize",0xfcd977c3,"flixel.addons.ui.FlxUITabMenu.resize","flixel/addons/ui/FlxUITabMenu.hx",83,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(W,"W")
		HX_STACK_ARG(H,"H")
		HX_STACK_LINE(84)
		::flixel::addons::ui::interfaces::IResizable ir;		HX_STACK_VAR(ir,"ir");
		HX_STACK_LINE(85)
		if ((::Std_obj::is(this->_back,hx::ClassOf< ::flixel::addons::ui::interfaces::IResizable >()))){
			HX_STACK_LINE(87)
			this->distributeTabs(W);
			HX_STACK_LINE(88)
			ir = this->_back;
			HX_STACK_LINE(89)
			::flixel::addons::ui::FlxUITypedButton fbt = this->getFirstTab();		HX_STACK_VAR(fbt,"fbt");
			HX_STACK_LINE(90)
			if (((fbt != null()))){
				HX_STACK_LINE(91)
				Float _g = fbt->get_height();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(91)
				Float _g1 = (H - _g);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(91)
				ir->resize(W,_g1);
			}
			else{
				HX_STACK_LINE(93)
				ir->resize(W,H);
			}
		}
		else{
			HX_STACK_LINE(98)
			this->distributeTabs(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITabMenu_obj,resize,(void))

int FlxUITabMenu_obj::get_selected_tab( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","get_selected_tab",0xa5609649,"flixel.addons.ui.FlxUITabMenu.get_selected_tab","flixel/addons/ui/FlxUITabMenu.hx",103,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(103)
	return this->_selected_tab;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITabMenu_obj,get_selected_tab,return )

int FlxUITabMenu_obj::set_selected_tab( int i){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","set_selected_tab",0xfba283bd,"flixel.addons.ui.FlxUITabMenu.set_selected_tab","flixel/addons/ui/FlxUITabMenu.hx",104,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(105)
	this->showTabInt(i);
	HX_STACK_LINE(106)
	return this->_selected_tab;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,set_selected_tab,return )

::String FlxUITabMenu_obj::get_selected_tab_id( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","get_selected_tab_id",0x4d2a2f51,"flixel.addons.ui.FlxUITabMenu.get_selected_tab_id","flixel/addons/ui/FlxUITabMenu.hx",110,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(110)
	return this->_selected_tab_id;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITabMenu_obj,get_selected_tab_id,return )

::String FlxUITabMenu_obj::set_selected_tab_id( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","set_selected_tab_id",0x89c7225d,"flixel.addons.ui.FlxUITabMenu.set_selected_tab_id","flixel/addons/ui/FlxUITabMenu.hx",111,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(112)
	this->showTabId(str);
	HX_STACK_LINE(113)
	return this->_selected_tab_id;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,set_selected_tab_id,return )

Void FlxUITabMenu_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","destroy",0x0282244b,"flixel.addons.ui.FlxUITabMenu.destroy","flixel/addons/ui/FlxUITabMenu.hx",186,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(187)
		this->super::destroy();
		HX_STACK_LINE(188)
		::flixel::addons::ui::U_obj::clearArray(this->_tab_groups);
		HX_STACK_LINE(189)
		::flixel::addons::ui::U_obj::clearArray(this->_tabs);
		HX_STACK_LINE(190)
		this->_back = null();
		HX_STACK_LINE(191)
		this->_tabs = null();
		HX_STACK_LINE(192)
		this->_tab_groups = null();
	}
return null();
}


::flixel::addons::ui::interfaces::IFlxUIButton FlxUITabMenu_obj::getTab( ::String id,Dynamic index){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","getTab",0x9785b12e,"flixel.addons.ui.FlxUITabMenu.getTab","flixel/addons/ui/FlxUITabMenu.hx",195,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(196)
	if (((id != null()))){
		HX_STACK_LINE(197)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(197)
		Array< ::flixel::addons::ui::interfaces::IFlxUIButton > _g1 = this->_tabs;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(197)
		while((true)){
			HX_STACK_LINE(197)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(197)
				break;
			}
			HX_STACK_LINE(197)
			::flixel::addons::ui::interfaces::IFlxUIButton tab = _g1->__get(_g);		HX_STACK_VAR(tab,"tab");
			HX_STACK_LINE(197)
			++(_g);
			HX_STACK_LINE(198)
			if (((tab->__Field(HX_CSTRING("id"),true) == id))){
				HX_STACK_LINE(199)
				return tab;
			}
		}
	}
	HX_STACK_LINE(203)
	if (((index != null()))){
		HX_STACK_LINE(204)
		if (((index < this->_tabs->length))){
			HX_STACK_LINE(205)
			return this->_tabs->__get(index);
		}
	}
	HX_STACK_LINE(208)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITabMenu_obj,getTab,return )

::flixel::addons::ui::FlxUIGroup FlxUITabMenu_obj::getTabGroup( ::String id,Dynamic index){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","getTabGroup",0xc2c56b31,"flixel.addons.ui.FlxUITabMenu.getTabGroup","flixel/addons/ui/FlxUITabMenu.hx",211,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(212)
	::flixel::addons::ui::FlxUIGroup tabGroup;		HX_STACK_VAR(tabGroup,"tabGroup");
	HX_STACK_LINE(213)
	if (((id != null()))){
		HX_STACK_LINE(214)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(214)
		Array< ::Dynamic > _g1 = this->_tab_groups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(214)
		while((true)){
			HX_STACK_LINE(214)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(214)
				break;
			}
			HX_STACK_LINE(214)
			::flixel::addons::ui::FlxUIGroup tabGroup1 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIGroup >();		HX_STACK_VAR(tabGroup1,"tabGroup1");
			HX_STACK_LINE(214)
			++(_g);
			HX_STACK_LINE(215)
			if (((tabGroup1->id == id))){
				HX_STACK_LINE(216)
				return tabGroup1;
			}
		}
	}
	HX_STACK_LINE(220)
	if (((index != null()))){
		HX_STACK_LINE(221)
		if (((index < this->_tab_groups->length))){
			HX_STACK_LINE(222)
			return this->_tab_groups->__get(index).StaticCast< ::flixel::addons::ui::FlxUIGroup >();
		}
	}
	HX_STACK_LINE(225)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITabMenu_obj,getTabGroup,return )

Void FlxUITabMenu_obj::addGroup( ::flixel::addons::ui::FlxUIGroup g){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","addGroup",0x71ce48ed,"flixel.addons.ui.FlxUITabMenu.addGroup","flixel/addons/ui/FlxUITabMenu.hx",228,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(g,"g")
		HX_STACK_LINE(229)
		if (((g == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(230)
			return null();
		}
		HX_STACK_LINE(233)
		if ((!(this->hasThis(g)))){
			HX_STACK_LINE(234)
			g->set_y((this->_back->y - this->y));
			HX_STACK_LINE(235)
			this->add(g);
			HX_STACK_LINE(236)
			this->_tab_groups->push(g);
		}
		HX_STACK_LINE(240)
		this->_showOnlyGroup(HX_CSTRING(""));
		HX_STACK_LINE(243)
		if (((this->_tab_groups->length == (int)1))){
			HX_STACK_LINE(244)
			this->set_selected_tab((int)0);
		}
		HX_STACK_LINE(248)
		if (((this->_selected_tab != (int)-1))){
			HX_STACK_LINE(249)
			this->set_selected_tab(this->_selected_tab);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,addGroup,(void))

Void FlxUITabMenu_obj::_onTabEvent( ::String id){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","_onTabEvent",0x28e25eb4,"flixel.addons.ui.FlxUITabMenu._onTabEvent","flixel/addons/ui/FlxUITabMenu.hx",253,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(254)
		this->showTabId(id);
		HX_STACK_LINE(255)
		::flixel::addons::ui::interfaces::IFlxUIButton tab = this->getTab(id,null());		HX_STACK_VAR(tab,"tab");
		HX_STACK_LINE(256)
		Dynamic params;		HX_STACK_VAR(params,"params");
		HX_STACK_LINE(256)
		if (((tab != null()))){
			HX_STACK_LINE(256)
			params = tab->__Field(HX_CSTRING("params"),true);
		}
		else{
			HX_STACK_LINE(256)
			params = null();
		}
		HX_STACK_LINE(257)
		if ((this->broadcastToFlxUI)){
			HX_STACK_LINE(258)
			::flixel::addons::ui::FlxUI_obj::event(HX_CSTRING("tab_menu_click"),hx::ObjectPtr<OBJ_>(this),id,params);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,_onTabEvent,(void))

Void FlxUITabMenu_obj::stackTabs( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","stackTabs",0x2659b577,"flixel.addons.ui.FlxUITabMenu.stackTabs","flixel/addons/ui/FlxUITabMenu.hx",263,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(264)
		Float _backx = this->_back->x;		HX_STACK_VAR(_backx,"_backx");
		HX_STACK_LINE(265)
		Float _backy = this->_back->y;		HX_STACK_VAR(_backy,"_backy");
		HX_STACK_LINE(267)
		this->group->remove(this->_back,true);
		HX_STACK_LINE(269)
		::flixel::addons::ui::FlxUITypedButton tab = null();		HX_STACK_VAR(tab,"tab");
		HX_STACK_LINE(270)
		{
			HX_STACK_LINE(270)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(270)
			Array< ::flixel::addons::ui::interfaces::IFlxUIButton > _g1 = this->_tabs;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(270)
			while((true)){
				HX_STACK_LINE(270)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(270)
					break;
				}
				HX_STACK_LINE(270)
				::flixel::addons::ui::interfaces::IFlxUIButton t = _g1->__get(_g);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(270)
				++(_g);
				HX_STACK_LINE(271)
				tab = t;
				HX_STACK_LINE(272)
				if ((tab->toggled)){
					HX_STACK_LINE(274)
					this->group->remove(tab,true);
				}
			}
		}
		HX_STACK_LINE(278)
		this->group->add(this->_back);
		HX_STACK_LINE(280)
		{
			HX_STACK_LINE(280)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(280)
			Array< ::flixel::addons::ui::interfaces::IFlxUIButton > _g1 = this->_tabs;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(280)
			while((true)){
				HX_STACK_LINE(280)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(280)
					break;
				}
				HX_STACK_LINE(280)
				::flixel::addons::ui::interfaces::IFlxUIButton t = _g1->__get(_g);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(280)
				++(_g);
				HX_STACK_LINE(281)
				tab = t;
				HX_STACK_LINE(282)
				if ((tab->toggled)){
					HX_STACK_LINE(284)
					this->group->add(tab);
				}
			}
		}
		HX_STACK_LINE(289)
		{
			HX_STACK_LINE(289)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(289)
			Array< ::Dynamic > _g1 = this->_tab_groups;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(289)
			while((true)){
				HX_STACK_LINE(289)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(289)
					break;
				}
				HX_STACK_LINE(289)
				::flixel::addons::ui::FlxUIGroup group = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIGroup >();		HX_STACK_VAR(group,"group");
				HX_STACK_LINE(289)
				++(_g);
				HX_STACK_LINE(291)
				Float tempX = group->x;		HX_STACK_VAR(tempX,"tempX");
				HX_STACK_LINE(292)
				Float tempY = group->y;		HX_STACK_VAR(tempY,"tempY");
				HX_STACK_LINE(293)
				this->remove(group,true);
				HX_STACK_LINE(294)
				this->add(group);
				HX_STACK_LINE(295)
				group->set_x(tempX);
				HX_STACK_LINE(296)
				group->set_y(tempY);
			}
		}
		HX_STACK_LINE(299)
		this->_back->set_x(_backx);
		HX_STACK_LINE(300)
		this->_back->set_y(_backy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITabMenu_obj,stackTabs,(void))

Void FlxUITabMenu_obj::showTabId( ::String id){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","showTabId",0x87ad2ce4,"flixel.addons.ui.FlxUITabMenu.showTabId","flixel/addons/ui/FlxUITabMenu.hx",303,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(305)
		this->_selected_tab = (int)-1;
		HX_STACK_LINE(306)
		this->_selected_tab_id = HX_CSTRING("");
		HX_STACK_LINE(308)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(309)
		{
			HX_STACK_LINE(309)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(309)
			Array< ::flixel::addons::ui::interfaces::IFlxUIButton > _g1 = this->_tabs;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(309)
			while((true)){
				HX_STACK_LINE(309)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(309)
					break;
				}
				HX_STACK_LINE(309)
				::flixel::addons::ui::interfaces::IFlxUIButton tab = _g1->__get(_g);		HX_STACK_VAR(tab,"tab");
				HX_STACK_LINE(309)
				++(_g);
				HX_STACK_LINE(311)
				tab->__FieldRef(HX_CSTRING("toggled")) = false;
				HX_STACK_LINE(312)
				tab->forceStateHandler(HX_CSTRING("out_button"));
				HX_STACK_LINE(313)
				if (((tab->__Field(HX_CSTRING("id"),true) == id))){
					HX_STACK_LINE(314)
					tab->__FieldRef(HX_CSTRING("toggled")) = true;
					HX_STACK_LINE(315)
					this->_selected_tab_id = id;
					HX_STACK_LINE(316)
					this->_selected_tab = i;
				}
				HX_STACK_LINE(318)
				(i)++;
			}
		}
		HX_STACK_LINE(321)
		this->_showOnlyGroup(id);
		HX_STACK_LINE(322)
		this->stackTabs();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,showTabId,(void))

int FlxUITabMenu_obj::sortTabs( ::flixel::addons::ui::interfaces::IFlxUIButton a,::flixel::addons::ui::interfaces::IFlxUIButton b){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","sortTabs",0xaeee7a8b,"flixel.addons.ui.FlxUITabMenu.sortTabs","flixel/addons/ui/FlxUITabMenu.hx",340,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(341)
	if (((a->__Field(HX_CSTRING("id"),true) < b->__Field(HX_CSTRING("id"),true)))){
		HX_STACK_LINE(342)
		return (int)-1;
	}
	else{
		HX_STACK_LINE(343)
		if (((a->__Field(HX_CSTRING("id"),true) > b->__Field(HX_CSTRING("id"),true)))){
			HX_STACK_LINE(344)
			return (int)1;
		}
	}
	HX_STACK_LINE(346)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITabMenu_obj,sortTabs,return )

Void FlxUITabMenu_obj::showTabInt( int i){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","showTabInt",0x2fda23c6,"flixel.addons.ui.FlxUITabMenu.showTabInt","flixel/addons/ui/FlxUITabMenu.hx",350,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(350)
		if (((bool((bool((i >= (int)0)) && bool((this->_tabs != null())))) && bool((this->_tabs->length > i))))){
			HX_STACK_LINE(351)
			::flixel::addons::ui::interfaces::IFlxUIButton _tab = this->_tabs->__get(i);		HX_STACK_VAR(_tab,"_tab");
			HX_STACK_LINE(352)
			::String id = _tab->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(353)
			this->showTabId(id);
		}
		else{
			HX_STACK_LINE(355)
			this->showTabId(HX_CSTRING(""));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,showTabInt,(void))

Void FlxUITabMenu_obj::_showOnlyGroup( ::String id){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","_showOnlyGroup",0xbe9f6e86,"flixel.addons.ui.FlxUITabMenu._showOnlyGroup","flixel/addons/ui/FlxUITabMenu.hx",360,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(360)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(360)
		Array< ::Dynamic > _g1 = this->_tab_groups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(360)
		while((true)){
			HX_STACK_LINE(360)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(360)
				break;
			}
			HX_STACK_LINE(360)
			::flixel::addons::ui::FlxUIGroup group = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIGroup >();		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(360)
			++(_g);
			HX_STACK_LINE(361)
			if (((group->id == id))){
				HX_STACK_LINE(362)
				bool _g2 = group->set_active(true);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(362)
				group->set_visible(_g2);
			}
			else{
				HX_STACK_LINE(364)
				bool _g11 = group->set_active(false);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(364)
				group->set_visible(_g11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,_showOnlyGroup,(void))

::flixel::addons::ui::interfaces::IFlxUIButton FlxUITabMenu_obj::getFirstTab( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","getFirstTab",0xab440e8c,"flixel.addons.ui.FlxUITabMenu.getFirstTab","flixel/addons/ui/FlxUITabMenu.hx",369,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(370)
	::flixel::addons::ui::interfaces::IFlxUIButton _the_tab = null();		HX_STACK_VAR(_the_tab,"_the_tab");
	HX_STACK_LINE(371)
	if (((bool((this->_tabs != null())) && bool((this->_tabs->length > (int)0))))){
		HX_STACK_LINE(372)
		_the_tab = this->_tabs->__get((int)0);
	}
	HX_STACK_LINE(374)
	return _the_tab;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITabMenu_obj,getFirstTab,return )

Void FlxUITabMenu_obj::distributeTabs( hx::Null< Float >  __o_W){
Float W = __o_W.Default(-1);
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","distributeTabs",0xcf609f0e,"flixel.addons.ui.FlxUITabMenu.distributeTabs","flixel/addons/ui/FlxUITabMenu.hx",377,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(W,"W")
{
		HX_STACK_LINE(378)
		Float xx = (int)0;		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(380)
		Float tab_width = (int)0;		HX_STACK_VAR(tab_width,"tab_width");
		HX_STACK_LINE(382)
		if (((W == (int)-1))){
			HX_STACK_LINE(384)
			Float _g = this->_back->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(384)
			W = _g;
		}
		HX_STACK_LINE(387)
		Float diff_size = (int)0;		HX_STACK_VAR(diff_size,"diff_size");
		HX_STACK_LINE(388)
		if ((this->_stretch_tabs)){
			HX_STACK_LINE(389)
			tab_width = (Float(W) / Float(this->_tabs->length));
			HX_STACK_LINE(390)
			int _g1 = ::Std_obj::_int(tab_width);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(390)
			Float tot_size = (_g1 * this->_tabs->length);		HX_STACK_VAR(tot_size,"tot_size");
			HX_STACK_LINE(391)
			if (((tot_size < W))){
				HX_STACK_LINE(392)
				diff_size = (W - tot_size);
			}
		}
		HX_STACK_LINE(396)
		this->_tabs->sort(this->sortTabs_dyn());
		HX_STACK_LINE(398)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(399)
		Float firstHeight = (int)0;		HX_STACK_VAR(firstHeight,"firstHeight");
		HX_STACK_LINE(401)
		::flixel::addons::ui::FlxUITypedButton tab;		HX_STACK_VAR(tab,"tab");
		HX_STACK_LINE(402)
		{
			HX_STACK_LINE(402)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(402)
			Array< ::flixel::addons::ui::interfaces::IFlxUIButton > _g1 = this->_tabs;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(402)
			while((true)){
				HX_STACK_LINE(402)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(402)
					break;
				}
				HX_STACK_LINE(402)
				::flixel::addons::ui::interfaces::IFlxUIButton t = _g1->__get(_g);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(402)
				++(_g);
				HX_STACK_LINE(404)
				tab = t;
				HX_STACK_LINE(406)
				tab->set_x((this->x + xx));
				HX_STACK_LINE(407)
				tab->set_y(this->y);
				HX_STACK_LINE(409)
				if (((this->_tab_offset != null()))){
					HX_STACK_LINE(410)
					{
						HX_STACK_LINE(410)
						::flixel::addons::ui::FlxUITypedButton _g2 = tab;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(410)
						_g2->set_x((_g2->x + this->_tab_offset->x));
					}
					HX_STACK_LINE(411)
					{
						HX_STACK_LINE(411)
						::flixel::addons::ui::FlxUITypedButton _g2 = tab;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(411)
						_g2->set_y((_g2->y + this->_tab_offset->y));
					}
				}
				HX_STACK_LINE(414)
				if ((this->_stretch_tabs)){
					HX_STACK_LINE(415)
					Float theHeight = tab->get_height();		HX_STACK_VAR(theHeight,"theHeight");
					HX_STACK_LINE(416)
					if (((i != (int)0))){
						HX_STACK_LINE(421)
						theHeight = firstHeight;
						HX_STACK_LINE(422)
						tab->resize_ratio = (int)-1;
					}
					HX_STACK_LINE(424)
					if (((diff_size > (int)0))){
						HX_STACK_LINE(425)
						tab->resize((tab_width + (int)1),theHeight);
						HX_STACK_LINE(426)
						int _g2 = ::Std_obj::_int(tab_width);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(426)
						int _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(426)
						hx::AddEq(xx,_g3);
						HX_STACK_LINE(427)
						hx::SubEq(diff_size,(int)1);
					}
					else{
						HX_STACK_LINE(429)
						tab->resize(tab_width,theHeight);
						HX_STACK_LINE(430)
						int _g4 = ::Std_obj::_int(tab_width);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(430)
						hx::AddEq(xx,_g4);
					}
				}
				else{
					HX_STACK_LINE(433)
					if (((this->_tab_spacing != null()))){
						HX_STACK_LINE(434)
						Float _g5 = tab->get_width();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(434)
						Float _g6 = (_g5 + this->_tab_spacing);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(434)
						hx::AddEq(xx,_g6);
					}
					else{
						HX_STACK_LINE(436)
						Float _g7 = tab->get_width();		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(436)
						hx::AddEq(xx,_g7);
					}
				}
				HX_STACK_LINE(439)
				if (((i == (int)0))){
					HX_STACK_LINE(441)
					Float _g8 = tab->get_height();		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(441)
					firstHeight = _g8;
				}
				HX_STACK_LINE(443)
				(i)++;
			}
		}
		HX_STACK_LINE(446)
		if (((bool((bool((this->_tabs != null())) && bool((this->_tabs->length > (int)0)))) && bool((this->_tabs->__get((int)0) != null()))))){
			HX_STACK_LINE(448)
			Float _g9 = this->_tabs->__get((int)0)->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(448)
			Float _g10 = (this->_tabs->__get((int)0)->__Field(HX_CSTRING("y"),true) + _g9);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(448)
			Float _g11 = (_g10 - (int)2);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(448)
			this->_back->set_y(_g11);
			HX_STACK_LINE(449)
			if (((this->_tab_offset != null()))){
				HX_STACK_LINE(451)
				::flixel::FlxSprite _g = this->_back;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(451)
				_g->set_y((_g->y - this->_tab_offset->y));
			}
		}
		HX_STACK_LINE(455)
		this->calcBounds();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,distributeTabs,(void))

::String FlxUITabMenu_obj::CLICK_EVENT;

::String FlxUITabMenu_obj::STACK_FRONT;

::String FlxUITabMenu_obj::STACK_BACK;


FlxUITabMenu_obj::FlxUITabMenu_obj()
{
}

void FlxUITabMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUITabMenu);
	HX_MARK_MEMBER_NAME(numTabs,"numTabs");
	HX_MARK_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_MARK_MEMBER_NAME(_back,"_back");
	HX_MARK_MEMBER_NAME(_tabs,"_tabs");
	HX_MARK_MEMBER_NAME(_tab_groups,"_tab_groups");
	HX_MARK_MEMBER_NAME(_stretch_tabs,"_stretch_tabs");
	HX_MARK_MEMBER_NAME(_tab_spacing,"_tab_spacing");
	HX_MARK_MEMBER_NAME(_tab_stacking,"_tab_stacking");
	HX_MARK_MEMBER_NAME(_tab_offset,"_tab_offset");
	HX_MARK_MEMBER_NAME(_selected_tab_id,"_selected_tab_id");
	HX_MARK_MEMBER_NAME(_selected_tab,"_selected_tab");
	::flixel::addons::ui::FlxUIGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUITabMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(numTabs,"numTabs");
	HX_VISIT_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_VISIT_MEMBER_NAME(_back,"_back");
	HX_VISIT_MEMBER_NAME(_tabs,"_tabs");
	HX_VISIT_MEMBER_NAME(_tab_groups,"_tab_groups");
	HX_VISIT_MEMBER_NAME(_stretch_tabs,"_stretch_tabs");
	HX_VISIT_MEMBER_NAME(_tab_spacing,"_tab_spacing");
	HX_VISIT_MEMBER_NAME(_tab_stacking,"_tab_stacking");
	HX_VISIT_MEMBER_NAME(_tab_offset,"_tab_offset");
	HX_VISIT_MEMBER_NAME(_selected_tab_id,"_selected_tab_id");
	HX_VISIT_MEMBER_NAME(_selected_tab,"_selected_tab");
	::flixel::addons::ui::FlxUIGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUITabMenu_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_back") ) { return _back; }
		if (HX_FIELD_EQ(inName,"_tabs") ) { return _tabs; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"getTab") ) { return getTab_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"numTabs") ) { return inCallProp ? get_numTabs() : numTabs; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getEvent") ) { return getEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"addGroup") ) { return addGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"sortTabs") ) { return sortTabs_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"stackTabs") ) { return stackTabs_dyn(); }
		if (HX_FIELD_EQ(inName,"showTabId") ) { return showTabId_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getRequest") ) { return getRequest_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"showTabInt") ) { return showTabInt_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_numTabs") ) { return get_numTabs_dyn(); }
		if (HX_FIELD_EQ(inName,"getTabGroup") ) { return getTabGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"_onTabEvent") ) { return _onTabEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"_tab_groups") ) { return _tab_groups; }
		if (HX_FIELD_EQ(inName,"_tab_offset") ) { return _tab_offset; }
		if (HX_FIELD_EQ(inName,"getFirstTab") ) { return getFirstTab_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selected_tab") ) { return get_selected_tab(); }
		if (HX_FIELD_EQ(inName,"_tab_spacing") ) { return _tab_spacing; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stretch_tabs") ) { return _stretch_tabs; }
		if (HX_FIELD_EQ(inName,"_tab_stacking") ) { return _tab_stacking; }
		if (HX_FIELD_EQ(inName,"_selected_tab") ) { return _selected_tab; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_showOnlyGroup") ) { return _showOnlyGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"distributeTabs") ) { return distributeTabs_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"selected_tab_id") ) { return get_selected_tab_id(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { return skipButtonUpdate; }
		if (HX_FIELD_EQ(inName,"get_selected_tab") ) { return get_selected_tab_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selected_tab") ) { return set_selected_tab_dyn(); }
		if (HX_FIELD_EQ(inName,"_selected_tab_id") ) { return _selected_tab_id; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_selected_tab_id") ) { return get_selected_tab_id_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selected_tab_id") ) { return set_selected_tab_id_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_skipButtonUpdate") ) { return set_skipButtonUpdate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUITabMenu_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_back") ) { _back=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tabs") ) { _tabs=inValue.Cast< Array< ::flixel::addons::ui::interfaces::IFlxUIButton > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"numTabs") ) { numTabs=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_tab_groups") ) { _tab_groups=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tab_offset") ) { _tab_offset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selected_tab") ) { return set_selected_tab(inValue); }
		if (HX_FIELD_EQ(inName,"_tab_spacing") ) { _tab_spacing=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stretch_tabs") ) { _stretch_tabs=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tab_stacking") ) { _tab_stacking=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_selected_tab") ) { _selected_tab=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"selected_tab_id") ) { return set_selected_tab_id(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { if (inCallProp) return set_skipButtonUpdate(inValue);skipButtonUpdate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_selected_tab_id") ) { _selected_tab_id=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUITabMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("numTabs"));
	outFields->push(HX_CSTRING("skipButtonUpdate"));
	outFields->push(HX_CSTRING("selected_tab"));
	outFields->push(HX_CSTRING("selected_tab_id"));
	outFields->push(HX_CSTRING("_back"));
	outFields->push(HX_CSTRING("_tabs"));
	outFields->push(HX_CSTRING("_tab_groups"));
	outFields->push(HX_CSTRING("_stretch_tabs"));
	outFields->push(HX_CSTRING("_tab_spacing"));
	outFields->push(HX_CSTRING("_tab_stacking"));
	outFields->push(HX_CSTRING("_tab_offset"));
	outFields->push(HX_CSTRING("_selected_tab_id"));
	outFields->push(HX_CSTRING("_selected_tab"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CLICK_EVENT"),
	HX_CSTRING("STACK_FRONT"),
	HX_CSTRING("STACK_BACK"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxUITabMenu_obj,numTabs),HX_CSTRING("numTabs")},
	{hx::fsBool,(int)offsetof(FlxUITabMenu_obj,skipButtonUpdate),HX_CSTRING("skipButtonUpdate")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxUITabMenu_obj,_back),HX_CSTRING("_back")},
	{hx::fsObject /*Array< ::flixel::addons::ui::interfaces::IFlxUIButton >*/ ,(int)offsetof(FlxUITabMenu_obj,_tabs),HX_CSTRING("_tabs")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxUITabMenu_obj,_tab_groups),HX_CSTRING("_tab_groups")},
	{hx::fsBool,(int)offsetof(FlxUITabMenu_obj,_stretch_tabs),HX_CSTRING("_stretch_tabs")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUITabMenu_obj,_tab_spacing),HX_CSTRING("_tab_spacing")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(FlxUITabMenu_obj,_tab_stacking),HX_CSTRING("_tab_stacking")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxUITabMenu_obj,_tab_offset),HX_CSTRING("_tab_offset")},
	{hx::fsString,(int)offsetof(FlxUITabMenu_obj,_selected_tab_id),HX_CSTRING("_selected_tab_id")},
	{hx::fsInt,(int)offsetof(FlxUITabMenu_obj,_selected_tab),HX_CSTRING("_selected_tab")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("numTabs"),
	HX_CSTRING("get_numTabs"),
	HX_CSTRING("getEvent"),
	HX_CSTRING("getRequest"),
	HX_CSTRING("skipButtonUpdate"),
	HX_CSTRING("set_skipButtonUpdate"),
	HX_CSTRING("get_width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("resize"),
	HX_CSTRING("get_selected_tab"),
	HX_CSTRING("set_selected_tab"),
	HX_CSTRING("get_selected_tab_id"),
	HX_CSTRING("set_selected_tab_id"),
	HX_CSTRING("destroy"),
	HX_CSTRING("getTab"),
	HX_CSTRING("getTabGroup"),
	HX_CSTRING("addGroup"),
	HX_CSTRING("_onTabEvent"),
	HX_CSTRING("stackTabs"),
	HX_CSTRING("showTabId"),
	HX_CSTRING("_back"),
	HX_CSTRING("_tabs"),
	HX_CSTRING("_tab_groups"),
	HX_CSTRING("_stretch_tabs"),
	HX_CSTRING("_tab_spacing"),
	HX_CSTRING("_tab_stacking"),
	HX_CSTRING("_tab_offset"),
	HX_CSTRING("_selected_tab_id"),
	HX_CSTRING("_selected_tab"),
	HX_CSTRING("sortTabs"),
	HX_CSTRING("showTabInt"),
	HX_CSTRING("_showOnlyGroup"),
	HX_CSTRING("getFirstTab"),
	HX_CSTRING("distributeTabs"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUITabMenu_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxUITabMenu_obj::CLICK_EVENT,"CLICK_EVENT");
	HX_MARK_MEMBER_NAME(FlxUITabMenu_obj::STACK_FRONT,"STACK_FRONT");
	HX_MARK_MEMBER_NAME(FlxUITabMenu_obj::STACK_BACK,"STACK_BACK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUITabMenu_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxUITabMenu_obj::CLICK_EVENT,"CLICK_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUITabMenu_obj::STACK_FRONT,"STACK_FRONT");
	HX_VISIT_MEMBER_NAME(FlxUITabMenu_obj::STACK_BACK,"STACK_BACK");
};

#endif

Class FlxUITabMenu_obj::__mClass;

void FlxUITabMenu_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxUITabMenu"), hx::TCanCast< FlxUITabMenu_obj> ,sStaticFields,sMemberFields,
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

void FlxUITabMenu_obj::__boot()
{
	CLICK_EVENT= HX_CSTRING("tab_menu_click");
	STACK_FRONT= HX_CSTRING("front");
	STACK_BACK= HX_CSTRING("back");
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
