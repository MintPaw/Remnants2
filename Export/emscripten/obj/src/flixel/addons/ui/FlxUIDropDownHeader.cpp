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
#ifndef INCLUDED_flixel_addons_ui_FlxUI9SliceSprite
#include <flixel/addons/ui/FlxUI9SliceSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIDropDownHeader
#include <flixel/addons/ui/FlxUIDropDownHeader.h>
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
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
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

Void FlxUIDropDownHeader_obj::__construct(hx::Null< int >  __o_Width,::flixel::FlxSprite Background,::flixel::addons::ui::FlxUIText Text,::flixel::addons::ui::FlxUISpriteButton Button)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownHeader","new",0x97950645,"flixel.addons.ui.FlxUIDropDownHeader.new","flixel/addons/ui/FlxUIDropDownMenu.hx",413,0x238549da)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_Width,"Width")
HX_STACK_ARG(Background,"Background")
HX_STACK_ARG(Text,"Text")
HX_STACK_ARG(Button,"Button")
int Width = __o_Width.Default(120);
{
	HX_STACK_LINE(414)
	super::__construct(null(),null());
	HX_STACK_LINE(416)
	this->background = Background;
	HX_STACK_LINE(417)
	this->text = Text;
	HX_STACK_LINE(418)
	this->button = Button;
	HX_STACK_LINE(421)
	if (((this->background == null()))){
		HX_STACK_LINE(422)
		::openfl::_v2::geom::Rectangle _g = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,Width,(int)20);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(422)
		::flixel::addons::ui::FlxUI9SliceSprite _g1 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::__new((int)0,(int)0,HX_CSTRING("flixel/flixel-ui/img/box.png"),_g,Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)14).Add((int)14),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(422)
		this->background = _g1;
	}
	HX_STACK_LINE(426)
	if (((this->button == null()))){
		HX_STACK_LINE(427)
		::flixel::FlxSprite _g2 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_CSTRING("flixel/flixel-ui/img/dropdown_mark.png"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(427)
		::flixel::addons::ui::FlxUISpriteButton _g3 = ::flixel::addons::ui::FlxUISpriteButton_obj::__new((int)0,(int)0,_g2,null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(427)
		this->button = _g3;
		HX_STACK_LINE(429)
		Array< int > _g4 = ::flixel::util::FlxStringUtil_obj::toIntArray(HX_CSTRING("6,6,11,11"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(429)
		Array< ::Dynamic > _g5 = Array_obj< ::Dynamic >::__new().Add(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(428)
		this->button->loadGraphicSlice9(Array_obj< ::String >::__new().Add(HX_CSTRING("flixel/flixel-ui/img/button_thin.png")),(int)80,(int)20,_g5,(int)0,(int)-1,false,(int)18,(int)18,null());
	}
	HX_STACK_LINE(432)
	Float _g6 = this->background->get_height();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(432)
	Float _g7 = this->background->get_height();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(432)
	this->button->resize(_g6,_g7);
	HX_STACK_LINE(433)
	Float _g8 = this->background->get_width();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(433)
	Float _g9 = (this->background->x + _g8);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(433)
	Float _g10 = this->button->get_width();		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(433)
	Float _g11 = (_g9 - _g10);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(433)
	this->button->set_x(_g11);
	HX_STACK_LINE(436)
	this->button->set_width(Width);
	HX_STACK_LINE(437)
	{
		HX_STACK_LINE(437)
		::flixel::math::FlxPoint _g = this->button->offset;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(437)
		_g->set_x((_g->x - ((Width - this->button->frameWidth))));
	}
	HX_STACK_LINE(438)
	this->button->set_x(this->offset->x);
	HX_STACK_LINE(439)
	{
		HX_STACK_LINE(439)
		::flixel::math::FlxPoint _g = this->button->label->__Field(HX_CSTRING("offset"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(439)
		_g->set_x((_g->x + this->button->offset->x));
	}
	HX_STACK_LINE(442)
	if (((this->text == null()))){
		HX_STACK_LINE(443)
		Float _g12 = this->background->get_width();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(443)
		int _g13 = ::Std_obj::_int(_g12);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(443)
		::flixel::addons::ui::FlxUIText _g14 = ::flixel::addons::ui::FlxUIText_obj::__new((int)0,(int)0,_g13,null(),null(),null());		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(443)
		this->text = _g14;
	}
	HX_STACK_LINE(445)
	this->text->setPosition((int)2,(int)4);
	HX_STACK_LINE(446)
	this->text->set_color((int)-16777216);
	HX_STACK_LINE(448)
	this->add(this->background);
	HX_STACK_LINE(449)
	this->add(this->button);
	HX_STACK_LINE(450)
	this->add(this->text);
}
;
	return null();
}

//FlxUIDropDownHeader_obj::~FlxUIDropDownHeader_obj() { }

Dynamic FlxUIDropDownHeader_obj::__CreateEmpty() { return  new FlxUIDropDownHeader_obj; }
hx::ObjectPtr< FlxUIDropDownHeader_obj > FlxUIDropDownHeader_obj::__new(hx::Null< int >  __o_Width,::flixel::FlxSprite Background,::flixel::addons::ui::FlxUIText Text,::flixel::addons::ui::FlxUISpriteButton Button)
{  hx::ObjectPtr< FlxUIDropDownHeader_obj > result = new FlxUIDropDownHeader_obj();
	result->__construct(__o_Width,Background,Text,Button);
	return result;}

Dynamic FlxUIDropDownHeader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUIDropDownHeader_obj > result = new FlxUIDropDownHeader_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void FlxUIDropDownHeader_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownHeader","destroy",0x07c8b95f,"flixel.addons.ui.FlxUIDropDownHeader.destroy","flixel/addons/ui/FlxUIDropDownMenu.hx",454,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_LINE(455)
		this->super::destroy();
		HX_STACK_LINE(457)
		::flixel::FlxSprite _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->background);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(457)
		this->background = _g;
		HX_STACK_LINE(458)
		::flixel::addons::ui::FlxUIText _g1 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->text);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(458)
		this->text = _g1;
		HX_STACK_LINE(459)
		::flixel::addons::ui::FlxUISpriteButton _g2 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->button);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(459)
		this->button = _g2;
	}
return null();
}



FlxUIDropDownHeader_obj::FlxUIDropDownHeader_obj()
{
}

void FlxUIDropDownHeader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIDropDownHeader);
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(button,"button");
	::flixel::addons::ui::FlxUIGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIDropDownHeader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(button,"button");
	::flixel::addons::ui::FlxUIGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUIDropDownHeader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return button; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUIDropDownHeader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::flixel::addons::ui::FlxUIText >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< ::flixel::addons::ui::FlxUISpriteButton >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUIDropDownHeader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("background"));
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("button"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxUIDropDownHeader_obj,background),HX_CSTRING("background")},
	{hx::fsObject /*::flixel::addons::ui::FlxUIText*/ ,(int)offsetof(FlxUIDropDownHeader_obj,text),HX_CSTRING("text")},
	{hx::fsObject /*::flixel::addons::ui::FlxUISpriteButton*/ ,(int)offsetof(FlxUIDropDownHeader_obj,button),HX_CSTRING("button")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("background"),
	HX_CSTRING("text"),
	HX_CSTRING("button"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIDropDownHeader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIDropDownHeader_obj::__mClass,"__mClass");
};

#endif

Class FlxUIDropDownHeader_obj::__mClass;

void FlxUIDropDownHeader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxUIDropDownHeader"), hx::TCanCast< FlxUIDropDownHeader_obj> ,sStaticFields,sMemberFields,
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

void FlxUIDropDownHeader_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
