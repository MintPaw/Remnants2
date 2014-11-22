#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
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
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxInputText
#include <flixel/addons/ui/FlxInputText.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxUICheckBox
#include <flixel/addons/ui/FlxUICheckBox.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxUIInputText
#include <flixel/addons/ui/FlxUIInputText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUINumericStepper
#include <flixel/addons/ui/FlxUINumericStepper.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIRadioGroup
#include <flixel/addons/ui/FlxUIRadioGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIRegion
#include <flixel/addons/ui/FlxUIRegion.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISpriteButton
#include <flixel/addons/ui/FlxUISpriteButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITabMenu
#include <flixel/addons/ui/FlxUITabMenu.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITileTest
#include <flixel/addons/ui/FlxUITileTest.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FontDef
#include <flixel/addons/ui/FontDef.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_Rounding
#include <flixel/addons/ui/Rounding.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_StrIdLabel
#include <flixel/addons/ui/StrIdLabel.h>
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
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFireTongue
#include <flixel/addons/ui/interfaces/IFireTongue.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
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
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasNodeAccess
#include <haxe/xml/_Fast/HasNodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
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
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
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

Void FlxUI_obj::__construct(::haxe::xml::Fast data,::flixel::addons::ui::interfaces::IEventGetter ptr,::flixel::addons::ui::FlxUI superIndex_,::flixel::addons::ui::interfaces::IFireTongue tongue_,::String __o_liveFilePath_)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUI","new",0x89fff7c7,"flixel.addons.ui.FlxUI.new","flixel/addons/ui/FlxUI.hx",49,0xf354486a)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
HX_STACK_ARG(ptr,"ptr")
HX_STACK_ARG(superIndex_,"superIndex_")
HX_STACK_ARG(tongue_,"tongue_")
HX_STACK_ARG(__o_liveFilePath_,"liveFilePath_")
::String liveFilePath_ = __o_liveFilePath_.Default(HX_CSTRING(""));
{
	HX_STACK_LINE(949)
	this->_safe_input_delay_elapsed = 0.0;
	HX_STACK_LINE(944)
	this->_curr_mode = HX_CSTRING("");
	HX_STACK_LINE(88)
	this->getTextFallback = null();
	HX_STACK_LINE(57)
	this->failed_by = (int)0;
	HX_STACK_LINE(56)
	this->failed = false;
	HX_STACK_LINE(54)
	this->safe_input_delay_time = 0.01;
	HX_STACK_LINE(53)
	this->do_safe_input_delay = true;
	HX_STACK_LINE(212)
	super::__construct(null(),null());
	HX_STACK_LINE(213)
	this->_ptr_tongue = tongue_;
	HX_STACK_LINE(221)
	this->_ptr = ptr;
	HX_STACK_LINE(222)
	if (((superIndex_ != null()))){
		HX_STACK_LINE(223)
		this->setSuperIndex(superIndex_);
	}
	HX_STACK_LINE(225)
	if (((data != null()))){
		HX_STACK_LINE(226)
		this->load(data);
	}
}
;
	return null();
}

//FlxUI_obj::~FlxUI_obj() { }

Dynamic FlxUI_obj::__CreateEmpty() { return  new FlxUI_obj; }
hx::ObjectPtr< FlxUI_obj > FlxUI_obj::__new(::haxe::xml::Fast data,::flixel::addons::ui::interfaces::IEventGetter ptr,::flixel::addons::ui::FlxUI superIndex_,::flixel::addons::ui::interfaces::IFireTongue tongue_,::String __o_liveFilePath_)
{  hx::ObjectPtr< FlxUI_obj > result = new FlxUI_obj();
	result->__construct(data,ptr,superIndex_,tongue_,__o_liveFilePath_);
	return result;}

Dynamic FlxUI_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUI_obj > result = new FlxUI_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

hx::Object *FlxUI_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::addons::ui::interfaces::IEventGetter_obj)) return operator ::flixel::addons::ui::interfaces::IEventGetter_obj *();
	return super::__ToInterface(inType);
}

::flixel::addons::ui::interfaces::IFireTongue FlxUI_obj::get_tongue( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","get_tongue",0x7aee5906,"flixel.addons.ui.FlxUI.get_tongue","flixel/addons/ui/FlxUI.hx",67,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	return this->_ptr_tongue;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUI_obj,get_tongue,return )

::flixel::addons::ui::interfaces::IFireTongue FlxUI_obj::set_tongue( ::flixel::addons::ui::interfaces::IFireTongue t){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","set_tongue",0x7e6bf77a,"flixel.addons.ui.FlxUI.set_tongue","flixel/addons/ui/FlxUI.hx",69,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(70)
	this->_ptr_tongue = t;
	HX_STACK_LINE(71)
	this->_tongueSet(this->group->members,t);
	HX_STACK_LINE(72)
	return this->_ptr_tongue;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,set_tongue,return )

::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::set_focus( ::flixel::addons::ui::interfaces::IFlxUIWidget widget){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","set_focus",0xbe69d6e2,"flixel.addons.ui.FlxUI.set_focus","flixel/addons/ui/FlxUI.hx",76,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(widget,"widget")
	HX_STACK_LINE(77)
	if (((this->focus != null()))){
		HX_STACK_LINE(78)
		this->onFocusLost(this->focus);
	}
	HX_STACK_LINE(80)
	this->focus = widget;
	HX_STACK_LINE(81)
	if (((this->focus != null()))){
		HX_STACK_LINE(82)
		this->onFocus(this->focus);
	}
	HX_STACK_LINE(84)
	return widget;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,set_focus,return )

Void FlxUI_obj::_tongueSet( Array< ::Dynamic > list,::flixel::addons::ui::interfaces::IFireTongue tongue){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_tongueSet",0x62471f78,"flixel.addons.ui.FlxUI._tongueSet","flixel/addons/ui/FlxUI.hx",98,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(list,"list")
		HX_STACK_ARG(tongue,"tongue")
		HX_STACK_LINE(98)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(98)
		while((true)){
			HX_STACK_LINE(98)
			if ((!(((_g < list->length))))){
				HX_STACK_LINE(98)
				break;
			}
			HX_STACK_LINE(98)
			::flixel::FlxSprite fs = list->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(fs,"fs");
			HX_STACK_LINE(98)
			++(_g);
			HX_STACK_LINE(99)
			if ((::Std_obj::is(fs,hx::ClassOf< ::flixel::addons::ui::FlxUIGroup >()))){
				HX_STACK_LINE(100)
				::flixel::addons::ui::FlxUIGroup g;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(100)
				g = hx::TCast< flixel::addons::ui::FlxUIGroup >::cast(fs);
				HX_STACK_LINE(101)
				this->_tongueSet(g->group->members,tongue);
			}
			else{
				HX_STACK_LINE(102)
				if ((::Std_obj::is(fs,hx::ClassOf< ::flixel::addons::ui::FlxUI >()))){
					HX_STACK_LINE(103)
					::flixel::addons::ui::FlxUI fu;		HX_STACK_VAR(fu,"fu");
					HX_STACK_LINE(103)
					fu = hx::TCast< flixel::addons::ui::FlxUI >::cast(fs);
					HX_STACK_LINE(104)
					fu->set_tongue(tongue);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_tongueSet,(void))

Void FlxUI_obj::callEvent( ::String id,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,Dynamic params){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","callEvent",0x94ea5143,"flixel.addons.ui.FlxUI.callEvent","flixel/addons/ui/FlxUI.hx",183,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(sender,"sender")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(183)
		this->getEvent(id,sender,data,params);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxUI_obj,callEvent,(void))

Void FlxUI_obj::getEvent( ::String id,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,Dynamic params){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","getEvent",0xd6447add,"flixel.addons.ui.FlxUI.getEvent","flixel/addons/ui/FlxUI.hx",187,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(sender,"sender")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(187)
		if (((this->_ptr != null()))){
			HX_STACK_LINE(188)
			this->_ptr->getEvent(id,sender,data,params);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxUI_obj,getEvent,(void))

Dynamic FlxUI_obj::getRequest( ::String id,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,Dynamic params){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getRequest",0x8a6908d2,"flixel.addons.ui.FlxUI.getRequest","flixel/addons/ui/FlxUI.hx",192,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(sender,"sender")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(193)
	if (((this->_ptr != null()))){
		HX_STACK_LINE(194)
		return this->_ptr->getRequest(id,sender,data,params);
	}
	HX_STACK_LINE(196)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxUI_obj,getRequest,return )

Void FlxUI_obj::onFocus( ::flixel::addons::ui::interfaces::IFlxUIWidget widget){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","onFocus",0x59586520,"flixel.addons.ui.FlxUI.onFocus","flixel/addons/ui/FlxUI.hx",231,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(widget,"widget")
		HX_STACK_LINE(231)
		if ((::Std_obj::is(widget,hx::ClassOf< ::flixel::addons::ui::FlxUIDropDownMenu >()))){
			HX_STACK_LINE(233)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(233)
			Array< ::Dynamic > _g1 = this->group->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(233)
			while((true)){
				HX_STACK_LINE(233)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(233)
					break;
				}
				HX_STACK_LINE(233)
				::flixel::FlxSprite asset = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(asset,"asset");
				HX_STACK_LINE(233)
				++(_g);
				HX_STACK_LINE(234)
				this->setWidgetSuppression(asset,widget,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,onFocus,(void))

Void FlxUI_obj::setWidgetSuppression( ::flixel::FlxSprite asset,::flixel::addons::ui::interfaces::IFlxUIWidget butNotThisOne,hx::Null< bool >  __o_suppressed){
bool suppressed = __o_suppressed.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","setWidgetSuppression",0x343faf06,"flixel.addons.ui.FlxUI.setWidgetSuppression","flixel/addons/ui/FlxUI.hx",240,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(asset,"asset")
	HX_STACK_ARG(butNotThisOne,"butNotThisOne")
	HX_STACK_ARG(suppressed,"suppressed")
{
		HX_STACK_LINE(240)
		if ((::Std_obj::is(asset,hx::ClassOf< ::flixel::addons::ui::interfaces::IFlxUIClickable >()))){
			HX_STACK_LINE(241)
			bool skip = false;		HX_STACK_VAR(skip,"skip");
			HX_STACK_LINE(242)
			if ((::Std_obj::is(asset,hx::ClassOf< ::flixel::addons::ui::FlxUIDropDownMenu >()))){
				HX_STACK_LINE(243)
				::flixel::addons::ui::FlxUIDropDownMenu ddasset = asset;		HX_STACK_VAR(ddasset,"ddasset");
				HX_STACK_LINE(244)
				if (((ddasset == butNotThisOne))){
					HX_STACK_LINE(245)
					skip = true;
				}
			}
			HX_STACK_LINE(248)
			if ((!(skip))){
				HX_STACK_LINE(249)
				::flixel::addons::ui::interfaces::IFlxUIClickable ibtn = asset;		HX_STACK_VAR(ibtn,"ibtn");
				HX_STACK_LINE(250)
				ibtn->__Field(HX_CSTRING("set_skipButtonUpdate"),true)(suppressed);
			}
		}
		else{
			HX_STACK_LINE(252)
			if ((::Std_obj::is(asset,hx::ClassOf< ::flixel::addons::ui::FlxUIGroup >()))){
				HX_STACK_LINE(253)
				::flixel::addons::ui::FlxUIGroup g = asset;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(254)
				{
					HX_STACK_LINE(254)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(254)
					Array< ::Dynamic > _g1 = g->group->members;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(254)
					while((true)){
						HX_STACK_LINE(254)
						if ((!(((_g < _g1->length))))){
							HX_STACK_LINE(254)
							break;
						}
						HX_STACK_LINE(254)
						::flixel::FlxSprite groupAsset = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(groupAsset,"groupAsset");
						HX_STACK_LINE(254)
						++(_g);
						HX_STACK_LINE(255)
						this->setWidgetSuppression(groupAsset,butNotThisOne,suppressed);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,setWidgetSuppression,(void))

Void FlxUI_obj::onFocusLost( ::flixel::addons::ui::interfaces::IFlxUIWidget widget){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","onFocusLost",0xfd524b24,"flixel.addons.ui.FlxUI.onFocusLost","flixel/addons/ui/FlxUI.hx",266,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(widget,"widget")
		HX_STACK_LINE(266)
		if ((::Std_obj::is(widget,hx::ClassOf< ::flixel::addons::ui::FlxUIDropDownMenu >()))){
			HX_STACK_LINE(270)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(270)
			Array< ::Dynamic > _g1 = this->group->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(270)
			while((true)){
				HX_STACK_LINE(270)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(270)
					break;
				}
				HX_STACK_LINE(270)
				::flixel::FlxSprite asset = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(asset,"asset");
				HX_STACK_LINE(270)
				++(_g);
				HX_STACK_LINE(271)
				this->setWidgetSuppression(asset,null(),false);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,onFocusLost,(void))

Void FlxUI_obj::setSuperIndex( ::flixel::addons::ui::FlxUI flxUI){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","setSuperIndex",0x53bc1800,"flixel.addons.ui.FlxUI.setSuperIndex","flixel/addons/ui/FlxUI.hx",282,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(flxUI,"flxUI")
		HX_STACK_LINE(282)
		this->_superIndexUI = flxUI;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,setSuperIndex,(void))

Void FlxUI_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","update",0x5c40b902,"flixel.addons.ui.FlxUI.update","flixel/addons/ui/FlxUI.hx",285,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(286)
		if ((this->do_safe_input_delay)){
			HX_STACK_LINE(287)
			hx::AddEq(this->_safe_input_delay_elapsed,::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(288)
			if (((this->_safe_input_delay_elapsed > this->safe_input_delay_time))){
				HX_STACK_LINE(289)
				this->do_safe_input_delay = false;
			}
			else{
				HX_STACK_LINE(291)
				return null();
			}
		}
		HX_STACK_LINE(294)
		this->super::update(elapsed);
	}
return null();
}


Void FlxUI_obj::showGroup( ::String key,bool Show){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","showGroup",0x5b3f47a9,"flixel.addons.ui.FlxUI.showGroup","flixel/addons/ui/FlxUI.hx",298,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(Show,"Show")
		HX_STACK_LINE(299)
		::flixel::addons::ui::FlxUIGroup group = this->getGroup(key,false);		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(300)
		if (((group != null()))){
			HX_STACK_LINE(301)
			group->set_visible(Show);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,showGroup,(void))

Void FlxUI_obj::showAsset( ::String key,bool Show,Dynamic Active){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","showAsset",0xe783fe5a,"flixel.addons.ui.FlxUI.showAsset","flixel/addons/ui/FlxUI.hx",306,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(Show,"Show")
		HX_STACK_ARG(Active,"Active")
		HX_STACK_LINE(307)
		::flixel::addons::ui::interfaces::IFlxUIWidget asset = this->getAsset(key,false);		HX_STACK_VAR(asset,"asset");
		HX_STACK_LINE(308)
		if (((asset != null()))){
			HX_STACK_LINE(309)
			asset->__Field(HX_CSTRING("set_visible"),true)(Show);
			HX_STACK_LINE(310)
			if (((Active == null()))){
				HX_STACK_LINE(312)
				asset->__Field(HX_CSTRING("set_active"),true)(Show);
			}
			else{
				HX_STACK_LINE(316)
				asset->__Field(HX_CSTRING("set_active"),true)(Active);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,showAsset,(void))

::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::removeAsset( ::String key,hx::Null< bool >  __o_destroy){
bool destroy = __o_destroy.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","removeAsset",0xe039ad73,"flixel.addons.ui.FlxUI.removeAsset","flixel/addons/ui/FlxUI.hx",328,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(destroy,"destroy")
{
		HX_STACK_LINE(329)
		::flixel::addons::ui::interfaces::IFlxUIWidget asset = this->getAsset(key,false);		HX_STACK_VAR(asset,"asset");
		HX_STACK_LINE(330)
		if (((asset != null()))){
			HX_STACK_LINE(331)
			this->replaceInGroup(asset,null(),true);
			HX_STACK_LINE(332)
			this->_asset_index->remove(key);
		}
		HX_STACK_LINE(334)
		if (((bool(destroy) && bool((asset != null()))))){
			HX_STACK_LINE(335)
			asset->__Field(HX_CSTRING("destroy"),true)();
			HX_STACK_LINE(336)
			asset = null();
		}
		HX_STACK_LINE(338)
		return asset;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,removeAsset,return )

bool FlxUI_obj::addAsset( ::flixel::addons::ui::interfaces::IFlxUIWidget asset,::String key,::String __o_group_id,hx::Null< bool >  __o_recursive){
::String group_id = __o_group_id.Default(HX_CSTRING(""));
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","addAsset",0xa03f3348,"flixel.addons.ui.FlxUI.addAsset","flixel/addons/ui/FlxUI.hx",349,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(asset,"asset")
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(group_id,"group_id")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(350)
		if ((this->_asset_index->exists(key))){
			HX_STACK_LINE(351)
			return false;
		}
		HX_STACK_LINE(354)
		::flixel::addons::ui::FlxUIGroup g = this->getGroup(group_id,recursive);		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(355)
		if (((g != null()))){
			HX_STACK_LINE(356)
			g->add(asset);
		}
		else{
			HX_STACK_LINE(358)
			this->add(asset);
		}
		HX_STACK_LINE(361)
		this->_asset_index->set(key,asset);
		HX_STACK_LINE(363)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxUI_obj,addAsset,return )

::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::replaceAsset( ::String key,::flixel::addons::ui::interfaces::IFlxUIWidget replace,hx::Null< bool >  __o_center_x,hx::Null< bool >  __o_center_y,hx::Null< bool >  __o_destroy_old){
bool center_x = __o_center_x.Default(true);
bool center_y = __o_center_y.Default(true);
bool destroy_old = __o_destroy_old.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","replaceAsset",0xb0d588d5,"flixel.addons.ui.FlxUI.replaceAsset","flixel/addons/ui/FlxUI.hx",374,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(replace,"replace")
	HX_STACK_ARG(center_x,"center_x")
	HX_STACK_ARG(center_y,"center_y")
	HX_STACK_ARG(destroy_old,"destroy_old")
{
		HX_STACK_LINE(376)
		::flixel::addons::ui::interfaces::IFlxUIWidget original = this->getAsset(key,false);		HX_STACK_VAR(original,"original");
		HX_STACK_LINE(378)
		if (((original != null()))){
			HX_STACK_LINE(380)
			if ((!(center_x))){
				HX_STACK_LINE(381)
				replace->__Field(HX_CSTRING("set_x"),true)(original->__Field(HX_CSTRING("x"),true));
			}
			else{
				HX_STACK_LINE(383)
				Float _g = original->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(383)
				Float _g1 = replace->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(383)
				Float _g2 = (_g - _g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(383)
				Float _g3 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(383)
				Float _g4 = (original->__Field(HX_CSTRING("x"),true) + _g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(383)
				replace->__Field(HX_CSTRING("set_x"),true)(_g4);
			}
			HX_STACK_LINE(385)
			if ((!(center_y))){
				HX_STACK_LINE(386)
				replace->__Field(HX_CSTRING("set_y"),true)(original->__Field(HX_CSTRING("y"),true));
			}
			else{
				HX_STACK_LINE(388)
				Float _g5 = original->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(388)
				Float _g6 = replace->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(388)
				Float _g7 = (_g5 - _g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(388)
				Float _g8 = (Float(_g7) / Float((int)2));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(388)
				Float _g9 = (original->__Field(HX_CSTRING("y"),true) + _g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(388)
				replace->__Field(HX_CSTRING("set_y"),true)(_g9);
			}
			HX_STACK_LINE(392)
			this->replaceInGroup(original,replace,null());
			HX_STACK_LINE(395)
			this->_asset_index->remove(key);
			HX_STACK_LINE(398)
			this->_asset_index->set(key,replace);
			HX_STACK_LINE(401)
			if ((destroy_old)){
				HX_STACK_LINE(402)
				original->__Field(HX_CSTRING("destroy"),true)();
				HX_STACK_LINE(403)
				original = null();
			}
		}
		HX_STACK_LINE(407)
		return original;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxUI_obj,replaceAsset,return )

Void FlxUI_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","destroy",0xe31793e1,"flixel.addons.ui.FlxUI.destroy","flixel/addons/ui/FlxUI.hx",415,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(416)
		if (((this->_group_index != null()))){
			HX_STACK_LINE(417)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_group_index->keys());  __it->hasNext(); ){
				::String key = __it->next();
				this->_group_index->remove(key);
			}
			HX_STACK_LINE(419)
			this->_group_index = null();
		}
		HX_STACK_LINE(421)
		if (((this->_asset_index != null()))){
			HX_STACK_LINE(422)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_asset_index->keys());  __it->hasNext(); ){
				::String key = __it->next();
				this->_asset_index->remove(key);
			}
			HX_STACK_LINE(424)
			this->_asset_index = null();
		}
		HX_STACK_LINE(426)
		if (((this->_definition_index != null()))){
			HX_STACK_LINE(427)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_definition_index->keys());  __it->hasNext(); ){
				::String key = __it->next();
				this->_definition_index->remove(key);
			}
			HX_STACK_LINE(429)
			this->_definition_index = null();
		}
		HX_STACK_LINE(431)
		if (((this->_variable_index != null()))){
			HX_STACK_LINE(432)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_variable_index->keys());  __it->hasNext(); ){
				::String key = __it->next();
				this->_variable_index->remove(key);
			}
			HX_STACK_LINE(434)
			this->_variable_index = null();
		}
		HX_STACK_LINE(436)
		this->_superIndexUI = null();
		HX_STACK_LINE(437)
		this->_ptr_tongue = null();
		HX_STACK_LINE(438)
		this->super::destroy();
	}
return null();
}


Void FlxUI_obj::load( ::haxe::xml::Fast data){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","load",0x34adecdf,"flixel.addons.ui.FlxUI.load","flixel/addons/ui/FlxUI.hx",448,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(449)
		::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(449)
		this->_group_index = _g;
		HX_STACK_LINE(450)
		::haxe::ds::StringMap _g1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(450)
		this->_asset_index = _g1;
		HX_STACK_LINE(451)
		::haxe::ds::StringMap _g2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(451)
		this->_definition_index = _g2;
		HX_STACK_LINE(452)
		::haxe::ds::StringMap _g3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(452)
		this->_variable_index = _g3;
		HX_STACK_LINE(453)
		::haxe::ds::StringMap _g4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(453)
		this->_mode_index = _g4;
		HX_STACK_LINE(455)
		if (((data != null()))){
			HX_STACK_LINE(457)
			this->_data = data;
			HX_STACK_LINE(460)
			if ((data->hasNode->resolve(HX_CSTRING("include")))){
				HX_STACK_LINE(462)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("include"))->iterator());  __it->hasNext(); ){
					::haxe::xml::Fast inc_data = __it->next();
					{
						HX_STACK_LINE(463)
						::String inc_id = inc_data->att->resolve(HX_CSTRING("id"));		HX_STACK_VAR(inc_id,"inc_id");
						HX_STACK_LINE(465)
						::haxe::xml::Fast liveFile = null();		HX_STACK_VAR(liveFile,"liveFile");
						HX_STACK_LINE(482)
						::haxe::xml::Fast inc_xml = null();		HX_STACK_VAR(inc_xml,"inc_xml");
						HX_STACK_LINE(483)
						if (((liveFile == null()))){
							HX_STACK_LINE(485)
							Dynamic _g5 = ::flixel::addons::ui::U_obj::xml(inc_id,null(),null(),null());		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(485)
							inc_xml = _g5;
						}
						else{
							HX_STACK_LINE(488)
							inc_xml = liveFile;
						}
						HX_STACK_LINE(491)
						if (((inc_xml != null()))){
							HX_STACK_LINE(492)
							for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(inc_xml->nodes->resolve(HX_CSTRING("definition"))->iterator());  __it->hasNext(); ){
								::haxe::xml::Fast def_data = __it->next();
								{
									HX_STACK_LINE(494)
									::String _g6 = def_data->att->resolve(HX_CSTRING("id"));		HX_STACK_VAR(_g6,"_g6");
									HX_STACK_LINE(494)
									::String def_id = (HX_CSTRING("include:") + _g6);		HX_STACK_VAR(def_id,"def_id");
									HX_STACK_LINE(495)
									this->_definition_index->set(def_id,def_data);
								}
;
							}
						}
					}
;
				}
			}
			HX_STACK_LINE(505)
			if ((data->hasNode->resolve(HX_CSTRING("definition")))){
				HX_STACK_LINE(506)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("definition"))->iterator());  __it->hasNext(); ){
					::haxe::xml::Fast def_data = __it->next();
					if ((this->_loadTest(def_data))){
						HX_STACK_LINE(509)
						::String def_id = def_data->att->resolve(HX_CSTRING("id"));		HX_STACK_VAR(def_id,"def_id");
						HX_STACK_LINE(510)
						this->_definition_index->set(def_id,def_data);
					}
;
				}
			}
			HX_STACK_LINE(516)
			if ((data->hasNode->resolve(HX_CSTRING("variable")))){
				HX_STACK_LINE(517)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("variable"))->iterator());  __it->hasNext(); ){
					::haxe::xml::Fast var_data = __it->next();
					if ((this->_loadTest(var_data))){
						HX_STACK_LINE(520)
						::String var_id = ::flixel::addons::ui::U_obj::xml_str(var_data->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(var_id,"var_id");
						HX_STACK_LINE(521)
						::String var_value = ::flixel::addons::ui::U_obj::xml_str(var_data->x,HX_CSTRING("value"),null(),null());		HX_STACK_VAR(var_value,"var_value");
						HX_STACK_LINE(522)
						if (((var_id != HX_CSTRING("")))){
							HX_STACK_LINE(524)
							this->_variable_index->set(var_id,var_value);
						}
					}
;
				}
			}
			HX_STACK_LINE(531)
			if ((data->hasNode->resolve(HX_CSTRING("mode")))){
				HX_STACK_LINE(532)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("mode"))->iterator());  __it->hasNext(); ){
					::haxe::xml::Fast mode_data = __it->next();
					if ((this->_loadTest(mode_data))){
						HX_STACK_LINE(535)
						::haxe::xml::Fast mode_data2 = this->applyNodeConditionals(mode_data);		HX_STACK_VAR(mode_data2,"mode_data2");
						HX_STACK_LINE(536)
						::String mode_id = mode_data->att->resolve(HX_CSTRING("id"));		HX_STACK_VAR(mode_id,"mode_id");
						HX_STACK_LINE(538)
						this->_mode_index->set(mode_id,mode_data2);
					}
;
				}
			}
			HX_STACK_LINE(544)
			if ((data->hasNode->resolve(HX_CSTRING("group")))){
				HX_STACK_LINE(545)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("group"))->iterator());  __it->hasNext(); ){
					::haxe::xml::Fast group_data = __it->next();
					if ((this->_loadTest(group_data))){
						HX_STACK_LINE(549)
						::String id = ::flixel::addons::ui::U_obj::xml_str(group_data->x,HX_CSTRING("id"),null(),null());		HX_STACK_VAR(id,"id");
						HX_STACK_LINE(550)
						::String custom = ::flixel::addons::ui::U_obj::xml_str(group_data->x,HX_CSTRING("custom"),null(),null());		HX_STACK_VAR(custom,"custom");
						HX_STACK_LINE(552)
						::flixel::addons::ui::FlxUIGroup tempGroup = null();		HX_STACK_VAR(tempGroup,"tempGroup");
						HX_STACK_LINE(555)
						if (((custom != HX_CSTRING("")))){
							HX_STACK_LINE(557)
							Dynamic result = this->_ptr->getRequest(HX_CSTRING("ui_get_group:"),hx::ObjectPtr<OBJ_>(this),custom,null());		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(558)
							if (((  (((result != null()))) ? bool(::Std_obj::is(result,hx::ClassOf< ::flixel::addons::ui::FlxUIGroup >())) : bool(false) ))){
								HX_STACK_LINE(560)
								tempGroup = result;
							}
						}
						HX_STACK_LINE(564)
						if (((tempGroup == null()))){
							HX_STACK_LINE(566)
							::flixel::addons::ui::FlxUIGroup _g7 = ::flixel::addons::ui::FlxUIGroup_obj::__new(null(),null());		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(566)
							tempGroup = _g7;
						}
						HX_STACK_LINE(569)
						tempGroup->id = id;
						HX_STACK_LINE(570)
						this->_group_index->set(id,tempGroup);
						HX_STACK_LINE(571)
						this->add(tempGroup);
					}
;
				}
			}
			HX_STACK_LINE(576)
			::Xml _g8 = data->x->firstElement();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(576)
			if (((_g8 != null()))){
				HX_STACK_LINE(578)
				::Xml node;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(579)
				for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(data->x->elements());  __it->hasNext(); ){
					::Xml node1 = __it->next();
					this->_loadSub(node1,null());
				}
			}
			HX_STACK_LINE(585)
			this->_postLoad(data);
		}
		else{
			HX_STACK_LINE(588)
			this->_onFinishLoad();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,load,(void))

Void FlxUI_obj::_loadSub( ::Xml node,hx::Null< int >  __o_iteration){
int iteration = __o_iteration.Default(0);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadSub",0x43431fb4,"flixel.addons.ui.FlxUI._loadSub","flixel/addons/ui/FlxUI.hx",593,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(node,"node")
	HX_STACK_ARG(iteration,"iteration")
{
		HX_STACK_LINE(594)
		int loadsubi = (int)0;		HX_STACK_VAR(loadsubi,"loadsubi");
		HX_STACK_LINE(595)
		::String error = HX_CSTRING(" ");		HX_STACK_VAR(error,"error");
		HX_STACK_LINE(596)
		::String type = node->get_nodeName();		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(597)
		type.toLowerCase();
		HX_STACK_LINE(598)
		::haxe::xml::Fast obj = ::haxe::xml::Fast_obj::__new(node);		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(602)
		if (((type == HX_CSTRING("load_if")))){
			HX_STACK_LINE(604)
			if ((this->_loadTest(obj))){
				HX_STACK_LINE(606)
				::Xml _g = node->firstElement();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(606)
				if (((_g != null()))){
					HX_STACK_LINE(608)
					for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(node->elements());  __it->hasNext(); ){
						::Xml subNode = __it->next();
						this->_loadSub(subNode,(iteration + (int)1));
					}
				}
			}
			HX_STACK_LINE(615)
			return null();
		}
		HX_STACK_LINE(618)
		::String group_id = HX_CSTRING("");		HX_STACK_VAR(group_id,"group_id");
		HX_STACK_LINE(619)
		::flixel::addons::ui::FlxUIGroup tempGroup = null();		HX_STACK_VAR(tempGroup,"tempGroup");
		HX_STACK_LINE(621)
		::String thing_id = ::flixel::addons::ui::U_obj::xml_str(obj->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(thing_id,"thing_id");
		HX_STACK_LINE(623)
		if ((obj->has->resolve(HX_CSTRING("group")))){
			HX_STACK_LINE(624)
			::String _g1 = obj->att->resolve(HX_CSTRING("group"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(624)
			group_id = _g1;
			HX_STACK_LINE(625)
			::flixel::addons::ui::FlxUIGroup _g2 = this->getGroup(group_id,null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(625)
			tempGroup = _g2;
		}
		HX_STACK_LINE(630)
		::flixel::addons::ui::interfaces::IFlxUIWidget thing = this->_loadThing(type,obj);		HX_STACK_VAR(thing,"thing");
		HX_STACK_LINE(632)
		if (((thing != null()))){
			HX_STACK_LINE(633)
			this->_loadGlobals(obj,thing);
			HX_STACK_LINE(634)
			if (((tempGroup != null()))){
				HX_STACK_LINE(635)
				tempGroup->add(thing);
			}
			else{
				HX_STACK_LINE(637)
				this->add(thing);
			}
			HX_STACK_LINE(640)
			this->_loadPosition(obj,thing);
			HX_STACK_LINE(642)
			if (((bool((thing_id != null())) && bool((thing_id != HX_CSTRING("")))))){
				HX_STACK_LINE(643)
				this->_asset_index->set(thing_id,thing);
				HX_STACK_LINE(646)
				thing->__FieldRef(HX_CSTRING("id")) = thing_id;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_loadSub,(void))

Void FlxUI_obj::_loadGlobals( ::haxe::xml::Fast data,Dynamic thing){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadGlobals",0xe1eda5e4,"flixel.addons.ui.FlxUI._loadGlobals","flixel/addons/ui/FlxUI.hx",653,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(thing,"thing")
		HX_STACK_LINE(653)
		if ((::Std_obj::is(thing,hx::ClassOf< ::flixel::FlxBasic >()))){
			HX_STACK_LINE(655)
			bool isVis = ::flixel::addons::ui::U_obj::xml_bool(data->x,HX_CSTRING("visible"),true);		HX_STACK_VAR(isVis,"isVis");
			HX_STACK_LINE(656)
			bool isActive = ::flixel::addons::ui::U_obj::xml_bool(data->x,HX_CSTRING("active"),true);		HX_STACK_VAR(isActive,"isActive");
			HX_STACK_LINE(658)
			thing->__FieldRef(HX_CSTRING("visible")) = isVis;
			HX_STACK_LINE(659)
			thing->__FieldRef(HX_CSTRING("active")) = isActive;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_loadGlobals,(void))

Void FlxUI_obj::_postLoad( ::haxe::xml::Fast data){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_postLoad",0xe07320ac,"flixel.addons.ui.FlxUI._postLoad","flixel/addons/ui/FlxUI.hx",663,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(665)
		::Xml _g = data->x->firstElement();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(665)
		if (((_g != null()))){
			HX_STACK_LINE(667)
			::Xml node;		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(668)
			for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(data->x->elements());  __it->hasNext(); ){
				::Xml node1 = __it->next();
				{
					HX_STACK_LINE(670)
					::String _g1 = node1->get_nodeName().toLowerCase();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(670)
					::haxe::xml::Fast _g2 = ::haxe::xml::Fast_obj::__new(node1);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(670)
					this->_postLoadThing(_g1,_g2);
				}
;
			}
		}
		HX_STACK_LINE(674)
		if ((data->hasNode->resolve(HX_CSTRING("mode")))){
			HX_STACK_LINE(675)
			for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("mode"))->iterator());  __it->hasNext(); ){
				::haxe::xml::Fast mode_node = __it->next();
				{
					HX_STACK_LINE(676)
					bool is_default = ::flixel::addons::ui::U_obj::xml_bool(mode_node->x,HX_CSTRING("is_default"),null());		HX_STACK_VAR(is_default,"is_default");
					HX_STACK_LINE(677)
					if ((is_default)){
						HX_STACK_LINE(678)
						::String mode_id = ::flixel::addons::ui::U_obj::xml_str(mode_node->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(mode_id,"mode_id");
						HX_STACK_LINE(679)
						this->setMode(mode_id,null());
						HX_STACK_LINE(680)
						break;
					}
				}
;
			}
		}
		HX_STACK_LINE(685)
		if (((this->_failure_checks != null()))){
			HX_STACK_LINE(686)
			{
				HX_STACK_LINE(686)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(686)
				Array< ::Dynamic > _g11 = this->_failure_checks;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(686)
				while((true)){
					HX_STACK_LINE(686)
					if ((!(((_g1 < _g11->length))))){
						HX_STACK_LINE(686)
						break;
					}
					HX_STACK_LINE(686)
					::haxe::xml::Fast data1 = _g11->__get(_g1).StaticCast< ::haxe::xml::Fast >();		HX_STACK_VAR(data1,"data1");
					HX_STACK_LINE(686)
					++(_g1);
					HX_STACK_LINE(687)
					if ((this->_checkFailure(data1))){
						HX_STACK_LINE(688)
						this->failed = true;
						HX_STACK_LINE(689)
						break;
					}
				}
			}
			HX_STACK_LINE(692)
			::flixel::addons::ui::U_obj::clearArraySoft(this->_failure_checks);
			HX_STACK_LINE(693)
			this->_failure_checks = null();
		}
		HX_STACK_LINE(696)
		this->_onFinishLoad();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_postLoad,(void))

::String FlxUI_obj::get_currMode( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","get_currMode",0xd78f9337,"flixel.addons.ui.FlxUI.get_currMode","flixel/addons/ui/FlxUI.hx",700,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(700)
	return this->_curr_mode;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUI_obj,get_currMode,return )

::String FlxUI_obj::set_currMode( ::String m){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","set_currMode",0xec88b6ab,"flixel.addons.ui.FlxUI.set_currMode","flixel/addons/ui/FlxUI.hx",701,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(701)
	this->setMode(m,null());
	HX_STACK_LINE(701)
	return this->_curr_mode;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,set_currMode,return )

Void FlxUI_obj::setMode( ::String mode_id,::String __o_target_id){
::String target_id = __o_target_id.Default(HX_CSTRING(""));
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","setMode",0xcc767b0c,"flixel.addons.ui.FlxUI.setMode","flixel/addons/ui/FlxUI.hx",709,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mode_id,"mode_id")
	HX_STACK_ARG(target_id,"target_id")
{
		HX_STACK_LINE(710)
		if (((this->_curr_mode == mode_id))){
			HX_STACK_LINE(712)
			return null();
		}
		HX_STACK_LINE(714)
		::haxe::xml::Fast mode = this->getMode(mode_id,null());		HX_STACK_VAR(mode,"mode");
		HX_STACK_LINE(715)
		this->_curr_mode = mode_id;
		HX_STACK_LINE(716)
		::String id = HX_CSTRING("");		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(717)
		::flixel::addons::ui::interfaces::IFlxUIWidget thing;		HX_STACK_VAR(thing,"thing");
		HX_STACK_LINE(718)
		if (((target_id == HX_CSTRING("")))){
			HX_STACK_LINE(719)
			if (((mode != null()))){
				HX_STACK_LINE(721)
				::Xml xml;		HX_STACK_VAR(xml,"xml");
				HX_STACK_LINE(722)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(mode->get_elements());  __it->hasNext(); ){
					::haxe::xml::Fast node = __it->next();
					{
						HX_STACK_LINE(724)
						::haxe::xml::Fast node2 = this->applyNodeConditionals(node);		HX_STACK_VAR(node2,"node2");
						HX_STACK_LINE(725)
						xml = node2->x;
						HX_STACK_LINE(727)
						::String nodeName = xml->get_nodeName();		HX_STACK_VAR(nodeName,"nodeName");
						HX_STACK_LINE(729)
						if ((this->_loadTest(node2))){
							HX_STACK_LINE(731)
							::String _switch_1 = (nodeName);
							if (  ( _switch_1==HX_CSTRING("show"))){
								HX_STACK_LINE(733)
								::String _g = ::flixel::addons::ui::U_obj::xml_str(xml,HX_CSTRING("id"),true,null());		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(733)
								this->showThing(_g,true);
							}
							else if (  ( _switch_1==HX_CSTRING("hide"))){
								HX_STACK_LINE(735)
								::String _g1 = ::flixel::addons::ui::U_obj::xml_str(xml,HX_CSTRING("id"),true,null());		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(735)
								this->showThing(_g1,false);
							}
							else if (  ( _switch_1==HX_CSTRING("align"))){
								HX_STACK_LINE(737)
								this->_alignThing(node2,null());
							}
							else if (  ( _switch_1==HX_CSTRING("change"))){
								HX_STACK_LINE(739)
								this->_changeThing(node2);
							}
							else if (  ( _switch_1==HX_CSTRING("position"))){
								HX_STACK_LINE(741)
								::String _g2 = ::flixel::addons::ui::U_obj::xml_str(xml,HX_CSTRING("id"),true,null());		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(741)
								id = _g2;
								HX_STACK_LINE(742)
								::flixel::addons::ui::interfaces::IFlxUIWidget _g3 = this->getAsset(id,null());		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(742)
								thing = _g3;
								HX_STACK_LINE(743)
								if (((thing != null()))){
									HX_STACK_LINE(744)
									this->_loadPosition(node2,thing);
								}
							}
						}
					}
;
				}
			}
		}
		else{
			HX_STACK_LINE(751)
			::flixel::addons::ui::interfaces::IFlxUIWidget target = this->getAsset(target_id,null());		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(752)
			if (((  (((target != null()))) ? bool(::Std_obj::is(target,hx::ClassOf< ::flixel::addons::ui::FlxUI >())) : bool(false) ))){
				HX_STACK_LINE(753)
				::flixel::addons::ui::FlxUI targetUI;		HX_STACK_VAR(targetUI,"targetUI");
				HX_STACK_LINE(753)
				targetUI = hx::TCast< flixel::addons::ui::FlxUI >::cast(target);
				HX_STACK_LINE(754)
				targetUI->setMode(mode_id,HX_CSTRING(""));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,setMode,(void))

Void FlxUI_obj::showThing( ::String id,hx::Null< bool >  __o_b){
bool b = __o_b.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","showThing",0xd0d41c58,"flixel.addons.ui.FlxUI.showThing","flixel/addons/ui/FlxUI.hx",759,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(b,"b")
{
		HX_STACK_LINE(760)
		int _g = id.indexOf(HX_CSTRING(","),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(760)
		if (((_g != (int)-1))){
			HX_STACK_LINE(761)
			Array< ::String > ids = id.split(HX_CSTRING(","));		HX_STACK_VAR(ids,"ids");
			HX_STACK_LINE(762)
			{
				HX_STACK_LINE(762)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(762)
				while((true)){
					HX_STACK_LINE(762)
					if ((!(((_g1 < ids->length))))){
						HX_STACK_LINE(762)
						break;
					}
					HX_STACK_LINE(762)
					::String each_id = ids->__get(_g1);		HX_STACK_VAR(each_id,"each_id");
					HX_STACK_LINE(762)
					++(_g1);
					HX_STACK_LINE(763)
					::flixel::addons::ui::interfaces::IFlxUIWidget thing = this->getAsset(each_id,null());		HX_STACK_VAR(thing,"thing");
					HX_STACK_LINE(764)
					if (((thing != null()))){
						HX_STACK_LINE(765)
						thing->__Field(HX_CSTRING("set_visible"),true)(b);
					}
					else{
						HX_STACK_LINE(767)
						::flixel::addons::ui::FlxUIGroup group = this->getGroup(each_id,null());		HX_STACK_VAR(group,"group");
						HX_STACK_LINE(768)
						if (((group != null()))){
							HX_STACK_LINE(769)
							group->set_visible(b);
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(774)
			if (((id != HX_CSTRING("*")))){
				HX_STACK_LINE(775)
				::flixel::addons::ui::interfaces::IFlxUIWidget thing = this->getAsset(id,null());		HX_STACK_VAR(thing,"thing");
				HX_STACK_LINE(776)
				if (((thing != null()))){
					HX_STACK_LINE(777)
					thing->__Field(HX_CSTRING("set_visible"),true)(b);
				}
				else{
					HX_STACK_LINE(779)
					::flixel::addons::ui::FlxUIGroup group = this->getGroup(id,null());		HX_STACK_VAR(group,"group");
					HX_STACK_LINE(780)
					if (((group != null()))){
						HX_STACK_LINE(781)
						group->set_visible(b);
					}
				}
			}
			else{
				HX_STACK_LINE(785)
				for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_asset_index->keys());  __it->hasNext(); ){
					::String asset_id = __it->next();
					if (((asset_id != HX_CSTRING("*")))){
						HX_STACK_LINE(787)
						this->showThing(asset_id,b);
					}
;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,showThing,(void))

::flixel::addons::ui::FlxUIGroup FlxUI_obj::getGroup( ::String key,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getGroup",0xfa746602,"flixel.addons.ui.FlxUI.getGroup","flixel/addons/ui/FlxUI.hx",796,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(797)
		::flixel::addons::ui::FlxUIGroup tempGroup = this->_group_index->get(key);		HX_STACK_VAR(tempGroup,"tempGroup");
		HX_STACK_LINE(798)
		if (((bool((bool((tempGroup == null())) && bool(recursive))) && bool((this->_superIndexUI != null()))))){
			HX_STACK_LINE(799)
			return this->_superIndexUI->getGroup(key,recursive);
		}
		HX_STACK_LINE(801)
		return tempGroup;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,getGroup,return )

::flixel::text::FlxText FlxUI_obj::getFlxText( ::String key,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getFlxText",0x55e507c2,"flixel.addons.ui.FlxUI.getFlxText","flixel/addons/ui/FlxUI.hx",804,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(805)
		::flixel::addons::ui::interfaces::IFlxUIWidget asset = this->getAsset(key,recursive);		HX_STACK_VAR(asset,"asset");
		HX_STACK_LINE(806)
		if (((asset != null()))){
			HX_STACK_LINE(807)
			if ((::Std_obj::is(asset,hx::ClassOf< ::flixel::text::FlxText >()))){
				HX_STACK_LINE(808)
				return hx::TCast< flixel::text::FlxText >::cast(asset);
			}
		}
		HX_STACK_LINE(811)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,getFlxText,return )

Array< ::flixel::addons::ui::interfaces::IFlxUIWidget > FlxUI_obj::getAllAssets( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getAllAssets",0xc0ca94c7,"flixel.addons.ui.FlxUI.getAllAssets","flixel/addons/ui/FlxUI.hx",814,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(815)
	Array< ::flixel::addons::ui::interfaces::IFlxUIWidget > arr = Array_obj< ::flixel::addons::ui::interfaces::IFlxUIWidget >::__new();		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(816)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_asset_index->keys());  __it->hasNext(); ){
		::String key = __it->next();
		{
			HX_STACK_LINE(817)
			::flixel::addons::ui::interfaces::IFlxUIWidget _g = this->getAsset(key,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(817)
			arr->push(_g);
		}
;
	}
	HX_STACK_LINE(819)
	return arr;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUI_obj,getAllAssets,return )

Array< ::String > FlxUI_obj::getAssetKeys( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getAssetKeys",0x52110047,"flixel.addons.ui.FlxUI.getAssetKeys","flixel/addons/ui/FlxUI.hx",822,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(823)
	Array< ::String > arr = Array_obj< ::String >::__new();		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(824)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_asset_index->keys());  __it->hasNext(); ){
		::String key = __it->next();
		arr->push(key);
	}
	HX_STACK_LINE(827)
	return arr;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUI_obj,getAssetKeys,return )

bool FlxUI_obj::hasAsset( ::String key,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","hasAsset",0xb33a576f,"flixel.addons.ui.FlxUI.hasAsset","flixel/addons/ui/FlxUI.hx",830,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(831)
		if ((this->_asset_index->exists(key))){
			HX_STACK_LINE(832)
			return true;
		}
		HX_STACK_LINE(834)
		if (((bool(recursive) && bool((this->_superIndexUI != null()))))){
			HX_STACK_LINE(835)
			return this->_superIndexUI->hasAsset(key,recursive);
		}
		HX_STACK_LINE(837)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,hasAsset,return )

::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::getAsset( ::String key,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getAsset",0x86b91cb3,"flixel.addons.ui.FlxUI.getAsset","flixel/addons/ui/FlxUI.hx",840,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(841)
		::flixel::addons::ui::interfaces::IFlxUIWidget asset = this->_asset_index->get(key);		HX_STACK_VAR(asset,"asset");
		HX_STACK_LINE(842)
		if (((bool((bool((asset == null())) && bool(recursive))) && bool((this->_superIndexUI != null()))))){
			HX_STACK_LINE(843)
			return this->_superIndexUI->getAsset(key,recursive);
		}
		HX_STACK_LINE(845)
		return asset;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,getAsset,return )

::haxe::xml::Fast FlxUI_obj::getMode( ::String key,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getMode",0xd974ea00,"flixel.addons.ui.FlxUI.getMode","flixel/addons/ui/FlxUI.hx",848,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(849)
		::haxe::xml::Fast mode = this->_mode_index->get(key);		HX_STACK_VAR(mode,"mode");
		HX_STACK_LINE(850)
		if (((bool((bool((mode == null())) && bool(recursive))) && bool((this->_superIndexUI != null()))))){
			HX_STACK_LINE(851)
			return this->_superIndexUI->getMode(key,recursive);
		}
		HX_STACK_LINE(853)
		return mode;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,getMode,return )

::flixel::addons::ui::ButtonLabelStyle FlxUI_obj::getLabelStyleFromDefinition( ::String key,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getLabelStyleFromDefinition",0xade61a37,"flixel.addons.ui.FlxUI.getLabelStyleFromDefinition","flixel/addons/ui/FlxUI.hx",856,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(857)
		::haxe::xml::Fast definition = this->getDefinition(key,recursive);		HX_STACK_VAR(definition,"definition");
		HX_STACK_LINE(858)
		if (((definition != null()))){
			HX_STACK_LINE(859)
			::flixel::addons::ui::FontDef fontDef = this->_loadFontDef(definition);		HX_STACK_VAR(fontDef,"fontDef");
			HX_STACK_LINE(860)
			::String align = ::flixel::addons::ui::U_obj::xml_str(definition->x,HX_CSTRING("align"),null(),null());		HX_STACK_VAR(align,"align");
			HX_STACK_LINE(860)
			if (((align == HX_CSTRING("")))){
				HX_STACK_LINE(860)
				align = null();
			}
			HX_STACK_LINE(861)
			int color = this->_loadColor(definition,null(),null());		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(862)
			::flixel::addons::ui::BorderDef border = this->_loadBorder(definition);		HX_STACK_VAR(border,"border");
			HX_STACK_LINE(863)
			return ::flixel::addons::ui::ButtonLabelStyle_obj::__new(fontDef,align,color,border);
		}
		HX_STACK_LINE(865)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,getLabelStyleFromDefinition,return )

::flixel::addons::ui::ButtonLabelStyle FlxUI_obj::getLabelStyleFromData( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getLabelStyleFromData",0x7750c7ce,"flixel.addons.ui.FlxUI.getLabelStyleFromData","flixel/addons/ui/FlxUI.hx",868,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(869)
	::flixel::addons::ui::FontDef fontDef = this->_loadFontDef(data);		HX_STACK_VAR(fontDef,"fontDef");
	HX_STACK_LINE(870)
	::String align = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("align"),null(),null());		HX_STACK_VAR(align,"align");
	HX_STACK_LINE(870)
	if (((align == HX_CSTRING("")))){
		HX_STACK_LINE(870)
		align = null();
	}
	HX_STACK_LINE(871)
	int color = this->_loadColor(data,null(),null());		HX_STACK_VAR(color,"color");
	HX_STACK_LINE(872)
	::flixel::addons::ui::BorderDef border = this->_loadBorder(data);		HX_STACK_VAR(border,"border");
	HX_STACK_LINE(873)
	return ::flixel::addons::ui::ButtonLabelStyle_obj::__new(fontDef,align,color,border);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,getLabelStyleFromData,return )

bool FlxUI_obj::checkVariable( ::String key,::String otherValue,::String type,::String __o__operator,hx::Null< bool >  __o_recursive){
::String _operator = __o__operator.Default(HX_CSTRING("=="));
bool recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","checkVariable",0xe5e77d4b,"flixel.addons.ui.FlxUI.checkVariable","flixel/addons/ui/FlxUI.hx",876,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(otherValue,"otherValue")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(_operator,"operator")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(877)
		::String variable = this->getVariable(key,recursive);		HX_STACK_VAR(variable,"variable");
		HX_STACK_LINE(878)
		if (((variable != null()))){
			HX_STACK_LINE(880)
			return ::flixel::addons::ui::U_obj::compareStringVars(variable,otherValue,type,_operator);
		}
		else{
			HX_STACK_LINE(884)
			return ::flixel::addons::ui::U_obj::compareStringVars(HX_CSTRING(""),otherValue,type,_operator);
		}
		HX_STACK_LINE(878)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxUI_obj,checkVariable,return )

::String FlxUI_obj::getVariable( ::String key,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getVariable",0x4acd3b59,"flixel.addons.ui.FlxUI.getVariable","flixel/addons/ui/FlxUI.hx",888,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(889)
		::String variable = this->_variable_index->get(key);		HX_STACK_VAR(variable,"variable");
		HX_STACK_LINE(890)
		if (((bool((bool((variable == null())) && bool(recursive))) && bool((this->_superIndexUI != null()))))){
			HX_STACK_LINE(891)
			::String _g = this->_superIndexUI->getVariable(key,recursive);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(891)
			variable = _g;
		}
		HX_STACK_LINE(893)
		return variable;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,getVariable,return )

::haxe::xml::Fast FlxUI_obj::getDefinition( ::String key,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getDefinition",0xdd003ff0,"flixel.addons.ui.FlxUI.getDefinition","flixel/addons/ui/FlxUI.hx",896,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(897)
		::haxe::xml::Fast definition = this->_definition_index->get(key);		HX_STACK_VAR(definition,"definition");
		HX_STACK_LINE(898)
		if (((bool((bool((definition == null())) && bool(recursive))) && bool((this->_superIndexUI != null()))))){
			HX_STACK_LINE(899)
			::haxe::xml::Fast _g = this->_superIndexUI->getDefinition(key,recursive);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(899)
			definition = _g;
		}
		HX_STACK_LINE(901)
		if (((definition == null()))){
			HX_STACK_LINE(902)
			int _g1 = key.indexOf(HX_CSTRING("include:"),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(902)
			if (((_g1 == (int)-1))){
				HX_STACK_LINE(905)
				::haxe::xml::Fast _g2 = this->getDefinition((HX_CSTRING("include:") + key),recursive);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(905)
				definition = _g2;
			}
		}
		HX_STACK_LINE(909)
		return definition;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,getDefinition,return )

Void FlxUI_obj::replaceInGroup( ::flixel::FlxSprite original,::flixel::FlxSprite replace,hx::Null< bool >  __o_splice){
bool splice = __o_splice.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","replaceInGroup",0xb7beeb3f,"flixel.addons.ui.FlxUI.replaceInGroup","flixel/addons/ui/FlxUI.hx",960,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(original,"original")
	HX_STACK_ARG(replace,"replace")
	HX_STACK_ARG(splice,"splice")
{
		HX_STACK_LINE(963)
		if (((this->_group_index != null()))){
			HX_STACK_LINE(964)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_group_index->keys());  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(965)
					::flixel::addons::ui::FlxUIGroup tempGroup = this->_group_index->get(key);		HX_STACK_VAR(tempGroup,"tempGroup");
					HX_STACK_LINE(966)
					if (((tempGroup->group->members != null()))){
						HX_STACK_LINE(967)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(968)
						{
							HX_STACK_LINE(968)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(968)
							Array< ::Dynamic > _g1 = tempGroup->group->members;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(968)
							while((true)){
								HX_STACK_LINE(968)
								if ((!(((_g < _g1->length))))){
									HX_STACK_LINE(968)
									break;
								}
								HX_STACK_LINE(968)
								::flixel::FlxSprite member = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(member,"member");
								HX_STACK_LINE(968)
								++(_g);
								HX_STACK_LINE(969)
								if (((member != null()))){
									HX_STACK_LINE(970)
									if (((member == original))){
										HX_STACK_LINE(971)
										hx::IndexRef((tempGroup->group->members).mPtr,i) = replace;
										HX_STACK_LINE(972)
										if (((replace == null()))){
											HX_STACK_LINE(973)
											if ((splice)){
												HX_STACK_LINE(974)
												tempGroup->group->members->__Field(HX_CSTRING("splice"),true)(i,(int)1);
												HX_STACK_LINE(975)
												(i)--;
											}
										}
										HX_STACK_LINE(978)
										return null();
									}
									HX_STACK_LINE(980)
									(i)++;
								}
							}
						}
					}
				}
;
			}
		}
		HX_STACK_LINE(988)
		if (((this->group->members != null()))){
			HX_STACK_LINE(989)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(990)
			{
				HX_STACK_LINE(990)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(990)
				Array< ::Dynamic > _g1 = this->group->members;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(990)
				while((true)){
					HX_STACK_LINE(990)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(990)
						break;
					}
					HX_STACK_LINE(990)
					::flixel::FlxSprite member = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(member,"member");
					HX_STACK_LINE(990)
					++(_g);
					HX_STACK_LINE(991)
					if (((member != null()))){
						HX_STACK_LINE(992)
						if (((member == original))){
							HX_STACK_LINE(993)
							hx::IndexRef((this->group->members).mPtr,i) = replace;
							HX_STACK_LINE(994)
							if (((replace == null()))){
								HX_STACK_LINE(995)
								if ((splice)){
									HX_STACK_LINE(996)
									this->group->members->__Field(HX_CSTRING("splice"),true)(i,(int)1);
									HX_STACK_LINE(997)
									(i)--;
								}
							}
							HX_STACK_LINE(1000)
							return null();
						}
					}
					HX_STACK_LINE(1003)
					(i)++;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,replaceInGroup,(void))

::haxe::xml::Fast FlxUI_obj::applyNodeConditionals( ::haxe::xml::Fast info){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","applyNodeConditionals",0x57bfbe44,"flixel.addons.ui.FlxUI.applyNodeConditionals","flixel/addons/ui/FlxUI.hx",1010,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(info,"info")
	HX_STACK_LINE(1011)
	if (((  ((!(info->hasNode->resolve(HX_CSTRING("locale"))))) ? bool(info->hasNode->resolve(HX_CSTRING("haxedef"))) : bool(true) ))){
		HX_STACK_LINE(1012)
		::String _g = info->x->toString();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1012)
		::Xml _g1 = ::Xml_obj::parse(_g)->firstElement();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1012)
		::haxe::xml::Fast _g2 = ::haxe::xml::Fast_obj::__new(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1012)
		info = _g2;
		HX_STACK_LINE(1014)
		if ((info->hasNode->resolve(HX_CSTRING("locale")))){
			HX_STACK_LINE(1015)
			::haxe::xml::Fast _g3 = this->applyNodeChanges(info,HX_CSTRING("locale"));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1015)
			info = _g3;
		}
		HX_STACK_LINE(1018)
		if ((info->hasNode->resolve(HX_CSTRING("haxedef")))){
			HX_STACK_LINE(1019)
			::haxe::xml::Fast _g4 = this->applyNodeChanges(info,HX_CSTRING("haxedef"));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1019)
			info = _g4;
		}
		HX_STACK_LINE(1022)
		if ((info->hasNode->resolve(HX_CSTRING("window")))){
			HX_STACK_LINE(1023)
			::haxe::xml::Fast _g5 = this->applyNodeChanges(info,HX_CSTRING("window"));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1023)
			info = _g5;
		}
	}
	HX_STACK_LINE(1026)
	return info;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,applyNodeConditionals,return )

::haxe::xml::Fast FlxUI_obj::applyNodeChanges( ::haxe::xml::Fast data,::String nodeName){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","applyNodeChanges",0x1f7e448c,"flixel.addons.ui.FlxUI.applyNodeChanges","flixel/addons/ui/FlxUI.hx",1035,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(nodeName,"nodeName")
	HX_STACK_LINE(1038)
	::String nodeValue = HX_CSTRING("");		HX_STACK_VAR(nodeValue,"nodeValue");
	HX_STACK_LINE(1041)
	if (((nodeName == HX_CSTRING("locale")))){
		HX_STACK_LINE(1042)
		if (((this->_ptr_tongue == null()))){
			HX_STACK_LINE(1043)
			return data;
		}
		HX_STACK_LINE(1045)
		::String _g = this->_ptr_tongue->__Field(HX_CSTRING("locale"),true)->__Field(HX_CSTRING("toLowerCase"),true)();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1045)
		nodeValue = _g;
	}
	HX_STACK_LINE(1049)
	bool haxedef = false;		HX_STACK_VAR(haxedef,"haxedef");
	HX_STACK_LINE(1050)
	if (((nodeName == HX_CSTRING("haxedef")))){
		HX_STACK_LINE(1051)
		haxedef = true;
	}
	HX_STACK_LINE(1055)
	if (((nodeName == HX_CSTRING("window")))){
		HX_STACK_LINE(1056)
		nodeValue = ((::flixel::FlxG_obj::width + HX_CSTRING(",")) + ::flixel::FlxG_obj::height);
	}
	HX_STACK_LINE(1059)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(nodeName)->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast cNode = __it->next();
		{
			HX_STACK_LINE(1060)
			::String cid = ::flixel::addons::ui::U_obj::xml_str(cNode->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(cid,"cid");
			HX_STACK_LINE(1062)
			if ((haxedef)){
				HX_STACK_LINE(1063)
				nodeValue = HX_CSTRING("");
				HX_STACK_LINE(1064)
				if ((::flixel::addons::ui::U_obj::checkHaxedef(cid))){
					HX_STACK_LINE(1065)
					nodeValue = cid;
				}
			}
			HX_STACK_LINE(1069)
			if (((cid == nodeValue))){
				HX_STACK_LINE(1070)
				if ((cNode->hasNode->resolve(HX_CSTRING("change")))){
					HX_STACK_LINE(1071)
					for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(cNode->nodes->resolve(HX_CSTRING("change"))->iterator());  __it->hasNext(); ){
						::haxe::xml::Fast change = __it->next();
						{
							HX_STACK_LINE(1072)
							::Xml xml;		HX_STACK_VAR(xml,"xml");
							HX_STACK_LINE(1073)
							for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(change->x->attributes());  __it->hasNext(); ){
								::String att = __it->next();
								{
									HX_STACK_LINE(1074)
									::String value = change->x->get(att);		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(1075)
									data->x->set(att,value);
								}
;
							}
						}
;
					}
				}
			}
		}
;
	}
	HX_STACK_LINE(1082)
	return data;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,applyNodeChanges,return )

::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::loadThing( ::String type,::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","loadThing",0xbda7028f,"flixel.addons.ui.FlxUI.loadThing","flixel/addons/ui/FlxUI.hx",1094,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1094)
	return this->_loadThing(type,data);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,loadThing,return )

::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::_loadThing( ::String type,::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadThing",0x7ce5f322,"flixel.addons.ui.FlxUI._loadThing","flixel/addons/ui/FlxUI.hx",1097,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1099)
	::String use_def = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("use_def"),true,null());		HX_STACK_VAR(use_def,"use_def");
	HX_STACK_LINE(1100)
	::haxe::xml::Fast definition = null();		HX_STACK_VAR(definition,"definition");
	HX_STACK_LINE(1101)
	if (((use_def != HX_CSTRING("")))){
		HX_STACK_LINE(1102)
		::haxe::xml::Fast _g = this->getDefinition(use_def,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1102)
		definition = _g;
	}
	HX_STACK_LINE(1105)
	::haxe::xml::Fast info = ::flixel::addons::ui::FlxUI_obj::consolidateData(data,definition);		HX_STACK_VAR(info,"info");
	HX_STACK_LINE(1106)
	::haxe::xml::Fast _g1 = this->applyNodeConditionals(info);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1106)
	info = _g1;
	HX_STACK_LINE(1108)
	bool _g2 = this->_loadTest(info);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(1108)
	if (((_g2 == false))){
		HX_STACK_LINE(1110)
		return null();
	}
	HX_STACK_LINE(1113)
	::String _switch_2 = (type);
	if (  ( _switch_2==HX_CSTRING("region"))){
		HX_STACK_LINE(1114)
		return this->_loadRegion(info);
	}
	else if (  ( _switch_2==HX_CSTRING("chrome")) ||  ( _switch_2==HX_CSTRING("nineslicesprite")) ||  ( _switch_2==HX_CSTRING("nine_slice_sprite")) ||  ( _switch_2==HX_CSTRING("nineslice")) ||  ( _switch_2==HX_CSTRING("nine_slice"))){
		HX_STACK_LINE(1115)
		return this->_load9SliceSprite(info,null());
	}
	else if (  ( _switch_2==HX_CSTRING("tile_test"))){
		HX_STACK_LINE(1116)
		return this->_loadTileTest(info);
	}
	else if (  ( _switch_2==HX_CSTRING("line"))){
		HX_STACK_LINE(1117)
		return this->_loadLine(info);
	}
	else if (  ( _switch_2==HX_CSTRING("sprite"))){
		HX_STACK_LINE(1118)
		return this->_loadSprite(info);
	}
	else if (  ( _switch_2==HX_CSTRING("text"))){
		HX_STACK_LINE(1119)
		return this->_loadText(info);
	}
	else if (  ( _switch_2==HX_CSTRING("input_text"))){
		HX_STACK_LINE(1120)
		return this->_loadInputText(info);
	}
	else if (  ( _switch_2==HX_CSTRING("numeric_stepper"))){
		HX_STACK_LINE(1121)
		return this->_loadNumericStepper(info,null());
	}
	else if (  ( _switch_2==HX_CSTRING("button"))){
		HX_STACK_LINE(1122)
		return this->_loadButton(info,null(),null(),null());
	}
	else if (  ( _switch_2==HX_CSTRING("button_toggle"))){
		HX_STACK_LINE(1123)
		return this->_loadButton(info,true,true,null());
	}
	else if (  ( _switch_2==HX_CSTRING("tab_menu"))){
		HX_STACK_LINE(1125)
		return this->_loadTabMenu(info);
	}
	else if (  ( _switch_2==HX_CSTRING("dropdown_menu")) ||  ( _switch_2==HX_CSTRING("dropdown")) ||  ( _switch_2==HX_CSTRING("pulldown")) ||  ( _switch_2==HX_CSTRING("pulldown_menu"))){
		HX_STACK_LINE(1128)
		return this->_loadDropDownMenu(info);
	}
	else if (  ( _switch_2==HX_CSTRING("checkbox"))){
		HX_STACK_LINE(1130)
		return this->_loadCheckBox(info);
	}
	else if (  ( _switch_2==HX_CSTRING("radio_group"))){
		HX_STACK_LINE(1131)
		return this->_loadRadioGroup(info);
	}
	else if (  ( _switch_2==HX_CSTRING("layout")) ||  ( _switch_2==HX_CSTRING("ui"))){
		HX_STACK_LINE(1132)
		return this->_loadLayout(info);
	}
	else if (  ( _switch_2==HX_CSTRING("failure"))){
		HX_STACK_LINE(1133)
		if (((this->_failure_checks == null()))){
			HX_STACK_LINE(1133)
			Array< ::Dynamic > _g3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1133)
			this->_failure_checks = _g3;
		}
		HX_STACK_LINE(1134)
		this->_failure_checks->push(info);
		HX_STACK_LINE(1135)
		return null();
	}
	else if (  ( _switch_2==HX_CSTRING("align"))){
		HX_STACK_LINE(1136)
		this->_alignThing(info,true);
		HX_STACK_LINE(1137)
		return null();
	}
	else if (  ( _switch_2==HX_CSTRING("mode")) ||  ( _switch_2==HX_CSTRING("include")) ||  ( _switch_2==HX_CSTRING("group")) ||  ( _switch_2==HX_CSTRING("load_if"))){
		HX_STACK_LINE(1139)
		return null();
	}
	else if (  ( _switch_2==HX_CSTRING("change"))){
		HX_STACK_LINE(1141)
		this->_changeThing(info);
		HX_STACK_LINE(1142)
		return null();
	}
	else if (  ( _switch_2==HX_CSTRING("position"))){
		HX_STACK_LINE(1144)
		::String _g4 = ::flixel::addons::ui::U_obj::xml_str(info->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(1144)
		this->id = _g4;
		HX_STACK_LINE(1145)
		::flixel::addons::ui::interfaces::IFlxUIWidget thing = this->getAsset(this->id,null());		HX_STACK_VAR(thing,"thing");
		HX_STACK_LINE(1146)
		if (((thing != null()))){
			HX_STACK_LINE(1147)
			this->_loadPosition(info,thing);
		}
		HX_STACK_LINE(1149)
		return null();
	}
	else  {
		HX_STACK_LINE(1153)
		::flixel::addons::ui::interfaces::IFlxUIWidget result = this->_ptr->getRequest((HX_CSTRING("ui_get:") + type),hx::ObjectPtr<OBJ_>(this),info,null());		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(1154)
		return result;
	}
;
;
	HX_STACK_LINE(1156)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_loadThing,return )

Float FlxUI_obj::_loadX( ::haxe::xml::Fast data,hx::Null< Float >  __o_default_){
Float default_ = __o_default_.Default(0);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadX",0x4a11c1ac,"flixel.addons.ui.FlxUI._loadX","flixel/addons/ui/FlxUI.hx",1161,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(default_,"default_")
{
		HX_STACK_LINE(1161)
		return this->_loadWidth(data,default_,HX_CSTRING("x"));
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_loadX,return )

Float FlxUI_obj::_loadY( ::haxe::xml::Fast data,hx::Null< Float >  __o_default_){
Float default_ = __o_default_.Default(0);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadY",0x4a11c1ad,"flixel.addons.ui.FlxUI._loadY","flixel/addons/ui/FlxUI.hx",1165,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(default_,"default_")
{
		HX_STACK_LINE(1165)
		return this->_loadHeight(data,default_,HX_CSTRING("y"));
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_loadY,return )

Float FlxUI_obj::_loadWidth( ::haxe::xml::Fast data,hx::Null< Float >  __o_default_,::String __o_str){
Float default_ = __o_default_.Default(10);
::String str = __o_str.Default(HX_CSTRING("width"));
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadWidth",0x37bf213a,"flixel.addons.ui.FlxUI._loadWidth","flixel/addons/ui/FlxUI.hx",1168,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(default_,"default_")
	HX_STACK_ARG(str,"str")
{
		HX_STACK_LINE(1169)
		::String _g = ::Std_obj::string(default_);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1169)
		::String ws = ::flixel::addons::ui::U_obj::xml_str(data->x,str,true,_g);		HX_STACK_VAR(ws,"ws");
		HX_STACK_LINE(1170)
		::flixel::addons::ui::Rounding round = this->getRound(data);		HX_STACK_VAR(round,"round");
		HX_STACK_LINE(1171)
		Float _g1 = this->_getDataSize(HX_CSTRING("w"),ws,default_);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1171)
		return this->doRound(_g1,round);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,_loadWidth,return )

Float FlxUI_obj::_loadHeight( ::haxe::xml::Fast data,hx::Null< Float >  __o_default_,::String __o_str){
Float default_ = __o_default_.Default(10);
::String str = __o_str.Default(HX_CSTRING("height"));
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadHeight",0x45cd6a33,"flixel.addons.ui.FlxUI._loadHeight","flixel/addons/ui/FlxUI.hx",1174,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(default_,"default_")
	HX_STACK_ARG(str,"str")
{
		HX_STACK_LINE(1175)
		::String _g = ::Std_obj::string(default_);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1175)
		::String hs = ::flixel::addons::ui::U_obj::xml_str(data->x,str,true,_g);		HX_STACK_VAR(hs,"hs");
		HX_STACK_LINE(1176)
		::flixel::addons::ui::Rounding round = this->getRound(data);		HX_STACK_VAR(round,"round");
		HX_STACK_LINE(1177)
		Float _g1 = this->_getDataSize(HX_CSTRING("h"),hs,default_);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1177)
		return this->doRound(_g1,round);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,_loadHeight,return )

::flixel::math::FlxPoint FlxUI_obj::_loadCompass( ::haxe::xml::Fast data,::String __o_str){
::String str = __o_str.Default(HX_CSTRING("resize_point"));
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadCompass",0x511db9c6,"flixel.addons.ui.FlxUI._loadCompass","flixel/addons/ui/FlxUI.hx",1180,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(str,"str")
{
		HX_STACK_LINE(1181)
		::String cs = ::flixel::addons::ui::U_obj::xml_str(data->x,str,true,HX_CSTRING("nw"));		HX_STACK_VAR(cs,"cs");
		HX_STACK_LINE(1182)
		::flixel::math::FlxPoint fp;		HX_STACK_VAR(fp,"fp");
		HX_STACK_LINE(1182)
		{
			HX_STACK_LINE(1182)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(1182)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(1182)
			::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(1182)
			point->_inPool = false;
			HX_STACK_LINE(1182)
			fp = point;
		}
		HX_STACK_LINE(1183)
		::String _switch_3 = (cs);
		if (  ( _switch_3==HX_CSTRING("nw")) ||  ( _switch_3==HX_CSTRING("ul"))){
			HX_STACK_LINE(1184)
			fp->set_x((int)0);
			HX_STACK_LINE(1184)
			fp->set_y((int)0);
		}
		else if (  ( _switch_3==HX_CSTRING("n")) ||  ( _switch_3==HX_CSTRING("u"))){
			HX_STACK_LINE(1185)
			fp->set_x(0.5);
			HX_STACK_LINE(1185)
			fp->set_y((int)0);
		}
		else if (  ( _switch_3==HX_CSTRING("ne")) ||  ( _switch_3==HX_CSTRING("ur"))){
			HX_STACK_LINE(1186)
			fp->set_x((int)1);
			HX_STACK_LINE(1186)
			fp->set_y((int)0);
		}
		else if (  ( _switch_3==HX_CSTRING("e")) ||  ( _switch_3==HX_CSTRING("r"))){
			HX_STACK_LINE(1187)
			fp->set_x((int)1);
			HX_STACK_LINE(1187)
			fp->set_y(0.5);
		}
		else if (  ( _switch_3==HX_CSTRING("se")) ||  ( _switch_3==HX_CSTRING("lr"))){
			HX_STACK_LINE(1188)
			fp->set_x((int)1);
			HX_STACK_LINE(1188)
			fp->set_y((int)1);
		}
		else if (  ( _switch_3==HX_CSTRING("s"))){
			HX_STACK_LINE(1189)
			fp->set_x(0.5);
			HX_STACK_LINE(1189)
			fp->set_y((int)1);
		}
		else if (  ( _switch_3==HX_CSTRING("sw")) ||  ( _switch_3==HX_CSTRING("ll"))){
			HX_STACK_LINE(1190)
			fp->set_x((int)0);
			HX_STACK_LINE(1190)
			fp->set_y((int)1);
		}
		else if (  ( _switch_3==HX_CSTRING("w"))){
			HX_STACK_LINE(1191)
			fp->set_x(0.5);
			HX_STACK_LINE(1191)
			fp->set_y((int)0);
		}
		else if (  ( _switch_3==HX_CSTRING("m")) ||  ( _switch_3==HX_CSTRING("c")) ||  ( _switch_3==HX_CSTRING("mid")) ||  ( _switch_3==HX_CSTRING("center"))){
			HX_STACK_LINE(1192)
			fp->set_x(0.5);
			HX_STACK_LINE(1192)
			fp->set_y(0.5);
		}
		HX_STACK_LINE(1194)
		return fp;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_loadCompass,return )

Void FlxUI_obj::_changeParamsThing( ::haxe::xml::Fast data){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_changeParamsThing",0x3feee472,"flixel.addons.ui.FlxUI._changeParamsThing","flixel/addons/ui/FlxUI.hx",1197,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(1198)
		::String id = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(1199)
		::flixel::addons::ui::interfaces::IFlxUIWidget thing = this->getAsset(id,null());		HX_STACK_VAR(thing,"thing");
		HX_STACK_LINE(1200)
		if (((thing == null()))){
			HX_STACK_LINE(1201)
			return null();
		}
		HX_STACK_LINE(1204)
		if ((!(::Std_obj::is(thing,hx::ClassOf< ::flixel::addons::ui::interfaces::IHasParams >())))){
			HX_STACK_LINE(1205)
			return null();
		}
		HX_STACK_LINE(1208)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1209)
		if ((::Std_obj::is(thing,hx::ClassOf< ::flixel::addons::ui::interfaces::IHasParams >()))){
		}
		HX_STACK_LINE(1212)
		::flixel::addons::ui::interfaces::IHasParams ihp = thing;		HX_STACK_VAR(ihp,"ihp");
		HX_STACK_LINE(1213)
		Dynamic _g7;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(1213)
		{
			HX_STACK_LINE(1213)
			Dynamic params = null();		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(1213)
			if ((data->hasNode->resolve(HX_CSTRING("param")))){
				HX_STACK_LINE(1213)
				Dynamic _g = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1213)
				params = _g;
				HX_STACK_LINE(1213)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("param"))->iterator());  __it->hasNext(); ){
					::haxe::xml::Fast param = __it->next();
					if (((  ((param->has->resolve(HX_CSTRING("type")))) ? bool(param->has->resolve(HX_CSTRING("value"))) : bool(false) ))){
						HX_STACK_LINE(1213)
						::String type = param->att->resolve(HX_CSTRING("type"));		HX_STACK_VAR(type,"type");
						HX_STACK_LINE(1213)
						::String _g1 = type.toLowerCase();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1213)
						type = _g1;
						HX_STACK_LINE(1213)
						::String valueStr = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(valueStr,"valueStr");
						HX_STACK_LINE(1213)
						Dynamic value = valueStr;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(1213)
						int sort = ::flixel::addons::ui::U_obj::xml_i(param->x,HX_CSTRING("sort"),(int)-1);		HX_STACK_VAR(sort,"sort");
						HX_STACK_LINE(1213)
						::String _switch_4 = (type);
						if (  ( _switch_4==HX_CSTRING("string"))){
							HX_STACK_LINE(1213)
							::String _g2 = ::String(valueStr);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(1213)
							value = _g2;
						}
						else if (  ( _switch_4==HX_CSTRING("int"))){
							HX_STACK_LINE(1213)
							Dynamic _g3 = ::Std_obj::parseInt(valueStr);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(1213)
							value = _g3;
						}
						else if (  ( _switch_4==HX_CSTRING("float"))){
							HX_STACK_LINE(1213)
							Float _g4 = ::Std_obj::parseFloat(valueStr);		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(1213)
							value = _g4;
						}
						else if (  ( _switch_4==HX_CSTRING("color")) ||  ( _switch_4==HX_CSTRING("hex"))){
							HX_STACK_LINE(1213)
							int _g5;		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(1213)
							{
								HX_STACK_LINE(1213)
								bool safe = false;		HX_STACK_VAR(safe,"safe");
								HX_STACK_LINE(1213)
								int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
								HX_STACK_LINE(1213)
								Dynamic return_val = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(valueStr);		HX_STACK_VAR(return_val,"return_val");
								HX_STACK_LINE(1213)
								if (((return_val == null()))){
									HX_STACK_LINE(1213)
									if ((!(safe))){
										HX_STACK_LINE(1213)
										HX_STACK_DO_THROW((HX_CSTRING("U.parseHex() unable to parse hex String ") + valueStr));
									}
									else{
										HX_STACK_LINE(1213)
										return_val = default_color;
									}
								}
								HX_STACK_LINE(1213)
								_g5 = return_val;
							}
							HX_STACK_LINE(1213)
							value = _g5;
						}
						else if (  ( _switch_4==HX_CSTRING("bool")) ||  ( _switch_4==HX_CSTRING("boolean"))){
							HX_STACK_LINE(1213)
							::String str = ::String(valueStr);		HX_STACK_VAR(str,"str");
							HX_STACK_LINE(1213)
							::String _g6 = str.toLowerCase();		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(1213)
							str = _g6;
							HX_STACK_LINE(1213)
							if (((bool((str == HX_CSTRING("true"))) || bool((str == HX_CSTRING("1")))))){
								HX_STACK_LINE(1213)
								value = true;
							}
							else{
								HX_STACK_LINE(1213)
								value = false;
							}
						}
						struct _Function_4_1{
							inline static Dynamic Block( int &sort,Dynamic &value){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI.hx",1213,0xf354486a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("sort") , sort,false);
									__result->Add(HX_CSTRING("value") , value,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(1213)
						params->__Field(HX_CSTRING("push"),true)(_Function_4_1::Block(sort,value));
					}
;
				}
				HX_STACK_LINE(1213)
				params->__Field(HX_CSTRING("sort"),true)(::flixel::addons::ui::FlxUI_obj::sortParams_dyn());
				HX_STACK_LINE(1213)
				{
					HX_STACK_LINE(1213)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1213)
					int _g2 = params->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1213)
					while((true)){
						HX_STACK_LINE(1213)
						if ((!(((_g1 < _g2))))){
							HX_STACK_LINE(1213)
							break;
						}
						HX_STACK_LINE(1213)
						int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(1213)
						hx::IndexRef((params).mPtr,i1) = params->__GetItem(i1)->__Field(HX_CSTRING("value"),true);
					}
				}
			}
			HX_STACK_LINE(1213)
			_g7 = params;
		}
		HX_STACK_LINE(1213)
		ihp->set_params(_g7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_changeParamsThing,(void))

Void FlxUI_obj::_changeThing( ::haxe::xml::Fast data){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_changeThing",0x32661218,"flixel.addons.ui.FlxUI._changeThing","flixel/addons/ui/FlxUI.hx",1216,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(1217)
		::String id = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(1218)
		::flixel::addons::ui::interfaces::IFlxUIWidget thing = this->getAsset(id,null());		HX_STACK_VAR(thing,"thing");
		HX_STACK_LINE(1219)
		if (((thing == null()))){
			HX_STACK_LINE(1220)
			return null();
		}
		HX_STACK_LINE(1223)
		Float new_width = (int)-1;		HX_STACK_VAR(new_width,"new_width");
		HX_STACK_LINE(1224)
		Float new_height = (int)-1;		HX_STACK_VAR(new_height,"new_height");
		HX_STACK_LINE(1226)
		::String context = HX_CSTRING("");		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(1227)
		::String code = HX_CSTRING("");		HX_STACK_VAR(code,"code");
		HX_STACK_LINE(1229)
		bool labelStyleChanged = false;		HX_STACK_VAR(labelStyleChanged,"labelStyleChanged");
		HX_STACK_LINE(1231)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(data->x->attributes());  __it->hasNext(); ){
			::String attribute = __it->next();
			::String _switch_5 = (attribute);
			if (  ( _switch_5==HX_CSTRING("text"))){
				HX_STACK_LINE(1233)
				if ((::Std_obj::is(thing,hx::ClassOf< ::flixel::addons::ui::FlxUIText >()))){
					HX_STACK_LINE(1234)
					::String text = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("text"),null(),null());		HX_STACK_VAR(text,"text");
					HX_STACK_LINE(1235)
					::String _g = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("context"),true,HX_CSTRING("ui"));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1235)
					context = _g;
					HX_STACK_LINE(1236)
					::flixel::addons::ui::FlxUIText t = thing;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1237)
					::String _g1 = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("code"),true,HX_CSTRING(""));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1237)
					code = _g1;
					HX_STACK_LINE(1238)
					::String _g2 = this->getText(text,context,true,code);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1238)
					t->set_text(_g2);
				}
			}
			else if (  ( _switch_5==HX_CSTRING("label"))){
				HX_STACK_LINE(1240)
				::String label = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("label"),null(),null());		HX_STACK_VAR(label,"label");
				HX_STACK_LINE(1241)
				::String _g3 = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("context"),true,HX_CSTRING("ui"));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1241)
				context = _g3;
				HX_STACK_LINE(1242)
				::String _g4 = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("code"),true,HX_CSTRING(""));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(1242)
				code = _g4;
				HX_STACK_LINE(1243)
				::String _g5 = this->getText(label,context,true,code);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(1243)
				label = _g5;
				HX_STACK_LINE(1244)
				if ((::Std_obj::is(thing,hx::ClassOf< ::flixel::addons::ui::interfaces::ILabeled >()))){
					HX_STACK_LINE(1245)
					::flixel::addons::ui::interfaces::ILabeled b = thing;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(1246)
					b->getLabel()->set_text(label);
				}
			}
			else if (  ( _switch_5==HX_CSTRING("width"))){
				HX_STACK_LINE(1248)
				Float _g6 = this->_loadWidth(data,null(),null());		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(1248)
				new_width = _g6;
			}
			else if (  ( _switch_5==HX_CSTRING("height"))){
				HX_STACK_LINE(1249)
				Float _g7 = this->_loadHeight(data,null(),null());		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(1249)
				new_height = _g7;
			}
;
		}
		HX_STACK_LINE(1252)
		if ((::Std_obj::is(thing,hx::ClassOf< ::flixel::addons::ui::interfaces::IResizable >()))){
			HX_STACK_LINE(1253)
			::flixel::addons::ui::interfaces::IResizable ir = thing;		HX_STACK_VAR(ir,"ir");
			HX_STACK_LINE(1254)
			if (((bool((new_width != (int)-1)) || bool((new_height != (int)-1))))){
				HX_STACK_LINE(1255)
				if (((new_width == (int)-1))){
					HX_STACK_LINE(1255)
					Float _g8 = ir->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(1255)
					new_width = _g8;
				}
				HX_STACK_LINE(1256)
				if (((new_height == (int)-1))){
					HX_STACK_LINE(1256)
					Float _g9 = ir->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(1256)
					new_height = _g9;
				}
				HX_STACK_LINE(1257)
				ir->resize(new_width,new_height);
			}
		}
		HX_STACK_LINE(1261)
		if ((data->hasNode->resolve(HX_CSTRING("param")))){
			HX_STACK_LINE(1262)
			if ((::Std_obj::is(thing,hx::ClassOf< ::flixel::addons::ui::interfaces::IHasParams >()))){
				HX_STACK_LINE(1263)
				::flixel::addons::ui::interfaces::IHasParams ihp = thing;		HX_STACK_VAR(ihp,"ihp");
				HX_STACK_LINE(1264)
				Dynamic _g17;		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(1264)
				{
					HX_STACK_LINE(1264)
					Dynamic params = null();		HX_STACK_VAR(params,"params");
					HX_STACK_LINE(1264)
					if ((data->hasNode->resolve(HX_CSTRING("param")))){
						HX_STACK_LINE(1264)
						Dynamic _g10 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(1264)
						params = _g10;
						HX_STACK_LINE(1264)
						for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("param"))->iterator());  __it->hasNext(); ){
							::haxe::xml::Fast param = __it->next();
							if (((  ((param->has->resolve(HX_CSTRING("type")))) ? bool(param->has->resolve(HX_CSTRING("value"))) : bool(false) ))){
								HX_STACK_LINE(1264)
								::String type = param->att->resolve(HX_CSTRING("type"));		HX_STACK_VAR(type,"type");
								HX_STACK_LINE(1264)
								::String _g11 = type.toLowerCase();		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(1264)
								type = _g11;
								HX_STACK_LINE(1264)
								::String valueStr = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(valueStr,"valueStr");
								HX_STACK_LINE(1264)
								Dynamic value = valueStr;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(1264)
								int sort = ::flixel::addons::ui::U_obj::xml_i(param->x,HX_CSTRING("sort"),(int)-1);		HX_STACK_VAR(sort,"sort");
								HX_STACK_LINE(1264)
								::String _switch_6 = (type);
								if (  ( _switch_6==HX_CSTRING("string"))){
									HX_STACK_LINE(1264)
									::String _g12 = ::String(valueStr);		HX_STACK_VAR(_g12,"_g12");
									HX_STACK_LINE(1264)
									value = _g12;
								}
								else if (  ( _switch_6==HX_CSTRING("int"))){
									HX_STACK_LINE(1264)
									Dynamic _g13 = ::Std_obj::parseInt(valueStr);		HX_STACK_VAR(_g13,"_g13");
									HX_STACK_LINE(1264)
									value = _g13;
								}
								else if (  ( _switch_6==HX_CSTRING("float"))){
									HX_STACK_LINE(1264)
									Float _g14 = ::Std_obj::parseFloat(valueStr);		HX_STACK_VAR(_g14,"_g14");
									HX_STACK_LINE(1264)
									value = _g14;
								}
								else if (  ( _switch_6==HX_CSTRING("color")) ||  ( _switch_6==HX_CSTRING("hex"))){
									HX_STACK_LINE(1264)
									int _g15;		HX_STACK_VAR(_g15,"_g15");
									HX_STACK_LINE(1264)
									{
										HX_STACK_LINE(1264)
										bool safe = false;		HX_STACK_VAR(safe,"safe");
										HX_STACK_LINE(1264)
										int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
										HX_STACK_LINE(1264)
										Dynamic return_val = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(valueStr);		HX_STACK_VAR(return_val,"return_val");
										HX_STACK_LINE(1264)
										if (((return_val == null()))){
											HX_STACK_LINE(1264)
											if ((!(safe))){
												HX_STACK_LINE(1264)
												HX_STACK_DO_THROW((HX_CSTRING("U.parseHex() unable to parse hex String ") + valueStr));
											}
											else{
												HX_STACK_LINE(1264)
												return_val = default_color;
											}
										}
										HX_STACK_LINE(1264)
										_g15 = return_val;
									}
									HX_STACK_LINE(1264)
									value = _g15;
								}
								else if (  ( _switch_6==HX_CSTRING("bool")) ||  ( _switch_6==HX_CSTRING("boolean"))){
									HX_STACK_LINE(1264)
									::String str = ::String(valueStr);		HX_STACK_VAR(str,"str");
									HX_STACK_LINE(1264)
									::String _g16 = str.toLowerCase();		HX_STACK_VAR(_g16,"_g16");
									HX_STACK_LINE(1264)
									str = _g16;
									HX_STACK_LINE(1264)
									if (((bool((str == HX_CSTRING("true"))) || bool((str == HX_CSTRING("1")))))){
										HX_STACK_LINE(1264)
										value = true;
									}
									else{
										HX_STACK_LINE(1264)
										value = false;
									}
								}
								struct _Function_6_1{
									inline static Dynamic Block( int &sort,Dynamic &value){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI.hx",1264,0xf354486a)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_CSTRING("sort") , sort,false);
											__result->Add(HX_CSTRING("value") , value,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(1264)
								params->__Field(HX_CSTRING("push"),true)(_Function_6_1::Block(sort,value));
							}
;
						}
						HX_STACK_LINE(1264)
						params->__Field(HX_CSTRING("sort"),true)(::flixel::addons::ui::FlxUI_obj::sortParams_dyn());
						HX_STACK_LINE(1264)
						{
							HX_STACK_LINE(1264)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(1264)
							int _g = params->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1264)
							while((true)){
								HX_STACK_LINE(1264)
								if ((!(((_g1 < _g))))){
									HX_STACK_LINE(1264)
									break;
								}
								HX_STACK_LINE(1264)
								int i = (_g1)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1264)
								hx::IndexRef((params).mPtr,i) = params->__GetItem(i)->__Field(HX_CSTRING("value"),true);
							}
						}
					}
					HX_STACK_LINE(1264)
					_g17 = params;
				}
				HX_STACK_LINE(1264)
				ihp->set_params(_g17);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_changeThing,(void))

Void FlxUI_obj::_alignThing( ::haxe::xml::Fast data,hx::Null< bool >  __o_suppressError){
bool suppressError = __o_suppressError.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_alignThing",0x37322a6f,"flixel.addons.ui.FlxUI._alignThing","flixel/addons/ui/FlxUI.hx",1272,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(suppressError,"suppressError")
{
		HX_STACK_LINE(1273)
		::String datastr = data->x->toString();		HX_STACK_VAR(datastr,"datastr");
		HX_STACK_LINE(1274)
		if ((data->hasNode->resolve(HX_CSTRING("objects")))){
			HX_STACK_LINE(1276)
			for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("objects"))->iterator());  __it->hasNext(); ){
				::haxe::xml::Fast objectNode = __it->next();
				{
					HX_STACK_LINE(1278)
					Array< ::String > objects = ::flixel::addons::ui::U_obj::xml_str(objectNode->x,HX_CSTRING("value"),true,HX_CSTRING("")).split(HX_CSTRING(","));		HX_STACK_VAR(objects,"objects");
					HX_STACK_LINE(1280)
					::String axis = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("axis"),true,null());		HX_STACK_VAR(axis,"axis");
					HX_STACK_LINE(1281)
					if (((bool((axis != HX_CSTRING("horizontal"))) && bool((axis != HX_CSTRING("vertical")))))){
						HX_STACK_LINE(1283)
						HX_STACK_DO_THROW(::openfl::errors::Error_obj::__new(HX_CSTRING("FlxUI._alignThing(): axis must be \"horizontal\" or \"vertical\"!"),null()));
						HX_STACK_LINE(1284)
						return null();
					}
					HX_STACK_LINE(1287)
					Float spacing = (int)-1;		HX_STACK_VAR(spacing,"spacing");
					HX_STACK_LINE(1288)
					if (((axis == HX_CSTRING("horizontal")))){
						HX_STACK_LINE(1290)
						::String _g = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("spacing"),true,null());		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1290)
						Float _g1 = this->_getDataSize(HX_CSTRING("h"),_g,(int)-1);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1290)
						spacing = _g1;
					}
					else{
						HX_STACK_LINE(1294)
						::String _g2 = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("spacing"),true,null());		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1294)
						Float _g3 = this->_getDataSize(HX_CSTRING("w"),_g2,(int)-1);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1294)
						spacing = _g3;
					}
					HX_STACK_LINE(1297)
					bool resize = ::flixel::addons::ui::U_obj::xml_bool(data->x,HX_CSTRING("resize"),null());		HX_STACK_VAR(resize,"resize");
					HX_STACK_LINE(1299)
					bool grow = ::flixel::addons::ui::U_obj::xml_bool(data->x,HX_CSTRING("grow"),true);		HX_STACK_VAR(grow,"grow");
					HX_STACK_LINE(1300)
					bool shrink = ::flixel::addons::ui::U_obj::xml_bool(data->x,HX_CSTRING("shrink"),true);		HX_STACK_VAR(shrink,"shrink");
					HX_STACK_LINE(1302)
					::flixel::math::FlxPoint bounds;		HX_STACK_VAR(bounds,"bounds");
					HX_STACK_LINE(1302)
					{
						HX_STACK_LINE(1302)
						::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)-1,(int)-1);		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(1302)
						point->_inPool = false;
						HX_STACK_LINE(1302)
						bounds = point;
					}
					HX_STACK_LINE(1304)
					::String boundsError = HX_CSTRING("");		HX_STACK_VAR(boundsError,"boundsError");
					HX_STACK_LINE(1306)
					if ((data->hasNode->resolve(HX_CSTRING("bounds")))){
						HX_STACK_LINE(1308)
						Float bound_range = (int)-1;		HX_STACK_VAR(bound_range,"bound_range");
						HX_STACK_LINE(1310)
						if (((axis == HX_CSTRING("horizontal")))){
							HX_STACK_LINE(1311)
							::String _g4 = ::flixel::addons::ui::U_obj::xml_str(data->node->resolve(HX_CSTRING("bounds"))->x,HX_CSTRING("left"),null(),null());		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(1311)
							Float _g5 = this->_getDataSize(HX_CSTRING("w"),_g4,(int)-1);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(1311)
							bounds->set_x(_g5);
							HX_STACK_LINE(1312)
							::String _g6 = ::flixel::addons::ui::U_obj::xml_str(data->node->resolve(HX_CSTRING("bounds"))->x,HX_CSTRING("right"),null(),null());		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(1312)
							Float _g7 = this->_getDataSize(HX_CSTRING("w"),_g6,(int)-1);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(1312)
							bounds->set_y(_g7);
						}
						else{
							HX_STACK_LINE(1313)
							if (((axis == HX_CSTRING("vertical")))){
								HX_STACK_LINE(1314)
								::String _g8 = ::flixel::addons::ui::U_obj::xml_str(data->node->resolve(HX_CSTRING("bounds"))->x,HX_CSTRING("top"),null(),null());		HX_STACK_VAR(_g8,"_g8");
								HX_STACK_LINE(1314)
								Float _g9 = this->_getDataSize(HX_CSTRING("h"),_g8,(int)-1);		HX_STACK_VAR(_g9,"_g9");
								HX_STACK_LINE(1314)
								bounds->set_x(_g9);
								HX_STACK_LINE(1315)
								::String _g10 = ::flixel::addons::ui::U_obj::xml_str(data->node->resolve(HX_CSTRING("bounds"))->x,HX_CSTRING("bottom"),null(),null());		HX_STACK_VAR(_g10,"_g10");
								HX_STACK_LINE(1315)
								Float _g11 = this->_getDataSize(HX_CSTRING("h"),_g10,(int)-1);		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(1315)
								bounds->set_y(_g11);
							}
						}
					}
					HX_STACK_LINE(1319)
					if (((bool((bounds->x != (int)-1)) && bool((bounds->y != (int)-1))))){
						HX_STACK_LINE(1321)
						if (((bounds->y <= bounds->x))){
							HX_STACK_LINE(1323)
							boundsError = ((((HX_CSTRING("bounds max must be > bounds min! (max=") + bounds->y) + HX_CSTRING(" min=")) + bounds->x) + HX_CSTRING(")"));
						}
					}
					else{
						HX_STACK_LINE(1328)
						boundsError = HX_CSTRING("missing bound!");
					}
					HX_STACK_LINE(1331)
					if (((boundsError == HX_CSTRING("")))){
						HX_STACK_LINE(1333)
						this->_doAlign(objects,axis,spacing,resize,bounds,grow,shrink);
					}
					HX_STACK_LINE(1336)
					if (((  ((!(((  ((!(data->hasNode->resolve(HX_CSTRING("anchor"))))) ? bool(data->has->resolve(HX_CSTRING("x"))) : bool(true) ))))) ? bool(data->has->resolve(HX_CSTRING("y"))) : bool(true) ))){
						HX_STACK_LINE(1338)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1338)
						while((true)){
							HX_STACK_LINE(1338)
							if ((!(((_g < objects->length))))){
								HX_STACK_LINE(1338)
								break;
							}
							HX_STACK_LINE(1338)
							::String object = objects->__get(_g);		HX_STACK_VAR(object,"object");
							HX_STACK_LINE(1338)
							++(_g);
							HX_STACK_LINE(1340)
							::flixel::addons::ui::interfaces::IFlxUIWidget thing = this->getAsset(object,null());		HX_STACK_VAR(thing,"thing");
							HX_STACK_LINE(1341)
							this->_loadPosition(data,thing);
						}
					}
					else{
						HX_STACK_LINE(1346)
						if (((boundsError != HX_CSTRING("")))){
							HX_STACK_LINE(1348)
							if ((!(suppressError))){
								HX_STACK_LINE(1350)
								Dynamic();
							}
						}
					}
				}
;
			}
		}
		else{
			HX_STACK_LINE(1358)
			HX_STACK_DO_THROW(::openfl::errors::Error_obj::__new(HX_CSTRING("FlxUI._alignThing(): <objects> node not found!"),null()));
			HX_STACK_LINE(1359)
			return null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_alignThing,(void))

Void FlxUI_obj::_doAlign( Array< ::String > objects,::String axis,Float spacing,bool resize,::flixel::math::FlxPoint bounds,hx::Null< bool >  __o_allowGrow,hx::Null< bool >  __o_allowShrink){
bool allowGrow = __o_allowGrow.Default(true);
bool allowShrink = __o_allowShrink.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_doAlign",0x8f1f33f4,"flixel.addons.ui.FlxUI._doAlign","flixel/addons/ui/FlxUI.hx",1363,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(objects,"objects")
	HX_STACK_ARG(axis,"axis")
	HX_STACK_ARG(spacing,"spacing")
	HX_STACK_ARG(resize,"resize")
	HX_STACK_ARG(bounds,"bounds")
	HX_STACK_ARG(allowGrow,"allowGrow")
	HX_STACK_ARG(allowShrink,"allowShrink")
{
		HX_STACK_LINE(1364)
		Float total_spacing = (int)0;		HX_STACK_VAR(total_spacing,"total_spacing");
		HX_STACK_LINE(1365)
		Float total_size = (int)0;		HX_STACK_VAR(total_size,"total_size");
		HX_STACK_LINE(1367)
		Float bound_range = (bounds->y - bounds->x);		HX_STACK_VAR(bound_range,"bound_range");
		HX_STACK_LINE(1369)
		Float spaces = (objects->length - (int)1);		HX_STACK_VAR(spaces,"spaces");
		HX_STACK_LINE(1370)
		Float space_size = (int)0;		HX_STACK_VAR(space_size,"space_size");
		HX_STACK_LINE(1371)
		Float object_size = (int)0;		HX_STACK_VAR(object_size,"object_size");
		HX_STACK_LINE(1373)
		::String size_prop = HX_CSTRING("width");		HX_STACK_VAR(size_prop,"size_prop");
		HX_STACK_LINE(1374)
		::String pos_prop = HX_CSTRING("x");		HX_STACK_VAR(pos_prop,"pos_prop");
		HX_STACK_LINE(1375)
		if (((axis == HX_CSTRING("vertical")))){
			HX_STACK_LINE(1376)
			size_prop = HX_CSTRING("height");
			HX_STACK_LINE(1377)
			pos_prop = HX_CSTRING("y");
		}
		HX_STACK_LINE(1381)
		{
			HX_STACK_LINE(1381)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1381)
			while((true)){
				HX_STACK_LINE(1381)
				if ((!(((_g < objects->length))))){
					HX_STACK_LINE(1381)
					break;
				}
				HX_STACK_LINE(1381)
				::String id = objects->__get(_g);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(1381)
				++(_g);
				HX_STACK_LINE(1382)
				::flixel::addons::ui::interfaces::IFlxUIWidget widget = this->getAsset(id,null());		HX_STACK_VAR(widget,"widget");
				HX_STACK_LINE(1383)
				Float theval = (int)0;		HX_STACK_VAR(theval,"theval");
				HX_STACK_LINE(1385)
				::String _switch_7 = (size_prop);
				if (  ( _switch_7==HX_CSTRING("width"))){
					HX_STACK_LINE(1386)
					Float _g1 = widget->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1386)
					theval = _g1;
				}
				else if (  ( _switch_7==HX_CSTRING("height"))){
					HX_STACK_LINE(1387)
					Float _g1 = widget->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1387)
					theval = _g1;
				}
				HX_STACK_LINE(1390)
				hx::AddEq(total_size,theval);
			}
		}
		HX_STACK_LINE(1393)
		if (((resize == false))){
			HX_STACK_LINE(1394)
			total_spacing = (bound_range - total_size);
			HX_STACK_LINE(1395)
			space_size = (Float(total_spacing) / Float(spaces));
		}
		else{
			HX_STACK_LINE(1397)
			space_size = spacing;
			HX_STACK_LINE(1398)
			total_spacing = (spacing * spaces);
			HX_STACK_LINE(1399)
			object_size = (Float(((bound_range - total_spacing))) / Float(objects->length));
		}
		HX_STACK_LINE(1402)
		int _g2 = ::Std_obj::_int(object_size);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1402)
		object_size = _g2;
		HX_STACK_LINE(1403)
		int _g3 = ::Std_obj::_int(space_size);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(1403)
		space_size = _g3;
		HX_STACK_LINE(1405)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1406)
		Float last_pos = bounds->x;		HX_STACK_VAR(last_pos,"last_pos");
		HX_STACK_LINE(1407)
		{
			HX_STACK_LINE(1407)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1407)
			while((true)){
				HX_STACK_LINE(1407)
				if ((!(((_g < objects->length))))){
					HX_STACK_LINE(1407)
					break;
				}
				HX_STACK_LINE(1407)
				::String id = objects->__get(_g);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(1407)
				++(_g);
				HX_STACK_LINE(1408)
				::flixel::addons::ui::interfaces::IFlxUIWidget widget = this->getAsset(id,null());		HX_STACK_VAR(widget,"widget");
				HX_STACK_LINE(1409)
				Float pos = last_pos;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(1410)
				if ((!(resize))){
					HX_STACK_LINE(1411)
					::String _switch_8 = (size_prop);
					if (  ( _switch_8==HX_CSTRING("width"))){
						HX_STACK_LINE(1412)
						Float _g4 = widget->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(1412)
						object_size = _g4;
					}
					else if (  ( _switch_8==HX_CSTRING("height"))){
						HX_STACK_LINE(1413)
						Float _g5 = widget->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(1413)
						object_size = _g5;
					}
				}
				else{
					HX_STACK_LINE(1417)
					if ((::Std_obj::is(widget,hx::ClassOf< ::flixel::addons::ui::interfaces::IResizable >()))){
						HX_STACK_LINE(1418)
						bool allow = true;		HX_STACK_VAR(allow,"allow");
						HX_STACK_LINE(1419)
						::flixel::addons::ui::interfaces::IResizable widgetr = widget;		HX_STACK_VAR(widgetr,"widgetr");
						HX_STACK_LINE(1420)
						if (((axis == HX_CSTRING("vertical")))){
							HX_STACK_LINE(1421)
							Float _g6 = widgetr->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(1421)
							if (((object_size > _g6))){
								HX_STACK_LINE(1422)
								allow = allowGrow;
							}
							else{
								HX_STACK_LINE(1423)
								Float _g7 = widgetr->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(1423)
								if (((object_size < _g7))){
									HX_STACK_LINE(1424)
									allow = allowShrink;
								}
							}
							HX_STACK_LINE(1426)
							if ((allow)){
								HX_STACK_LINE(1427)
								Float _g8 = widgetr->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g8,"_g8");
								HX_STACK_LINE(1427)
								widgetr->resize(_g8,object_size);
							}
						}
						else{
							HX_STACK_LINE(1429)
							if (((axis == HX_CSTRING("horizontal")))){
								HX_STACK_LINE(1430)
								Float _g9 = widgetr->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g9,"_g9");
								HX_STACK_LINE(1430)
								if (((object_size > _g9))){
									HX_STACK_LINE(1431)
									allow = allowGrow;
								}
								else{
									HX_STACK_LINE(1432)
									Float _g10 = widgetr->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(1432)
									if (((object_size < _g10))){
										HX_STACK_LINE(1433)
										allow = allowShrink;
									}
								}
								HX_STACK_LINE(1435)
								if ((allow)){
									HX_STACK_LINE(1436)
									Float _g11 = widgetr->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(1436)
									widgetr->resize(object_size,_g11);
								}
							}
						}
					}
				}
				HX_STACK_LINE(1441)
				last_pos = ((pos + object_size) + space_size);
				HX_STACK_LINE(1443)
				::String _switch_9 = (pos_prop);
				if (  ( _switch_9==HX_CSTRING("x"))){
					HX_STACK_LINE(1444)
					widget->__Field(HX_CSTRING("set_x"),true)(pos);
				}
				else if (  ( _switch_9==HX_CSTRING("y"))){
					HX_STACK_LINE(1445)
					widget->__Field(HX_CSTRING("set_y"),true)(pos);
				}
				HX_STACK_LINE(1448)
				(i)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(FlxUI_obj,_doAlign,(void))

bool FlxUI_obj::_checkFailure( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_checkFailure",0x7b6fc968,"flixel.addons.ui.FlxUI._checkFailure","flixel/addons/ui/FlxUI.hx",1452,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1453)
	::String target = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("target"),true,null());		HX_STACK_VAR(target,"target");
	HX_STACK_LINE(1454)
	::String property = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("property"),true,null());		HX_STACK_VAR(property,"property");
	HX_STACK_LINE(1455)
	::String compare = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("compare"),true,null());		HX_STACK_VAR(compare,"compare");
	HX_STACK_LINE(1456)
	::String value = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("value"),true,null());		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(1458)
	::flixel::addons::ui::interfaces::IFlxUIWidget thing = this->getAsset(target,null());		HX_STACK_VAR(thing,"thing");
	HX_STACK_LINE(1460)
	if (((thing == null()))){
		HX_STACK_LINE(1461)
		return false;
	}
	HX_STACK_LINE(1464)
	Float prop_f = (int)0;		HX_STACK_VAR(prop_f,"prop_f");
	HX_STACK_LINE(1465)
	Float val_f = (int)0;		HX_STACK_VAR(val_f,"val_f");
	HX_STACK_LINE(1467)
	Float p = ::flixel::addons::ui::U_obj::perc_to_float(value);		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(1469)
	::String _switch_10 = (property);
	if (  ( _switch_10==HX_CSTRING("w")) ||  ( _switch_10==HX_CSTRING("width"))){
		HX_STACK_LINE(1470)
		Float _g = thing->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1470)
		prop_f = _g;
	}
	else if (  ( _switch_10==HX_CSTRING("h")) ||  ( _switch_10==HX_CSTRING("height"))){
		HX_STACK_LINE(1471)
		Float _g1 = thing->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1471)
		prop_f = _g1;
	}
	HX_STACK_LINE(1474)
	if ((::Math_obj::isNaN(p))){
		HX_STACK_LINE(1475)
		if ((::flixel::addons::ui::U_obj::isStrNum(value))){
			HX_STACK_LINE(1476)
			Float _g2 = ::Std_obj::parseFloat(value);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1476)
			val_f = _g2;
		}
		else{
			HX_STACK_LINE(1478)
			return false;
		}
	}
	else{
		HX_STACK_LINE(1481)
		::String _switch_11 = (property);
		if (  ( _switch_11==HX_CSTRING("w")) ||  ( _switch_11==HX_CSTRING("width"))){
			HX_STACK_LINE(1482)
			int _g3 = this->thisWidth();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1482)
			Float _g4 = (p * _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1482)
			val_f = _g4;
		}
		else if (  ( _switch_11==HX_CSTRING("h")) ||  ( _switch_11==HX_CSTRING("height"))){
			HX_STACK_LINE(1483)
			int _g5 = this->thisHeight();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1483)
			Float _g6 = (p * _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(1483)
			val_f = _g6;
		}
	}
	HX_STACK_LINE(1487)
	bool return_val = false;		HX_STACK_VAR(return_val,"return_val");
	HX_STACK_LINE(1489)
	::String _switch_12 = (compare);
	if (  ( _switch_12==HX_CSTRING("<"))){
		HX_STACK_LINE(1490)
		if (((prop_f < val_f))){
			HX_STACK_LINE(1491)
			this->failed_by = (val_f - prop_f);
			HX_STACK_LINE(1492)
			return_val = true;
		}
	}
	else if (  ( _switch_12==HX_CSTRING(">"))){
		HX_STACK_LINE(1494)
		if (((prop_f > val_f))){
			HX_STACK_LINE(1495)
			this->failed_by = (prop_f - val_f);
			HX_STACK_LINE(1496)
			return_val = true;
		}
	}
	else if (  ( _switch_12==HX_CSTRING("=")) ||  ( _switch_12==HX_CSTRING("=="))){
		HX_STACK_LINE(1498)
		if (((prop_f == val_f))){
			HX_STACK_LINE(1499)
			Float _g7 = ::Math_obj::abs((prop_f - val_f));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(1499)
			this->failed_by = _g7;
			HX_STACK_LINE(1500)
			return_val = true;
		}
	}
	else if (  ( _switch_12==HX_CSTRING("<="))){
		HX_STACK_LINE(1502)
		if (((prop_f <= val_f))){
			HX_STACK_LINE(1503)
			this->failed_by = (val_f - prop_f);
			HX_STACK_LINE(1504)
			return_val = true;
		}
	}
	else if (  ( _switch_12==HX_CSTRING(">="))){
		HX_STACK_LINE(1506)
		if (((prop_f >= val_f))){
			HX_STACK_LINE(1507)
			this->failed_by = (prop_f - val_f);
			HX_STACK_LINE(1508)
			return_val = true;
		}
	}
	HX_STACK_LINE(1512)
	return return_val;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_checkFailure,return )

Void FlxUI_obj::_resizeThing( ::flixel::addons::ui::interfaces::IResizable fo_r,Dynamic bounds){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_resizeThing",0x4ba3eb14,"flixel.addons.ui.FlxUI._resizeThing","flixel/addons/ui/FlxUI.hx",1516,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fo_r,"fo_r")
		HX_STACK_ARG(bounds,"bounds")
		HX_STACK_LINE(1517)
		bool do_resize = false;		HX_STACK_VAR(do_resize,"do_resize");
		HX_STACK_LINE(1518)
		Float ww = fo_r->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(ww,"ww");
		HX_STACK_LINE(1519)
		Float hh = fo_r->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(hh,"hh");
		HX_STACK_LINE(1521)
		if (((ww < bounds->__Field(HX_CSTRING("min_width"),true)))){
			HX_STACK_LINE(1522)
			do_resize = true;
			HX_STACK_LINE(1523)
			ww = bounds->__Field(HX_CSTRING("min_width"),true);
		}
		else{
			HX_STACK_LINE(1524)
			if (((ww > bounds->__Field(HX_CSTRING("max_width"),true)))){
				HX_STACK_LINE(1525)
				do_resize = true;
				HX_STACK_LINE(1526)
				ww = bounds->__Field(HX_CSTRING("max_width"),true);
			}
		}
		HX_STACK_LINE(1529)
		if (((hh < bounds->__Field(HX_CSTRING("min_height"),true)))){
			HX_STACK_LINE(1530)
			do_resize = true;
			HX_STACK_LINE(1531)
			hh = bounds->__Field(HX_CSTRING("min_height"),true);
		}
		else{
			HX_STACK_LINE(1532)
			if (((hh > bounds->__Field(HX_CSTRING("max_height"),true)))){
				HX_STACK_LINE(1533)
				do_resize = true;
				HX_STACK_LINE(1534)
				hh = bounds->__Field(HX_CSTRING("max_height"),true);
			}
		}
		HX_STACK_LINE(1537)
		if ((do_resize)){
			HX_STACK_LINE(1538)
			fo_r->resize(ww,hh);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_resizeThing,(void))

Void FlxUI_obj::_postLoadThing( ::String type,::haxe::xml::Fast data){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_postLoadThing",0x7251e7a2,"flixel.addons.ui.FlxUI._postLoadThing","flixel/addons/ui/FlxUI.hx",1543,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(1544)
		if (((type == HX_CSTRING("load_if")))){
			HX_STACK_LINE(1546)
			if ((this->_loadTest(data))){
				HX_STACK_LINE(1548)
				::Xml _g = data->x->firstElement();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1548)
				if (((_g != null()))){
					HX_STACK_LINE(1550)
					for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(data->x->elements());  __it->hasNext(); ){
						::Xml subNode = __it->next();
						{
							HX_STACK_LINE(1552)
							::String nodeType = subNode->get_nodeName().toLowerCase();		HX_STACK_VAR(nodeType,"nodeType");
							HX_STACK_LINE(1553)
							::haxe::xml::Fast _g1 = ::haxe::xml::Fast_obj::__new(subNode);		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(1553)
							this->_postLoadThing(nodeType,_g1);
						}
;
					}
				}
			}
			HX_STACK_LINE(1557)
			return null();
		}
		HX_STACK_LINE(1560)
		bool _g2 = this->_loadTest(data);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1560)
		if (((_g2 == false))){
			HX_STACK_LINE(1562)
			return null();
		}
		HX_STACK_LINE(1565)
		::String id = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(1566)
		::flixel::addons::ui::interfaces::IFlxUIWidget thing = this->getAsset(id,null());		HX_STACK_VAR(thing,"thing");
		HX_STACK_LINE(1568)
		if (((type == HX_CSTRING("align")))){
			HX_STACK_LINE(1569)
			this->_alignThing(data,null());
		}
		HX_STACK_LINE(1572)
		if (((type == HX_CSTRING("position")))){
			HX_STACK_LINE(1573)
			this->_loadPosition(data,thing);
			HX_STACK_LINE(1574)
			return null();
		}
		HX_STACK_LINE(1577)
		if (((thing == null()))){
			HX_STACK_LINE(1578)
			return null();
		}
		HX_STACK_LINE(1581)
		::String use_def = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("use_def"),true,null());		HX_STACK_VAR(use_def,"use_def");
		HX_STACK_LINE(1582)
		::haxe::xml::Fast definition = null();		HX_STACK_VAR(definition,"definition");
		HX_STACK_LINE(1583)
		if (((use_def != HX_CSTRING("")))){
			HX_STACK_LINE(1584)
			::haxe::xml::Fast _g3 = this->getDefinition(use_def,null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1584)
			definition = _g3;
		}
		HX_STACK_LINE(1587)
		if ((::Std_obj::is(thing,hx::ClassOf< ::flixel::addons::ui::interfaces::IResizable >()))){
			HX_STACK_LINE(1589)
			Dynamic bounds = this->calcMaxMinSize(data,null(),null());		HX_STACK_VAR(bounds,"bounds");
			HX_STACK_LINE(1591)
			if (((bounds != null()))){
				HX_STACK_LINE(1593)
				::flixel::addons::ui::interfaces::IResizable _g4;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(1593)
				_g4 = hx::TCast< flixel::addons::ui::interfaces::IResizable >::cast(thing);
				HX_STACK_LINE(1593)
				this->_resizeThing(_g4,bounds);
			}
		}
		HX_STACK_LINE(1597)
		{
			HX_STACK_LINE(1597)
			{
				HX_STACK_LINE(1597)
				::flixel::addons::ui::interfaces::IFlxUIWidget _g = thing;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1597)
				_g->__Field(HX_CSTRING("set_x"),true)((_g->__Field(HX_CSTRING("x"),true) + -(thing->__Field(HX_CSTRING("x"),true))));
			}
			HX_STACK_LINE(1597)
			{
				HX_STACK_LINE(1597)
				::flixel::addons::ui::interfaces::IFlxUIWidget _g = thing;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1597)
				_g->__Field(HX_CSTRING("set_y"),true)((_g->__Field(HX_CSTRING("y"),true) + -(thing->__Field(HX_CSTRING("y"),true))));
			}
		}
		HX_STACK_LINE(1598)
		this->_loadPosition(data,thing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_postLoadThing,(void))

::flixel::addons::ui::FlxUITileTest FlxUI_obj::_loadTileTest( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadTileTest",0xb7577bec,"flixel.addons.ui.FlxUI._loadTileTest","flixel/addons/ui/FlxUI.hx",1601,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1603)
	int tiles_w = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("tiles_w"),(int)2);		HX_STACK_VAR(tiles_w,"tiles_w");
	HX_STACK_LINE(1604)
	int tiles_h = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("tiles_h"),(int)2);		HX_STACK_VAR(tiles_h,"tiles_h");
	HX_STACK_LINE(1605)
	Float w = this->_loadWidth(data,null(),null());		HX_STACK_VAR(w,"w");
	HX_STACK_LINE(1606)
	Float h = this->_loadHeight(data,null(),null());		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(1609)
	Dynamic bounds = this->calcMaxMinSize(data,null(),null());		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(1611)
	if (((w < bounds->__Field(HX_CSTRING("min_width"),true)))){
		HX_STACK_LINE(1611)
		w = bounds->__Field(HX_CSTRING("min_width"),true);
	}
	HX_STACK_LINE(1612)
	if (((h < bounds->__Field(HX_CSTRING("min_height"),true)))){
		HX_STACK_LINE(1612)
		h = bounds->__Field(HX_CSTRING("min_height"),true);
	}
	HX_STACK_LINE(1614)
	int tileWidth = ::Std_obj::_int((Float(w) / Float(tiles_w)));		HX_STACK_VAR(tileWidth,"tileWidth");
	HX_STACK_LINE(1615)
	int tileHeight = ::Std_obj::_int((Float(h) / Float(tiles_h)));		HX_STACK_VAR(tileHeight,"tileHeight");
	HX_STACK_LINE(1617)
	if (((tileWidth < tileHeight))){
		HX_STACK_LINE(1617)
		tileHeight = tileWidth;
	}
	else{
		HX_STACK_LINE(1618)
		if (((tileHeight < tileWidth))){
			HX_STACK_LINE(1618)
			tileWidth = tileHeight;
		}
	}
	HX_STACK_LINE(1620)
	Float totalw = (tileWidth * tiles_w);		HX_STACK_VAR(totalw,"totalw");
	HX_STACK_LINE(1621)
	Float totalh = (tileHeight * tiles_h);		HX_STACK_VAR(totalh,"totalh");
	HX_STACK_LINE(1623)
	if (((totalw > bounds->__Field(HX_CSTRING("max_width"),true)))){
		HX_STACK_LINE(1623)
		int _g = ::Std_obj::_int((Float(bounds->__Field(HX_CSTRING("max_width"),true)) / Float(tiles_w)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1623)
		tileWidth = _g;
	}
	HX_STACK_LINE(1624)
	if (((totalh > bounds->__Field(HX_CSTRING("max_height"),true)))){
		HX_STACK_LINE(1624)
		int _g1 = ::Std_obj::_int((Float(bounds->__Field(HX_CSTRING("max_height"),true)) / Float(tiles_h)));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1624)
		tileHeight = _g1;
	}
	HX_STACK_LINE(1626)
	if (((tileWidth < tileHeight))){
		HX_STACK_LINE(1626)
		tileHeight = tileWidth;
	}
	else{
		HX_STACK_LINE(1627)
		if (((tileHeight < tileWidth))){
			HX_STACK_LINE(1627)
			tileWidth = tileHeight;
		}
	}
	HX_STACK_LINE(1629)
	if (((tileWidth < (int)2))){
		HX_STACK_LINE(1629)
		tileWidth = (int)2;
	}
	HX_STACK_LINE(1630)
	if (((tileHeight < (int)2))){
		HX_STACK_LINE(1630)
		tileHeight = (int)2;
	}
	HX_STACK_LINE(1632)
	::String _g2 = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("color1"),true,HX_CSTRING("0x808080"));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(1632)
	int color1 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(_g2);		HX_STACK_VAR(color1,"color1");
	HX_STACK_LINE(1633)
	::String _g3 = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("color2"),true,HX_CSTRING("0xc4c4c4"));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(1633)
	int color2 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(_g3);		HX_STACK_VAR(color2,"color2");
	HX_STACK_LINE(1635)
	int baseTileSize = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("base_tile_size"),(int)-1);		HX_STACK_VAR(baseTileSize,"baseTileSize");
	HX_STACK_LINE(1636)
	bool floorToEven = ::flixel::addons::ui::U_obj::xml_bool(data->x,HX_CSTRING("floor_to_even"),false);		HX_STACK_VAR(floorToEven,"floorToEven");
	HX_STACK_LINE(1638)
	::flixel::addons::ui::FlxUITileTest ftt = ::flixel::addons::ui::FlxUITileTest_obj::__new((int)0,(int)0,tileWidth,tileHeight,tiles_w,tiles_h,color1,color2,floorToEven);		HX_STACK_VAR(ftt,"ftt");
	HX_STACK_LINE(1639)
	ftt->baseTileSize = baseTileSize;
	HX_STACK_LINE(1640)
	return ftt;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadTileTest,return )

::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::_loadText( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadText",0x9815c3f9,"flixel.addons.ui.FlxUI._loadText","flixel/addons/ui/FlxUI.hx",1643,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1645)
	::String text = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("text"),null(),null());		HX_STACK_VAR(text,"text");
	HX_STACK_LINE(1646)
	::String context = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("context"),true,HX_CSTRING("ui"));		HX_STACK_VAR(context,"context");
	HX_STACK_LINE(1647)
	::String code = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("code"),true,HX_CSTRING(""));		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(1648)
	::String _g = this->getText(text,context,true,code);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1648)
	text = _g;
	HX_STACK_LINE(1650)
	Float _g1 = this->_loadWidth(data,(int)100,null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1650)
	int W = ::Std_obj::_int(_g1);		HX_STACK_VAR(W,"W");
	HX_STACK_LINE(1651)
	Float _g2 = this->_loadHeight(data,(int)-1,null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(1651)
	int H = ::Std_obj::_int(_g2);		HX_STACK_VAR(H,"H");
	HX_STACK_LINE(1653)
	::String the_font = this->_loadFontFace(data);		HX_STACK_VAR(the_font,"the_font");
	HX_STACK_LINE(1655)
	bool input = ::flixel::addons::ui::U_obj::xml_bool(data->x,HX_CSTRING("input"),null());		HX_STACK_VAR(input,"input");
	HX_STACK_LINE(1656)
	if ((input)){
		HX_STACK_LINE(1658)
		HX_STACK_DO_THROW(::openfl::errors::Error_obj::__new(HX_CSTRING("FlxUI._loadText(): <text> with input has been deprecated. Use <input_text> instead."),null()));
	}
	HX_STACK_LINE(1661)
	::String align = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("align"),null(),null());		HX_STACK_VAR(align,"align");
	HX_STACK_LINE(1661)
	if (((align == HX_CSTRING("")))){
		HX_STACK_LINE(1661)
		align = null();
	}
	HX_STACK_LINE(1662)
	int size = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("size"),null());		HX_STACK_VAR(size,"size");
	HX_STACK_LINE(1662)
	if (((size == (int)0))){
		HX_STACK_LINE(1662)
		size = (int)8;
	}
	HX_STACK_LINE(1663)
	int color = this->_loadColor(data,null(),null());		HX_STACK_VAR(color,"color");
	HX_STACK_LINE(1665)
	::flixel::addons::ui::BorderDef border = this->_loadBorder(data);		HX_STACK_VAR(border,"border");
	HX_STACK_LINE(1667)
	int backgroundColor;		HX_STACK_VAR(backgroundColor,"backgroundColor");
	HX_STACK_LINE(1667)
	{
		HX_STACK_LINE(1667)
		::String str = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("background"),true,HX_CSTRING("0x00000000"));		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(1667)
		Dynamic return_val = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(str);		HX_STACK_VAR(return_val,"return_val");
		HX_STACK_LINE(1667)
		if (((return_val == null()))){
			HX_STACK_LINE(1667)
			return_val = (int)0;
		}
		HX_STACK_LINE(1667)
		backgroundColor = return_val;
	}
	HX_STACK_LINE(1669)
	::flixel::addons::ui::interfaces::IFlxUIWidget ft;		HX_STACK_VAR(ft,"ft");
	HX_STACK_LINE(1670)
	::flixel::addons::ui::FlxUIText ftu = ::flixel::addons::ui::FlxUIText_obj::__new((int)0,(int)0,W,text,size,null());		HX_STACK_VAR(ftu,"ftu");
	HX_STACK_LINE(1671)
	ftu->setFormat(the_font,size,color,align,null(),null(),null());
	HX_STACK_LINE(1672)
	border->apply(ftu);
	HX_STACK_LINE(1673)
	ftu->drawFrame(null());
	HX_STACK_LINE(1674)
	ft = ftu;
	HX_STACK_LINE(1676)
	if ((data->hasNode->resolve(HX_CSTRING("param")))){
		HX_STACK_LINE(1677)
		Dynamic params;		HX_STACK_VAR(params,"params");
		HX_STACK_LINE(1677)
		{
			HX_STACK_LINE(1677)
			Dynamic params1 = null();		HX_STACK_VAR(params1,"params1");
			HX_STACK_LINE(1677)
			if ((data->hasNode->resolve(HX_CSTRING("param")))){
				HX_STACK_LINE(1677)
				Dynamic _g3 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1677)
				params1 = _g3;
				HX_STACK_LINE(1677)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("param"))->iterator());  __it->hasNext(); ){
					::haxe::xml::Fast param = __it->next();
					if (((  ((param->has->resolve(HX_CSTRING("type")))) ? bool(param->has->resolve(HX_CSTRING("value"))) : bool(false) ))){
						HX_STACK_LINE(1677)
						::String type = param->att->resolve(HX_CSTRING("type"));		HX_STACK_VAR(type,"type");
						HX_STACK_LINE(1677)
						::String _g4 = type.toLowerCase();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(1677)
						type = _g4;
						HX_STACK_LINE(1677)
						::String valueStr = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(valueStr,"valueStr");
						HX_STACK_LINE(1677)
						Dynamic value = valueStr;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(1677)
						int sort = ::flixel::addons::ui::U_obj::xml_i(param->x,HX_CSTRING("sort"),(int)-1);		HX_STACK_VAR(sort,"sort");
						HX_STACK_LINE(1677)
						::String _switch_13 = (type);
						if (  ( _switch_13==HX_CSTRING("string"))){
							HX_STACK_LINE(1677)
							::String _g5 = ::String(valueStr);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(1677)
							value = _g5;
						}
						else if (  ( _switch_13==HX_CSTRING("int"))){
							HX_STACK_LINE(1677)
							Dynamic _g6 = ::Std_obj::parseInt(valueStr);		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(1677)
							value = _g6;
						}
						else if (  ( _switch_13==HX_CSTRING("float"))){
							HX_STACK_LINE(1677)
							Float _g7 = ::Std_obj::parseFloat(valueStr);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(1677)
							value = _g7;
						}
						else if (  ( _switch_13==HX_CSTRING("color")) ||  ( _switch_13==HX_CSTRING("hex"))){
							HX_STACK_LINE(1677)
							int _g8;		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(1677)
							{
								HX_STACK_LINE(1677)
								bool safe = false;		HX_STACK_VAR(safe,"safe");
								HX_STACK_LINE(1677)
								int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
								HX_STACK_LINE(1677)
								Dynamic return_val = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(valueStr);		HX_STACK_VAR(return_val,"return_val");
								HX_STACK_LINE(1677)
								if (((return_val == null()))){
									HX_STACK_LINE(1677)
									if ((!(safe))){
										HX_STACK_LINE(1677)
										HX_STACK_DO_THROW((HX_CSTRING("U.parseHex() unable to parse hex String ") + valueStr));
									}
									else{
										HX_STACK_LINE(1677)
										return_val = default_color;
									}
								}
								HX_STACK_LINE(1677)
								_g8 = return_val;
							}
							HX_STACK_LINE(1677)
							value = _g8;
						}
						else if (  ( _switch_13==HX_CSTRING("bool")) ||  ( _switch_13==HX_CSTRING("boolean"))){
							HX_STACK_LINE(1677)
							::String str = ::String(valueStr);		HX_STACK_VAR(str,"str");
							HX_STACK_LINE(1677)
							::String _g9 = str.toLowerCase();		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(1677)
							str = _g9;
							HX_STACK_LINE(1677)
							if (((bool((str == HX_CSTRING("true"))) || bool((str == HX_CSTRING("1")))))){
								HX_STACK_LINE(1677)
								value = true;
							}
							else{
								HX_STACK_LINE(1677)
								value = false;
							}
						}
						struct _Function_5_1{
							inline static Dynamic Block( int &sort,Dynamic &value){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI.hx",1677,0xf354486a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("sort") , sort,false);
									__result->Add(HX_CSTRING("value") , value,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(1677)
						params1->__Field(HX_CSTRING("push"),true)(_Function_5_1::Block(sort,value));
					}
;
				}
				HX_STACK_LINE(1677)
				params1->__Field(HX_CSTRING("sort"),true)(::flixel::addons::ui::FlxUI_obj::sortParams_dyn());
				HX_STACK_LINE(1677)
				{
					HX_STACK_LINE(1677)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(1677)
					int _g4 = params1->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(1677)
					while((true)){
						HX_STACK_LINE(1677)
						if ((!(((_g11 < _g4))))){
							HX_STACK_LINE(1677)
							break;
						}
						HX_STACK_LINE(1677)
						int i = (_g11)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(1677)
						hx::IndexRef((params1).mPtr,i) = params1->__GetItem(i)->__Field(HX_CSTRING("value"),true);
					}
				}
			}
			HX_STACK_LINE(1677)
			params = params1;
		}
		HX_STACK_LINE(1678)
		::flixel::addons::ui::interfaces::IHasParams ihp = ft;		HX_STACK_VAR(ihp,"ihp");
		HX_STACK_LINE(1679)
		ihp->set_params(params);
	}
	struct _Function_1_1{
		inline static bool Block( ::flixel::addons::ui::interfaces::IFlxUIWidget &ft,int &H){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI.hx",1682,0xf354486a)
			{
				HX_STACK_LINE(1682)
				Float _g10 = ft->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(1682)
				return (_g10 != H);
			}
			return null();
		}
	};
	HX_STACK_LINE(1682)
	if (((  (((H > (int)0))) ? bool(_Function_1_1::Block(ft,H)) : bool(false) ))){
		HX_STACK_LINE(1684)
		if ((::Std_obj::is(ft,hx::ClassOf< ::flixel::addons::ui::interfaces::IResizable >()))){
			HX_STACK_LINE(1686)
			::flixel::addons::ui::interfaces::IResizable r = ft;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(1687)
			Float _g11 = r->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1687)
			r->resize(_g11,H);
		}
	}
	HX_STACK_LINE(1691)
	return ft;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadText,return )

::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::_loadInputText( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadInputText",0x30689f0b,"flixel.addons.ui.FlxUI._loadInputText","flixel/addons/ui/FlxUI.hx",1694,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1696)
	::String text = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("text"),null(),null());		HX_STACK_VAR(text,"text");
	HX_STACK_LINE(1697)
	::String context = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("context"),true,HX_CSTRING("ui"));		HX_STACK_VAR(context,"context");
	HX_STACK_LINE(1698)
	::String code = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("code"),true,HX_CSTRING(""));		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(1699)
	::String _g = this->getText(text,context,true,code);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1699)
	text = _g;
	HX_STACK_LINE(1701)
	Float _g1 = this->_loadWidth(data,(int)100,null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1701)
	int W = ::Std_obj::_int(_g1);		HX_STACK_VAR(W,"W");
	HX_STACK_LINE(1702)
	Float _g2 = this->_loadHeight(data,(int)-1,null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(1702)
	int H = ::Std_obj::_int(_g2);		HX_STACK_VAR(H,"H");
	HX_STACK_LINE(1704)
	::String the_font = this->_loadFontFace(data);		HX_STACK_VAR(the_font,"the_font");
	HX_STACK_LINE(1706)
	::String align = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("align"),null(),null());		HX_STACK_VAR(align,"align");
	HX_STACK_LINE(1706)
	if (((align == HX_CSTRING("")))){
		HX_STACK_LINE(1706)
		align = null();
	}
	HX_STACK_LINE(1707)
	int size = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("size"),null());		HX_STACK_VAR(size,"size");
	HX_STACK_LINE(1707)
	if (((size == (int)0))){
		HX_STACK_LINE(1707)
		size = (int)8;
	}
	HX_STACK_LINE(1708)
	int color = this->_loadColor(data,null(),null());		HX_STACK_VAR(color,"color");
	HX_STACK_LINE(1710)
	::flixel::addons::ui::BorderDef border = this->_loadBorder(data);		HX_STACK_VAR(border,"border");
	HX_STACK_LINE(1712)
	int backgroundColor;		HX_STACK_VAR(backgroundColor,"backgroundColor");
	HX_STACK_LINE(1712)
	{
		HX_STACK_LINE(1712)
		::String str = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("background"),true,HX_CSTRING("0x00000000"));		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(1712)
		Dynamic return_val = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(str);		HX_STACK_VAR(return_val,"return_val");
		HX_STACK_LINE(1712)
		if (((return_val == null()))){
			HX_STACK_LINE(1712)
			return_val = (int)0;
		}
		HX_STACK_LINE(1712)
		backgroundColor = return_val;
	}
	HX_STACK_LINE(1713)
	bool passwordMode = ::flixel::addons::ui::U_obj::xml_bool(data->x,HX_CSTRING("password_mode"),null());		HX_STACK_VAR(passwordMode,"passwordMode");
	HX_STACK_LINE(1715)
	::flixel::addons::ui::interfaces::IFlxUIWidget ft;		HX_STACK_VAR(ft,"ft");
	HX_STACK_LINE(1716)
	::flixel::addons::ui::FlxUIInputText fti = ::flixel::addons::ui::FlxUIInputText_obj::__new((int)0,(int)0,W,text,size,color,backgroundColor,null());		HX_STACK_VAR(fti,"fti");
	HX_STACK_LINE(1717)
	fti->set_passwordMode(passwordMode);
	HX_STACK_LINE(1719)
	::String force_case = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("force_case"),true,HX_CSTRING(""));		HX_STACK_VAR(force_case,"force_case");
	HX_STACK_LINE(1720)
	int forceCase;		HX_STACK_VAR(forceCase,"forceCase");
	HX_STACK_LINE(1721)
	::String _switch_14 = (force_case);
	if (  ( _switch_14==HX_CSTRING("upper")) ||  ( _switch_14==HX_CSTRING("upper_case")) ||  ( _switch_14==HX_CSTRING("uppercase"))){
		HX_STACK_LINE(1722)
		forceCase = (int)1;
	}
	else if (  ( _switch_14==HX_CSTRING("lower")) ||  ( _switch_14==HX_CSTRING("lower_case")) ||  ( _switch_14==HX_CSTRING("lowercase"))){
		HX_STACK_LINE(1723)
		forceCase = (int)2;
	}
	else if (  ( _switch_14==HX_CSTRING("u")) ||  ( _switch_14==HX_CSTRING("l"))){
		HX_STACK_LINE(1725)
		HX_STACK_DO_THROW(::openfl::errors::Error_obj::__new(HX_CSTRING("FlxUI._loadInputText(): 1 letter values have been deprecated (force_case attribute)."),null()));
	}
	else  {
		HX_STACK_LINE(1726)
		forceCase = (int)0;
	}
;
;
	HX_STACK_LINE(1729)
	::String filter = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("filter"),true,HX_CSTRING(""));		HX_STACK_VAR(filter,"filter");
	HX_STACK_LINE(1730)
	int filterMode;		HX_STACK_VAR(filterMode,"filterMode");
	HX_STACK_LINE(1731)
	while((true)){
		HX_STACK_LINE(1731)
		int _g3 = filter.indexOf(HX_CSTRING("_"),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(1731)
		if ((!(((_g3 != (int)-1))))){
			HX_STACK_LINE(1731)
			break;
		}
		HX_STACK_LINE(1732)
		::String _g4 = ::StringTools_obj::replace(filter,HX_CSTRING("_"),HX_CSTRING(""));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(1732)
		filter = _g4;
	}
	HX_STACK_LINE(1734)
	::String _switch_15 = (filter);
	if (  ( _switch_15==HX_CSTRING("alpha")) ||  ( _switch_15==HX_CSTRING("onlyalpha"))){
		HX_STACK_LINE(1735)
		filterMode = (int)1;
	}
	else if (  ( _switch_15==HX_CSTRING("num")) ||  ( _switch_15==HX_CSTRING("numeric")) ||  ( _switch_15==HX_CSTRING("onlynumeric"))){
		HX_STACK_LINE(1736)
		filterMode = (int)2;
	}
	else if (  ( _switch_15==HX_CSTRING("alphanum")) ||  ( _switch_15==HX_CSTRING("alphanumeric")) ||  ( _switch_15==HX_CSTRING("onlyalphanumeric"))){
		HX_STACK_LINE(1737)
		filterMode = (int)3;
	}
	else if (  ( _switch_15==HX_CSTRING("a")) ||  ( _switch_15==HX_CSTRING("n")) ||  ( _switch_15==HX_CSTRING("an"))){
		HX_STACK_LINE(1739)
		HX_STACK_DO_THROW(::openfl::errors::Error_obj::__new(HX_CSTRING("FlxUI._loadInputText(): 1 letter values have been deprecated (filter attribute)."),null()));
	}
	else  {
		HX_STACK_LINE(1740)
		filterMode = (int)0;
	}
;
;
	HX_STACK_LINE(1743)
	fti->setFormat(the_font,size,color,align,null(),null(),null());
	HX_STACK_LINE(1744)
	fti->set_forceCase(forceCase);
	HX_STACK_LINE(1745)
	fti->set_filterMode(filterMode);
	HX_STACK_LINE(1746)
	border->apply(fti);
	HX_STACK_LINE(1747)
	fti->drawFrame(null());
	HX_STACK_LINE(1748)
	ft = fti;
	HX_STACK_LINE(1750)
	if ((data->hasNode->resolve(HX_CSTRING("param")))){
		HX_STACK_LINE(1751)
		Dynamic params;		HX_STACK_VAR(params,"params");
		HX_STACK_LINE(1751)
		{
			HX_STACK_LINE(1751)
			Dynamic params1 = null();		HX_STACK_VAR(params1,"params1");
			HX_STACK_LINE(1751)
			if ((data->hasNode->resolve(HX_CSTRING("param")))){
				HX_STACK_LINE(1751)
				Dynamic _g5 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(1751)
				params1 = _g5;
				HX_STACK_LINE(1751)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("param"))->iterator());  __it->hasNext(); ){
					::haxe::xml::Fast param = __it->next();
					if (((  ((param->has->resolve(HX_CSTRING("type")))) ? bool(param->has->resolve(HX_CSTRING("value"))) : bool(false) ))){
						HX_STACK_LINE(1751)
						::String type = param->att->resolve(HX_CSTRING("type"));		HX_STACK_VAR(type,"type");
						HX_STACK_LINE(1751)
						::String _g6 = type.toLowerCase();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(1751)
						type = _g6;
						HX_STACK_LINE(1751)
						::String valueStr = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(valueStr,"valueStr");
						HX_STACK_LINE(1751)
						Dynamic value = valueStr;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(1751)
						int sort = ::flixel::addons::ui::U_obj::xml_i(param->x,HX_CSTRING("sort"),(int)-1);		HX_STACK_VAR(sort,"sort");
						HX_STACK_LINE(1751)
						::String _switch_16 = (type);
						if (  ( _switch_16==HX_CSTRING("string"))){
							HX_STACK_LINE(1751)
							::String _g7 = ::String(valueStr);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(1751)
							value = _g7;
						}
						else if (  ( _switch_16==HX_CSTRING("int"))){
							HX_STACK_LINE(1751)
							Dynamic _g8 = ::Std_obj::parseInt(valueStr);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(1751)
							value = _g8;
						}
						else if (  ( _switch_16==HX_CSTRING("float"))){
							HX_STACK_LINE(1751)
							Float _g9 = ::Std_obj::parseFloat(valueStr);		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(1751)
							value = _g9;
						}
						else if (  ( _switch_16==HX_CSTRING("color")) ||  ( _switch_16==HX_CSTRING("hex"))){
							HX_STACK_LINE(1751)
							int _g10;		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(1751)
							{
								HX_STACK_LINE(1751)
								bool safe = false;		HX_STACK_VAR(safe,"safe");
								HX_STACK_LINE(1751)
								int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
								HX_STACK_LINE(1751)
								Dynamic return_val = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(valueStr);		HX_STACK_VAR(return_val,"return_val");
								HX_STACK_LINE(1751)
								if (((return_val == null()))){
									HX_STACK_LINE(1751)
									if ((!(safe))){
										HX_STACK_LINE(1751)
										HX_STACK_DO_THROW((HX_CSTRING("U.parseHex() unable to parse hex String ") + valueStr));
									}
									else{
										HX_STACK_LINE(1751)
										return_val = default_color;
									}
								}
								HX_STACK_LINE(1751)
								_g10 = return_val;
							}
							HX_STACK_LINE(1751)
							value = _g10;
						}
						else if (  ( _switch_16==HX_CSTRING("bool")) ||  ( _switch_16==HX_CSTRING("boolean"))){
							HX_STACK_LINE(1751)
							::String str = ::String(valueStr);		HX_STACK_VAR(str,"str");
							HX_STACK_LINE(1751)
							::String _g11 = str.toLowerCase();		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(1751)
							str = _g11;
							HX_STACK_LINE(1751)
							if (((bool((str == HX_CSTRING("true"))) || bool((str == HX_CSTRING("1")))))){
								HX_STACK_LINE(1751)
								value = true;
							}
							else{
								HX_STACK_LINE(1751)
								value = false;
							}
						}
						struct _Function_5_1{
							inline static Dynamic Block( int &sort,Dynamic &value){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI.hx",1751,0xf354486a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("sort") , sort,false);
									__result->Add(HX_CSTRING("value") , value,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(1751)
						params1->__Field(HX_CSTRING("push"),true)(_Function_5_1::Block(sort,value));
					}
;
				}
				HX_STACK_LINE(1751)
				params1->__Field(HX_CSTRING("sort"),true)(::flixel::addons::ui::FlxUI_obj::sortParams_dyn());
				HX_STACK_LINE(1751)
				{
					HX_STACK_LINE(1751)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(1751)
					int _g3 = params1->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(1751)
					while((true)){
						HX_STACK_LINE(1751)
						if ((!(((_g11 < _g3))))){
							HX_STACK_LINE(1751)
							break;
						}
						HX_STACK_LINE(1751)
						int i = (_g11)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(1751)
						hx::IndexRef((params1).mPtr,i) = params1->__GetItem(i)->__Field(HX_CSTRING("value"),true);
					}
				}
			}
			HX_STACK_LINE(1751)
			params = params1;
		}
		HX_STACK_LINE(1752)
		::flixel::addons::ui::interfaces::IHasParams ihp = ft;		HX_STACK_VAR(ihp,"ihp");
		HX_STACK_LINE(1753)
		ihp->set_params(params);
	}
	struct _Function_1_1{
		inline static bool Block( ::flixel::addons::ui::interfaces::IFlxUIWidget &ft,int &H){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI.hx",1756,0xf354486a)
			{
				HX_STACK_LINE(1756)
				Float _g12 = ft->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(1756)
				return (_g12 != H);
			}
			return null();
		}
	};
	HX_STACK_LINE(1756)
	if (((  (((H > (int)0))) ? bool(_Function_1_1::Block(ft,H)) : bool(false) ))){
		HX_STACK_LINE(1758)
		if ((::Std_obj::is(ft,hx::ClassOf< ::flixel::addons::ui::interfaces::IResizable >()))){
			HX_STACK_LINE(1760)
			::flixel::addons::ui::interfaces::IResizable r = ft;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(1761)
			Float _g13 = r->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(1761)
			r->resize(_g13,H);
		}
	}
	HX_STACK_LINE(1765)
	return ft;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadInputText,return )

::flixel::addons::ui::FlxUIRadioGroup FlxUI_obj::_loadRadioGroup( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadRadioGroup",0x22b21c90,"flixel.addons.ui.FlxUI._loadRadioGroup","flixel/addons/ui/FlxUI.hx",1806,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1807)
	::flixel::addons::ui::FlxUIRadioGroup frg = null();		HX_STACK_VAR(frg,"frg");
	HX_STACK_LINE(1809)
	::String dot_src = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("dot_src"),true,null());		HX_STACK_VAR(dot_src,"dot_src");
	HX_STACK_LINE(1810)
	::String radio_src = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("radio_src"),true,null());		HX_STACK_VAR(radio_src,"radio_src");
	HX_STACK_LINE(1812)
	Array< ::String > labels = Array_obj< ::String >::__new();		HX_STACK_VAR(labels,"labels");
	HX_STACK_LINE(1813)
	Array< ::String > ids = Array_obj< ::String >::__new();		HX_STACK_VAR(ids,"ids");
	HX_STACK_LINE(1815)
	int W = this->_loadWidth(data,(int)11,HX_CSTRING("radio_width"));		HX_STACK_VAR(W,"W");
	HX_STACK_LINE(1816)
	int H = this->_loadHeight(data,(int)11,HX_CSTRING("radio_height"));		HX_STACK_VAR(H,"H");
	HX_STACK_LINE(1818)
	int scrollH = this->_loadHeight(data,(int)0,HX_CSTRING("height"));		HX_STACK_VAR(scrollH,"scrollH");
	HX_STACK_LINE(1819)
	int scrollW = this->_loadHeight(data,(int)0,HX_CSTRING("width"));		HX_STACK_VAR(scrollW,"scrollW");
	HX_STACK_LINE(1821)
	int labelW = this->_loadWidth(data,(int)100,HX_CSTRING("label_width"));		HX_STACK_VAR(labelW,"labelW");
	HX_STACK_LINE(1823)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("radio"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast radioNode = __it->next();
		{
			HX_STACK_LINE(1824)
			::String id = ::flixel::addons::ui::U_obj::xml_str(radioNode->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(1825)
			::String label = ::flixel::addons::ui::U_obj::xml_str(radioNode->x,HX_CSTRING("label"),null(),null());		HX_STACK_VAR(label,"label");
			HX_STACK_LINE(1827)
			::String context = ::flixel::addons::ui::U_obj::xml_str(radioNode->x,HX_CSTRING("context"),true,HX_CSTRING("ui"));		HX_STACK_VAR(context,"context");
			HX_STACK_LINE(1828)
			::String code = ::flixel::addons::ui::U_obj::xml_str(radioNode->x,HX_CSTRING("code"),true,HX_CSTRING(""));		HX_STACK_VAR(code,"code");
			HX_STACK_LINE(1829)
			::String _g = this->getText(label,context,true,code);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1829)
			label = _g;
			HX_STACK_LINE(1831)
			ids->push(id);
			HX_STACK_LINE(1832)
			labels->push(label);
		}
;
	}
	HX_STACK_LINE(1835)
	ids->reverse();
	HX_STACK_LINE(1836)
	labels->reverse();
	HX_STACK_LINE(1838)
	Float y_space = ::flixel::addons::ui::U_obj::xml_f(data->x,HX_CSTRING("y_space"),(int)25);		HX_STACK_VAR(y_space,"y_space");
	HX_STACK_LINE(1840)
	Dynamic params;		HX_STACK_VAR(params,"params");
	HX_STACK_LINE(1840)
	{
		HX_STACK_LINE(1840)
		Dynamic params1 = null();		HX_STACK_VAR(params1,"params1");
		HX_STACK_LINE(1840)
		if ((data->hasNode->resolve(HX_CSTRING("param")))){
			HX_STACK_LINE(1840)
			Dynamic _g1 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1840)
			params1 = _g1;
			HX_STACK_LINE(1840)
			for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("param"))->iterator());  __it->hasNext(); ){
				::haxe::xml::Fast param = __it->next();
				if (((  ((param->has->resolve(HX_CSTRING("type")))) ? bool(param->has->resolve(HX_CSTRING("value"))) : bool(false) ))){
					HX_STACK_LINE(1840)
					::String type = param->att->resolve(HX_CSTRING("type"));		HX_STACK_VAR(type,"type");
					HX_STACK_LINE(1840)
					::String _g2 = type.toLowerCase();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1840)
					type = _g2;
					HX_STACK_LINE(1840)
					::String valueStr = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(valueStr,"valueStr");
					HX_STACK_LINE(1840)
					Dynamic value = valueStr;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(1840)
					int sort = ::flixel::addons::ui::U_obj::xml_i(param->x,HX_CSTRING("sort"),(int)-1);		HX_STACK_VAR(sort,"sort");
					HX_STACK_LINE(1840)
					::String _switch_17 = (type);
					if (  ( _switch_17==HX_CSTRING("string"))){
						HX_STACK_LINE(1840)
						::String _g3 = ::String(valueStr);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1840)
						value = _g3;
					}
					else if (  ( _switch_17==HX_CSTRING("int"))){
						HX_STACK_LINE(1840)
						Dynamic _g4 = ::Std_obj::parseInt(valueStr);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(1840)
						value = _g4;
					}
					else if (  ( _switch_17==HX_CSTRING("float"))){
						HX_STACK_LINE(1840)
						Float _g5 = ::Std_obj::parseFloat(valueStr);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(1840)
						value = _g5;
					}
					else if (  ( _switch_17==HX_CSTRING("color")) ||  ( _switch_17==HX_CSTRING("hex"))){
						HX_STACK_LINE(1840)
						int _g6;		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(1840)
						{
							HX_STACK_LINE(1840)
							bool safe = false;		HX_STACK_VAR(safe,"safe");
							HX_STACK_LINE(1840)
							int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
							HX_STACK_LINE(1840)
							Dynamic return_val = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(valueStr);		HX_STACK_VAR(return_val,"return_val");
							HX_STACK_LINE(1840)
							if (((return_val == null()))){
								HX_STACK_LINE(1840)
								if ((!(safe))){
									HX_STACK_LINE(1840)
									HX_STACK_DO_THROW((HX_CSTRING("U.parseHex() unable to parse hex String ") + valueStr));
								}
								else{
									HX_STACK_LINE(1840)
									return_val = default_color;
								}
							}
							HX_STACK_LINE(1840)
							_g6 = return_val;
						}
						HX_STACK_LINE(1840)
						value = _g6;
					}
					else if (  ( _switch_17==HX_CSTRING("bool")) ||  ( _switch_17==HX_CSTRING("boolean"))){
						HX_STACK_LINE(1840)
						::String str = ::String(valueStr);		HX_STACK_VAR(str,"str");
						HX_STACK_LINE(1840)
						::String _g7 = str.toLowerCase();		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(1840)
						str = _g7;
						HX_STACK_LINE(1840)
						if (((bool((str == HX_CSTRING("true"))) || bool((str == HX_CSTRING("1")))))){
							HX_STACK_LINE(1840)
							value = true;
						}
						else{
							HX_STACK_LINE(1840)
							value = false;
						}
					}
					struct _Function_4_1{
						inline static Dynamic Block( int &sort,Dynamic &value){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI.hx",1840,0xf354486a)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("sort") , sort,false);
								__result->Add(HX_CSTRING("value") , value,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(1840)
					params1->__Field(HX_CSTRING("push"),true)(_Function_4_1::Block(sort,value));
				}
;
			}
			HX_STACK_LINE(1840)
			params1->__Field(HX_CSTRING("sort"),true)(::flixel::addons::ui::FlxUI_obj::sortParams_dyn());
			HX_STACK_LINE(1840)
			{
				HX_STACK_LINE(1840)
				int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(1840)
				int _g = params1->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1840)
				while((true)){
					HX_STACK_LINE(1840)
					if ((!(((_g11 < _g))))){
						HX_STACK_LINE(1840)
						break;
					}
					HX_STACK_LINE(1840)
					int i = (_g11)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1840)
					hx::IndexRef((params1).mPtr,i) = params1->__GetItem(i)->__Field(HX_CSTRING("value"),true);
				}
			}
		}
		HX_STACK_LINE(1840)
		params = params1;
	}
	HX_STACK_LINE(1842)
	::String radio_asset = null();		HX_STACK_VAR(radio_asset,"radio_asset");
	HX_STACK_LINE(1843)
	if (((radio_src != HX_CSTRING("")))){
		HX_STACK_LINE(1844)
		::String _g8 = ::flixel::addons::ui::U_obj::gfx(radio_src,null(),null(),null(),null(),null());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(1844)
		radio_asset = _g8;
	}
	HX_STACK_LINE(1847)
	Dynamic dot_asset = null();		HX_STACK_VAR(dot_asset,"dot_asset");
	HX_STACK_LINE(1848)
	if (((dot_src != HX_CSTRING("")))){
		HX_STACK_LINE(1849)
		::String _g9 = ::flixel::addons::ui::U_obj::gfx(dot_src,null(),null(),null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(1849)
		dot_asset = _g9;
	}
	HX_STACK_LINE(1855)
	::flixel::math::FlxPoint prevOffset = null();		HX_STACK_VAR(prevOffset,"prevOffset");
	HX_STACK_LINE(1856)
	::flixel::math::FlxPoint nextOffset = null();		HX_STACK_VAR(nextOffset,"nextOffset");
	HX_STACK_LINE(1858)
	if ((data->hasNode->resolve(HX_CSTRING("button")))){
		HX_STACK_LINE(1859)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("button"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast btnNode = __it->next();
			{
				HX_STACK_LINE(1860)
				::String id = ::flixel::addons::ui::U_obj::xml_str(btnNode->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(1861)
				if (((bool((id == HX_CSTRING("previous"))) || bool((id == HX_CSTRING("prev")))))){
					HX_STACK_LINE(1862)
					::flixel::math::FlxPoint _g10;		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(1862)
					{
						HX_STACK_LINE(1862)
						Float X = ::flixel::addons::ui::U_obj::xml_f(btnNode->x,HX_CSTRING("x"),null());		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(1862)
						Float Y = ::flixel::addons::ui::U_obj::xml_f(btnNode->x,HX_CSTRING("y"),null());		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(1862)
						::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(1862)
						point->_inPool = false;
						HX_STACK_LINE(1862)
						_g10 = point;
					}
					HX_STACK_LINE(1862)
					prevOffset = _g10;
				}
				else{
					HX_STACK_LINE(1864)
					if (((id == HX_CSTRING("next")))){
						HX_STACK_LINE(1865)
						::flixel::math::FlxPoint _g11;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(1865)
						{
							HX_STACK_LINE(1865)
							Float X = ::flixel::addons::ui::U_obj::xml_f(btnNode->x,HX_CSTRING("x"),null());		HX_STACK_VAR(X,"X");
							HX_STACK_LINE(1865)
							Float Y = ::flixel::addons::ui::U_obj::xml_f(btnNode->x,HX_CSTRING("y"),null());		HX_STACK_VAR(Y,"Y");
							HX_STACK_LINE(1865)
							::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(1865)
							point->_inPool = false;
							HX_STACK_LINE(1865)
							_g11 = point;
						}
						HX_STACK_LINE(1865)
						nextOffset = _g11;
					}
				}
			}
;
		}
	}
	HX_STACK_LINE(1870)
	::flixel::addons::ui::FlxUIRadioGroup _g12 = ::flixel::addons::ui::FlxUIRadioGroup_obj::__new((int)0,(int)0,ids,labels,null(),y_space,W,H,labelW,null(),prevOffset,nextOffset,null(),null());		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(1870)
	frg = _g12;
	HX_STACK_LINE(1871)
	frg->set_params(params);
	HX_STACK_LINE(1873)
	if (((bool((radio_asset != HX_CSTRING(""))) && bool((radio_asset != null()))))){
		HX_STACK_LINE(1874)
		frg->loadGraphics(radio_asset,dot_asset);
	}
	HX_STACK_LINE(1877)
	int text_x = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("text_x"),null());		HX_STACK_VAR(text_x,"text_x");
	HX_STACK_LINE(1878)
	int text_y = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("text_y"),null());		HX_STACK_VAR(text_y,"text_y");
	HX_STACK_LINE(1880)
	Array< ::Dynamic > radios = frg->getRadios();		HX_STACK_VAR(radios,"radios");
	HX_STACK_LINE(1881)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1882)
	bool styleSet = false;		HX_STACK_VAR(styleSet,"styleSet");
	HX_STACK_LINE(1883)
	{
		HX_STACK_LINE(1883)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1883)
		while((true)){
			HX_STACK_LINE(1883)
			if ((!(((_g < radios->length))))){
				HX_STACK_LINE(1883)
				break;
			}
			HX_STACK_LINE(1883)
			::flixel::addons::ui::FlxUICheckBox fo = radios->__get(_g).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(fo,"fo");
			HX_STACK_LINE(1883)
			++(_g);
			HX_STACK_LINE(1884)
			if (((fo != null()))){
				HX_STACK_LINE(1885)
				if ((::Std_obj::is(fo,hx::ClassOf< ::flixel::addons::ui::FlxUICheckBox >()))){
					HX_STACK_LINE(1886)
					::flixel::addons::ui::FlxUICheckBox fc;		HX_STACK_VAR(fc,"fc");
					HX_STACK_LINE(1886)
					fc = hx::TCast< flixel::addons::ui::FlxUICheckBox >::cast(fo);
					HX_STACK_LINE(1887)
					::flixel::text::FlxText t = this->formatButtonText(data,fc);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1888)
					if (((bool((t != null())) && bool((styleSet == false))))){
						HX_STACK_LINE(1889)
						::flixel::addons::ui::FontDef _g13 = ::flixel::addons::ui::FontDef_obj::copyFromFlxText(t);		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(1889)
						::String _g14;		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(1889)
						_g14 = hx::TCast< String >::cast(t->_defaultFormat->align);
						HX_STACK_LINE(1889)
						::flixel::addons::ui::BorderDef _g15 = ::flixel::addons::ui::BorderDef_obj::__new(t->borderStyle,t->borderColor,t->borderSize,t->borderQuality);		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(1889)
						::flixel::addons::ui::CheckStyle _g16 = ::flixel::addons::ui::CheckStyle_obj::__new((int)16777215,_g13,_g14,t->color,_g15);		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(1889)
						frg->set_activeStyle(_g16);
						HX_STACK_LINE(1890)
						styleSet = true;
					}
					HX_STACK_LINE(1892)
					fc->set_textX(text_x);
					HX_STACK_LINE(1893)
					fc->set_textY(text_y);
					HX_STACK_LINE(1894)
					(i)++;
				}
			}
		}
	}
	HX_STACK_LINE(1899)
	if (((scrollW != (int)0))){
		HX_STACK_LINE(1900)
		frg->fixedSize = true;
		HX_STACK_LINE(1901)
		frg->set_width(scrollW);
	}
	HX_STACK_LINE(1903)
	if (((scrollH != (int)0))){
		HX_STACK_LINE(1904)
		frg->fixedSize = true;
		HX_STACK_LINE(1905)
		frg->set_height(scrollH);
	}
	HX_STACK_LINE(1908)
	return frg;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadRadioGroup,return )

::flixel::addons::ui::FlxUICheckBox FlxUI_obj::_loadCheckBox( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadCheckBox",0xdd35176f,"flixel.addons.ui.FlxUI._loadCheckBox","flixel/addons/ui/FlxUI.hx",1911,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1912)
	::String src = HX_CSTRING("");		HX_STACK_VAR(src,"src");
	HX_STACK_LINE(1913)
	::flixel::addons::ui::FlxUICheckBox fc = null();		HX_STACK_VAR(fc,"fc");
	HX_STACK_LINE(1915)
	::String label = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("label"),null(),null());		HX_STACK_VAR(label,"label");
	HX_STACK_LINE(1916)
	::String context = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("context"),true,HX_CSTRING("ui"));		HX_STACK_VAR(context,"context");
	HX_STACK_LINE(1917)
	::String code = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("code"),true,HX_CSTRING(""));		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(1919)
	bool checked = ::flixel::addons::ui::U_obj::xml_bool(data->x,HX_CSTRING("checked"),false);		HX_STACK_VAR(checked,"checked");
	HX_STACK_LINE(1921)
	::String _g = this->getText(label,context,true,code);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1921)
	label = _g;
	HX_STACK_LINE(1923)
	int labelW = this->_loadWidth(data,(int)100,HX_CSTRING("label_width"));		HX_STACK_VAR(labelW,"labelW");
	HX_STACK_LINE(1925)
	::String check_src = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("check_src"),true,null());		HX_STACK_VAR(check_src,"check_src");
	HX_STACK_LINE(1926)
	::String box_src = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("box_src"),true,null());		HX_STACK_VAR(box_src,"box_src");
	HX_STACK_LINE(1928)
	Dynamic params;		HX_STACK_VAR(params,"params");
	HX_STACK_LINE(1928)
	{
		HX_STACK_LINE(1928)
		Dynamic params1 = null();		HX_STACK_VAR(params1,"params1");
		HX_STACK_LINE(1928)
		if ((data->hasNode->resolve(HX_CSTRING("param")))){
			HX_STACK_LINE(1928)
			Dynamic _g1 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1928)
			params1 = _g1;
			HX_STACK_LINE(1928)
			for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("param"))->iterator());  __it->hasNext(); ){
				::haxe::xml::Fast param = __it->next();
				if (((  ((param->has->resolve(HX_CSTRING("type")))) ? bool(param->has->resolve(HX_CSTRING("value"))) : bool(false) ))){
					HX_STACK_LINE(1928)
					::String type = param->att->resolve(HX_CSTRING("type"));		HX_STACK_VAR(type,"type");
					HX_STACK_LINE(1928)
					::String _g2 = type.toLowerCase();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1928)
					type = _g2;
					HX_STACK_LINE(1928)
					::String valueStr = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(valueStr,"valueStr");
					HX_STACK_LINE(1928)
					Dynamic value = valueStr;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(1928)
					int sort = ::flixel::addons::ui::U_obj::xml_i(param->x,HX_CSTRING("sort"),(int)-1);		HX_STACK_VAR(sort,"sort");
					HX_STACK_LINE(1928)
					::String _switch_18 = (type);
					if (  ( _switch_18==HX_CSTRING("string"))){
						HX_STACK_LINE(1928)
						::String _g3 = ::String(valueStr);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1928)
						value = _g3;
					}
					else if (  ( _switch_18==HX_CSTRING("int"))){
						HX_STACK_LINE(1928)
						Dynamic _g4 = ::Std_obj::parseInt(valueStr);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(1928)
						value = _g4;
					}
					else if (  ( _switch_18==HX_CSTRING("float"))){
						HX_STACK_LINE(1928)
						Float _g5 = ::Std_obj::parseFloat(valueStr);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(1928)
						value = _g5;
					}
					else if (  ( _switch_18==HX_CSTRING("color")) ||  ( _switch_18==HX_CSTRING("hex"))){
						HX_STACK_LINE(1928)
						int _g6;		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(1928)
						{
							HX_STACK_LINE(1928)
							bool safe = false;		HX_STACK_VAR(safe,"safe");
							HX_STACK_LINE(1928)
							int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
							HX_STACK_LINE(1928)
							Dynamic return_val = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(valueStr);		HX_STACK_VAR(return_val,"return_val");
							HX_STACK_LINE(1928)
							if (((return_val == null()))){
								HX_STACK_LINE(1928)
								if ((!(safe))){
									HX_STACK_LINE(1928)
									HX_STACK_DO_THROW((HX_CSTRING("U.parseHex() unable to parse hex String ") + valueStr));
								}
								else{
									HX_STACK_LINE(1928)
									return_val = default_color;
								}
							}
							HX_STACK_LINE(1928)
							_g6 = return_val;
						}
						HX_STACK_LINE(1928)
						value = _g6;
					}
					else if (  ( _switch_18==HX_CSTRING("bool")) ||  ( _switch_18==HX_CSTRING("boolean"))){
						HX_STACK_LINE(1928)
						::String str = ::String(valueStr);		HX_STACK_VAR(str,"str");
						HX_STACK_LINE(1928)
						::String _g7 = str.toLowerCase();		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(1928)
						str = _g7;
						HX_STACK_LINE(1928)
						if (((bool((str == HX_CSTRING("true"))) || bool((str == HX_CSTRING("1")))))){
							HX_STACK_LINE(1928)
							value = true;
						}
						else{
							HX_STACK_LINE(1928)
							value = false;
						}
					}
					struct _Function_4_1{
						inline static Dynamic Block( int &sort,Dynamic &value){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI.hx",1928,0xf354486a)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("sort") , sort,false);
								__result->Add(HX_CSTRING("value") , value,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(1928)
					params1->__Field(HX_CSTRING("push"),true)(_Function_4_1::Block(sort,value));
				}
;
			}
			HX_STACK_LINE(1928)
			params1->__Field(HX_CSTRING("sort"),true)(::flixel::addons::ui::FlxUI_obj::sortParams_dyn());
			HX_STACK_LINE(1928)
			{
				HX_STACK_LINE(1928)
				int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(1928)
				int _g2 = params1->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1928)
				while((true)){
					HX_STACK_LINE(1928)
					if ((!(((_g11 < _g2))))){
						HX_STACK_LINE(1928)
						break;
					}
					HX_STACK_LINE(1928)
					int i = (_g11)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1928)
					hx::IndexRef((params1).mPtr,i) = params1->__GetItem(i)->__Field(HX_CSTRING("value"),true);
				}
			}
		}
		HX_STACK_LINE(1928)
		params = params1;
	}
	HX_STACK_LINE(1930)
	::String box_asset = null();		HX_STACK_VAR(box_asset,"box_asset");
	HX_STACK_LINE(1931)
	::String check_asset = null();		HX_STACK_VAR(check_asset,"check_asset");
	HX_STACK_LINE(1933)
	if (((box_src != HX_CSTRING("")))){
		HX_STACK_LINE(1934)
		::String _g8 = ::flixel::addons::ui::U_obj::gfx(box_src,null(),null(),null(),null(),null());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(1934)
		box_asset = _g8;
	}
	HX_STACK_LINE(1936)
	if (((check_src != HX_CSTRING("")))){
		HX_STACK_LINE(1937)
		::String _g9 = ::flixel::addons::ui::U_obj::gfx(check_src,null(),null(),null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(1937)
		check_asset = _g9;
	}
	HX_STACK_LINE(1940)
	::flixel::addons::ui::FlxUICheckBox _g10 = ::flixel::addons::ui::FlxUICheckBox_obj::__new((int)0,(int)0,box_asset,check_asset,label,labelW,params,null());		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(1940)
	fc = _g10;
	HX_STACK_LINE(1941)
	this->formatButtonText(data,fc);
	HX_STACK_LINE(1943)
	int text_x = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("text_x"),null());		HX_STACK_VAR(text_x,"text_x");
	HX_STACK_LINE(1944)
	int text_y = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("text_y"),null());		HX_STACK_VAR(text_y,"text_y");
	HX_STACK_LINE(1946)
	fc->set_textX(text_x);
	HX_STACK_LINE(1947)
	fc->set_textY(text_y);
	HX_STACK_LINE(1949)
	fc->set_text(label);
	HX_STACK_LINE(1951)
	fc->set_checked(checked);
	HX_STACK_LINE(1953)
	return fc;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadCheckBox,return )

::flixel::addons::ui::FlxUIDropDownMenu FlxUI_obj::_loadDropDownMenu( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadDropDownMenu",0xfcc3a1bc,"flixel.addons.ui.FlxUI._loadDropDownMenu","flixel/addons/ui/FlxUI.hx",1957,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1982)
	::flixel::addons::ui::FlxUIDropDownMenu fud = null();		HX_STACK_VAR(fud,"fud");
	HX_STACK_LINE(1984)
	::String label = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("label"),null(),null());		HX_STACK_VAR(label,"label");
	HX_STACK_LINE(1985)
	::String context = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("context"),true,HX_CSTRING("ui"));		HX_STACK_VAR(context,"context");
	HX_STACK_LINE(1986)
	::String code = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("code"),true,HX_CSTRING(""));		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(1987)
	::String _g = this->getText(label,context,true,code);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1987)
	label = _g;
	HX_STACK_LINE(1989)
	::String back_def = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("back_def"),true,null());		HX_STACK_VAR(back_def,"back_def");
	HX_STACK_LINE(1990)
	::String panel_def = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("panel_def"),true,null());		HX_STACK_VAR(panel_def,"panel_def");
	HX_STACK_LINE(1991)
	::String button_def = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("button_def"),true,null());		HX_STACK_VAR(button_def,"button_def");
	HX_STACK_LINE(1992)
	::String label_def = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("label_def"),true,null());		HX_STACK_VAR(label_def,"label_def");
	HX_STACK_LINE(1994)
	::flixel::FlxSprite back_asset = null();		HX_STACK_VAR(back_asset,"back_asset");
	HX_STACK_LINE(1995)
	::flixel::addons::ui::FlxUI9SliceSprite panel_asset = null();		HX_STACK_VAR(panel_asset,"panel_asset");
	HX_STACK_LINE(1996)
	::flixel::addons::ui::FlxUISpriteButton button_asset = null();		HX_STACK_VAR(button_asset,"button_asset");
	HX_STACK_LINE(1997)
	::flixel::addons::ui::FlxUIText label_asset = null();		HX_STACK_VAR(label_asset,"label_asset");
	HX_STACK_LINE(1999)
	if (((back_def != HX_CSTRING("")))){
		HX_STACK_LINE(2000)
		::haxe::xml::Fast _g1 = this->getDefinition(back_def,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2000)
		::flixel::addons::ui::FlxUISprite _g2 = this->_loadSprite(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(2000)
		back_asset = _g2;
	}
	HX_STACK_LINE(2003)
	if (((panel_def != HX_CSTRING("")))){
		HX_STACK_LINE(2004)
		::haxe::xml::Fast _g3 = this->getDefinition(panel_def,null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(2004)
		::flixel::addons::ui::FlxUI9SliceSprite _g4 = this->_load9SliceSprite(_g3,null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(2004)
		panel_asset = _g4;
	}
	HX_STACK_LINE(2007)
	if (((button_def != HX_CSTRING("")))){
		HX_STACK_LINE(2008)
		try
		{
		HX_STACK_CATCHABLE(::openfl::errors::Error, 0);
		{
			HX_STACK_LINE(2009)
			::haxe::xml::Fast _g5 = this->getDefinition(button_def,null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(2009)
			::flixel::addons::ui::FlxUISpriteButton _g6 = this->_loadButton(_g5,false,false,null());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(2009)
			button_asset = _g6;
		}
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::openfl::errors::Error >() ){
				HX_STACK_BEGIN_CATCH
				::openfl::errors::Error e = __e;{
					HX_STACK_LINE(2012)
					button_asset = null();
				}
			}
			else {
			    HX_STACK_DO_THROW(__e);
			}
		}
	}
	HX_STACK_LINE(2016)
	if (((label_def != HX_CSTRING("")))){
		HX_STACK_LINE(2017)
		try
		{
		HX_STACK_CATCHABLE(::openfl::errors::Error, 0);
		{
			HX_STACK_LINE(2018)
			::haxe::xml::Fast _g7 = this->getDefinition(label_def,null());		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(2018)
			::flixel::addons::ui::FlxUIText _g8 = this->_loadText(_g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(2018)
			label_asset = _g8;
		}
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::openfl::errors::Error >() ){
				HX_STACK_BEGIN_CATCH
				::openfl::errors::Error e = __e;{
					HX_STACK_LINE(2021)
					label_asset = null();
				}
			}
			else {
			    HX_STACK_DO_THROW(__e);
			}
		}
		HX_STACK_LINE(2023)
		if (((bool((label_asset != null())) && bool((label != HX_CSTRING("")))))){
			HX_STACK_LINE(2024)
			label_asset->set_text(label);
		}
	}
	HX_STACK_LINE(2028)
	Array< ::Dynamic > asset_list = null();		HX_STACK_VAR(asset_list,"asset_list");
	HX_STACK_LINE(2029)
	Array< ::Dynamic > data_list = null();		HX_STACK_VAR(data_list,"data_list");
	HX_STACK_LINE(2031)
	if ((data->hasNode->resolve(HX_CSTRING("data")))){
		HX_STACK_LINE(2032)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("data"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast dataNode = __it->next();
			{
				HX_STACK_LINE(2033)
				if (((data_list == null()))){
					HX_STACK_LINE(2034)
					Array< ::Dynamic > _g9 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(2034)
					data_list = _g9;
				}
				HX_STACK_LINE(2036)
				::String _g10 = ::flixel::addons::ui::U_obj::xml_str(dataNode->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(2036)
				::String _g11 = ::flixel::addons::ui::U_obj::xml_str(dataNode->x,HX_CSTRING("label"),null(),null());		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(2036)
				::flixel::addons::ui::StrIdLabel idl = ::flixel::addons::ui::StrIdLabel_obj::__new(_g10,_g11);		HX_STACK_VAR(idl,"idl");
				HX_STACK_LINE(2037)
				data_list->push(idl);
			}
;
		}
	}
	else{
		HX_STACK_LINE(2039)
		if ((data->hasNode->resolve(HX_CSTRING("asset")))){
			HX_STACK_LINE(2040)
			for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("asset"))->iterator());  __it->hasNext(); ){
				::haxe::xml::Fast assetNode = __it->next();
				{
					HX_STACK_LINE(2041)
					if (((asset_list == null()))){
						HX_STACK_LINE(2042)
						Array< ::Dynamic > _g12 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(2042)
						asset_list = _g12;
					}
					HX_STACK_LINE(2044)
					::String def_id = ::flixel::addons::ui::U_obj::xml_str(assetNode->x,HX_CSTRING("def"),true,null());		HX_STACK_VAR(def_id,"def_id");
					HX_STACK_LINE(2045)
					::String id = ::flixel::addons::ui::U_obj::xml_str(assetNode->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(id,"id");
					HX_STACK_LINE(2046)
					::flixel::addons::ui::FlxUIButton asset = null();		HX_STACK_VAR(asset,"asset");
					HX_STACK_LINE(2048)
					try
					{
					HX_STACK_CATCHABLE(::openfl::errors::Error, 0);
					{
						HX_STACK_LINE(2049)
						::haxe::xml::Fast _g13 = this->getDefinition(def_id,null());		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(2049)
						::flixel::addons::ui::FlxUIButton _g14 = this->_loadButton(_g13,false,null(),null());		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(2049)
						asset = _g14;
					}
					}
					catch(Dynamic __e){
						if (__e.IsClass< ::openfl::errors::Error >() ){
							HX_STACK_BEGIN_CATCH
							::openfl::errors::Error e = __e;{
								HX_STACK_LINE(2051)
								Dynamic();
							}
						}
						else {
						    HX_STACK_DO_THROW(__e);
						}
					}
					HX_STACK_LINE(2054)
					if (((asset != null()))){
						HX_STACK_LINE(2055)
						asset->id = id;
						HX_STACK_LINE(2056)
						if (((asset_list == null()))){
							HX_STACK_LINE(2057)
							Array< ::Dynamic > _g15 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g15,"_g15");
							HX_STACK_LINE(2057)
							asset_list = _g15;
						}
						HX_STACK_LINE(2059)
						asset_list->push(asset);
					}
				}
;
			}
		}
	}
	HX_STACK_LINE(2064)
	::flixel::addons::ui::FlxUIDropDownHeader header = ::flixel::addons::ui::FlxUIDropDownHeader_obj::__new((int)120,back_asset,label_asset,button_asset);		HX_STACK_VAR(header,"header");
	HX_STACK_LINE(2065)
	::flixel::addons::ui::FlxUIDropDownMenu _g16 = ::flixel::addons::ui::FlxUIDropDownMenu_obj::__new((int)0,(int)0,data_list,null(),header,panel_asset,asset_list,null());		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(2065)
	fud = _g16;
	HX_STACK_LINE(2067)
	return fud;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadDropDownMenu,return )

bool FlxUI_obj::_loadTest( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadTest",0x9815bf9e,"flixel.addons.ui.FlxUI._loadTest","flixel/addons/ui/FlxUI.hx",2070,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(2071)
	bool result = true;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(2072)
	::String _g = data->get_name();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(2072)
	if (((_g == HX_CSTRING("load_if")))){
		HX_STACK_LINE(2074)
		bool _g1 = this->_loadTestSub(data);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2074)
		result = _g1;
		HX_STACK_LINE(2075)
		if (((result == false))){
			HX_STACK_LINE(2077)
			return false;
		}
	}
	HX_STACK_LINE(2080)
	if ((data->hasNode->resolve(HX_CSTRING("load_if")))){
		HX_STACK_LINE(2082)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("load_if"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast node = __it->next();
			{
				HX_STACK_LINE(2084)
				bool _g2 = this->_loadTestSub(node);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(2084)
				result = _g2;
				HX_STACK_LINE(2085)
				if (((result == false))){
					HX_STACK_LINE(2087)
					return false;
				}
			}
;
		}
	}
	HX_STACK_LINE(2091)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadTest,return )

bool FlxUI_obj::_loadTestSub( ::haxe::xml::Fast node){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadTestSub",0x8b7ab882,"flixel.addons.ui.FlxUI._loadTestSub","flixel/addons/ui/FlxUI.hx",2095,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(node,"node")
	HX_STACK_LINE(2096)
	bool matchValue = ::flixel::addons::ui::U_obj::xml_bool(node->x,HX_CSTRING("is"),true);		HX_STACK_VAR(matchValue,"matchValue");
	HX_STACK_LINE(2097)
	bool match = matchValue;		HX_STACK_VAR(match,"match");
	HX_STACK_LINE(2100)
	Float aspect_ratio = ::flixel::addons::ui::U_obj::xml_f(node->x,HX_CSTRING("aspect_ratio"),(int)-1);		HX_STACK_VAR(aspect_ratio,"aspect_ratio");
	HX_STACK_LINE(2101)
	if (((aspect_ratio != (int)-1))){
		HX_STACK_LINE(2102)
		match = true;
		HX_STACK_LINE(2103)
		Float tolerance = ::flixel::addons::ui::U_obj::xml_f(node->x,HX_CSTRING("tolerance"),0.1);		HX_STACK_VAR(tolerance,"tolerance");
		HX_STACK_LINE(2104)
		Float _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2104)
		_g = hx::TCast< Float >::cast(::flixel::FlxG_obj::width);
		HX_STACK_LINE(2104)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2104)
		_g1 = hx::TCast< Float >::cast(::flixel::FlxG_obj::height);
		HX_STACK_LINE(2104)
		Float screen_ratio = (Float(_g) / Float(_g1));		HX_STACK_VAR(screen_ratio,"screen_ratio");
		HX_STACK_LINE(2105)
		Float diff = ::Math_obj::abs((screen_ratio - aspect_ratio));		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(2106)
		if (((diff > tolerance))){
			HX_STACK_LINE(2107)
			match = false;
		}
		HX_STACK_LINE(2109)
		if (((match != matchValue))){
			HX_STACK_LINE(2110)
			return false;
		}
	}
	HX_STACK_LINE(2115)
	::flixel::math::FlxPoint resolution = ::flixel::addons::ui::U_obj::xml_pt(node->x,HX_CSTRING("resolution"),null());		HX_STACK_VAR(resolution,"resolution");
	HX_STACK_LINE(2116)
	if (((resolution != null()))){
		HX_STACK_LINE(2118)
		match = true;
		HX_STACK_LINE(2119)
		::flixel::math::FlxPoint toleranceRes = ::flixel::addons::ui::U_obj::xml_pt(node->x,HX_CSTRING("tolerance"),null());		HX_STACK_VAR(toleranceRes,"toleranceRes");
		HX_STACK_LINE(2120)
		if (((toleranceRes == null()))){
			HX_STACK_LINE(2120)
			::flixel::math::FlxPoint _g2 = ::flixel::math::FlxPoint_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(2120)
			toleranceRes = _g2;
		}
		HX_STACK_LINE(2121)
		Float diffX = ::Math_obj::abs((resolution->x - ::flixel::FlxG_obj::width));		HX_STACK_VAR(diffX,"diffX");
		HX_STACK_LINE(2122)
		Float diffY = ::Math_obj::abs((resolution->y - ::flixel::FlxG_obj::height));		HX_STACK_VAR(diffY,"diffY");
		HX_STACK_LINE(2123)
		if (((bool((diffX > toleranceRes->x)) || bool((diffY > toleranceRes->y))))){
			HX_STACK_LINE(2125)
			match = false;
		}
		HX_STACK_LINE(2127)
		if (((match != matchValue))){
			HX_STACK_LINE(2128)
			return false;
		}
	}
	HX_STACK_LINE(2133)
	::String haxeDef = ::flixel::addons::ui::U_obj::xml_str(node->x,HX_CSTRING("haxedef"),true,HX_CSTRING(""));		HX_STACK_VAR(haxeDef,"haxeDef");
	HX_STACK_LINE(2134)
	bool haxeVal = ::flixel::addons::ui::U_obj::xml_bool(node->x,HX_CSTRING("value"),true);		HX_STACK_VAR(haxeVal,"haxeVal");
	HX_STACK_LINE(2136)
	if (((haxeDef != HX_CSTRING("")))){
		HX_STACK_LINE(2137)
		match = true;
		HX_STACK_LINE(2138)
		bool defValue = false;		HX_STACK_VAR(defValue,"defValue");
		HX_STACK_LINE(2139)
		::String _switch_19 = (haxeDef);
		if (  ( _switch_19==HX_CSTRING("3ds"))){
		}
		else if (  ( _switch_19==HX_CSTRING("wiiu"))){
		}
		else if (  ( _switch_19==HX_CSTRING("vita"))){
		}
		else if (  ( _switch_19==HX_CSTRING("ps3"))){
		}
		else if (  ( _switch_19==HX_CSTRING("ps4"))){
		}
		HX_STACK_LINE(2161)
		match = (defValue == haxeVal);
		HX_STACK_LINE(2162)
		if (((match != matchValue))){
			HX_STACK_LINE(2163)
			return false;
		}
	}
	HX_STACK_LINE(2168)
	::String variable = ::flixel::addons::ui::U_obj::xml_str(node->x,HX_CSTRING("variable"),false,HX_CSTRING(""));		HX_STACK_VAR(variable,"variable");
	HX_STACK_LINE(2169)
	::String variableType = ::flixel::addons::ui::U_obj::xml_str(node->x,HX_CSTRING("type"),true,HX_CSTRING("string"));		HX_STACK_VAR(variableType,"variableType");
	HX_STACK_LINE(2170)
	if (((variable != HX_CSTRING("")))){
		HX_STACK_LINE(2172)
		match = true;
		HX_STACK_LINE(2173)
		Dynamic varData = this->parseVarValue(variable);		HX_STACK_VAR(varData,"varData");
		HX_STACK_LINE(2174)
		if (((varData != null()))){
			HX_STACK_LINE(2176)
			bool _g3 = this->checkVariable(varData->__Field(HX_CSTRING("variable"),true),varData->__Field(HX_CSTRING("value"),true),variableType,varData->__Field(HX_CSTRING("operator"),true),null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(2176)
			match = _g3;
		}
		HX_STACK_LINE(2178)
		if (((match != matchValue))){
			HX_STACK_LINE(2179)
			return false;
		}
	}
	HX_STACK_LINE(2182)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadTestSub,return )

Dynamic FlxUI_obj::parseVarValue( ::String varString){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","parseVarValue",0x5226f084,"flixel.addons.ui.FlxUI.parseVarValue","flixel/addons/ui/FlxUI.hx",2185,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(varString,"varString")
	HX_STACK_LINE(2186)
	Array< ::String > arr = Array_obj< ::String >::__new().Add(HX_CSTRING("==")).Add(HX_CSTRING("=")).Add(HX_CSTRING("!=")).Add(HX_CSTRING("!==")).Add(HX_CSTRING("<")).Add(HX_CSTRING(">")).Add(HX_CSTRING("<=")).Add(HX_CSTRING(">="));		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(2187)
	Array< ::String > temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(2188)
	{
		HX_STACK_LINE(2188)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2188)
		while((true)){
			HX_STACK_LINE(2188)
			if ((!(((_g < arr->length))))){
				HX_STACK_LINE(2188)
				break;
			}
			HX_STACK_LINE(2188)
			::String op = arr->__get(_g);		HX_STACK_VAR(op,"op");
			HX_STACK_LINE(2188)
			++(_g);
			HX_STACK_LINE(2190)
			int _g1 = varString.indexOf(op,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(2190)
			if (((_g1 != (int)-1))){
				HX_STACK_LINE(2192)
				Array< ::String > _g11 = varString.split(op);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(2192)
				temp = _g11;
				HX_STACK_LINE(2193)
				if (((bool((temp != null())) && bool((temp->length == (int)2))))){
					struct _Function_5_1{
						inline static Dynamic Block( Array< ::String > &temp,::String &op){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI.hx",2195,0xf354486a)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("variable") , temp->__get((int)0),false);
								__result->Add(HX_CSTRING("value") , temp->__get((int)1),false);
								__result->Add(HX_CSTRING("operator") , op,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(2195)
					return _Function_5_1::Block(temp,op);
				}
			}
		}
	}
	HX_STACK_LINE(2199)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,parseVarValue,return )

::flixel::addons::ui::FlxUI FlxUI_obj::_loadLayout( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadLayout",0x9c3a10f6,"flixel.addons.ui.FlxUI._loadLayout","flixel/addons/ui/FlxUI.hx",2203,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(2204)
	::String id = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(2205)
	Float X;		HX_STACK_VAR(X,"X");
	HX_STACK_LINE(2205)
	{
		HX_STACK_LINE(2205)
		Float default_ = (int)0;		HX_STACK_VAR(default_,"default_");
		HX_STACK_LINE(2205)
		X = this->_loadWidth(data,default_,HX_CSTRING("x"));
	}
	HX_STACK_LINE(2206)
	Float Y;		HX_STACK_VAR(Y,"Y");
	HX_STACK_LINE(2206)
	{
		HX_STACK_LINE(2206)
		Float default_ = (int)0;		HX_STACK_VAR(default_,"default_");
		HX_STACK_LINE(2206)
		Y = this->_loadHeight(data,default_,HX_CSTRING("y"));
	}
	HX_STACK_LINE(2207)
	::flixel::addons::ui::FlxUI _ui = this->createUI(data);		HX_STACK_VAR(_ui,"_ui");
	HX_STACK_LINE(2208)
	_ui->set_x(X);
	HX_STACK_LINE(2209)
	_ui->set_y(Y);
	HX_STACK_LINE(2210)
	_ui->id = id;
	HX_STACK_LINE(2211)
	return _ui;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadLayout,return )

::flixel::addons::ui::FlxUI FlxUI_obj::createUI( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","createUI",0x2c9d0b89,"flixel.addons.ui.FlxUI.createUI","flixel/addons/ui/FlxUI.hx",2216,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(2216)
	return ::flixel::addons::ui::FlxUI_obj::__new(data,hx::ObjectPtr<OBJ_>(this),hx::ObjectPtr<OBJ_>(this),this->_ptr_tongue,this->liveFilePath);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,createUI,return )

::flixel::addons::ui::FlxUITabMenu FlxUI_obj::_loadTabMenu( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadTabMenu",0x0e83bac8,"flixel.addons.ui.FlxUI._loadTabMenu","flixel/addons/ui/FlxUI.hx",2219,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(2221)
	::String back_def_str = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("back_def"),null(),null());		HX_STACK_VAR(back_def_str,"back_def_str");
	HX_STACK_LINE(2222)
	::haxe::xml::Fast back_def = this->getDefinition(back_def_str,null());		HX_STACK_VAR(back_def,"back_def");
	HX_STACK_LINE(2223)
	if (((back_def == null()))){
		HX_STACK_LINE(2224)
		back_def = data;
	}
	HX_STACK_LINE(2227)
	::haxe::xml::Fast _g = ::flixel::addons::ui::FlxUI_obj::consolidateData(back_def,data);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(2227)
	back_def = _g;
	HX_STACK_LINE(2228)
	::flixel::addons::ui::FlxUI9SliceSprite back = this->_load9SliceSprite(back_def,HX_CSTRING("tab_menu"));		HX_STACK_VAR(back,"back");
	HX_STACK_LINE(2230)
	::haxe::xml::Fast tab_def = null();		HX_STACK_VAR(tab_def,"tab_def");
	HX_STACK_LINE(2232)
	bool stretch_tabs = ::flixel::addons::ui::U_obj::xml_bool(data->x,HX_CSTRING("stretch_tabs"),false);		HX_STACK_VAR(stretch_tabs,"stretch_tabs");
	HX_STACK_LINE(2234)
	::String stackToggled = HX_CSTRING("front");		HX_STACK_VAR(stackToggled,"stackToggled");
	HX_STACK_LINE(2235)
	::String stackUntoggled = HX_CSTRING("back");		HX_STACK_VAR(stackUntoggled,"stackUntoggled");
	HX_STACK_LINE(2237)
	if ((data->hasNode->resolve(HX_CSTRING("stacking")))){
		HX_STACK_LINE(2238)
		::String _g1 = ::flixel::addons::ui::U_obj::xml_str(data->node->resolve(HX_CSTRING("stacking"))->x,HX_CSTRING("toggled"),true,HX_CSTRING("front"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2238)
		stackToggled = _g1;
		HX_STACK_LINE(2239)
		::String _g2 = ::flixel::addons::ui::U_obj::xml_str(data->node->resolve(HX_CSTRING("stacking"))->x,HX_CSTRING("untoggled"),true,HX_CSTRING("back"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(2239)
		stackUntoggled = _g2;
	}
	HX_STACK_LINE(2242)
	::String tab_spacing_str = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("spacing"),true,HX_CSTRING(""));		HX_STACK_VAR(tab_spacing_str,"tab_spacing_str");
	HX_STACK_LINE(2243)
	Dynamic tab_spacing = null();		HX_STACK_VAR(tab_spacing,"tab_spacing");
	HX_STACK_LINE(2244)
	if (((tab_spacing_str != HX_CSTRING("")))){
		HX_STACK_LINE(2245)
		Float _g3 = ::Std_obj::parseFloat(tab_spacing_str);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(2245)
		tab_spacing = _g3;
	}
	HX_STACK_LINE(2249)
	Float tab_x = ::flixel::addons::ui::U_obj::xml_f(data->x,HX_CSTRING("tab_x"),(int)0);		HX_STACK_VAR(tab_x,"tab_x");
	HX_STACK_LINE(2250)
	Float tab_y = ::flixel::addons::ui::U_obj::xml_f(data->x,HX_CSTRING("tab_y"),(int)0);		HX_STACK_VAR(tab_y,"tab_y");
	HX_STACK_LINE(2251)
	::flixel::math::FlxPoint tab_offset;		HX_STACK_VAR(tab_offset,"tab_offset");
	HX_STACK_LINE(2251)
	{
		HX_STACK_LINE(2251)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(tab_x,tab_y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(2251)
		point->_inPool = false;
		HX_STACK_LINE(2251)
		tab_offset = point;
	}
	HX_STACK_LINE(2253)
	::String tab_def_str = HX_CSTRING("");		HX_STACK_VAR(tab_def_str,"tab_def_str");
	HX_STACK_LINE(2255)
	if ((data->hasNode->resolve(HX_CSTRING("tab")))){
		HX_STACK_LINE(2256)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("tab"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast tabNode = __it->next();
			{
				HX_STACK_LINE(2257)
				::String temp = ::flixel::addons::ui::U_obj::xml_str(tabNode->x,HX_CSTRING("use_def"),null(),null());		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(2258)
				if (((temp != HX_CSTRING("")))){
					HX_STACK_LINE(2259)
					tab_def_str = temp;
				}
			}
;
		}
		HX_STACK_LINE(2262)
		if (((tab_def_str != HX_CSTRING("")))){
			HX_STACK_LINE(2263)
			::haxe::xml::Fast _g4 = this->getDefinition(tab_def_str,null());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(2263)
			tab_def = _g4;
		}
		else{
			HX_STACK_LINE(2265)
			::haxe::xml::Fast _g5 = data->node->resolve(HX_CSTRING("tab"));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(2265)
			tab_def = _g5;
		}
	}
	HX_STACK_LINE(2269)
	Array< ::flixel::addons::ui::interfaces::IFlxUIButton > list_tabs = Array_obj< ::flixel::addons::ui::interfaces::IFlxUIButton >::__new();		HX_STACK_VAR(list_tabs,"list_tabs");
	HX_STACK_LINE(2271)
	::String id = HX_CSTRING("");		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(2273)
	if ((data->hasNode->resolve(HX_CSTRING("tab")))){
		HX_STACK_LINE(2274)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("tab"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast tab_node = __it->next();
			{
				HX_STACK_LINE(2275)
				::String _g6 = ::flixel::addons::ui::U_obj::xml_str(tab_node->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(2275)
				id = _g6;
				HX_STACK_LINE(2277)
				if (((id != HX_CSTRING("")))){
					HX_STACK_LINE(2278)
					::String label = ::flixel::addons::ui::U_obj::xml_str(tab_node->x,HX_CSTRING("label"),null(),null());		HX_STACK_VAR(label,"label");
					HX_STACK_LINE(2279)
					::String context = ::flixel::addons::ui::U_obj::xml_str(tab_node->x,HX_CSTRING("context"),true,HX_CSTRING("ui"));		HX_STACK_VAR(context,"context");
					HX_STACK_LINE(2280)
					::String code = ::flixel::addons::ui::U_obj::xml_str(tab_node->x,HX_CSTRING("code"),true,HX_CSTRING(""));		HX_STACK_VAR(code,"code");
					HX_STACK_LINE(2281)
					::String _g7 = this->getText(label,context,true,code);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(2281)
					label = _g7;
					HX_STACK_LINE(2283)
					::String _g8 = this->getText(label,context,true,code);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(2283)
					label = _g8;
					HX_STACK_LINE(2285)
					::haxe::xml::Fast tab_info = ::flixel::addons::ui::FlxUI_obj::consolidateData(tab_node,tab_def);		HX_STACK_VAR(tab_info,"tab_info");
					HX_STACK_LINE(2286)
					::flixel::addons::ui::interfaces::IFlxUIButton tab = this->_loadButton(tab_info,true,true,HX_CSTRING("tab_menu"));		HX_STACK_VAR(tab,"tab");
					HX_STACK_LINE(2287)
					tab->__FieldRef(HX_CSTRING("id")) = id;
					HX_STACK_LINE(2288)
					list_tabs->push(tab);
				}
			}
;
		}
	}
	HX_STACK_LINE(2293)
	if (((list_tabs->length > (int)0))){
		HX_STACK_LINE(2294)
		if (((  ((!(((tab_def == null()))))) ? bool(!(tab_def->hasNode->resolve(HX_CSTRING("text")))) : bool(true) ))){
			HX_STACK_LINE(2295)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(2295)
			while((true)){
				HX_STACK_LINE(2295)
				if ((!(((_g1 < list_tabs->length))))){
					HX_STACK_LINE(2295)
					break;
				}
				HX_STACK_LINE(2295)
				::flixel::addons::ui::interfaces::IFlxUIButton t = list_tabs->__get(_g1);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2295)
				++(_g1);
				HX_STACK_LINE(2296)
				if ((::Std_obj::is(t,hx::ClassOf< ::flixel::addons::ui::FlxUITypedButton >()))){
					HX_STACK_LINE(2298)
					::flixel::addons::ui::FlxUITypedButton tb = t;		HX_STACK_VAR(tb,"tb");
					HX_STACK_LINE(2299)
					tb->label->__Field(HX_CSTRING("set_color"),true)((int)16777215);
					HX_STACK_LINE(2300)
					if ((::Std_obj::is(tb->label,hx::ClassOf< ::flixel::addons::ui::FlxUIText >()))){
						HX_STACK_LINE(2302)
						::flixel::addons::ui::FlxUIText labelText = tb->label;		HX_STACK_VAR(labelText,"labelText");
						HX_STACK_LINE(2303)
						{
							HX_STACK_LINE(2303)
							int Color = (int)0;		HX_STACK_VAR(Color,"Color");
							HX_STACK_LINE(2303)
							Float Size = (int)1;		HX_STACK_VAR(Size,"Size");
							HX_STACK_LINE(2303)
							Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
							HX_STACK_LINE(2303)
							labelText->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE);
							HX_STACK_LINE(2303)
							labelText->set_borderColor(Color);
							HX_STACK_LINE(2303)
							labelText->set_borderSize(Size);
							HX_STACK_LINE(2303)
							labelText->set_borderQuality(Quality);
						}
					}
				}
			}
		}
		HX_STACK_LINE(2309)
		if (((  ((!(((tab_def == null()))))) ? bool(!(tab_def->has->resolve(HX_CSTRING("width")))) : bool(true) ))){
			HX_STACK_LINE(2310)
			stretch_tabs = true;
		}
	}
	HX_STACK_LINE(2315)
	Array< ::String > tab_stacking = Array_obj< ::String >::__new().Add(stackToggled).Add(stackUntoggled);		HX_STACK_VAR(tab_stacking,"tab_stacking");
	HX_STACK_LINE(2317)
	::flixel::addons::ui::FlxUITabMenu fg = ::flixel::addons::ui::FlxUITabMenu_obj::__new(back,list_tabs,null(),tab_offset,stretch_tabs,tab_spacing,tab_stacking);		HX_STACK_VAR(fg,"fg");
	HX_STACK_LINE(2319)
	if ((data->hasNode->resolve(HX_CSTRING("group")))){
		HX_STACK_LINE(2320)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("group"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast group_node = __it->next();
			{
				HX_STACK_LINE(2321)
				::String _g9 = ::flixel::addons::ui::U_obj::xml_str(group_node->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(2321)
				id = _g9;
				HX_STACK_LINE(2322)
				::flixel::addons::ui::FlxUI _ui = ::flixel::addons::ui::FlxUI_obj::__new(group_node,fg,hx::ObjectPtr<OBJ_>(this),this->_ptr_tongue,null());		HX_STACK_VAR(_ui,"_ui");
				HX_STACK_LINE(2323)
				if (((bool((list_tabs != null())) && bool((list_tabs->length > (int)0))))){
					HX_STACK_LINE(2324)
					::flixel::addons::ui::FlxUI _g1 = _ui;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(2324)
					Float _g10 = list_tabs->__get((int)0)->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(2324)
					Float _g11 = (_g1->y + _g10);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(2324)
					_g1->set_y(_g11);
				}
				HX_STACK_LINE(2326)
				_ui->id = id;
				HX_STACK_LINE(2327)
				fg->addGroup(_ui);
			}
;
		}
	}
	HX_STACK_LINE(2333)
	return fg;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadTabMenu,return )

::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::_loadNumericStepper( ::haxe::xml::Fast data,hx::Null< bool >  __o_setCallback){
bool setCallback = __o_setCallback.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadNumericStepper",0x27747c10,"flixel.addons.ui.FlxUI._loadNumericStepper","flixel/addons/ui/FlxUI.hx",2336,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(setCallback,"setCallback")
{
		HX_STACK_LINE(2348)
		Float stepSize = ::flixel::addons::ui::U_obj::xml_f(data->x,HX_CSTRING("step"),(int)1);		HX_STACK_VAR(stepSize,"stepSize");
		HX_STACK_LINE(2349)
		Float defaultValue = ::flixel::addons::ui::U_obj::xml_f(data->x,HX_CSTRING("value"),(int)0);		HX_STACK_VAR(defaultValue,"defaultValue");
		HX_STACK_LINE(2350)
		Float min = ::flixel::addons::ui::U_obj::xml_f(data->x,HX_CSTRING("min"),(int)0);		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(2351)
		Float max = ::flixel::addons::ui::U_obj::xml_f(data->x,HX_CSTRING("max"),(int)10);		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(2352)
		int decimals = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("decimals"),(int)0);		HX_STACK_VAR(decimals,"decimals");
		HX_STACK_LINE(2353)
		bool percent = ::flixel::addons::ui::U_obj::xml_bool(data->x,HX_CSTRING("percent"),null());		HX_STACK_VAR(percent,"percent");
		HX_STACK_LINE(2354)
		::String stack = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("stack"),true,HX_CSTRING(""));		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(2355)
		if (((stack == HX_CSTRING("")))){
			HX_STACK_LINE(2356)
			::String _g = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("stacking"),true,HX_CSTRING(""));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2356)
			stack = _g;
		}
		HX_STACK_LINE(2358)
		::String _g1 = stack.toLowerCase();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2358)
		stack = _g1;
		HX_STACK_LINE(2359)
		int stacking;		HX_STACK_VAR(stacking,"stacking");
		HX_STACK_LINE(2361)
		::String _switch_20 = (stack);
		if (  ( _switch_20==HX_CSTRING("horizontal")) ||  ( _switch_20==HX_CSTRING("h")) ||  ( _switch_20==HX_CSTRING("horz"))){
			HX_STACK_LINE(2363)
			stacking = (int)1;
		}
		else if (  ( _switch_20==HX_CSTRING("vertical")) ||  ( _switch_20==HX_CSTRING("v")) ||  ( _switch_20==HX_CSTRING("vert"))){
			HX_STACK_LINE(2365)
			stacking = (int)0;
		}
		else  {
			HX_STACK_LINE(2367)
			stacking = (int)1;
		}
;
;
		HX_STACK_LINE(2370)
		::flixel::text::FlxText theText = null();		HX_STACK_VAR(theText,"theText");
		HX_STACK_LINE(2371)
		::flixel::addons::ui::FlxUITypedButton buttPlus = null();		HX_STACK_VAR(buttPlus,"buttPlus");
		HX_STACK_LINE(2372)
		::flixel::addons::ui::FlxUITypedButton buttMinus = null();		HX_STACK_VAR(buttMinus,"buttMinus");
		HX_STACK_LINE(2373)
		::flixel::addons::ui::FlxUISprite bkg = null();		HX_STACK_VAR(bkg,"bkg");
		HX_STACK_LINE(2375)
		if ((data->hasNode->resolve(HX_CSTRING("text")))){
			HX_STACK_LINE(2376)
			::haxe::xml::Fast _g2 = data->node->resolve(HX_CSTRING("text"));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(2376)
			::flixel::text::FlxText _g3 = this->_loadThing(HX_CSTRING("text"),_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(2376)
			theText = _g3;
		}
		HX_STACK_LINE(2378)
		if ((data->hasNode->resolve(HX_CSTRING("plus")))){
			HX_STACK_LINE(2379)
			::haxe::xml::Fast _g4 = data->node->resolve(HX_CSTRING("plus"));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(2379)
			::flixel::addons::ui::FlxUITypedButton _g5 = this->_loadThing(HX_CSTRING("button"),_g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(2379)
			buttPlus = _g5;
		}
		HX_STACK_LINE(2381)
		if ((data->hasNode->resolve(HX_CSTRING("minus")))){
			HX_STACK_LINE(2382)
			::haxe::xml::Fast _g6 = data->node->resolve(HX_CSTRING("minus"));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(2382)
			::flixel::addons::ui::FlxUITypedButton _g7 = this->_loadThing(HX_CSTRING("button"),_g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(2382)
			buttMinus = _g7;
		}
		HX_STACK_LINE(2385)
		::flixel::addons::ui::FlxUINumericStepper ns = ::flixel::addons::ui::FlxUINumericStepper_obj::__new((int)0,(int)0,stepSize,defaultValue,min,max,decimals,stacking,theText,buttPlus,buttMinus,percent);		HX_STACK_VAR(ns,"ns");
		HX_STACK_LINE(2387)
		if ((setCallback)){
			HX_STACK_LINE(2388)
			Dynamic params;		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(2388)
			{
				HX_STACK_LINE(2388)
				Dynamic params1 = null();		HX_STACK_VAR(params1,"params1");
				HX_STACK_LINE(2388)
				if ((data->hasNode->resolve(HX_CSTRING("param")))){
					HX_STACK_LINE(2388)
					Dynamic _g8 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(2388)
					params1 = _g8;
					HX_STACK_LINE(2388)
					for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("param"))->iterator());  __it->hasNext(); ){
						::haxe::xml::Fast param = __it->next();
						if (((  ((param->has->resolve(HX_CSTRING("type")))) ? bool(param->has->resolve(HX_CSTRING("value"))) : bool(false) ))){
							HX_STACK_LINE(2388)
							::String type = param->att->resolve(HX_CSTRING("type"));		HX_STACK_VAR(type,"type");
							HX_STACK_LINE(2388)
							::String _g9 = type.toLowerCase();		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(2388)
							type = _g9;
							HX_STACK_LINE(2388)
							::String valueStr = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(valueStr,"valueStr");
							HX_STACK_LINE(2388)
							Dynamic value = valueStr;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(2388)
							int sort = ::flixel::addons::ui::U_obj::xml_i(param->x,HX_CSTRING("sort"),(int)-1);		HX_STACK_VAR(sort,"sort");
							HX_STACK_LINE(2388)
							::String _switch_21 = (type);
							if (  ( _switch_21==HX_CSTRING("string"))){
								HX_STACK_LINE(2388)
								::String _g10 = ::String(valueStr);		HX_STACK_VAR(_g10,"_g10");
								HX_STACK_LINE(2388)
								value = _g10;
							}
							else if (  ( _switch_21==HX_CSTRING("int"))){
								HX_STACK_LINE(2388)
								Dynamic _g11 = ::Std_obj::parseInt(valueStr);		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(2388)
								value = _g11;
							}
							else if (  ( _switch_21==HX_CSTRING("float"))){
								HX_STACK_LINE(2388)
								Float _g12 = ::Std_obj::parseFloat(valueStr);		HX_STACK_VAR(_g12,"_g12");
								HX_STACK_LINE(2388)
								value = _g12;
							}
							else if (  ( _switch_21==HX_CSTRING("color")) ||  ( _switch_21==HX_CSTRING("hex"))){
								HX_STACK_LINE(2388)
								int _g13;		HX_STACK_VAR(_g13,"_g13");
								HX_STACK_LINE(2388)
								{
									HX_STACK_LINE(2388)
									bool safe = false;		HX_STACK_VAR(safe,"safe");
									HX_STACK_LINE(2388)
									int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
									HX_STACK_LINE(2388)
									Dynamic return_val = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(valueStr);		HX_STACK_VAR(return_val,"return_val");
									HX_STACK_LINE(2388)
									if (((return_val == null()))){
										HX_STACK_LINE(2388)
										if ((!(safe))){
											HX_STACK_LINE(2388)
											HX_STACK_DO_THROW((HX_CSTRING("U.parseHex() unable to parse hex String ") + valueStr));
										}
										else{
											HX_STACK_LINE(2388)
											return_val = default_color;
										}
									}
									HX_STACK_LINE(2388)
									_g13 = return_val;
								}
								HX_STACK_LINE(2388)
								value = _g13;
							}
							else if (  ( _switch_21==HX_CSTRING("bool")) ||  ( _switch_21==HX_CSTRING("boolean"))){
								HX_STACK_LINE(2388)
								::String str = ::String(valueStr);		HX_STACK_VAR(str,"str");
								HX_STACK_LINE(2388)
								::String _g14 = str.toLowerCase();		HX_STACK_VAR(_g14,"_g14");
								HX_STACK_LINE(2388)
								str = _g14;
								HX_STACK_LINE(2388)
								if (((bool((str == HX_CSTRING("true"))) || bool((str == HX_CSTRING("1")))))){
									HX_STACK_LINE(2388)
									value = true;
								}
								else{
									HX_STACK_LINE(2388)
									value = false;
								}
							}
							struct _Function_5_1{
								inline static Dynamic Block( int &sort,Dynamic &value){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI.hx",2388,0xf354486a)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_CSTRING("sort") , sort,false);
										__result->Add(HX_CSTRING("value") , value,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(2388)
							params1->__Field(HX_CSTRING("push"),true)(_Function_5_1::Block(sort,value));
						}
;
					}
					HX_STACK_LINE(2388)
					params1->__Field(HX_CSTRING("sort"),true)(::flixel::addons::ui::FlxUI_obj::sortParams_dyn());
					HX_STACK_LINE(2388)
					{
						HX_STACK_LINE(2388)
						int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(2388)
						int _g = params1->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2388)
						while((true)){
							HX_STACK_LINE(2388)
							if ((!(((_g11 < _g))))){
								HX_STACK_LINE(2388)
								break;
							}
							HX_STACK_LINE(2388)
							int i = (_g11)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(2388)
							hx::IndexRef((params1).mPtr,i) = params1->__GetItem(i)->__Field(HX_CSTRING("value"),true);
						}
					}
				}
				HX_STACK_LINE(2388)
				params = params1;
			}
			HX_STACK_LINE(2389)
			ns->set_params(params);
		}
		HX_STACK_LINE(2392)
		return ns;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_loadNumericStepper,return )

::flixel::math::FlxPoint FlxUI_obj::getResizeRatio( ::haxe::xml::Fast data,hx::Null< int >  __o_defaultAxis){
int defaultAxis = __o_defaultAxis.Default(1);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getResizeRatio",0x06525d7a,"flixel.addons.ui.FlxUI.getResizeRatio","flixel/addons/ui/FlxUI.hx",2396,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(defaultAxis,"defaultAxis")
{
		HX_STACK_LINE(2397)
		::String str = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("resize_ratio_x"),true,null());		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(2398)
		if (((str == HX_CSTRING("")))){
			HX_STACK_LINE(2400)
			::String _g = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("resize_ratio_y"),true,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2400)
			str = _g;
			HX_STACK_LINE(2401)
			if (((str == HX_CSTRING("")))){
				HX_STACK_LINE(2404)
				Float resize_ratio = ::flixel::addons::ui::U_obj::xml_f(data->x,HX_CSTRING("resize_ratio"),(int)-1);		HX_STACK_VAR(resize_ratio,"resize_ratio");
				HX_STACK_LINE(2405)
				return ::flixel::math::FlxPoint_obj::__new(resize_ratio,defaultAxis);
			}
			else{
				HX_STACK_LINE(2410)
				Float _g1 = ::Std_obj::parseFloat(str);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(2410)
				return ::flixel::math::FlxPoint_obj::__new(_g1,(int)1);
			}
		}
		else{
			HX_STACK_LINE(2416)
			Float _g2 = ::Std_obj::parseFloat(str);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(2416)
			return ::flixel::math::FlxPoint_obj::__new(_g2,(int)0);
		}
		HX_STACK_LINE(2420)
		return ::flixel::math::FlxPoint_obj::__new((int)-1,(int)-1);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,getResizeRatio,return )

::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::_loadButton( ::haxe::xml::Fast data,hx::Null< bool >  __o_setCallback,hx::Null< bool >  __o_isToggle,::String __o_load_code){
bool setCallback = __o_setCallback.Default(true);
bool isToggle = __o_isToggle.Default(false);
::String load_code = __o_load_code.Default(HX_CSTRING(""));
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadButton",0x1d61c43e,"flixel.addons.ui.FlxUI._loadButton","flixel/addons/ui/FlxUI.hx",2424,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(setCallback,"setCallback")
	HX_STACK_ARG(isToggle,"isToggle")
	HX_STACK_ARG(load_code,"load_code")
{
		HX_STACK_LINE(2425)
		::String src = HX_CSTRING("");		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(2426)
		::flixel::addons::ui::interfaces::IFlxUIButton fb = null();		HX_STACK_VAR(fb,"fb");
		HX_STACK_LINE(2428)
		Float resize_ratio = ::flixel::addons::ui::U_obj::xml_f(data->x,HX_CSTRING("resize_ratio"),(int)-1);		HX_STACK_VAR(resize_ratio,"resize_ratio");
		HX_STACK_LINE(2429)
		::flixel::math::FlxPoint resize_point = this->_loadCompass(data,HX_CSTRING("resize_point"));		HX_STACK_VAR(resize_point,"resize_point");
		HX_STACK_LINE(2430)
		bool resize_label = ::flixel::addons::ui::U_obj::xml_bool(data->x,HX_CSTRING("resize_label"),false);		HX_STACK_VAR(resize_label,"resize_label");
		HX_STACK_LINE(2432)
		::String label = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("label"),null(),null());		HX_STACK_VAR(label,"label");
		HX_STACK_LINE(2434)
		::flixel::addons::ui::FlxUISprite sprite = null();		HX_STACK_VAR(sprite,"sprite");
		HX_STACK_LINE(2435)
		::flixel::addons::ui::FlxUISprite toggleSprite = null();		HX_STACK_VAR(toggleSprite,"toggleSprite");
		HX_STACK_LINE(2436)
		if ((data->hasNode->resolve(HX_CSTRING("sprite")))){
			HX_STACK_LINE(2438)
			for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("sprite"))->iterator());  __it->hasNext(); ){
				::haxe::xml::Fast spriteNode = __it->next();
				{
					HX_STACK_LINE(2440)
					bool forToggle;		HX_STACK_VAR(forToggle,"forToggle");
					HX_STACK_LINE(2440)
					if ((isToggle)){
						HX_STACK_LINE(2440)
						forToggle = ::flixel::addons::ui::U_obj::xml_bool(spriteNode->x,HX_CSTRING("toggle"),null());
					}
					else{
						HX_STACK_LINE(2440)
						forToggle = false;
					}
					HX_STACK_LINE(2441)
					if ((forToggle)){
						HX_STACK_LINE(2443)
						::flixel::addons::ui::FlxUISprite _g = this->_loadThing(HX_CSTRING("sprite"),spriteNode);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2443)
						toggleSprite = _g;
					}
					else{
						HX_STACK_LINE(2447)
						::flixel::addons::ui::FlxUISprite _g1 = this->_loadThing(HX_CSTRING("sprite"),spriteNode);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(2447)
						sprite = _g1;
					}
				}
;
			}
		}
		HX_STACK_LINE(2452)
		::String context = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("context"),true,HX_CSTRING("ui"));		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(2453)
		::String code = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("code"),true,HX_CSTRING(""));		HX_STACK_VAR(code,"code");
		HX_STACK_LINE(2455)
		::String _g2 = this->getText(label,context,true,code);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(2455)
		label = _g2;
		HX_STACK_LINE(2457)
		Float _g3 = this->_loadWidth(data,(int)0,HX_CSTRING("width"));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(2457)
		int W = ::Std_obj::_int(_g3);		HX_STACK_VAR(W,"W");
		HX_STACK_LINE(2458)
		Float _g4 = this->_loadHeight(data,(int)0,HX_CSTRING("height"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(2458)
		int H = ::Std_obj::_int(_g4);		HX_STACK_VAR(H,"H");
		HX_STACK_LINE(2460)
		Dynamic params;		HX_STACK_VAR(params,"params");
		HX_STACK_LINE(2460)
		{
			HX_STACK_LINE(2460)
			Dynamic params1 = null();		HX_STACK_VAR(params1,"params1");
			HX_STACK_LINE(2460)
			if ((data->hasNode->resolve(HX_CSTRING("param")))){
				HX_STACK_LINE(2460)
				Dynamic _g5 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(2460)
				params1 = _g5;
				HX_STACK_LINE(2460)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("param"))->iterator());  __it->hasNext(); ){
					::haxe::xml::Fast param = __it->next();
					if (((  ((param->has->resolve(HX_CSTRING("type")))) ? bool(param->has->resolve(HX_CSTRING("value"))) : bool(false) ))){
						HX_STACK_LINE(2460)
						::String type = param->att->resolve(HX_CSTRING("type"));		HX_STACK_VAR(type,"type");
						HX_STACK_LINE(2460)
						::String _g6 = type.toLowerCase();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(2460)
						type = _g6;
						HX_STACK_LINE(2460)
						::String valueStr = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(valueStr,"valueStr");
						HX_STACK_LINE(2460)
						Dynamic value = valueStr;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(2460)
						int sort = ::flixel::addons::ui::U_obj::xml_i(param->x,HX_CSTRING("sort"),(int)-1);		HX_STACK_VAR(sort,"sort");
						HX_STACK_LINE(2460)
						::String _switch_22 = (type);
						if (  ( _switch_22==HX_CSTRING("string"))){
							HX_STACK_LINE(2460)
							::String _g7 = ::String(valueStr);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(2460)
							value = _g7;
						}
						else if (  ( _switch_22==HX_CSTRING("int"))){
							HX_STACK_LINE(2460)
							Dynamic _g8 = ::Std_obj::parseInt(valueStr);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(2460)
							value = _g8;
						}
						else if (  ( _switch_22==HX_CSTRING("float"))){
							HX_STACK_LINE(2460)
							Float _g9 = ::Std_obj::parseFloat(valueStr);		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(2460)
							value = _g9;
						}
						else if (  ( _switch_22==HX_CSTRING("color")) ||  ( _switch_22==HX_CSTRING("hex"))){
							HX_STACK_LINE(2460)
							int _g10;		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(2460)
							{
								HX_STACK_LINE(2460)
								bool safe = false;		HX_STACK_VAR(safe,"safe");
								HX_STACK_LINE(2460)
								int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
								HX_STACK_LINE(2460)
								Dynamic return_val = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(valueStr);		HX_STACK_VAR(return_val,"return_val");
								HX_STACK_LINE(2460)
								if (((return_val == null()))){
									HX_STACK_LINE(2460)
									if ((!(safe))){
										HX_STACK_LINE(2460)
										HX_STACK_DO_THROW((HX_CSTRING("U.parseHex() unable to parse hex String ") + valueStr));
									}
									else{
										HX_STACK_LINE(2460)
										return_val = default_color;
									}
								}
								HX_STACK_LINE(2460)
								_g10 = return_val;
							}
							HX_STACK_LINE(2460)
							value = _g10;
						}
						else if (  ( _switch_22==HX_CSTRING("bool")) ||  ( _switch_22==HX_CSTRING("boolean"))){
							HX_STACK_LINE(2460)
							::String str = ::String(valueStr);		HX_STACK_VAR(str,"str");
							HX_STACK_LINE(2460)
							::String _g11 = str.toLowerCase();		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(2460)
							str = _g11;
							HX_STACK_LINE(2460)
							if (((bool((str == HX_CSTRING("true"))) || bool((str == HX_CSTRING("1")))))){
								HX_STACK_LINE(2460)
								value = true;
							}
							else{
								HX_STACK_LINE(2460)
								value = false;
							}
						}
						struct _Function_4_1{
							inline static Dynamic Block( int &sort,Dynamic &value){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI.hx",2460,0xf354486a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("sort") , sort,false);
									__result->Add(HX_CSTRING("value") , value,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(2460)
						params1->__Field(HX_CSTRING("push"),true)(_Function_4_1::Block(sort,value));
					}
;
				}
				HX_STACK_LINE(2460)
				params1->__Field(HX_CSTRING("sort"),true)(::flixel::addons::ui::FlxUI_obj::sortParams_dyn());
				HX_STACK_LINE(2460)
				{
					HX_STACK_LINE(2460)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(2460)
					int _g = params1->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(2460)
					while((true)){
						HX_STACK_LINE(2460)
						if ((!(((_g1 < _g))))){
							HX_STACK_LINE(2460)
							break;
						}
						HX_STACK_LINE(2460)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(2460)
						hx::IndexRef((params1).mPtr,i) = params1->__GetItem(i)->__Field(HX_CSTRING("value"),true);
					}
				}
			}
			HX_STACK_LINE(2460)
			params = params1;
		}
		HX_STACK_LINE(2462)
		if (((sprite == null()))){
			HX_STACK_LINE(2464)
			::flixel::addons::ui::FlxUIButton _g12 = ::flixel::addons::ui::FlxUIButton_obj::__new((int)0,(int)0,label,null());		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(2464)
			fb = _g12;
		}
		else{
			HX_STACK_LINE(2468)
			::flixel::group::FlxTypedSpriteGroup tempGroup = null();		HX_STACK_VAR(tempGroup,"tempGroup");
			HX_STACK_LINE(2469)
			if (((label != HX_CSTRING("")))){
				HX_STACK_LINE(2472)
				::flixel::addons::ui::FlxUIText labelTxt = ::flixel::addons::ui::FlxUIText_obj::__new((int)0,(int)0,(int)80,label,(int)8,null());		HX_STACK_VAR(labelTxt,"labelTxt");
				HX_STACK_LINE(2474)
				labelTxt->setFormat(null(),(int)8,(int)3355443,HX_CSTRING("center"),null(),null(),null());
				HX_STACK_LINE(2476)
				::flixel::group::FlxTypedSpriteGroup _g13 = ::flixel::group::FlxTypedSpriteGroup_obj::__new(null(),null(),null());		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(2476)
				tempGroup = _g13;
				HX_STACK_LINE(2478)
				tempGroup->add(sprite);
				HX_STACK_LINE(2479)
				tempGroup->add(labelTxt);
				HX_STACK_LINE(2481)
				::flixel::addons::ui::FlxUISpriteButton _g14 = ::flixel::addons::ui::FlxUISpriteButton_obj::__new((int)0,(int)0,tempGroup,null());		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(2481)
				fb = _g14;
			}
			else{
				HX_STACK_LINE(2485)
				::flixel::addons::ui::FlxUISpriteButton _g15 = ::flixel::addons::ui::FlxUISpriteButton_obj::__new((int)0,(int)0,sprite,null());		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(2485)
				fb = _g15;
			}
		}
		HX_STACK_LINE(2488)
		fb->__FieldRef(HX_CSTRING("resize_ratio")) = resize_ratio;
		HX_STACK_LINE(2489)
		fb->__FieldRef(HX_CSTRING("resize_point")) = resize_point;
		HX_STACK_LINE(2490)
		fb->__FieldRef(HX_CSTRING("autoResizeLabel")) = resize_label;
		HX_STACK_LINE(2492)
		if ((setCallback)){
			HX_STACK_LINE(2493)
			fb->__Field(HX_CSTRING("set_params"),true)(params);
		}
		HX_STACK_LINE(2498)
		if ((data->hasNode->resolve(HX_CSTRING("graphic")))){
			HX_STACK_LINE(2500)
			bool blank = ::flixel::addons::ui::U_obj::xml_bool(data->node->resolve(HX_CSTRING("graphic"))->x,HX_CSTRING("blank"),null());		HX_STACK_VAR(blank,"blank");
			HX_STACK_LINE(2502)
			if ((blank)){
				HX_STACK_LINE(2507)
				fb->loadGraphicSlice9(Array_obj< ::String >::__new().Add(HX_CSTRING("")).Add(HX_CSTRING("")).Add(HX_CSTRING("")),W,H,null(),(int)0,resize_ratio,null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(2512)
				Array< ::String > graphic_ids = null();		HX_STACK_VAR(graphic_ids,"graphic_ids");
				HX_STACK_LINE(2513)
				Array< ::Dynamic > slice9_ids = null();		HX_STACK_VAR(slice9_ids,"slice9_ids");
				HX_STACK_LINE(2514)
				Array< int > frames = null();		HX_STACK_VAR(frames,"frames");
				HX_STACK_LINE(2516)
				if ((isToggle)){
					HX_STACK_LINE(2517)
					graphic_ids = Array_obj< ::String >::__new().Add(HX_CSTRING("")).Add(HX_CSTRING("")).Add(HX_CSTRING("")).Add(HX_CSTRING("")).Add(HX_CSTRING("")).Add(HX_CSTRING(""));
					HX_STACK_LINE(2518)
					slice9_ids = Array_obj< ::Dynamic >::__new().Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null());
				}
				else{
					HX_STACK_LINE(2520)
					graphic_ids = Array_obj< ::String >::__new().Add(HX_CSTRING("")).Add(HX_CSTRING("")).Add(HX_CSTRING(""));
					HX_STACK_LINE(2521)
					slice9_ids = Array_obj< ::Dynamic >::__new().Add(null()).Add(null()).Add(null());
				}
				HX_STACK_LINE(2525)
				int src_w = ::flixel::addons::ui::U_obj::xml_i(data->node->resolve(HX_CSTRING("graphic"))->x,HX_CSTRING("src_w"),(int)0);		HX_STACK_VAR(src_w,"src_w");
				HX_STACK_LINE(2526)
				int src_h = ::flixel::addons::ui::U_obj::xml_i(data->node->resolve(HX_CSTRING("graphic"))->x,HX_CSTRING("src_h"),(int)0);		HX_STACK_VAR(src_h,"src_h");
				HX_STACK_LINE(2527)
				int tile;		HX_STACK_VAR(tile,"tile");
				HX_STACK_LINE(2527)
				{
					HX_STACK_LINE(2527)
					::haxe::xml::Fast data1 = data->node->resolve(HX_CSTRING("graphic"));		HX_STACK_VAR(data1,"data1");
					HX_STACK_LINE(2527)
					::String tileStr = ::flixel::addons::ui::U_obj::xml_str(data1->x,HX_CSTRING("tile"),true,HX_CSTRING(""));		HX_STACK_VAR(tileStr,"tileStr");
					HX_STACK_LINE(2527)
					int tile1 = (int)0;		HX_STACK_VAR(tile1,"tile1");
					HX_STACK_LINE(2527)
					::String _switch_23 = (tileStr);
					if (  ( _switch_23==HX_CSTRING("true")) ||  ( _switch_23==HX_CSTRING("both")) ||  ( _switch_23==HX_CSTRING("all")) ||  ( _switch_23==HX_CSTRING("hv")) ||  ( _switch_23==HX_CSTRING("vh"))){
						HX_STACK_LINE(2527)
						tile1 = (int)17;
					}
					else if (  ( _switch_23==HX_CSTRING("h")) ||  ( _switch_23==HX_CSTRING("horizontal"))){
						HX_STACK_LINE(2527)
						tile1 = (int)16;
					}
					else if (  ( _switch_23==HX_CSTRING("v")) ||  ( _switch_23==HX_CSTRING("vertical"))){
						HX_STACK_LINE(2527)
						tile1 = (int)1;
					}
					HX_STACK_LINE(2527)
					tile = tile1;
				}
				HX_STACK_LINE(2530)
				::String frame_str = ::flixel::addons::ui::U_obj::xml_str(data->node->resolve(HX_CSTRING("graphic"))->x,HX_CSTRING("frames"),true,null());		HX_STACK_VAR(frame_str,"frame_str");
				HX_STACK_LINE(2531)
				if (((frame_str != HX_CSTRING("")))){
					HX_STACK_LINE(2532)
					Array< int > _g16 = Array_obj< int >::__new();		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(2532)
					frames = _g16;
					HX_STACK_LINE(2533)
					Array< ::String > arr = frame_str.split(HX_CSTRING(","));		HX_STACK_VAR(arr,"arr");
					HX_STACK_LINE(2534)
					{
						HX_STACK_LINE(2534)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2534)
						while((true)){
							HX_STACK_LINE(2534)
							if ((!(((_g < arr->length))))){
								HX_STACK_LINE(2534)
								break;
							}
							HX_STACK_LINE(2534)
							::String numstr = arr->__get(_g);		HX_STACK_VAR(numstr,"numstr");
							HX_STACK_LINE(2534)
							++(_g);
							HX_STACK_LINE(2535)
							Dynamic _g17 = ::Std_obj::parseInt(numstr);		HX_STACK_VAR(_g17,"_g17");
							HX_STACK_LINE(2535)
							frames->push(_g17);
						}
					}
				}
				HX_STACK_LINE(2539)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("graphic"))->iterator());  __it->hasNext(); ){
					::haxe::xml::Fast graphicNode = __it->next();
					{
						HX_STACK_LINE(2540)
						::String graphic_id = ::flixel::addons::ui::U_obj::xml_str(graphicNode->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(graphic_id,"graphic_id");
						HX_STACK_LINE(2541)
						::String image = ::flixel::addons::ui::U_obj::xml_str(graphicNode->x,HX_CSTRING("image"),null(),null());		HX_STACK_VAR(image,"image");
						HX_STACK_LINE(2542)
						::String _g18 = ::flixel::addons::ui::U_obj::xml_str(graphicNode->x,HX_CSTRING("slice9"),null(),null());		HX_STACK_VAR(_g18,"_g18");
						HX_STACK_LINE(2542)
						Array< int > slice9 = ::flixel::util::FlxStringUtil_obj::toIntArray(_g18);		HX_STACK_VAR(slice9,"slice9");
						HX_STACK_LINE(2543)
						int _g19;		HX_STACK_VAR(_g19,"_g19");
						HX_STACK_LINE(2543)
						{
							HX_STACK_LINE(2543)
							::String tileStr = ::flixel::addons::ui::U_obj::xml_str(graphicNode->x,HX_CSTRING("tile"),true,HX_CSTRING(""));		HX_STACK_VAR(tileStr,"tileStr");
							HX_STACK_LINE(2543)
							int tile1 = (int)0;		HX_STACK_VAR(tile1,"tile1");
							HX_STACK_LINE(2543)
							::String _switch_24 = (tileStr);
							if (  ( _switch_24==HX_CSTRING("true")) ||  ( _switch_24==HX_CSTRING("both")) ||  ( _switch_24==HX_CSTRING("all")) ||  ( _switch_24==HX_CSTRING("hv")) ||  ( _switch_24==HX_CSTRING("vh"))){
								HX_STACK_LINE(2543)
								tile1 = (int)17;
							}
							else if (  ( _switch_24==HX_CSTRING("h")) ||  ( _switch_24==HX_CSTRING("horizontal"))){
								HX_STACK_LINE(2543)
								tile1 = (int)16;
							}
							else if (  ( _switch_24==HX_CSTRING("v")) ||  ( _switch_24==HX_CSTRING("vertical"))){
								HX_STACK_LINE(2543)
								tile1 = (int)1;
							}
							HX_STACK_LINE(2543)
							_g19 = tile1;
						}
						HX_STACK_LINE(2543)
						tile = _g19;
						HX_STACK_LINE(2545)
						bool toggleState = ::flixel::addons::ui::U_obj::xml_bool(graphicNode->x,HX_CSTRING("toggle"),null());		HX_STACK_VAR(toggleState,"toggleState");
						HX_STACK_LINE(2546)
						toggleState = (bool(toggleState) && bool(isToggle));
						HX_STACK_LINE(2548)
						::String _switch_25 = (graphic_id);
						if (  ( _switch_25==HX_CSTRING("inactive")) ||  ( _switch_25==HX_CSTRING("")) ||  ( _switch_25==HX_CSTRING("normal")) ||  ( _switch_25==HX_CSTRING("up"))){
							HX_STACK_LINE(2550)
							if (((image != HX_CSTRING("")))){
								HX_STACK_LINE(2551)
								if ((!(toggleState))){
									HX_STACK_LINE(2552)
									graphic_ids[(int)0] = ::flixel::addons::ui::U_obj::gfx(image,null(),null(),null(),null(),null());
								}
								else{
									HX_STACK_LINE(2554)
									graphic_ids[(int)3] = ::flixel::addons::ui::U_obj::gfx(image,null(),null(),null(),null(),null());
								}
							}
							HX_STACK_LINE(2557)
							if ((!(toggleState))){
								HX_STACK_LINE(2559)
								slice9_ids[(int)0] = slice9;
							}
							else{
								HX_STACK_LINE(2563)
								slice9_ids[(int)3] = slice9;
							}
						}
						else if (  ( _switch_25==HX_CSTRING("active")) ||  ( _switch_25==HX_CSTRING("highlight")) ||  ( _switch_25==HX_CSTRING("hilight")) ||  ( _switch_25==HX_CSTRING("over")) ||  ( _switch_25==HX_CSTRING("hover"))){
							HX_STACK_LINE(2566)
							if (((image != HX_CSTRING("")))){
								HX_STACK_LINE(2567)
								if ((!(toggleState))){
									HX_STACK_LINE(2568)
									graphic_ids[(int)1] = ::flixel::addons::ui::U_obj::gfx(image,null(),null(),null(),null(),null());
								}
								else{
									HX_STACK_LINE(2570)
									graphic_ids[(int)4] = ::flixel::addons::ui::U_obj::gfx(image,null(),null(),null(),null(),null());
								}
							}
							HX_STACK_LINE(2573)
							if ((!(toggleState))){
								HX_STACK_LINE(2575)
								slice9_ids[(int)1] = slice9;
							}
							else{
								HX_STACK_LINE(2579)
								slice9_ids[(int)4] = slice9;
							}
						}
						else if (  ( _switch_25==HX_CSTRING("down")) ||  ( _switch_25==HX_CSTRING("pressed")) ||  ( _switch_25==HX_CSTRING("pushed"))){
							HX_STACK_LINE(2582)
							if (((image != HX_CSTRING("")))){
								HX_STACK_LINE(2583)
								if ((!(toggleState))){
									HX_STACK_LINE(2584)
									graphic_ids[(int)2] = ::flixel::addons::ui::U_obj::gfx(image,null(),null(),null(),null(),null());
								}
								else{
									HX_STACK_LINE(2586)
									graphic_ids[(int)5] = ::flixel::addons::ui::U_obj::gfx(image,null(),null(),null(),null(),null());
								}
							}
							HX_STACK_LINE(2589)
							if ((!(toggleState))){
								HX_STACK_LINE(2591)
								slice9_ids[(int)2] = slice9;
							}
							else{
								HX_STACK_LINE(2595)
								slice9_ids[(int)5] = slice9;
							}
						}
						else if (  ( _switch_25==HX_CSTRING("all"))){
							HX_STACK_LINE(2598)
							if (((image != HX_CSTRING("")))){
								HX_STACK_LINE(2599)
								::String _g20 = ::flixel::addons::ui::U_obj::gfx(image,null(),null(),null(),null(),null());		HX_STACK_VAR(_g20,"_g20");
								HX_STACK_LINE(2599)
								Array< ::String > _g21 = Array_obj< ::String >::__new().Add(_g20);		HX_STACK_VAR(_g21,"_g21");
								HX_STACK_LINE(2599)
								graphic_ids = _g21;
							}
							HX_STACK_LINE(2601)
							slice9_ids = Array_obj< ::Dynamic >::__new().Add(slice9);
							HX_STACK_LINE(2602)
							if (((bool((src_w == (int)0)) || bool((src_h == (int)0))))){
								HX_STACK_LINE(2603)
								::openfl::_v2::display::BitmapData temp = ::openfl::_v2::Assets_obj::getBitmapData(graphic_ids->__get((int)0),null());		HX_STACK_VAR(temp,"temp");
								HX_STACK_LINE(2604)
								int _g22 = temp->get_width();		HX_STACK_VAR(_g22,"_g22");
								HX_STACK_LINE(2604)
								src_w = _g22;
								HX_STACK_LINE(2605)
								if ((isToggle)){
									HX_STACK_LINE(2606)
									int _g23 = temp->get_height();		HX_STACK_VAR(_g23,"_g23");
									HX_STACK_LINE(2606)
									Float _g24 = (Float(_g23) / Float((int)6));		HX_STACK_VAR(_g24,"_g24");
									HX_STACK_LINE(2606)
									int _g25 = ::Std_obj::_int(_g24);		HX_STACK_VAR(_g25,"_g25");
									HX_STACK_LINE(2606)
									src_h = _g25;
								}
								else{
									HX_STACK_LINE(2608)
									int _g26 = temp->get_height();		HX_STACK_VAR(_g26,"_g26");
									HX_STACK_LINE(2608)
									Float _g27 = (Float(_g26) / Float((int)3));		HX_STACK_VAR(_g27,"_g27");
									HX_STACK_LINE(2608)
									int _g28 = ::Std_obj::_int(_g27);		HX_STACK_VAR(_g28,"_g28");
									HX_STACK_LINE(2608)
									src_h = _g28;
								}
							}
						}
						HX_STACK_LINE(2613)
						if (((graphic_ids->__get((int)0) != HX_CSTRING("")))){
							HX_STACK_LINE(2614)
							if (((graphic_ids->length >= (int)3))){
								HX_STACK_LINE(2615)
								if (((graphic_ids->__get((int)1) == HX_CSTRING("")))){
									HX_STACK_LINE(2616)
									graphic_ids[(int)1] = graphic_ids->__get((int)0);
								}
								HX_STACK_LINE(2618)
								if (((graphic_ids->__get((int)2) == HX_CSTRING("")))){
									HX_STACK_LINE(2619)
									graphic_ids[(int)2] = graphic_ids->__get((int)1);
								}
								HX_STACK_LINE(2621)
								if (((graphic_ids->length >= (int)6))){
									HX_STACK_LINE(2622)
									if (((graphic_ids->__get((int)3) == HX_CSTRING("")))){
										HX_STACK_LINE(2623)
										graphic_ids[(int)3] = graphic_ids->__get((int)0);
									}
									HX_STACK_LINE(2625)
									if (((graphic_ids->__get((int)4) == HX_CSTRING("")))){
										HX_STACK_LINE(2626)
										graphic_ids[(int)4] = graphic_ids->__get((int)1);
									}
									HX_STACK_LINE(2628)
									if (((graphic_ids->__get((int)5) == HX_CSTRING("")))){
										HX_STACK_LINE(2629)
										graphic_ids[(int)5] = graphic_ids->__get((int)2);
									}
								}
							}
						}
					}
;
				}
				HX_STACK_LINE(2637)
				fb->loadGraphicSlice9(graphic_ids,W,H,slice9_ids,tile,resize_ratio,isToggle,src_w,src_h,frames);
			}
		}
		else{
			HX_STACK_LINE(2640)
			if (((load_code == HX_CSTRING("tab_menu")))){
				HX_STACK_LINE(2642)
				Array< ::String > graphic_ids = Array_obj< ::String >::__new().Add(HX_CSTRING("flixel/flixel-ui/img/tab_back.png")).Add(HX_CSTRING("flixel/flixel-ui/img/tab_back.png")).Add(HX_CSTRING("flixel/flixel-ui/img/tab_back.png")).Add(HX_CSTRING("flixel/flixel-ui/img/tab.png")).Add(HX_CSTRING("flixel/flixel-ui/img/tab.png")).Add(HX_CSTRING("flixel/flixel-ui/img/tab.png"));		HX_STACK_VAR(graphic_ids,"graphic_ids");
				HX_STACK_LINE(2643)
				Array< int > slice9_tab = ::flixel::util::FlxStringUtil_obj::toIntArray(HX_CSTRING("6,6,11,11"));		HX_STACK_VAR(slice9_tab,"slice9_tab");
				HX_STACK_LINE(2644)
				Array< ::Dynamic > slice9_ids = Array_obj< ::Dynamic >::__new().Add(slice9_tab).Add(slice9_tab).Add(slice9_tab).Add(slice9_tab).Add(slice9_tab).Add(slice9_tab);		HX_STACK_VAR(slice9_ids,"slice9_ids");
				HX_STACK_LINE(2647)
				if ((::Std_obj::is(fb,hx::ClassOf< ::flixel::addons::ui::FlxUIButton >()))){
					HX_STACK_LINE(2648)
					::flixel::addons::ui::FlxUIButton fbui = fb;		HX_STACK_VAR(fbui,"fbui");
					HX_STACK_LINE(2649)
					fbui->loadGraphicSlice9(graphic_ids,W,H,slice9_ids,(int)0,resize_ratio,isToggle,null(),null(),null());
				}
				else{
					HX_STACK_LINE(2650)
					if ((::Std_obj::is(fb,hx::ClassOf< ::flixel::addons::ui::FlxUISpriteButton >()))){
						HX_STACK_LINE(2651)
						::flixel::addons::ui::FlxUISpriteButton fbuis = fb;		HX_STACK_VAR(fbuis,"fbuis");
						HX_STACK_LINE(2652)
						fbuis->loadGraphicSlice9(graphic_ids,W,H,slice9_ids,(int)0,resize_ratio,isToggle,null(),null(),null());
					}
					else{
						HX_STACK_LINE(2654)
						fb->loadGraphicSlice9(graphic_ids,W,H,slice9_ids,(int)0,resize_ratio,isToggle,null(),null(),null());
					}
				}
			}
			else{
				HX_STACK_LINE(2658)
				if (((bool((W > (int)0)) && bool((H > (int)0))))){
					HX_STACK_LINE(2659)
					fb->loadGraphicSlice9(null(),W,H,null(),(int)0,resize_ratio,isToggle,null(),null(),null());
				}
				else{
					HX_STACK_LINE(2661)
					fb->loadGraphicSlice9(null(),(int)80,(int)20,null(),(int)0,resize_ratio,isToggle,null(),null(),null());
				}
			}
		}
		HX_STACK_LINE(2668)
		if (((sprite == null()))){
			HX_STACK_LINE(2670)
			if (((  (((data != null()))) ? bool(data->hasNode->resolve(HX_CSTRING("text"))) : bool(false) ))){
				HX_STACK_LINE(2671)
				this->formatButtonText(data,fb);
			}
			else{
				HX_STACK_LINE(2673)
				if (((load_code == HX_CSTRING("tab_menu")))){
					HX_STACK_LINE(2674)
					fb->__FieldRef(HX_CSTRING("up_color")) = (int)16777215;
					HX_STACK_LINE(2675)
					fb->__FieldRef(HX_CSTRING("down_color")) = (int)16777215;
					HX_STACK_LINE(2676)
					fb->__FieldRef(HX_CSTRING("over_color")) = (int)16777215;
					HX_STACK_LINE(2677)
					fb->__FieldRef(HX_CSTRING("up_toggle_color")) = (int)16777215;
					HX_STACK_LINE(2678)
					fb->__FieldRef(HX_CSTRING("down_toggle_color")) = (int)16777215;
					HX_STACK_LINE(2679)
					fb->__FieldRef(HX_CSTRING("over_toggle_color")) = (int)16777215;
				}
				else{
					HX_STACK_LINE(2684)
					fb->autoCenterLabel();
				}
			}
		}
		else{
			HX_STACK_LINE(2688)
			fb->autoCenterLabel();
		}
		HX_STACK_LINE(2691)
		if (((bool((sprite != null())) && bool((label != HX_CSTRING("")))))){
			HX_STACK_LINE(2692)
			if (((  (((data != null()))) ? bool(data->hasNode->resolve(HX_CSTRING("text"))) : bool(false) ))){
				HX_STACK_LINE(2693)
				this->formatButtonText(data,fb);
			}
		}
		HX_STACK_LINE(2697)
		int text_x = (int)0;		HX_STACK_VAR(text_x,"text_x");
		HX_STACK_LINE(2698)
		int text_y = (int)0;		HX_STACK_VAR(text_y,"text_y");
		HX_STACK_LINE(2699)
		::String _g29 = data->x->get(HX_CSTRING("text_x"));		HX_STACK_VAR(_g29,"_g29");
		HX_STACK_LINE(2699)
		if (((_g29 != null()))){
			HX_STACK_LINE(2700)
			int _g30 = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("text_x"),null());		HX_STACK_VAR(_g30,"_g30");
			HX_STACK_LINE(2700)
			text_x = _g30;
		}
		else{
			HX_STACK_LINE(2701)
			::String _g31 = data->x->get(HX_CSTRING("label_x"));		HX_STACK_VAR(_g31,"_g31");
			HX_STACK_LINE(2701)
			if (((_g31 != null()))){
				HX_STACK_LINE(2702)
				int _g32 = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("label_x"),null());		HX_STACK_VAR(_g32,"_g32");
				HX_STACK_LINE(2702)
				text_x = _g32;
			}
		}
		HX_STACK_LINE(2704)
		::String _g33 = data->x->get(HX_CSTRING("text_y"));		HX_STACK_VAR(_g33,"_g33");
		HX_STACK_LINE(2704)
		if (((_g33 != null()))){
			HX_STACK_LINE(2705)
			int _g34 = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("text_y"),null());		HX_STACK_VAR(_g34,"_g34");
			HX_STACK_LINE(2705)
			text_y = _g34;
		}
		else{
			HX_STACK_LINE(2706)
			::String _g35 = data->x->get(HX_CSTRING("label_y"));		HX_STACK_VAR(_g35,"_g35");
			HX_STACK_LINE(2706)
			if (((_g35 != null()))){
				HX_STACK_LINE(2707)
				int _g36 = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("label_y"),null());		HX_STACK_VAR(_g36,"_g36");
				HX_STACK_LINE(2707)
				text_y = _g36;
			}
		}
		HX_STACK_LINE(2710)
		if ((::Std_obj::is(fb,hx::ClassOf< ::flixel::addons::ui::FlxUISpriteButton >()))){
			HX_STACK_LINE(2712)
			::flixel::addons::ui::FlxUISpriteButton fbs = fb;		HX_STACK_VAR(fbs,"fbs");
			HX_STACK_LINE(2713)
			if ((::Std_obj::is(fbs->label,hx::ClassOf< ::flixel::group::FlxTypedSpriteGroup >()))){
				HX_STACK_LINE(2714)
				::flixel::group::FlxTypedSpriteGroup g = fbs->label;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(2715)
				{
					HX_STACK_LINE(2715)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(2715)
					Array< ::Dynamic > _g1 = g->group->members;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(2715)
					while((true)){
						HX_STACK_LINE(2715)
						if ((!(((_g < _g1->length))))){
							HX_STACK_LINE(2715)
							break;
						}
						HX_STACK_LINE(2715)
						::flixel::FlxSprite sprite1 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(sprite1,"sprite1");
						HX_STACK_LINE(2715)
						++(_g);
						HX_STACK_LINE(2717)
						if ((::Std_obj::is(sprite1,hx::ClassOf< ::flixel::addons::ui::FlxUIText >()))){
							HX_STACK_LINE(2720)
							{
								HX_STACK_LINE(2720)
								::flixel::math::FlxPoint _g21 = sprite1->offset;		HX_STACK_VAR(_g21,"_g21");
								HX_STACK_LINE(2720)
								_g21->set_x((_g21->x - text_x));
							}
							HX_STACK_LINE(2721)
							{
								HX_STACK_LINE(2721)
								::flixel::math::FlxPoint _g21 = sprite1->offset;		HX_STACK_VAR(_g21,"_g21");
								HX_STACK_LINE(2721)
								_g21->set_y((_g21->y - text_y));
							}
							HX_STACK_LINE(2722)
							break;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(2726)
				{
					HX_STACK_LINE(2726)
					::flixel::math::FlxPoint _g = fbs->label->__Field(HX_CSTRING("offset"),true);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(2726)
					_g->set_x((_g->x - text_x));
				}
				HX_STACK_LINE(2727)
				{
					HX_STACK_LINE(2727)
					::flixel::math::FlxPoint _g = fbs->label->__Field(HX_CSTRING("offset"),true);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(2727)
					_g->set_y((_g->y - text_y));
				}
				HX_STACK_LINE(2728)
				if (((toggleSprite != null()))){
					HX_STACK_LINE(2729)
					{
						HX_STACK_LINE(2729)
						::flixel::math::FlxPoint _g = toggleSprite->offset;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2729)
						_g->set_x((_g->x - text_x));
					}
					HX_STACK_LINE(2730)
					{
						HX_STACK_LINE(2730)
						::flixel::math::FlxPoint _g = toggleSprite->offset;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(2730)
						_g->set_y((_g->y - text_y));
					}
				}
			}
		}
		else{
			HX_STACK_LINE(2736)
			::flixel::addons::ui::FlxUIButton fbu = fb;		HX_STACK_VAR(fbu,"fbu");
			HX_STACK_LINE(2738)
			{
				HX_STACK_LINE(2738)
				::flixel::math::FlxPoint _g = fbu->label->__Field(HX_CSTRING("offset"),true);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2738)
				_g->set_x((_g->x - text_x));
			}
			HX_STACK_LINE(2739)
			{
				HX_STACK_LINE(2739)
				::flixel::math::FlxPoint _g = fbu->label->__Field(HX_CSTRING("offset"),true);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2739)
				_g->set_y((_g->y - text_y));
			}
		}
		HX_STACK_LINE(2742)
		if (((bool((sprite != null())) && bool((toggleSprite != null()))))){
			HX_STACK_LINE(2743)
			fb->__Field(HX_CSTRING("set_toggle_label"),true)(toggleSprite);
		}
		HX_STACK_LINE(2746)
		return fb;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxUI_obj,_loadButton,return )

::flixel::addons::ui::FlxUIRegion FlxUI_obj::_loadRegion( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadRegion",0x440e2340,"flixel.addons.ui.FlxUI._loadRegion","flixel/addons/ui/FlxUI.hx",2758,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(2759)
	Float _g = this->_loadWidth(data,null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(2759)
	int w = ::Std_obj::_int(_g);		HX_STACK_VAR(w,"w");
	HX_STACK_LINE(2760)
	Float _g1 = this->_loadHeight(data,null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(2760)
	int h = ::Std_obj::_int(_g1);		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(2761)
	bool vis = ::flixel::addons::ui::U_obj::xml_bool(data->x,HX_CSTRING("visible"),true);		HX_STACK_VAR(vis,"vis");
	HX_STACK_LINE(2762)
	::flixel::addons::ui::FlxUIRegion reg = ::flixel::addons::ui::FlxUIRegion_obj::__new((int)0,(int)0,w,h);		HX_STACK_VAR(reg,"reg");
	HX_STACK_LINE(2763)
	reg->set_visible(vis);
	HX_STACK_LINE(2764)
	return reg;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadRegion,return )

::flixel::addons::ui::FlxUI9SliceSprite FlxUI_obj::_load9SliceSprite( ::haxe::xml::Fast data,::String __o_load_code){
::String load_code = __o_load_code.Default(HX_CSTRING(""));
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_load9SliceSprite",0xb0d2f56a,"flixel.addons.ui.FlxUI._load9SliceSprite","flixel/addons/ui/FlxUI.hx",2767,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(load_code,"load_code")
{
		HX_STACK_LINE(2768)
		::String src = HX_CSTRING("");		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(2769)
		::flixel::addons::ui::FlxUI9SliceSprite f9s = null();		HX_STACK_VAR(f9s,"f9s");
		HX_STACK_LINE(2771)
		::flixel::math::FlxPoint resize = this->getResizeRatio(data,null());		HX_STACK_VAR(resize,"resize");
		HX_STACK_LINE(2773)
		Float resize_ratio = resize->x;		HX_STACK_VAR(resize_ratio,"resize_ratio");
		HX_STACK_LINE(2774)
		::flixel::math::FlxPoint resize_point = this->_loadCompass(data,HX_CSTRING("resize_point"));		HX_STACK_VAR(resize_point,"resize_point");
		HX_STACK_LINE(2775)
		int resize_ratio_axis = ::Std_obj::_int(resize->y);		HX_STACK_VAR(resize_ratio_axis,"resize_ratio_axis");
		HX_STACK_LINE(2778)
		Dynamic bounds = this->calcMaxMinSize(data,null(),null());		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(2780)
		::String _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(2780)
		{
			HX_STACK_LINE(2780)
			::Xml data1 = data->x;		HX_STACK_VAR(data1,"data1");
			HX_STACK_LINE(2780)
			bool test = true;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(2780)
			::String str = HX_CSTRING("");		HX_STACK_VAR(str,"str");
			HX_STACK_LINE(2780)
			::String _g = data1->get(HX_CSTRING("src"));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2780)
			if (((_g != null()))){
				HX_STACK_LINE(2780)
				::String _g1 = data1->get(HX_CSTRING("src"));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(2780)
				str = _g1;
				HX_STACK_LINE(2780)
				if (((bool((str == HX_CSTRING(""))) || bool((str == null()))))){
					HX_STACK_LINE(2780)
					str = HX_CSTRING("");
				}
				else{
					HX_STACK_LINE(2780)
					::String _g2 = ::flixel::addons::ui::U_obj::gfx(str,null(),null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(2780)
					str = _g2;
					HX_STACK_LINE(2780)
					if ((test)){
						HX_STACK_LINE(2780)
						try
						{
						HX_STACK_CATCHABLE(::String, 0);
						{
							HX_STACK_LINE(2780)
							::openfl::_v2::display::BitmapData testbmp = ::openfl::_v2::Assets_obj::getBitmapData(str,null());		HX_STACK_VAR(testbmp,"testbmp");
							HX_STACK_LINE(2780)
							if (((testbmp == null()))){
								HX_STACK_LINE(2780)
								HX_STACK_DO_THROW(HX_CSTRING("couldn't load bmp \"src\""));
							}
							HX_STACK_LINE(2780)
							testbmp = null();
						}
						}
						catch(Dynamic __e){
							if (__e.IsClass< ::String >() ){
								HX_STACK_BEGIN_CATCH
								::String msg = __e;{
									HX_STACK_LINE(2780)
									Dynamic();
								}
							}
							else {
							    HX_STACK_DO_THROW(__e);
							}
						}
					}
				}
			}
			HX_STACK_LINE(2780)
			_g3 = str;
		}
		HX_STACK_LINE(2780)
		src = _g3;
		HX_STACK_LINE(2781)
		if (((src == HX_CSTRING("")))){
			HX_STACK_LINE(2781)
			src = null();
		}
		HX_STACK_LINE(2783)
		if (((src == null()))){
			HX_STACK_LINE(2784)
			if (((load_code == HX_CSTRING("tab_menu")))){
				HX_STACK_LINE(2785)
				src = HX_CSTRING("flixel/flixel-ui/img/chrome_flat.png");
			}
		}
		HX_STACK_LINE(2789)
		::openfl::_v2::geom::Rectangle rc;		HX_STACK_VAR(rc,"rc");
		HX_STACK_LINE(2790)
		Float _g4 = this->_loadWidth(data,null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(2790)
		int rect_w = ::Std_obj::_int(_g4);		HX_STACK_VAR(rect_w,"rect_w");
		HX_STACK_LINE(2791)
		Float _g5 = this->_loadHeight(data,null(),null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(2791)
		int rect_h = ::Std_obj::_int(_g5);		HX_STACK_VAR(rect_h,"rect_h");
		HX_STACK_LINE(2793)
		if (((bounds != null()))){
			HX_STACK_LINE(2794)
			if (((rect_w < bounds->__Field(HX_CSTRING("min_width"),true)))){
				HX_STACK_LINE(2794)
				int _g6 = ::Std_obj::_int(bounds->__Field(HX_CSTRING("min_width"),true));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(2794)
				rect_w = _g6;
			}
			else{
				HX_STACK_LINE(2795)
				if (((rect_w > bounds->__Field(HX_CSTRING("max_width"),true)))){
					HX_STACK_LINE(2795)
					rect_w = bounds->__Field(HX_CSTRING("max_width"),true);
				}
			}
			HX_STACK_LINE(2797)
			if (((rect_h < bounds->__Field(HX_CSTRING("min_height"),true)))){
				HX_STACK_LINE(2797)
				int _g7 = ::Std_obj::_int(bounds->__Field(HX_CSTRING("min_height"),true));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(2797)
				rect_h = _g7;
			}
			else{
				HX_STACK_LINE(2798)
				if (((rect_h > bounds->__Field(HX_CSTRING("max_height"),true)))){
					HX_STACK_LINE(2798)
					int _g8 = ::Std_obj::_int(bounds->__Field(HX_CSTRING("max_height"),true));		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(2798)
					rect_h = _g8;
				}
			}
		}
		HX_STACK_LINE(2800)
		if (((bool((rect_w == (int)0)) || bool((rect_h == (int)0))))){
			HX_STACK_LINE(2801)
			return null();
		}
		HX_STACK_LINE(2804)
		::openfl::_v2::geom::Rectangle rc1 = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,rect_w,rect_h);		HX_STACK_VAR(rc1,"rc1");
		HX_STACK_LINE(2805)
		::String _g9 = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("slice9"),null(),null());		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(2805)
		Array< int > slice9 = ::flixel::util::FlxStringUtil_obj::toIntArray(_g9);		HX_STACK_VAR(slice9,"slice9");
		HX_STACK_LINE(2807)
		bool smooth = ::flixel::addons::ui::U_obj::xml_bool(data->x,HX_CSTRING("smooth"),false);		HX_STACK_VAR(smooth,"smooth");
		HX_STACK_LINE(2809)
		int tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(2809)
		{
			HX_STACK_LINE(2809)
			::String tileStr = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("tile"),true,HX_CSTRING(""));		HX_STACK_VAR(tileStr,"tileStr");
			HX_STACK_LINE(2809)
			int tile1 = (int)0;		HX_STACK_VAR(tile1,"tile1");
			HX_STACK_LINE(2809)
			::String _switch_26 = (tileStr);
			if (  ( _switch_26==HX_CSTRING("true")) ||  ( _switch_26==HX_CSTRING("both")) ||  ( _switch_26==HX_CSTRING("all")) ||  ( _switch_26==HX_CSTRING("hv")) ||  ( _switch_26==HX_CSTRING("vh"))){
				HX_STACK_LINE(2809)
				tile1 = (int)17;
			}
			else if (  ( _switch_26==HX_CSTRING("h")) ||  ( _switch_26==HX_CSTRING("horizontal"))){
				HX_STACK_LINE(2809)
				tile1 = (int)16;
			}
			else if (  ( _switch_26==HX_CSTRING("v")) ||  ( _switch_26==HX_CSTRING("vertical"))){
				HX_STACK_LINE(2809)
				tile1 = (int)1;
			}
			HX_STACK_LINE(2809)
			tile = tile1;
		}
		HX_STACK_LINE(2811)
		::flixel::addons::ui::FlxUI9SliceSprite _g10 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::__new((int)0,(int)0,src,rc1,slice9,tile,smooth,HX_CSTRING(""),resize_ratio,resize_point,resize_ratio_axis);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(2811)
		f9s = _g10;
		HX_STACK_LINE(2813)
		return f9s;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_load9SliceSprite,return )

int FlxUI_obj::_loadTileRule( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadTileRule",0xb6112c96,"flixel.addons.ui.FlxUI._loadTileRule","flixel/addons/ui/FlxUI.hx",2816,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(2817)
	::String tileStr = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("tile"),true,HX_CSTRING(""));		HX_STACK_VAR(tileStr,"tileStr");
	HX_STACK_LINE(2818)
	int tile = (int)0;		HX_STACK_VAR(tile,"tile");
	HX_STACK_LINE(2819)
	::String _switch_27 = (tileStr);
	if (  ( _switch_27==HX_CSTRING("true")) ||  ( _switch_27==HX_CSTRING("both")) ||  ( _switch_27==HX_CSTRING("all")) ||  ( _switch_27==HX_CSTRING("hv")) ||  ( _switch_27==HX_CSTRING("vh"))){
		HX_STACK_LINE(2820)
		tile = (int)17;
	}
	else if (  ( _switch_27==HX_CSTRING("h")) ||  ( _switch_27==HX_CSTRING("horizontal"))){
		HX_STACK_LINE(2821)
		tile = (int)16;
	}
	else if (  ( _switch_27==HX_CSTRING("v")) ||  ( _switch_27==HX_CSTRING("vertical"))){
		HX_STACK_LINE(2822)
		tile = (int)1;
	}
	HX_STACK_LINE(2824)
	return tile;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadTileRule,return )

::flixel::addons::ui::FlxUISprite FlxUI_obj::_loadLine( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadLine",0x92cf0f40,"flixel.addons.ui.FlxUI._loadLine","flixel/addons/ui/FlxUI.hx",2827,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(2828)
	::String src = HX_CSTRING("");		HX_STACK_VAR(src,"src");
	HX_STACK_LINE(2829)
	::flixel::addons::ui::FlxUISprite fs = null();		HX_STACK_VAR(fs,"fs");
	HX_STACK_LINE(2831)
	::String axis = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("axis"),true,HX_CSTRING("horizontal"));		HX_STACK_VAR(axis,"axis");
	HX_STACK_LINE(2832)
	int thickness = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("thickness"),(int)1);		HX_STACK_VAR(thickness,"thickness");
	HX_STACK_LINE(2835)
	Dynamic bounds = this->calcMaxMinSize(data,null(),null());		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(2837)
	if (((bounds == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI.hx",2838,0xf354486a)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("min_width") , ::Math_obj::NEGATIVE_INFINITY,false);
					__result->Add(HX_CSTRING("min_height") , ::Math_obj::NEGATIVE_INFINITY,false);
					__result->Add(HX_CSTRING("max_width") , ::Math_obj::POSITIVE_INFINITY,false);
					__result->Add(HX_CSTRING("max_height") , ::Math_obj::POSITIVE_INFINITY,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(2838)
		bounds = _Function_2_1::Block();
	}
	HX_STACK_LINE(2840)
	::String _switch_28 = (axis);
	if (  ( _switch_28==HX_CSTRING("h")) ||  ( _switch_28==HX_CSTRING("horz")) ||  ( _switch_28==HX_CSTRING("horizontal"))){
		HX_STACK_LINE(2841)
		bounds->__FieldRef(HX_CSTRING("max_height")) = thickness;
		HX_STACK_LINE(2841)
		bounds->__FieldRef(HX_CSTRING("min_height")) = thickness;
	}
	else if (  ( _switch_28==HX_CSTRING("v")) ||  ( _switch_28==HX_CSTRING("vert")) ||  ( _switch_28==HX_CSTRING("vertical"))){
		HX_STACK_LINE(2842)
		bounds->__FieldRef(HX_CSTRING("max_width")) = thickness;
		HX_STACK_LINE(2842)
		bounds->__FieldRef(HX_CSTRING("min_width")) = thickness;
	}
	HX_STACK_LINE(2845)
	Float _g = this->_loadWidth(data,null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(2845)
	int W = ::Std_obj::_int(_g);		HX_STACK_VAR(W,"W");
	HX_STACK_LINE(2846)
	Float _g1 = this->_loadHeight(data,null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(2846)
	int H = ::Std_obj::_int(_g1);		HX_STACK_VAR(H,"H");
	HX_STACK_LINE(2848)
	if (((bounds != null()))){
		HX_STACK_LINE(2849)
		if (((W < bounds->__Field(HX_CSTRING("min_width"),true)))){
			HX_STACK_LINE(2849)
			int _g2 = ::Std_obj::_int(bounds->__Field(HX_CSTRING("min_width"),true));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(2849)
			W = _g2;
		}
		else{
			HX_STACK_LINE(2850)
			if (((W > bounds->__Field(HX_CSTRING("max_width"),true)))){
				HX_STACK_LINE(2850)
				int _g3 = ::Std_obj::_int(bounds->__Field(HX_CSTRING("max_width"),true));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(2850)
				W = _g3;
			}
		}
		HX_STACK_LINE(2851)
		if (((H < bounds->__Field(HX_CSTRING("min_height"),true)))){
			HX_STACK_LINE(2851)
			int _g4 = ::Std_obj::_int(bounds->__Field(HX_CSTRING("max_height"),true));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(2851)
			H = _g4;
		}
		else{
			HX_STACK_LINE(2852)
			if (((H > bounds->__Field(HX_CSTRING("max_height"),true)))){
				HX_STACK_LINE(2852)
				int _g5 = ::Std_obj::_int(bounds->__Field(HX_CSTRING("max_height"),true));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(2852)
				H = _g5;
			}
		}
	}
	HX_STACK_LINE(2855)
	::String cstr = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("color"),true,HX_CSTRING("0xff000000"));		HX_STACK_VAR(cstr,"cstr");
	HX_STACK_LINE(2856)
	int C = (int)0;		HX_STACK_VAR(C,"C");
	HX_STACK_LINE(2857)
	if (((cstr != HX_CSTRING("")))){
		HX_STACK_LINE(2858)
		int _g6;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(2858)
		{
			HX_STACK_LINE(2858)
			bool safe = false;		HX_STACK_VAR(safe,"safe");
			HX_STACK_LINE(2858)
			int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
			HX_STACK_LINE(2858)
			Dynamic return_val = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(cstr);		HX_STACK_VAR(return_val,"return_val");
			HX_STACK_LINE(2858)
			if (((return_val == null()))){
				HX_STACK_LINE(2858)
				if ((!(safe))){
					HX_STACK_LINE(2858)
					HX_STACK_DO_THROW((HX_CSTRING("U.parseHex() unable to parse hex String ") + cstr));
				}
				else{
					HX_STACK_LINE(2858)
					return_val = default_color;
				}
			}
			HX_STACK_LINE(2858)
			_g6 = return_val;
		}
		HX_STACK_LINE(2858)
		C = _g6;
	}
	HX_STACK_LINE(2860)
	::flixel::addons::ui::FlxUISprite _g7 = ::flixel::addons::ui::FlxUISprite_obj::__new((int)0,(int)0,null());		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(2860)
	fs = _g7;
	HX_STACK_LINE(2861)
	fs->makeGraphic(W,H,C,null(),null());
	HX_STACK_LINE(2863)
	return fs;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadLine,return )

::flixel::addons::ui::FlxUISprite FlxUI_obj::_loadSprite( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadSprite",0x07173e51,"flixel.addons.ui.FlxUI._loadSprite","flixel/addons/ui/FlxUI.hx",2866,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(2867)
	::String src = HX_CSTRING("");		HX_STACK_VAR(src,"src");
	HX_STACK_LINE(2868)
	::flixel::addons::ui::FlxUISprite fs = null();		HX_STACK_VAR(fs,"fs");
	HX_STACK_LINE(2870)
	::String _g = this->loadScaledSrc(data);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(2870)
	src = _g;
	HX_STACK_LINE(2873)
	Dynamic bounds = this->calcMaxMinSize(data,null(),null());		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(2875)
	::flixel::math::FlxPoint resize = this->getResizeRatio(data,(int)-1);		HX_STACK_VAR(resize,"resize");
	HX_STACK_LINE(2877)
	Float resize_ratio = resize->x;		HX_STACK_VAR(resize_ratio,"resize_ratio");
	HX_STACK_LINE(2878)
	int resize_ratio_axis = ::Std_obj::_int(resize->y);		HX_STACK_VAR(resize_ratio_axis,"resize_ratio_axis");
	HX_STACK_LINE(2879)
	::flixel::math::FlxPoint resize_point = this->_loadCompass(data,HX_CSTRING("resize_point"));		HX_STACK_VAR(resize_point,"resize_point");
	HX_STACK_LINE(2881)
	Float _g1 = this->_loadWidth(data,(int)-1,null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(2881)
	int W = ::Std_obj::_int(_g1);		HX_STACK_VAR(W,"W");
	HX_STACK_LINE(2882)
	Float _g2 = this->_loadHeight(data,(int)-1,null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(2882)
	int H = ::Std_obj::_int(_g2);		HX_STACK_VAR(H,"H");
	HX_STACK_LINE(2884)
	if (((src != HX_CSTRING("")))){
		HX_STACK_LINE(2886)
		if (((bool((W == (int)-1)) && bool((H == (int)-1))))){
			HX_STACK_LINE(2888)
			::flixel::addons::ui::FlxUISprite _g3 = ::flixel::addons::ui::FlxUISprite_obj::__new((int)0,(int)0,src);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(2888)
			fs = _g3;
		}
		else{
			HX_STACK_LINE(2893)
			if (((bool((resize_ratio != (int)-1)) && bool(((bool((W == (int)-1)) || bool((H == (int)-1)))))))){
				HX_STACK_LINE(2896)
				if (((resize_ratio_axis == (int)-1))){
					HX_STACK_LINE(2898)
					if (((W == (int)-1))){
						HX_STACK_LINE(2898)
						resize_ratio_axis = (int)0;
					}
					HX_STACK_LINE(2899)
					if (((H == (int)-1))){
						HX_STACK_LINE(2899)
						resize_ratio_axis = (int)1;
					}
				}
				HX_STACK_LINE(2903)
				if (((resize_ratio_axis == (int)1))){
					HX_STACK_LINE(2905)
					H = (W * ((Float((int)1) / Float(resize_ratio))));
				}
				else{
					HX_STACK_LINE(2907)
					if (((resize_ratio_axis == (int)0))){
						HX_STACK_LINE(2909)
						W = (H * ((Float((int)1) / Float(resize_ratio))));
					}
				}
			}
			HX_STACK_LINE(2913)
			::String _g4 = ::flixel::addons::ui::U_obj::loadScaledImage(src,W,H);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(2913)
			::flixel::addons::ui::FlxUISprite _g5 = ::flixel::addons::ui::FlxUISprite_obj::__new((int)0,(int)0,_g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(2913)
			fs = _g5;
		}
	}
	else{
		HX_STACK_LINE(2917)
		if (((bounds != null()))){
			HX_STACK_LINE(2918)
			if (((W < bounds->__Field(HX_CSTRING("min_width"),true)))){
				HX_STACK_LINE(2918)
				int _g6 = ::Std_obj::_int(bounds->__Field(HX_CSTRING("min_width"),true));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(2918)
				W = _g6;
			}
			else{
				HX_STACK_LINE(2919)
				if (((W > bounds->__Field(HX_CSTRING("max_width"),true)))){
					HX_STACK_LINE(2919)
					int _g7 = ::Std_obj::_int(bounds->__Field(HX_CSTRING("max_width"),true));		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(2919)
					W = _g7;
				}
			}
			HX_STACK_LINE(2920)
			if (((H < bounds->__Field(HX_CSTRING("min_height"),true)))){
				HX_STACK_LINE(2920)
				int _g8 = ::Std_obj::_int(bounds->__Field(HX_CSTRING("max_height"),true));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(2920)
				H = _g8;
			}
			else{
				HX_STACK_LINE(2921)
				if (((H > bounds->__Field(HX_CSTRING("max_height"),true)))){
					HX_STACK_LINE(2921)
					int _g9 = ::Std_obj::_int(bounds->__Field(HX_CSTRING("max_height"),true));		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(2921)
					H = _g9;
				}
			}
		}
		HX_STACK_LINE(2924)
		::String cstr = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("color"),null(),null());		HX_STACK_VAR(cstr,"cstr");
		HX_STACK_LINE(2925)
		int C = (int)0;		HX_STACK_VAR(C,"C");
		HX_STACK_LINE(2926)
		if (((cstr != HX_CSTRING("")))){
			HX_STACK_LINE(2927)
			int _g10;		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(2927)
			{
				HX_STACK_LINE(2927)
				bool safe = false;		HX_STACK_VAR(safe,"safe");
				HX_STACK_LINE(2927)
				int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
				HX_STACK_LINE(2927)
				Dynamic return_val = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(cstr);		HX_STACK_VAR(return_val,"return_val");
				HX_STACK_LINE(2927)
				if (((return_val == null()))){
					HX_STACK_LINE(2927)
					if ((!(safe))){
						HX_STACK_LINE(2927)
						HX_STACK_DO_THROW((HX_CSTRING("U.parseHex() unable to parse hex String ") + cstr));
					}
					else{
						HX_STACK_LINE(2927)
						return_val = default_color;
					}
				}
				HX_STACK_LINE(2927)
				_g10 = return_val;
			}
			HX_STACK_LINE(2927)
			C = _g10;
		}
		HX_STACK_LINE(2929)
		::flixel::addons::ui::FlxUISprite _g11 = ::flixel::addons::ui::FlxUISprite_obj::__new((int)0,(int)0,null());		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(2929)
		fs = _g11;
		HX_STACK_LINE(2930)
		fs->makeGraphic(W,H,C,null(),null());
	}
	HX_STACK_LINE(2933)
	fs->set_resize_point(resize_point);
	HX_STACK_LINE(2934)
	fs->set_resize_ratio(resize_ratio);
	HX_STACK_LINE(2935)
	fs->resize_ratio_axis = resize_ratio_axis;
	HX_STACK_LINE(2937)
	return fs;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadSprite,return )

::String FlxUI_obj::loadScaledSrc( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","loadScaledSrc",0x51d86f8b,"flixel.addons.ui.FlxUI.loadScaledSrc","flixel/addons/ui/FlxUI.hx",2947,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(2948)
	::String src = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("src"),null(),null());		HX_STACK_VAR(src,"src");
	HX_STACK_LINE(2949)
	if ((data->hasNode->resolve(HX_CSTRING("scale")))){
		HX_STACK_LINE(2951)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("scale"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast scaleNode = __it->next();
			{
				HX_STACK_LINE(2953)
				Float ratio = ::flixel::addons::ui::U_obj::xml_f(scaleNode->x,HX_CSTRING("screen_ratio"),(int)-1);		HX_STACK_VAR(ratio,"ratio");
				HX_STACK_LINE(2954)
				Float tolerance = ::flixel::addons::ui::U_obj::xml_f(scaleNode->x,HX_CSTRING("tolerance"),0.1);		HX_STACK_VAR(tolerance,"tolerance");
				HX_STACK_LINE(2955)
				Float actualRatio = (Float(::flixel::FlxG_obj::width) / Float(::flixel::FlxG_obj::height));		HX_STACK_VAR(actualRatio,"actualRatio");
				struct _Function_3_1{
					inline static bool Block( Float &tolerance,Float &ratio,Float &actualRatio){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI.hx",2956,0xf354486a)
						{
							struct _Function_4_1{
								inline static bool Block( Float &tolerance,Float &ratio,Float &actualRatio){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI.hx",2956,0xf354486a)
									{
										HX_STACK_LINE(2956)
										Float _g = ::Math_obj::abs((ratio - actualRatio));		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(2956)
										return (_g <= tolerance);
									}
									return null();
								}
							};
							HX_STACK_LINE(2956)
							return (  (((ratio > (int)0))) ? bool(_Function_4_1::Block(tolerance,ratio,actualRatio)) : bool(false) );
						}
						return null();
					}
				};
				HX_STACK_LINE(2956)
				if (((  ((!(((ratio < (int)0))))) ? bool(_Function_3_1::Block(tolerance,ratio,actualRatio)) : bool(true) ))){
					HX_STACK_LINE(2959)
					::String suffix = ::flixel::addons::ui::U_obj::xml_str(scaleNode->x,HX_CSTRING("suffix"),null(),null());		HX_STACK_VAR(suffix,"suffix");
					HX_STACK_LINE(2960)
					::String srcSuffix = (src + suffix);		HX_STACK_VAR(srcSuffix,"srcSuffix");
					HX_STACK_LINE(2962)
					Float _g1 = this->_loadWidth(scaleNode,(int)-1,null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(2962)
					Float _g2 = this->_loadHeight(scaleNode,(int)-1,null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(2962)
					::String returnSrc = ::flixel::addons::ui::U_obj::loadScaledImage(srcSuffix,_g1,_g2);		HX_STACK_VAR(returnSrc,"returnSrc");
					HX_STACK_LINE(2963)
					if (((returnSrc != null()))){
						HX_STACK_LINE(2965)
						return returnSrc;
					}
					HX_STACK_LINE(2967)
					break;
				}
			}
;
		}
	}
	HX_STACK_LINE(2971)
	::Xml data1 = data->x;		HX_STACK_VAR(data1,"data1");
	HX_STACK_LINE(2971)
	bool test = true;		HX_STACK_VAR(test,"test");
	HX_STACK_LINE(2971)
	::String str = HX_CSTRING("");		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(2971)
	::String _g3 = data1->get(HX_CSTRING("src"));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(2971)
	if (((_g3 != null()))){
		HX_STACK_LINE(2971)
		::String _g4 = data1->get(HX_CSTRING("src"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(2971)
		str = _g4;
		HX_STACK_LINE(2971)
		if (((bool((str == HX_CSTRING(""))) || bool((str == null()))))){
			HX_STACK_LINE(2971)
			str = HX_CSTRING("");
		}
		else{
			HX_STACK_LINE(2971)
			::String _g5 = ::flixel::addons::ui::U_obj::gfx(str,null(),null(),null(),null(),null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(2971)
			str = _g5;
			HX_STACK_LINE(2971)
			if ((test)){
				HX_STACK_LINE(2971)
				try
				{
				HX_STACK_CATCHABLE(::String, 0);
				{
					HX_STACK_LINE(2971)
					::openfl::_v2::display::BitmapData testbmp = ::openfl::_v2::Assets_obj::getBitmapData(str,null());		HX_STACK_VAR(testbmp,"testbmp");
					HX_STACK_LINE(2971)
					if (((testbmp == null()))){
						HX_STACK_LINE(2971)
						HX_STACK_DO_THROW(HX_CSTRING("couldn't load bmp \"src\""));
					}
					HX_STACK_LINE(2971)
					testbmp = null();
				}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::String >() ){
						HX_STACK_BEGIN_CATCH
						::String msg = __e;{
							HX_STACK_LINE(2971)
							Dynamic();
						}
					}
					else {
					    HX_STACK_DO_THROW(__e);
					}
				}
			}
		}
	}
	HX_STACK_LINE(2971)
	return str;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,loadScaledSrc,return )

int FlxUI_obj::thisWidth( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","thisWidth",0xcbb0796f,"flixel.addons.ui.FlxUI.thisWidth","flixel/addons/ui/FlxUI.hx",2984,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2984)
	return ::flixel::FlxG_obj::width;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUI_obj,thisWidth,return )

int FlxUI_obj::thisHeight( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","thisHeight",0x2509405e,"flixel.addons.ui.FlxUI.thisHeight","flixel/addons/ui/FlxUI.hx",2992,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2992)
	return ::flixel::FlxG_obj::height;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUI_obj,thisHeight,return )

Float FlxUI_obj::_getAnchorPos( ::flixel::addons::ui::interfaces::IFlxUIWidget thing,::String axis,::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_getAnchorPos",0xe6674faf,"flixel.addons.ui.FlxUI._getAnchorPos","flixel/addons/ui/FlxUI.hx",2998,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(thing,"thing")
	HX_STACK_ARG(axis,"axis")
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(2999)
	::String _switch_29 = (str);
	if (  ( _switch_29==HX_CSTRING(""))){
		HX_STACK_LINE(3000)
		return (int)0;
	}
	else if (  ( _switch_29==HX_CSTRING("left"))){
		HX_STACK_LINE(3001)
		return (int)0;
	}
	else if (  ( _switch_29==HX_CSTRING("right"))){
		HX_STACK_LINE(3002)
		return this->thisWidth();
	}
	else if (  ( _switch_29==HX_CSTRING("center"))){
		HX_STACK_LINE(3004)
		if (((axis == HX_CSTRING("x")))){
			HX_STACK_LINE(3004)
			int _g = this->thisWidth();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(3004)
			return (Float(_g) / Float((int)2));
		}
		else{
			HX_STACK_LINE(3005)
			if (((axis == HX_CSTRING("y")))){
				HX_STACK_LINE(3005)
				int _g1 = this->thisHeight();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(3005)
				return (Float(_g1) / Float((int)2));
			}
		}
	}
	else if (  ( _switch_29==HX_CSTRING("top")) ||  ( _switch_29==HX_CSTRING("up"))){
		HX_STACK_LINE(3006)
		return (int)0;
	}
	else if (  ( _switch_29==HX_CSTRING("bottom")) ||  ( _switch_29==HX_CSTRING("down"))){
		HX_STACK_LINE(3007)
		return this->thisHeight();
	}
	else  {
		HX_STACK_LINE(3009)
		Float perc = ::flixel::addons::ui::U_obj::perc_to_float(str);		HX_STACK_VAR(perc,"perc");
		HX_STACK_LINE(3010)
		if ((!(::Math_obj::isNaN(perc)))){
			HX_STACK_LINE(3011)
			if (((axis == HX_CSTRING("x")))){
				HX_STACK_LINE(3012)
				int _g2 = this->thisWidth();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(3012)
				return (perc * _g2);
			}
			else{
				HX_STACK_LINE(3013)
				if (((axis == HX_CSTRING("y")))){
					HX_STACK_LINE(3014)
					int _g3 = this->thisHeight();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(3014)
					return (perc * _g3);
				}
			}
		}
		else{
			HX_STACK_LINE(3017)
			::EReg r = ::EReg_obj::__new(HX_CSTRING("[\\w]+\\.[\\w]+"),HX_CSTRING(""));		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(3018)
			::String property = HX_CSTRING("");		HX_STACK_VAR(property,"property");
			HX_STACK_LINE(3020)
			if ((r->match(str))){
				HX_STACK_LINE(3021)
				::String wh = HX_CSTRING("");		HX_STACK_VAR(wh,"wh");
				HX_STACK_LINE(3022)
				if (((axis == HX_CSTRING("x")))){
					HX_STACK_LINE(3022)
					wh = HX_CSTRING("w");
				}
				HX_STACK_LINE(3023)
				if (((axis == HX_CSTRING("y")))){
					HX_STACK_LINE(3023)
					wh = HX_CSTRING("h");
				}
				HX_STACK_LINE(3024)
				Float assetValue = this->_getStretch((int)1,wh,str);		HX_STACK_VAR(assetValue,"assetValue");
				HX_STACK_LINE(3025)
				return assetValue;
			}
		}
	}
;
;
	HX_STACK_LINE(3029)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,_getAnchorPos,return )

::flixel::addons::ui::Rounding FlxUI_obj::getRound( ::haxe::xml::Fast node){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getRound",0x4de5ab11,"flixel.addons.ui.FlxUI.getRound","flixel/addons/ui/FlxUI.hx",3032,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(node,"node")
	HX_STACK_LINE(3033)
	::String roundStr = ::flixel::addons::ui::U_obj::xml_str(node->x,HX_CSTRING("round"),true,HX_CSTRING(""));		HX_STACK_VAR(roundStr,"roundStr");
	HX_STACK_LINE(3034)
	::String _switch_30 = (roundStr);
	if (  ( _switch_30==HX_CSTRING("floor")) ||  ( _switch_30==HX_CSTRING("-1")) ||  ( _switch_30==HX_CSTRING("down"))){
		HX_STACK_LINE(3036)
		return ::flixel::addons::ui::Rounding_obj::Floor;
	}
	else if (  ( _switch_30==HX_CSTRING("up")) ||  ( _switch_30==HX_CSTRING("1")) ||  ( _switch_30==HX_CSTRING("ceil")) ||  ( _switch_30==HX_CSTRING("ceiling"))){
		HX_STACK_LINE(3038)
		return ::flixel::addons::ui::Rounding_obj::Ceil;
	}
	else if (  ( _switch_30==HX_CSTRING("round")) ||  ( _switch_30==HX_CSTRING("0")) ||  ( _switch_30==HX_CSTRING("true"))){
		HX_STACK_LINE(3040)
		return ::flixel::addons::ui::Rounding_obj::Round;
	}
	HX_STACK_LINE(3042)
	return ::flixel::addons::ui::Rounding_obj::None;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,getRound,return )

Float FlxUI_obj::doRound( Float f,::flixel::addons::ui::Rounding round){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","doRound",0xdf243faa,"flixel.addons.ui.FlxUI.doRound","flixel/addons/ui/FlxUI.hx",3045,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(round,"round")
	HX_STACK_LINE(3046)
	switch( (int)(round->__Index())){
		case (int)3: {
			HX_STACK_LINE(3047)
			return f;
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(3048)
			return ::Math_obj::floor(f);
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(3049)
			return ::Math_obj::round(f);
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(3050)
			return ::Math_obj::ceil(f);
		}
		;break;
	}
	HX_STACK_LINE(3052)
	return f;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,doRound,return )

Dynamic FlxUI_obj::calcMaxMinSize( ::haxe::xml::Fast data,Dynamic width,Dynamic height){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","calcMaxMinSize",0x437b661d,"flixel.addons.ui.FlxUI.calcMaxMinSize","flixel/addons/ui/FlxUI.hx",3055,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(3056)
	Float min_w = (int)0;		HX_STACK_VAR(min_w,"min_w");
	HX_STACK_LINE(3057)
	Float min_h = (int)0;		HX_STACK_VAR(min_h,"min_h");
	HX_STACK_LINE(3058)
	Float max_w = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(max_w,"max_w");
	HX_STACK_LINE(3059)
	Float max_h = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(max_h,"max_h");
	HX_STACK_LINE(3060)
	Float temp_min_w = (int)0;		HX_STACK_VAR(temp_min_w,"temp_min_w");
	HX_STACK_LINE(3061)
	Float temp_min_h = (int)0;		HX_STACK_VAR(temp_min_h,"temp_min_h");
	HX_STACK_LINE(3062)
	Float temp_max_w = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(temp_max_w,"temp_max_w");
	HX_STACK_LINE(3063)
	Float temp_max_h = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(temp_max_h,"temp_max_h");
	HX_STACK_LINE(3065)
	::flixel::addons::ui::Rounding round = ::flixel::addons::ui::Rounding_obj::None;		HX_STACK_VAR(round,"round");
	HX_STACK_LINE(3067)
	if ((data->hasNode->resolve(HX_CSTRING("exact_size")))){
		HX_STACK_LINE(3068)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("exact_size"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast exactNode = __it->next();
			{
				HX_STACK_LINE(3069)
				::String exact_w_str = ::flixel::addons::ui::U_obj::xml_str(exactNode->x,HX_CSTRING("width"),null(),null());		HX_STACK_VAR(exact_w_str,"exact_w_str");
				HX_STACK_LINE(3070)
				::String exact_h_str = ::flixel::addons::ui::U_obj::xml_str(exactNode->x,HX_CSTRING("height"),null(),null());		HX_STACK_VAR(exact_h_str,"exact_h_str");
				HX_STACK_LINE(3071)
				::flixel::addons::ui::Rounding _g = this->getRound(exactNode);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(3071)
				round = _g;
				HX_STACK_LINE(3072)
				Float _g1 = this->_getDataSize(HX_CSTRING("w"),exact_w_str,(int)0);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(3072)
				Float _g2 = this->doRound(_g1,round);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(3072)
				min_w = _g2;
				HX_STACK_LINE(3073)
				Float _g3 = this->_getDataSize(HX_CSTRING("h"),exact_h_str,(int)0);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(3073)
				Float _g4 = this->doRound(_g3,round);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(3073)
				min_h = _g4;
				HX_STACK_LINE(3074)
				Float _g5 = this->doRound(min_w,round);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(3074)
				max_w = _g5;
				HX_STACK_LINE(3075)
				Float _g6 = this->doRound(min_h,round);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(3075)
				max_h = _g6;
			}
;
		}
	}
	else{
		HX_STACK_LINE(3077)
		if ((data->hasNode->resolve(HX_CSTRING("min_size")))){
			HX_STACK_LINE(3078)
			for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("min_size"))->iterator());  __it->hasNext(); ){
				::haxe::xml::Fast minNode = __it->next();
				{
					HX_STACK_LINE(3079)
					::String min_w_str = ::flixel::addons::ui::U_obj::xml_str(minNode->x,HX_CSTRING("width"),null(),null());		HX_STACK_VAR(min_w_str,"min_w_str");
					HX_STACK_LINE(3080)
					::String min_h_str = ::flixel::addons::ui::U_obj::xml_str(minNode->x,HX_CSTRING("height"),null(),null());		HX_STACK_VAR(min_h_str,"min_h_str");
					HX_STACK_LINE(3081)
					::flixel::addons::ui::Rounding _g7 = this->getRound(minNode);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(3081)
					round = _g7;
					HX_STACK_LINE(3082)
					Float _g8 = this->_getDataSize(HX_CSTRING("w"),min_w_str,(int)0);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(3082)
					Float _g9 = this->doRound(_g8,round);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(3082)
					temp_min_w = _g9;
					HX_STACK_LINE(3083)
					Float _g10 = this->_getDataSize(HX_CSTRING("h"),min_h_str,(int)0);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(3083)
					Float _g11 = this->doRound(_g10,round);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(3083)
					temp_min_h = _g11;
					HX_STACK_LINE(3084)
					if (((temp_min_w > min_w))){
						HX_STACK_LINE(3085)
						min_w = temp_min_w;
					}
					HX_STACK_LINE(3087)
					if (((temp_min_h > min_h))){
						HX_STACK_LINE(3088)
						min_h = temp_min_h;
					}
				}
;
			}
		}
		else{
			HX_STACK_LINE(3091)
			if ((data->hasNode->resolve(HX_CSTRING("max_size")))){
				HX_STACK_LINE(3092)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("max_size"))->iterator());  __it->hasNext(); ){
					::haxe::xml::Fast maxNode = __it->next();
					{
						HX_STACK_LINE(3093)
						::String max_w_str = ::flixel::addons::ui::U_obj::xml_str(maxNode->x,HX_CSTRING("width"),null(),null());		HX_STACK_VAR(max_w_str,"max_w_str");
						HX_STACK_LINE(3094)
						::String max_h_str = ::flixel::addons::ui::U_obj::xml_str(maxNode->x,HX_CSTRING("height"),null(),null());		HX_STACK_VAR(max_h_str,"max_h_str");
						HX_STACK_LINE(3095)
						::flixel::addons::ui::Rounding _g12 = this->getRound(maxNode);		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(3095)
						round = _g12;
						HX_STACK_LINE(3096)
						Float _g13 = this->_getDataSize(HX_CSTRING("w"),max_w_str,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(3096)
						Float _g14 = this->doRound(_g13,round);		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(3096)
						temp_max_w = _g14;
						HX_STACK_LINE(3097)
						Float _g15 = this->_getDataSize(HX_CSTRING("h"),max_h_str,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(3097)
						Float _g16 = this->doRound(_g15,round);		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(3097)
						temp_max_h = _g16;
						HX_STACK_LINE(3098)
						if (((temp_max_w < max_w))){
							HX_STACK_LINE(3099)
							max_w = temp_max_w;
						}
						HX_STACK_LINE(3101)
						if (((temp_max_h < max_h))){
							HX_STACK_LINE(3102)
							max_h = temp_max_h;
						}
					}
;
				}
			}
			else{
				HX_STACK_LINE(3106)
				return null();
			}
		}
	}
	HX_STACK_LINE(3109)
	if (((width != null()))){
		HX_STACK_LINE(3110)
		if (((width > min_w))){
			HX_STACK_LINE(3110)
			min_w = width;
		}
		HX_STACK_LINE(3111)
		if (((width < max_w))){
			HX_STACK_LINE(3111)
			max_w = width;
		}
	}
	HX_STACK_LINE(3113)
	if (((height != null()))){
		HX_STACK_LINE(3114)
		if (((height > min_h))){
			HX_STACK_LINE(3114)
			min_h = height;
		}
		HX_STACK_LINE(3115)
		if (((height < max_h))){
			HX_STACK_LINE(3115)
			max_h = height;
		}
	}
	HX_STACK_LINE(3120)
	if (((max_w <= (int)0))){
		HX_STACK_LINE(3120)
		max_w = ::Math_obj::POSITIVE_INFINITY;
	}
	HX_STACK_LINE(3121)
	if (((max_h <= (int)0))){
		HX_STACK_LINE(3121)
		max_h = ::Math_obj::POSITIVE_INFINITY;
	}
	struct _Function_1_1{
		inline static Dynamic Block( Float &max_w,Float &max_h,Float &min_w,Float &min_h){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI.hx",3123,0xf354486a)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("min_width") , min_w,false);
				__result->Add(HX_CSTRING("min_height") , min_h,false);
				__result->Add(HX_CSTRING("max_width") , max_w,false);
				__result->Add(HX_CSTRING("max_height") , max_h,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(3123)
	return _Function_1_1::Block(max_w,max_h,min_w,min_h);
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,calcMaxMinSize,return )

Float FlxUI_obj::_getDataSize( ::String target,::String str,hx::Null< Float >  __o_default_){
Float default_ = __o_default_.Default(0);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_getDataSize",0xaed2247b,"flixel.addons.ui.FlxUI._getDataSize","flixel/addons/ui/FlxUI.hx",3126,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(default_,"default_")
{
		HX_STACK_LINE(3127)
		if ((::flixel::addons::ui::U_obj::isStrNum(str))){
			HX_STACK_LINE(3128)
			return ::Std_obj::parseFloat(str);
		}
		HX_STACK_LINE(3130)
		Float percf = ::flixel::addons::ui::U_obj::perc_to_float(str);		HX_STACK_VAR(percf,"percf");
		HX_STACK_LINE(3131)
		if ((!(::Math_obj::isNaN(percf)))){
			HX_STACK_LINE(3132)
			::String _switch_31 = (target);
			if (  ( _switch_31==HX_CSTRING("w")) ||  ( _switch_31==HX_CSTRING("width"))){
				HX_STACK_LINE(3133)
				int _g = this->thisWidth();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(3133)
				return (_g * percf);
			}
			else if (  ( _switch_31==HX_CSTRING("h")) ||  ( _switch_31==HX_CSTRING("height"))){
				HX_STACK_LINE(3134)
				int _g1 = this->thisHeight();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(3134)
				return (_g1 * percf);
			}
		}
		else{
			HX_STACK_LINE(3137)
			int _g2 = str.indexOf(HX_CSTRING("stretch:"),null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(3137)
			if (((_g2 == (int)0))){
				HX_STACK_LINE(3138)
				::String _g3 = ::StringTools_obj::replace(str,HX_CSTRING("stretch:"),HX_CSTRING(""));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(3138)
				str = _g3;
				HX_STACK_LINE(3139)
				Array< ::String > arr = str.split(HX_CSTRING(","));		HX_STACK_VAR(arr,"arr");
				HX_STACK_LINE(3140)
				Float stretch_0 = this->_getStretch((int)0,target,arr->__get((int)0));		HX_STACK_VAR(stretch_0,"stretch_0");
				HX_STACK_LINE(3141)
				Float stretch_1 = this->_getStretch((int)1,target,arr->__get((int)1));		HX_STACK_VAR(stretch_1,"stretch_1");
				HX_STACK_LINE(3142)
				if (((bool((stretch_0 != (int)-1)) && bool((stretch_1 != (int)-1))))){
					HX_STACK_LINE(3143)
					return (stretch_1 - stretch_0);
				}
				else{
					HX_STACK_LINE(3145)
					return default_;
				}
			}
			else{
				HX_STACK_LINE(3147)
				int _g4 = str.indexOf(HX_CSTRING("asset:"),null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(3147)
				if (((_g4 == (int)0))){
					HX_STACK_LINE(3148)
					::String _g5 = ::StringTools_obj::replace(str,HX_CSTRING("asset:"),HX_CSTRING(""));		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(3148)
					str = _g5;
					HX_STACK_LINE(3149)
					Float assetValue = this->_getStretch((int)1,target,str);		HX_STACK_VAR(assetValue,"assetValue");
					HX_STACK_LINE(3150)
					return assetValue;
				}
				else{
					HX_STACK_LINE(3152)
					::EReg r = ::EReg_obj::__new(HX_CSTRING("[\\w]+\\.[\\w]+"),HX_CSTRING(""));		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(3153)
					if ((r->match(str))){
						HX_STACK_LINE(3154)
						Float assetValue = this->_getStretch((int)1,target,str);		HX_STACK_VAR(assetValue,"assetValue");
						HX_STACK_LINE(3155)
						return assetValue;
					}
				}
			}
		}
		HX_STACK_LINE(3159)
		return default_;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,_getDataSize,return )

Dynamic FlxUI_obj::_getOperation( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_getOperation",0x2685c1b7,"flixel.addons.ui.FlxUI._getOperation","flixel/addons/ui/FlxUI.hx",3170,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(3171)
	Array< ::String > list = Array_obj< ::String >::__new().Add(HX_CSTRING("+")).Add(HX_CSTRING("-")).Add(HX_CSTRING("*")).Add(HX_CSTRING("/")).Add(HX_CSTRING("^"));		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(3172)
	Array< ::String > temp = null();		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(3174)
	{
		HX_STACK_LINE(3174)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(3174)
		while((true)){
			HX_STACK_LINE(3174)
			if ((!(((_g < list->length))))){
				HX_STACK_LINE(3174)
				break;
			}
			HX_STACK_LINE(3174)
			::String _operator = list->__get(_g);		HX_STACK_VAR(_operator,"operator");
			HX_STACK_LINE(3174)
			++(_g);
			HX_STACK_LINE(3175)
			int _g1 = str.indexOf(_operator,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(3175)
			if (((_g1 != (int)-1))){
				HX_STACK_LINE(3176)
				Array< ::String > _g11 = str.split(_operator);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(3176)
				temp = _g11;
				HX_STACK_LINE(3177)
				if (((bool((temp != null())) && bool((temp->length == (int)2))))){
					HX_STACK_LINE(3178)
					Float f = ::Std_obj::parseFloat(temp->__get((int)1));		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(3179)
					if ((::Math_obj::isNaN(f))){
						HX_STACK_LINE(3181)
						Float _g2 = this->getAssetProperty((int)1,HX_CSTRING(""),temp->__get((int)1));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(3181)
						f = _g2;
					}
					HX_STACK_LINE(3183)
					if (((bool((f == (int)0)) && bool((temp->__get((int)1) != HX_CSTRING("0")))))){
						HX_STACK_LINE(3184)
						return null();
					}
					else{
						HX_STACK_LINE(3186)
						return Dynamic( Array_obj<Dynamic>::__new().Add(temp->__get((int)0)).Add(_operator).Add(f));
					}
				}
			}
		}
	}
	HX_STACK_LINE(3192)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_getOperation,return )

Float FlxUI_obj::_doOperation( Float value,::String _operator,Float operand){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_doOperation",0xf65624d6,"flixel.addons.ui.FlxUI._doOperation","flixel/addons/ui/FlxUI.hx",3195,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(_operator,"operator")
	HX_STACK_ARG(operand,"operand")
	HX_STACK_LINE(3196)
	::String _switch_32 = (_operator);
	if (  ( _switch_32==HX_CSTRING("+"))){
		HX_STACK_LINE(3197)
		return (value + operand);
	}
	else if (  ( _switch_32==HX_CSTRING("-"))){
		HX_STACK_LINE(3198)
		return (value - operand);
	}
	else if (  ( _switch_32==HX_CSTRING("/"))){
		HX_STACK_LINE(3199)
		return (Float(value) / Float(operand));
	}
	else if (  ( _switch_32==HX_CSTRING("*"))){
		HX_STACK_LINE(3200)
		return (value * operand);
	}
	else if (  ( _switch_32==HX_CSTRING("^"))){
		HX_STACK_LINE(3201)
		return ::Math_obj::pow(value,operand);
	}
	HX_STACK_LINE(3203)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,_doOperation,return )

Float FlxUI_obj::_getStretch( int index,::String target,::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_getStretch",0xd40af795,"flixel.addons.ui.FlxUI._getStretch","flixel/addons/ui/FlxUI.hx",3206,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(3207)
	Dynamic arr = null();		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(3209)
	::String _operator = HX_CSTRING("");		HX_STACK_VAR(_operator,"operator");
	HX_STACK_LINE(3210)
	Float operand = (int)0;		HX_STACK_VAR(operand,"operand");
	HX_STACK_LINE(3212)
	Dynamic _g = this->_getOperation(str);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(3212)
	arr = _g;
	HX_STACK_LINE(3214)
	if (((arr != null()))){
		HX_STACK_LINE(3215)
		str = arr->__GetItem((int)0);
		HX_STACK_LINE(3216)
		_operator = arr->__GetItem((int)1);
		HX_STACK_LINE(3217)
		operand = arr->__GetItem((int)2);
	}
	HX_STACK_LINE(3220)
	Float return_val = this->getAssetProperty(index,target,str);		HX_STACK_VAR(return_val,"return_val");
	HX_STACK_LINE(3222)
	if (((bool((return_val != (int)-1)) && bool((_operator != HX_CSTRING("")))))){
		HX_STACK_LINE(3223)
		Float _g1 = this->_doOperation(return_val,_operator,operand);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(3223)
		return_val = _g1;
	}
	HX_STACK_LINE(3226)
	return return_val;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,_getStretch,return )

Float FlxUI_obj::getAssetProperty( int index,::String target,::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getAssetProperty",0xd3eb8c28,"flixel.addons.ui.FlxUI.getAssetProperty","flixel/addons/ui/FlxUI.hx",3229,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(3230)
	::String prop = HX_CSTRING("");		HX_STACK_VAR(prop,"prop");
	HX_STACK_LINE(3232)
	int _g = str.indexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(3232)
	if (((_g != (int)-1))){
		HX_STACK_LINE(3234)
		Array< ::String > arr = null();		HX_STACK_VAR(arr,"arr");
		HX_STACK_LINE(3235)
		Array< ::String > _g1 = str.split(HX_CSTRING("."));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(3235)
		arr = _g1;
		HX_STACK_LINE(3236)
		str = arr->__get((int)0);
		HX_STACK_LINE(3237)
		prop = arr->__get((int)1);
	}
	HX_STACK_LINE(3240)
	::flixel::addons::ui::interfaces::IFlxUIWidget other = this->getAsset(str,null());		HX_STACK_VAR(other,"other");
	HX_STACK_LINE(3242)
	Float return_val = (int)0;		HX_STACK_VAR(return_val,"return_val");
	HX_STACK_LINE(3244)
	if (((other == null()))){
		HX_STACK_LINE(3245)
		::String _switch_33 = (str);
		if (  ( _switch_33==HX_CSTRING("top")) ||  ( _switch_33==HX_CSTRING("up"))){
			HX_STACK_LINE(3246)
			return_val = (int)0;
		}
		else if (  ( _switch_33==HX_CSTRING("bottom")) ||  ( _switch_33==HX_CSTRING("down"))){
			HX_STACK_LINE(3247)
			int _g2 = this->thisHeight();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(3247)
			return_val = _g2;
		}
		else if (  ( _switch_33==HX_CSTRING("left"))){
			HX_STACK_LINE(3248)
			return_val = (int)0;
		}
		else if (  ( _switch_33==HX_CSTRING("right"))){
			HX_STACK_LINE(3249)
			int _g3 = this->thisWidth();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(3249)
			return_val = _g3;
		}
		else  {
			HX_STACK_LINE(3251)
			if ((::flixel::addons::ui::U_obj::isStrNum(str))){
				HX_STACK_LINE(3252)
				Float _g4 = ::Std_obj::parseFloat(str);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(3252)
				return_val = _g4;
			}
			else{
				HX_STACK_LINE(3254)
				return_val = (int)-1;
			}
		}
;
;
	}
	else{
		HX_STACK_LINE(3258)
		::String _switch_34 = (target);
		if (  ( _switch_34==HX_CSTRING("w")) ||  ( _switch_34==HX_CSTRING("width"))){
			HX_STACK_LINE(3260)
			if (((prop == HX_CSTRING("")))){
				HX_STACK_LINE(3261)
				if (((index == (int)0))){
					HX_STACK_LINE(3261)
					Float _g5 = other->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(3261)
					Float _g6 = (other->__Field(HX_CSTRING("x"),true) + _g5);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(3261)
					return_val = _g6;
				}
				HX_STACK_LINE(3262)
				if (((index == (int)1))){
					HX_STACK_LINE(3262)
					return_val = other->__Field(HX_CSTRING("x"),true);
				}
			}
			else{
				HX_STACK_LINE(3264)
				::String _switch_35 = (prop);
				if (  ( _switch_35==HX_CSTRING("top")) ||  ( _switch_35==HX_CSTRING("up")) ||  ( _switch_35==HX_CSTRING("y"))){
					HX_STACK_LINE(3265)
					return_val = other->__Field(HX_CSTRING("y"),true);
				}
				else if (  ( _switch_35==HX_CSTRING("bottom")) ||  ( _switch_35==HX_CSTRING("down"))){
					HX_STACK_LINE(3266)
					Float _g7 = other->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(3266)
					Float _g8 = (other->__Field(HX_CSTRING("y"),true) + _g7);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(3266)
					return_val = _g8;
				}
				else if (  ( _switch_35==HX_CSTRING("right"))){
					HX_STACK_LINE(3267)
					Float _g9 = other->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(3267)
					Float _g10 = (other->__Field(HX_CSTRING("x"),true) + _g9);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(3267)
					return_val = _g10;
				}
				else if (  ( _switch_35==HX_CSTRING("left")) ||  ( _switch_35==HX_CSTRING("x"))){
					HX_STACK_LINE(3268)
					return_val = other->__Field(HX_CSTRING("x"),true);
				}
				else if (  ( _switch_35==HX_CSTRING("center"))){
					HX_STACK_LINE(3269)
					Float _g11 = other->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(3269)
					Float _g12 = (Float(_g11) / Float((int)2));		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(3269)
					Float _g13 = (other->__Field(HX_CSTRING("x"),true) + _g12);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(3269)
					return_val = _g13;
				}
				else if (  ( _switch_35==HX_CSTRING("width"))){
					HX_STACK_LINE(3270)
					Float _g14 = other->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(3270)
					return_val = _g14;
				}
				else if (  ( _switch_35==HX_CSTRING("height"))){
					HX_STACK_LINE(3271)
					Float _g15 = other->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(3271)
					return_val = _g15;
				}
				else if (  ( _switch_35==HX_CSTRING("halfheight"))){
					HX_STACK_LINE(3272)
					Float _g16 = other->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(3272)
					Float _g17 = (Float(_g16) / Float((int)2));		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(3272)
					return_val = _g17;
				}
				else if (  ( _switch_35==HX_CSTRING("halfwidth"))){
					HX_STACK_LINE(3273)
					Float _g18 = other->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(3273)
					Float _g19 = (Float(_g18) / Float((int)2));		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(3273)
					return_val = _g19;
				}
			}
		}
		else if (  ( _switch_34==HX_CSTRING("h")) ||  ( _switch_34==HX_CSTRING("height"))){
			HX_STACK_LINE(3277)
			if (((prop == HX_CSTRING("")))){
				HX_STACK_LINE(3278)
				if (((index == (int)0))){
					HX_STACK_LINE(3278)
					Float _g20 = other->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g20,"_g20");
					HX_STACK_LINE(3278)
					Float _g21 = (other->__Field(HX_CSTRING("y"),true) + _g20);		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(3278)
					return_val = _g21;
				}
				HX_STACK_LINE(3279)
				if (((index == (int)1))){
					HX_STACK_LINE(3279)
					return_val = other->__Field(HX_CSTRING("y"),true);
				}
			}
			else{
				HX_STACK_LINE(3281)
				::String _switch_36 = (prop);
				if (  ( _switch_36==HX_CSTRING("top")) ||  ( _switch_36==HX_CSTRING("up")) ||  ( _switch_36==HX_CSTRING("y"))){
					HX_STACK_LINE(3282)
					return_val = other->__Field(HX_CSTRING("y"),true);
				}
				else if (  ( _switch_36==HX_CSTRING("bottom")) ||  ( _switch_36==HX_CSTRING("down"))){
					HX_STACK_LINE(3283)
					Float _g22 = other->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(3283)
					Float _g23 = (other->__Field(HX_CSTRING("y"),true) + _g22);		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(3283)
					return_val = _g23;
				}
				else if (  ( _switch_36==HX_CSTRING("right"))){
					HX_STACK_LINE(3284)
					Float _g24 = other->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g24,"_g24");
					HX_STACK_LINE(3284)
					Float _g25 = (other->__Field(HX_CSTRING("x"),true) + _g24);		HX_STACK_VAR(_g25,"_g25");
					HX_STACK_LINE(3284)
					return_val = _g25;
				}
				else if (  ( _switch_36==HX_CSTRING("left")) ||  ( _switch_36==HX_CSTRING("x"))){
					HX_STACK_LINE(3285)
					return_val = other->__Field(HX_CSTRING("x"),true);
				}
				else if (  ( _switch_36==HX_CSTRING("center"))){
					HX_STACK_LINE(3286)
					Float _g26 = other->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g26,"_g26");
					HX_STACK_LINE(3286)
					Float _g27 = (Float(_g26) / Float((int)2));		HX_STACK_VAR(_g27,"_g27");
					HX_STACK_LINE(3286)
					Float _g28 = (other->__Field(HX_CSTRING("y"),true) + _g27);		HX_STACK_VAR(_g28,"_g28");
					HX_STACK_LINE(3286)
					return_val = _g28;
				}
				else if (  ( _switch_36==HX_CSTRING("height"))){
					HX_STACK_LINE(3287)
					Float _g29 = other->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g29,"_g29");
					HX_STACK_LINE(3287)
					return_val = _g29;
				}
				else if (  ( _switch_36==HX_CSTRING("width"))){
					HX_STACK_LINE(3288)
					Float _g30 = other->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g30,"_g30");
					HX_STACK_LINE(3288)
					return_val = _g30;
				}
				else if (  ( _switch_36==HX_CSTRING("halfheight"))){
					HX_STACK_LINE(3289)
					Float _g31 = other->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g31,"_g31");
					HX_STACK_LINE(3289)
					Float _g32 = (Float(_g31) / Float((int)2));		HX_STACK_VAR(_g32,"_g32");
					HX_STACK_LINE(3289)
					return_val = _g32;
				}
				else if (  ( _switch_36==HX_CSTRING("halfwidth"))){
					HX_STACK_LINE(3290)
					Float _g33 = other->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g33,"_g33");
					HX_STACK_LINE(3290)
					Float _g34 = (Float(_g33) / Float((int)2));		HX_STACK_VAR(_g34,"_g34");
					HX_STACK_LINE(3290)
					return_val = _g34;
				}
			}
		}
		else  {
			HX_STACK_LINE(3294)
			::String _switch_37 = (prop);
			if (  ( _switch_37==HX_CSTRING("top")) ||  ( _switch_37==HX_CSTRING("up")) ||  ( _switch_37==HX_CSTRING("y"))){
				HX_STACK_LINE(3295)
				return_val = other->__Field(HX_CSTRING("y"),true);
			}
			else if (  ( _switch_37==HX_CSTRING("bottom")) ||  ( _switch_37==HX_CSTRING("down"))){
				HX_STACK_LINE(3296)
				Float _g35 = other->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g35,"_g35");
				HX_STACK_LINE(3296)
				Float _g36 = (other->__Field(HX_CSTRING("y"),true) + _g35);		HX_STACK_VAR(_g36,"_g36");
				HX_STACK_LINE(3296)
				return_val = _g36;
			}
			else if (  ( _switch_37==HX_CSTRING("right"))){
				HX_STACK_LINE(3297)
				Float _g37 = other->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g37,"_g37");
				HX_STACK_LINE(3297)
				Float _g38 = (other->__Field(HX_CSTRING("x"),true) + _g37);		HX_STACK_VAR(_g38,"_g38");
				HX_STACK_LINE(3297)
				return_val = _g38;
			}
			else if (  ( _switch_37==HX_CSTRING("left")) ||  ( _switch_37==HX_CSTRING("x"))){
				HX_STACK_LINE(3298)
				return_val = other->__Field(HX_CSTRING("x"),true);
			}
			else if (  ( _switch_37==HX_CSTRING("centery"))){
				HX_STACK_LINE(3299)
				Float _g39 = other->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g39,"_g39");
				HX_STACK_LINE(3299)
				Float _g40 = (Float(_g39) / Float((int)2));		HX_STACK_VAR(_g40,"_g40");
				HX_STACK_LINE(3299)
				Float _g41 = (other->__Field(HX_CSTRING("y"),true) + _g40);		HX_STACK_VAR(_g41,"_g41");
				HX_STACK_LINE(3299)
				return_val = _g41;
			}
			else if (  ( _switch_37==HX_CSTRING("centerx"))){
				HX_STACK_LINE(3300)
				Float _g42 = other->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g42,"_g42");
				HX_STACK_LINE(3300)
				Float _g43 = (Float(_g42) / Float((int)2));		HX_STACK_VAR(_g43,"_g43");
				HX_STACK_LINE(3300)
				Float _g44 = (other->__Field(HX_CSTRING("x"),true) + _g43);		HX_STACK_VAR(_g44,"_g44");
				HX_STACK_LINE(3300)
				return_val = _g44;
			}
			else if (  ( _switch_37==HX_CSTRING("height"))){
				HX_STACK_LINE(3301)
				Float _g45 = other->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g45,"_g45");
				HX_STACK_LINE(3301)
				return_val = _g45;
			}
			else if (  ( _switch_37==HX_CSTRING("width"))){
				HX_STACK_LINE(3302)
				Float _g46 = other->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g46,"_g46");
				HX_STACK_LINE(3302)
				return_val = _g46;
			}
			else if (  ( _switch_37==HX_CSTRING("halfheight"))){
				HX_STACK_LINE(3303)
				Float _g47 = other->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g47,"_g47");
				HX_STACK_LINE(3303)
				Float _g48 = (Float(_g47) / Float((int)2));		HX_STACK_VAR(_g48,"_g48");
				HX_STACK_LINE(3303)
				return_val = _g48;
			}
			else if (  ( _switch_37==HX_CSTRING("halfwidth"))){
				HX_STACK_LINE(3304)
				Float _g49 = other->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g49,"_g49");
				HX_STACK_LINE(3304)
				Float _g50 = (Float(_g49) / Float((int)2));		HX_STACK_VAR(_g50,"_g50");
				HX_STACK_LINE(3304)
				return_val = _g50;
			}
		}
;
;
	}
	HX_STACK_LINE(3308)
	return return_val;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,getAssetProperty,return )

Void FlxUI_obj::_loadPosition( ::haxe::xml::Fast data,::flixel::addons::ui::interfaces::IFlxUIWidget thing){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadPosition",0xfb522df5,"flixel.addons.ui.FlxUI._loadPosition","flixel/addons/ui/FlxUI.hx",3311,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(thing,"thing")
		HX_STACK_LINE(3312)
		Float X;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(3312)
		{
			HX_STACK_LINE(3312)
			Float default_ = (int)0;		HX_STACK_VAR(default_,"default_");
			HX_STACK_LINE(3312)
			X = this->_loadWidth(data,default_,HX_CSTRING("x"));
		}
		HX_STACK_LINE(3313)
		Float Y;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(3313)
		{
			HX_STACK_LINE(3313)
			Float default_ = (int)0;		HX_STACK_VAR(default_,"default_");
			HX_STACK_LINE(3313)
			Y = this->_loadHeight(data,default_,HX_CSTRING("y"));
		}
		HX_STACK_LINE(3318)
		bool ctrX = ::flixel::addons::ui::U_obj::xml_bool(data->x,HX_CSTRING("center_x"),null());		HX_STACK_VAR(ctrX,"ctrX");
		HX_STACK_LINE(3319)
		bool ctrY = ::flixel::addons::ui::U_obj::xml_bool(data->x,HX_CSTRING("center_y"),null());		HX_STACK_VAR(ctrY,"ctrY");
		HX_STACK_LINE(3321)
		::String center_on = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("center_on"),null(),null());		HX_STACK_VAR(center_on,"center_on");
		HX_STACK_LINE(3322)
		::String center_on_x = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("center_on_x"),null(),null());		HX_STACK_VAR(center_on_x,"center_on_x");
		HX_STACK_LINE(3323)
		::String center_on_y = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("center_on_y"),null(),null());		HX_STACK_VAR(center_on_y,"center_on_y");
		HX_STACK_LINE(3325)
		::String anchor_x_str = HX_CSTRING("");		HX_STACK_VAR(anchor_x_str,"anchor_x_str");
		HX_STACK_LINE(3326)
		::String anchor_y_str = HX_CSTRING("");		HX_STACK_VAR(anchor_y_str,"anchor_y_str");
		HX_STACK_LINE(3327)
		Float anchor_x = (int)0;		HX_STACK_VAR(anchor_x,"anchor_x");
		HX_STACK_LINE(3328)
		Float anchor_y = (int)0;		HX_STACK_VAR(anchor_y,"anchor_y");
		HX_STACK_LINE(3329)
		::String anchor_x_flush = HX_CSTRING("");		HX_STACK_VAR(anchor_x_flush,"anchor_x_flush");
		HX_STACK_LINE(3330)
		::String anchor_y_flush = HX_CSTRING("");		HX_STACK_VAR(anchor_y_flush,"anchor_y_flush");
		HX_STACK_LINE(3332)
		if ((data->hasNode->resolve(HX_CSTRING("anchor")))){
			HX_STACK_LINE(3333)
			::String _g = ::flixel::addons::ui::U_obj::xml_str(data->node->resolve(HX_CSTRING("anchor"))->x,HX_CSTRING("x"),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(3333)
			anchor_x_str = _g;
			HX_STACK_LINE(3334)
			::String _g1 = ::flixel::addons::ui::U_obj::xml_str(data->node->resolve(HX_CSTRING("anchor"))->x,HX_CSTRING("y"),null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(3334)
			anchor_y_str = _g1;
			HX_STACK_LINE(3336)
			::haxe::xml::Fast _g2 = data->node->resolve(HX_CSTRING("anchor"));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(3336)
			::flixel::addons::ui::Rounding rounding = this->getRound(_g2);		HX_STACK_VAR(rounding,"rounding");
			HX_STACK_LINE(3338)
			Float _g3 = this->_getAnchorPos(thing,HX_CSTRING("x"),anchor_x_str);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(3338)
			anchor_x = _g3;
			HX_STACK_LINE(3339)
			Float _g4 = this->_getAnchorPos(thing,HX_CSTRING("y"),anchor_y_str);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(3339)
			anchor_y = _g4;
			HX_STACK_LINE(3341)
			Float _g5 = this->doRound(anchor_x,rounding);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(3341)
			anchor_x = _g5;
			HX_STACK_LINE(3342)
			Float _g6 = this->doRound(anchor_y,rounding);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(3342)
			anchor_y = _g6;
			HX_STACK_LINE(3344)
			::String _g7 = ::flixel::addons::ui::U_obj::xml_str(data->node->resolve(HX_CSTRING("anchor"))->x,HX_CSTRING("x-flush"),true,null());		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(3344)
			anchor_x_flush = _g7;
			HX_STACK_LINE(3345)
			::String _g8 = ::flixel::addons::ui::U_obj::xml_str(data->node->resolve(HX_CSTRING("anchor"))->x,HX_CSTRING("y-flush"),true,null());		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(3345)
			anchor_y_flush = _g8;
		}
		HX_STACK_LINE(3349)
		if (((bool((anchor_x_str != HX_CSTRING(""))) || bool((anchor_y_str != HX_CSTRING("")))))){
			HX_STACK_LINE(3350)
			::String _switch_38 = (anchor_x_flush);
			if (  ( _switch_38==HX_CSTRING("left"))){
			}
			else if (  ( _switch_38==HX_CSTRING("right"))){
				HX_STACK_LINE(3352)
				Float _g9 = thing->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(3352)
				Float _g10 = (anchor_x - _g9);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(3352)
				anchor_x = _g10;
			}
			else if (  ( _switch_38==HX_CSTRING("center"))){
				HX_STACK_LINE(3353)
				Float _g11 = thing->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(3353)
				Float _g12 = (Float(_g11) / Float((int)2));		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(3353)
				Float _g13 = (anchor_x - _g12);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(3353)
				anchor_x = _g13;
			}
			HX_STACK_LINE(3355)
			::String _switch_39 = (anchor_y_flush);
			if (  ( _switch_39==HX_CSTRING("up")) ||  ( _switch_39==HX_CSTRING("top"))){
			}
			else if (  ( _switch_39==HX_CSTRING("down")) ||  ( _switch_39==HX_CSTRING("bottom"))){
				HX_STACK_LINE(3357)
				Float _g14 = thing->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(3357)
				Float _g15 = (anchor_y - _g14);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(3357)
				anchor_y = _g15;
			}
			else if (  ( _switch_39==HX_CSTRING("center"))){
				HX_STACK_LINE(3358)
				Float _g16 = thing->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(3358)
				Float _g17 = (Float(_g16) / Float((int)2));		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(3358)
				Float _g18 = (anchor_y - _g17);		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(3358)
				anchor_y = _g18;
			}
			HX_STACK_LINE(3361)
			if (((anchor_x_str != HX_CSTRING("")))){
				HX_STACK_LINE(3362)
				thing->__Field(HX_CSTRING("set_x"),true)(anchor_x);
			}
			HX_STACK_LINE(3364)
			if (((anchor_y_str != HX_CSTRING("")))){
				HX_STACK_LINE(3365)
				thing->__Field(HX_CSTRING("set_y"),true)(anchor_y);
			}
		}
		HX_STACK_LINE(3371)
		if (((bool(ctrX) || bool(ctrY)))){
			HX_STACK_LINE(3372)
			if ((ctrX)){
				HX_STACK_LINE(3372)
				Float _g19 = thing->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(3372)
				Float _g20 = (::flixel::FlxG_obj::width - _g19);		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(3372)
				Float _g21 = (Float(_g20) / Float((int)2));		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(3372)
				thing->__Field(HX_CSTRING("set_x"),true)(_g21);
			}
			HX_STACK_LINE(3372)
			if ((ctrY)){
				HX_STACK_LINE(3372)
				Float _g22 = thing->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(3372)
				Float _g23 = (::flixel::FlxG_obj::height - _g22);		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(3372)
				Float _g24 = (Float(_g23) / Float((int)2));		HX_STACK_VAR(_g24,"_g24");
				HX_STACK_LINE(3372)
				thing->__Field(HX_CSTRING("set_y"),true)(_g24);
			}
			HX_STACK_LINE(3372)
			thing;
		}
		HX_STACK_LINE(3376)
		if (((center_on != HX_CSTRING("")))){
			HX_STACK_LINE(3377)
			::flixel::addons::ui::interfaces::IFlxUIWidget other = this->getAsset(center_on,null());		HX_STACK_VAR(other,"other");
			HX_STACK_LINE(3378)
			if (((other != null()))){
				HX_STACK_LINE(3379)
				::flixel::FlxObject fb1;		HX_STACK_VAR(fb1,"fb1");
				HX_STACK_LINE(3379)
				fb1 = hx::TCast< flixel::FlxObject >::cast(other);
				HX_STACK_LINE(3379)
				::flixel::FlxObject fb2;		HX_STACK_VAR(fb2,"fb2");
				HX_STACK_LINE(3379)
				fb2 = hx::TCast< flixel::FlxObject >::cast(thing);
				HX_STACK_LINE(3379)
				bool centerX = true;		HX_STACK_VAR(centerX,"centerX");
				HX_STACK_LINE(3379)
				bool centerY = true;		HX_STACK_VAR(centerY,"centerY");
				HX_STACK_LINE(3379)
				if ((centerX)){
					HX_STACK_LINE(3379)
					Float _g25 = fb1->get_width();		HX_STACK_VAR(_g25,"_g25");
					HX_STACK_LINE(3379)
					Float _g26 = fb2->get_width();		HX_STACK_VAR(_g26,"_g26");
					HX_STACK_LINE(3379)
					Float _g27 = (_g25 - _g26);		HX_STACK_VAR(_g27,"_g27");
					HX_STACK_LINE(3379)
					Float _g28 = (Float(_g27) / Float((int)2));		HX_STACK_VAR(_g28,"_g28");
					HX_STACK_LINE(3379)
					Float _g29 = (fb1->x + _g28);		HX_STACK_VAR(_g29,"_g29");
					HX_STACK_LINE(3379)
					fb2->set_x(_g29);
				}
				HX_STACK_LINE(3379)
				if ((centerY)){
					HX_STACK_LINE(3379)
					Float _g30 = fb1->get_height();		HX_STACK_VAR(_g30,"_g30");
					HX_STACK_LINE(3379)
					Float _g31 = fb2->get_height();		HX_STACK_VAR(_g31,"_g31");
					HX_STACK_LINE(3379)
					Float _g32 = (_g30 - _g31);		HX_STACK_VAR(_g32,"_g32");
					HX_STACK_LINE(3379)
					Float _g33 = (Float(_g32) / Float((int)2));		HX_STACK_VAR(_g33,"_g33");
					HX_STACK_LINE(3379)
					Float _g34 = (fb1->y + _g33);		HX_STACK_VAR(_g34,"_g34");
					HX_STACK_LINE(3379)
					fb2->set_y(_g34);
				}
			}
		}
		else{
			HX_STACK_LINE(3382)
			if (((center_on_x != HX_CSTRING("")))){
				HX_STACK_LINE(3383)
				::flixel::addons::ui::interfaces::IFlxUIWidget other = this->getAsset(center_on_x,null());		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(3384)
				if (((other != null()))){
					HX_STACK_LINE(3385)
					::flixel::FlxObject fb1;		HX_STACK_VAR(fb1,"fb1");
					HX_STACK_LINE(3385)
					fb1 = hx::TCast< flixel::FlxObject >::cast(other);
					HX_STACK_LINE(3385)
					::flixel::FlxObject fb2;		HX_STACK_VAR(fb2,"fb2");
					HX_STACK_LINE(3385)
					fb2 = hx::TCast< flixel::FlxObject >::cast(thing);
					HX_STACK_LINE(3385)
					{
						HX_STACK_LINE(3385)
						Float _g35 = fb1->get_width();		HX_STACK_VAR(_g35,"_g35");
						HX_STACK_LINE(3385)
						Float _g36 = fb2->get_width();		HX_STACK_VAR(_g36,"_g36");
						HX_STACK_LINE(3385)
						Float _g37 = (_g35 - _g36);		HX_STACK_VAR(_g37,"_g37");
						HX_STACK_LINE(3385)
						Float _g38 = (Float(_g37) / Float((int)2));		HX_STACK_VAR(_g38,"_g38");
						HX_STACK_LINE(3385)
						Float _g39 = (fb1->x + _g38);		HX_STACK_VAR(_g39,"_g39");
						HX_STACK_LINE(3385)
						fb2->set_x(_g39);
					}
					HX_STACK_LINE(3385)
					{
					}
				}
			}
			HX_STACK_LINE(3388)
			if (((center_on_y != HX_CSTRING("")))){
				HX_STACK_LINE(3389)
				::flixel::addons::ui::interfaces::IFlxUIWidget other = this->getAsset(center_on_y,null());		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(3390)
				if (((other != null()))){
					HX_STACK_LINE(3391)
					::flixel::FlxObject fb1;		HX_STACK_VAR(fb1,"fb1");
					HX_STACK_LINE(3391)
					fb1 = hx::TCast< flixel::FlxObject >::cast(other);
					HX_STACK_LINE(3391)
					::flixel::FlxObject fb2;		HX_STACK_VAR(fb2,"fb2");
					HX_STACK_LINE(3391)
					fb2 = hx::TCast< flixel::FlxObject >::cast(thing);
					HX_STACK_LINE(3391)
					{
						HX_STACK_LINE(3391)
						Float _g50 = fb1->get_height();		HX_STACK_VAR(_g50,"_g50");
						HX_STACK_LINE(3391)
						Float _g51 = fb2->get_height();		HX_STACK_VAR(_g51,"_g51");
						HX_STACK_LINE(3391)
						Float _g52 = (_g50 - _g51);		HX_STACK_VAR(_g52,"_g52");
						HX_STACK_LINE(3391)
						Float _g53 = (Float(_g52) / Float((int)2));		HX_STACK_VAR(_g53,"_g53");
						HX_STACK_LINE(3391)
						Float _g54 = (fb1->y + _g53);		HX_STACK_VAR(_g54,"_g54");
						HX_STACK_LINE(3391)
						fb2->set_y(_g54);
					}
				}
			}
		}
		HX_STACK_LINE(3397)
		{
			HX_STACK_LINE(3397)
			{
				HX_STACK_LINE(3397)
				::flixel::addons::ui::interfaces::IFlxUIWidget _g = thing;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(3397)
				_g->__Field(HX_CSTRING("set_x"),true)((_g->__Field(HX_CSTRING("x"),true) + X));
			}
			HX_STACK_LINE(3397)
			{
				HX_STACK_LINE(3397)
				::flixel::addons::ui::interfaces::IFlxUIWidget _g = thing;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(3397)
				_g->__Field(HX_CSTRING("set_y"),true)((_g->__Field(HX_CSTRING("y"),true) + Y));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_loadPosition,(void))

::flixel::addons::ui::BorderDef FlxUI_obj::_loadBorder( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadBorder",0xa79baf38,"flixel.addons.ui.FlxUI._loadBorder","flixel/addons/ui/FlxUI.hx",3401,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(3402)
	::String border_str = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("border"),null(),null());		HX_STACK_VAR(border_str,"border_str");
	HX_STACK_LINE(3403)
	::flixel::text::FlxTextBorderStyle border_style = ::flixel::text::FlxTextBorderStyle_obj::NONE;		HX_STACK_VAR(border_style,"border_style");
	HX_STACK_LINE(3404)
	int border_color = this->_loadColor(data,HX_CSTRING("border_color"),(int)0);		HX_STACK_VAR(border_color,"border_color");
	HX_STACK_LINE(3405)
	int border_size = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("border_size"),(int)1);		HX_STACK_VAR(border_size,"border_size");
	HX_STACK_LINE(3406)
	Float border_quality = ::flixel::addons::ui::U_obj::xml_f(data->x,HX_CSTRING("border_quality"),(int)0);		HX_STACK_VAR(border_quality,"border_quality");
	HX_STACK_LINE(3408)
	::flixel::addons::ui::BorderDef borderDef = ::flixel::addons::ui::BorderDef_obj::__new(border_style,border_color,border_size,border_quality);		HX_STACK_VAR(borderDef,"borderDef");
	HX_STACK_LINE(3410)
	::String _switch_40 = (border_str);
	if (  ( _switch_40==HX_CSTRING("false")) ||  ( _switch_40==HX_CSTRING("none"))){
		HX_STACK_LINE(3411)
		borderDef->style = ::flixel::text::FlxTextBorderStyle_obj::NONE;
	}
	else if (  ( _switch_40==HX_CSTRING("shadow"))){
		HX_STACK_LINE(3412)
		borderDef->style = ::flixel::text::FlxTextBorderStyle_obj::SHADOW;
	}
	else if (  ( _switch_40==HX_CSTRING("outline"))){
		HX_STACK_LINE(3413)
		borderDef->style = ::flixel::text::FlxTextBorderStyle_obj::OUTLINE;
	}
	else if (  ( _switch_40==HX_CSTRING("outline_fast"))){
		HX_STACK_LINE(3414)
		borderDef->style = ::flixel::text::FlxTextBorderStyle_obj::OUTLINE_FAST;
	}
	else if (  ( _switch_40==HX_CSTRING(""))){
		HX_STACK_LINE(3418)
		::String _g = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("shadow"),true,HX_CSTRING(""));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(3418)
		border_str = _g;
		HX_STACK_LINE(3419)
		if (((bool((bool((border_str != HX_CSTRING(""))) && bool((border_str != HX_CSTRING("false"))))) && bool((border_str != HX_CSTRING("none")))))){
			HX_STACK_LINE(3420)
			borderDef->style = ::flixel::text::FlxTextBorderStyle_obj::SHADOW;
			HX_STACK_LINE(3421)
			int _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(3421)
			{
				HX_STACK_LINE(3421)
				int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
				HX_STACK_LINE(3421)
				Dynamic return_val = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(border_str);		HX_STACK_VAR(return_val,"return_val");
				HX_STACK_LINE(3421)
				if (((return_val == null()))){
					HX_STACK_LINE(3421)
					return_val = default_color;
				}
				HX_STACK_LINE(3421)
				_g1 = return_val;
			}
			HX_STACK_LINE(3421)
			borderDef->color = _g1;
		}
		else{
			HX_STACK_LINE(3423)
			::String _g2 = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("outline"),true,HX_CSTRING(""));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(3423)
			border_str = _g2;
			HX_STACK_LINE(3424)
			if (((bool((bool((border_str != HX_CSTRING(""))) && bool((border_str != HX_CSTRING("false"))))) && bool((border_str != HX_CSTRING("none")))))){
				HX_STACK_LINE(3425)
				borderDef->style = ::flixel::text::FlxTextBorderStyle_obj::OUTLINE;
				HX_STACK_LINE(3426)
				int _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(3426)
				{
					HX_STACK_LINE(3426)
					int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
					HX_STACK_LINE(3426)
					Dynamic return_val = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(border_str);		HX_STACK_VAR(return_val,"return_val");
					HX_STACK_LINE(3426)
					if (((return_val == null()))){
						HX_STACK_LINE(3426)
						return_val = default_color;
					}
					HX_STACK_LINE(3426)
					_g3 = return_val;
				}
				HX_STACK_LINE(3426)
				borderDef->color = _g3;
			}
			else{
				HX_STACK_LINE(3428)
				::String _g4 = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("outline_fast"),null(),null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(3428)
				border_str = _g4;
				HX_STACK_LINE(3429)
				if (((bool((bool((border_str != HX_CSTRING(""))) && bool((border_str != HX_CSTRING("false"))))) && bool((border_str != HX_CSTRING("none")))))){
					HX_STACK_LINE(3430)
					borderDef->style = ::flixel::text::FlxTextBorderStyle_obj::OUTLINE_FAST;
					HX_STACK_LINE(3431)
					int _g5;		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(3431)
					{
						HX_STACK_LINE(3431)
						int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
						HX_STACK_LINE(3431)
						Dynamic return_val = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(border_str);		HX_STACK_VAR(return_val,"return_val");
						HX_STACK_LINE(3431)
						if (((return_val == null()))){
							HX_STACK_LINE(3431)
							return_val = default_color;
						}
						HX_STACK_LINE(3431)
						_g5 = return_val;
					}
					HX_STACK_LINE(3431)
					borderDef->color = _g5;
				}
			}
		}
	}
	HX_STACK_LINE(3437)
	return borderDef;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadBorder,return )

int FlxUI_obj::_loadColor( ::haxe::xml::Fast data,::String __o_colorName,hx::Null< int >  __o__default){
::String colorName = __o_colorName.Default(HX_CSTRING("color"));
int _default = __o__default.Default(-1);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadColor",0xb7b8dc97,"flixel.addons.ui.FlxUI._loadColor","flixel/addons/ui/FlxUI.hx",3440,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(colorName,"colorName")
	HX_STACK_ARG(_default,"_default")
{
		HX_STACK_LINE(3441)
		::String colorStr = ::flixel::addons::ui::U_obj::xml_str(data->x,colorName,null(),null());		HX_STACK_VAR(colorStr,"colorStr");
		struct _Function_1_1{
			inline static bool Block( ::String &colorName,::haxe::xml::Fast &data){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI.hx",3442,0xf354486a)
				{
					HX_STACK_LINE(3442)
					::String _g = data->x->get_nodeName();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(3442)
					return (_g == colorName);
				}
				return null();
			}
		};
		HX_STACK_LINE(3442)
		if (((  (((colorStr == HX_CSTRING("")))) ? bool(_Function_1_1::Block(colorName,data)) : bool(false) ))){
			HX_STACK_LINE(3443)
			::String _g1 = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("value"),null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(3443)
			colorStr = _g1;
		}
		HX_STACK_LINE(3445)
		int color = _default;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(3446)
		if (((colorStr != HX_CSTRING("")))){
			HX_STACK_LINE(3446)
			int _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(3446)
			{
				HX_STACK_LINE(3446)
				bool safe = false;		HX_STACK_VAR(safe,"safe");
				HX_STACK_LINE(3446)
				int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
				HX_STACK_LINE(3446)
				Dynamic return_val = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(colorStr);		HX_STACK_VAR(return_val,"return_val");
				HX_STACK_LINE(3446)
				if (((return_val == null()))){
					HX_STACK_LINE(3446)
					if ((!(safe))){
						HX_STACK_LINE(3446)
						HX_STACK_DO_THROW((HX_CSTRING("U.parseHex() unable to parse hex String ") + colorStr));
					}
					else{
						HX_STACK_LINE(3446)
						return_val = default_color;
					}
				}
				HX_STACK_LINE(3446)
				_g2 = return_val;
			}
			HX_STACK_LINE(3446)
			color = _g2;
		}
		HX_STACK_LINE(3447)
		return color;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,_loadColor,return )

::flixel::addons::ui::FontDef FlxUI_obj::_loadFontDef( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadFontDef",0x63d37f6a,"flixel.addons.ui.FlxUI._loadFontDef","flixel/addons/ui/FlxUI.hx",3450,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(3451)
	::String fontFile = this->_loadFontFace(data);		HX_STACK_VAR(fontFile,"fontFile");
	HX_STACK_LINE(3452)
	::String fontStyle = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("style"),null(),null());		HX_STACK_VAR(fontStyle,"fontStyle");
	HX_STACK_LINE(3453)
	int fontSize = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("size"),(int)8);		HX_STACK_VAR(fontSize,"fontSize");
	HX_STACK_LINE(3454)
	::String _g = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("font"),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(3454)
	::flixel::addons::ui::FontDef fd = ::flixel::addons::ui::FontDef_obj::__new(_g,HX_CSTRING(".ttf"),fontFile,null(),null());		HX_STACK_VAR(fd,"fd");
	HX_STACK_LINE(3455)
	fd->format->size = fontSize;
	HX_STACK_LINE(3456)
	fd->setFontStyle(fontStyle);
	HX_STACK_LINE(3457)
	return fd;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadFontDef,return )

::String FlxUI_obj::_loadFontFace( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadFontFace",0xf68b5f58,"flixel.addons.ui.FlxUI._loadFontFace","flixel/addons/ui/FlxUI.hx",3460,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(3461)
	::String fontFace = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("font"),null(),null());		HX_STACK_VAR(fontFace,"fontFace");
	HX_STACK_LINE(3462)
	::String fontStyle = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("style"),null(),null());		HX_STACK_VAR(fontStyle,"fontStyle");
	HX_STACK_LINE(3463)
	::String the_font = null();		HX_STACK_VAR(the_font,"the_font");
	HX_STACK_LINE(3464)
	if (((fontFace != HX_CSTRING("")))){
		HX_STACK_LINE(3464)
		::String _g = ::flixel::addons::ui::U_obj::font(fontFace,fontStyle);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(3464)
		the_font = _g;
	}
	HX_STACK_LINE(3466)
	return the_font;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadFontFace,return )

Void FlxUI_obj::_onFinishLoad( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_onFinishLoad",0x23246f1e,"flixel.addons.ui.FlxUI._onFinishLoad","flixel/addons/ui/FlxUI.hx",3470,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(3470)
		if (((this->_ptr != null()))){
			HX_STACK_LINE(3471)
			this->_ptr->getEvent(HX_CSTRING("finish_load"),hx::ObjectPtr<OBJ_>(this),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUI_obj,_onFinishLoad,(void))

::String FlxUI_obj::getText( ::String flag,::String __o_context,hx::Null< bool >  __o_safe,::String __o_code){
::String context = __o_context.Default(HX_CSTRING("data"));
bool safe = __o_safe.Default(true);
::String code = __o_code.Default(HX_CSTRING(""));
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getText",0xde0de34a,"flixel.addons.ui.FlxUI.getText","flixel/addons/ui/FlxUI.hx",3477,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(flag,"flag")
	HX_STACK_ARG(context,"context")
	HX_STACK_ARG(safe,"safe")
	HX_STACK_ARG(code,"code")
{
		HX_STACK_LINE(3478)
		::String str = HX_CSTRING("");		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(3479)
		if (((this->_ptr_tongue != null()))){
			HX_STACK_LINE(3480)
			::String _g = this->_ptr_tongue->get(flag,context,safe);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(3480)
			str = _g;
			HX_STACK_LINE(3481)
			return this->formatFromCode(str,code);
		}
		else{
			HX_STACK_LINE(3482)
			if (((this->getTextFallback_dyn() != null()))){
				HX_STACK_LINE(3483)
				::String _g1 = this->getTextFallback(flag,context,safe);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(3483)
				str = _g1;
				HX_STACK_LINE(3484)
				return this->formatFromCode(str,code);
			}
		}
		HX_STACK_LINE(3487)
		return flag;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxUI_obj,getText,return )

::String FlxUI_obj::formatFromCode( ::String str,::String code){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","formatFromCode",0x3be1ae07,"flixel.addons.ui.FlxUI.formatFromCode","flixel/addons/ui/FlxUI.hx",3490,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(code,"code")
	HX_STACK_LINE(3491)
	::String _switch_41 = (code);
	if (  ( _switch_41==HX_CSTRING("u"))){
		HX_STACK_LINE(3492)
		return str.toUpperCase();
	}
	else if (  ( _switch_41==HX_CSTRING("l"))){
		HX_STACK_LINE(3493)
		return str.toLowerCase();
	}
	else if (  ( _switch_41==HX_CSTRING("fu"))){
		HX_STACK_LINE(3494)
		return ::flixel::addons::ui::U_obj::FU(str);
	}
	else if (  ( _switch_41==HX_CSTRING("fu_"))){
		HX_STACK_LINE(3495)
		return ::flixel::addons::ui::U_obj::FU_(str);
	}
	HX_STACK_LINE(3497)
	return str;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,formatFromCode,return )

::flixel::text::FlxText FlxUI_obj::formatButtonText( ::haxe::xml::Fast data,Dynamic button){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","formatButtonText",0xeca59e0f,"flixel.addons.ui.FlxUI.formatButtonText","flixel/addons/ui/FlxUI.hx",3555,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(button,"button")
	HX_STACK_LINE(3556)
	if (((  (((data != null()))) ? bool(data->hasNode->resolve(HX_CSTRING("text"))) : bool(false) ))){
		HX_STACK_LINE(3557)
		::haxe::xml::Fast textNode = data->node->resolve(HX_CSTRING("text"));		HX_STACK_VAR(textNode,"textNode");
		HX_STACK_LINE(3558)
		::String use_def = ::flixel::addons::ui::U_obj::xml_str(textNode->x,HX_CSTRING("use_def"),true,null());		HX_STACK_VAR(use_def,"use_def");
		HX_STACK_LINE(3559)
		::haxe::xml::Fast text_def = null();		HX_STACK_VAR(text_def,"text_def");
		HX_STACK_LINE(3561)
		if (((use_def != HX_CSTRING("")))){
			HX_STACK_LINE(3562)
			::haxe::xml::Fast _g = this->getDefinition(use_def,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(3562)
			text_def = _g;
		}
		HX_STACK_LINE(3565)
		::haxe::xml::Fast info = ::flixel::addons::ui::FlxUI_obj::consolidateData(textNode,text_def);		HX_STACK_VAR(info,"info");
		HX_STACK_LINE(3567)
		::String case_id = ::flixel::addons::ui::U_obj::xml_str(info->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(case_id,"case_id");
		HX_STACK_LINE(3568)
		::String the_font = this->_loadFontFace(info);		HX_STACK_VAR(the_font,"the_font");
		HX_STACK_LINE(3569)
		int size = ::flixel::addons::ui::U_obj::xml_i(info->x,HX_CSTRING("size"),null());		HX_STACK_VAR(size,"size");
		HX_STACK_LINE(3569)
		if (((size == (int)0))){
			HX_STACK_LINE(3569)
			size = (int)8;
		}
		HX_STACK_LINE(3570)
		int color = this->_loadColor(info,null(),null());		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(3572)
		Float labelWidth = ::flixel::addons::ui::U_obj::xml_f(info->x,HX_CSTRING("width"),null());		HX_STACK_VAR(labelWidth,"labelWidth");
		HX_STACK_LINE(3574)
		::flixel::addons::ui::BorderDef border = this->_loadBorder(info);		HX_STACK_VAR(border,"border");
		HX_STACK_LINE(3576)
		::String align = ::flixel::addons::ui::U_obj::xml_str(info->x,HX_CSTRING("align"),true,null());		HX_STACK_VAR(align,"align");
		HX_STACK_LINE(3576)
		if (((align == HX_CSTRING("")))){
			HX_STACK_LINE(3576)
			align = null();
		}
		HX_STACK_LINE(3578)
		::flixel::text::FlxText the_label = null();		HX_STACK_VAR(the_label,"the_label");
		HX_STACK_LINE(3579)
		::flixel::addons::ui::FlxUIButton fb = null();		HX_STACK_VAR(fb,"fb");
		HX_STACK_LINE(3580)
		::flixel::addons::ui::FlxUISpriteButton fsb = null();		HX_STACK_VAR(fsb,"fsb");
		HX_STACK_LINE(3581)
		::flixel::addons::ui::FlxUICheckBox cb = null();		HX_STACK_VAR(cb,"cb");
		HX_STACK_LINE(3582)
		::flixel::addons::ui::interfaces::IFlxUIButton ifb = null();		HX_STACK_VAR(ifb,"ifb");
		HX_STACK_LINE(3584)
		bool _g1 = ::Std_obj::is(button,hx::ClassOf< ::flixel::addons::ui::FlxUICheckBox >());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(3584)
		if (((_g1 == false))){
			HX_STACK_LINE(3585)
			ifb = button;
			HX_STACK_LINE(3586)
			if (((bool((align == HX_CSTRING(""))) || bool((align == null()))))){
				HX_STACK_LINE(3587)
				align = HX_CSTRING("center");
			}
		}
		else{
			HX_STACK_LINE(3590)
			::flixel::addons::ui::FlxUICheckBox cb1 = button;		HX_STACK_VAR(cb1,"cb1");
			HX_STACK_LINE(3591)
			ifb = cb1->button;
			HX_STACK_LINE(3592)
			align = HX_CSTRING("left");
		}
		HX_STACK_LINE(3595)
		if (((ifb != null()))){
			HX_STACK_LINE(3596)
			if ((::Std_obj::is(ifb,hx::ClassOf< ::flixel::addons::ui::FlxUIButton >()))){
				HX_STACK_LINE(3598)
				fb = ifb;
				HX_STACK_LINE(3599)
				the_label = fb->label;
			}
			else{
				HX_STACK_LINE(3601)
				if ((::Std_obj::is(ifb,hx::ClassOf< ::flixel::addons::ui::FlxUISpriteButton >()))){
					HX_STACK_LINE(3602)
					fsb = ifb;
					HX_STACK_LINE(3603)
					if ((::Std_obj::is(fsb->label,hx::ClassOf< ::flixel::text::FlxText >()))){
						HX_STACK_LINE(3605)
						the_label = fsb->label;
					}
					else{
						HX_STACK_LINE(3607)
						if ((::Std_obj::is(fsb->label,hx::ClassOf< ::flixel::group::FlxTypedSpriteGroup >()))){
							HX_STACK_LINE(3609)
							::flixel::group::FlxTypedSpriteGroup fsg = fsb->label;		HX_STACK_VAR(fsg,"fsg");
							HX_STACK_LINE(3610)
							{
								HX_STACK_LINE(3610)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(3610)
								Array< ::Dynamic > _g11 = fsg->group->members;		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(3610)
								while((true)){
									HX_STACK_LINE(3610)
									if ((!(((_g < _g11->length))))){
										HX_STACK_LINE(3610)
										break;
									}
									HX_STACK_LINE(3610)
									::flixel::FlxSprite fs = _g11->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(fs,"fs");
									HX_STACK_LINE(3610)
									++(_g);
									HX_STACK_LINE(3611)
									if ((::Std_obj::is(fs,hx::ClassOf< ::flixel::text::FlxText >()))){
										HX_STACK_LINE(3612)
										the_label = fs;
										HX_STACK_LINE(3613)
										break;
									}
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(3619)
			ifb->__FieldRef(HX_CSTRING("up_color")) = color;
			HX_STACK_LINE(3620)
			ifb->__FieldRef(HX_CSTRING("down_color")) = (int)0;
			HX_STACK_LINE(3621)
			ifb->__FieldRef(HX_CSTRING("over_color")) = (int)0;
		}
		HX_STACK_LINE(3624)
		if (((the_label != null()))){
			HX_STACK_LINE(3625)
			if (((labelWidth != (int)0))){
				HX_STACK_LINE(3626)
				the_label->set_width(labelWidth);
			}
			HX_STACK_LINE(3629)
			if (((fb != null()))){
				HX_STACK_LINE(3631)
				fb->setLabelFormat(the_font,size,color,align,null(),null(),null());
			}
			else{
				HX_STACK_LINE(3635)
				the_label->setFormat(the_font,size,color,align,null(),null(),null());
			}
			HX_STACK_LINE(3638)
			the_label->set_borderStyle(border->style);
			HX_STACK_LINE(3639)
			the_label->set_borderColor(border->color);
			HX_STACK_LINE(3640)
			the_label->set_borderSize(border->size);
			HX_STACK_LINE(3641)
			the_label->set_borderQuality(border->quality);
			HX_STACK_LINE(3643)
			if ((::Std_obj::is(the_label,hx::ClassOf< ::flixel::addons::ui::FlxUIText >()))){
				HX_STACK_LINE(3644)
				::flixel::addons::ui::FlxUIText ftu = the_label;		HX_STACK_VAR(ftu,"ftu");
				HX_STACK_LINE(3645)
				ftu->drawFrame(null());
			}
			HX_STACK_LINE(3648)
			if (((fb != null()))){
				HX_STACK_LINE(3649)
				fb->autoCenterLabel();
			}
			HX_STACK_LINE(3651)
			if (((fsb != null()))){
				HX_STACK_LINE(3652)
				fsb->autoCenterLabel();
			}
		}
		HX_STACK_LINE(3656)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(info->nodes->resolve(HX_CSTRING("color"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast textColorNode = __it->next();
			{
				HX_STACK_LINE(3657)
				int color1 = this->_loadColor(textColorNode,null(),null());		HX_STACK_VAR(color1,"color1");
				HX_STACK_LINE(3658)
				bool vis = ::flixel::addons::ui::U_obj::xml_bool(textColorNode->x,HX_CSTRING("visible"),true);		HX_STACK_VAR(vis,"vis");
				HX_STACK_LINE(3659)
				::String state_id = ::flixel::addons::ui::U_obj::xml_str(textColorNode->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(state_id,"state_id");
				HX_STACK_LINE(3660)
				bool toggle = ::flixel::addons::ui::U_obj::xml_bool(textColorNode->x,HX_CSTRING("toggle"),null());		HX_STACK_VAR(toggle,"toggle");
				HX_STACK_LINE(3661)
				::String _switch_42 = (state_id);
				if (  ( _switch_42==HX_CSTRING("up")) ||  ( _switch_42==HX_CSTRING("inactive")) ||  ( _switch_42==HX_CSTRING("")) ||  ( _switch_42==HX_CSTRING("normal"))){
					HX_STACK_LINE(3663)
					if ((!(toggle))){
						HX_STACK_LINE(3664)
						ifb->__FieldRef(HX_CSTRING("up_color")) = color1;
						HX_STACK_LINE(3665)
						ifb->__FieldRef(HX_CSTRING("up_visible")) = vis;
					}
					else{
						HX_STACK_LINE(3667)
						ifb->__FieldRef(HX_CSTRING("up_toggle_color")) = color1;
						HX_STACK_LINE(3668)
						ifb->__FieldRef(HX_CSTRING("up_toggle_visible")) = vis;
					}
				}
				else if (  ( _switch_42==HX_CSTRING("active")) ||  ( _switch_42==HX_CSTRING("hilight")) ||  ( _switch_42==HX_CSTRING("over")) ||  ( _switch_42==HX_CSTRING("hover"))){
					HX_STACK_LINE(3671)
					if ((!(toggle))){
						HX_STACK_LINE(3672)
						ifb->__FieldRef(HX_CSTRING("over_color")) = color1;
						HX_STACK_LINE(3673)
						ifb->__FieldRef(HX_CSTRING("over_visible")) = vis;
					}
					else{
						HX_STACK_LINE(3675)
						ifb->__FieldRef(HX_CSTRING("over_toggle_color")) = color1;
						HX_STACK_LINE(3676)
						ifb->__FieldRef(HX_CSTRING("over_toggle_visible")) = vis;
					}
				}
				else if (  ( _switch_42==HX_CSTRING("down")) ||  ( _switch_42==HX_CSTRING("pressed")) ||  ( _switch_42==HX_CSTRING("pushed"))){
					HX_STACK_LINE(3679)
					if ((!(toggle))){
						HX_STACK_LINE(3680)
						ifb->__FieldRef(HX_CSTRING("down_color")) = color1;
						HX_STACK_LINE(3681)
						ifb->__FieldRef(HX_CSTRING("down_visible")) = vis;
					}
					else{
						HX_STACK_LINE(3683)
						ifb->__FieldRef(HX_CSTRING("down_toggle_color")) = color1;
						HX_STACK_LINE(3684)
						ifb->__FieldRef(HX_CSTRING("down_toggle_visible")) = vis;
					}
				}
			}
;
		}
		HX_STACK_LINE(3689)
		if (((ifb->__Field(HX_CSTRING("over_color"),true) == (int)0))){
			HX_STACK_LINE(3690)
			ifb->__FieldRef(HX_CSTRING("over_color")) = ifb->__Field(HX_CSTRING("up_color"),true);
		}
		HX_STACK_LINE(3692)
		if (((ifb->__Field(HX_CSTRING("down_color"),true) == (int)0))){
			HX_STACK_LINE(3693)
			ifb->__FieldRef(HX_CSTRING("down_color")) = ifb->__Field(HX_CSTRING("over_color"),true);
		}
		HX_STACK_LINE(3697)
		if (((ifb->__Field(HX_CSTRING("up_toggle_color"),true) == (int)0))){
			HX_STACK_LINE(3698)
			ifb->__FieldRef(HX_CSTRING("up_toggle_color")) = ifb->__Field(HX_CSTRING("up_color"),true);
		}
		HX_STACK_LINE(3700)
		if (((ifb->__Field(HX_CSTRING("over_toggle_color"),true) == (int)0))){
			HX_STACK_LINE(3701)
			ifb->__FieldRef(HX_CSTRING("over_toggle_color")) = ifb->__Field(HX_CSTRING("over_color"),true);
		}
		HX_STACK_LINE(3703)
		if (((ifb->__Field(HX_CSTRING("down_toggle_color"),true) == (int)0))){
			HX_STACK_LINE(3704)
			ifb->__FieldRef(HX_CSTRING("down_toggle_color")) = ifb->__Field(HX_CSTRING("down_color"),true);
		}
		HX_STACK_LINE(3707)
		if (((the_label != null()))){
			HX_STACK_LINE(3708)
			the_label->set_visible(ifb->__Field(HX_CSTRING("up_visible"),true));
			HX_STACK_LINE(3709)
			the_label->set_color(ifb->__Field(HX_CSTRING("up_color"),true));
		}
		HX_STACK_LINE(3711)
		return the_label;
	}
	HX_STACK_LINE(3713)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,formatButtonText,return )

Void FlxUI_obj::event( ::String name,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,Dynamic params){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","event",0xe056d741,"flixel.addons.ui.FlxUI.event","flixel/addons/ui/FlxUI.hx",119,0xf354486a)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(sender,"sender")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(120)
		::flixel::addons::ui::interfaces::IEventGetter currState = ::flixel::addons::ui::FlxUI_obj::getLeafUIState();		HX_STACK_VAR(currState,"currState");
		HX_STACK_LINE(122)
		if (((currState != null()))){
			HX_STACK_LINE(123)
			currState->getEvent(name,sender,data,params);
		}
		else{
			HX_STACK_LINE(125)
			Dynamic();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxUI_obj,event,(void))

Void FlxUI_obj::forceFocus( bool b,::flixel::addons::ui::interfaces::IFlxUIWidget thing){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","forceFocus",0x91e0ed66,"flixel.addons.ui.FlxUI.forceFocus","flixel/addons/ui/FlxUI.hx",135,0xf354486a)
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(thing,"thing")
		HX_STACK_LINE(136)
		::flixel::addons::ui::interfaces::IFlxUIState currState = ::flixel::addons::ui::FlxUI_obj::getLeafUIState();		HX_STACK_VAR(currState,"currState");
		HX_STACK_LINE(137)
		if (((currState != null()))){
			HX_STACK_LINE(138)
			currState->forceFocus(b,thing);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,forceFocus,(void))

::flixel::addons::ui::interfaces::IFlxUIState FlxUI_obj::getLeafUIState( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getLeafUIState",0xebda1e42,"flixel.addons.ui.FlxUI.getLeafUIState","flixel/addons/ui/FlxUI.hx",147,0xf354486a)
	HX_STACK_LINE(148)
	::flixel::FlxState state = ::flixel::FlxG_obj::game->_state;		HX_STACK_VAR(state,"state");
	HX_STACK_LINE(149)
	if (((state != null()))){
		HX_STACK_LINE(151)
		while((true)){
			HX_STACK_LINE(151)
			if ((!(((state->subState != null()))))){
				HX_STACK_LINE(151)
				break;
			}
			HX_STACK_LINE(153)
			state = state->subState;
		}
	}
	HX_STACK_LINE(156)
	if ((::Std_obj::is(state,hx::ClassOf< ::flixel::addons::ui::interfaces::IFlxUIState >()))){
		HX_STACK_LINE(158)
		return state;
	}
	HX_STACK_LINE(160)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxUI_obj,getLeafUIState,return )

Dynamic FlxUI_obj::request( ::String name,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,Dynamic params){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","request",0x03164636,"flixel.addons.ui.FlxUI.request","flixel/addons/ui/FlxUI.hx",172,0xf354486a)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(sender,"sender")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(173)
	::flixel::addons::ui::interfaces::IEventGetter currState = ::flixel::addons::ui::FlxUI_obj::getLeafUIState();		HX_STACK_VAR(currState,"currState");
	HX_STACK_LINE(174)
	if (((currState != null()))){
		HX_STACK_LINE(175)
		return currState->getRequest(name,sender,data,params);
	}
	else{
		HX_STACK_LINE(177)
		Dynamic();
	}
	HX_STACK_LINE(179)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxUI_obj,request,return )

Void FlxUI_obj::_delta( ::flixel::addons::ui::interfaces::IFlxUIWidget thing,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_delta",0xa8496232,"flixel.addons.ui.FlxUI._delta","flixel/addons/ui/FlxUI.hx",919,0xf354486a)
	HX_STACK_ARG(thing,"thing")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(920)
		{
			HX_STACK_LINE(920)
			::flixel::addons::ui::interfaces::IFlxUIWidget _g = thing;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(920)
			_g->__Field(HX_CSTRING("set_x"),true)((_g->__Field(HX_CSTRING("x"),true) + X));
		}
		HX_STACK_LINE(921)
		{
			HX_STACK_LINE(921)
			::flixel::addons::ui::interfaces::IFlxUIWidget _g = thing;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(921)
			_g->__Field(HX_CSTRING("set_y"),true)((_g->__Field(HX_CSTRING("y"),true) + Y));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,_delta,(void))

::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::_center( ::flixel::addons::ui::interfaces::IFlxUIWidget thing,hx::Null< bool >  __o_X,hx::Null< bool >  __o_Y){
bool X = __o_X.Default(true);
bool Y = __o_Y.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_center",0x32e39e5b,"flixel.addons.ui.FlxUI._center","flixel/addons/ui/FlxUI.hx",930,0xf354486a)
	HX_STACK_ARG(thing,"thing")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(931)
		if ((X)){
			HX_STACK_LINE(931)
			Float _g = thing->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(931)
			Float _g1 = (::flixel::FlxG_obj::width - _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(931)
			Float _g2 = (Float(_g1) / Float((int)2));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(931)
			thing->__Field(HX_CSTRING("set_x"),true)(_g2);
		}
		HX_STACK_LINE(932)
		if ((Y)){
			HX_STACK_LINE(932)
			Float _g3 = thing->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(932)
			Float _g4 = (::flixel::FlxG_obj::height - _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(932)
			Float _g5 = (Float(_g4) / Float((int)2));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(932)
			thing->__Field(HX_CSTRING("set_y"),true)(_g5);
		}
		HX_STACK_LINE(933)
		return thing;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,_center,return )

::haxe::xml::Fast FlxUI_obj::consolidateData( ::haxe::xml::Fast data,::haxe::xml::Fast definition){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","consolidateData",0x9bb7ebba,"flixel.addons.ui.FlxUI.consolidateData","flixel/addons/ui/FlxUI.hx",1769,0xf354486a)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(definition,"definition")
	HX_STACK_LINE(1770)
	if (((bool((data == null())) && bool((definition != null()))))){
		HX_STACK_LINE(1771)
		return definition;
	}
	HX_STACK_LINE(1773)
	if (((definition == null()))){
		HX_STACK_LINE(1774)
		return data;
	}
	else{
		HX_STACK_LINE(1779)
		::String _g = definition->x->toString();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1779)
		::Xml new_data = ::Xml_obj::parse(_g)->firstElement();		HX_STACK_VAR(new_data,"new_data");
		HX_STACK_LINE(1781)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(data->x->attributes());  __it->hasNext(); ){
			::String att = __it->next();
			{
				HX_STACK_LINE(1782)
				::String val = data->att->resolve(att);		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(1783)
				new_data->set(att,val);
			}
;
		}
		HX_STACK_LINE(1787)
		::String _g1 = data->get_name();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1787)
		new_data->set_nodeName(_g1);
		HX_STACK_LINE(1788)
		if ((data->has->resolve(HX_CSTRING("id")))){
			HX_STACK_LINE(1789)
			::String _g2 = data->att->resolve(HX_CSTRING("id"));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1789)
			new_data->set(HX_CSTRING("id"),_g2);
		}
		else{
			HX_STACK_LINE(1791)
			new_data->set(HX_CSTRING("id"),HX_CSTRING(""));
		}
		HX_STACK_LINE(1796)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(data->x->elements());  __it->hasNext(); ){
			::Xml element = __it->next();
			{
				HX_STACK_LINE(1797)
				::String nodeName = element->get_nodeName();		HX_STACK_VAR(nodeName,"nodeName");
				HX_STACK_LINE(1798)
				::String _g3 = element->toString();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1798)
				::Xml _g4 = ::Xml_obj::parse(_g3)->firstElement();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(1798)
				new_data->insertChild(_g4,(int)0);
			}
;
		}
		HX_STACK_LINE(1801)
		return ::haxe::xml::Fast_obj::__new(new_data);
	}
	HX_STACK_LINE(1803)
	return data;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,consolidateData,return )

::openfl::_v2::display::BitmapData FlxUI_obj::_loadBitmapRect( ::String source,::String rect_str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadBitmapRect",0xdc5324ff,"flixel.addons.ui.FlxUI._loadBitmapRect","flixel/addons/ui/FlxUI.hx",2749,0xf354486a)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(rect_str,"rect_str")
	HX_STACK_LINE(2750)
	::String _g = ::flixel::addons::ui::U_obj::gfx(source,null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(2750)
	::openfl::_v2::display::BitmapData b1 = ::openfl::_v2::Assets_obj::getBitmapData(_g,null());		HX_STACK_VAR(b1,"b1");
	HX_STACK_LINE(2751)
	::openfl::_v2::geom::Rectangle r;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(2751)
	{
		HX_STACK_LINE(2751)
		Array< ::String > coords = rect_str.split(HX_CSTRING(","));		HX_STACK_VAR(coords,"coords");
		HX_STACK_LINE(2751)
		::openfl::_v2::geom::Rectangle rect = null();		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(2751)
		if (((bool((coords != null())) && bool((coords->length == (int)4))))){
			HX_STACK_LINE(2751)
			int x_ = ::Std_obj::parseInt(coords->__get((int)0));		HX_STACK_VAR(x_,"x_");
			HX_STACK_LINE(2751)
			int y_ = ::Std_obj::parseInt(coords->__get((int)1));		HX_STACK_VAR(y_,"y_");
			HX_STACK_LINE(2751)
			int w_ = ::Std_obj::parseInt(coords->__get((int)2));		HX_STACK_VAR(w_,"w_");
			HX_STACK_LINE(2751)
			int h_ = ::Std_obj::parseInt(coords->__get((int)3));		HX_STACK_VAR(h_,"h_");
			HX_STACK_LINE(2751)
			::openfl::_v2::geom::Rectangle _g1 = ::openfl::_v2::geom::Rectangle_obj::__new(x_,y_,w_,h_);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(2751)
			rect = _g1;
		}
		HX_STACK_LINE(2751)
		r = rect;
	}
	HX_STACK_LINE(2752)
	int _g2 = ::Std_obj::_int(r->width);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(2752)
	int _g3 = ::Std_obj::_int(r->height);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(2752)
	::openfl::_v2::display::BitmapData b2 = ::openfl::_v2::display::BitmapData_obj::__new(_g2,_g3,true,(int)16777215,null());		HX_STACK_VAR(b2,"b2");
	HX_STACK_LINE(2753)
	::openfl::_v2::geom::Point _g4 = ::openfl::_v2::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(2753)
	b2->copyPixels(b1,r,_g4,null(),null(),null());
	HX_STACK_LINE(2754)
	return b2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_loadBitmapRect,return )

Dynamic FlxUI_obj::getParams( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getParams",0xfcb7b323,"flixel.addons.ui.FlxUI.getParams","flixel/addons/ui/FlxUI.hx",3506,0xf354486a)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(3507)
	Dynamic params = null();		HX_STACK_VAR(params,"params");
	HX_STACK_LINE(3509)
	if ((data->hasNode->resolve(HX_CSTRING("param")))){
		HX_STACK_LINE(3510)
		Dynamic _g = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(3510)
		params = _g;
		HX_STACK_LINE(3511)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("param"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast param = __it->next();
			if (((  ((param->has->resolve(HX_CSTRING("type")))) ? bool(param->has->resolve(HX_CSTRING("value"))) : bool(false) ))){
				HX_STACK_LINE(3513)
				::String type = param->att->resolve(HX_CSTRING("type"));		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(3514)
				::String _g1 = type.toLowerCase();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(3514)
				type = _g1;
				HX_STACK_LINE(3515)
				::String valueStr = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(valueStr,"valueStr");
				HX_STACK_LINE(3516)
				Dynamic value = valueStr;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(3517)
				int sort = ::flixel::addons::ui::U_obj::xml_i(param->x,HX_CSTRING("sort"),(int)-1);		HX_STACK_VAR(sort,"sort");
				HX_STACK_LINE(3518)
				::String _switch_43 = (type);
				if (  ( _switch_43==HX_CSTRING("string"))){
					HX_STACK_LINE(3519)
					::String _g2 = ::String(valueStr);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(3519)
					value = _g2;
				}
				else if (  ( _switch_43==HX_CSTRING("int"))){
					HX_STACK_LINE(3520)
					Dynamic _g3 = ::Std_obj::parseInt(valueStr);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(3520)
					value = _g3;
				}
				else if (  ( _switch_43==HX_CSTRING("float"))){
					HX_STACK_LINE(3521)
					Float _g4 = ::Std_obj::parseFloat(valueStr);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(3521)
					value = _g4;
				}
				else if (  ( _switch_43==HX_CSTRING("color")) ||  ( _switch_43==HX_CSTRING("hex"))){
					HX_STACK_LINE(3522)
					int _g5;		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(3522)
					{
						HX_STACK_LINE(3522)
						bool safe = false;		HX_STACK_VAR(safe,"safe");
						HX_STACK_LINE(3522)
						int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
						HX_STACK_LINE(3522)
						Dynamic return_val = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(valueStr);		HX_STACK_VAR(return_val,"return_val");
						HX_STACK_LINE(3522)
						if (((return_val == null()))){
							HX_STACK_LINE(3522)
							if ((!(safe))){
								HX_STACK_LINE(3522)
								HX_STACK_DO_THROW((HX_CSTRING("U.parseHex() unable to parse hex String ") + valueStr));
							}
							else{
								HX_STACK_LINE(3522)
								return_val = default_color;
							}
						}
						HX_STACK_LINE(3522)
						_g5 = return_val;
					}
					HX_STACK_LINE(3522)
					value = _g5;
				}
				else if (  ( _switch_43==HX_CSTRING("bool")) ||  ( _switch_43==HX_CSTRING("boolean"))){
					HX_STACK_LINE(3524)
					::String str = ::String(valueStr);		HX_STACK_VAR(str,"str");
					HX_STACK_LINE(3525)
					::String _g6 = str.toLowerCase();		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(3525)
					str = _g6;
					HX_STACK_LINE(3526)
					if (((bool((str == HX_CSTRING("true"))) || bool((str == HX_CSTRING("1")))))){
						HX_STACK_LINE(3527)
						value = true;
					}
					else{
						HX_STACK_LINE(3529)
						value = false;
					}
				}
				struct _Function_3_1{
					inline static Dynamic Block( int &sort,Dynamic &value){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI.hx",3534,0xf354486a)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("sort") , sort,false);
							__result->Add(HX_CSTRING("value") , value,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(3534)
				params->__Field(HX_CSTRING("push"),true)(_Function_3_1::Block(sort,value));
			}
;
		}
		HX_STACK_LINE(3539)
		params->__Field(HX_CSTRING("sort"),true)(::flixel::addons::ui::FlxUI_obj::sortParams_dyn());
		HX_STACK_LINE(3542)
		{
			HX_STACK_LINE(3542)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(3542)
			int _g2 = params->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(3542)
			while((true)){
				HX_STACK_LINE(3542)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(3542)
					break;
				}
				HX_STACK_LINE(3542)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(3543)
				hx::IndexRef((params).mPtr,i) = params->__GetItem(i)->__Field(HX_CSTRING("value"),true);
			}
		}
	}
	HX_STACK_LINE(3546)
	return params;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,getParams,return )

int FlxUI_obj::sortParams( Dynamic a,Dynamic b){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","sortParams",0x40e314bd,"flixel.addons.ui.FlxUI.sortParams","flixel/addons/ui/FlxUI.hx",3549,0xf354486a)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(3550)
	if (((a->__Field(HX_CSTRING("sort"),true) < b->__Field(HX_CSTRING("sort"),true)))){
		HX_STACK_LINE(3550)
		return (int)-1;
	}
	HX_STACK_LINE(3551)
	if (((a->__Field(HX_CSTRING("sort"),true) > b->__Field(HX_CSTRING("sort"),true)))){
		HX_STACK_LINE(3551)
		return (int)1;
	}
	HX_STACK_LINE(3552)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,sortParams,return )


FlxUI_obj::FlxUI_obj()
{
}

void FlxUI_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUI);
	HX_MARK_MEMBER_NAME(do_safe_input_delay,"do_safe_input_delay");
	HX_MARK_MEMBER_NAME(safe_input_delay_time,"safe_input_delay_time");
	HX_MARK_MEMBER_NAME(failed,"failed");
	HX_MARK_MEMBER_NAME(failed_by,"failed_by");
	HX_MARK_MEMBER_NAME(liveFilePath,"liveFilePath");
	HX_MARK_MEMBER_NAME(focus,"focus");
	HX_MARK_MEMBER_NAME(getTextFallback,"getTextFallback");
	HX_MARK_MEMBER_NAME(_ptr_tongue,"_ptr_tongue");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_group_index,"_group_index");
	HX_MARK_MEMBER_NAME(_asset_index,"_asset_index");
	HX_MARK_MEMBER_NAME(_definition_index,"_definition_index");
	HX_MARK_MEMBER_NAME(_variable_index,"_variable_index");
	HX_MARK_MEMBER_NAME(_mode_index,"_mode_index");
	HX_MARK_MEMBER_NAME(_curr_mode,"_curr_mode");
	HX_MARK_MEMBER_NAME(_ptr,"_ptr");
	HX_MARK_MEMBER_NAME(_superIndexUI,"_superIndexUI");
	HX_MARK_MEMBER_NAME(_safe_input_delay_elapsed,"_safe_input_delay_elapsed");
	HX_MARK_MEMBER_NAME(_failure_checks,"_failure_checks");
	::flixel::addons::ui::FlxUIGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUI_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(do_safe_input_delay,"do_safe_input_delay");
	HX_VISIT_MEMBER_NAME(safe_input_delay_time,"safe_input_delay_time");
	HX_VISIT_MEMBER_NAME(failed,"failed");
	HX_VISIT_MEMBER_NAME(failed_by,"failed_by");
	HX_VISIT_MEMBER_NAME(liveFilePath,"liveFilePath");
	HX_VISIT_MEMBER_NAME(focus,"focus");
	HX_VISIT_MEMBER_NAME(getTextFallback,"getTextFallback");
	HX_VISIT_MEMBER_NAME(_ptr_tongue,"_ptr_tongue");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_group_index,"_group_index");
	HX_VISIT_MEMBER_NAME(_asset_index,"_asset_index");
	HX_VISIT_MEMBER_NAME(_definition_index,"_definition_index");
	HX_VISIT_MEMBER_NAME(_variable_index,"_variable_index");
	HX_VISIT_MEMBER_NAME(_mode_index,"_mode_index");
	HX_VISIT_MEMBER_NAME(_curr_mode,"_curr_mode");
	HX_VISIT_MEMBER_NAME(_ptr,"_ptr");
	HX_VISIT_MEMBER_NAME(_superIndexUI,"_superIndexUI");
	HX_VISIT_MEMBER_NAME(_safe_input_delay_elapsed,"_safe_input_delay_elapsed");
	HX_VISIT_MEMBER_NAME(_failure_checks,"_failure_checks");
	::flixel::addons::ui::FlxUIGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUI_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"_ptr") ) { return _ptr; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"event") ) { return event_dyn(); }
		if (HX_FIELD_EQ(inName,"focus") ) { return focus; }
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_delta") ) { return _delta_dyn(); }
		if (HX_FIELD_EQ(inName,"failed") ) { return failed; }
		if (HX_FIELD_EQ(inName,"tongue") ) { return get_tongue(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadX") ) { return _loadX_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadY") ) { return _loadY_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"request") ) { return request_dyn(); }
		if (HX_FIELD_EQ(inName,"_center") ) { return _center_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"setMode") ) { return setMode_dyn(); }
		if (HX_FIELD_EQ(inName,"getMode") ) { return getMode_dyn(); }
		if (HX_FIELD_EQ(inName,"doRound") ) { return doRound_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getEvent") ) { return getEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"addAsset") ) { return addAsset_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadSub") ) { return _loadSub_dyn(); }
		if (HX_FIELD_EQ(inName,"currMode") ) { return get_currMode(); }
		if (HX_FIELD_EQ(inName,"getGroup") ) { return getGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"hasAsset") ) { return hasAsset_dyn(); }
		if (HX_FIELD_EQ(inName,"getAsset") ) { return getAsset_dyn(); }
		if (HX_FIELD_EQ(inName,"_doAlign") ) { return _doAlign_dyn(); }
		if (HX_FIELD_EQ(inName,"createUI") ) { return createUI_dyn(); }
		if (HX_FIELD_EQ(inName,"getRound") ) { return getRound_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getParams") ) { return getParams_dyn(); }
		if (HX_FIELD_EQ(inName,"failed_by") ) { return failed_by; }
		if (HX_FIELD_EQ(inName,"set_focus") ) { return set_focus_dyn(); }
		if (HX_FIELD_EQ(inName,"callEvent") ) { return callEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"showGroup") ) { return showGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"showAsset") ) { return showAsset_dyn(); }
		if (HX_FIELD_EQ(inName,"_postLoad") ) { return _postLoad_dyn(); }
		if (HX_FIELD_EQ(inName,"showThing") ) { return showThing_dyn(); }
		if (HX_FIELD_EQ(inName,"loadThing") ) { return loadThing_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadText") ) { return _loadText_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadTest") ) { return _loadTest_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadLine") ) { return _loadLine_dyn(); }
		if (HX_FIELD_EQ(inName,"thisWidth") ) { return thisWidth_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"forceFocus") ) { return forceFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"sortParams") ) { return sortParams_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tongue") ) { return get_tongue_dyn(); }
		if (HX_FIELD_EQ(inName,"set_tongue") ) { return set_tongue_dyn(); }
		if (HX_FIELD_EQ(inName,"_tongueSet") ) { return _tongueSet_dyn(); }
		if (HX_FIELD_EQ(inName,"getRequest") ) { return getRequest_dyn(); }
		if (HX_FIELD_EQ(inName,"getFlxText") ) { return getFlxText_dyn(); }
		if (HX_FIELD_EQ(inName,"_curr_mode") ) { return _curr_mode; }
		if (HX_FIELD_EQ(inName,"_loadThing") ) { return _loadThing_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadWidth") ) { return _loadWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"thisHeight") ) { return thisHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadColor") ) { return _loadColor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_ptr_tongue") ) { return _ptr_tongue; }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAsset") ) { return removeAsset_dyn(); }
		if (HX_FIELD_EQ(inName,"getVariable") ) { return getVariable_dyn(); }
		if (HX_FIELD_EQ(inName,"_mode_index") ) { return _mode_index; }
		if (HX_FIELD_EQ(inName,"_loadHeight") ) { return _loadHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"_alignThing") ) { return _alignThing_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadLayout") ) { return _loadLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadButton") ) { return _loadButton_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadRegion") ) { return _loadRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadSprite") ) { return _loadSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"_getStretch") ) { return _getStretch_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadBorder") ) { return _loadBorder_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"liveFilePath") ) { return liveFilePath; }
		if (HX_FIELD_EQ(inName,"replaceAsset") ) { return replaceAsset_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadGlobals") ) { return _loadGlobals_dyn(); }
		if (HX_FIELD_EQ(inName,"get_currMode") ) { return get_currMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_currMode") ) { return set_currMode_dyn(); }
		if (HX_FIELD_EQ(inName,"getAllAssets") ) { return getAllAssets_dyn(); }
		if (HX_FIELD_EQ(inName,"getAssetKeys") ) { return getAssetKeys_dyn(); }
		if (HX_FIELD_EQ(inName,"_group_index") ) { return _group_index; }
		if (HX_FIELD_EQ(inName,"_asset_index") ) { return _asset_index; }
		if (HX_FIELD_EQ(inName,"_loadCompass") ) { return _loadCompass_dyn(); }
		if (HX_FIELD_EQ(inName,"_changeThing") ) { return _changeThing_dyn(); }
		if (HX_FIELD_EQ(inName,"_resizeThing") ) { return _resizeThing_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadTestSub") ) { return _loadTestSub_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadTabMenu") ) { return _loadTabMenu_dyn(); }
		if (HX_FIELD_EQ(inName,"_getDataSize") ) { return _getDataSize_dyn(); }
		if (HX_FIELD_EQ(inName,"_doOperation") ) { return _doOperation_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadFontDef") ) { return _loadFontDef_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setSuperIndex") ) { return setSuperIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"checkVariable") ) { return checkVariable_dyn(); }
		if (HX_FIELD_EQ(inName,"getDefinition") ) { return getDefinition_dyn(); }
		if (HX_FIELD_EQ(inName,"_superIndexUI") ) { return _superIndexUI; }
		if (HX_FIELD_EQ(inName,"_checkFailure") ) { return _checkFailure_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadTileTest") ) { return _loadTileTest_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadCheckBox") ) { return _loadCheckBox_dyn(); }
		if (HX_FIELD_EQ(inName,"parseVarValue") ) { return parseVarValue_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadTileRule") ) { return _loadTileRule_dyn(); }
		if (HX_FIELD_EQ(inName,"loadScaledSrc") ) { return loadScaledSrc_dyn(); }
		if (HX_FIELD_EQ(inName,"_getAnchorPos") ) { return _getAnchorPos_dyn(); }
		if (HX_FIELD_EQ(inName,"_getOperation") ) { return _getOperation_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadPosition") ) { return _loadPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadFontFace") ) { return _loadFontFace_dyn(); }
		if (HX_FIELD_EQ(inName,"_onFinishLoad") ) { return _onFinishLoad_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getLeafUIState") ) { return getLeafUIState_dyn(); }
		if (HX_FIELD_EQ(inName,"replaceInGroup") ) { return replaceInGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"_postLoadThing") ) { return _postLoadThing_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadInputText") ) { return _loadInputText_dyn(); }
		if (HX_FIELD_EQ(inName,"getResizeRatio") ) { return getResizeRatio_dyn(); }
		if (HX_FIELD_EQ(inName,"calcMaxMinSize") ) { return calcMaxMinSize_dyn(); }
		if (HX_FIELD_EQ(inName,"formatFromCode") ) { return formatFromCode_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"consolidateData") ) { return consolidateData_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadBitmapRect") ) { return _loadBitmapRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getTextFallback") ) { return getTextFallback; }
		if (HX_FIELD_EQ(inName,"_variable_index") ) { return _variable_index; }
		if (HX_FIELD_EQ(inName,"_failure_checks") ) { return _failure_checks; }
		if (HX_FIELD_EQ(inName,"_loadRadioGroup") ) { return _loadRadioGroup_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"applyNodeChanges") ) { return applyNodeChanges_dyn(); }
		if (HX_FIELD_EQ(inName,"getAssetProperty") ) { return getAssetProperty_dyn(); }
		if (HX_FIELD_EQ(inName,"formatButtonText") ) { return formatButtonText_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_definition_index") ) { return _definition_index; }
		if (HX_FIELD_EQ(inName,"_loadDropDownMenu") ) { return _loadDropDownMenu_dyn(); }
		if (HX_FIELD_EQ(inName,"_load9SliceSprite") ) { return _load9SliceSprite_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_changeParamsThing") ) { return _changeParamsThing_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"do_safe_input_delay") ) { return do_safe_input_delay; }
		if (HX_FIELD_EQ(inName,"_loadNumericStepper") ) { return _loadNumericStepper_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setWidgetSuppression") ) { return setWidgetSuppression_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"safe_input_delay_time") ) { return safe_input_delay_time; }
		if (HX_FIELD_EQ(inName,"getLabelStyleFromData") ) { return getLabelStyleFromData_dyn(); }
		if (HX_FIELD_EQ(inName,"applyNodeConditionals") ) { return applyNodeConditionals_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_safe_input_delay_elapsed") ) { return _safe_input_delay_elapsed; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"getLabelStyleFromDefinition") ) { return getLabelStyleFromDefinition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUI_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ptr") ) { _ptr=inValue.Cast< ::flixel::addons::ui::interfaces::IEventGetter >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp) return set_focus(inValue);focus=inValue.Cast< ::flixel::addons::ui::interfaces::IFlxUIWidget >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< ::haxe::xml::Fast >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"failed") ) { failed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tongue") ) { return set_tongue(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"currMode") ) { return set_currMode(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"failed_by") ) { failed_by=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_curr_mode") ) { _curr_mode=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_ptr_tongue") ) { _ptr_tongue=inValue.Cast< ::flixel::addons::ui::interfaces::IFireTongue >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mode_index") ) { _mode_index=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"liveFilePath") ) { liveFilePath=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_group_index") ) { _group_index=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_asset_index") ) { _asset_index=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_superIndexUI") ) { _superIndexUI=inValue.Cast< ::flixel::addons::ui::FlxUI >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getTextFallback") ) { getTextFallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_variable_index") ) { _variable_index=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_failure_checks") ) { _failure_checks=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_definition_index") ) { _definition_index=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"do_safe_input_delay") ) { do_safe_input_delay=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"safe_input_delay_time") ) { safe_input_delay_time=inValue.Cast< Float >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_safe_input_delay_elapsed") ) { _safe_input_delay_elapsed=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUI_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("do_safe_input_delay"));
	outFields->push(HX_CSTRING("safe_input_delay_time"));
	outFields->push(HX_CSTRING("failed"));
	outFields->push(HX_CSTRING("failed_by"));
	outFields->push(HX_CSTRING("liveFilePath"));
	outFields->push(HX_CSTRING("tongue"));
	outFields->push(HX_CSTRING("focus"));
	outFields->push(HX_CSTRING("_ptr_tongue"));
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("currMode"));
	outFields->push(HX_CSTRING("_group_index"));
	outFields->push(HX_CSTRING("_asset_index"));
	outFields->push(HX_CSTRING("_definition_index"));
	outFields->push(HX_CSTRING("_variable_index"));
	outFields->push(HX_CSTRING("_mode_index"));
	outFields->push(HX_CSTRING("_curr_mode"));
	outFields->push(HX_CSTRING("_ptr"));
	outFields->push(HX_CSTRING("_superIndexUI"));
	outFields->push(HX_CSTRING("_safe_input_delay_elapsed"));
	outFields->push(HX_CSTRING("_failure_checks"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("event"),
	HX_CSTRING("forceFocus"),
	HX_CSTRING("getLeafUIState"),
	HX_CSTRING("request"),
	HX_CSTRING("_delta"),
	HX_CSTRING("_center"),
	HX_CSTRING("consolidateData"),
	HX_CSTRING("_loadBitmapRect"),
	HX_CSTRING("getParams"),
	HX_CSTRING("sortParams"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxUI_obj,do_safe_input_delay),HX_CSTRING("do_safe_input_delay")},
	{hx::fsFloat,(int)offsetof(FlxUI_obj,safe_input_delay_time),HX_CSTRING("safe_input_delay_time")},
	{hx::fsBool,(int)offsetof(FlxUI_obj,failed),HX_CSTRING("failed")},
	{hx::fsFloat,(int)offsetof(FlxUI_obj,failed_by),HX_CSTRING("failed_by")},
	{hx::fsString,(int)offsetof(FlxUI_obj,liveFilePath),HX_CSTRING("liveFilePath")},
	{hx::fsObject /*::flixel::addons::ui::interfaces::IFlxUIWidget*/ ,(int)offsetof(FlxUI_obj,focus),HX_CSTRING("focus")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUI_obj,getTextFallback),HX_CSTRING("getTextFallback")},
	{hx::fsObject /*::flixel::addons::ui::interfaces::IFireTongue*/ ,(int)offsetof(FlxUI_obj,_ptr_tongue),HX_CSTRING("_ptr_tongue")},
	{hx::fsObject /*::haxe::xml::Fast*/ ,(int)offsetof(FlxUI_obj,_data),HX_CSTRING("_data")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxUI_obj,_group_index),HX_CSTRING("_group_index")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxUI_obj,_asset_index),HX_CSTRING("_asset_index")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxUI_obj,_definition_index),HX_CSTRING("_definition_index")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxUI_obj,_variable_index),HX_CSTRING("_variable_index")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxUI_obj,_mode_index),HX_CSTRING("_mode_index")},
	{hx::fsString,(int)offsetof(FlxUI_obj,_curr_mode),HX_CSTRING("_curr_mode")},
	{hx::fsObject /*::flixel::addons::ui::interfaces::IEventGetter*/ ,(int)offsetof(FlxUI_obj,_ptr),HX_CSTRING("_ptr")},
	{hx::fsObject /*::flixel::addons::ui::FlxUI*/ ,(int)offsetof(FlxUI_obj,_superIndexUI),HX_CSTRING("_superIndexUI")},
	{hx::fsFloat,(int)offsetof(FlxUI_obj,_safe_input_delay_elapsed),HX_CSTRING("_safe_input_delay_elapsed")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxUI_obj,_failure_checks),HX_CSTRING("_failure_checks")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("do_safe_input_delay"),
	HX_CSTRING("safe_input_delay_time"),
	HX_CSTRING("failed"),
	HX_CSTRING("failed_by"),
	HX_CSTRING("liveFilePath"),
	HX_CSTRING("get_tongue"),
	HX_CSTRING("set_tongue"),
	HX_CSTRING("focus"),
	HX_CSTRING("set_focus"),
	HX_CSTRING("getTextFallback"),
	HX_CSTRING("_ptr_tongue"),
	HX_CSTRING("_data"),
	HX_CSTRING("_tongueSet"),
	HX_CSTRING("callEvent"),
	HX_CSTRING("getEvent"),
	HX_CSTRING("getRequest"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("setWidgetSuppression"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("setSuperIndex"),
	HX_CSTRING("update"),
	HX_CSTRING("showGroup"),
	HX_CSTRING("showAsset"),
	HX_CSTRING("removeAsset"),
	HX_CSTRING("addAsset"),
	HX_CSTRING("replaceAsset"),
	HX_CSTRING("destroy"),
	HX_CSTRING("load"),
	HX_CSTRING("_loadSub"),
	HX_CSTRING("_loadGlobals"),
	HX_CSTRING("_postLoad"),
	HX_CSTRING("get_currMode"),
	HX_CSTRING("set_currMode"),
	HX_CSTRING("setMode"),
	HX_CSTRING("showThing"),
	HX_CSTRING("getGroup"),
	HX_CSTRING("getFlxText"),
	HX_CSTRING("getAllAssets"),
	HX_CSTRING("getAssetKeys"),
	HX_CSTRING("hasAsset"),
	HX_CSTRING("getAsset"),
	HX_CSTRING("getMode"),
	HX_CSTRING("getLabelStyleFromDefinition"),
	HX_CSTRING("getLabelStyleFromData"),
	HX_CSTRING("checkVariable"),
	HX_CSTRING("getVariable"),
	HX_CSTRING("getDefinition"),
	HX_CSTRING("_group_index"),
	HX_CSTRING("_asset_index"),
	HX_CSTRING("_definition_index"),
	HX_CSTRING("_variable_index"),
	HX_CSTRING("_mode_index"),
	HX_CSTRING("_curr_mode"),
	HX_CSTRING("_ptr"),
	HX_CSTRING("_superIndexUI"),
	HX_CSTRING("_safe_input_delay_elapsed"),
	HX_CSTRING("_failure_checks"),
	HX_CSTRING("replaceInGroup"),
	HX_CSTRING("applyNodeConditionals"),
	HX_CSTRING("applyNodeChanges"),
	HX_CSTRING("loadThing"),
	HX_CSTRING("_loadThing"),
	HX_CSTRING("_loadX"),
	HX_CSTRING("_loadY"),
	HX_CSTRING("_loadWidth"),
	HX_CSTRING("_loadHeight"),
	HX_CSTRING("_loadCompass"),
	HX_CSTRING("_changeParamsThing"),
	HX_CSTRING("_changeThing"),
	HX_CSTRING("_alignThing"),
	HX_CSTRING("_doAlign"),
	HX_CSTRING("_checkFailure"),
	HX_CSTRING("_resizeThing"),
	HX_CSTRING("_postLoadThing"),
	HX_CSTRING("_loadTileTest"),
	HX_CSTRING("_loadText"),
	HX_CSTRING("_loadInputText"),
	HX_CSTRING("_loadRadioGroup"),
	HX_CSTRING("_loadCheckBox"),
	HX_CSTRING("_loadDropDownMenu"),
	HX_CSTRING("_loadTest"),
	HX_CSTRING("_loadTestSub"),
	HX_CSTRING("parseVarValue"),
	HX_CSTRING("_loadLayout"),
	HX_CSTRING("createUI"),
	HX_CSTRING("_loadTabMenu"),
	HX_CSTRING("_loadNumericStepper"),
	HX_CSTRING("getResizeRatio"),
	HX_CSTRING("_loadButton"),
	HX_CSTRING("_loadRegion"),
	HX_CSTRING("_load9SliceSprite"),
	HX_CSTRING("_loadTileRule"),
	HX_CSTRING("_loadLine"),
	HX_CSTRING("_loadSprite"),
	HX_CSTRING("loadScaledSrc"),
	HX_CSTRING("thisWidth"),
	HX_CSTRING("thisHeight"),
	HX_CSTRING("_getAnchorPos"),
	HX_CSTRING("getRound"),
	HX_CSTRING("doRound"),
	HX_CSTRING("calcMaxMinSize"),
	HX_CSTRING("_getDataSize"),
	HX_CSTRING("_getOperation"),
	HX_CSTRING("_doOperation"),
	HX_CSTRING("_getStretch"),
	HX_CSTRING("getAssetProperty"),
	HX_CSTRING("_loadPosition"),
	HX_CSTRING("_loadBorder"),
	HX_CSTRING("_loadColor"),
	HX_CSTRING("_loadFontDef"),
	HX_CSTRING("_loadFontFace"),
	HX_CSTRING("_onFinishLoad"),
	HX_CSTRING("getText"),
	HX_CSTRING("formatFromCode"),
	HX_CSTRING("formatButtonText"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUI_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUI_obj::__mClass,"__mClass");
};

#endif

Class FlxUI_obj::__mClass;

void FlxUI_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxUI"), hx::TCanCast< FlxUI_obj> ,sStaticFields,sMemberFields,
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

void FlxUI_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
