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
#ifndef INCLUDED_flixel_addons_ui_FlxUI9SliceSprite
#include <flixel/addons/ui/FlxUI9SliceSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BlendMode
#include <openfl/_v2/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_ColorTransform
#include <openfl/_v2/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Matrix
#include <openfl/_v2/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUI9SliceSprite_obj::__construct(Float X,Float Y,Dynamic Graphic,::openfl::_v2::geom::Rectangle Rect,Array< int > Slice9,hx::Null< int >  __o_Tile,hx::Null< bool >  __o_Smooth,::String __o_Id,hx::Null< Float >  __o_Ratio,::flixel::math::FlxPoint Resize_point,hx::Null< int >  __o_Resize_axis)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUI9SliceSprite","new",0x6ddf7885,"flixel.addons.ui.FlxUI9SliceSprite.new","flixel/addons/ui/FlxUI9SliceSprite.hx",18,0x728ef6ec)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(Graphic,"Graphic")
HX_STACK_ARG(Rect,"Rect")
HX_STACK_ARG(Slice9,"Slice9")
HX_STACK_ARG(__o_Tile,"Tile")
HX_STACK_ARG(__o_Smooth,"Smooth")
HX_STACK_ARG(__o_Id,"Id")
HX_STACK_ARG(__o_Ratio,"Ratio")
HX_STACK_ARG(Resize_point,"Resize_point")
HX_STACK_ARG(__o_Resize_axis,"Resize_axis")
int Tile = __o_Tile.Default(0);
bool Smooth = __o_Smooth.Default(false);
::String Id = __o_Id.Default(HX_CSTRING(""));
Float Ratio = __o_Ratio.Default(-1);
int Resize_axis = __o_Resize_axis.Default(1);
{
	HX_STACK_LINE(32)
	this->_asset_id = HX_CSTRING("");
	HX_STACK_LINE(30)
	this->_smooth = false;
	HX_STACK_LINE(29)
	this->_tile = (int)0;
	HX_STACK_LINE(27)
	this->_slice9 = null();
	HX_STACK_LINE(73)
	super::__construct(X,Y,null());
	HX_STACK_LINE(75)
	this->_slice9 = Slice9;
	HX_STACK_LINE(76)
	this->_tile = Tile;
	HX_STACK_LINE(77)
	this->_smooth = Smooth;
	HX_STACK_LINE(79)
	this->_asset_id = HX_CSTRING("");
	HX_STACK_LINE(81)
	if (((Graphic == null()))){
		HX_STACK_LINE(82)
		Graphic = HX_CSTRING("flixel/flixel-ui/img/chrome.png");
	}
	HX_STACK_LINE(85)
	if ((::Std_obj::is(Graphic,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(86)
		this->_asset_id = Graphic;
		HX_STACK_LINE(87)
		this->_raw_pixels = null();
	}
	else{
		HX_STACK_LINE(88)
		if ((::Std_obj::is(Graphic,hx::ClassOf< ::openfl::_v2::display::BitmapData >()))){
			HX_STACK_LINE(89)
			this->_asset_id = Id;
			HX_STACK_LINE(90)
			this->_raw_pixels = Graphic;
		}
	}
	HX_STACK_LINE(93)
	this->set_resize_ratio(Ratio);
	HX_STACK_LINE(94)
	this->resize_ratio_axis = Resize_axis;
	HX_STACK_LINE(95)
	if (((Resize_point != null()))){
		HX_STACK_LINE(96)
		this->set_resize_point(Resize_point);
	}
	HX_STACK_LINE(99)
	this->resize(Rect->width,Rect->height);
}
;
	return null();
}

//FlxUI9SliceSprite_obj::~FlxUI9SliceSprite_obj() { }

Dynamic FlxUI9SliceSprite_obj::__CreateEmpty() { return  new FlxUI9SliceSprite_obj; }
hx::ObjectPtr< FlxUI9SliceSprite_obj > FlxUI9SliceSprite_obj::__new(Float X,Float Y,Dynamic Graphic,::openfl::_v2::geom::Rectangle Rect,Array< int > Slice9,hx::Null< int >  __o_Tile,hx::Null< bool >  __o_Smooth,::String __o_Id,hx::Null< Float >  __o_Ratio,::flixel::math::FlxPoint Resize_point,hx::Null< int >  __o_Resize_axis)
{  hx::ObjectPtr< FlxUI9SliceSprite_obj > result = new FlxUI9SliceSprite_obj();
	result->__construct(X,Y,Graphic,Rect,Slice9,__o_Tile,__o_Smooth,__o_Id,__o_Ratio,Resize_point,__o_Resize_axis);
	return result;}

Dynamic FlxUI9SliceSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUI9SliceSprite_obj > result = new FlxUI9SliceSprite_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10]);
	return result;}

hx::Object *FlxUI9SliceSprite_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::IFlxSprite_obj)) return operator ::flixel::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::IFlxBasic_obj)) return operator ::flixel::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IResizable_obj)) return operator ::flixel::addons::ui::interfaces::IResizable_obj *();
	return super::__ToInterface(inType);
}

Void FlxUI9SliceSprite_obj::resize( Float w,Float h){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI9SliceSprite","resize",0x881d96ef,"flixel.addons.ui.FlxUI9SliceSprite.resize","flixel/addons/ui/FlxUI9SliceSprite.hx",102,0x728ef6ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(104)
		int _g = ::Std_obj::_int(w);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(104)
		if (((_g < (int)1))){
			HX_STACK_LINE(105)
			w = (int)1;
		}
		HX_STACK_LINE(107)
		int _g1 = ::Std_obj::_int(h);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(107)
		if (((_g1 < (int)1))){
			HX_STACK_LINE(108)
			h = (int)1;
		}
		HX_STACK_LINE(111)
		Float old_width = this->get_width();		HX_STACK_VAR(old_width,"old_width");
		HX_STACK_LINE(112)
		Float old_height = this->get_height();		HX_STACK_VAR(old_height,"old_height");
		HX_STACK_LINE(114)
		if (((this->resize_ratio > (int)0))){
			HX_STACK_LINE(115)
			Float effective_ratio = (Float(w) / Float(h));		HX_STACK_VAR(effective_ratio,"effective_ratio");
			HX_STACK_LINE(116)
			Float _g2 = ::Math_obj::abs((effective_ratio - this->resize_ratio));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(116)
			if (((_g2 > 0.0001))){
				HX_STACK_LINE(117)
				if (((this->resize_ratio_axis == (int)1))){
					HX_STACK_LINE(119)
					h = (w * ((Float((int)1) / Float(this->resize_ratio))));
				}
				else{
					HX_STACK_LINE(123)
					w = (h * ((Float((int)1) / Float(this->resize_ratio))));
				}
			}
		}
		HX_STACK_LINE(128)
		if (((bool((this->_slice9 == null())) || bool((this->_slice9 == Array_obj< int >::__new()))))){
			HX_STACK_LINE(129)
			this->_slice9 = Array_obj< int >::__new().Add((int)4).Add((int)4).Add((int)7).Add((int)7);
		}
		HX_STACK_LINE(132)
		int iw = ::Std_obj::_int(w);		HX_STACK_VAR(iw,"iw");
		HX_STACK_LINE(133)
		if (((iw < (int)1))){
			HX_STACK_LINE(134)
			iw = (int)1;
		}
		HX_STACK_LINE(136)
		int ih = ::Std_obj::_int(h);		HX_STACK_VAR(ih,"ih");
		HX_STACK_LINE(137)
		if (((ih < (int)1))){
			HX_STACK_LINE(138)
			ih = (int)1;
		}
		HX_STACK_LINE(142)
		::String _g3 = this->_slice9->join(HX_CSTRING(","));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(142)
		::String _g4 = ((this->_asset_id + HX_CSTRING("_")) + _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(142)
		::String _g5 = (_g4 + HX_CSTRING("_"));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(142)
		::String _g6 = (_g5 + iw);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(142)
		::String _g7 = (_g6 + HX_CSTRING("x"));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(142)
		::String _g8 = (_g7 + ih);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(142)
		::String _g9 = (_g8 + HX_CSTRING("_"));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(142)
		::String _g10 = (_g9 + this->_tile);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(142)
		::String _g11 = (_g10 + HX_CSTRING("_"));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(142)
		::String _g12 = ::Std_obj::string(this->_smooth);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(142)
		::String key = (_g11 + _g12);		HX_STACK_VAR(key,"key");
		struct _Function_1_1{
			inline static bool Block( ::String &key){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI9SliceSprite.hx",145,0x728ef6ec)
				{
					HX_STACK_LINE(145)
					::flixel::system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(_this,"_this");
					struct _Function_2_1{
						inline static bool Block( ::flixel::system::frontEnds::BitmapFrontEnd _this,::String &key){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI9SliceSprite.hx",145,0x728ef6ec)
							{
								HX_STACK_LINE(145)
								::flixel::graphics::FlxGraphic _g13 = _this->_cache->get(key);		HX_STACK_VAR(_g13,"_g13");
								HX_STACK_LINE(145)
								return (_g13 != null());
							}
							return null();
						}
					};
					HX_STACK_LINE(145)
					return (  ((_this->_cache->exists(key))) ? bool(_Function_2_1::Block(_this,key)) : bool(false) );
				}
				return null();
			}
		};
		HX_STACK_LINE(145)
		if ((_Function_1_1::Block(key))){
			HX_STACK_LINE(148)
			this->loadGraphic(key,false,iw,ih,null(),null());
		}
		else{
			HX_STACK_LINE(153)
			int _g14 = ::Std_obj::_int(w);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(153)
			int _g15 = ::Std_obj::_int(h);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(153)
			::openfl::_v2::display::BitmapData bmpCanvas = ::openfl::_v2::display::BitmapData_obj::__new(_g14,_g15,null(),null(),null());		HX_STACK_VAR(bmpCanvas,"bmpCanvas");
			HX_STACK_LINE(154)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect->x = (int)0;
			HX_STACK_LINE(155)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect->y = (int)0;
			HX_STACK_LINE(156)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect->width = w;
			HX_STACK_LINE(157)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect->height = h;
			HX_STACK_LINE(158)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintScale9(bmpCanvas,this->_asset_id,this->_slice9,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect,this->_tile,this->_smooth,this->_raw_pixels);
			HX_STACK_LINE(159)
			int _g16 = bmpCanvas->get_width();		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(159)
			int _g17 = bmpCanvas->get_height();		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(159)
			this->loadGraphic(bmpCanvas,false,_g16,_g17,false,key);
		}
		HX_STACK_LINE(162)
		Float _g18 = this->get_width();		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(162)
		Float diff_w = (_g18 - old_width);		HX_STACK_VAR(diff_w,"diff_w");
		HX_STACK_LINE(163)
		Float _g19 = this->get_height();		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(163)
		Float diff_h = (_g19 - old_height);		HX_STACK_VAR(diff_h,"diff_h");
		HX_STACK_LINE(165)
		if (((this->resize_point != null()))){
			HX_STACK_LINE(167)
			Float delta_x = (diff_w * this->resize_point->x);		HX_STACK_VAR(delta_x,"delta_x");
			HX_STACK_LINE(168)
			Float delta_y = (diff_h * this->resize_point->y);		HX_STACK_VAR(delta_y,"delta_y");
			HX_STACK_LINE(169)
			{
				HX_STACK_LINE(169)
				::flixel::addons::ui::FlxUI9SliceSprite _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(169)
				_g2->set_x((_g2->x - delta_x));
			}
			HX_STACK_LINE(170)
			{
				HX_STACK_LINE(170)
				::flixel::addons::ui::FlxUI9SliceSprite _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(170)
				_g2->set_y((_g2->y - delta_y));
			}
		}
	}
return null();
}


int FlxUI9SliceSprite_obj::bitmapsCreated;

bool FlxUI9SliceSprite_obj::useSectionCache;

::haxe::ds::StringMap FlxUI9SliceSprite_obj::sectionCache;

::openfl::_v2::geom::Point FlxUI9SliceSprite_obj::_staticPoint;

::openfl::_v2::geom::Rectangle FlxUI9SliceSprite_obj::_staticRect;

::openfl::_v2::geom::Rectangle FlxUI9SliceSprite_obj::_staticRect2;

::openfl::_v2::geom::Point FlxUI9SliceSprite_obj::_staticPointZero;

::openfl::_v2::geom::Matrix FlxUI9SliceSprite_obj::_staticMatrix;

::flixel::math::FlxRect FlxUI9SliceSprite_obj::_staticFlxRect;

::flixel::math::FlxRect FlxUI9SliceSprite_obj::_staticFlxRect2;

int FlxUI9SliceSprite_obj::TILE_NONE;

int FlxUI9SliceSprite_obj::TILE_BOTH;

int FlxUI9SliceSprite_obj::TILE_H;

int FlxUI9SliceSprite_obj::TILE_V;

::haxe::ds::StringMap FlxUI9SliceSprite_obj::_staticRects;

::openfl::_v2::geom::Rectangle FlxUI9SliceSprite_obj::getRectFromString( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI9SliceSprite","getRectFromString",0x5989423a,"flixel.addons.ui.FlxUI9SliceSprite.getRectFromString","flixel/addons/ui/FlxUI9SliceSprite.hx",174,0x728ef6ec)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(175)
	Array< ::String > coords = str.split(HX_CSTRING(","));		HX_STACK_VAR(coords,"coords");
	HX_STACK_LINE(176)
	::openfl::_v2::geom::Rectangle rect = null();		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(177)
	if (((bool((coords != null())) && bool((coords->length == (int)4))))){
		HX_STACK_LINE(178)
		int x_ = ::Std_obj::parseInt(coords->__get((int)0));		HX_STACK_VAR(x_,"x_");
		HX_STACK_LINE(179)
		int y_ = ::Std_obj::parseInt(coords->__get((int)1));		HX_STACK_VAR(y_,"y_");
		HX_STACK_LINE(180)
		int w_ = ::Std_obj::parseInt(coords->__get((int)2));		HX_STACK_VAR(w_,"w_");
		HX_STACK_LINE(181)
		int h_ = ::Std_obj::parseInt(coords->__get((int)3));		HX_STACK_VAR(h_,"h_");
		HX_STACK_LINE(182)
		::openfl::_v2::geom::Rectangle _g = ::openfl::_v2::geom::Rectangle_obj::__new(x_,y_,w_,h_);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(182)
		rect = _g;
	}
	HX_STACK_LINE(184)
	return rect;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxUI9SliceSprite_obj,getRectFromString,return )

Array< int > FlxUI9SliceSprite_obj::getRectIntsFromString( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI9SliceSprite","getRectIntsFromString",0x35da5b7e,"flixel.addons.ui.FlxUI9SliceSprite.getRectIntsFromString","flixel/addons/ui/FlxUI9SliceSprite.hx",187,0x728ef6ec)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(188)
	Array< ::String > coords = str.split(HX_CSTRING(","));		HX_STACK_VAR(coords,"coords");
	HX_STACK_LINE(189)
	if (((bool((coords != null())) && bool((coords->length == (int)4))))){
		HX_STACK_LINE(190)
		int x1 = ::Std_obj::parseInt(coords->__get((int)0));		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(191)
		int y1 = ::Std_obj::parseInt(coords->__get((int)1));		HX_STACK_VAR(y1,"y1");
		HX_STACK_LINE(192)
		int x2 = ::Std_obj::parseInt(coords->__get((int)2));		HX_STACK_VAR(x2,"x2");
		HX_STACK_LINE(193)
		int y2 = ::Std_obj::parseInt(coords->__get((int)3));		HX_STACK_VAR(y2,"y2");
		HX_STACK_LINE(194)
		return Array_obj< int >::__new().Add(x1).Add(y1).Add(x2).Add(y2);
	}
	HX_STACK_LINE(196)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxUI9SliceSprite_obj,getRectIntsFromString,return )

Void FlxUI9SliceSprite_obj::paintScale9( ::openfl::_v2::display::BitmapData g,::String assetID,Array< int > scale9,::flixel::math::FlxRect rc,hx::Null< int >  __o_tile,hx::Null< bool >  __o_smooth,::openfl::_v2::display::BitmapData raw){
int tile = __o_tile.Default(0);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI9SliceSprite","paintScale9",0xf90375d2,"flixel.addons.ui.FlxUI9SliceSprite.paintScale9","flixel/addons/ui/FlxUI9SliceSprite.hx",214,0x728ef6ec)
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(assetID,"assetID")
	HX_STACK_ARG(scale9,"scale9")
	HX_STACK_ARG(rc,"rc")
	HX_STACK_ARG(tile,"tile")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(raw,"raw")
{
		HX_STACK_LINE(214)
		if (((scale9 != null()))){
			HX_STACK_LINE(216)
			int w;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(217)
			int h;		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(218)
			if (((raw == null()))){
				HX_STACK_LINE(219)
				int _g = ::openfl::_v2::Assets_obj::getBitmapData(assetID,null())->get_width();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(219)
				w = _g;
				HX_STACK_LINE(220)
				int _g1 = ::openfl::_v2::Assets_obj::getBitmapData(assetID,null())->get_height();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(220)
				h = _g1;
			}
			else{
				HX_STACK_LINE(222)
				int _g2 = raw->get_width();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(222)
				w = _g2;
				HX_STACK_LINE(223)
				int _g3 = raw->get_height();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(223)
				h = _g3;
			}
			HX_STACK_LINE(226)
			int x1 = scale9->__get((int)0);		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(227)
			int y1 = scale9->__get((int)1);		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(228)
			int x2 = scale9->__get((int)2);		HX_STACK_VAR(x2,"x2");
			HX_STACK_LINE(229)
			int y2 = scale9->__get((int)3);		HX_STACK_VAR(y2,"y2");
			HX_STACK_LINE(231)
			if (((::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects == null()))){
				HX_STACK_LINE(232)
				::haxe::ds::StringMap _g4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(232)
				::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects = _g4;
				HX_STACK_LINE(233)
				{
					HX_STACK_LINE(233)
					::flixel::math::FlxRect value;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(233)
					{
						HX_STACK_LINE(233)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(233)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(233)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(233)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(233)
						::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(233)
						{
							HX_STACK_LINE(233)
							::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(233)
							_this->x = X;
							HX_STACK_LINE(233)
							_this->y = Y;
							HX_STACK_LINE(233)
							_this->width = Width;
							HX_STACK_LINE(233)
							_this->height = Height;
							HX_STACK_LINE(233)
							rect = _this;
						}
						HX_STACK_LINE(233)
						rect->_inPool = false;
						HX_STACK_LINE(233)
						value = rect;
					}
					HX_STACK_LINE(233)
					::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->set(HX_CSTRING("top.left"),value);
				}
				HX_STACK_LINE(234)
				{
					HX_STACK_LINE(234)
					::flixel::math::FlxRect value;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(234)
					{
						HX_STACK_LINE(234)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(234)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(234)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(234)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(234)
						::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(234)
						{
							HX_STACK_LINE(234)
							::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(234)
							_this->x = X;
							HX_STACK_LINE(234)
							_this->y = Y;
							HX_STACK_LINE(234)
							_this->width = Width;
							HX_STACK_LINE(234)
							_this->height = Height;
							HX_STACK_LINE(234)
							rect = _this;
						}
						HX_STACK_LINE(234)
						rect->_inPool = false;
						HX_STACK_LINE(234)
						value = rect;
					}
					HX_STACK_LINE(234)
					::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->set(HX_CSTRING("top"),value);
				}
				HX_STACK_LINE(235)
				{
					HX_STACK_LINE(235)
					::flixel::math::FlxRect value;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(235)
					{
						HX_STACK_LINE(235)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(235)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(235)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(235)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(235)
						::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(235)
						{
							HX_STACK_LINE(235)
							::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(235)
							_this->x = X;
							HX_STACK_LINE(235)
							_this->y = Y;
							HX_STACK_LINE(235)
							_this->width = Width;
							HX_STACK_LINE(235)
							_this->height = Height;
							HX_STACK_LINE(235)
							rect = _this;
						}
						HX_STACK_LINE(235)
						rect->_inPool = false;
						HX_STACK_LINE(235)
						value = rect;
					}
					HX_STACK_LINE(235)
					::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->set(HX_CSTRING("top.right"),value);
				}
				HX_STACK_LINE(236)
				{
					HX_STACK_LINE(236)
					::flixel::math::FlxRect value;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(236)
					{
						HX_STACK_LINE(236)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(236)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(236)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(236)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(236)
						::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(236)
						{
							HX_STACK_LINE(236)
							::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(236)
							_this->x = X;
							HX_STACK_LINE(236)
							_this->y = Y;
							HX_STACK_LINE(236)
							_this->width = Width;
							HX_STACK_LINE(236)
							_this->height = Height;
							HX_STACK_LINE(236)
							rect = _this;
						}
						HX_STACK_LINE(236)
						rect->_inPool = false;
						HX_STACK_LINE(236)
						value = rect;
					}
					HX_STACK_LINE(236)
					::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->set(HX_CSTRING("left"),value);
				}
				HX_STACK_LINE(237)
				{
					HX_STACK_LINE(237)
					::flixel::math::FlxRect value;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(237)
					{
						HX_STACK_LINE(237)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(237)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(237)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(237)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(237)
						::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(237)
						{
							HX_STACK_LINE(237)
							::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(237)
							_this->x = X;
							HX_STACK_LINE(237)
							_this->y = Y;
							HX_STACK_LINE(237)
							_this->width = Width;
							HX_STACK_LINE(237)
							_this->height = Height;
							HX_STACK_LINE(237)
							rect = _this;
						}
						HX_STACK_LINE(237)
						rect->_inPool = false;
						HX_STACK_LINE(237)
						value = rect;
					}
					HX_STACK_LINE(237)
					::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->set(HX_CSTRING("middle"),value);
				}
				HX_STACK_LINE(238)
				{
					HX_STACK_LINE(238)
					::flixel::math::FlxRect value;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(238)
					{
						HX_STACK_LINE(238)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(238)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(238)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(238)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(238)
						::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(238)
						{
							HX_STACK_LINE(238)
							::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(238)
							_this->x = X;
							HX_STACK_LINE(238)
							_this->y = Y;
							HX_STACK_LINE(238)
							_this->width = Width;
							HX_STACK_LINE(238)
							_this->height = Height;
							HX_STACK_LINE(238)
							rect = _this;
						}
						HX_STACK_LINE(238)
						rect->_inPool = false;
						HX_STACK_LINE(238)
						value = rect;
					}
					HX_STACK_LINE(238)
					::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->set(HX_CSTRING("right"),value);
				}
				HX_STACK_LINE(239)
				{
					HX_STACK_LINE(239)
					::flixel::math::FlxRect value;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(239)
					{
						HX_STACK_LINE(239)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(239)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(239)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(239)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(239)
						::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(239)
						{
							HX_STACK_LINE(239)
							::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(239)
							_this->x = X;
							HX_STACK_LINE(239)
							_this->y = Y;
							HX_STACK_LINE(239)
							_this->width = Width;
							HX_STACK_LINE(239)
							_this->height = Height;
							HX_STACK_LINE(239)
							rect = _this;
						}
						HX_STACK_LINE(239)
						rect->_inPool = false;
						HX_STACK_LINE(239)
						value = rect;
					}
					HX_STACK_LINE(239)
					::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->set(HX_CSTRING("bottom.left"),value);
				}
				HX_STACK_LINE(240)
				{
					HX_STACK_LINE(240)
					::flixel::math::FlxRect value;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(240)
					{
						HX_STACK_LINE(240)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(240)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(240)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(240)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(240)
						::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(240)
						{
							HX_STACK_LINE(240)
							::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(240)
							_this->x = X;
							HX_STACK_LINE(240)
							_this->y = Y;
							HX_STACK_LINE(240)
							_this->width = Width;
							HX_STACK_LINE(240)
							_this->height = Height;
							HX_STACK_LINE(240)
							rect = _this;
						}
						HX_STACK_LINE(240)
						rect->_inPool = false;
						HX_STACK_LINE(240)
						value = rect;
					}
					HX_STACK_LINE(240)
					::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->set(HX_CSTRING("bottom"),value);
				}
				HX_STACK_LINE(241)
				{
					HX_STACK_LINE(241)
					::flixel::math::FlxRect value;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(241)
					{
						HX_STACK_LINE(241)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(241)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(241)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(241)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(241)
						::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(241)
						{
							HX_STACK_LINE(241)
							::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(241)
							_this->x = X;
							HX_STACK_LINE(241)
							_this->y = Y;
							HX_STACK_LINE(241)
							_this->width = Width;
							HX_STACK_LINE(241)
							_this->height = Height;
							HX_STACK_LINE(241)
							rect = _this;
						}
						HX_STACK_LINE(241)
						rect->_inPool = false;
						HX_STACK_LINE(241)
						value = rect;
					}
					HX_STACK_LINE(241)
					::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->set(HX_CSTRING("bottom.right"),value);
				}
			}
			HX_STACK_LINE(244)
			{
				HX_STACK_LINE(244)
				::flixel::math::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_CSTRING("top.left"));		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(244)
				_this->x = (int)0;
				HX_STACK_LINE(244)
				_this->y = (int)0;
				HX_STACK_LINE(244)
				_this->width = x1;
				HX_STACK_LINE(244)
				_this->height = y1;
				HX_STACK_LINE(244)
				_this;
			}
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(245)
				::flixel::math::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_CSTRING("top"));		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(245)
				_this->x = x1;
				HX_STACK_LINE(245)
				_this->y = (int)0;
				HX_STACK_LINE(245)
				_this->width = (x2 - x1);
				HX_STACK_LINE(245)
				_this->height = y1;
				HX_STACK_LINE(245)
				_this;
			}
			HX_STACK_LINE(246)
			{
				HX_STACK_LINE(246)
				::flixel::math::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_CSTRING("top.right"));		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(246)
				_this->x = x2;
				HX_STACK_LINE(246)
				_this->y = (int)0;
				HX_STACK_LINE(246)
				_this->width = (w - x2);
				HX_STACK_LINE(246)
				_this->height = y1;
				HX_STACK_LINE(246)
				_this;
			}
			HX_STACK_LINE(248)
			{
				HX_STACK_LINE(248)
				::flixel::math::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_CSTRING("left"));		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(248)
				_this->x = (int)0;
				HX_STACK_LINE(248)
				_this->y = y1;
				HX_STACK_LINE(248)
				_this->width = x1;
				HX_STACK_LINE(248)
				_this->height = (y2 - y1);
				HX_STACK_LINE(248)
				_this;
			}
			HX_STACK_LINE(249)
			{
				HX_STACK_LINE(249)
				::flixel::math::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_CSTRING("middle"));		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(249)
				_this->x = x1;
				HX_STACK_LINE(249)
				_this->y = y1;
				HX_STACK_LINE(249)
				_this->width = (x2 - x1);
				HX_STACK_LINE(249)
				_this->height = (y2 - y1);
				HX_STACK_LINE(249)
				_this;
			}
			HX_STACK_LINE(250)
			{
				HX_STACK_LINE(250)
				::flixel::math::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_CSTRING("right"));		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(250)
				_this->x = x2;
				HX_STACK_LINE(250)
				_this->y = y1;
				HX_STACK_LINE(250)
				_this->width = (w - x2);
				HX_STACK_LINE(250)
				_this->height = (y2 - y1);
				HX_STACK_LINE(250)
				_this;
			}
			HX_STACK_LINE(252)
			{
				HX_STACK_LINE(252)
				::flixel::math::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_CSTRING("bottom.left"));		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(252)
				_this->x = (int)0;
				HX_STACK_LINE(252)
				_this->y = y2;
				HX_STACK_LINE(252)
				_this->width = x1;
				HX_STACK_LINE(252)
				_this->height = (h - y2);
				HX_STACK_LINE(252)
				_this;
			}
			HX_STACK_LINE(253)
			{
				HX_STACK_LINE(253)
				::flixel::math::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_CSTRING("bottom"));		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(253)
				_this->x = x1;
				HX_STACK_LINE(253)
				_this->y = y2;
				HX_STACK_LINE(253)
				_this->width = (x2 - x1);
				HX_STACK_LINE(253)
				_this->height = (h - y2);
				HX_STACK_LINE(253)
				_this;
			}
			HX_STACK_LINE(254)
			{
				HX_STACK_LINE(254)
				::flixel::math::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_CSTRING("bottom.right"));		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(254)
				_this->x = x2;
				HX_STACK_LINE(254)
				_this->y = y2;
				HX_STACK_LINE(254)
				_this->width = (w - x2);
				HX_STACK_LINE(254)
				_this->height = (h - y2);
				HX_STACK_LINE(254)
				_this;
			}
			HX_STACK_LINE(271)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintCompoundBitmap(g,assetID,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects,rc,tile,smooth,raw);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxUI9SliceSprite_obj,paintScale9,(void))

Void FlxUI9SliceSprite_obj::paintCompoundBitmap( ::openfl::_v2::display::BitmapData g,::String assetID,::haxe::ds::StringMap sourceRects,::flixel::math::FlxRect targetRect,hx::Null< int >  __o_tile,hx::Null< bool >  __o_smooth,::openfl::_v2::display::BitmapData raw){
int tile = __o_tile.Default(0);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI9SliceSprite","paintCompoundBitmap",0xb0d9501d,"flixel.addons.ui.FlxUI9SliceSprite.paintCompoundBitmap","flixel/addons/ui/FlxUI9SliceSprite.hx",275,0x728ef6ec)
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(assetID,"assetID")
	HX_STACK_ARG(sourceRects,"sourceRects")
	HX_STACK_ARG(targetRect,"targetRect")
	HX_STACK_ARG(tile,"tile")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(raw,"raw")
{
		HX_STACK_LINE(276)
		int fillcolor = (int)16777215;		HX_STACK_VAR(fillcolor,"fillcolor");
		HX_STACK_LINE(278)
		int _g = ::Std_obj::_int(targetRect->x);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(278)
		targetRect->x = _g;
		HX_STACK_LINE(279)
		int _g1 = ::Std_obj::_int(targetRect->y);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(279)
		targetRect->y = _g1;
		HX_STACK_LINE(280)
		int _g2 = ::Std_obj::_int(targetRect->width);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(280)
		targetRect->width = _g2;
		HX_STACK_LINE(281)
		int _g3 = ::Std_obj::_int(targetRect->height);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(281)
		targetRect->height = _g3;
		HX_STACK_LINE(284)
		::flixel::math::FlxRect tl = sourceRects->get(HX_CSTRING("top.left"));		HX_STACK_VAR(tl,"tl");
		HX_STACK_LINE(285)
		if (((tl != null()))){
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				::flixel::math::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(286)
				_this->x = (int)0;
				HX_STACK_LINE(286)
				_this->y = (int)0;
				HX_STACK_LINE(286)
				_this->width = tl->width;
				HX_STACK_LINE(286)
				_this->height = tl->height;
				HX_STACK_LINE(286)
				_this;
			}
			HX_STACK_LINE(287)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(g,assetID,tl,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2,null(),(int)0,smooth,raw);
		}
		HX_STACK_LINE(290)
		::flixel::math::FlxRect tr = sourceRects->get(HX_CSTRING("top.right"));		HX_STACK_VAR(tr,"tr");
		HX_STACK_LINE(291)
		if (((tr != null()))){
			HX_STACK_LINE(292)
			{
				HX_STACK_LINE(292)
				::flixel::math::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(292)
				_this->x = (targetRect->width - tr->width);
				HX_STACK_LINE(292)
				_this->y = (int)0;
				HX_STACK_LINE(292)
				_this->width = tr->width;
				HX_STACK_LINE(292)
				_this->height = tr->height;
				HX_STACK_LINE(292)
				_this;
			}
			HX_STACK_LINE(293)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(g,assetID,tr,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2,null(),(int)0,smooth,raw);
		}
		HX_STACK_LINE(296)
		::flixel::math::FlxRect t = sourceRects->get(HX_CSTRING("top"));		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(297)
		if (((t != null()))){
			HX_STACK_LINE(298)
			{
				HX_STACK_LINE(298)
				::flixel::math::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(298)
				_this->x = tl->width;
				HX_STACK_LINE(298)
				_this->y = (int)0;
				HX_STACK_LINE(298)
				_this->width = ((targetRect->width - tl->width) - tr->width);
				HX_STACK_LINE(298)
				_this->height = t->height;
				HX_STACK_LINE(298)
				_this;
			}
			HX_STACK_LINE(299)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(g,assetID,t,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2,null(),(int(tile) & int((int)16)),smooth,raw);
		}
		HX_STACK_LINE(303)
		::flixel::math::FlxRect bl = sourceRects->get(HX_CSTRING("bottom.left"));		HX_STACK_VAR(bl,"bl");
		HX_STACK_LINE(304)
		if (((bl != null()))){
			HX_STACK_LINE(305)
			{
				HX_STACK_LINE(305)
				::flixel::math::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(305)
				_this->x = (int)0;
				HX_STACK_LINE(305)
				_this->y = (targetRect->height - bl->height);
				HX_STACK_LINE(305)
				_this->width = bl->width;
				HX_STACK_LINE(305)
				_this->height = bl->height;
				HX_STACK_LINE(305)
				_this;
			}
			HX_STACK_LINE(306)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(g,assetID,bl,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2,null(),(int)0,smooth,raw);
		}
		HX_STACK_LINE(309)
		::flixel::math::FlxRect br = sourceRects->get(HX_CSTRING("bottom.right"));		HX_STACK_VAR(br,"br");
		HX_STACK_LINE(310)
		if (((br != null()))){
			HX_STACK_LINE(311)
			{
				HX_STACK_LINE(311)
				::flixel::math::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(311)
				_this->x = (targetRect->width - br->width);
				HX_STACK_LINE(311)
				_this->y = (targetRect->height - br->height);
				HX_STACK_LINE(311)
				_this->width = br->width;
				HX_STACK_LINE(311)
				_this->height = br->height;
				HX_STACK_LINE(311)
				_this;
			}
			HX_STACK_LINE(312)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(g,assetID,br,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2,null(),(int)0,smooth,raw);
		}
		HX_STACK_LINE(315)
		::flixel::math::FlxRect b = sourceRects->get(HX_CSTRING("bottom"));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(316)
		if (((b != null()))){
			HX_STACK_LINE(317)
			{
				HX_STACK_LINE(317)
				::flixel::math::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(317)
				_this->x = bl->width;
				HX_STACK_LINE(317)
				_this->y = (targetRect->height - b->height);
				HX_STACK_LINE(317)
				_this->width = ((targetRect->width - bl->width) - br->width);
				HX_STACK_LINE(317)
				_this->height = b->height;
				HX_STACK_LINE(317)
				_this;
			}
			HX_STACK_LINE(318)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(g,assetID,b,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2,null(),(int(tile) & int((int)16)),smooth,raw);
		}
		HX_STACK_LINE(322)
		::flixel::math::FlxRect l = sourceRects->get(HX_CSTRING("left"));		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(323)
		if (((l != null()))){
			HX_STACK_LINE(324)
			{
				HX_STACK_LINE(324)
				::flixel::math::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(324)
				_this->x = (int)0;
				HX_STACK_LINE(324)
				_this->y = tl->height;
				HX_STACK_LINE(324)
				_this->width = l->width;
				HX_STACK_LINE(324)
				_this->height = ((targetRect->height - tl->height) - bl->height);
				HX_STACK_LINE(324)
				_this;
			}
			HX_STACK_LINE(325)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(g,assetID,l,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2,null(),(int(tile) & int((int)1)),smooth,raw);
		}
		HX_STACK_LINE(328)
		::flixel::math::FlxRect r = sourceRects->get(HX_CSTRING("right"));		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(329)
		if (((r != null()))){
			HX_STACK_LINE(330)
			{
				HX_STACK_LINE(330)
				::flixel::math::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(330)
				_this->x = (targetRect->width - r->width);
				HX_STACK_LINE(330)
				_this->y = tr->height;
				HX_STACK_LINE(330)
				_this->width = r->width;
				HX_STACK_LINE(330)
				_this->height = ((targetRect->height - tl->height) - bl->height);
				HX_STACK_LINE(330)
				_this;
			}
			HX_STACK_LINE(331)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(g,assetID,r,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2,null(),(int(tile) & int((int)1)),smooth,raw);
		}
		HX_STACK_LINE(334)
		::flixel::math::FlxRect m = sourceRects->get(HX_CSTRING("middle"));		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(335)
		if (((m != null()))){
			HX_STACK_LINE(336)
			{
				HX_STACK_LINE(336)
				::flixel::math::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(336)
				_this->x = l->width;
				HX_STACK_LINE(336)
				_this->y = t->height;
				HX_STACK_LINE(336)
				_this->width = ((targetRect->width - l->width) - r->width);
				HX_STACK_LINE(336)
				_this->height = ((targetRect->height - t->height) - b->height);
				HX_STACK_LINE(336)
				_this;
			}
			HX_STACK_LINE(337)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(g,assetID,m,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2,null(),tile,smooth,raw);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxUI9SliceSprite_obj,paintCompoundBitmap,(void))

Void FlxUI9SliceSprite_obj::paintBitmapSection( ::openfl::_v2::display::BitmapData g,::String assetId,::flixel::math::FlxRect src,::flixel::math::FlxRect dst,::openfl::_v2::display::BitmapData srcData,hx::Null< int >  __o_tile,hx::Null< bool >  __o_smooth,::openfl::_v2::display::BitmapData raw){
int tile = __o_tile.Default(0);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI9SliceSprite","paintBitmapSection",0xd9a180b3,"flixel.addons.ui.FlxUI9SliceSprite.paintBitmapSection","flixel/addons/ui/FlxUI9SliceSprite.hx",341,0x728ef6ec)
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(assetId,"assetId")
	HX_STACK_ARG(src,"src")
	HX_STACK_ARG(dst,"dst")
	HX_STACK_ARG(srcData,"srcData")
	HX_STACK_ARG(tile,"tile")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(raw,"raw")
{
		HX_STACK_LINE(342)
		if (((srcData == null()))){
			HX_STACK_LINE(343)
			if (((raw != null()))){
				HX_STACK_LINE(344)
				srcData = raw;
			}
			else{
				HX_STACK_LINE(346)
				::openfl::_v2::display::BitmapData _g = ::openfl::_v2::Assets_obj::getBitmapData(assetId,null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(346)
				srcData = _g;
			}
		}
		HX_STACK_LINE(350)
		int _g1 = ::Std_obj::_int(src->x);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(350)
		src->x = _g1;
		HX_STACK_LINE(351)
		int _g2 = ::Std_obj::_int(src->y);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(351)
		src->y = _g2;
		HX_STACK_LINE(352)
		int _g3 = ::Std_obj::_int(src->width);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(352)
		src->width = _g3;
		HX_STACK_LINE(353)
		int _g4 = ::Std_obj::_int(src->height);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(353)
		src->height = _g4;
		HX_STACK_LINE(355)
		int _g5 = ::Std_obj::_int(dst->x);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(355)
		dst->x = _g5;
		HX_STACK_LINE(356)
		int _g6 = ::Std_obj::_int(dst->y);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(356)
		dst->y = _g6;
		HX_STACK_LINE(357)
		int _g7 = ::Std_obj::_int(dst->width);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(357)
		dst->width = _g7;
		HX_STACK_LINE(358)
		int _g8 = ::Std_obj::_int(dst->height);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(358)
		dst->height = _g8;
		HX_STACK_LINE(360)
		::openfl::_v2::display::BitmapData section = null();		HX_STACK_VAR(section,"section");
		HX_STACK_LINE(361)
		::String cacheId = null();		HX_STACK_VAR(cacheId,"cacheId");
		HX_STACK_LINE(362)
		if (((bool((::flixel::addons::ui::FlxUI9SliceSprite_obj::useSectionCache == true)) && bool((assetId != null()))))){
			HX_STACK_LINE(363)
			if (((::flixel::addons::ui::FlxUI9SliceSprite_obj::sectionCache == null()))){
				HX_STACK_LINE(364)
				::haxe::ds::StringMap _g9 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(364)
				::flixel::addons::ui::FlxUI9SliceSprite_obj::sectionCache = _g9;
			}
			HX_STACK_LINE(366)
			cacheId = (((((((((assetId + HX_CSTRING("_")) + src->x) + HX_CSTRING("_")) + src->y) + HX_CSTRING("_")) + src->width) + HX_CSTRING("_")) + src->height) + HX_CSTRING("_"));
			HX_STACK_LINE(367)
			::openfl::_v2::display::BitmapData _g10 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::sectionCache->get(cacheId);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(367)
			section = _g10;
		}
		HX_STACK_LINE(370)
		if (((section == null()))){
			HX_STACK_LINE(371)
			int fillcolor = (int)16777215;		HX_STACK_VAR(fillcolor,"fillcolor");
			HX_STACK_LINE(372)
			int _g11 = ::Std_obj::_int(src->width);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(372)
			int _g12 = ::Std_obj::_int(src->height);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(372)
			::openfl::_v2::display::BitmapData _g13 = ::openfl::_v2::display::BitmapData_obj::__new(_g11,_g12,true,fillcolor,null());		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(372)
			section = _g13;
			HX_STACK_LINE(374)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2->x = src->x;
			HX_STACK_LINE(375)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2->y = src->y;
			HX_STACK_LINE(376)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2->width = src->width;
			HX_STACK_LINE(377)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2->height = src->height;
			HX_STACK_LINE(379)
			section->copyPixels(srcData,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPointZero,null(),null(),null());
			HX_STACK_LINE(381)
			if (((bool((::flixel::addons::ui::FlxUI9SliceSprite_obj::useSectionCache == true)) && bool((cacheId != null()))))){
				HX_STACK_LINE(382)
				::flixel::addons::ui::FlxUI9SliceSprite_obj::sectionCache->set(cacheId,section);
			}
			HX_STACK_LINE(384)
			(::flixel::addons::ui::FlxUI9SliceSprite_obj::bitmapsCreated)++;
		}
		HX_STACK_LINE(387)
		if (((bool((dst->width > (int)0)) && bool((dst->height > (int)0))))){
			HX_STACK_LINE(389)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2->x = dst->x;
			HX_STACK_LINE(390)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2->y = dst->y;
			HX_STACK_LINE(391)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2->width = dst->width;
			HX_STACK_LINE(392)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2->height = dst->height;
			HX_STACK_LINE(394)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::bitmapFillRect(g,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2,section,tile,smooth);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxUI9SliceSprite_obj,paintBitmapSection,(void))

Void FlxUI9SliceSprite_obj::bitmapFillRect( ::openfl::_v2::display::BitmapData g,::openfl::_v2::geom::Rectangle dst,::openfl::_v2::display::BitmapData section,hx::Null< int >  __o_tile,hx::Null< bool >  __o_smooth_){
int tile = __o_tile.Default(0);
bool smooth_ = __o_smooth_.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI9SliceSprite","bitmapFillRect",0x90ef4851,"flixel.addons.ui.FlxUI9SliceSprite.bitmapFillRect","flixel/addons/ui/FlxUI9SliceSprite.hx",398,0x728ef6ec)
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(dst,"dst")
	HX_STACK_ARG(section,"section")
	HX_STACK_ARG(tile,"tile")
	HX_STACK_ARG(smooth_,"smooth_")
{
		HX_STACK_LINE(405)
		int _g = ::Std_obj::_int(dst->width);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(405)
		int _g1 = ::Std_obj::_int(dst->height);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(405)
		::openfl::_v2::display::BitmapData final_pixels = ::openfl::_v2::display::BitmapData_obj::__new(_g,_g1,true,(int)0,null());		HX_STACK_VAR(final_pixels,"final_pixels");
		HX_STACK_LINE(407)
		::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticMatrix->identity();
		HX_STACK_LINE(410)
		::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect->x = (int)0;
		HX_STACK_LINE(411)
		::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect->y = (int)0;
		HX_STACK_LINE(412)
		int _g2 = section->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(412)
		::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect->width = _g2;
		HX_STACK_LINE(413)
		int _g3 = section->get_height();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(413)
		::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect->height = _g3;
		HX_STACK_LINE(415)
		if (((((int(tile) & int((int)16))) == (int)0))){
			HX_STACK_LINE(416)
			int _g4 = section->get_width();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(416)
			Float _g5 = (Float(dst->width) / Float(_g4));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(416)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticMatrix->scale(_g5,1.0);
			HX_STACK_LINE(417)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect->width = dst->width;
		}
		HX_STACK_LINE(419)
		if (((((int(tile) & int((int)1))) == (int)0))){
			HX_STACK_LINE(420)
			int _g6 = section->get_height();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(420)
			Float _g7 = (Float(dst->height) / Float(_g6));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(420)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticMatrix->scale(1.0,_g7);
			HX_STACK_LINE(421)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect->height = dst->height;
		}
		HX_STACK_LINE(429)
		int _g8 = section->get_width();		HX_STACK_VAR(_g8,"_g8");
		struct _Function_1_1{
			inline static bool Block( ::openfl::_v2::display::BitmapData &section,::openfl::_v2::geom::Rectangle &dst){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI9SliceSprite.hx",429,0x728ef6ec)
				{
					HX_STACK_LINE(429)
					int _g9 = section->get_height();		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(429)
					return (_g9 == dst->height);
				}
				return null();
			}
		};
		HX_STACK_LINE(429)
		if (((  (((_g8 == dst->width))) ? bool(_Function_1_1::Block(section,dst)) : bool(false) ))){
			HX_STACK_LINE(430)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->x = (int)0;
			HX_STACK_LINE(431)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->y = (int)0;
			HX_STACK_LINE(432)
			::openfl::_v2::geom::Rectangle _g10 = section->get_rect();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(432)
			final_pixels->copyPixels(section,_g10,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint,null(),null(),null());
		}
		else{
			HX_STACK_LINE(434)
			if ((smooth_)){
				HX_STACK_LINE(435)
				final_pixels->draw(section,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticMatrix,null(),null(),null(),true);
			}
			else{
				HX_STACK_LINE(437)
				final_pixels->draw(section,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticMatrix,null(),null(),null(),false);
			}
		}
		HX_STACK_LINE(442)
		if (((tile != (int)0))){
			HX_STACK_LINE(446)
			int th = (int(tile) & int((int)16));		HX_STACK_VAR(th,"th");
			HX_STACK_LINE(448)
			if (((((int(tile) & int((int)16))) == (int)16))){
				HX_STACK_LINE(450)
				::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->x = (int)0;
				HX_STACK_LINE(451)
				::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->y = (int)0;
				HX_STACK_LINE(453)
				while((true)){
					HX_STACK_LINE(453)
					if ((!(((::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->x < dst->width))))){
						HX_STACK_LINE(453)
						break;
					}
					HX_STACK_LINE(454)
					hx::AddEq(::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->x,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect->width);
					HX_STACK_LINE(457)
					final_pixels->copyPixels(final_pixels,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint,null(),null(),null());
				}
			}
			HX_STACK_LINE(467)
			if (((((int(tile) & int((int)1))) == (int)1))){
				HX_STACK_LINE(469)
				::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->x = (int)0;
				HX_STACK_LINE(470)
				::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->y = (int)0;
				HX_STACK_LINE(473)
				int _g11 = final_pixels->get_width();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(473)
				::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect->width = _g11;
				HX_STACK_LINE(475)
				while((true)){
					HX_STACK_LINE(475)
					if ((!(((::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->y < dst->height))))){
						HX_STACK_LINE(475)
						break;
					}
					HX_STACK_LINE(476)
					hx::AddEq(::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->y,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect->height);
					HX_STACK_LINE(480)
					final_pixels->copyPixels(final_pixels,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint,null(),null(),null());
				}
			}
		}
		HX_STACK_LINE(489)
		::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->x = dst->x;
		HX_STACK_LINE(490)
		::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->y = dst->y;
		HX_STACK_LINE(493)
		::openfl::_v2::geom::Rectangle _g12 = final_pixels->get_rect();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(493)
		g->copyPixels(final_pixels,_g12,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint,null(),null(),null());
		HX_STACK_LINE(496)
		::openfl::_v2::display::BitmapData _g13 = ::flixel::util::FlxDestroyUtil_obj::dispose(final_pixels);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(496)
		final_pixels = _g13;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxUI9SliceSprite_obj,bitmapFillRect,(void))


FlxUI9SliceSprite_obj::FlxUI9SliceSprite_obj()
{
}

void FlxUI9SliceSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUI9SliceSprite);
	HX_MARK_MEMBER_NAME(_bmpCanvas,"_bmpCanvas");
	HX_MARK_MEMBER_NAME(_slice9,"_slice9");
	HX_MARK_MEMBER_NAME(_tile,"_tile");
	HX_MARK_MEMBER_NAME(_smooth,"_smooth");
	HX_MARK_MEMBER_NAME(_asset_id,"_asset_id");
	HX_MARK_MEMBER_NAME(_raw_pixels,"_raw_pixels");
	::flixel::addons::ui::FlxUISprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUI9SliceSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_bmpCanvas,"_bmpCanvas");
	HX_VISIT_MEMBER_NAME(_slice9,"_slice9");
	HX_VISIT_MEMBER_NAME(_tile,"_tile");
	HX_VISIT_MEMBER_NAME(_smooth,"_smooth");
	HX_VISIT_MEMBER_NAME(_asset_id,"_asset_id");
	HX_VISIT_MEMBER_NAME(_raw_pixels,"_raw_pixels");
	::flixel::addons::ui::FlxUISprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUI9SliceSprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_tile") ) { return _tile; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_slice9") ) { return _slice9; }
		if (HX_FIELD_EQ(inName,"_smooth") ) { return _smooth; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_asset_id") ) { return _asset_id; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_bmpCanvas") ) { return _bmpCanvas; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_staticRect") ) { return _staticRect; }
		if (HX_FIELD_EQ(inName,"paintScale9") ) { return paintScale9_dyn(); }
		if (HX_FIELD_EQ(inName,"_raw_pixels") ) { return _raw_pixels; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sectionCache") ) { return sectionCache; }
		if (HX_FIELD_EQ(inName,"_staticPoint") ) { return _staticPoint; }
		if (HX_FIELD_EQ(inName,"_staticRect2") ) { return _staticRect2; }
		if (HX_FIELD_EQ(inName,"_staticRects") ) { return _staticRects; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_staticMatrix") ) { return _staticMatrix; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bitmapsCreated") ) { return bitmapsCreated; }
		if (HX_FIELD_EQ(inName,"_staticFlxRect") ) { return _staticFlxRect; }
		if (HX_FIELD_EQ(inName,"bitmapFillRect") ) { return bitmapFillRect_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"useSectionCache") ) { return useSectionCache; }
		if (HX_FIELD_EQ(inName,"_staticFlxRect2") ) { return _staticFlxRect2; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_staticPointZero") ) { return _staticPointZero; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getRectFromString") ) { return getRectFromString_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"paintBitmapSection") ) { return paintBitmapSection_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"paintCompoundBitmap") ) { return paintCompoundBitmap_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getRectIntsFromString") ) { return getRectIntsFromString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUI9SliceSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_tile") ) { _tile=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_slice9") ) { _slice9=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_smooth") ) { _smooth=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_asset_id") ) { _asset_id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_bmpCanvas") ) { _bmpCanvas=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_staticRect") ) { _staticRect=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_raw_pixels") ) { _raw_pixels=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sectionCache") ) { sectionCache=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_staticPoint") ) { _staticPoint=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_staticRect2") ) { _staticRect2=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_staticRects") ) { _staticRects=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_staticMatrix") ) { _staticMatrix=inValue.Cast< ::openfl::_v2::geom::Matrix >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bitmapsCreated") ) { bitmapsCreated=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_staticFlxRect") ) { _staticFlxRect=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"useSectionCache") ) { useSectionCache=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_staticFlxRect2") ) { _staticFlxRect2=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_staticPointZero") ) { _staticPointZero=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUI9SliceSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_bmpCanvas"));
	outFields->push(HX_CSTRING("_slice9"));
	outFields->push(HX_CSTRING("_tile"));
	outFields->push(HX_CSTRING("_smooth"));
	outFields->push(HX_CSTRING("_asset_id"));
	outFields->push(HX_CSTRING("_raw_pixels"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("bitmapsCreated"),
	HX_CSTRING("useSectionCache"),
	HX_CSTRING("sectionCache"),
	HX_CSTRING("_staticPoint"),
	HX_CSTRING("_staticRect"),
	HX_CSTRING("_staticRect2"),
	HX_CSTRING("_staticPointZero"),
	HX_CSTRING("_staticMatrix"),
	HX_CSTRING("_staticFlxRect"),
	HX_CSTRING("_staticFlxRect2"),
	HX_CSTRING("TILE_NONE"),
	HX_CSTRING("TILE_BOTH"),
	HX_CSTRING("TILE_H"),
	HX_CSTRING("TILE_V"),
	HX_CSTRING("_staticRects"),
	HX_CSTRING("getRectFromString"),
	HX_CSTRING("getRectIntsFromString"),
	HX_CSTRING("paintScale9"),
	HX_CSTRING("paintCompoundBitmap"),
	HX_CSTRING("paintBitmapSection"),
	HX_CSTRING("bitmapFillRect"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::BitmapData*/ ,(int)offsetof(FlxUI9SliceSprite_obj,_bmpCanvas),HX_CSTRING("_bmpCanvas")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxUI9SliceSprite_obj,_slice9),HX_CSTRING("_slice9")},
	{hx::fsInt,(int)offsetof(FlxUI9SliceSprite_obj,_tile),HX_CSTRING("_tile")},
	{hx::fsBool,(int)offsetof(FlxUI9SliceSprite_obj,_smooth),HX_CSTRING("_smooth")},
	{hx::fsString,(int)offsetof(FlxUI9SliceSprite_obj,_asset_id),HX_CSTRING("_asset_id")},
	{hx::fsObject /*::openfl::_v2::display::BitmapData*/ ,(int)offsetof(FlxUI9SliceSprite_obj,_raw_pixels),HX_CSTRING("_raw_pixels")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_bmpCanvas"),
	HX_CSTRING("_slice9"),
	HX_CSTRING("_tile"),
	HX_CSTRING("_smooth"),
	HX_CSTRING("_asset_id"),
	HX_CSTRING("_raw_pixels"),
	HX_CSTRING("resize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::bitmapsCreated,"bitmapsCreated");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::useSectionCache,"useSectionCache");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::sectionCache,"sectionCache");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticPoint,"_staticPoint");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticRect,"_staticRect");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticRect2,"_staticRect2");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticPointZero,"_staticPointZero");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticMatrix,"_staticMatrix");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticFlxRect,"_staticFlxRect");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticFlxRect2,"_staticFlxRect2");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_NONE,"TILE_NONE");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_BOTH,"TILE_BOTH");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_H,"TILE_H");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_V,"TILE_V");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticRects,"_staticRects");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::bitmapsCreated,"bitmapsCreated");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::useSectionCache,"useSectionCache");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::sectionCache,"sectionCache");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticPoint,"_staticPoint");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticRect,"_staticRect");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticRect2,"_staticRect2");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticPointZero,"_staticPointZero");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticMatrix,"_staticMatrix");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticFlxRect,"_staticFlxRect");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticFlxRect2,"_staticFlxRect2");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_NONE,"TILE_NONE");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_BOTH,"TILE_BOTH");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_H,"TILE_H");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_V,"TILE_V");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticRects,"_staticRects");
};

#endif

Class FlxUI9SliceSprite_obj::__mClass;

void FlxUI9SliceSprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxUI9SliceSprite"), hx::TCanCast< FlxUI9SliceSprite_obj> ,sStaticFields,sMemberFields,
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

void FlxUI9SliceSprite_obj::__boot()
{
	bitmapsCreated= (int)0;
	useSectionCache= true;
	_staticPoint= ::openfl::_v2::geom::Point_obj::__new(null(),null());
	_staticRect= ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());
	_staticRect2= ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());
	_staticPointZero= ::openfl::_v2::geom::Point_obj::__new((int)0,(int)0);
	_staticMatrix= ::openfl::_v2::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
struct _Function_0_1{
	inline static ::flixel::math::FlxRect Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI9SliceSprite.hx",44,0x728ef6ec)
		{
			HX_STACK_LINE(44)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(44)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(44)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(44)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(44)
			::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(44)
			{
				HX_STACK_LINE(44)
				::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(44)
				_this->x = X;
				HX_STACK_LINE(44)
				_this->y = Y;
				HX_STACK_LINE(44)
				_this->width = Width;
				HX_STACK_LINE(44)
				_this->height = Height;
				HX_STACK_LINE(44)
				rect = _this;
			}
			HX_STACK_LINE(44)
			rect->_inPool = false;
			HX_STACK_LINE(44)
			return rect;
		}
		return null();
	}
};
	_staticFlxRect= _Function_0_1::Block();
struct _Function_0_2{
	inline static ::flixel::math::FlxRect Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI9SliceSprite.hx",45,0x728ef6ec)
		{
			HX_STACK_LINE(45)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(45)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(45)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(45)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(45)
			::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(45)
				_this->x = X;
				HX_STACK_LINE(45)
				_this->y = Y;
				HX_STACK_LINE(45)
				_this->width = Width;
				HX_STACK_LINE(45)
				_this->height = Height;
				HX_STACK_LINE(45)
				rect = _this;
			}
			HX_STACK_LINE(45)
			rect->_inPool = false;
			HX_STACK_LINE(45)
			return rect;
		}
		return null();
	}
};
	_staticFlxRect2= _Function_0_2::Block();
	TILE_NONE= (int)0;
	TILE_BOTH= (int)17;
	TILE_H= (int)16;
	TILE_V= (int)1;
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
