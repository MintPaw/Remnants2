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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
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
#ifndef INCLUDED_openfl__v2_text_TextFormat
#include <openfl/_v2/text/TextFormat.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUIText_obj::__construct(Dynamic X,Dynamic Y,Dynamic FieldWidth,::String Text,Dynamic Size,Dynamic EmbeddedFont)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUIText","new",0x88106994,"flixel.addons.ui.FlxUIText.new","flixel/addons/ui/FlxUIText.hx",15,0x557f53bd)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(FieldWidth,"FieldWidth")
HX_STACK_ARG(Text,"Text")
HX_STACK_ARG(Size,"Size")
HX_STACK_ARG(EmbeddedFont,"EmbeddedFont")
{
	HX_STACK_LINE(17)
	this->broadcastToFlxUI = true;
	HX_STACK_LINE(15)
	super::__construct(X,Y,FieldWidth,Text,Size,EmbeddedFont);
}
;
	return null();
}

//FlxUIText_obj::~FlxUIText_obj() { }

Dynamic FlxUIText_obj::__CreateEmpty() { return  new FlxUIText_obj; }
hx::ObjectPtr< FlxUIText_obj > FlxUIText_obj::__new(Dynamic X,Dynamic Y,Dynamic FieldWidth,::String Text,Dynamic Size,Dynamic EmbeddedFont)
{  hx::ObjectPtr< FlxUIText_obj > result = new FlxUIText_obj();
	result->__construct(X,Y,FieldWidth,Text,Size,EmbeddedFont);
	return result;}

Dynamic FlxUIText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUIText_obj > result = new FlxUIText_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

hx::Object *FlxUIText_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::IFlxSprite_obj)) return operator ::flixel::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::IFlxBasic_obj)) return operator ::flixel::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IResizable_obj)) return operator ::flixel::addons::ui::interfaces::IResizable_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IHasParams_obj)) return operator ::flixel::addons::ui::interfaces::IHasParams_obj *();
	return super::__ToInterface(inType);
}

Void FlxUIText_obj::resize( Float w,Float h){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIText","resize",0x42437940,"flixel.addons.ui.FlxUIText.resize","flixel/addons/ui/FlxUIText.hx",23,0x557f53bd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(24)
		this->set_width(w);
		HX_STACK_LINE(25)
		this->set_height(h);
		HX_STACK_LINE(27)
		Float old_size = this->_defaultFormat->size;		HX_STACK_VAR(old_size,"old_size");
		HX_STACK_LINE(28)
		Float _g = this->get_height();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(28)
		int _g1 = this->graphic->bitmap->get_height();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(28)
		Float diff = (_g - _g1);		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(30)
		::String oldText = this->textField->get_text();		HX_STACK_VAR(oldText,"oldText");
		HX_STACK_LINE(36)
		int failsafe = (int)0;		HX_STACK_VAR(failsafe,"failsafe");
		HX_STACK_LINE(38)
		int numLines = this->textField->get_numLines();		HX_STACK_VAR(numLines,"numLines");
		HX_STACK_LINE(40)
		while((true)){
			HX_STACK_LINE(40)
			if ((!(((bool((diff > (int)0)) && bool((failsafe < (int)999))))))){
				HX_STACK_LINE(40)
				break;
			}
			HX_STACK_LINE(42)
			(failsafe)++;
			HX_STACK_LINE(43)
			{
				HX_STACK_LINE(43)
				::flixel::addons::ui::FlxUIText _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(43)
				Float _g11 = _g2->_defaultFormat->size;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(43)
				_g2->set_size((_g11 + (int)1));
				HX_STACK_LINE(43)
				_g11;
			}
			HX_STACK_LINE(44)
			int _g2 = this->textField->get_numLines();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(44)
			if (((_g2 > numLines))){
				HX_STACK_LINE(46)
				{
					HX_STACK_LINE(46)
					::flixel::addons::ui::FlxUIText _g3 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(46)
					Float _g11 = _g3->_defaultFormat->size;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(46)
					_g3->set_size((_g11 - (int)1));
					HX_STACK_LINE(46)
					_g11;
				}
				HX_STACK_LINE(47)
				break;
			}
			HX_STACK_LINE(49)
			this->calcFrame(null());
			HX_STACK_LINE(54)
			int _g3 = this->graphic->bitmap->get_height();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(54)
			Float _g4 = (h - _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(54)
			diff = _g4;
			HX_STACK_LINE(57)
			int _g5 = this->graphic->bitmap->get_height();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(57)
			Float _g6 = (h - _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(57)
			diff = _g6;
		}
		HX_STACK_LINE(64)
		if (((failsafe >= (int)999))){
			HX_STACK_LINE(67)
			this->set_size(old_size);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIText_obj,resize,(void))

Dynamic FlxUIText_obj::set_params( Dynamic p){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIText","set_params",0xcdb7becf,"flixel.addons.ui.FlxUIText.set_params","flixel/addons/ui/FlxUIText.hx",72,0x557f53bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(73)
	this->params = p;
	HX_STACK_LINE(74)
	return this->params;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIText_obj,set_params,return )

::flixel::FlxSprite FlxUIText_obj::clone( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIText","clone",0xab5f6191,"flixel.addons.ui.FlxUIText.clone","flixel/addons/ui/FlxUIText.hx",78,0x557f53bd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	::flixel::addons::ui::FlxUIText newText = ::flixel::addons::ui::FlxUIText_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(newText,"newText");
	HX_STACK_LINE(80)
	Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(80)
	newText->set_width(_g);
	HX_STACK_LINE(81)
	Float _g1 = this->get_height();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(81)
	newText->set_height(_g1);
	HX_STACK_LINE(82)
	newText->setFormat(this->_font,this->_defaultFormat->size,this->color,null(),null(),null(),null());
	HX_STACK_LINE(85)
	if (((bool((this->_defaultFormat != null())) && bool((this->_defaultFormat->align != null()))))){
		HX_STACK_LINE(87)
		::String _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(87)
		_g2 = hx::TCast< String >::cast(this->_defaultFormat->align);
		HX_STACK_LINE(87)
		newText->set_alignment(_g2);
	}
	HX_STACK_LINE(89)
	{
		HX_STACK_LINE(89)
		newText->set_borderStyle(this->borderStyle);
		HX_STACK_LINE(89)
		newText->set_borderColor(this->borderColor);
		HX_STACK_LINE(89)
		newText->set_borderSize(this->borderSize);
		HX_STACK_LINE(89)
		newText->set_borderQuality(this->borderQuality);
	}
	HX_STACK_LINE(90)
	::String _g3 = this->textField->get_text();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(90)
	newText->set_text(_g3);
	HX_STACK_LINE(91)
	return newText;
}



FlxUIText_obj::FlxUIText_obj()
{
}

void FlxUIText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIText);
	HX_MARK_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(params,"params");
	::flixel::text::FlxText_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(params,"params");
	::flixel::text::FlxText_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUIText_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return params; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_params") ) { return set_params_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { return broadcastToFlxUI; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUIText_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { if (inCallProp) return set_params(inValue);params=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { broadcastToFlxUI=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUIText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("broadcastToFlxUI"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("params"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxUIText_obj,broadcastToFlxUI),HX_CSTRING("broadcastToFlxUI")},
	{hx::fsString,(int)offsetof(FlxUIText_obj,id),HX_CSTRING("id")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUIText_obj,params),HX_CSTRING("params")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("broadcastToFlxUI"),
	HX_CSTRING("id"),
	HX_CSTRING("params"),
	HX_CSTRING("resize"),
	HX_CSTRING("set_params"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIText_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIText_obj::__mClass,"__mClass");
};

#endif

Class FlxUIText_obj::__mClass;

void FlxUIText_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxUIText"), hx::TCanCast< FlxUIText_obj> ,sStaticFields,sMemberFields,
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

void FlxUIText_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
