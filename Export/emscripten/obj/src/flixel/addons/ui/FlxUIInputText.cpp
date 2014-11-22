#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_addons_ui_FlxInputText
#include <flixel/addons/ui/FlxInputText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUI
#include <flixel/addons/ui/FlxUI.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIInputText
#include <flixel/addons/ui/FlxUIInputText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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

Void FlxUIInputText_obj::__construct(Dynamic X,Dynamic Y,Dynamic Width,::String Text,Dynamic size,Dynamic TextColor,Dynamic BackgroundColor,Dynamic EmbeddedFont)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUIInputText","new",0x1be658b4,"flixel.addons.ui.FlxUIInputText.new","flixel/addons/ui/FlxUIInputText.hx",10,0x43f86a3b)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(Width,"Width")
HX_STACK_ARG(Text,"Text")
HX_STACK_ARG(size,"size")
HX_STACK_ARG(TextColor,"TextColor")
HX_STACK_ARG(BackgroundColor,"BackgroundColor")
HX_STACK_ARG(EmbeddedFont,"EmbeddedFont")
{
	HX_STACK_LINE(14)
	this->broadcastToFlxUI = true;
	HX_STACK_LINE(10)
	super::__construct(X,Y,Width,Text,size,TextColor,BackgroundColor,EmbeddedFont);
}
;
	return null();
}

//FlxUIInputText_obj::~FlxUIInputText_obj() { }

Dynamic FlxUIInputText_obj::__CreateEmpty() { return  new FlxUIInputText_obj; }
hx::ObjectPtr< FlxUIInputText_obj > FlxUIInputText_obj::__new(Dynamic X,Dynamic Y,Dynamic Width,::String Text,Dynamic size,Dynamic TextColor,Dynamic BackgroundColor,Dynamic EmbeddedFont)
{  hx::ObjectPtr< FlxUIInputText_obj > result = new FlxUIInputText_obj();
	result->__construct(X,Y,Width,Text,size,TextColor,BackgroundColor,EmbeddedFont);
	return result;}

Dynamic FlxUIInputText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUIInputText_obj > result = new FlxUIInputText_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}

hx::Object *FlxUIInputText_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::IFlxSprite_obj)) return operator ::flixel::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::IFlxBasic_obj)) return operator ::flixel::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IResizable_obj)) return operator ::flixel::addons::ui::interfaces::IResizable_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IHasParams_obj)) return operator ::flixel::addons::ui::interfaces::IHasParams_obj *();
	return super::__ToInterface(inType);
}

Void FlxUIInputText_obj::resize( Float w,Float h){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIInputText","resize",0x10b3be20,"flixel.addons.ui.FlxUIInputText.resize","flixel/addons/ui/FlxUIInputText.hx",21,0x43f86a3b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(22)
		this->set_width(w);
		HX_STACK_LINE(23)
		this->set_height(h);
		HX_STACK_LINE(24)
		this->calcFrame(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIInputText_obj,resize,(void))

Void FlxUIInputText_obj::onChange( ::String action){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIInputText","onChange",0x695a4f1b,"flixel.addons.ui.FlxUIInputText.onChange","flixel/addons/ui/FlxUIInputText.hx",27,0x43f86a3b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(action,"action")
		HX_STACK_LINE(28)
		this->super::onChange(action);
		HX_STACK_LINE(29)
		if ((this->broadcastToFlxUI)){
			HX_STACK_LINE(30)
			::String _switch_1 = (action);
			if (  ( _switch_1==HX_CSTRING("enter"))){
				HX_STACK_LINE(32)
				::String _g = this->textField->get_text();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(32)
				::flixel::addons::ui::FlxUI_obj::event(HX_CSTRING("enter_input_text"),hx::ObjectPtr<OBJ_>(this),_g,this->params);
			}
			else if (  ( _switch_1==HX_CSTRING("delete")) ||  ( _switch_1==HX_CSTRING("backspace"))){
				HX_STACK_LINE(35)
				::String _g1 = this->textField->get_text();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(35)
				::flixel::addons::ui::FlxUI_obj::event(HX_CSTRING("delete_input_text"),hx::ObjectPtr<OBJ_>(this),_g1,this->params);
				HX_STACK_LINE(36)
				::String _g2 = this->textField->get_text();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(36)
				::flixel::addons::ui::FlxUI_obj::event(HX_CSTRING("change_input_text"),hx::ObjectPtr<OBJ_>(this),_g2,this->params);
			}
			else if (  ( _switch_1==HX_CSTRING("input"))){
				HX_STACK_LINE(38)
				::String _g3 = this->textField->get_text();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(38)
				::flixel::addons::ui::FlxUI_obj::event(HX_CSTRING("input_input_text"),hx::ObjectPtr<OBJ_>(this),_g3,this->params);
				HX_STACK_LINE(39)
				::String _g4 = this->textField->get_text();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(39)
				::flixel::addons::ui::FlxUI_obj::event(HX_CSTRING("change_input_text"),hx::ObjectPtr<OBJ_>(this),_g4,this->params);
			}
		}
	}
return null();
}


::String FlxUIInputText_obj::CHANGE_EVENT;

::String FlxUIInputText_obj::ENTER_EVENT;

::String FlxUIInputText_obj::DELETE_EVENT;

::String FlxUIInputText_obj::INPUT_EVENT;


FlxUIInputText_obj::FlxUIInputText_obj()
{
}

void FlxUIInputText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIInputText);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	::flixel::addons::ui::FlxInputText_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIInputText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	::flixel::addons::ui::FlxInputText_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUIInputText_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { return onChange_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { return broadcastToFlxUI; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUIInputText_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { broadcastToFlxUI=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUIInputText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("broadcastToFlxUI"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CHANGE_EVENT"),
	HX_CSTRING("ENTER_EVENT"),
	HX_CSTRING("DELETE_EVENT"),
	HX_CSTRING("INPUT_EVENT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(FlxUIInputText_obj,id),HX_CSTRING("id")},
	{hx::fsBool,(int)offsetof(FlxUIInputText_obj,broadcastToFlxUI),HX_CSTRING("broadcastToFlxUI")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("broadcastToFlxUI"),
	HX_CSTRING("resize"),
	HX_CSTRING("onChange"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIInputText_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxUIInputText_obj::CHANGE_EVENT,"CHANGE_EVENT");
	HX_MARK_MEMBER_NAME(FlxUIInputText_obj::ENTER_EVENT,"ENTER_EVENT");
	HX_MARK_MEMBER_NAME(FlxUIInputText_obj::DELETE_EVENT,"DELETE_EVENT");
	HX_MARK_MEMBER_NAME(FlxUIInputText_obj::INPUT_EVENT,"INPUT_EVENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIInputText_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxUIInputText_obj::CHANGE_EVENT,"CHANGE_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUIInputText_obj::ENTER_EVENT,"ENTER_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUIInputText_obj::DELETE_EVENT,"DELETE_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUIInputText_obj::INPUT_EVENT,"INPUT_EVENT");
};

#endif

Class FlxUIInputText_obj::__mClass;

void FlxUIInputText_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxUIInputText"), hx::TCanCast< FlxUIInputText_obj> ,sStaticFields,sMemberFields,
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

void FlxUIInputText_obj::__boot()
{
	CHANGE_EVENT= HX_CSTRING("change_input_text");
	ENTER_EVENT= HX_CSTRING("enter_input_text");
	DELETE_EVENT= HX_CSTRING("delete_input_text");
	INPUT_EVENT= HX_CSTRING("input_input_text");
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
