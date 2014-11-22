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
#ifndef INCLUDED_flixel_addons_ui_FlxUISpriteButton
#include <flixel/addons/ui/FlxUISpriteButton.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUISpriteButton_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::flixel::FlxSprite Asset,Dynamic OnClick)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUISpriteButton","new",0x3b737abe,"flixel.addons.ui.FlxUISpriteButton.new","flixel/addons/ui/FlxUISpriteButton.hx",26,0xcd05ded3)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(Asset,"Asset")
HX_STACK_ARG(OnClick,"OnClick")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(27)
	super::__construct(X,Y,OnClick);
	HX_STACK_LINE(32)
	Dynamic _g = this->down_toggle_color = (int)-1;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(32)
	Dynamic _g1 = this->over_toggle_color = _g;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(32)
	Dynamic _g2 = this->up_toggle_color = _g1;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(32)
	Dynamic _g3 = this->down_color = _g2;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(32)
	Dynamic _g4 = this->over_color = _g3;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(32)
	this->up_color = _g4;
	HX_STACK_LINE(34)
	if (((Asset != null()))){
		HX_STACK_LINE(35)
		this->set_label(Asset);
	}
}
;
	return null();
}

//FlxUISpriteButton_obj::~FlxUISpriteButton_obj() { }

Dynamic FlxUISpriteButton_obj::__CreateEmpty() { return  new FlxUISpriteButton_obj; }
hx::ObjectPtr< FlxUISpriteButton_obj > FlxUISpriteButton_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::flixel::FlxSprite Asset,Dynamic OnClick)
{  hx::ObjectPtr< FlxUISpriteButton_obj > result = new FlxUISpriteButton_obj();
	result->__construct(__o_X,__o_Y,Asset,OnClick);
	return result;}

Dynamic FlxUISpriteButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUISpriteButton_obj > result = new FlxUISpriteButton_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

hx::Object *FlxUISpriteButton_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::IFlxSprite_obj)) return operator ::flixel::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::IFlxBasic_obj)) return operator ::flixel::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIButton_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIButton_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IHasParams_obj)) return operator ::flixel::addons::ui::interfaces::IHasParams_obj *();
	return super::__ToInterface(inType);
}

Void FlxUISpriteButton_obj::resize( Float W,Float H){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUISpriteButton","resize",0xe723fe56,"flixel.addons.ui.FlxUISpriteButton.resize","flixel/addons/ui/FlxUISpriteButton.hx",42,0xcd05ded3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(W,"W")
		HX_STACK_ARG(H,"H")
		HX_STACK_LINE(43)
		this->super::resize(W,H);
		HX_STACK_LINE(44)
		this->autoCenterLabel();
	}
return null();
}


Void FlxUISpriteButton_obj::autoCenterLabel( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUISpriteButton","autoCenterLabel",0x0d1e740e,"flixel.addons.ui.FlxUISpriteButton.autoCenterLabel","flixel/addons/ui/FlxUISpriteButton.hx",48,0xcd05ded3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(48)
		if (((this->label != null()))){
			HX_STACK_LINE(49)
			if ((::Std_obj::is(this->label,hx::ClassOf< ::flixel::group::FlxTypedSpriteGroup >()))){
				HX_STACK_LINE(50)
				::flixel::group::FlxTypedSpriteGroup g = this->label;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(51)
				{
					HX_STACK_LINE(51)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(51)
					Array< ::Dynamic > _g1 = g->group->members;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(51)
					while((true)){
						HX_STACK_LINE(51)
						if ((!(((_g < _g1->length))))){
							HX_STACK_LINE(51)
							break;
						}
						HX_STACK_LINE(51)
						::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(sprite,"sprite");
						HX_STACK_LINE(51)
						++(_g);
						HX_STACK_LINE(52)
						Float _g2 = -(sprite->get_width());		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(52)
						Float _g11 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(52)
						sprite->set_x(_g11);
						HX_STACK_LINE(53)
						Float _g21 = -(sprite->get_height());		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(53)
						Float _g3 = (Float(_g21) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(53)
						sprite->set_y(_g3);
					}
				}
				HX_STACK_LINE(58)
				Float W = g->get_width();		HX_STACK_VAR(W,"W");
				HX_STACK_LINE(59)
				Float H = g->get_height();		HX_STACK_VAR(H,"H");
				HX_STACK_LINE(61)
				{
					HX_STACK_LINE(61)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(61)
					Array< ::Dynamic > _g1 = g->group->members;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(61)
					while((true)){
						HX_STACK_LINE(61)
						if ((!(((_g < _g1->length))))){
							HX_STACK_LINE(61)
							break;
						}
						HX_STACK_LINE(61)
						::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(sprite,"sprite");
						HX_STACK_LINE(61)
						++(_g);
						HX_STACK_LINE(62)
						Float _g4 = sprite->get_width();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(62)
						Float _g5 = (W - _g4);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(62)
						Float _g6 = (Float(_g5) / Float((int)2));		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(62)
						sprite->set_x(_g6);
						HX_STACK_LINE(63)
						Float _g7 = sprite->get_height();		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(63)
						Float _g8 = (H - _g7);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(63)
						Float _g9 = (Float(_g8) / Float((int)2));		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(63)
						sprite->set_y(_g9);
					}
				}
			}
			HX_STACK_LINE(66)
			this->super::autoCenterLabel();
		}
	}
return null();
}



FlxUISpriteButton_obj::FlxUISpriteButton_obj()
{
}

Dynamic FlxUISpriteButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"autoCenterLabel") ) { return autoCenterLabel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUISpriteButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUISpriteButton_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("resize"),
	HX_CSTRING("autoCenterLabel"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUISpriteButton_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUISpriteButton_obj::__mClass,"__mClass");
};

#endif

Class FlxUISpriteButton_obj::__mClass;

void FlxUISpriteButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxUISpriteButton"), hx::TCanCast< FlxUISpriteButton_obj> ,sStaticFields,sMemberFields,
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

void FlxUISpriteButton_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
