#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_addons_ui_FlxUIDropDownHeader
#include <flixel/addons/ui/FlxUIDropDownHeader.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIDropDownMenu
#include <flixel/addons/ui/FlxUIDropDownMenu.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISpriteButton
#include <flixel/addons/ui/FlxUISpriteButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_StrIdLabel
#include <flixel/addons/ui/StrIdLabel.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonEvent
#include <flixel/ui/_FlxButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
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
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUIDropDownMenu_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Array< ::Dynamic > DataList,Dynamic Callback,::flixel::addons::ui::FlxUIDropDownHeader Header,::flixel::addons::ui::FlxUI9SliceSprite DropPanel,Array< ::Dynamic > ButtonList,Dynamic UIControlCallback)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","new",0x9471b5d7,"flixel.addons.ui.FlxUIDropDownMenu.new","flixel/addons/ui/FlxUIDropDownMenu.hx",109,0x238549da)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(DataList,"DataList")
HX_STACK_ARG(Callback,"Callback")
HX_STACK_ARG(Header,"Header")
HX_STACK_ARG(DropPanel,"DropPanel")
HX_STACK_ARG(ButtonList,"ButtonList")
HX_STACK_ARG(UIControlCallback,"UIControlCallback")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(110)
	super::__construct(X,Y);
	HX_STACK_LINE(111)
	this->callback = Callback;
	HX_STACK_LINE(113)
	this->header = Header;
	HX_STACK_LINE(114)
	if (((this->header == null()))){
		HX_STACK_LINE(116)
		::flixel::addons::ui::FlxUIDropDownHeader _g = ::flixel::addons::ui::FlxUIDropDownHeader_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(116)
		this->header = _g;
	}
	HX_STACK_LINE(119)
	Float _g1 = this->header->background->get_height();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(119)
	Float _g2 = (this->header->background->y + _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(119)
	int yoff = ::Std_obj::_int(_g2);		HX_STACK_VAR(yoff,"yoff");
	HX_STACK_LINE(121)
	this->list = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(123)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(124)
	if (((DataList != null()))){
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(126)
			while((true)){
				HX_STACK_LINE(126)
				if ((!(((_g < DataList->length))))){
					HX_STACK_LINE(126)
					break;
				}
				HX_STACK_LINE(126)
				::flixel::addons::ui::StrIdLabel data = DataList->__get(_g).StaticCast< ::flixel::addons::ui::StrIdLabel >();		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(126)
				++(_g);
				HX_STACK_LINE(128)
				::flixel::addons::ui::FlxUIButton t = this->makeListButton(i,data->label,data->id);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(129)
				this->list->push(t);
				HX_STACK_LINE(130)
				t->set_y(yoff);
				HX_STACK_LINE(131)
				Float _g3 = this->header->background->get_height();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(131)
				int _g4 = ::Std_obj::_int(_g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(131)
				hx::AddEq(yoff,_g4);
				HX_STACK_LINE(133)
				(i)++;
			}
		}
		HX_STACK_LINE(135)
		this->selectSomething(DataList->__get((int)0).StaticCast< ::flixel::addons::ui::StrIdLabel >()->id,DataList->__get((int)0).StaticCast< ::flixel::addons::ui::StrIdLabel >()->label);
	}
	else{
		HX_STACK_LINE(137)
		if (((ButtonList != null()))){
			HX_STACK_LINE(139)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(139)
			while((true)){
				HX_STACK_LINE(139)
				if ((!(((_g < ButtonList->length))))){
					HX_STACK_LINE(139)
					break;
				}
				HX_STACK_LINE(139)
				::flixel::addons::ui::FlxUIButton btn = ButtonList->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(btn,"btn");
				HX_STACK_LINE(139)
				++(_g);
				HX_STACK_LINE(141)
				this->list->push(btn);
				HX_STACK_LINE(142)
				Float _g5 = this->header->background->get_width();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(142)
				Float _g6 = this->header->background->get_height();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(142)
				btn->resize(_g5,_g6);
				HX_STACK_LINE(143)
				btn->set_x((int)1);
				HX_STACK_LINE(144)
				btn->set_y(yoff);
				HX_STACK_LINE(145)
				Float _g7 = this->header->background->get_height();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(145)
				int _g8 = ::Std_obj::_int(_g7);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(145)
				hx::AddEq(yoff,_g8);
				HX_STACK_LINE(147)
				(i)++;
			}
		}
	}
	HX_STACK_LINE(151)
	this->dropPanel = DropPanel;
	HX_STACK_LINE(152)
	if (((this->dropPanel == null()))){
		HX_STACK_LINE(153)
		Float _g9 = this->header->background->get_width();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(153)
		Float _g10 = this->header->background->get_height();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(153)
		::openfl::_v2::geom::Rectangle rect = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,_g9,_g10);		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(154)
		::flixel::addons::ui::FlxUI9SliceSprite _g11 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::__new((int)0,(int)0,HX_CSTRING("flixel/flixel-ui/img/box.png"),rect,Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)14).Add((int)14),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(154)
		this->dropPanel = _g11;
	}
	HX_STACK_LINE(157)
	this->dropPanel->set_y(this->header->background->y);
	HX_STACK_LINE(158)
	Float _g12 = this->header->background->get_width();		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(158)
	this->dropPanel->resize(_g12,yoff);
	HX_STACK_LINE(159)
	this->dropPanel->set_visible(false);
	HX_STACK_LINE(160)
	this->add(this->dropPanel);
	HX_STACK_LINE(162)
	{
		HX_STACK_LINE(162)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(162)
		Array< ::Dynamic > _g11 = this->list;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(162)
		while((true)){
			HX_STACK_LINE(162)
			if ((!(((_g < _g11->length))))){
				HX_STACK_LINE(162)
				break;
			}
			HX_STACK_LINE(162)
			::flixel::addons::ui::FlxUIButton btn = _g11->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(btn,"btn");
			HX_STACK_LINE(162)
			++(_g);
			HX_STACK_LINE(163)
			this->add(btn);
			HX_STACK_LINE(164)
			btn->set_visible(false);
		}
	}
	HX_STACK_LINE(168)
	this->header->button->onUp->callback = this->onDropdown_dyn();
	HX_STACK_LINE(170)
	this->add(this->header);
}
;
	return null();
}

//FlxUIDropDownMenu_obj::~FlxUIDropDownMenu_obj() { }

Dynamic FlxUIDropDownMenu_obj::__CreateEmpty() { return  new FlxUIDropDownMenu_obj; }
hx::ObjectPtr< FlxUIDropDownMenu_obj > FlxUIDropDownMenu_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Array< ::Dynamic > DataList,Dynamic Callback,::flixel::addons::ui::FlxUIDropDownHeader Header,::flixel::addons::ui::FlxUI9SliceSprite DropPanel,Array< ::Dynamic > ButtonList,Dynamic UIControlCallback)
{  hx::ObjectPtr< FlxUIDropDownMenu_obj > result = new FlxUIDropDownMenu_obj();
	result->__construct(__o_X,__o_Y,DataList,Callback,Header,DropPanel,ButtonList,UIControlCallback);
	return result;}

Dynamic FlxUIDropDownMenu_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUIDropDownMenu_obj > result = new FlxUIDropDownMenu_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}

hx::Object *FlxUIDropDownMenu_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::IFlxSprite_obj)) return operator ::flixel::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::IFlxBasic_obj)) return operator ::flixel::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIClickable_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IHasParams_obj)) return operator ::flixel::addons::ui::interfaces::IHasParams_obj *();
	return super::__ToInterface(inType);
}

bool FlxUIDropDownMenu_obj::set_skipButtonUpdate( bool b){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","set_skipButtonUpdate",0xeb78a3e0,"flixel.addons.ui.FlxUIDropDownMenu.set_skipButtonUpdate","flixel/addons/ui/FlxUIDropDownMenu.hx",21,0x238549da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(22)
	this->skipButtonUpdate = b;
	HX_STACK_LINE(23)
	this->header->button->set_skipButtonUpdate(b);
	HX_STACK_LINE(24)
	return b;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenu_obj,set_skipButtonUpdate,return )

::String FlxUIDropDownMenu_obj::get_selectedId( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","get_selectedId",0x60d4af48,"flixel.addons.ui.FlxUIDropDownMenu.get_selectedId","flixel/addons/ui/FlxUIDropDownMenu.hx",33,0x238549da)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	return this->_selectedId;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIDropDownMenu_obj,get_selectedId,return )

::String FlxUIDropDownMenu_obj::set_selectedId( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","set_selectedId",0x80f497bc,"flixel.addons.ui.FlxUIDropDownMenu.set_selectedId","flixel/addons/ui/FlxUIDropDownMenu.hx",34,0x238549da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(35)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(36)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(36)
		while((true)){
			HX_STACK_LINE(36)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(36)
				break;
			}
			HX_STACK_LINE(36)
			::flixel::addons::ui::FlxUIButton btn = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(btn,"btn");
			HX_STACK_LINE(36)
			++(_g);
			HX_STACK_LINE(37)
			if (((bool((btn != null())) && bool((btn->id == str))))){
				HX_STACK_LINE(38)
				::flixel::addons::ui::FlxUIButton item = this->list->__get(i).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(39)
				this->_selectedId = str;
				HX_STACK_LINE(40)
				if (((item->label != null()))){
					HX_STACK_LINE(41)
					::String _g2 = item->label->__Field(HX_CSTRING("textField"),true)->__Field(HX_CSTRING("get_text"),true)();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(41)
					this->_selectedLabel = _g2;
					HX_STACK_LINE(42)
					::String _g11 = item->label->__Field(HX_CSTRING("textField"),true)->__Field(HX_CSTRING("get_text"),true)();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(42)
					this->header->text->set_text(_g11);
				}
				else{
					HX_STACK_LINE(44)
					this->_selectedLabel = HX_CSTRING("");
					HX_STACK_LINE(45)
					this->header->text->set_text(HX_CSTRING(""));
				}
				HX_STACK_LINE(47)
				return str;
			}
			HX_STACK_LINE(49)
			(i)++;
		}
	}
	HX_STACK_LINE(51)
	return str;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenu_obj,set_selectedId,return )

::String FlxUIDropDownMenu_obj::get_selectedLabel( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","get_selectedLabel",0x701cdca7,"flixel.addons.ui.FlxUIDropDownMenu.get_selectedLabel","flixel/addons/ui/FlxUIDropDownMenu.hx",54,0x238549da)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	return this->_selectedLabel;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIDropDownMenu_obj,get_selectedLabel,return )

::String FlxUIDropDownMenu_obj::set_selectedLabel( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","set_selectedLabel",0x938ab4b3,"flixel.addons.ui.FlxUIDropDownMenu.set_selectedLabel","flixel/addons/ui/FlxUIDropDownMenu.hx",55,0x238549da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(56)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(57)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(57)
		while((true)){
			HX_STACK_LINE(57)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(57)
				break;
			}
			HX_STACK_LINE(57)
			::flixel::addons::ui::FlxUIButton btn = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(btn,"btn");
			HX_STACK_LINE(57)
			++(_g);
			HX_STACK_LINE(58)
			::String _g2 = btn->label->__Field(HX_CSTRING("textField"),true)->__Field(HX_CSTRING("get_text"),true)();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(58)
			if (((_g2 == str))){
				HX_STACK_LINE(59)
				::flixel::addons::ui::FlxUIButton item = this->list->__get(i).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(60)
				this->_selectedId = item->id;
				HX_STACK_LINE(61)
				this->_selectedLabel = str;
				HX_STACK_LINE(62)
				this->header->text->set_text(str);
				HX_STACK_LINE(63)
				return str;
			}
			HX_STACK_LINE(65)
			(i)++;
		}
	}
	HX_STACK_LINE(67)
	return str;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenu_obj,set_selectedLabel,return )

Dynamic FlxUIDropDownMenu_obj::set_params( Dynamic p){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","set_params",0x718bd0ec,"flixel.addons.ui.FlxUIDropDownMenu.set_params","flixel/addons/ui/FlxUIDropDownMenu.hx",85,0x238549da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(86)
	this->params = p;
	HX_STACK_LINE(87)
	return this->params;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenu_obj,set_params,return )

Void FlxUIDropDownMenu_obj::setData( Array< ::Dynamic > DataList){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","setData",0xb60b03e3,"flixel.addons.ui.FlxUIDropDownMenu.setData","flixel/addons/ui/FlxUIDropDownMenu.hx",179,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(DataList,"DataList")
		HX_STACK_LINE(180)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(182)
		Float _g = this->header->background->get_height();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(182)
		Float _g1 = ((this->y - this->header->background->y) + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(182)
		int yoff = ::Std_obj::_int(_g1);		HX_STACK_VAR(yoff,"yoff");
		HX_STACK_LINE(184)
		if (((DataList != null()))){
			HX_STACK_LINE(185)
			{
				HX_STACK_LINE(185)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(185)
				while((true)){
					HX_STACK_LINE(185)
					if ((!(((_g2 < DataList->length))))){
						HX_STACK_LINE(185)
						break;
					}
					HX_STACK_LINE(185)
					::flixel::addons::ui::StrIdLabel data = DataList->__get(_g2).StaticCast< ::flixel::addons::ui::StrIdLabel >();		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(185)
					++(_g2);
					HX_STACK_LINE(186)
					bool recycled = false;		HX_STACK_VAR(recycled,"recycled");
					HX_STACK_LINE(187)
					if (((this->list != null()))){
						HX_STACK_LINE(188)
						if (((i <= (this->list->length - (int)1)))){
							HX_STACK_LINE(190)
							::flixel::addons::ui::FlxUIButton btn = this->list->__get(i).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(btn,"btn");
							HX_STACK_LINE(191)
							if (((btn != null()))){
								HX_STACK_LINE(192)
								btn->label->__Field(HX_CSTRING("set_text"),true)(data->label);
								HX_STACK_LINE(193)
								::String old_id = this->list->__get(i).StaticCast< ::flixel::addons::ui::FlxUIButton >()->id;		HX_STACK_VAR(old_id,"old_id");
								HX_STACK_LINE(194)
								this->list->__get(i).StaticCast< ::flixel::addons::ui::FlxUIButton >()->id = data->id;
								HX_STACK_LINE(195)
								recycled = true;
								HX_STACK_LINE(196)
								Float _g21 = this->header->background->get_height();		HX_STACK_VAR(_g21,"_g21");
								HX_STACK_LINE(196)
								int _g3 = ::Std_obj::_int(_g21);		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(196)
								hx::AddEq(yoff,_g3);
							}
						}
					}
					else{
						HX_STACK_LINE(200)
						this->list = Array_obj< ::Dynamic >::__new();
					}
					HX_STACK_LINE(202)
					if ((!(recycled))){
						HX_STACK_LINE(203)
						::flixel::addons::ui::FlxUIButton t = this->makeListButton(i,data->label,data->id);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(204)
						this->list->push(t);
						HX_STACK_LINE(205)
						t->set_y(yoff);
						HX_STACK_LINE(206)
						this->add(t);
						HX_STACK_LINE(207)
						t->set_visible(false);
						HX_STACK_LINE(208)
						Float _g4 = this->header->background->get_height();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(208)
						int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(208)
						hx::AddEq(yoff,_g5);
					}
					HX_STACK_LINE(210)
					(i)++;
				}
			}
			HX_STACK_LINE(214)
			if (((this->list->length > DataList->length))){
				HX_STACK_LINE(215)
				int _g11 = DataList->length;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(215)
				int _g2 = this->list->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(215)
				while((true)){
					HX_STACK_LINE(215)
					if ((!(((_g11 < _g2))))){
						HX_STACK_LINE(215)
						break;
					}
					HX_STACK_LINE(215)
					int j = (_g11)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(216)
					::flixel::addons::ui::FlxUIButton b = this->list->pop().StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(217)
					b->set_visible(false);
					HX_STACK_LINE(218)
					b->set_active(false);
					HX_STACK_LINE(219)
					this->remove(b,true);
					HX_STACK_LINE(220)
					b->destroy();
					HX_STACK_LINE(221)
					b = null();
				}
			}
			HX_STACK_LINE(225)
			this->selectSomething(DataList->__get((int)0).StaticCast< ::flixel::addons::ui::StrIdLabel >()->id,DataList->__get((int)0).StaticCast< ::flixel::addons::ui::StrIdLabel >()->label);
		}
		HX_STACK_LINE(228)
		Float _g6 = this->header->background->get_width();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(228)
		this->dropPanel->resize(_g6,yoff);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenu_obj,setData,(void))

Void FlxUIDropDownMenu_obj::selectSomething( ::String id,::String label){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","selectSomething",0xd0a071d5,"flixel.addons.ui.FlxUIDropDownMenu.selectSomething","flixel/addons/ui/FlxUIDropDownMenu.hx",231,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(label,"label")
		HX_STACK_LINE(232)
		this->header->text->set_text(label);
		HX_STACK_LINE(233)
		this->set_selectedId(id);
		HX_STACK_LINE(234)
		this->set_selectedLabel(label);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIDropDownMenu_obj,selectSomething,(void))

::flixel::addons::ui::FlxUIButton FlxUIDropDownMenu_obj::makeListButton( int i,::String Label,::String Name){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","makeListButton",0xfb84f067,"flixel.addons.ui.FlxUIDropDownMenu.makeListButton","flixel/addons/ui/FlxUIDropDownMenu.hx",237,0x238549da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_ARG(Label,"Label")
	HX_STACK_ARG(Name,"Name")
	HX_STACK_LINE(238)
	::flixel::addons::ui::FlxUIButton t = ::flixel::addons::ui::FlxUIButton_obj::__new((int)0,(int)0,Label,null());		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(239)
	t->broadcastToFlxUI = false;
	HX_STACK_LINE(240)
	Dynamic _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(240)
	{
		HX_STACK_LINE(240)
		Dynamic f = Dynamic( Array_obj<Dynamic>::__new().Add(this->onClickItem_dyn()));		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(240)
		Array< int > i1 = Array_obj< int >::__new().Add(i);		HX_STACK_VAR(i1,"i1");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Array< int >,i1,Dynamic,f)
		Void run(){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","flixel/addons/ui/FlxUIDropDownMenu.hx",240,0x238549da)
			{
				HX_STACK_LINE(240)
				return null(f->__GetItem((int)0)(i1->__get((int)0)).Cast< Void >());
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(240)
		_g =  Dynamic(new _Function_2_1(i1,f));
	}
	HX_STACK_LINE(240)
	t->onUp->callback = _g;
	HX_STACK_LINE(242)
	t->id = Name;
	HX_STACK_LINE(244)
	Float _g1 = this->header->background->get_width();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(244)
	int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(245)
	Float _g3 = this->header->background->get_height();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(245)
	int _g4 = ::Std_obj::_int(_g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(244)
	t->loadGraphicSlice9(Array_obj< ::String >::__new().Add(HX_CSTRING("flixel/flixel-ui/img/invis.png")).Add(HX_CSTRING("flixel/flixel-ui/img/hilight.png")).Add(HX_CSTRING("flixel/flixel-ui/img/hilight.png")),_g2,_g4,Array_obj< ::Dynamic >::__new().Add(Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)3).Add((int)3)).Add(Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)3).Add((int)3)).Add(Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)3).Add((int)3)),(int)0,null(),null(),null(),null(),null());
	HX_STACK_LINE(246)
	{
		HX_STACK_LINE(246)
		::flixel::math::FlxPoint _g5 = t->labelOffsets->__get((int)2).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(246)
		_g5->set_y((_g5->y - (int)1));
	}
	HX_STACK_LINE(248)
	t->up_color = (int)-16777216;
	HX_STACK_LINE(249)
	t->over_color = (int)-1;
	HX_STACK_LINE(250)
	t->down_color = (int)-1;
	HX_STACK_LINE(252)
	Float _g5 = this->header->background->get_width();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(252)
	Float _g6 = (_g5 - (int)2);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(252)
	Float _g7 = this->header->background->get_height();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(252)
	Float _g8 = (_g7 - (int)1);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(252)
	t->resize(_g6,_g8);
	HX_STACK_LINE(254)
	t->label->__Field(HX_CSTRING("set_alignment"),true)(HX_CSTRING("left"));
	HX_STACK_LINE(255)
	t->autoCenterLabel();
	HX_STACK_LINE(256)
	t->set_x((int)1);
	HX_STACK_LINE(258)
	{
		HX_STACK_LINE(258)
		int _g9 = (int)0;		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(258)
		Array< ::Dynamic > _g11 = t->labelOffsets;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(258)
		while((true)){
			HX_STACK_LINE(258)
			if ((!(((_g9 < _g11->length))))){
				HX_STACK_LINE(258)
				break;
			}
			HX_STACK_LINE(258)
			::flixel::math::FlxPoint offset = _g11->__get(_g9).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(258)
			++(_g9);
			HX_STACK_LINE(260)
			{
				HX_STACK_LINE(260)
				::flixel::math::FlxPoint _g21 = offset;		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(260)
				_g21->set_x((_g21->x + (int)2));
			}
		}
	}
	HX_STACK_LINE(263)
	return t;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUIDropDownMenu_obj,makeListButton,return )

Void FlxUIDropDownMenu_obj::changeLabelByIndex( int i,::String NewLabel){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","changeLabelByIndex",0xa18ac820,"flixel.addons.ui.FlxUIDropDownMenu.changeLabelByIndex","flixel/addons/ui/FlxUIDropDownMenu.hx",270,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_ARG(NewLabel,"NewLabel")
		HX_STACK_LINE(271)
		::flixel::addons::ui::FlxUIButton btn = this->getBtnByIndex(i);		HX_STACK_VAR(btn,"btn");
		HX_STACK_LINE(272)
		if (((bool((btn != null())) && bool((btn->label != null()))))){
			HX_STACK_LINE(273)
			btn->label->__Field(HX_CSTRING("set_text"),true)(NewLabel);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIDropDownMenu_obj,changeLabelByIndex,(void))

Void FlxUIDropDownMenu_obj::changeLabelById( ::String id,::String NewLabel){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","changeLabelById",0x75719a0d,"flixel.addons.ui.FlxUIDropDownMenu.changeLabelById","flixel/addons/ui/FlxUIDropDownMenu.hx",277,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(NewLabel,"NewLabel")
		HX_STACK_LINE(278)
		::flixel::addons::ui::FlxUIButton btn = this->getBtnById(id);		HX_STACK_VAR(btn,"btn");
		HX_STACK_LINE(279)
		if (((bool((btn != null())) && bool((btn->label != null()))))){
			HX_STACK_LINE(280)
			btn->label->__Field(HX_CSTRING("set_text"),true)(NewLabel);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIDropDownMenu_obj,changeLabelById,(void))

::flixel::addons::ui::FlxUIButton FlxUIDropDownMenu_obj::getBtnByIndex( int i){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","getBtnByIndex",0x24b02f2c,"flixel.addons.ui.FlxUIDropDownMenu.getBtnByIndex","flixel/addons/ui/FlxUIDropDownMenu.hx",284,0x238549da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(285)
	if (((bool((i >= (int)0)) && bool((i < this->list->length))))){
		HX_STACK_LINE(286)
		return this->list->__get(i).StaticCast< ::flixel::addons::ui::FlxUIButton >();
	}
	HX_STACK_LINE(288)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenu_obj,getBtnByIndex,return )

::flixel::addons::ui::FlxUIButton FlxUIDropDownMenu_obj::getBtnById( ::String id){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","getBtnById",0xae1a9381,"flixel.addons.ui.FlxUIDropDownMenu.getBtnById","flixel/addons/ui/FlxUIDropDownMenu.hx",291,0x238549da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(292)
	{
		HX_STACK_LINE(292)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(292)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(292)
		while((true)){
			HX_STACK_LINE(292)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(292)
				break;
			}
			HX_STACK_LINE(292)
			::flixel::addons::ui::FlxUIButton btn = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(btn,"btn");
			HX_STACK_LINE(292)
			++(_g);
			HX_STACK_LINE(293)
			if (((btn->id == id))){
				HX_STACK_LINE(294)
				return btn;
			}
		}
	}
	HX_STACK_LINE(297)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenu_obj,getBtnById,return )

Void FlxUIDropDownMenu_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","update",0x4f8d24f2,"flixel.addons.ui.FlxUIDropDownMenu.update","flixel/addons/ui/FlxUIDropDownMenu.hx",301,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(302)
		this->super::update(elapsed);
		HX_STACK_LINE(305)
		if (((bool(this->dropPanel->visible) && bool((::flixel::FlxG_obj::mouse->_leftButton->current == (int)2))))){
			HX_STACK_LINE(307)
			if ((!(::flixel::FlxG_obj::mouse->overlaps(this->dropPanel,null())))){
				HX_STACK_LINE(309)
				this->showList(false);
			}
		}
	}
return null();
}


Void FlxUIDropDownMenu_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","destroy",0xd2a999f1,"flixel.addons.ui.FlxUIDropDownMenu.destroy","flixel/addons/ui/FlxUIDropDownMenu.hx",316,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_LINE(317)
		this->super::destroy();
		HX_STACK_LINE(319)
		::flixel::addons::ui::FlxUI9SliceSprite _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->dropPanel);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(319)
		this->dropPanel = _g;
		HX_STACK_LINE(321)
		{
			HX_STACK_LINE(321)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(321)
			Array< ::Dynamic > _g11 = this->list;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(321)
			while((true)){
				HX_STACK_LINE(321)
				if ((!(((_g1 < _g11->length))))){
					HX_STACK_LINE(321)
					break;
				}
				HX_STACK_LINE(321)
				::flixel::addons::ui::FlxUIButton button = _g11->__get(_g1).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(button,"button");
				HX_STACK_LINE(321)
				++(_g1);
				HX_STACK_LINE(323)
				::flixel::addons::ui::FlxUIButton _g12 = ::flixel::util::FlxDestroyUtil_obj::destroy(button);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(323)
				button = _g12;
			}
		}
		HX_STACK_LINE(326)
		this->list = null();
		HX_STACK_LINE(328)
		this->callback = null();
	}
return null();
}


Void FlxUIDropDownMenu_obj::showList( bool b){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","showList",0x6015cb24,"flixel.addons.ui.FlxUIDropDownMenu.showList","flixel/addons/ui/FlxUIDropDownMenu.hx",332,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(333)
		{
			HX_STACK_LINE(333)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(333)
			Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(333)
			while((true)){
				HX_STACK_LINE(333)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(333)
					break;
				}
				HX_STACK_LINE(333)
				::flixel::addons::ui::FlxUIButton button = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(button,"button");
				HX_STACK_LINE(333)
				++(_g);
				HX_STACK_LINE(334)
				button->set_visible(b);
				HX_STACK_LINE(335)
				button->set_active(b);
			}
		}
		HX_STACK_LINE(338)
		this->dropPanel->set_visible(b);
		HX_STACK_LINE(340)
		::flixel::addons::ui::FlxUI_obj::forceFocus(b,hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenu_obj,showList,(void))

Void FlxUIDropDownMenu_obj::onDropdown( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","onDropdown",0x6af20fb9,"flixel.addons.ui.FlxUIDropDownMenu.onDropdown","flixel/addons/ui/FlxUIDropDownMenu.hx",345,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_LINE(345)
		if ((this->dropPanel->visible)){
			HX_STACK_LINE(345)
			this->showList(false);
		}
		else{
			HX_STACK_LINE(345)
			this->showList(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIDropDownMenu_obj,onDropdown,(void))

Void FlxUIDropDownMenu_obj::onClickItem( int i){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","onClickItem",0xc144c8d3,"flixel.addons.ui.FlxUIDropDownMenu.onClickItem","flixel/addons/ui/FlxUIDropDownMenu.hx",349,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(350)
		::flixel::addons::ui::FlxUIButton item = this->list->__get(i).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(item,"item");
		HX_STACK_LINE(351)
		::String _g = item->label->__Field(HX_CSTRING("textField"),true)->__Field(HX_CSTRING("get_text"),true)();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(351)
		this->selectSomething(item->id,_g);
		HX_STACK_LINE(352)
		this->showList(false);
		HX_STACK_LINE(354)
		if (((this->callback_dyn() != null()))){
			HX_STACK_LINE(355)
			this->callback(item->id);
		}
		HX_STACK_LINE(358)
		if ((this->broadcastToFlxUI)){
			HX_STACK_LINE(359)
			::flixel::addons::ui::FlxUI_obj::event(HX_CSTRING("click_dropdown"),hx::ObjectPtr<OBJ_>(this),item->id,this->params);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenu_obj,onClickItem,(void))

::String FlxUIDropDownMenu_obj::CLICK_EVENT;

Array< ::Dynamic > FlxUIDropDownMenu_obj::makeStrIdLabelArray( Array< ::String > StringArray,hx::Null< bool >  __o_UseIndexID){
bool UseIndexID = __o_UseIndexID.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","makeStrIdLabelArray",0xab19023a,"flixel.addons.ui.FlxUIDropDownMenu.makeStrIdLabelArray","flixel/addons/ui/FlxUIDropDownMenu.hx",371,0x238549da)
	HX_STACK_ARG(StringArray,"StringArray")
	HX_STACK_ARG(UseIndexID,"UseIndexID")
{
		HX_STACK_LINE(372)
		Array< ::Dynamic > strIdArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(strIdArray,"strIdArray");
		HX_STACK_LINE(373)
		{
			HX_STACK_LINE(373)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(373)
			int _g = StringArray->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(373)
			while((true)){
				HX_STACK_LINE(373)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(373)
					break;
				}
				HX_STACK_LINE(373)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(375)
				::String ID = StringArray->__get(i);		HX_STACK_VAR(ID,"ID");
				HX_STACK_LINE(376)
				if ((UseIndexID)){
					HX_STACK_LINE(378)
					::String _g2 = ::Std_obj::string(i);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(378)
					ID = _g2;
				}
				HX_STACK_LINE(380)
				strIdArray[i] = ::flixel::addons::ui::StrIdLabel_obj::__new(ID,StringArray->__get(i));
			}
		}
		HX_STACK_LINE(382)
		return strIdArray;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxUIDropDownMenu_obj,makeStrIdLabelArray,return )


FlxUIDropDownMenu_obj::FlxUIDropDownMenu_obj()
{
}

void FlxUIDropDownMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIDropDownMenu);
	HX_MARK_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_MARK_MEMBER_NAME(_selectedId,"_selectedId");
	HX_MARK_MEMBER_NAME(_selectedLabel,"_selectedLabel");
	HX_MARK_MEMBER_NAME(header,"header");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(dropPanel,"dropPanel");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(callback,"callback");
	::flixel::addons::ui::FlxUIGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIDropDownMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_VISIT_MEMBER_NAME(_selectedId,"_selectedId");
	HX_VISIT_MEMBER_NAME(_selectedLabel,"_selectedLabel");
	HX_VISIT_MEMBER_NAME(header,"header");
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(dropPanel,"dropPanel");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	::flixel::addons::ui::FlxUIGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUIDropDownMenu_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"header") ) { return header; }
		if (HX_FIELD_EQ(inName,"params") ) { return params; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setData") ) { return setData_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return callback; }
		if (HX_FIELD_EQ(inName,"showList") ) { return showList_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dropPanel") ) { return dropPanel; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"selectedId") ) { return get_selectedId(); }
		if (HX_FIELD_EQ(inName,"set_params") ) { return set_params_dyn(); }
		if (HX_FIELD_EQ(inName,"getBtnById") ) { return getBtnById_dyn(); }
		if (HX_FIELD_EQ(inName,"onDropdown") ) { return onDropdown_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_selectedId") ) { return _selectedId; }
		if (HX_FIELD_EQ(inName,"onClickItem") ) { return onClickItem_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedLabel") ) { return get_selectedLabel(); }
		if (HX_FIELD_EQ(inName,"getBtnByIndex") ) { return getBtnByIndex_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedLabel") ) { return _selectedLabel; }
		if (HX_FIELD_EQ(inName,"get_selectedId") ) { return get_selectedId_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedId") ) { return set_selectedId_dyn(); }
		if (HX_FIELD_EQ(inName,"makeListButton") ) { return makeListButton_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"selectSomething") ) { return selectSomething_dyn(); }
		if (HX_FIELD_EQ(inName,"changeLabelById") ) { return changeLabelById_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { return skipButtonUpdate; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectedLabel") ) { return get_selectedLabel_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedLabel") ) { return set_selectedLabel_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"changeLabelByIndex") ) { return changeLabelByIndex_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"makeStrIdLabelArray") ) { return makeStrIdLabelArray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_skipButtonUpdate") ) { return set_skipButtonUpdate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUIDropDownMenu_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"header") ) { header=inValue.Cast< ::flixel::addons::ui::FlxUIDropDownHeader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"params") ) { if (inCallProp) return set_params(inValue);params=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dropPanel") ) { dropPanel=inValue.Cast< ::flixel::addons::ui::FlxUI9SliceSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"selectedId") ) { return set_selectedId(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_selectedId") ) { _selectedId=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedLabel") ) { return set_selectedLabel(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedLabel") ) { _selectedLabel=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { if (inCallProp) return set_skipButtonUpdate(inValue);skipButtonUpdate=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUIDropDownMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("skipButtonUpdate"));
	outFields->push(HX_CSTRING("selectedId"));
	outFields->push(HX_CSTRING("selectedLabel"));
	outFields->push(HX_CSTRING("_selectedId"));
	outFields->push(HX_CSTRING("_selectedLabel"));
	outFields->push(HX_CSTRING("header"));
	outFields->push(HX_CSTRING("list"));
	outFields->push(HX_CSTRING("dropPanel"));
	outFields->push(HX_CSTRING("params"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CLICK_EVENT"),
	HX_CSTRING("makeStrIdLabelArray"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxUIDropDownMenu_obj,skipButtonUpdate),HX_CSTRING("skipButtonUpdate")},
	{hx::fsString,(int)offsetof(FlxUIDropDownMenu_obj,_selectedId),HX_CSTRING("_selectedId")},
	{hx::fsString,(int)offsetof(FlxUIDropDownMenu_obj,_selectedLabel),HX_CSTRING("_selectedLabel")},
	{hx::fsObject /*::flixel::addons::ui::FlxUIDropDownHeader*/ ,(int)offsetof(FlxUIDropDownMenu_obj,header),HX_CSTRING("header")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxUIDropDownMenu_obj,list),HX_CSTRING("list")},
	{hx::fsObject /*::flixel::addons::ui::FlxUI9SliceSprite*/ ,(int)offsetof(FlxUIDropDownMenu_obj,dropPanel),HX_CSTRING("dropPanel")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUIDropDownMenu_obj,params),HX_CSTRING("params")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUIDropDownMenu_obj,callback),HX_CSTRING("callback")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("skipButtonUpdate"),
	HX_CSTRING("set_skipButtonUpdate"),
	HX_CSTRING("_selectedId"),
	HX_CSTRING("_selectedLabel"),
	HX_CSTRING("get_selectedId"),
	HX_CSTRING("set_selectedId"),
	HX_CSTRING("get_selectedLabel"),
	HX_CSTRING("set_selectedLabel"),
	HX_CSTRING("header"),
	HX_CSTRING("list"),
	HX_CSTRING("dropPanel"),
	HX_CSTRING("params"),
	HX_CSTRING("set_params"),
	HX_CSTRING("callback"),
	HX_CSTRING("setData"),
	HX_CSTRING("selectSomething"),
	HX_CSTRING("makeListButton"),
	HX_CSTRING("changeLabelByIndex"),
	HX_CSTRING("changeLabelById"),
	HX_CSTRING("getBtnByIndex"),
	HX_CSTRING("getBtnById"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("showList"),
	HX_CSTRING("onDropdown"),
	HX_CSTRING("onClickItem"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIDropDownMenu_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxUIDropDownMenu_obj::CLICK_EVENT,"CLICK_EVENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIDropDownMenu_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxUIDropDownMenu_obj::CLICK_EVENT,"CLICK_EVENT");
};

#endif

Class FlxUIDropDownMenu_obj::__mClass;

void FlxUIDropDownMenu_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxUIDropDownMenu"), hx::TCanCast< FlxUIDropDownMenu_obj> ,sStaticFields,sMemberFields,
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

void FlxUIDropDownMenu_obj::__boot()
{
	CLICK_EVENT= HX_CSTRING("click_dropdown");
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
