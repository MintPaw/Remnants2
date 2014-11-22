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
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
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
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
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
#ifndef INCLUDED_openfl__v2_text_TextFormat
#include <openfl/_v2/text/TextFormat.h>
#endif
namespace flixel{
namespace ui{

Void FlxButton_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Text,Dynamic OnClick)
{
HX_STACK_FRAME("flixel.ui.FlxButton","new",0x776c1d8e,"flixel.ui.FlxButton.new","flixel/ui/FlxButton.hx",59,0xc64cf442)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(Text,"Text")
HX_STACK_ARG(OnClick,"OnClick")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(60)
	super::__construct(X,Y,OnClick);
	HX_STACK_LINE(62)
	{
		HX_STACK_LINE(62)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		Array< ::Dynamic > _g1 = this->labelOffsets;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(62)
		while((true)){
			HX_STACK_LINE(62)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(62)
				break;
			}
			HX_STACK_LINE(62)
			::flixel::math::FlxPoint point = _g1->__get(_g).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(62)
			++(_g);
			HX_STACK_LINE(64)
			point->set((point->x - (int)1),(point->y + (int)3));
		}
	}
	HX_STACK_LINE(67)
	if (((Text != null()))){
		HX_STACK_LINE(67)
		::flixel::text::FlxText _g = ::flixel::text::FlxText_obj::__new((this->x + this->labelOffsets->__get((int)0).StaticCast< ::flixel::math::FlxPoint >()->x),(this->y + this->labelOffsets->__get((int)0).StaticCast< ::flixel::math::FlxPoint >()->y),(int)80,Text,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(67)
		this->set_label(_g);
		HX_STACK_LINE(67)
		this->label->__Field(HX_CSTRING("setFormat"),true)(null(),(int)8,(int)3355443,HX_CSTRING("center"),null(),null(),null());
		HX_STACK_LINE(67)
		this->label->__Field(HX_CSTRING("set_alpha"),true)(this->labelAlphas->__get(this->status));
		HX_STACK_LINE(67)
		this->label->__Field(HX_CSTRING("drawFrame"),true)(true);
	}
}
;
	return null();
}

//FlxButton_obj::~FlxButton_obj() { }

Dynamic FlxButton_obj::__CreateEmpty() { return  new FlxButton_obj; }
hx::ObjectPtr< FlxButton_obj > FlxButton_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Text,Dynamic OnClick)
{  hx::ObjectPtr< FlxButton_obj > result = new FlxButton_obj();
	result->__construct(__o_X,__o_Y,Text,OnClick);
	return result;}

Dynamic FlxButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxButton_obj > result = new FlxButton_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

hx::Object *FlxButton_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::input::IFlxInput_obj)) return operator ::flixel::input::IFlxInput_obj *();
	return super::__ToInterface(inType);
}

Void FlxButton_obj::resetHelpers( ){
{
		HX_STACK_FRAME("flixel.ui.FlxButton","resetHelpers",0x0b952648,"flixel.ui.FlxButton.resetHelpers","flixel/ui/FlxButton.hx",74,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(75)
		this->super::resetHelpers();
		HX_STACK_LINE(77)
		if (((this->label != null()))){
			HX_STACK_LINE(79)
			Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(79)
			int _g1 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(79)
			int _g2 = this->label->__FieldRef(HX_CSTRING("frameWidth")) = _g1;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(79)
			this->label->__Field(HX_CSTRING("set_fieldWidth"),true)(_g2);
			HX_STACK_LINE(80)
			this->label->__Field(HX_CSTRING("set_size"),true)(this->label->__Field(HX_CSTRING("_defaultFormat"),true)->__Field(HX_CSTRING("size"),true));
		}
	}
return null();
}


Void FlxButton_obj::initLabel( ::String Text){
{
		HX_STACK_FRAME("flixel.ui.FlxButton","initLabel",0xd1ec8c72,"flixel.ui.FlxButton.initLabel","flixel/ui/FlxButton.hx",86,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Text,"Text")
		HX_STACK_LINE(86)
		if (((Text != null()))){
			HX_STACK_LINE(88)
			::flixel::text::FlxText _g = ::flixel::text::FlxText_obj::__new((this->x + this->labelOffsets->__get((int)0).StaticCast< ::flixel::math::FlxPoint >()->x),(this->y + this->labelOffsets->__get((int)0).StaticCast< ::flixel::math::FlxPoint >()->y),(int)80,Text,null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(88)
			this->set_label(_g);
			HX_STACK_LINE(89)
			this->label->__Field(HX_CSTRING("setFormat"),true)(null(),(int)8,(int)3355443,HX_CSTRING("center"),null(),null(),null());
			HX_STACK_LINE(90)
			this->label->__Field(HX_CSTRING("set_alpha"),true)(this->labelAlphas->__get(this->status));
			HX_STACK_LINE(91)
			this->label->__Field(HX_CSTRING("drawFrame"),true)(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxButton_obj,initLabel,(void))

::String FlxButton_obj::get_text( ){
	HX_STACK_FRAME("flixel.ui.FlxButton","get_text",0x7dcfb448,"flixel.ui.FlxButton.get_text","flixel/ui/FlxButton.hx",97,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_LINE(97)
	if (((this->label != null()))){
		HX_STACK_LINE(97)
		return this->label->__Field(HX_CSTRING("textField"),true)->__Field(HX_CSTRING("get_text"),true)();
	}
	else{
		HX_STACK_LINE(97)
		return null();
	}
	HX_STACK_LINE(97)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxButton_obj,get_text,return )

::String FlxButton_obj::set_text( ::String Text){
	HX_STACK_FRAME("flixel.ui.FlxButton","set_text",0x2c2d0dbc,"flixel.ui.FlxButton.set_text","flixel/ui/FlxButton.hx",101,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Text,"Text")
	HX_STACK_LINE(102)
	if (((this->label == null()))){
		HX_STACK_LINE(104)
		if (((Text != null()))){
			HX_STACK_LINE(104)
			::flixel::text::FlxText _g = ::flixel::text::FlxText_obj::__new((this->x + this->labelOffsets->__get((int)0).StaticCast< ::flixel::math::FlxPoint >()->x),(this->y + this->labelOffsets->__get((int)0).StaticCast< ::flixel::math::FlxPoint >()->y),(int)80,Text,null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(104)
			this->set_label(_g);
			HX_STACK_LINE(104)
			this->label->__Field(HX_CSTRING("setFormat"),true)(null(),(int)8,(int)3355443,HX_CSTRING("center"),null(),null(),null());
			HX_STACK_LINE(104)
			this->label->__Field(HX_CSTRING("set_alpha"),true)(this->labelAlphas->__get(this->status));
			HX_STACK_LINE(104)
			this->label->__Field(HX_CSTRING("drawFrame"),true)(true);
		}
	}
	HX_STACK_LINE(106)
	return Text;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxButton_obj,set_text,return )

int FlxButton_obj::NORMAL;

int FlxButton_obj::HIGHLIGHT;

int FlxButton_obj::PRESSED;


FlxButton_obj::FlxButton_obj()
{
}

Dynamic FlxButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return get_text(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"initLabel") ) { return initLabel_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resetHelpers") ) { return resetHelpers_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return set_text(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("text"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NORMAL"),
	HX_CSTRING("HIGHLIGHT"),
	HX_CSTRING("PRESSED"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("resetHelpers"),
	HX_CSTRING("initLabel"),
	HX_CSTRING("get_text"),
	HX_CSTRING("set_text"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxButton_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxButton_obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(FlxButton_obj::HIGHLIGHT,"HIGHLIGHT");
	HX_MARK_MEMBER_NAME(FlxButton_obj::PRESSED,"PRESSED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxButton_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxButton_obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(FlxButton_obj::HIGHLIGHT,"HIGHLIGHT");
	HX_VISIT_MEMBER_NAME(FlxButton_obj::PRESSED,"PRESSED");
};

#endif

Class FlxButton_obj::__mClass;

void FlxButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.ui.FlxButton"), hx::TCanCast< FlxButton_obj> ,sStaticFields,sMemberFields,
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

void FlxButton_obj::__boot()
{
	NORMAL= (int)0;
	HIGHLIGHT= (int)1;
	PRESSED= (int)2;
}

} // end namespace flixel
} // end namespace ui
