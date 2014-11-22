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
#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#include <flixel/addons/ui/FlxUIButton.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
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
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
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
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
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

Void FlxUIButton_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Label,Dynamic OnClick)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","new",0x9a0e8c99,"flixel.addons.ui.FlxUIButton.new","flixel/addons/ui/FlxUIButton.hx",31,0xbb6c9298)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(Label,"Label")
HX_STACK_ARG(OnClick,"OnClick")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(41)
	this->down_toggle_style = null();
	HX_STACK_LINE(40)
	this->over_toggle_style = null();
	HX_STACK_LINE(39)
	this->up_toggle_style = null();
	HX_STACK_LINE(37)
	this->down_style = null();
	HX_STACK_LINE(36)
	this->over_style = null();
	HX_STACK_LINE(35)
	this->up_style = null();
	HX_STACK_LINE(52)
	super::__construct(X,Y,OnClick);
	HX_STACK_LINE(53)
	if (((Label != null()))){
		HX_STACK_LINE(55)
		::flixel::addons::ui::FlxUIText _g = ::flixel::addons::ui::FlxUIText_obj::__new((int)0,(int)0,(int)80,Label,(int)8,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(55)
		this->set_label(_g);
		HX_STACK_LINE(56)
		this->label->__Field(HX_CSTRING("setFormat"),true)(null(),(int)8,(int)3355443,HX_CSTRING("center"),null(),null(),null());
	}
	HX_STACK_LINE(58)
	Float _g1 = this->get_width();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(58)
	Float _g2 = this->get_height();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(58)
	this->resize(_g1,_g2);
}
;
	return null();
}

//FlxUIButton_obj::~FlxUIButton_obj() { }

Dynamic FlxUIButton_obj::__CreateEmpty() { return  new FlxUIButton_obj; }
hx::ObjectPtr< FlxUIButton_obj > FlxUIButton_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Label,Dynamic OnClick)
{  hx::ObjectPtr< FlxUIButton_obj > result = new FlxUIButton_obj();
	result->__construct(__o_X,__o_Y,Label,OnClick);
	return result;}

Dynamic FlxUIButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUIButton_obj > result = new FlxUIButton_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

hx::Object *FlxUIButton_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::IFlxSprite_obj)) return operator ::flixel::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::IFlxBasic_obj)) return operator ::flixel::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::ILabeled_obj)) return operator ::flixel::addons::ui::interfaces::ILabeled_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIButton_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIButton_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IHasParams_obj)) return operator ::flixel::addons::ui::interfaces::IHasParams_obj *();
	return super::__ToInterface(inType);
}

::flixel::text::FlxText FlxUIButton_obj::setLabelFormat( ::String Font,hx::Null< Float >  __o_Size,hx::Null< int >  __o_Color,::String Alignment,::flixel::text::FlxTextBorderStyle BorderStyle,hx::Null< int >  __o_BorderColor,hx::Null< bool >  __o_Embedded){
Float Size = __o_Size.Default(8);
int Color = __o_Color.Default(-1);
int BorderColor = __o_BorderColor.Default(0);
bool Embedded = __o_Embedded.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","setLabelFormat",0xd4f36830,"flixel.addons.ui.FlxUIButton.setLabelFormat","flixel/addons/ui/FlxUIButton.hx",76,0xbb6c9298)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Font,"Font")
	HX_STACK_ARG(Size,"Size")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Alignment,"Alignment")
	HX_STACK_ARG(BorderStyle,"BorderStyle")
	HX_STACK_ARG(BorderColor,"BorderColor")
	HX_STACK_ARG(Embedded,"Embedded")
{
		HX_STACK_LINE(77)
		if (((this->label != null()))){
			HX_STACK_LINE(79)
			this->label->__Field(HX_CSTRING("setFormat"),true)(Font,Size,Color,Alignment,BorderStyle,BorderColor,Embedded);
			HX_STACK_LINE(87)
			return this->label;
		}
		HX_STACK_LINE(89)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC7(FlxUIButton_obj,setLabelFormat,return )

Void FlxUIButton_obj::autoCenterLabel( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","autoCenterLabel",0xdc3a6269,"flixel.addons.ui.FlxUIButton.autoCenterLabel","flixel/addons/ui/FlxUIButton.hx",94,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_LINE(94)
		this->super::autoCenterLabel();
	}
return null();
}


::flixel::FlxSprite FlxUIButton_obj::clone( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","clone",0xd3700fd6,"flixel.addons.ui.FlxUIButton.clone","flixel/addons/ui/FlxUIButton.hx",98,0xbb6c9298)
	HX_STACK_THIS(this)
	HX_STACK_LINE(99)
	::String _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(99)
	if (((this->label == null()))){
		HX_STACK_LINE(99)
		_g = null();
	}
	else{
		HX_STACK_LINE(99)
		_g = this->label->__Field(HX_CSTRING("textField"),true)->__Field(HX_CSTRING("get_text"),true)();
	}
	HX_STACK_LINE(99)
	::flixel::addons::ui::FlxUIButton newButton = ::flixel::addons::ui::FlxUIButton_obj::__new((int)0,(int)0,_g,this->onUp->callback);		HX_STACK_VAR(newButton,"newButton");
	HX_STACK_LINE(100)
	newButton->copyGraphic(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(101)
	newButton->copyStyle(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(102)
	return newButton;
}


Void FlxUIButton_obj::copyStyle( ::flixel::addons::ui::FlxUITypedButton other){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","copyStyle",0xb0cff635,"flixel.addons.ui.FlxUIButton.copyStyle","flixel/addons/ui/FlxUIButton.hx",105,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(106)
		this->super::copyStyle(other);
		HX_STACK_LINE(107)
		if ((::Std_obj::is(other,hx::ClassOf< ::flixel::addons::ui::FlxUIButton >()))){
			HX_STACK_LINE(108)
			::flixel::addons::ui::FlxUIButton fuib = other;		HX_STACK_VAR(fuib,"fuib");
			HX_STACK_LINE(110)
			this->up_style = fuib->up_style;
			HX_STACK_LINE(111)
			this->over_style = fuib->over_style;
			HX_STACK_LINE(112)
			this->down_style = fuib->down_style;
			HX_STACK_LINE(114)
			this->up_toggle_style = fuib->up_toggle_style;
			HX_STACK_LINE(115)
			this->over_toggle_style = fuib->over_toggle_style;
			HX_STACK_LINE(116)
			this->down_toggle_style = fuib->down_toggle_style;
			HX_STACK_LINE(118)
			::flixel::addons::ui::FlxUIText t = fuib->label;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(120)
			::openfl::_v2::text::TextFormat tf = t->textField->get_defaultTextFormat();		HX_STACK_VAR(tf,"tf");
			HX_STACK_LINE(122)
			int _g = t->_font.indexOf(::flixel::system::FlxAssets_obj::FONT_DEFAULT,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(122)
			if (((_g == (int)-1))){
				HX_STACK_LINE(124)
				::flixel::addons::ui::FontDef fd = ::flixel::addons::ui::FontDef_obj::copyFromFlxText(t);		HX_STACK_VAR(fd,"fd");
				HX_STACK_LINE(125)
				fd->apply(null(),this->label);
			}
			else{
				HX_STACK_LINE(130)
				bool _g1 = t->textField->set_embedFonts(true);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(130)
				this->label->__Field(HX_CSTRING("setFormat"),true)(null(),tf->size,tf->color,tf->align,t->borderStyle,t->borderColor,_g1);
			}
		}
	}
return null();
}


::flixel::addons::ui::FlxUIText FlxUIButton_obj::setLabel( ::flixel::addons::ui::FlxUIText t){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","setLabel",0x4416cc19,"flixel.addons.ui.FlxUIButton.setLabel","flixel/addons/ui/FlxUIButton.hx",137,0xbb6c9298)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(137)
	this->set_label(t);
	HX_STACK_LINE(137)
	return this->label;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIButton_obj,setLabel,return )

::flixel::addons::ui::FlxUIText FlxUIButton_obj::getLabel( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","getLabel",0x95b972a5,"flixel.addons.ui.FlxUIButton.getLabel","flixel/addons/ui/FlxUIButton.hx",138,0xbb6c9298)
	HX_STACK_THIS(this)
	HX_STACK_LINE(138)
	return this->label;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIButton_obj,getLabel,return )

Void FlxUIButton_obj::resize( Float W,Float H){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","resize",0x28cb475b,"flixel.addons.ui.FlxUIButton.resize","flixel/addons/ui/FlxUIButton.hx",143,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_ARG(W,"W")
		HX_STACK_ARG(H,"H")
		HX_STACK_LINE(143)
		this->super::resize(W,H);
	}
return null();
}


Void FlxUIButton_obj::addIcon( ::flixel::FlxSprite icon,hx::Null< int >  __o_X,hx::Null< int >  __o_Y,Dynamic __o_center){
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
Dynamic center = __o_center.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","addIcon",0xa78ff6f3,"flixel.addons.ui.FlxUIButton.addIcon","flixel/addons/ui/FlxUIButton.hx",152,0xbb6c9298)
	HX_STACK_THIS(this)
	HX_STACK_ARG(icon,"icon")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(center,"center")
{
		HX_STACK_LINE(154)
		::openfl::_v2::display::BitmapData _g = this->graphic->bitmap->clone();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(154)
		this->_noIconGraphicsBkup = _g;
		HX_STACK_LINE(156)
		int sx = X;		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(157)
		int sy = Y;		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(159)
		if ((center)){
			HX_STACK_LINE(160)
			Float _g1 = this->get_width();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(160)
			Float _g2 = icon->get_width();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(160)
			Float _g3 = (_g1 - _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(160)
			Float _g4 = (Float(_g3) / Float((int)2));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(160)
			int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(160)
			sx = _g5;
			HX_STACK_LINE(161)
			Float _g6 = this->get_height();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(161)
			Float _g7 = icon->get_height();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(161)
			Float _g8 = (_g6 - _g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(161)
			Float _g9 = (Float(_g8) / Float((int)2));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(161)
			int _g10 = ::Std_obj::_int(_g9);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(161)
			sy = _g10;
		}
		HX_STACK_LINE(165)
		{
			HX_STACK_LINE(165)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(165)
			int _g2 = this->numFrames;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(165)
			while((true)){
				HX_STACK_LINE(165)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(165)
					break;
				}
				HX_STACK_LINE(165)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(167)
				Float _g11 = this->get_height();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(167)
				Float _g12 = (i * _g11);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(167)
				int _g13 = ::Std_obj::_int(_g12);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(167)
				int _g14 = (sy + _g13);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(167)
				this->stamp(icon,sx,_g14);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxUIButton_obj,addIcon,(void))

Void FlxUIButton_obj::removeIcon( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","removeIcon",0xfc624ec4,"flixel.addons.ui.FlxUIButton.removeIcon","flixel/addons/ui/FlxUIButton.hx",173,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_LINE(173)
		if (((this->_noIconGraphicsBkup != null()))){
			HX_STACK_LINE(176)
			::openfl::_v2::geom::Rectangle _g = this->graphic->bitmap->get_rect();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(176)
			this->graphic->bitmap->fillRect(_g,(int)0);
			HX_STACK_LINE(177)
			int _g1 = this->_noIconGraphicsBkup->get_width();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(177)
			int _g2 = this->_noIconGraphicsBkup->get_height();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(177)
			::openfl::_v2::geom::Rectangle _g3 = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,_g1,_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(177)
			::openfl::_v2::geom::Point _g4 = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(177)
			this->graphic->bitmap->copyPixels(this->_noIconGraphicsBkup,_g3,_g4,null(),null(),null());
			HX_STACK_LINE(178)
			this->graphic->resetFrameBitmaps();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIButton_obj,removeIcon,(void))

Void FlxUIButton_obj::changeIcon( ::flixel::FlxSprite newIcon){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","changeIcon",0x598c49f0,"flixel.addons.ui.FlxUIButton.changeIcon","flixel/addons/ui/FlxUIButton.hx",187,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newIcon,"newIcon")
		HX_STACK_LINE(188)
		this->removeIcon();
		HX_STACK_LINE(189)
		this->addIcon(newIcon,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIButton_obj,changeIcon,(void))

Void FlxUIButton_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","destroy",0x4a25f9b3,"flixel.addons.ui.FlxUIButton.destroy","flixel/addons/ui/FlxUIButton.hx",193,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_LINE(194)
		::openfl::_v2::display::BitmapData _g = ::flixel::util::FlxDestroyUtil_obj::dispose(this->_noIconGraphicsBkup);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(194)
		this->_noIconGraphicsBkup = _g;
		HX_STACK_LINE(195)
		this->super::destroy();
	}
return null();
}


Void FlxUIButton_obj::resetHelpers( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","resetHelpers",0x11dffddd,"flixel.addons.ui.FlxUIButton.resetHelpers","flixel/addons/ui/FlxUIButton.hx",204,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_LINE(205)
		this->super::resetHelpers();
		HX_STACK_LINE(207)
		if (((this->label != null()))){
			HX_STACK_LINE(209)
			Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(209)
			int _g1 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(209)
			int _g2 = this->label->__FieldRef(HX_CSTRING("frameWidth")) = _g1;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(209)
			this->label->__Field(HX_CSTRING("set_width"),true)(_g2);
			HX_STACK_LINE(210)
			Float _g3 = this->label->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(210)
			this->label->__Field(HX_CSTRING("set_fieldWidth"),true)(_g3);
			HX_STACK_LINE(211)
			this->label->__Field(HX_CSTRING("set_size"),true)(this->label->__Field(HX_CSTRING("_defaultFormat"),true)->__Field(HX_CSTRING("size"),true));
		}
	}
return null();
}


Void FlxUIButton_obj::onDownHandler( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","onDownHandler",0x9da54a22,"flixel.addons.ui.FlxUIButton.onDownHandler","flixel/addons/ui/FlxUIButton.hx",216,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_LINE(217)
		this->super::onDownHandler();
		HX_STACK_LINE(218)
		if (((this->label != null()))){
			HX_STACK_LINE(219)
			if (((bool(this->toggled) && bool((this->down_toggle_style != null()))))){
				HX_STACK_LINE(220)
				this->label->__Field(HX_CSTRING("set_color"),true)(this->down_toggle_style->color);
				HX_STACK_LINE(221)
				if (((this->down_toggle_style->border != null()))){
					HX_STACK_LINE(222)
					this->label->__Field(HX_CSTRING("set_borderStyle"),true)(this->down_toggle_style->border->style);
					HX_STACK_LINE(223)
					this->label->__Field(HX_CSTRING("set_borderColor"),true)(this->down_toggle_style->border->color);
					HX_STACK_LINE(224)
					this->label->__Field(HX_CSTRING("set_borderSize"),true)(this->down_toggle_style->border->size);
					HX_STACK_LINE(225)
					this->label->__Field(HX_CSTRING("set_borderQuality"),true)(this->down_toggle_style->border->quality);
				}
			}
			else{
				HX_STACK_LINE(227)
				if (((bool(!(this->toggled)) && bool((this->down_style != null()))))){
					HX_STACK_LINE(228)
					this->label->__Field(HX_CSTRING("set_color"),true)(this->down_style->color);
					HX_STACK_LINE(229)
					if (((this->down_style->border != null()))){
						HX_STACK_LINE(230)
						this->label->__Field(HX_CSTRING("set_borderStyle"),true)(this->down_style->border->style);
						HX_STACK_LINE(231)
						this->label->__Field(HX_CSTRING("set_borderColor"),true)(this->down_style->border->color);
						HX_STACK_LINE(232)
						this->label->__Field(HX_CSTRING("set_borderSize"),true)(this->down_style->border->size);
						HX_STACK_LINE(233)
						this->label->__Field(HX_CSTRING("set_borderQuality"),true)(this->down_style->border->quality);
					}
				}
			}
		}
	}
return null();
}


Void FlxUIButton_obj::onOverHandler( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","onOverHandler",0x790d9370,"flixel.addons.ui.FlxUIButton.onOverHandler","flixel/addons/ui/FlxUIButton.hx",240,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_LINE(241)
		this->super::onOverHandler();
		HX_STACK_LINE(242)
		if (((this->label != null()))){
			HX_STACK_LINE(243)
			if (((bool(this->toggled) && bool((this->over_toggle_style != null()))))){
				HX_STACK_LINE(244)
				this->label->__Field(HX_CSTRING("set_color"),true)(this->over_toggle_style->color);
				HX_STACK_LINE(245)
				if (((this->over_toggle_style->border != null()))){
					HX_STACK_LINE(246)
					this->label->__Field(HX_CSTRING("set_borderStyle"),true)(this->over_toggle_style->border->style);
					HX_STACK_LINE(247)
					this->label->__Field(HX_CSTRING("set_borderColor"),true)(this->over_toggle_style->border->color);
					HX_STACK_LINE(248)
					this->label->__Field(HX_CSTRING("set_borderSize"),true)(this->over_toggle_style->border->size);
					HX_STACK_LINE(249)
					this->label->__Field(HX_CSTRING("set_borderQuality"),true)(this->over_toggle_style->border->quality);
				}
			}
			else{
				HX_STACK_LINE(251)
				if (((bool(!(this->toggled)) && bool((this->over_style != null()))))){
					HX_STACK_LINE(252)
					this->label->__Field(HX_CSTRING("set_color"),true)(this->over_style->color);
					HX_STACK_LINE(253)
					if (((this->over_style->border != null()))){
						HX_STACK_LINE(254)
						this->label->__Field(HX_CSTRING("set_borderStyle"),true)(this->over_style->border->style);
						HX_STACK_LINE(255)
						this->label->__Field(HX_CSTRING("set_borderColor"),true)(this->over_style->border->color);
						HX_STACK_LINE(256)
						this->label->__Field(HX_CSTRING("set_borderSize"),true)(this->over_style->border->size);
						HX_STACK_LINE(257)
						this->label->__Field(HX_CSTRING("set_borderQuality"),true)(this->over_style->border->quality);
					}
				}
			}
		}
	}
return null();
}


Void FlxUIButton_obj::onOutHandler( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","onOutHandler",0x7e879b82,"flixel.addons.ui.FlxUIButton.onOutHandler","flixel/addons/ui/FlxUIButton.hx",264,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_LINE(265)
		this->super::onOutHandler();
		HX_STACK_LINE(266)
		if (((this->label != null()))){
			HX_STACK_LINE(267)
			if (((bool(this->toggled) && bool((this->up_toggle_style != null()))))){
				HX_STACK_LINE(268)
				this->label->__Field(HX_CSTRING("set_color"),true)(this->up_toggle_style->color);
				HX_STACK_LINE(269)
				if (((this->up_toggle_style->border != null()))){
					HX_STACK_LINE(270)
					this->label->__Field(HX_CSTRING("set_borderStyle"),true)(this->up_toggle_style->border->style);
					HX_STACK_LINE(271)
					this->label->__Field(HX_CSTRING("set_borderColor"),true)(this->up_toggle_style->border->color);
					HX_STACK_LINE(272)
					this->label->__Field(HX_CSTRING("set_borderSize"),true)(this->up_toggle_style->border->size);
					HX_STACK_LINE(273)
					this->label->__Field(HX_CSTRING("set_borderQuality"),true)(this->up_toggle_style->border->quality);
				}
			}
			else{
				HX_STACK_LINE(275)
				if (((bool(!(this->toggled)) && bool((this->up_style != null()))))){
					HX_STACK_LINE(276)
					this->label->__Field(HX_CSTRING("set_color"),true)(this->up_style->color);
					HX_STACK_LINE(277)
					if (((this->up_style->border != null()))){
						HX_STACK_LINE(278)
						this->label->__Field(HX_CSTRING("set_borderStyle"),true)(this->up_style->border->style);
						HX_STACK_LINE(279)
						this->label->__Field(HX_CSTRING("set_borderColor"),true)(this->up_style->border->color);
						HX_STACK_LINE(280)
						this->label->__Field(HX_CSTRING("set_borderSize"),true)(this->up_style->border->size);
						HX_STACK_LINE(281)
						this->label->__Field(HX_CSTRING("set_borderQuality"),true)(this->up_style->border->quality);
					}
				}
			}
		}
	}
return null();
}


Void FlxUIButton_obj::onUpHandler( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","onUpHandler",0xc867c2c9,"flixel.addons.ui.FlxUIButton.onUpHandler","flixel/addons/ui/FlxUIButton.hx",288,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_LINE(289)
		this->super::onUpHandler();
		HX_STACK_LINE(290)
		if (((this->label != null()))){
			HX_STACK_LINE(291)
			if (((bool(this->toggled) && bool((this->up_toggle_style != null()))))){
				HX_STACK_LINE(292)
				this->label->__Field(HX_CSTRING("set_color"),true)(this->up_toggle_style->color);
				HX_STACK_LINE(293)
				if (((this->up_toggle_style->border != null()))){
					HX_STACK_LINE(294)
					this->label->__Field(HX_CSTRING("set_borderStyle"),true)(this->up_toggle_style->border->style);
					HX_STACK_LINE(295)
					this->label->__Field(HX_CSTRING("set_borderColor"),true)(this->up_toggle_style->border->color);
					HX_STACK_LINE(296)
					this->label->__Field(HX_CSTRING("set_borderSize"),true)(this->up_toggle_style->border->size);
					HX_STACK_LINE(297)
					this->label->__Field(HX_CSTRING("set_borderQuality"),true)(this->up_toggle_style->border->quality);
				}
			}
			else{
				HX_STACK_LINE(299)
				if (((bool(!(this->toggled)) && bool((this->up_style != null()))))){
					HX_STACK_LINE(300)
					this->label->__Field(HX_CSTRING("set_color"),true)(this->up_style->color);
					HX_STACK_LINE(301)
					if (((this->up_style->border != null()))){
						HX_STACK_LINE(302)
						this->label->__Field(HX_CSTRING("set_borderStyle"),true)(this->up_style->border->style);
						HX_STACK_LINE(303)
						this->label->__Field(HX_CSTRING("set_borderColor"),true)(this->up_style->border->color);
						HX_STACK_LINE(304)
						this->label->__Field(HX_CSTRING("set_borderSize"),true)(this->up_style->border->size);
						HX_STACK_LINE(305)
						this->label->__Field(HX_CSTRING("set_borderQuality"),true)(this->up_style->border->quality);
					}
				}
			}
		}
	}
return null();
}



FlxUIButton_obj::FlxUIButton_obj()
{
}

void FlxUIButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIButton);
	HX_MARK_MEMBER_NAME(_noIconGraphicsBkup,"_noIconGraphicsBkup");
	HX_MARK_MEMBER_NAME(up_style,"up_style");
	HX_MARK_MEMBER_NAME(over_style,"over_style");
	HX_MARK_MEMBER_NAME(down_style,"down_style");
	HX_MARK_MEMBER_NAME(up_toggle_style,"up_toggle_style");
	HX_MARK_MEMBER_NAME(over_toggle_style,"over_toggle_style");
	HX_MARK_MEMBER_NAME(down_toggle_style,"down_toggle_style");
	::flixel::addons::ui::FlxUITypedButton_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_noIconGraphicsBkup,"_noIconGraphicsBkup");
	HX_VISIT_MEMBER_NAME(up_style,"up_style");
	HX_VISIT_MEMBER_NAME(over_style,"over_style");
	HX_VISIT_MEMBER_NAME(down_style,"down_style");
	HX_VISIT_MEMBER_NAME(up_toggle_style,"up_toggle_style");
	HX_VISIT_MEMBER_NAME(over_toggle_style,"over_toggle_style");
	HX_VISIT_MEMBER_NAME(down_toggle_style,"down_toggle_style");
	::flixel::addons::ui::FlxUITypedButton_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUIButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addIcon") ) { return addIcon_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"up_style") ) { return up_style; }
		if (HX_FIELD_EQ(inName,"setLabel") ) { return setLabel_dyn(); }
		if (HX_FIELD_EQ(inName,"getLabel") ) { return getLabel_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyStyle") ) { return copyStyle_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"over_style") ) { return over_style; }
		if (HX_FIELD_EQ(inName,"down_style") ) { return down_style; }
		if (HX_FIELD_EQ(inName,"removeIcon") ) { return removeIcon_dyn(); }
		if (HX_FIELD_EQ(inName,"changeIcon") ) { return changeIcon_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onUpHandler") ) { return onUpHandler_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resetHelpers") ) { return resetHelpers_dyn(); }
		if (HX_FIELD_EQ(inName,"onOutHandler") ) { return onOutHandler_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onDownHandler") ) { return onDownHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"onOverHandler") ) { return onOverHandler_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setLabelFormat") ) { return setLabelFormat_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"up_toggle_style") ) { return up_toggle_style; }
		if (HX_FIELD_EQ(inName,"autoCenterLabel") ) { return autoCenterLabel_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"over_toggle_style") ) { return over_toggle_style; }
		if (HX_FIELD_EQ(inName,"down_toggle_style") ) { return down_toggle_style; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_noIconGraphicsBkup") ) { return _noIconGraphicsBkup; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUIButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"up_style") ) { up_style=inValue.Cast< ::flixel::addons::ui::ButtonLabelStyle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"over_style") ) { over_style=inValue.Cast< ::flixel::addons::ui::ButtonLabelStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"down_style") ) { down_style=inValue.Cast< ::flixel::addons::ui::ButtonLabelStyle >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"up_toggle_style") ) { up_toggle_style=inValue.Cast< ::flixel::addons::ui::ButtonLabelStyle >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"over_toggle_style") ) { over_toggle_style=inValue.Cast< ::flixel::addons::ui::ButtonLabelStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"down_toggle_style") ) { down_toggle_style=inValue.Cast< ::flixel::addons::ui::ButtonLabelStyle >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_noIconGraphicsBkup") ) { _noIconGraphicsBkup=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUIButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_noIconGraphicsBkup"));
	outFields->push(HX_CSTRING("up_style"));
	outFields->push(HX_CSTRING("over_style"));
	outFields->push(HX_CSTRING("down_style"));
	outFields->push(HX_CSTRING("up_toggle_style"));
	outFields->push(HX_CSTRING("over_toggle_style"));
	outFields->push(HX_CSTRING("down_toggle_style"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::BitmapData*/ ,(int)offsetof(FlxUIButton_obj,_noIconGraphicsBkup),HX_CSTRING("_noIconGraphicsBkup")},
	{hx::fsObject /*::flixel::addons::ui::ButtonLabelStyle*/ ,(int)offsetof(FlxUIButton_obj,up_style),HX_CSTRING("up_style")},
	{hx::fsObject /*::flixel::addons::ui::ButtonLabelStyle*/ ,(int)offsetof(FlxUIButton_obj,over_style),HX_CSTRING("over_style")},
	{hx::fsObject /*::flixel::addons::ui::ButtonLabelStyle*/ ,(int)offsetof(FlxUIButton_obj,down_style),HX_CSTRING("down_style")},
	{hx::fsObject /*::flixel::addons::ui::ButtonLabelStyle*/ ,(int)offsetof(FlxUIButton_obj,up_toggle_style),HX_CSTRING("up_toggle_style")},
	{hx::fsObject /*::flixel::addons::ui::ButtonLabelStyle*/ ,(int)offsetof(FlxUIButton_obj,over_toggle_style),HX_CSTRING("over_toggle_style")},
	{hx::fsObject /*::flixel::addons::ui::ButtonLabelStyle*/ ,(int)offsetof(FlxUIButton_obj,down_toggle_style),HX_CSTRING("down_toggle_style")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_noIconGraphicsBkup"),
	HX_CSTRING("up_style"),
	HX_CSTRING("over_style"),
	HX_CSTRING("down_style"),
	HX_CSTRING("up_toggle_style"),
	HX_CSTRING("over_toggle_style"),
	HX_CSTRING("down_toggle_style"),
	HX_CSTRING("setLabelFormat"),
	HX_CSTRING("autoCenterLabel"),
	HX_CSTRING("clone"),
	HX_CSTRING("copyStyle"),
	HX_CSTRING("setLabel"),
	HX_CSTRING("getLabel"),
	HX_CSTRING("resize"),
	HX_CSTRING("addIcon"),
	HX_CSTRING("removeIcon"),
	HX_CSTRING("changeIcon"),
	HX_CSTRING("destroy"),
	HX_CSTRING("resetHelpers"),
	HX_CSTRING("onDownHandler"),
	HX_CSTRING("onOverHandler"),
	HX_CSTRING("onOutHandler"),
	HX_CSTRING("onUpHandler"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIButton_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIButton_obj::__mClass,"__mClass");
};

#endif

Class FlxUIButton_obj::__mClass;

void FlxUIButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxUIButton"), hx::TCanCast< FlxUIButton_obj> ,sStaticFields,sMemberFields,
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

void FlxUIButton_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
