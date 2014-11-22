#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
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
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUITypedButton_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic OnClick)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","new",0xdcfb6819,"flixel.addons.ui.FlxUITypedButton.new","flixel/addons/ui/FlxUITypedButton.hx",23,0x55608c36)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(OnClick,"OnClick")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(930)
	this->_centerLabelOffset = null();
	HX_STACK_LINE(921)
	this->_src_h = (int)0;
	HX_STACK_LINE(919)
	this->_src_w = (int)0;
	HX_STACK_LINE(917)
	this->_no_graphic = false;
	HX_STACK_LINE(89)
	this->autoResizeLabel = false;
	HX_STACK_LINE(71)
	this->skipButtonUpdate = false;
	HX_STACK_LINE(64)
	this->round_labels = true;
	HX_STACK_LINE(51)
	this->down_toggle_visible = true;
	HX_STACK_LINE(50)
	this->over_toggle_visible = true;
	HX_STACK_LINE(49)
	this->up_toggle_visible = true;
	HX_STACK_LINE(47)
	this->down_visible = true;
	HX_STACK_LINE(46)
	this->over_visible = true;
	HX_STACK_LINE(45)
	this->up_visible = true;
	HX_STACK_LINE(43)
	this->down_toggle_color = null();
	HX_STACK_LINE(42)
	this->over_toggle_color = null();
	HX_STACK_LINE(41)
	this->up_toggle_color = null();
	HX_STACK_LINE(39)
	this->down_color = null();
	HX_STACK_LINE(38)
	this->over_color = null();
	HX_STACK_LINE(37)
	this->up_color = null();
	HX_STACK_LINE(33)
	this->broadcastToFlxUI = true;
	HX_STACK_LINE(31)
	this->toggled = false;
	HX_STACK_LINE(30)
	this->has_toggle = false;
	HX_STACK_LINE(28)
	this->tile = (int)0;
	HX_STACK_LINE(27)
	this->resize_point = null();
	HX_STACK_LINE(26)
	this->resize_ratio = (int)-1;
	HX_STACK_LINE(99)
	super::__construct(X,Y,OnClick);
	HX_STACK_LINE(101)
	::flixel::math::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(101)
	{
		HX_STACK_LINE(101)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(101)
		point->_inPool = false;
		HX_STACK_LINE(101)
		_g = point;
	}
	HX_STACK_LINE(101)
	this->_centerLabelOffset = _g;
	HX_STACK_LINE(103)
	this->statusAnimations[(int)3] = HX_CSTRING("normal_toggled");
	HX_STACK_LINE(104)
	this->statusAnimations[(int)4] = HX_CSTRING("highlight_toggled");
	HX_STACK_LINE(105)
	this->statusAnimations[(int)5] = HX_CSTRING("pressed_toggled");
	HX_STACK_LINE(107)
	Array< Float > _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(107)
	{
		HX_STACK_LINE(107)
		Array< Float > _g2 = Array_obj< Float >::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(107)
		{
			HX_STACK_LINE(107)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(107)
			while((true)){
				HX_STACK_LINE(107)
				if ((!(((_g11 < (int)3))))){
					HX_STACK_LINE(107)
					break;
				}
				HX_STACK_LINE(107)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(107)
				_g2->push((int)1);
			}
		}
		HX_STACK_LINE(107)
		_g1 = _g2;
	}
	HX_STACK_LINE(107)
	this->labelAlphas = _g1;
}
;
	return null();
}

//FlxUITypedButton_obj::~FlxUITypedButton_obj() { }

Dynamic FlxUITypedButton_obj::__CreateEmpty() { return  new FlxUITypedButton_obj; }
hx::ObjectPtr< FlxUITypedButton_obj > FlxUITypedButton_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic OnClick)
{  hx::ObjectPtr< FlxUITypedButton_obj > result = new FlxUITypedButton_obj();
	result->__construct(__o_X,__o_Y,OnClick);
	return result;}

Dynamic FlxUITypedButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUITypedButton_obj > result = new FlxUITypedButton_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *FlxUITypedButton_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::IFlxSprite_obj)) return operator ::flixel::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::IFlxBasic_obj)) return operator ::flixel::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIClickable_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IResizable_obj)) return operator ::flixel::addons::ui::interfaces::IResizable_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IHasParams_obj)) return operator ::flixel::addons::ui::interfaces::IHasParams_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::ICursorPointable_obj)) return operator ::flixel::addons::ui::interfaces::ICursorPointable_obj *();
	return super::__ToInterface(inType);
}

::flixel::FlxSprite FlxUITypedButton_obj::set_toggle_label( ::flixel::FlxSprite f){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","set_toggle_label",0x2a641e6d,"flixel.addons.ui.FlxUITypedButton.set_toggle_label","flixel/addons/ui/FlxUITypedButton.hx",54,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(55)
	if (((this->label != null()))){
		HX_STACK_LINE(56)
		this->toggle_label = f;
		HX_STACK_LINE(57)
		return this->toggle_label;
	}
	HX_STACK_LINE(59)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITypedButton_obj,set_toggle_label,return )

bool FlxUITypedButton_obj::set_skipButtonUpdate( bool b){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","set_skipButtonUpdate",0xb2aa475e,"flixel.addons.ui.FlxUITypedButton.set_skipButtonUpdate","flixel/addons/ui/FlxUITypedButton.hx",72,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(73)
	this->skipButtonUpdate = b;
	HX_STACK_LINE(74)
	return this->skipButtonUpdate;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITypedButton_obj,set_skipButtonUpdate,return )

Dynamic FlxUITypedButton_obj::set_params( Dynamic p){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","set_params",0x0e7dcaea,"flixel.addons.ui.FlxUITypedButton.set_params","flixel/addons/ui/FlxUITypedButton.hx",78,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(79)
	this->params = p;
	HX_STACK_LINE(80)
	return this->params;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITypedButton_obj,set_params,return )

Void FlxUITypedButton_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","destroy",0xe7669533,"flixel.addons.ui.FlxUITypedButton.destroy","flixel/addons/ui/FlxUITypedButton.hx",83,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_LINE(84)
		::flixel::math::FlxPoint _g = ::flixel::util::FlxDestroyUtil_obj::put(this->resize_point);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(84)
		this->resize_point = _g;
		HX_STACK_LINE(85)
		this->super::destroy();
	}
return null();
}


Void FlxUITypedButton_obj::graphicLoaded( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","graphicLoaded",0x3b865dc6,"flixel.addons.ui.FlxUITypedButton.graphicLoaded","flixel/addons/ui/FlxUITypedButton.hx",110,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_LINE(111)
		this->super::graphicLoaded();
		HX_STACK_LINE(113)
		this->setupAnimation(HX_CSTRING("normal_toggled"),(int)3);
		HX_STACK_LINE(114)
		this->setupAnimation(HX_CSTRING("highlight_toggled"),(int)4);
		HX_STACK_LINE(115)
		this->setupAnimation(HX_CSTRING("pressed_toggled"),(int)5);
	}
return null();
}


Void FlxUITypedButton_obj::copyGraphic( ::flixel::addons::ui::FlxUITypedButton other){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","copyGraphic",0xfb27502c,"flixel.addons.ui.FlxUITypedButton.copyGraphic","flixel/addons/ui/FlxUITypedButton.hx",118,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(119)
		this->_src_w = other->_src_w;
		HX_STACK_LINE(120)
		this->_src_h = other->_src_h;
		HX_STACK_LINE(121)
		Array< int > _g = ::flixel::addons::ui::U_obj::copy_shallow_arr_i(other->_frame_indeces);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(121)
		this->_frame_indeces = _g;
		HX_STACK_LINE(122)
		this->tile = other->tile;
		HX_STACK_LINE(123)
		this->resize_ratio = other->resize_ratio;
		HX_STACK_LINE(125)
		if (((other->_centerLabelOffset == null()))){
			HX_STACK_LINE(127)
			this->_centerLabelOffset = null();
		}
		else{
			HX_STACK_LINE(131)
			::flixel::math::FlxPoint _g1 = ::flixel::math::FlxPoint_obj::__new(other->_centerLabelOffset->x,other->_centerLabelOffset->y);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(131)
			this->_centerLabelOffset = _g1;
		}
		HX_STACK_LINE(134)
		this->_no_graphic = other->_no_graphic;
		HX_STACK_LINE(136)
		if (((other->_slice9_arrays != null()))){
			HX_STACK_LINE(138)
			Array< ::Dynamic > _g2 = other->_slice9_arrays->copy();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(138)
			this->_slice9_arrays = _g2;
		}
		HX_STACK_LINE(140)
		if (((other->_slice9_assets != null()))){
			HX_STACK_LINE(142)
			Array< ::String > _g3 = other->_slice9_assets->copy();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(142)
			this->_slice9_assets = _g3;
		}
		HX_STACK_LINE(145)
		if (((bool((this->_slice9_arrays == null())) || bool((this->_slice9_assets == null()))))){
			HX_STACK_LINE(147)
			int _g4 = other->get_width();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(147)
			int _g5 = other->get_height();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(147)
			this->loadGraphic(other->graphic,true,_g4,_g5,null(),null());
		}
		else{
			HX_STACK_LINE(151)
			Float _g6 = other->get_width();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(151)
			Float _g7 = other->get_height();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(151)
			this->resize(_g6,_g7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITypedButton_obj,copyGraphic,(void))

Void FlxUITypedButton_obj::copyStyle( ::flixel::addons::ui::FlxUITypedButton other){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","copyStyle",0x940e71b5,"flixel.addons.ui.FlxUITypedButton.copyStyle","flixel/addons/ui/FlxUITypedButton.hx",155,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(156)
		this->up_color = other->up_color;
		HX_STACK_LINE(157)
		this->over_color = other->over_color;
		HX_STACK_LINE(158)
		this->down_color = other->down_color;
		HX_STACK_LINE(160)
		this->up_toggle_color = other->up_toggle_color;
		HX_STACK_LINE(161)
		this->over_toggle_color = other->over_toggle_color;
		HX_STACK_LINE(162)
		this->down_toggle_color = other->over_toggle_color;
		HX_STACK_LINE(164)
		this->up_visible = other->up_visible;
		HX_STACK_LINE(165)
		this->over_visible = other->over_visible;
		HX_STACK_LINE(166)
		this->down_visible = other->down_visible;
		HX_STACK_LINE(168)
		this->up_toggle_visible = other->up_toggle_visible;
		HX_STACK_LINE(169)
		this->over_toggle_visible = other->over_toggle_visible;
		HX_STACK_LINE(170)
		this->down_toggle_visible = other->down_toggle_visible;
		HX_STACK_LINE(172)
		::flixel::math::FlxPoint ctPt = other->getCenterLabelOffset();		HX_STACK_VAR(ctPt,"ctPt");
		HX_STACK_LINE(173)
		this->setCenterLabelOffset(ctPt->x,ctPt->y);
		HX_STACK_LINE(175)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(176)
		{
			HX_STACK_LINE(176)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(176)
			Array< ::Dynamic > _g1 = other->labelOffsets;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(176)
			while((true)){
				HX_STACK_LINE(176)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(176)
					break;
				}
				HX_STACK_LINE(176)
				::flixel::math::FlxPoint flxPt = _g1->__get(_g).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(flxPt,"flxPt");
				HX_STACK_LINE(176)
				++(_g);
				HX_STACK_LINE(177)
				this->labelOffsets->__get(i).StaticCast< ::flixel::math::FlxPoint >()->set_x(flxPt->x);
				HX_STACK_LINE(178)
				this->labelOffsets->__get(i).StaticCast< ::flixel::math::FlxPoint >()->set_y(flxPt->y);
				HX_STACK_LINE(179)
				(i)++;
			}
		}
		HX_STACK_LINE(182)
		i = (int)0;
		HX_STACK_LINE(183)
		{
			HX_STACK_LINE(183)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(183)
			Array< Float > _g1 = other->labelAlphas;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(183)
			while((true)){
				HX_STACK_LINE(183)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(183)
					break;
				}
				HX_STACK_LINE(183)
				Float alpha = _g1->__get(_g);		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(183)
				++(_g);
				HX_STACK_LINE(184)
				this->labelAlphas[i] = alpha;
				HX_STACK_LINE(185)
				(i)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITypedButton_obj,copyStyle,(void))

Void FlxUITypedButton_obj::setAllLabelOffsets( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","setAllLabelOffsets",0x57424f92,"flixel.addons.ui.FlxUITypedButton.setAllLabelOffsets","flixel/addons/ui/FlxUITypedButton.hx",196,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(196)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(196)
		Array< ::Dynamic > _g1 = this->labelOffsets;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(196)
		while((true)){
			HX_STACK_LINE(196)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(196)
				break;
			}
			HX_STACK_LINE(196)
			::flixel::math::FlxPoint labelOffset = _g1->__get(_g).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(labelOffset,"labelOffset");
			HX_STACK_LINE(196)
			++(_g);
			HX_STACK_LINE(197)
			labelOffset->set(X,Y);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITypedButton_obj,setAllLabelOffsets,(void))

Void FlxUITypedButton_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","update",0x163ec7f0,"flixel.addons.ui.FlxUITypedButton.update","flixel/addons/ui/FlxUITypedButton.hx",201,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(202)
		this->super::update(elapsed);
		HX_STACK_LINE(205)
		if (((this->label != null()))){
			HX_STACK_LINE(207)
			::flixel::FlxSprite theLabel = this->fetchAndShowCorrectLabel();		HX_STACK_VAR(theLabel,"theLabel");
			HX_STACK_LINE(208)
			theLabel->set_x(((this->x + this->_centerLabelOffset->x) + this->labelOffsets->__get(this->status).StaticCast< ::flixel::math::FlxPoint >()->x));
			HX_STACK_LINE(209)
			theLabel->set_y(((this->y + this->_centerLabelOffset->y) + this->labelOffsets->__get(this->status).StaticCast< ::flixel::math::FlxPoint >()->y));
			HX_STACK_LINE(211)
			if ((this->round_labels)){
				HX_STACK_LINE(212)
				int _g = ::Std_obj::_int((theLabel->x + 0.5));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(212)
				theLabel->set_x(_g);
				HX_STACK_LINE(213)
				int _g1 = ::Std_obj::_int((theLabel->y + 0.5));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(213)
				theLabel->set_y(_g1);
			}
			HX_STACK_LINE(216)
			theLabel->scrollFactor = this->scrollFactor;
		}
	}
return null();
}


Void FlxUITypedButton_obj::updateStatusAnimation( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","updateStatusAnimation",0xbd8e1f62,"flixel.addons.ui.FlxUITypedButton.updateStatusAnimation","flixel/addons/ui/FlxUITypedButton.hx",224,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_LINE(224)
		if (((bool(this->has_toggle) && bool(this->toggled)))){
			HX_STACK_LINE(225)
			this->animation->play(this->statusAnimations->__get((this->status + (int)3)),null(),null(),null());
		}
		else{
			HX_STACK_LINE(227)
			this->super::updateStatusAnimation();
		}
	}
return null();
}


Void FlxUITypedButton_obj::draw( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","draw",0x786d562b,"flixel.addons.ui.FlxUITypedButton.draw","flixel/addons/ui/FlxUITypedButton.hx",235,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_LINE(236)
		this->super::draw();
		HX_STACK_LINE(237)
		if (((bool((bool((bool(this->has_toggle) && bool(this->toggled))) && bool((this->toggle_label != null())))) && bool((this->toggle_label->visible == true))))){
			HX_STACK_LINE(238)
			Array< ::Dynamic > _g = this->get_cameras();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(238)
			this->toggle_label->set_cameras(_g);
			HX_STACK_LINE(239)
			this->toggle_label->draw();
		}
	}
return null();
}


Void FlxUITypedButton_obj::resize( Float W,Float H){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","resize",0x97b49bdb,"flixel.addons.ui.FlxUITypedButton.resize","flixel/addons/ui/FlxUITypedButton.hx",243,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_ARG(W,"W")
		HX_STACK_ARG(H,"H")
		HX_STACK_LINE(244)
		Float old_width = this->get_width();		HX_STACK_VAR(old_width,"old_width");
		HX_STACK_LINE(245)
		Float old_height = this->get_height();		HX_STACK_VAR(old_height,"old_height");
		HX_STACK_LINE(247)
		Float label_diffx = (int)0;		HX_STACK_VAR(label_diffx,"label_diffx");
		HX_STACK_LINE(248)
		Float label_diffy = (int)0;		HX_STACK_VAR(label_diffy,"label_diffy");
		HX_STACK_LINE(249)
		if (((this->label != null()))){
			HX_STACK_LINE(251)
			Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(251)
			Float _g1 = this->label->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(251)
			Float _g2 = (_g - _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(251)
			label_diffx = _g2;
			HX_STACK_LINE(252)
			Float _g3 = this->get_height();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(252)
			Float _g4 = this->label->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(252)
			Float _g5 = (_g3 - _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(252)
			label_diffy = _g5;
		}
		HX_STACK_LINE(255)
		Float old_offx = (int)0;		HX_STACK_VAR(old_offx,"old_offx");
		HX_STACK_LINE(256)
		Float old_offy = (int)0;		HX_STACK_VAR(old_offy,"old_offy");
		HX_STACK_LINE(258)
		if (((W == (int)0))){
			HX_STACK_LINE(258)
			W = (int)80;
		}
		HX_STACK_LINE(259)
		if (((H == (int)0))){
			HX_STACK_LINE(259)
			H = (int)20;
		}
		HX_STACK_LINE(261)
		if (((this->_slice9_assets != null()))){
			HX_STACK_LINE(262)
			int _g6 = ::Std_obj::_int(W);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(262)
			int _g7 = ::Std_obj::_int(H);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(262)
			this->loadGraphicSlice9(this->_slice9_assets,_g6,_g7,this->_slice9_arrays,this->tile,this->resize_ratio,this->has_toggle,this->_src_w,this->_src_h,this->_frame_indeces);
		}
		else{
			HX_STACK_LINE(264)
			if ((this->_no_graphic)){
				HX_STACK_LINE(265)
				::openfl::_v2::display::BitmapData upB;		HX_STACK_VAR(upB,"upB");
				HX_STACK_LINE(266)
				if ((!(this->has_toggle))){
					HX_STACK_LINE(267)
					int _g8 = ::Std_obj::_int(W);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(267)
					int _g9 = ::Std_obj::_int((H * (int)3));		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(267)
					::openfl::_v2::display::BitmapData _g10 = ::openfl::_v2::display::BitmapData_obj::__new(_g8,_g9,true,(int)0,null());		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(267)
					upB = _g10;
				}
				else{
					HX_STACK_LINE(269)
					int _g11 = ::Std_obj::_int(W);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(269)
					int _g12 = ::Std_obj::_int((H * (int)6));		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(269)
					::openfl::_v2::display::BitmapData _g13 = ::openfl::_v2::display::BitmapData_obj::__new(_g11,_g12,true,(int)0,null());		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(269)
					upB = _g13;
				}
				HX_STACK_LINE(271)
				this->loadGraphicsUpOverDown(upB,null(),null());
			}
			else{
				HX_STACK_LINE(274)
				int _g14 = ::Std_obj::_int(W);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(274)
				int _g15 = ::Std_obj::_int(H);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(274)
				this->loadGraphicSlice9(null(),_g14,_g15,null(),this->tile,null(),null(),null(),null(),null());
			}
		}
		HX_STACK_LINE(278)
		if (((bool((this->label != null())) && bool(this->autoResizeLabel)))){
			HX_STACK_LINE(280)
			if ((::Std_obj::is(this->label,hx::ClassOf< ::flixel::addons::ui::interfaces::IResizable >()))){
				HX_STACK_LINE(282)
				Float targetW = (W - label_diffx);		HX_STACK_VAR(targetW,"targetW");
				HX_STACK_LINE(283)
				Float targetH = (H - label_diffy);		HX_STACK_VAR(targetH,"targetH");
				HX_STACK_LINE(284)
				::flixel::addons::ui::interfaces::IResizable ir = this->label;		HX_STACK_VAR(ir,"ir");
				HX_STACK_LINE(285)
				ir->resize(targetW,targetH);
			}
		}
		HX_STACK_LINE(289)
		this->autoCenterLabel();
		HX_STACK_LINE(291)
		Float _g16 = this->get_width();		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(291)
		Float diff_w = (_g16 - old_width);		HX_STACK_VAR(diff_w,"diff_w");
		HX_STACK_LINE(292)
		Float _g17 = this->get_height();		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(292)
		Float diff_h = (_g17 - old_height);		HX_STACK_VAR(diff_h,"diff_h");
		HX_STACK_LINE(294)
		if (((this->resize_point != null()))){
			HX_STACK_LINE(295)
			Float delta_x = (diff_w * this->resize_point->x);		HX_STACK_VAR(delta_x,"delta_x");
			HX_STACK_LINE(296)
			Float delta_y = (diff_h * this->resize_point->y);		HX_STACK_VAR(delta_y,"delta_y");
			HX_STACK_LINE(297)
			{
				HX_STACK_LINE(297)
				::flixel::addons::ui::FlxUITypedButton _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(297)
				_g->set_x((_g->x - delta_x));
			}
			HX_STACK_LINE(298)
			{
				HX_STACK_LINE(298)
				::flixel::addons::ui::FlxUITypedButton _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(298)
				_g->set_y((_g->y - delta_y));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITypedButton_obj,resize,(void))

::openfl::_v2::display::BitmapData FlxUITypedButton_obj::getBmp( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","getBmp",0x32533736,"flixel.addons.ui.FlxUITypedButton.getBmp","flixel/addons/ui/FlxUITypedButton.hx",303,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	struct _Function_1_1{
		inline static bool Block( ::String &str){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUITypedButton.hx",304,0x55608c36)
			{
				HX_STACK_LINE(304)
				::flixel::system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(_this,"_this");
				struct _Function_2_1{
					inline static bool Block( ::String &str,::flixel::system::frontEnds::BitmapFrontEnd _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUITypedButton.hx",304,0x55608c36)
						{
							HX_STACK_LINE(304)
							::flixel::graphics::FlxGraphic _g = _this->_cache->get(str);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(304)
							return (_g != null());
						}
						return null();
					}
				};
				HX_STACK_LINE(304)
				return (  ((_this->_cache->exists(str))) ? bool(_Function_2_1::Block(str,_this)) : bool(false) );
			}
			return null();
		}
	};
	HX_STACK_LINE(304)
	if ((_Function_1_1::Block(str))){
		HX_STACK_LINE(306)
		::flixel::graphics::FlxGraphic cg = ::flixel::FlxG_obj::bitmap->get(str);		HX_STACK_VAR(cg,"cg");
		HX_STACK_LINE(307)
		if (((cg->bitmap != null()))){
			HX_STACK_LINE(309)
			return cg->bitmap;
		}
	}
	HX_STACK_LINE(312)
	return ::openfl::_v2::Assets_obj::getBitmapData(str,null());
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITypedButton_obj,getBmp,return )

Void FlxUITypedButton_obj::loadGraphicsMultiple( Array< ::String > assets,::String __o_Key){
::String Key = __o_Key.Default(HX_CSTRING(""));
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","loadGraphicsMultiple",0x389aa468,"flixel.addons.ui.FlxUITypedButton.loadGraphicsMultiple","flixel/addons/ui/FlxUITypedButton.hx",322,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(assets,"assets")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(323)
		this->_slice9_assets = null();
		HX_STACK_LINE(324)
		this->_slice9_arrays = null();
		HX_STACK_LINE(325)
		this->resize_ratio = (int)-1;
		HX_STACK_LINE(327)
		::String key = HX_CSTRING("");		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(329)
		if (((assets->length <= (int)3))){
			HX_STACK_LINE(330)
			while((true)){
				HX_STACK_LINE(330)
				if ((!(((assets->length < (int)3))))){
					HX_STACK_LINE(330)
					break;
				}
				HX_STACK_LINE(330)
				assets->push(null());
			}
			HX_STACK_LINE(331)
			if (((assets->__get((int)1) == null()))){
				HX_STACK_LINE(331)
				assets[(int)1] = assets->__get((int)0);
			}
			HX_STACK_LINE(332)
			if (((assets->__get((int)2) == null()))){
				HX_STACK_LINE(332)
				assets[(int)2] = assets->__get((int)1);
			}
			HX_STACK_LINE(333)
			::String _g = assets->join(HX_CSTRING(","));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(333)
			key = _g;
			HX_STACK_LINE(334)
			::openfl::_v2::display::BitmapData _g1 = this->getBmp(assets->__get((int)0));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(334)
			::openfl::_v2::display::BitmapData _g2 = this->getBmp(assets->__get((int)1));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(334)
			::openfl::_v2::display::BitmapData _g3 = this->getBmp(assets->__get((int)2));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(334)
			::openfl::_v2::display::BitmapData pixels = this->assembleButtonFrames(_g1,_g2,_g3);		HX_STACK_VAR(pixels,"pixels");
			HX_STACK_LINE(335)
			if (((Key != HX_CSTRING("")))){
				HX_STACK_LINE(337)
				key = Key;
			}
			HX_STACK_LINE(339)
			this->loadGraphicsUpOverDown(pixels,false,key);
		}
		else{
			HX_STACK_LINE(340)
			if (((assets->length <= (int)6))){
				HX_STACK_LINE(341)
				while((true)){
					HX_STACK_LINE(341)
					if ((!(((assets->length < (int)6))))){
						HX_STACK_LINE(341)
						break;
					}
					HX_STACK_LINE(341)
					assets->push(null());
				}
				HX_STACK_LINE(342)
				if (((assets->__get((int)4) == null()))){
					HX_STACK_LINE(342)
					assets[(int)4] = assets->__get((int)3);
				}
				HX_STACK_LINE(343)
				if (((assets->__get((int)5) == null()))){
					HX_STACK_LINE(343)
					assets[(int)5] = assets->__get((int)4);
				}
				HX_STACK_LINE(344)
				::String _g4 = assets->join(HX_CSTRING(","));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(344)
				key = _g4;
				HX_STACK_LINE(345)
				if (((Key != HX_CSTRING("")))){
					HX_STACK_LINE(347)
					key = Key;
				}
				HX_STACK_LINE(349)
				::openfl::_v2::display::BitmapData _g5 = this->getBmp(assets->__get((int)0));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(349)
				::openfl::_v2::display::BitmapData _g6 = this->getBmp(assets->__get((int)1));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(349)
				::openfl::_v2::display::BitmapData _g7 = this->getBmp(assets->__get((int)2));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(349)
				::openfl::_v2::display::BitmapData pixels_normal = this->assembleButtonFrames(_g5,_g6,_g7);		HX_STACK_VAR(pixels_normal,"pixels_normal");
				HX_STACK_LINE(350)
				::openfl::_v2::display::BitmapData _g8 = this->getBmp(assets->__get((int)3));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(350)
				::openfl::_v2::display::BitmapData _g9 = this->getBmp(assets->__get((int)4));		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(350)
				::openfl::_v2::display::BitmapData _g10 = this->getBmp(assets->__get((int)5));		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(350)
				::openfl::_v2::display::BitmapData pixels_toggle = this->assembleButtonFrames(_g8,_g9,_g10);		HX_STACK_VAR(pixels_toggle,"pixels_toggle");
				HX_STACK_LINE(351)
				::openfl::_v2::display::BitmapData pixels = this->combineToggleBitmaps(pixels_normal,pixels_toggle);		HX_STACK_VAR(pixels,"pixels");
				HX_STACK_LINE(352)
				this->loadGraphicsUpOverDown(pixels,true,key);
				HX_STACK_LINE(353)
				pixels_normal->dispose();
				HX_STACK_LINE(354)
				pixels_toggle->dispose();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITypedButton_obj,loadGraphicsMultiple,(void))

Void FlxUITypedButton_obj::loadGraphicsUpOverDown( Dynamic asset,hx::Null< bool >  __o_for_toggle,::String key){
bool for_toggle = __o_for_toggle.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","loadGraphicsUpOverDown",0xbee26da9,"flixel.addons.ui.FlxUITypedButton.loadGraphicsUpOverDown","flixel/addons/ui/FlxUITypedButton.hx",365,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(asset,"asset")
	HX_STACK_ARG(for_toggle,"for_toggle")
	HX_STACK_ARG(key,"key")
{
		HX_STACK_LINE(366)
		this->_slice9_assets = null();
		HX_STACK_LINE(367)
		this->_slice9_arrays = null();
		HX_STACK_LINE(368)
		this->resize_ratio = (int)-1;
		HX_STACK_LINE(370)
		if ((for_toggle)){
			HX_STACK_LINE(371)
			this->has_toggle = true;
		}
		HX_STACK_LINE(374)
		::openfl::_v2::display::BitmapData upB = null();		HX_STACK_VAR(upB,"upB");
		HX_STACK_LINE(375)
		::openfl::_v2::display::BitmapData overB = null();		HX_STACK_VAR(overB,"overB");
		HX_STACK_LINE(376)
		::openfl::_v2::display::BitmapData downB = null();		HX_STACK_VAR(downB,"downB");
		HX_STACK_LINE(378)
		::openfl::_v2::display::BitmapData bd = null();		HX_STACK_VAR(bd,"bd");
		HX_STACK_LINE(380)
		if ((::Std_obj::is(asset,hx::ClassOf< ::openfl::_v2::display::BitmapData >()))){
			HX_STACK_LINE(381)
			bd = asset;
		}
		else{
			HX_STACK_LINE(382)
			if ((::Std_obj::is(asset,hx::ClassOf< ::String >()))){
				HX_STACK_LINE(383)
				::openfl::_v2::display::BitmapData _g = this->getBmp(asset);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(383)
				bd = _g;
			}
		}
		HX_STACK_LINE(386)
		::openfl::_v2::display::BitmapData _g1 = this->grabButtonFrame(bd,(int)0,this->has_toggle,null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(386)
		upB = _g1;
		HX_STACK_LINE(387)
		::openfl::_v2::display::BitmapData _g2 = this->grabButtonFrame(bd,(int)1,this->has_toggle,null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(387)
		overB = _g2;
		HX_STACK_LINE(388)
		::openfl::_v2::display::BitmapData _g3 = this->grabButtonFrame(bd,(int)2,this->has_toggle,null(),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(388)
		downB = _g3;
		HX_STACK_LINE(390)
		::openfl::_v2::display::BitmapData normalPixels = this->assembleButtonFrames(upB,overB,downB);		HX_STACK_VAR(normalPixels,"normalPixels");
		HX_STACK_LINE(392)
		if ((this->has_toggle)){
			HX_STACK_LINE(393)
			::openfl::_v2::display::BitmapData _g4 = this->grabButtonFrame(bd,(int)3,true,null(),null());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(393)
			upB = _g4;
			HX_STACK_LINE(394)
			::openfl::_v2::display::BitmapData _g5 = this->grabButtonFrame(bd,(int)4,true,null(),null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(394)
			overB = _g5;
			HX_STACK_LINE(395)
			::openfl::_v2::display::BitmapData _g6 = this->grabButtonFrame(bd,(int)5,true,null(),null());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(395)
			downB = _g6;
			HX_STACK_LINE(397)
			::openfl::_v2::display::BitmapData togglePixels = this->assembleButtonFrames(upB,overB,downB);		HX_STACK_VAR(togglePixels,"togglePixels");
			HX_STACK_LINE(398)
			::openfl::_v2::display::BitmapData combinedPixels = this->combineToggleBitmaps(normalPixels,togglePixels);		HX_STACK_VAR(combinedPixels,"combinedPixels");
			HX_STACK_LINE(400)
			::openfl::_v2::display::BitmapData _g7 = ::flixel::util::FlxDestroyUtil_obj::dispose(normalPixels);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(400)
			normalPixels = _g7;
			HX_STACK_LINE(401)
			::openfl::_v2::display::BitmapData _g8 = ::flixel::util::FlxDestroyUtil_obj::dispose(togglePixels);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(401)
			togglePixels = _g8;
			HX_STACK_LINE(403)
			int _g9 = upB->get_width();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(403)
			int _g10 = upB->get_height();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(403)
			this->loadGraphic(combinedPixels,true,_g9,_g10,false,key);
		}
		else{
			HX_STACK_LINE(405)
			int _g11 = upB->get_width();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(405)
			int _g12 = upB->get_height();		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(405)
			this->loadGraphic(normalPixels,true,_g11,_g12,false,key);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUITypedButton_obj,loadGraphicsUpOverDown,(void))

Void FlxUITypedButton_obj::loadGraphicSlice9( Array< ::String > assets,hx::Null< int >  __o_W,hx::Null< int >  __o_H,Array< ::Dynamic > slice9,hx::Null< int >  __o_Tile,hx::Null< Float >  __o_Resize_Ratio,hx::Null< bool >  __o_isToggle,hx::Null< int >  __o_src_w,hx::Null< int >  __o_src_h,Array< int > frame_indeces){
int W = __o_W.Default(80);
int H = __o_H.Default(20);
int Tile = __o_Tile.Default(0);
Float Resize_Ratio = __o_Resize_Ratio.Default(-1);
bool isToggle = __o_isToggle.Default(false);
int src_w = __o_src_w.Default(0);
int src_h = __o_src_h.Default(0);
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","loadGraphicSlice9",0xb9685fe2,"flixel.addons.ui.FlxUITypedButton.loadGraphicSlice9","flixel/addons/ui/FlxUITypedButton.hx",426,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(assets,"assets")
	HX_STACK_ARG(W,"W")
	HX_STACK_ARG(H,"H")
	HX_STACK_ARG(slice9,"slice9")
	HX_STACK_ARG(Tile,"Tile")
	HX_STACK_ARG(Resize_Ratio,"Resize_Ratio")
	HX_STACK_ARG(isToggle,"isToggle")
	HX_STACK_ARG(src_w,"src_w")
	HX_STACK_ARG(src_h,"src_h")
	HX_STACK_ARG(frame_indeces,"frame_indeces")
{
		HX_STACK_LINE(428)
		if (((src_w != (int)0))){
			HX_STACK_LINE(429)
			this->_src_w = src_w;
		}
		HX_STACK_LINE(431)
		if (((src_h != (int)0))){
			HX_STACK_LINE(432)
			this->_src_h = src_h;
		}
		HX_STACK_LINE(435)
		this->tile = Tile;
		HX_STACK_LINE(437)
		this->has_toggle = isToggle;
		HX_STACK_LINE(439)
		this->resize_ratio = Resize_Ratio;
		HX_STACK_LINE(441)
		this->_slice9_assets = assets;
		HX_STACK_LINE(442)
		this->_slice9_arrays = slice9;
		HX_STACK_LINE(444)
		::String key = null();		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(446)
		Array< ::Dynamic > arr_bmpData = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(arr_bmpData,"arr_bmpData");
		HX_STACK_LINE(447)
		Array< ::Dynamic > arr_flx9 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(arr_flx9,"arr_flx9");
		HX_STACK_LINE(450)
		if (((frame_indeces == null()))){
			HX_STACK_LINE(452)
			if ((this->has_toggle)){
				HX_STACK_LINE(452)
				frame_indeces = Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3).Add((int)4).Add((int)5);
			}
			else{
				HX_STACK_LINE(453)
				frame_indeces = Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2);
			}
		}
		else{
			HX_STACK_LINE(455)
			int max_index = (int)2;		HX_STACK_VAR(max_index,"max_index");
			HX_STACK_LINE(456)
			if ((this->has_toggle)){
				HX_STACK_LINE(456)
				max_index = (int)5;
			}
			HX_STACK_LINE(461)
			while((true)){
				HX_STACK_LINE(461)
				if ((!(((frame_indeces->length < (max_index + (int)1)))))){
					HX_STACK_LINE(461)
					break;
				}
				HX_STACK_LINE(462)
				frame_indeces->push((frame_indeces->length - (int)1));
			}
			HX_STACK_LINE(466)
			{
				HX_STACK_LINE(466)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(466)
				int _g = frame_indeces->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(466)
				while((true)){
					HX_STACK_LINE(466)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(466)
						break;
					}
					HX_STACK_LINE(466)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(467)
					if (((frame_indeces->__get(i) > (int)5))){
						HX_STACK_LINE(468)
						frame_indeces[i] = (int)5;
					}
					else{
						HX_STACK_LINE(469)
						if (((frame_indeces->__get(i) < (int)0))){
							HX_STACK_LINE(470)
							frame_indeces[i] = (int)0;
						}
					}
				}
			}
		}
		HX_STACK_LINE(475)
		this->_frame_indeces = frame_indeces;
		HX_STACK_LINE(477)
		if (((W == (int)0))){
			HX_STACK_LINE(478)
			W = (int)80;
		}
		HX_STACK_LINE(480)
		if (((H == (int)0))){
			HX_STACK_LINE(481)
			H = (int)20;
		}
		HX_STACK_LINE(484)
		if (((assets == null()))){
			HX_STACK_LINE(485)
			::openfl::_v2::display::BitmapData temp;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(488)
			if ((!(isToggle))){
				HX_STACK_LINE(489)
				assets = Array_obj< ::String >::__new().Add(HX_CSTRING("flixel/flixel-ui/img/button.png"));
				HX_STACK_LINE(490)
				Array< int > _g = ::flixel::util::FlxStringUtil_obj::toIntArray(HX_CSTRING("6,6,11,11"));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(490)
				Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new().Add(_g);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(490)
				slice9 = _g1;
				HX_STACK_LINE(491)
				::openfl::_v2::display::BitmapData _g2 = this->getBmp(assets->__get((int)0));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(491)
				temp = _g2;
				HX_STACK_LINE(492)
				int _g3 = temp->get_width();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(492)
				int _g4 = ::Std_obj::_int(_g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(492)
				this->_src_w = _g4;
				HX_STACK_LINE(493)
				int _g5 = temp->get_height();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(493)
				Float _g6 = (Float(_g5) / Float((int)3));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(493)
				int _g7 = ::Std_obj::_int(_g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(493)
				this->_src_h = _g7;
			}
			else{
				HX_STACK_LINE(495)
				assets = Array_obj< ::String >::__new().Add(HX_CSTRING("flixel/flixel-ui/img/button_toggle.png"));
				HX_STACK_LINE(496)
				Array< int > _g8 = ::flixel::util::FlxStringUtil_obj::toIntArray(HX_CSTRING("6,6,11,11"));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(496)
				Array< ::Dynamic > _g9 = Array_obj< ::Dynamic >::__new().Add(_g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(496)
				slice9 = _g9;
				HX_STACK_LINE(497)
				::openfl::_v2::display::BitmapData _g10 = this->getBmp(assets->__get((int)0));		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(497)
				temp = _g10;
				HX_STACK_LINE(498)
				int _g11 = temp->get_width();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(498)
				int _g12 = ::Std_obj::_int(_g11);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(498)
				this->_src_w = _g12;
				HX_STACK_LINE(499)
				int _g13 = temp->get_height();		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(499)
				Float _g14 = (Float(_g13) / Float((int)6));		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(499)
				int _g15 = ::Std_obj::_int(_g14);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(499)
				this->_src_h = _g15;
			}
			HX_STACK_LINE(502)
			temp = null();
		}
		HX_STACK_LINE(505)
		if (((bool(!(this->has_toggle)) && bool((assets->length <= (int)3))))){
			HX_STACK_LINE(507)
			arr_bmpData = Array_obj< ::Dynamic >::__new().Add(null()).Add(null()).Add(null());
			HX_STACK_LINE(508)
			arr_flx9 = Array_obj< ::Dynamic >::__new().Add(null()).Add(null()).Add(null());
		}
		else{
			HX_STACK_LINE(511)
			this->has_toggle = true;
			HX_STACK_LINE(512)
			arr_bmpData = Array_obj< ::Dynamic >::__new().Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null());
			HX_STACK_LINE(513)
			arr_flx9 = Array_obj< ::Dynamic >::__new().Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null());
		}
		HX_STACK_LINE(516)
		this->_flashRect2->width = W;
		HX_STACK_LINE(517)
		this->_flashRect2->height = H;
		HX_STACK_LINE(519)
		if (((assets->length == (int)1))){
			HX_STACK_LINE(520)
			::openfl::_v2::display::BitmapData all = this->getBmp(assets->__get((int)0));		HX_STACK_VAR(all,"all");
			HX_STACK_LINE(522)
			if (((bool((this->_src_w == (int)0)) || bool((this->_src_h == (int)0))))){
				HX_STACK_LINE(523)
				HX_STACK_DO_THROW(::openfl::errors::Error_obj::__new(HX_CSTRING("Ambiguous situation! If you only provide one asset, you MUST provide src_w and src_h. Otherwise I can't tell if it's a stacked set of frames or a single frame."),null()));
			}
			else{
				HX_STACK_LINE(526)
				int _g16 = all->get_height();		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(526)
				if (((_g16 > this->_src_h))){
					HX_STACK_LINE(527)
					{
						HX_STACK_LINE(527)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(527)
						int _g = arr_bmpData->length;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(527)
						while((true)){
							HX_STACK_LINE(527)
							if ((!(((_g1 < _g))))){
								HX_STACK_LINE(527)
								break;
							}
							HX_STACK_LINE(527)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(528)
							arr_bmpData[i] = this->grabButtonFrame(all,i,this->has_toggle,this->_src_w,this->_src_h);
							HX_STACK_LINE(529)
							if ((this->has_toggle)){
							}
						}
					}
					HX_STACK_LINE(534)
					if (((bool((slice9 != null())) && bool((slice9->__get((int)0).StaticCast< Array< int > >() != Array_obj< int >::__new()))))){
						HX_STACK_LINE(537)
						{
							HX_STACK_LINE(537)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(537)
							int _g = arr_bmpData->length;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(537)
							while((true)){
								HX_STACK_LINE(537)
								if ((!(((_g1 < _g))))){
									HX_STACK_LINE(537)
									break;
								}
								HX_STACK_LINE(537)
								int i = (_g1)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(538)
								arr_flx9[i] = ::flixel::addons::ui::FlxUI9SliceSprite_obj::__new((int)0,(int)0,arr_bmpData->__get(i).StaticCast< ::openfl::_v2::display::BitmapData >(),this->_flashRect2,slice9->__get((int)0).StaticCast< Array< int > >(),this->tile,false,((assets->__get((int)0) + HX_CSTRING(":")) + i),this->resize_ratio,null(),null());
								HX_STACK_LINE(539)
								arr_flx9->__get(i).StaticCast< ::flixel::addons::ui::FlxUI9SliceSprite >()->set_resize_point(this->resize_point);
							}
						}
						HX_STACK_LINE(543)
						{
							HX_STACK_LINE(543)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(543)
							int _g = arr_bmpData->length;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(543)
							while((true)){
								HX_STACK_LINE(543)
								if ((!(((_g1 < _g))))){
									HX_STACK_LINE(543)
									break;
								}
								HX_STACK_LINE(543)
								int i = (_g1)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(544)
								arr_bmpData[i] = arr_flx9->__get(i).StaticCast< ::flixel::addons::ui::FlxUI9SliceSprite >()->get_pixels();
							}
						}
						HX_STACK_LINE(548)
						int _g17 = arr_bmpData->__get((int)0).StaticCast< ::openfl::_v2::display::BitmapData >()->get_width();		HX_STACK_VAR(_g17,"_g17");
						HX_STACK_LINE(548)
						W = _g17;
						HX_STACK_LINE(549)
						int _g18 = arr_bmpData->__get((int)0).StaticCast< ::openfl::_v2::display::BitmapData >()->get_height();		HX_STACK_VAR(_g18,"_g18");
						HX_STACK_LINE(549)
						H = _g18;
					}
				}
				else{
					HX_STACK_LINE(552)
					arr_bmpData[(int)0] = all;
				}
			}
		}
		else{
			HX_STACK_LINE(558)
			if ((!(this->has_toggle))){
				HX_STACK_LINE(559)
				while((true)){
					HX_STACK_LINE(559)
					if ((!(((assets->length < (int)3))))){
						HX_STACK_LINE(559)
						break;
					}
					HX_STACK_LINE(560)
					assets->push(HX_CSTRING(""));
				}
			}
			else{
				HX_STACK_LINE(563)
				while((true)){
					HX_STACK_LINE(563)
					if ((!(((assets->length < (int)6))))){
						HX_STACK_LINE(563)
						break;
					}
					HX_STACK_LINE(564)
					assets->push(HX_CSTRING(""));
				}
			}
			HX_STACK_LINE(568)
			if (((assets->__get((int)0) != HX_CSTRING("")))){
				HX_STACK_LINE(569)
				if (((bool((slice9 != null())) && bool((slice9->__get((int)0).StaticCast< Array< int > >() != Array_obj< int >::__new()))))){
					HX_STACK_LINE(572)
					while((true)){
						HX_STACK_LINE(572)
						if ((!(((slice9->length < assets->length))))){
							HX_STACK_LINE(572)
							break;
						}
						HX_STACK_LINE(573)
						slice9->push(null());
					}
					HX_STACK_LINE(576)
					arr_flx9[(int)0] = ::flixel::addons::ui::FlxUI9SliceSprite_obj::__new((int)0,(int)0,assets->__get((int)0),this->_flashRect2,slice9->__get((int)0).StaticCast< Array< int > >(),this->tile,false,HX_CSTRING(""),this->resize_ratio,null(),null());
					HX_STACK_LINE(577)
					arr_bmpData[(int)0] = arr_flx9->__get((int)0).StaticCast< ::flixel::addons::ui::FlxUI9SliceSprite >()->get_pixels();
					HX_STACK_LINE(579)
					{
						HX_STACK_LINE(579)
						int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(579)
						int _g = assets->length;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(579)
						while((true)){
							HX_STACK_LINE(579)
							if ((!(((_g1 < _g))))){
								HX_STACK_LINE(579)
								break;
							}
							HX_STACK_LINE(579)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(580)
							if (((assets->__get(i) != HX_CSTRING("")))){
								HX_STACK_LINE(581)
								arr_flx9[i] = ::flixel::addons::ui::FlxUI9SliceSprite_obj::__new((int)0,(int)0,assets->__get(i),this->_flashRect2,slice9->__get(i).StaticCast< Array< int > >(),this->tile,false,HX_CSTRING(""),this->resize_ratio,null(),null());
								HX_STACK_LINE(582)
								arr_bmpData[i] = arr_flx9->__get(i).StaticCast< ::flixel::addons::ui::FlxUI9SliceSprite >()->get_pixels();
							}
						}
					}
					HX_STACK_LINE(587)
					int _g19 = arr_bmpData->__get((int)0).StaticCast< ::openfl::_v2::display::BitmapData >()->get_width();		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(587)
					W = _g19;
					HX_STACK_LINE(588)
					int _g20 = arr_bmpData->__get((int)0).StaticCast< ::openfl::_v2::display::BitmapData >()->get_height();		HX_STACK_VAR(_g20,"_g20");
					HX_STACK_LINE(588)
					H = _g20;
				}
				else{
					HX_STACK_LINE(592)
					key = HX_CSTRING("");
					HX_STACK_LINE(593)
					{
						HX_STACK_LINE(593)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(593)
						int _g = assets->length;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(593)
						while((true)){
							HX_STACK_LINE(593)
							if ((!(((_g1 < _g))))){
								HX_STACK_LINE(593)
								break;
							}
							HX_STACK_LINE(593)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(594)
							arr_bmpData[i] = this->getBmp(assets->__get(i));
							HX_STACK_LINE(595)
							hx::AddEq(key,assets->__get(i));
							HX_STACK_LINE(596)
							if (((i < (assets->length - (int)1)))){
								HX_STACK_LINE(597)
								hx::AddEq(key,HX_CSTRING(","));
							}
						}
					}
					HX_STACK_LINE(600)
					int _g21 = arr_bmpData->__get((int)0).StaticCast< ::openfl::_v2::display::BitmapData >()->get_width();		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(600)
					W = _g21;
					HX_STACK_LINE(601)
					int _g22 = arr_bmpData->__get((int)0).StaticCast< ::openfl::_v2::display::BitmapData >()->get_height();		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(601)
					H = _g22;
				}
			}
			else{
				HX_STACK_LINE(604)
				if (((W == (int)0))){
					HX_STACK_LINE(604)
					W = (int)80;
				}
				HX_STACK_LINE(605)
				if (((H == (int)0))){
					HX_STACK_LINE(605)
					H = (int)20;
				}
				HX_STACK_LINE(606)
				arr_bmpData[(int)0] = ::openfl::_v2::display::BitmapData_obj::__new(W,(H * (int)3),true,(int)0,null());
				HX_STACK_LINE(607)
				key = (((HX_CSTRING("Blank_") + W) + HX_CSTRING("x")) + (H * (int)3));
				HX_STACK_LINE(608)
				this->_no_graphic = true;
			}
		}
		HX_STACK_LINE(612)
		::openfl::_v2::display::BitmapData normalPixels = this->assembleButtonFrames(arr_bmpData->__get(frame_indeces->__get((int)0)).StaticCast< ::openfl::_v2::display::BitmapData >(),arr_bmpData->__get(frame_indeces->__get((int)1)).StaticCast< ::openfl::_v2::display::BitmapData >(),arr_bmpData->__get(frame_indeces->__get((int)2)).StaticCast< ::openfl::_v2::display::BitmapData >());		HX_STACK_VAR(normalPixels,"normalPixels");
		HX_STACK_LINE(616)
		if ((!(this->has_toggle))){
			HX_STACK_LINE(617)
			this->loadGraphic(normalPixels,true,W,H,false,key);
		}
		else{
			HX_STACK_LINE(619)
			::openfl::_v2::display::BitmapData togglePixels = this->assembleButtonFrames(arr_bmpData->__get(frame_indeces->__get((int)3)).StaticCast< ::openfl::_v2::display::BitmapData >(),arr_bmpData->__get(frame_indeces->__get((int)4)).StaticCast< ::openfl::_v2::display::BitmapData >(),arr_bmpData->__get(frame_indeces->__get((int)5)).StaticCast< ::openfl::_v2::display::BitmapData >());		HX_STACK_VAR(togglePixels,"togglePixels");
			HX_STACK_LINE(623)
			::openfl::_v2::display::BitmapData combinedPixels = this->combineToggleBitmaps(normalPixels,togglePixels);		HX_STACK_VAR(combinedPixels,"combinedPixels");
			HX_STACK_LINE(626)
			::openfl::_v2::display::BitmapData _g23 = ::flixel::util::FlxDestroyUtil_obj::dispose(normalPixels);		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(626)
			normalPixels = _g23;
			HX_STACK_LINE(627)
			::openfl::_v2::display::BitmapData _g24 = ::flixel::util::FlxDestroyUtil_obj::dispose(togglePixels);		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(627)
			togglePixels = _g24;
			HX_STACK_LINE(629)
			this->loadGraphic(combinedPixels,true,W,H,null(),null());
		}
		HX_STACK_LINE(633)
		{
			HX_STACK_LINE(633)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(633)
			int _g = arr_flx9->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(633)
			while((true)){
				HX_STACK_LINE(633)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(633)
					break;
				}
				HX_STACK_LINE(633)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(634)
				if (((arr_flx9->__get(i).StaticCast< ::flixel::addons::ui::FlxUI9SliceSprite >() != null()))){
					HX_STACK_LINE(635)
					arr_flx9->__get(i).StaticCast< ::flixel::addons::ui::FlxUI9SliceSprite >()->destroy();
					HX_STACK_LINE(636)
					arr_flx9[i] = null();
				}
			}
		}
		HX_STACK_LINE(639)
		while((true)){
			HX_STACK_LINE(639)
			if ((!(((arr_flx9->length > (int)0))))){
				HX_STACK_LINE(639)
				break;
			}
			HX_STACK_LINE(639)
			arr_flx9->pop().StaticCast< ::flixel::addons::ui::FlxUI9SliceSprite >();
		}
		HX_STACK_LINE(639)
		arr_flx9 = null();
		HX_STACK_LINE(640)
		while((true)){
			HX_STACK_LINE(640)
			if ((!(((arr_bmpData->length > (int)0))))){
				HX_STACK_LINE(640)
				break;
			}
			HX_STACK_LINE(640)
			arr_bmpData->pop().StaticCast< ::openfl::_v2::display::BitmapData >();
		}
		HX_STACK_LINE(640)
		arr_bmpData = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC10(FlxUITypedButton_obj,loadGraphicSlice9,(void))

Void FlxUITypedButton_obj::autoCenterLabel( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","autoCenterLabel",0x5cc27de9,"flixel.addons.ui.FlxUITypedButton.autoCenterLabel","flixel/addons/ui/FlxUITypedButton.hx",648,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_LINE(648)
		if (((this->label != null()))){
			HX_STACK_LINE(649)
			Float offX = (int)0;		HX_STACK_VAR(offX,"offX");
			HX_STACK_LINE(650)
			Float offY = (int)0;		HX_STACK_VAR(offY,"offY");
			HX_STACK_LINE(652)
			Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(652)
			Float _g1 = this->label->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(652)
			Float _g2 = (_g - _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(652)
			offX = _g2;
			HX_STACK_LINE(654)
			if ((::Std_obj::is(this->label,hx::ClassOf< ::flixel::addons::ui::FlxUIText >()))){
				HX_STACK_LINE(655)
				::flixel::addons::ui::FlxUIText tlabel = this->label;		HX_STACK_VAR(tlabel,"tlabel");
				HX_STACK_LINE(656)
				Float _g3 = this->get_width();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(656)
				Float _g4 = tlabel->get_fieldWidth();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(656)
				Float _g5 = (_g3 - _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(656)
				Float _g6 = (Float(_g5) / Float((int)2));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(656)
				offX = _g6;
				HX_STACK_LINE(657)
				Float _g7 = this->get_height();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(657)
				Float _g8 = tlabel->get_height();		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(657)
				Float _g9 = (_g7 - _g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(657)
				Float _g10 = (Float(_g9) / Float((int)2));		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(657)
				offY = _g10;
			}
			else{
				HX_STACK_LINE(659)
				Float _g11 = this->get_width();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(659)
				Float _g12 = this->label->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(659)
				Float _g13 = (_g11 - _g12);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(659)
				Float _g14 = (Float(_g13) / Float((int)2));		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(659)
				offX = _g14;
				HX_STACK_LINE(660)
				Float _g15 = this->get_height();		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(660)
				Float _g16 = this->label->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(660)
				Float _g17 = (_g15 - _g16);		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(660)
				Float _g18 = (Float(_g17) / Float((int)2));		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(660)
				offY = _g18;
			}
			HX_STACK_LINE(663)
			this->_centerLabelOffset->set_x(offX);
			HX_STACK_LINE(664)
			this->_centerLabelOffset->set_y(offY);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITypedButton_obj,autoCenterLabel,(void))

Void FlxUITypedButton_obj::setCenterLabelOffset( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","setCenterLabelOffset",0x7858e6f7,"flixel.addons.ui.FlxUITypedButton.setCenterLabelOffset","flixel/addons/ui/FlxUITypedButton.hx",668,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(669)
		this->_centerLabelOffset->set_x(X);
		HX_STACK_LINE(670)
		this->_centerLabelOffset->set_y(Y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITypedButton_obj,setCenterLabelOffset,(void))

::flixel::math::FlxPoint FlxUITypedButton_obj::getCenterLabelOffset( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","getCenterLabelOffset",0xaba12f83,"flixel.addons.ui.FlxUITypedButton.getCenterLabelOffset","flixel/addons/ui/FlxUITypedButton.hx",674,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_LINE(674)
	::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(this->_centerLabelOffset->x,this->_centerLabelOffset->y);		HX_STACK_VAR(point,"point");
	HX_STACK_LINE(674)
	point->_inPool = false;
	HX_STACK_LINE(674)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITypedButton_obj,getCenterLabelOffset,return )

Void FlxUITypedButton_obj::forceStateHandler( ::String event){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","forceStateHandler",0xa487b1bd,"flixel.addons.ui.FlxUITypedButton.forceStateHandler","flixel/addons/ui/FlxUITypedButton.hx",678,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(678)
		::String _switch_1 = (event);
		if (  ( _switch_1==HX_CSTRING("out_button"))){
			HX_STACK_LINE(679)
			this->onOutHandler();
		}
		else if (  ( _switch_1==HX_CSTRING("over_button"))){
			HX_STACK_LINE(680)
			this->onOverHandler();
		}
		else if (  ( _switch_1==HX_CSTRING("down_button"))){
			HX_STACK_LINE(681)
			this->onDownHandler();
		}
		else if (  ( _switch_1==HX_CSTRING("click_button"))){
			HX_STACK_LINE(682)
			this->onUpHandler();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITypedButton_obj,forceStateHandler,(void))

::openfl::_v2::display::BitmapData FlxUITypedButton_obj::grabButtonFrame( ::openfl::_v2::display::BitmapData all_frames,int button_state,hx::Null< bool >  __o_for_toggle,hx::Null< int >  __o_src_w,hx::Null< int >  __o_src_h){
bool for_toggle = __o_for_toggle.Default(false);
int src_w = __o_src_w.Default(0);
int src_h = __o_src_h.Default(0);
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","grabButtonFrame",0x214d85a8,"flixel.addons.ui.FlxUITypedButton.grabButtonFrame","flixel/addons/ui/FlxUITypedButton.hx",702,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(all_frames,"all_frames")
	HX_STACK_ARG(button_state,"button_state")
	HX_STACK_ARG(for_toggle,"for_toggle")
	HX_STACK_ARG(src_w,"src_w")
	HX_STACK_ARG(src_h,"src_h")
{
		HX_STACK_LINE(703)
		int h = src_h;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(704)
		if (((h == (int)0))){
			HX_STACK_LINE(705)
			if ((!(for_toggle))){
				HX_STACK_LINE(706)
				int _g = all_frames->get_height();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(706)
				Float _g1 = (Float(_g) / Float((int)3));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(706)
				int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(706)
				h = _g2;
			}
			else{
				HX_STACK_LINE(708)
				int _g3 = all_frames->get_height();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(708)
				Float _g4 = (Float(_g3) / Float((int)6));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(708)
				int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(708)
				h = _g5;
			}
		}
		HX_STACK_LINE(711)
		int w = src_w;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(712)
		if (((w == (int)0))){
			HX_STACK_LINE(713)
			int _g6 = all_frames->get_width();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(713)
			w = _g6;
		}
		HX_STACK_LINE(715)
		::openfl::_v2::display::BitmapData pixels = ::openfl::_v2::display::BitmapData_obj::__new(w,h,null(),null(),null());		HX_STACK_VAR(pixels,"pixels");
		HX_STACK_LINE(716)
		this->_flashRect->x = (int)0;
		HX_STACK_LINE(717)
		this->_flashRect->y = (button_state * h);
		HX_STACK_LINE(718)
		this->_flashRect->width = w;
		HX_STACK_LINE(719)
		this->_flashRect->height = h;
		HX_STACK_LINE(720)
		int _g7 = all_frames->get_height();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(720)
		if (((this->_flashRect->y >= _g7))){
			HX_STACK_LINE(722)
			int _g8 = all_frames->get_height();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(722)
			Float _g9 = (Float(_g8) / Float(h));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(722)
			int framesHigh = ::Std_obj::_int(_g9);		HX_STACK_VAR(framesHigh,"framesHigh");
			HX_STACK_LINE(723)
			if (((framesHigh == (int)4))){
				HX_STACK_LINE(725)
				if (((button_state == (int)4))){
					HX_STACK_LINE(726)
					this->_flashRect->y = ((int)3 * h);
				}
				else{
					HX_STACK_LINE(727)
					if (((button_state == (int)5))){
						HX_STACK_LINE(728)
						this->_flashRect->y = ((int)2 * h);
					}
				}
			}
		}
		HX_STACK_LINE(732)
		pixels->copyPixels(all_frames,this->_flashRect,this->_flashPointZero,null(),null(),null());
		HX_STACK_LINE(733)
		return pixels;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxUITypedButton_obj,grabButtonFrame,return )

::openfl::_v2::display::BitmapData FlxUITypedButton_obj::combineToggleBitmaps( ::openfl::_v2::display::BitmapData normal,::openfl::_v2::display::BitmapData toggle){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","combineToggleBitmaps",0xea818e98,"flixel.addons.ui.FlxUITypedButton.combineToggleBitmaps","flixel/addons/ui/FlxUITypedButton.hx",740,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(normal,"normal")
	HX_STACK_ARG(toggle,"toggle")
	HX_STACK_LINE(741)
	int _g = normal->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(741)
	int _g1 = normal->get_height();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(741)
	int _g2 = toggle->get_height();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(741)
	int _g3 = (_g1 + _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(741)
	::openfl::_v2::display::BitmapData combined = ::openfl::_v2::display::BitmapData_obj::__new(_g,_g3,null(),null(),null());		HX_STACK_VAR(combined,"combined");
	HX_STACK_LINE(743)
	::openfl::_v2::geom::Rectangle _g4 = normal->get_rect();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(743)
	combined->copyPixels(normal,_g4,this->_flashPointZero,null(),null(),null());
	HX_STACK_LINE(744)
	this->_flashPoint->x = (int)0;
	HX_STACK_LINE(745)
	int _g5 = normal->get_height();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(745)
	this->_flashPoint->y = _g5;
	HX_STACK_LINE(746)
	::openfl::_v2::geom::Rectangle _g6 = toggle->get_rect();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(746)
	combined->copyPixels(toggle,_g6,this->_flashPoint,null(),null(),null());
	HX_STACK_LINE(748)
	return combined;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITypedButton_obj,combineToggleBitmaps,return )

::openfl::_v2::display::BitmapData FlxUITypedButton_obj::assembleButtonFrames( ::openfl::_v2::display::BitmapData upB,::openfl::_v2::display::BitmapData overB,::openfl::_v2::display::BitmapData downB){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","assembleButtonFrames",0x4be9f791,"flixel.addons.ui.FlxUITypedButton.assembleButtonFrames","flixel/addons/ui/FlxUITypedButton.hx",756,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(upB,"upB")
	HX_STACK_ARG(overB,"overB")
	HX_STACK_ARG(downB,"downB")
	HX_STACK_LINE(757)
	::openfl::_v2::display::BitmapData pixels;		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(759)
	if (((overB != null()))){
		HX_STACK_LINE(760)
		if (((downB != null()))){
			HX_STACK_LINE(761)
			int _g = upB->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(761)
			int _g1 = upB->get_height();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(761)
			int _g2 = (_g1 * (int)3);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(761)
			::openfl::_v2::display::BitmapData _g3 = ::openfl::_v2::display::BitmapData_obj::__new(_g,_g2,null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(761)
			pixels = _g3;
		}
		else{
			HX_STACK_LINE(763)
			int _g4 = upB->get_width();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(763)
			int _g5 = upB->get_height();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(763)
			int _g6 = (_g5 * (int)2);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(763)
			::openfl::_v2::display::BitmapData _g7 = ::openfl::_v2::display::BitmapData_obj::__new(_g4,_g6,null(),null(),null());		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(763)
			pixels = _g7;
		}
	}
	else{
		HX_STACK_LINE(766)
		int _g8 = upB->get_width();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(766)
		int _g9 = upB->get_height();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(766)
		::openfl::_v2::display::BitmapData _g10 = ::openfl::_v2::display::BitmapData_obj::__new(_g8,_g9,null(),null(),null());		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(766)
		pixels = _g10;
	}
	HX_STACK_LINE(769)
	::openfl::_v2::geom::Rectangle _g11 = upB->get_rect();		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(769)
	pixels->copyPixels(upB,_g11,this->_flashPointZero,null(),null(),null());
	HX_STACK_LINE(771)
	if (((overB != null()))){
		HX_STACK_LINE(772)
		this->_flashPoint->x = (int)0;
		HX_STACK_LINE(773)
		int _g12 = upB->get_height();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(773)
		this->_flashPoint->y = _g12;
		HX_STACK_LINE(774)
		::openfl::_v2::geom::Rectangle _g13 = overB->get_rect();		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(774)
		pixels->copyPixels(overB,_g13,this->_flashPoint,null(),null(),null());
		HX_STACK_LINE(775)
		if (((downB != null()))){
			HX_STACK_LINE(776)
			int _g14 = upB->get_height();		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(776)
			int _g15 = (_g14 * (int)2);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(776)
			this->_flashPoint->y = _g15;
			HX_STACK_LINE(777)
			::openfl::_v2::geom::Rectangle _g16 = downB->get_rect();		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(777)
			pixels->copyPixels(downB,_g16,this->_flashPoint,null(),null(),null());
		}
	}
	HX_STACK_LINE(781)
	return pixels;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUITypedButton_obj,assembleButtonFrames,return )

Void FlxUITypedButton_obj::updateButton( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","updateButton",0x92a23202,"flixel.addons.ui.FlxUITypedButton.updateButton","flixel/addons/ui/FlxUITypedButton.hx",785,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_LINE(785)
		if ((!(this->skipButtonUpdate))){
			HX_STACK_LINE(786)
			this->super::updateButton();
		}
	}
return null();
}


::flixel::FlxSprite FlxUITypedButton_obj::fetchAndShowCorrectLabel( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","fetchAndShowCorrectLabel",0x9f7daa4b,"flixel.addons.ui.FlxUITypedButton.fetchAndShowCorrectLabel","flixel/addons/ui/FlxUITypedButton.hx",790,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_LINE(791)
	if ((this->has_toggle)){
		HX_STACK_LINE(792)
		if (((bool(this->toggled) && bool((this->toggle_label != null()))))){
			HX_STACK_LINE(793)
			this->label->__Field(HX_CSTRING("set_visible"),true)(false);
			HX_STACK_LINE(794)
			this->toggle_label->set_visible(true);
			HX_STACK_LINE(795)
			return this->toggle_label;
		}
		else{
			HX_STACK_LINE(797)
			if (((this->toggle_label != null()))){
				HX_STACK_LINE(798)
				this->toggle_label->set_visible(false);
			}
			HX_STACK_LINE(800)
			this->label->__Field(HX_CSTRING("set_visible"),true)(true);
			HX_STACK_LINE(801)
			return this->label;
		}
	}
	HX_STACK_LINE(804)
	return this->label;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITypedButton_obj,fetchAndShowCorrectLabel,return )

Void FlxUITypedButton_obj::onUpHandler( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","onUpHandler",0xd4dc1e49,"flixel.addons.ui.FlxUITypedButton.onUpHandler","flixel/addons/ui/FlxUITypedButton.hx",808,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_LINE(809)
		if ((this->has_toggle)){
			HX_STACK_LINE(810)
			this->toggled = !(this->toggled);
		}
		HX_STACK_LINE(812)
		this->super::onUpHandler();
		HX_STACK_LINE(813)
		if (((this->label != null()))){
			HX_STACK_LINE(814)
			::flixel::FlxSprite theLabel = this->fetchAndShowCorrectLabel();		HX_STACK_VAR(theLabel,"theLabel");
			HX_STACK_LINE(815)
			theLabel->set_visible((  ((this->toggled)) ? bool(this->up_toggle_visible) : bool(this->up_visible) ));
			HX_STACK_LINE(816)
			Dynamic thecol;		HX_STACK_VAR(thecol,"thecol");
			HX_STACK_LINE(816)
			if ((this->toggled)){
				HX_STACK_LINE(816)
				thecol = this->up_toggle_color;
			}
			else{
				HX_STACK_LINE(816)
				thecol = this->up_color;
			}
			HX_STACK_LINE(817)
			if (((thecol != null()))){
				HX_STACK_LINE(819)
				theLabel->set_color(thecol);
			}
		}
		HX_STACK_LINE(822)
		if ((this->broadcastToFlxUI)){
			HX_STACK_LINE(823)
			::flixel::addons::ui::FlxUI_obj::event(HX_CSTRING("click_button"),hx::ObjectPtr<OBJ_>(this),null(),this->params);
		}
	}
return null();
}


Void FlxUITypedButton_obj::onDownHandler( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","onDownHandler",0xf48785a2,"flixel.addons.ui.FlxUITypedButton.onDownHandler","flixel/addons/ui/FlxUITypedButton.hx",828,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_LINE(829)
		this->super::onDownHandler();
		HX_STACK_LINE(830)
		if (((this->label != null()))){
			HX_STACK_LINE(831)
			::flixel::FlxSprite theLabel = this->fetchAndShowCorrectLabel();		HX_STACK_VAR(theLabel,"theLabel");
			HX_STACK_LINE(832)
			theLabel->set_visible((  ((this->toggled)) ? bool(this->down_toggle_visible) : bool(this->down_visible) ));
			HX_STACK_LINE(833)
			Dynamic thecol;		HX_STACK_VAR(thecol,"thecol");
			HX_STACK_LINE(833)
			if ((this->toggled)){
				HX_STACK_LINE(833)
				thecol = this->down_toggle_color;
			}
			else{
				HX_STACK_LINE(833)
				thecol = this->down_color;
			}
			HX_STACK_LINE(834)
			if (((thecol != null()))){
				HX_STACK_LINE(836)
				theLabel->set_color(thecol);
			}
		}
		HX_STACK_LINE(839)
		if ((this->broadcastToFlxUI)){
			HX_STACK_LINE(840)
			::flixel::addons::ui::FlxUI_obj::event(HX_CSTRING("down_button"),hx::ObjectPtr<OBJ_>(this),null(),this->params);
		}
	}
return null();
}


Void FlxUITypedButton_obj::onOverHandler( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","onOverHandler",0xcfefcef0,"flixel.addons.ui.FlxUITypedButton.onOverHandler","flixel/addons/ui/FlxUITypedButton.hx",845,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_LINE(846)
		this->super::onOverHandler();
		HX_STACK_LINE(847)
		if (((this->label != null()))){
			HX_STACK_LINE(848)
			::flixel::FlxSprite theLabel = this->fetchAndShowCorrectLabel();		HX_STACK_VAR(theLabel,"theLabel");
			HX_STACK_LINE(849)
			theLabel->set_visible((  ((this->toggled)) ? bool(this->over_toggle_visible) : bool(this->over_visible) ));
			HX_STACK_LINE(850)
			Dynamic thecol;		HX_STACK_VAR(thecol,"thecol");
			HX_STACK_LINE(850)
			if ((this->toggled)){
				HX_STACK_LINE(850)
				thecol = this->over_toggle_color;
			}
			else{
				HX_STACK_LINE(850)
				thecol = this->over_color;
			}
			HX_STACK_LINE(851)
			if (((thecol != null()))){
				HX_STACK_LINE(853)
				theLabel->set_color(thecol);
			}
		}
		HX_STACK_LINE(856)
		if ((this->broadcastToFlxUI)){
			HX_STACK_LINE(857)
			::flixel::addons::ui::FlxUI_obj::event(HX_CSTRING("over_button"),hx::ObjectPtr<OBJ_>(this),null(),this->params);
		}
	}
return null();
}


Void FlxUITypedButton_obj::onOutHandler( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","onOutHandler",0x57e35002,"flixel.addons.ui.FlxUITypedButton.onOutHandler","flixel/addons/ui/FlxUITypedButton.hx",862,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_LINE(863)
		this->super::onOutHandler();
		HX_STACK_LINE(864)
		if (((this->label != null()))){
			HX_STACK_LINE(865)
			::flixel::FlxSprite theLabel = this->fetchAndShowCorrectLabel();		HX_STACK_VAR(theLabel,"theLabel");
			HX_STACK_LINE(866)
			theLabel->set_visible((  ((this->toggled)) ? bool(this->up_toggle_visible) : bool(this->up_visible) ));
			HX_STACK_LINE(867)
			Dynamic thecol;		HX_STACK_VAR(thecol,"thecol");
			HX_STACK_LINE(867)
			if ((this->toggled)){
				HX_STACK_LINE(867)
				thecol = this->up_toggle_color;
			}
			else{
				HX_STACK_LINE(867)
				thecol = this->up_color;
			}
			HX_STACK_LINE(868)
			if (((thecol != null()))){
				HX_STACK_LINE(870)
				theLabel->set_color(thecol);
			}
		}
		HX_STACK_LINE(873)
		if ((this->broadcastToFlxUI)){
			HX_STACK_LINE(874)
			::flixel::addons::ui::FlxUI_obj::event(HX_CSTRING("out_button"),hx::ObjectPtr<OBJ_>(this),null(),this->params);
		}
	}
return null();
}


Float FlxUITypedButton_obj::set_x( Float NewX){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","set_x",0x81b75354,"flixel.addons.ui.FlxUITypedButton.set_x","flixel/addons/ui/FlxUITypedButton.hx",879,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewX,"NewX")
	HX_STACK_LINE(880)
	this->super::set_x(NewX);
	HX_STACK_LINE(882)
	if (((this->label != null()))){
		HX_STACK_LINE(884)
		this->label->__Field(HX_CSTRING("set_x"),true)(((this->x + this->_centerLabelOffset->x) + this->labelOffsets->__get(this->status).StaticCast< ::flixel::math::FlxPoint >()->x));
		HX_STACK_LINE(886)
		if ((this->round_labels)){
			HX_STACK_LINE(887)
			int _g = ::Std_obj::_int((this->label->__Field(HX_CSTRING("x"),true) + 0.5));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(887)
			this->label->__Field(HX_CSTRING("set_x"),true)(_g);
		}
		HX_STACK_LINE(889)
		if (((bool(this->has_toggle) && bool((this->toggle_label != null()))))){
			HX_STACK_LINE(890)
			this->toggle_label->set_x(this->label->__Field(HX_CSTRING("x"),true));
		}
	}
	HX_STACK_LINE(894)
	return NewX;
}


Float FlxUITypedButton_obj::set_y( Float NewY){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","set_y",0x81b75355,"flixel.addons.ui.FlxUITypedButton.set_y","flixel/addons/ui/FlxUITypedButton.hx",898,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewY,"NewY")
	HX_STACK_LINE(899)
	this->super::set_y(NewY);
	HX_STACK_LINE(901)
	if (((this->label != null()))){
		HX_STACK_LINE(903)
		this->label->__Field(HX_CSTRING("set_y"),true)(((this->y + this->_centerLabelOffset->y) + this->labelOffsets->__get(this->status).StaticCast< ::flixel::math::FlxPoint >()->y));
		HX_STACK_LINE(905)
		if ((this->round_labels)){
			HX_STACK_LINE(906)
			int _g = ::Std_obj::_int((this->label->__Field(HX_CSTRING("y"),true) + 0.5));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(906)
			this->label->__Field(HX_CSTRING("set_y"),true)(_g);
		}
		HX_STACK_LINE(908)
		if (((bool(this->has_toggle) && bool((this->toggle_label != null()))))){
			HX_STACK_LINE(909)
			this->toggle_label->set_y(this->label->__Field(HX_CSTRING("y"),true));
		}
	}
	HX_STACK_LINE(912)
	return NewY;
}


::String FlxUITypedButton_obj::CLICK_EVENT;

::String FlxUITypedButton_obj::OVER_EVENT;

::String FlxUITypedButton_obj::DOWN_EVENT;

::String FlxUITypedButton_obj::OUT_EVENT;


FlxUITypedButton_obj::FlxUITypedButton_obj()
{
}

void FlxUITypedButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUITypedButton);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(resize_ratio,"resize_ratio");
	HX_MARK_MEMBER_NAME(resize_point,"resize_point");
	HX_MARK_MEMBER_NAME(tile,"tile");
	HX_MARK_MEMBER_NAME(has_toggle,"has_toggle");
	HX_MARK_MEMBER_NAME(toggled,"toggled");
	HX_MARK_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_MARK_MEMBER_NAME(up_color,"up_color");
	HX_MARK_MEMBER_NAME(over_color,"over_color");
	HX_MARK_MEMBER_NAME(down_color,"down_color");
	HX_MARK_MEMBER_NAME(up_toggle_color,"up_toggle_color");
	HX_MARK_MEMBER_NAME(over_toggle_color,"over_toggle_color");
	HX_MARK_MEMBER_NAME(down_toggle_color,"down_toggle_color");
	HX_MARK_MEMBER_NAME(up_visible,"up_visible");
	HX_MARK_MEMBER_NAME(over_visible,"over_visible");
	HX_MARK_MEMBER_NAME(down_visible,"down_visible");
	HX_MARK_MEMBER_NAME(up_toggle_visible,"up_toggle_visible");
	HX_MARK_MEMBER_NAME(over_toggle_visible,"over_toggle_visible");
	HX_MARK_MEMBER_NAME(down_toggle_visible,"down_toggle_visible");
	HX_MARK_MEMBER_NAME(toggle_label,"toggle_label");
	HX_MARK_MEMBER_NAME(round_labels,"round_labels");
	HX_MARK_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(autoResizeLabel,"autoResizeLabel");
	HX_MARK_MEMBER_NAME(_no_graphic,"_no_graphic");
	HX_MARK_MEMBER_NAME(_src_w,"_src_w");
	HX_MARK_MEMBER_NAME(_src_h,"_src_h");
	HX_MARK_MEMBER_NAME(_frame_indeces,"_frame_indeces");
	HX_MARK_MEMBER_NAME(_slice9_arrays,"_slice9_arrays");
	HX_MARK_MEMBER_NAME(_slice9_assets,"_slice9_assets");
	HX_MARK_MEMBER_NAME(_centerLabelOffset,"_centerLabelOffset");
	::flixel::ui::FlxTypedButton_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUITypedButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(resize_ratio,"resize_ratio");
	HX_VISIT_MEMBER_NAME(resize_point,"resize_point");
	HX_VISIT_MEMBER_NAME(tile,"tile");
	HX_VISIT_MEMBER_NAME(has_toggle,"has_toggle");
	HX_VISIT_MEMBER_NAME(toggled,"toggled");
	HX_VISIT_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_VISIT_MEMBER_NAME(up_color,"up_color");
	HX_VISIT_MEMBER_NAME(over_color,"over_color");
	HX_VISIT_MEMBER_NAME(down_color,"down_color");
	HX_VISIT_MEMBER_NAME(up_toggle_color,"up_toggle_color");
	HX_VISIT_MEMBER_NAME(over_toggle_color,"over_toggle_color");
	HX_VISIT_MEMBER_NAME(down_toggle_color,"down_toggle_color");
	HX_VISIT_MEMBER_NAME(up_visible,"up_visible");
	HX_VISIT_MEMBER_NAME(over_visible,"over_visible");
	HX_VISIT_MEMBER_NAME(down_visible,"down_visible");
	HX_VISIT_MEMBER_NAME(up_toggle_visible,"up_toggle_visible");
	HX_VISIT_MEMBER_NAME(over_toggle_visible,"over_toggle_visible");
	HX_VISIT_MEMBER_NAME(down_toggle_visible,"down_toggle_visible");
	HX_VISIT_MEMBER_NAME(toggle_label,"toggle_label");
	HX_VISIT_MEMBER_NAME(round_labels,"round_labels");
	HX_VISIT_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(autoResizeLabel,"autoResizeLabel");
	HX_VISIT_MEMBER_NAME(_no_graphic,"_no_graphic");
	HX_VISIT_MEMBER_NAME(_src_w,"_src_w");
	HX_VISIT_MEMBER_NAME(_src_h,"_src_h");
	HX_VISIT_MEMBER_NAME(_frame_indeces,"_frame_indeces");
	HX_VISIT_MEMBER_NAME(_slice9_arrays,"_slice9_arrays");
	HX_VISIT_MEMBER_NAME(_slice9_assets,"_slice9_assets");
	HX_VISIT_MEMBER_NAME(_centerLabelOffset,"_centerLabelOffset");
	::flixel::ui::FlxTypedButton_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUITypedButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tile") ) { return tile; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return params; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"getBmp") ) { return getBmp_dyn(); }
		if (HX_FIELD_EQ(inName,"_src_w") ) { return _src_w; }
		if (HX_FIELD_EQ(inName,"_src_h") ) { return _src_h; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toggled") ) { return toggled; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"up_color") ) { return up_color; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyStyle") ) { return copyStyle_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"has_toggle") ) { return has_toggle; }
		if (HX_FIELD_EQ(inName,"over_color") ) { return over_color; }
		if (HX_FIELD_EQ(inName,"down_color") ) { return down_color; }
		if (HX_FIELD_EQ(inName,"up_visible") ) { return up_visible; }
		if (HX_FIELD_EQ(inName,"set_params") ) { return set_params_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyGraphic") ) { return copyGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"onUpHandler") ) { return onUpHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"_no_graphic") ) { return _no_graphic; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resize_ratio") ) { return resize_ratio; }
		if (HX_FIELD_EQ(inName,"resize_point") ) { return resize_point; }
		if (HX_FIELD_EQ(inName,"over_visible") ) { return over_visible; }
		if (HX_FIELD_EQ(inName,"down_visible") ) { return down_visible; }
		if (HX_FIELD_EQ(inName,"toggle_label") ) { return toggle_label; }
		if (HX_FIELD_EQ(inName,"round_labels") ) { return round_labels; }
		if (HX_FIELD_EQ(inName,"updateButton") ) { return updateButton_dyn(); }
		if (HX_FIELD_EQ(inName,"onOutHandler") ) { return onOutHandler_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"graphicLoaded") ) { return graphicLoaded_dyn(); }
		if (HX_FIELD_EQ(inName,"onDownHandler") ) { return onDownHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"onOverHandler") ) { return onOverHandler_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_frame_indeces") ) { return _frame_indeces; }
		if (HX_FIELD_EQ(inName,"_slice9_arrays") ) { return _slice9_arrays; }
		if (HX_FIELD_EQ(inName,"_slice9_assets") ) { return _slice9_assets; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"up_toggle_color") ) { return up_toggle_color; }
		if (HX_FIELD_EQ(inName,"autoResizeLabel") ) { return autoResizeLabel; }
		if (HX_FIELD_EQ(inName,"autoCenterLabel") ) { return autoCenterLabel_dyn(); }
		if (HX_FIELD_EQ(inName,"grabButtonFrame") ) { return grabButtonFrame_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { return broadcastToFlxUI; }
		if (HX_FIELD_EQ(inName,"set_toggle_label") ) { return set_toggle_label_dyn(); }
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { return skipButtonUpdate; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"over_toggle_color") ) { return over_toggle_color; }
		if (HX_FIELD_EQ(inName,"down_toggle_color") ) { return down_toggle_color; }
		if (HX_FIELD_EQ(inName,"up_toggle_visible") ) { return up_toggle_visible; }
		if (HX_FIELD_EQ(inName,"loadGraphicSlice9") ) { return loadGraphicSlice9_dyn(); }
		if (HX_FIELD_EQ(inName,"forceStateHandler") ) { return forceStateHandler_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setAllLabelOffsets") ) { return setAllLabelOffsets_dyn(); }
		if (HX_FIELD_EQ(inName,"_centerLabelOffset") ) { return _centerLabelOffset; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"over_toggle_visible") ) { return over_toggle_visible; }
		if (HX_FIELD_EQ(inName,"down_toggle_visible") ) { return down_toggle_visible; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_skipButtonUpdate") ) { return set_skipButtonUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"loadGraphicsMultiple") ) { return loadGraphicsMultiple_dyn(); }
		if (HX_FIELD_EQ(inName,"setCenterLabelOffset") ) { return setCenterLabelOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"getCenterLabelOffset") ) { return getCenterLabelOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"combineToggleBitmaps") ) { return combineToggleBitmaps_dyn(); }
		if (HX_FIELD_EQ(inName,"assembleButtonFrames") ) { return assembleButtonFrames_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"updateStatusAnimation") ) { return updateStatusAnimation_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"loadGraphicsUpOverDown") ) { return loadGraphicsUpOverDown_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"fetchAndShowCorrectLabel") ) { return fetchAndShowCorrectLabel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUITypedButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tile") ) { tile=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { if (inCallProp) return set_params(inValue);params=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_src_w") ) { _src_w=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_src_h") ) { _src_h=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toggled") ) { toggled=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"up_color") ) { up_color=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"has_toggle") ) { has_toggle=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"over_color") ) { over_color=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"down_color") ) { down_color=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"up_visible") ) { up_visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_no_graphic") ) { _no_graphic=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resize_ratio") ) { resize_ratio=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resize_point") ) { resize_point=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"over_visible") ) { over_visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"down_visible") ) { down_visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"toggle_label") ) { if (inCallProp) return set_toggle_label(inValue);toggle_label=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"round_labels") ) { round_labels=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_frame_indeces") ) { _frame_indeces=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_slice9_arrays") ) { _slice9_arrays=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_slice9_assets") ) { _slice9_assets=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"up_toggle_color") ) { up_toggle_color=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"autoResizeLabel") ) { autoResizeLabel=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { broadcastToFlxUI=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { if (inCallProp) return set_skipButtonUpdate(inValue);skipButtonUpdate=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"over_toggle_color") ) { over_toggle_color=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"down_toggle_color") ) { down_toggle_color=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"up_toggle_visible") ) { up_toggle_visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_centerLabelOffset") ) { _centerLabelOffset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"over_toggle_visible") ) { over_toggle_visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"down_toggle_visible") ) { down_toggle_visible=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUITypedButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("resize_ratio"));
	outFields->push(HX_CSTRING("resize_point"));
	outFields->push(HX_CSTRING("tile"));
	outFields->push(HX_CSTRING("has_toggle"));
	outFields->push(HX_CSTRING("toggled"));
	outFields->push(HX_CSTRING("broadcastToFlxUI"));
	outFields->push(HX_CSTRING("up_color"));
	outFields->push(HX_CSTRING("over_color"));
	outFields->push(HX_CSTRING("down_color"));
	outFields->push(HX_CSTRING("up_toggle_color"));
	outFields->push(HX_CSTRING("over_toggle_color"));
	outFields->push(HX_CSTRING("down_toggle_color"));
	outFields->push(HX_CSTRING("up_visible"));
	outFields->push(HX_CSTRING("over_visible"));
	outFields->push(HX_CSTRING("down_visible"));
	outFields->push(HX_CSTRING("up_toggle_visible"));
	outFields->push(HX_CSTRING("over_toggle_visible"));
	outFields->push(HX_CSTRING("down_toggle_visible"));
	outFields->push(HX_CSTRING("toggle_label"));
	outFields->push(HX_CSTRING("round_labels"));
	outFields->push(HX_CSTRING("skipButtonUpdate"));
	outFields->push(HX_CSTRING("params"));
	outFields->push(HX_CSTRING("autoResizeLabel"));
	outFields->push(HX_CSTRING("_no_graphic"));
	outFields->push(HX_CSTRING("_src_w"));
	outFields->push(HX_CSTRING("_src_h"));
	outFields->push(HX_CSTRING("_frame_indeces"));
	outFields->push(HX_CSTRING("_slice9_arrays"));
	outFields->push(HX_CSTRING("_slice9_assets"));
	outFields->push(HX_CSTRING("_centerLabelOffset"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CLICK_EVENT"),
	HX_CSTRING("OVER_EVENT"),
	HX_CSTRING("DOWN_EVENT"),
	HX_CSTRING("OUT_EVENT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(FlxUITypedButton_obj,id),HX_CSTRING("id")},
	{hx::fsFloat,(int)offsetof(FlxUITypedButton_obj,resize_ratio),HX_CSTRING("resize_ratio")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxUITypedButton_obj,resize_point),HX_CSTRING("resize_point")},
	{hx::fsInt,(int)offsetof(FlxUITypedButton_obj,tile),HX_CSTRING("tile")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,has_toggle),HX_CSTRING("has_toggle")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,toggled),HX_CSTRING("toggled")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,broadcastToFlxUI),HX_CSTRING("broadcastToFlxUI")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUITypedButton_obj,up_color),HX_CSTRING("up_color")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUITypedButton_obj,over_color),HX_CSTRING("over_color")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUITypedButton_obj,down_color),HX_CSTRING("down_color")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUITypedButton_obj,up_toggle_color),HX_CSTRING("up_toggle_color")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUITypedButton_obj,over_toggle_color),HX_CSTRING("over_toggle_color")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUITypedButton_obj,down_toggle_color),HX_CSTRING("down_toggle_color")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,up_visible),HX_CSTRING("up_visible")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,over_visible),HX_CSTRING("over_visible")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,down_visible),HX_CSTRING("down_visible")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,up_toggle_visible),HX_CSTRING("up_toggle_visible")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,over_toggle_visible),HX_CSTRING("over_toggle_visible")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,down_toggle_visible),HX_CSTRING("down_toggle_visible")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxUITypedButton_obj,toggle_label),HX_CSTRING("toggle_label")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,round_labels),HX_CSTRING("round_labels")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,skipButtonUpdate),HX_CSTRING("skipButtonUpdate")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUITypedButton_obj,params),HX_CSTRING("params")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,autoResizeLabel),HX_CSTRING("autoResizeLabel")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,_no_graphic),HX_CSTRING("_no_graphic")},
	{hx::fsInt,(int)offsetof(FlxUITypedButton_obj,_src_w),HX_CSTRING("_src_w")},
	{hx::fsInt,(int)offsetof(FlxUITypedButton_obj,_src_h),HX_CSTRING("_src_h")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxUITypedButton_obj,_frame_indeces),HX_CSTRING("_frame_indeces")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxUITypedButton_obj,_slice9_arrays),HX_CSTRING("_slice9_arrays")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(FlxUITypedButton_obj,_slice9_assets),HX_CSTRING("_slice9_assets")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxUITypedButton_obj,_centerLabelOffset),HX_CSTRING("_centerLabelOffset")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("resize_ratio"),
	HX_CSTRING("resize_point"),
	HX_CSTRING("tile"),
	HX_CSTRING("has_toggle"),
	HX_CSTRING("toggled"),
	HX_CSTRING("broadcastToFlxUI"),
	HX_CSTRING("up_color"),
	HX_CSTRING("over_color"),
	HX_CSTRING("down_color"),
	HX_CSTRING("up_toggle_color"),
	HX_CSTRING("over_toggle_color"),
	HX_CSTRING("down_toggle_color"),
	HX_CSTRING("up_visible"),
	HX_CSTRING("over_visible"),
	HX_CSTRING("down_visible"),
	HX_CSTRING("up_toggle_visible"),
	HX_CSTRING("over_toggle_visible"),
	HX_CSTRING("down_toggle_visible"),
	HX_CSTRING("toggle_label"),
	HX_CSTRING("set_toggle_label"),
	HX_CSTRING("round_labels"),
	HX_CSTRING("skipButtonUpdate"),
	HX_CSTRING("set_skipButtonUpdate"),
	HX_CSTRING("params"),
	HX_CSTRING("set_params"),
	HX_CSTRING("destroy"),
	HX_CSTRING("autoResizeLabel"),
	HX_CSTRING("graphicLoaded"),
	HX_CSTRING("copyGraphic"),
	HX_CSTRING("copyStyle"),
	HX_CSTRING("setAllLabelOffsets"),
	HX_CSTRING("update"),
	HX_CSTRING("updateStatusAnimation"),
	HX_CSTRING("draw"),
	HX_CSTRING("resize"),
	HX_CSTRING("getBmp"),
	HX_CSTRING("loadGraphicsMultiple"),
	HX_CSTRING("loadGraphicsUpOverDown"),
	HX_CSTRING("loadGraphicSlice9"),
	HX_CSTRING("autoCenterLabel"),
	HX_CSTRING("setCenterLabelOffset"),
	HX_CSTRING("getCenterLabelOffset"),
	HX_CSTRING("forceStateHandler"),
	HX_CSTRING("grabButtonFrame"),
	HX_CSTRING("combineToggleBitmaps"),
	HX_CSTRING("assembleButtonFrames"),
	HX_CSTRING("updateButton"),
	HX_CSTRING("fetchAndShowCorrectLabel"),
	HX_CSTRING("onUpHandler"),
	HX_CSTRING("onDownHandler"),
	HX_CSTRING("onOverHandler"),
	HX_CSTRING("onOutHandler"),
	HX_CSTRING("set_x"),
	HX_CSTRING("set_y"),
	HX_CSTRING("_no_graphic"),
	HX_CSTRING("_src_w"),
	HX_CSTRING("_src_h"),
	HX_CSTRING("_frame_indeces"),
	HX_CSTRING("_slice9_arrays"),
	HX_CSTRING("_slice9_assets"),
	HX_CSTRING("_centerLabelOffset"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUITypedButton_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxUITypedButton_obj::CLICK_EVENT,"CLICK_EVENT");
	HX_MARK_MEMBER_NAME(FlxUITypedButton_obj::OVER_EVENT,"OVER_EVENT");
	HX_MARK_MEMBER_NAME(FlxUITypedButton_obj::DOWN_EVENT,"DOWN_EVENT");
	HX_MARK_MEMBER_NAME(FlxUITypedButton_obj::OUT_EVENT,"OUT_EVENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUITypedButton_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxUITypedButton_obj::CLICK_EVENT,"CLICK_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUITypedButton_obj::OVER_EVENT,"OVER_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUITypedButton_obj::DOWN_EVENT,"DOWN_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUITypedButton_obj::OUT_EVENT,"OUT_EVENT");
};

#endif

Class FlxUITypedButton_obj::__mClass;

void FlxUITypedButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxUITypedButton"), hx::TCanCast< FlxUITypedButton_obj> ,sStaticFields,sMemberFields,
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

void FlxUITypedButton_obj::__boot()
{
	CLICK_EVENT= HX_CSTRING("click_button");
	OVER_EVENT= HX_CSTRING("over_button");
	DOWN_EVENT= HX_CSTRING("down_button");
	OUT_EVENT= HX_CSTRING("out_button");
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
