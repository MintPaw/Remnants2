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
#ifndef INCLUDED_flixel_addons_ui_FlxUIRegion
#include <flixel/addons/ui/FlxUIRegion.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUIRegion_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_W,hx::Null< Float >  __o_H)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUIRegion","new",0xbea3949b,"flixel.addons.ui.FlxUIRegion.new","flixel/addons/ui/FlxUIRegion.hx",12,0xd4d800d6)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_W,"W")
HX_STACK_ARG(__o_H,"H")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float W = __o_W.Default(16);
Float H = __o_H.Default(16);
{
	HX_STACK_LINE(14)
	this->broadcastToFlxUI = true;
	HX_STACK_LINE(19)
	super::__construct(X,Y,null());
	HX_STACK_LINE(20)
	this->makeGraphic((int)1,(int)1,(int)0,null(),null());
	HX_STACK_LINE(21)
	this->resize(W,H);
}
;
	return null();
}

//FlxUIRegion_obj::~FlxUIRegion_obj() { }

Dynamic FlxUIRegion_obj::__CreateEmpty() { return  new FlxUIRegion_obj; }
hx::ObjectPtr< FlxUIRegion_obj > FlxUIRegion_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_W,hx::Null< Float >  __o_H)
{  hx::ObjectPtr< FlxUIRegion_obj > result = new FlxUIRegion_obj();
	result->__construct(__o_X,__o_Y,__o_W,__o_H);
	return result;}

Dynamic FlxUIRegion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUIRegion_obj > result = new FlxUIRegion_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

hx::Object *FlxUIRegion_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::IFlxSprite_obj)) return operator ::flixel::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::IFlxBasic_obj)) return operator ::flixel::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IResizable_obj)) return operator ::flixel::addons::ui::interfaces::IResizable_obj *();
	return super::__ToInterface(inType);
}

Void FlxUIRegion_obj::resize( Float w,Float h){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIRegion","resize",0x9a5dac99,"flixel.addons.ui.FlxUIRegion.resize","flixel/addons/ui/FlxUIRegion.hx",24,0xd4d800d6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(25)
		this->set_width(w);
		HX_STACK_LINE(26)
		this->set_height(h);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRegion_obj,resize,(void))


FlxUIRegion_obj::FlxUIRegion_obj()
{
}

void FlxUIRegion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIRegion);
	HX_MARK_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_MARK_MEMBER_NAME(id,"id");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIRegion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_VISIT_MEMBER_NAME(id,"id");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUIRegion_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { return broadcastToFlxUI; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUIRegion_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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

void FlxUIRegion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("broadcastToFlxUI"));
	outFields->push(HX_CSTRING("id"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxUIRegion_obj,broadcastToFlxUI),HX_CSTRING("broadcastToFlxUI")},
	{hx::fsString,(int)offsetof(FlxUIRegion_obj,id),HX_CSTRING("id")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("broadcastToFlxUI"),
	HX_CSTRING("id"),
	HX_CSTRING("resize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIRegion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIRegion_obj::__mClass,"__mClass");
};

#endif

Class FlxUIRegion_obj::__mClass;

void FlxUIRegion_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxUIRegion"), hx::TCanCast< FlxUIRegion_obj> ,sStaticFields,sMemberFields,
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

void FlxUIRegion_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
