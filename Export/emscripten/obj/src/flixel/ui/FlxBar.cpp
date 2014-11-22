#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxBarFrames
#include <flixel/graphics/frames/FlxBarFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawStackItem
#include <flixel/graphics/tile/FlxDrawStackItem.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
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
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBarFillDirection
#include <flixel/ui/FlxBarFillDirection.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxGradient
#include <flixel/util/FlxGradient.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
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
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Matrix
#include <openfl/_v2/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
namespace flixel{
namespace ui{

Void FlxBar_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::flixel::ui::FlxBarFillDirection direction,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic parentRef,::String __o_variable,hx::Null< Float >  __o_min,hx::Null< Float >  __o_max,hx::Null< bool >  __o_showBorder)
{
HX_STACK_FRAME("flixel.ui.FlxBar","new",0xec11b05b,"flixel.ui.FlxBar.new","flixel/ui/FlxBar.hx",35,0x9c56c8d5)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(direction,"direction")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
HX_STACK_ARG(parentRef,"parentRef")
HX_STACK_ARG(__o_variable,"variable")
HX_STACK_ARG(__o_min,"min")
HX_STACK_ARG(__o_max,"max")
HX_STACK_ARG(__o_showBorder,"showBorder")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
int width = __o_width.Default(100);
int height = __o_height.Default(10);
::String variable = __o_variable.Default(HX_CSTRING(""));
Float min = __o_min.Default(0);
Float max = __o_max.Default(100);
bool showBorder = __o_showBorder.Default(false);
{
	HX_STACK_LINE(53)
	this->killOnEmpty = false;
	HX_STACK_LINE(41)
	this->fixedPosition = true;
	HX_STACK_LINE(145)
	super::__construct(x,y,null());
	HX_STACK_LINE(147)
	if (((direction == null()))){
		HX_STACK_LINE(147)
		direction = ::flixel::ui::FlxBarFillDirection_obj::LEFT_TO_RIGHT;
	}
	else{
		HX_STACK_LINE(147)
		direction = direction;
	}
	HX_STACK_LINE(149)
	this->barWidth = width;
	HX_STACK_LINE(150)
	this->barHeight = height;
	HX_STACK_LINE(160)
	::flixel::FlxSprite _g = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(160)
	this->_front = _g;
	HX_STACK_LINE(161)
	this->_frontFrame = this->_front->frame;
	HX_STACK_LINE(164)
	if (((parentRef != null()))){
		HX_STACK_LINE(166)
		this->parent = parentRef;
		HX_STACK_LINE(167)
		this->parentVariable = variable;
	}
	HX_STACK_LINE(170)
	this->set_fillDirection(direction);
	HX_STACK_LINE(171)
	this->createFilledBar((int)-16756480,(int)-16714752,showBorder,null());
	HX_STACK_LINE(172)
	this->setRange(min,max);
}
;
	return null();
}

//FlxBar_obj::~FlxBar_obj() { }

Dynamic FlxBar_obj::__CreateEmpty() { return  new FlxBar_obj; }
hx::ObjectPtr< FlxBar_obj > FlxBar_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::flixel::ui::FlxBarFillDirection direction,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic parentRef,::String __o_variable,hx::Null< Float >  __o_min,hx::Null< Float >  __o_max,hx::Null< bool >  __o_showBorder)
{  hx::ObjectPtr< FlxBar_obj > result = new FlxBar_obj();
	result->__construct(__o_x,__o_y,direction,__o_width,__o_height,parentRef,__o_variable,__o_min,__o_max,__o_showBorder);
	return result;}

Dynamic FlxBar_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBar_obj > result = new FlxBar_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9]);
	return result;}

Void FlxBar_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","destroy",0x13b32675,"flixel.ui.FlxBar.destroy","flixel/ui/FlxBar.hx",176,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(177)
		::flixel::math::FlxPoint _g = ::flixel::util::FlxDestroyUtil_obj::put(this->positionOffset);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(177)
		this->positionOffset = _g;
		HX_STACK_LINE(180)
		::flixel::FlxSprite _g1 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_front);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(180)
		this->_front = _g1;
		HX_STACK_LINE(181)
		this->_frontFrame = null();
		HX_STACK_LINE(191)
		this->parent = null();
		HX_STACK_LINE(192)
		this->positionOffset = null();
		HX_STACK_LINE(193)
		this->emptyCallback = null();
		HX_STACK_LINE(194)
		this->filledCallback = null();
		HX_STACK_LINE(196)
		this->super::destroy();
	}
return null();
}


Void FlxBar_obj::trackParent( int offsetX,int offsetY){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","trackParent",0x235ed510,"flixel.ui.FlxBar.trackParent","flixel/ui/FlxBar.hx",209,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(offsetX,"offsetX")
		HX_STACK_ARG(offsetY,"offsetY")
		HX_STACK_LINE(210)
		this->fixedPosition = false;
		HX_STACK_LINE(211)
		::flixel::math::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(211)
		{
			HX_STACK_LINE(211)
			::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(offsetX,offsetY);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(211)
			point->_inPool = false;
			HX_STACK_LINE(211)
			_g = point;
		}
		HX_STACK_LINE(211)
		this->positionOffset = _g;
		HX_STACK_LINE(213)
		if ((::Reflect_obj::hasField(this->parent,HX_CSTRING("scrollFactor")))){
			HX_STACK_LINE(215)
			this->scrollFactor->set_x(this->parent->__Field(HX_CSTRING("scrollFactor"),true)->__Field(HX_CSTRING("x"),true));
			HX_STACK_LINE(216)
			this->scrollFactor->set_y(this->parent->__Field(HX_CSTRING("scrollFactor"),true)->__Field(HX_CSTRING("y"),true));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBar_obj,trackParent,(void))

Void FlxBar_obj::setParent( Dynamic parentRef,::String variable,hx::Null< bool >  __o_track,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY){
bool track = __o_track.Default(false);
int offsetX = __o_offsetX.Default(0);
int offsetY = __o_offsetY.Default(0);
	HX_STACK_FRAME("flixel.ui.FlxBar","setParent",0x1ca008a7,"flixel.ui.FlxBar.setParent","flixel/ui/FlxBar.hx",230,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(parentRef,"parentRef")
	HX_STACK_ARG(variable,"variable")
	HX_STACK_ARG(track,"track")
	HX_STACK_ARG(offsetX,"offsetX")
	HX_STACK_ARG(offsetY,"offsetY")
{
		HX_STACK_LINE(231)
		this->parent = parentRef;
		HX_STACK_LINE(232)
		this->parentVariable = variable;
		HX_STACK_LINE(234)
		if ((track)){
			HX_STACK_LINE(236)
			this->trackParent(offsetX,offsetY);
		}
		HX_STACK_LINE(239)
		this->updateValueFromParent();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxBar_obj,setParent,(void))

Void FlxBar_obj::stopTrackingParent( int posX,int posY){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","stopTrackingParent",0x3b6e39c8,"flixel.ui.FlxBar.stopTrackingParent","flixel/ui/FlxBar.hx",249,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(posX,"posX")
		HX_STACK_ARG(posY,"posY")
		HX_STACK_LINE(250)
		this->fixedPosition = true;
		HX_STACK_LINE(251)
		this->set_x(posX);
		HX_STACK_LINE(252)
		this->set_y(posY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBar_obj,stopTrackingParent,(void))

Void FlxBar_obj::setCallbacks( Dynamic onEmpty,Dynamic onFilled,hx::Null< bool >  __o_killOnEmpty){
bool killOnEmpty = __o_killOnEmpty.Default(false);
	HX_STACK_FRAME("flixel.ui.FlxBar","setCallbacks",0x67217bb1,"flixel.ui.FlxBar.setCallbacks","flixel/ui/FlxBar.hx",265,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(onEmpty,"onEmpty")
	HX_STACK_ARG(onFilled,"onFilled")
	HX_STACK_ARG(killOnEmpty,"killOnEmpty")
{
		HX_STACK_LINE(266)
		if (((onEmpty != null()))){
			HX_STACK_LINE(266)
			this->emptyCallback = onEmpty;
		}
		else{
			HX_STACK_LINE(266)
			this->emptyCallback = this->emptyCallback_dyn();
		}
		HX_STACK_LINE(267)
		if (((onFilled != null()))){
			HX_STACK_LINE(267)
			this->filledCallback = onFilled;
		}
		else{
			HX_STACK_LINE(267)
			this->filledCallback = this->filledCallback_dyn();
		}
		HX_STACK_LINE(268)
		this->killOnEmpty = killOnEmpty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxBar_obj,setCallbacks,(void))

Void FlxBar_obj::setRange( Float min,Float max){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","setRange",0x4a8160e0,"flixel.ui.FlxBar.setRange","flixel/ui/FlxBar.hx",278,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(min,"min")
		HX_STACK_ARG(max,"max")
		HX_STACK_LINE(279)
		if (((max <= min))){
			HX_STACK_LINE(281)
			HX_STACK_DO_THROW(HX_CSTRING("FlxBar: max cannot be less than or equal to min"));
			HX_STACK_LINE(282)
			return null();
		}
		HX_STACK_LINE(285)
		this->min = min;
		HX_STACK_LINE(286)
		this->max = max;
		HX_STACK_LINE(287)
		this->range = (max - min);
		HX_STACK_LINE(288)
		this->pct = (Float(this->range) / Float((int)100));
		HX_STACK_LINE(290)
		if ((this->_fillHorizontal)){
			HX_STACK_LINE(290)
			this->pxPerPercent = (Float(this->barWidth) / Float((int)100));
		}
		else{
			HX_STACK_LINE(290)
			this->pxPerPercent = (Float(this->barHeight) / Float((int)100));
		}
		HX_STACK_LINE(292)
		Float _g = this->get_value();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(292)
		if ((!(::Math_obj::isNaN(_g)))){
			HX_STACK_LINE(294)
			Float _g1 = this->get_value();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(294)
			Float _g2 = ::Math_obj::min(_g1,max);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(294)
			Float _g3 = ::Math_obj::max(min,_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(294)
			this->set_value(_g3);
		}
		else{
			HX_STACK_LINE(298)
			this->set_value(min);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBar_obj,setRange,(void))

::flixel::ui::FlxBar FlxBar_obj::createFilledBar( int empty,int fill,hx::Null< bool >  __o_showBorder,hx::Null< int >  __o_border){
bool showBorder = __o_showBorder.Default(false);
int border = __o_border.Default(-1);
	HX_STACK_FRAME("flixel.ui.FlxBar","createFilledBar",0x6a7e3330,"flixel.ui.FlxBar.createFilledBar","flixel/ui/FlxBar.hx",313,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(empty,"empty")
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(showBorder,"showBorder")
	HX_STACK_ARG(border,"border")
{
		HX_STACK_LINE(314)
		this->createColoredEmptyBar(empty,showBorder,border);
		HX_STACK_LINE(315)
		this->createColoredFilledBar(fill,showBorder,border);
		HX_STACK_LINE(316)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBar_obj,createFilledBar,return )

::flixel::ui::FlxBar FlxBar_obj::createColoredEmptyBar( int empty,hx::Null< bool >  __o_showBorder,hx::Null< int >  __o_border){
bool showBorder = __o_showBorder.Default(false);
int border = __o_border.Default(-1);
	HX_STACK_FRAME("flixel.ui.FlxBar","createColoredEmptyBar",0xa6df1307,"flixel.ui.FlxBar.createColoredEmptyBar","flixel/ui/FlxBar.hx",328,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(empty,"empty")
	HX_STACK_ARG(showBorder,"showBorder")
	HX_STACK_ARG(border,"border")
{
		HX_STACK_LINE(330)
		int emptyA = (int((int(empty) >> int((int)24))) & int((int)255));		HX_STACK_VAR(emptyA,"emptyA");
		HX_STACK_LINE(331)
		int emptyRGB = (int(empty) & int((int)16777215));		HX_STACK_VAR(emptyRGB,"emptyRGB");
		HX_STACK_LINE(332)
		int borderA = (int((int(border) >> int((int)24))) & int((int)255));		HX_STACK_VAR(borderA,"borderA");
		HX_STACK_LINE(333)
		int borderRGB = (int(border) & int((int)16777215));		HX_STACK_VAR(borderRGB,"borderRGB");
		HX_STACK_LINE(334)
		::String emptyKey = (((((((HX_CSTRING("empty: ") + this->barWidth) + HX_CSTRING("x")) + this->barHeight) + HX_CSTRING(":")) + emptyA) + HX_CSTRING(".")) + emptyRGB);		HX_STACK_VAR(emptyKey,"emptyKey");
		HX_STACK_LINE(336)
		if ((showBorder)){
			HX_STACK_LINE(338)
			hx::AddEq(emptyKey,(((HX_CSTRING(",border: ") + borderA) + HX_CSTRING(".")) + borderRGB));
		}
		HX_STACK_LINE(341)
		bool _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(341)
		{
			HX_STACK_LINE(341)
			::flixel::system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(341)
			if ((_this->_cache->exists(emptyKey))){
				HX_STACK_LINE(341)
				::flixel::graphics::FlxGraphic _g = _this->_cache->get(emptyKey);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(341)
				_g1 = (_g != null());
			}
			else{
				HX_STACK_LINE(341)
				_g1 = false;
			}
		}
		HX_STACK_LINE(341)
		if (((_g1 == false))){
			HX_STACK_LINE(343)
			::openfl::_v2::display::BitmapData emptyBar = null();		HX_STACK_VAR(emptyBar,"emptyBar");
			HX_STACK_LINE(345)
			if ((showBorder)){
				HX_STACK_LINE(347)
				::openfl::_v2::display::BitmapData _g2 = ::openfl::_v2::display::BitmapData_obj::__new(this->barWidth,this->barHeight,true,border,null());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(347)
				emptyBar = _g2;
				HX_STACK_LINE(348)
				::openfl::_v2::geom::Rectangle _g3 = ::openfl::_v2::geom::Rectangle_obj::__new((int)1,(int)1,(this->barWidth - (int)2),(this->barHeight - (int)2));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(348)
				emptyBar->fillRect(_g3,empty);
			}
			else{
				HX_STACK_LINE(352)
				::openfl::_v2::display::BitmapData _g4 = ::openfl::_v2::display::BitmapData_obj::__new(this->barWidth,this->barHeight,true,empty,null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(352)
				emptyBar = _g4;
			}
			HX_STACK_LINE(355)
			::flixel::FlxG_obj::bitmap->add(emptyBar,false,emptyKey);
		}
		HX_STACK_LINE(358)
		::flixel::graphics::frames::FlxImageFrame _g5 = ::flixel::FlxG_obj::bitmap->get(emptyKey)->get_imageFrame();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(358)
		this->set_frames(_g5);
		HX_STACK_LINE(374)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxBar_obj,createColoredEmptyBar,return )

::flixel::ui::FlxBar FlxBar_obj::createColoredFilledBar( int fill,hx::Null< bool >  __o_showBorder,hx::Null< int >  __o_border){
bool showBorder = __o_showBorder.Default(false);
int border = __o_border.Default(-1);
	HX_STACK_FRAME("flixel.ui.FlxBar","createColoredFilledBar",0x03a68870,"flixel.ui.FlxBar.createColoredFilledBar","flixel/ui/FlxBar.hx",385,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(showBorder,"showBorder")
	HX_STACK_ARG(border,"border")
{
		HX_STACK_LINE(387)
		int fillA = (int((int(fill) >> int((int)24))) & int((int)255));		HX_STACK_VAR(fillA,"fillA");
		HX_STACK_LINE(388)
		int fillRGB = (int(fill) & int((int)16777215));		HX_STACK_VAR(fillRGB,"fillRGB");
		HX_STACK_LINE(389)
		int borderA = (int((int(border) >> int((int)24))) & int((int)255));		HX_STACK_VAR(borderA,"borderA");
		HX_STACK_LINE(390)
		int borderRGB = (int(border) & int((int)16777215));		HX_STACK_VAR(borderRGB,"borderRGB");
		HX_STACK_LINE(392)
		::String filledKey = (((((((HX_CSTRING("filled: ") + this->barWidth) + HX_CSTRING("x")) + this->barHeight) + HX_CSTRING(":")) + fillA) + HX_CSTRING(".")) + fillRGB);		HX_STACK_VAR(filledKey,"filledKey");
		HX_STACK_LINE(393)
		if ((showBorder)){
			HX_STACK_LINE(395)
			hx::AddEq(filledKey,(((HX_CSTRING(",border: ") + borderA) + HX_CSTRING(".")) + borderRGB));
		}
		HX_STACK_LINE(398)
		bool _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(398)
		{
			HX_STACK_LINE(398)
			::flixel::system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(398)
			if ((_this->_cache->exists(filledKey))){
				HX_STACK_LINE(398)
				::flixel::graphics::FlxGraphic _g = _this->_cache->get(filledKey);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(398)
				_g1 = (_g != null());
			}
			else{
				HX_STACK_LINE(398)
				_g1 = false;
			}
		}
		HX_STACK_LINE(398)
		if (((_g1 == false))){
			HX_STACK_LINE(400)
			::openfl::_v2::display::BitmapData filledBar = null();		HX_STACK_VAR(filledBar,"filledBar");
			HX_STACK_LINE(402)
			if ((showBorder)){
				HX_STACK_LINE(404)
				::openfl::_v2::display::BitmapData _g2 = ::openfl::_v2::display::BitmapData_obj::__new(this->barWidth,this->barHeight,true,border,null());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(404)
				filledBar = _g2;
				HX_STACK_LINE(405)
				::openfl::_v2::geom::Rectangle _g3 = ::openfl::_v2::geom::Rectangle_obj::__new((int)1,(int)1,(this->barWidth - (int)2),(this->barHeight - (int)2));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(405)
				filledBar->fillRect(_g3,fill);
			}
			else{
				HX_STACK_LINE(409)
				::openfl::_v2::display::BitmapData _g4 = ::openfl::_v2::display::BitmapData_obj::__new(this->barWidth,this->barHeight,true,fill,null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(409)
				filledBar = _g4;
			}
			HX_STACK_LINE(412)
			::flixel::FlxG_obj::bitmap->add(filledBar,false,filledKey);
		}
		HX_STACK_LINE(415)
		::flixel::graphics::FlxGraphic _g5 = ::flixel::FlxG_obj::bitmap->get(filledKey);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(415)
		::flixel::graphics::frames::FlxBarFrames _g6 = ::flixel::graphics::frames::FlxBarFrames_obj::fromGraphic(_g5,this->fillDirection,null(),null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(415)
		this->set_frontFrames(_g6);
		HX_STACK_LINE(431)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxBar_obj,createColoredFilledBar,return )

::flixel::ui::FlxBar FlxBar_obj::createGradientBar( Array< int > empty,Array< int > fill,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_showBorder,hx::Null< int >  __o_border){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(180);
bool showBorder = __o_showBorder.Default(false);
int border = __o_border.Default(-1);
	HX_STACK_FRAME("flixel.ui.FlxBar","createGradientBar",0x851ca162,"flixel.ui.FlxBar.createGradientBar","flixel/ui/FlxBar.hx",447,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(empty,"empty")
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(showBorder,"showBorder")
	HX_STACK_ARG(border,"border")
{
		HX_STACK_LINE(448)
		this->createGradientEmptyBar(empty,chunkSize,rotation,showBorder,border);
		HX_STACK_LINE(449)
		this->createGradientFilledBar(fill,chunkSize,rotation,showBorder,border);
		HX_STACK_LINE(450)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(FlxBar_obj,createGradientBar,return )

::flixel::ui::FlxBar FlxBar_obj::createGradientEmptyBar( Array< int > empty,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_showBorder,hx::Null< int >  __o_border){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(180);
bool showBorder = __o_showBorder.Default(false);
int border = __o_border.Default(-1);
	HX_STACK_FRAME("flixel.ui.FlxBar","createGradientEmptyBar",0x05ffcf57,"flixel.ui.FlxBar.createGradientEmptyBar","flixel/ui/FlxBar.hx",464,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(empty,"empty")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(showBorder,"showBorder")
	HX_STACK_ARG(border,"border")
{
		HX_STACK_LINE(466)
		int colA;		HX_STACK_VAR(colA,"colA");
		HX_STACK_LINE(467)
		int colRGB;		HX_STACK_VAR(colRGB,"colRGB");
		HX_STACK_LINE(469)
		::String emptyKey = ((((HX_CSTRING("Gradient:") + this->barWidth) + HX_CSTRING("x")) + this->barHeight) + HX_CSTRING(",colors:["));		HX_STACK_VAR(emptyKey,"emptyKey");
		HX_STACK_LINE(470)
		{
			HX_STACK_LINE(470)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(470)
			while((true)){
				HX_STACK_LINE(470)
				if ((!(((_g < empty->length))))){
					HX_STACK_LINE(470)
					break;
				}
				HX_STACK_LINE(470)
				int col = empty->__get(_g);		HX_STACK_VAR(col,"col");
				HX_STACK_LINE(470)
				++(_g);
				HX_STACK_LINE(472)
				colA = (int((int(col) >> int((int)24))) & int((int)255));
				HX_STACK_LINE(473)
				colRGB = (int(col) & int((int)16777215));
				HX_STACK_LINE(475)
				emptyKey = ((((emptyKey + colA) + HX_CSTRING(".")) + colRGB) + HX_CSTRING(","));
			}
		}
		HX_STACK_LINE(477)
		emptyKey = ((((emptyKey + HX_CSTRING("],chunkSize: ")) + chunkSize) + HX_CSTRING(",rotation: ")) + rotation);
		HX_STACK_LINE(479)
		if ((showBorder)){
			HX_STACK_LINE(481)
			int borderA = (int((int(border) >> int((int)24))) & int((int)255));		HX_STACK_VAR(borderA,"borderA");
			HX_STACK_LINE(482)
			int borderRGB = (int(border) & int((int)16777215));		HX_STACK_VAR(borderRGB,"borderRGB");
			HX_STACK_LINE(484)
			emptyKey = ((((emptyKey + HX_CSTRING(",border: ")) + borderA) + HX_CSTRING(".")) + borderRGB);
		}
		HX_STACK_LINE(487)
		bool _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(487)
		{
			HX_STACK_LINE(487)
			::flixel::system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(487)
			if ((_this->_cache->exists(emptyKey))){
				HX_STACK_LINE(487)
				::flixel::graphics::FlxGraphic _g = _this->_cache->get(emptyKey);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(487)
				_g1 = (_g != null());
			}
			else{
				HX_STACK_LINE(487)
				_g1 = false;
			}
		}
		HX_STACK_LINE(487)
		if (((_g1 == false))){
			HX_STACK_LINE(489)
			::openfl::_v2::display::BitmapData emptyBar = null();		HX_STACK_VAR(emptyBar,"emptyBar");
			HX_STACK_LINE(491)
			if ((showBorder)){
				HX_STACK_LINE(493)
				::openfl::_v2::display::BitmapData _g2 = ::openfl::_v2::display::BitmapData_obj::__new(this->barWidth,this->barHeight,true,border,null());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(493)
				emptyBar = _g2;
				HX_STACK_LINE(494)
				::flixel::util::FlxGradient_obj::overlayGradientOnBitmapData(emptyBar,(this->barWidth - (int)2),(this->barHeight - (int)2),empty,(int)1,(int)1,chunkSize,rotation,null());
			}
			else{
				HX_STACK_LINE(498)
				::openfl::_v2::display::BitmapData _g3 = ::flixel::util::FlxGradient_obj::createGradientBitmapData(this->barWidth,this->barHeight,empty,chunkSize,rotation,null());		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(498)
				emptyBar = _g3;
			}
			HX_STACK_LINE(501)
			::flixel::FlxG_obj::bitmap->add(emptyBar,false,emptyKey);
		}
		HX_STACK_LINE(504)
		::flixel::graphics::frames::FlxImageFrame _g4 = ::flixel::FlxG_obj::bitmap->get(emptyKey)->get_imageFrame();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(504)
		this->set_frames(_g4);
		HX_STACK_LINE(520)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxBar_obj,createGradientEmptyBar,return )

::flixel::ui::FlxBar FlxBar_obj::createGradientFilledBar( Array< int > fill,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_showBorder,hx::Null< int >  __o_border){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(180);
bool showBorder = __o_showBorder.Default(false);
int border = __o_border.Default(-1);
	HX_STACK_FRAME("flixel.ui.FlxBar","createGradientFilledBar",0xe12a9220,"flixel.ui.FlxBar.createGradientFilledBar","flixel/ui/FlxBar.hx",534,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(showBorder,"showBorder")
	HX_STACK_ARG(border,"border")
{
		HX_STACK_LINE(536)
		int colA;		HX_STACK_VAR(colA,"colA");
		HX_STACK_LINE(537)
		int colRGB;		HX_STACK_VAR(colRGB,"colRGB");
		HX_STACK_LINE(539)
		::String filledKey = ((((HX_CSTRING("Gradient:") + this->barWidth) + HX_CSTRING("x")) + this->barHeight) + HX_CSTRING(",colors:["));		HX_STACK_VAR(filledKey,"filledKey");
		HX_STACK_LINE(540)
		{
			HX_STACK_LINE(540)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(540)
			while((true)){
				HX_STACK_LINE(540)
				if ((!(((_g < fill->length))))){
					HX_STACK_LINE(540)
					break;
				}
				HX_STACK_LINE(540)
				int col = fill->__get(_g);		HX_STACK_VAR(col,"col");
				HX_STACK_LINE(540)
				++(_g);
				HX_STACK_LINE(542)
				colA = (int((int(col) >> int((int)24))) & int((int)255));
				HX_STACK_LINE(543)
				colRGB = (int(col) & int((int)16777215));
				HX_STACK_LINE(545)
				filledKey = ((((filledKey + colA) + HX_CSTRING("_")) + colRGB) + HX_CSTRING(","));
			}
		}
		HX_STACK_LINE(547)
		filledKey = ((((filledKey + HX_CSTRING("],chunkSize: ")) + chunkSize) + HX_CSTRING(",rotation: ")) + rotation);
		HX_STACK_LINE(549)
		if ((showBorder)){
			HX_STACK_LINE(551)
			int borderA = (int((int(border) >> int((int)24))) & int((int)255));		HX_STACK_VAR(borderA,"borderA");
			HX_STACK_LINE(552)
			int borderRGB = (int(border) & int((int)16777215));		HX_STACK_VAR(borderRGB,"borderRGB");
			HX_STACK_LINE(554)
			hx::AddEq(filledKey,(((HX_CSTRING(",border: ") + borderA) + HX_CSTRING(".")) + borderRGB));
		}
		HX_STACK_LINE(557)
		bool _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(557)
		{
			HX_STACK_LINE(557)
			::flixel::system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(557)
			if ((_this->_cache->exists(filledKey))){
				HX_STACK_LINE(557)
				::flixel::graphics::FlxGraphic _g = _this->_cache->get(filledKey);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(557)
				_g1 = (_g != null());
			}
			else{
				HX_STACK_LINE(557)
				_g1 = false;
			}
		}
		HX_STACK_LINE(557)
		if (((_g1 == false))){
			HX_STACK_LINE(559)
			::openfl::_v2::display::BitmapData filledBar = null();		HX_STACK_VAR(filledBar,"filledBar");
			HX_STACK_LINE(561)
			if ((showBorder)){
				HX_STACK_LINE(563)
				::openfl::_v2::display::BitmapData _g2 = ::openfl::_v2::display::BitmapData_obj::__new(this->barWidth,this->barHeight,true,border,null());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(563)
				filledBar = _g2;
				HX_STACK_LINE(564)
				::flixel::util::FlxGradient_obj::overlayGradientOnBitmapData(filledBar,(this->barWidth - (int)2),(this->barHeight - (int)2),fill,(int)1,(int)1,chunkSize,rotation,null());
			}
			else{
				HX_STACK_LINE(568)
				::openfl::_v2::display::BitmapData _g3 = ::flixel::util::FlxGradient_obj::createGradientBitmapData(this->barWidth,this->barHeight,fill,chunkSize,rotation,null());		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(568)
				filledBar = _g3;
			}
			HX_STACK_LINE(571)
			::flixel::FlxG_obj::bitmap->add(filledBar,false,filledKey);
		}
		HX_STACK_LINE(574)
		::flixel::graphics::FlxGraphic _g4 = ::flixel::FlxG_obj::bitmap->get(filledKey);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(574)
		::flixel::graphics::frames::FlxBarFrames _g5 = ::flixel::graphics::frames::FlxBarFrames_obj::fromGraphic(_g4,this->fillDirection,null(),null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(574)
		this->set_frontFrames(_g5);
		HX_STACK_LINE(590)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxBar_obj,createGradientFilledBar,return )

::flixel::ui::FlxBar FlxBar_obj::createImageBar( Dynamic empty,Dynamic fill,hx::Null< int >  __o_emptyBackground,hx::Null< int >  __o_fillBackground){
int emptyBackground = __o_emptyBackground.Default(-16777216);
int fillBackground = __o_fillBackground.Default(-16711936);
	HX_STACK_FRAME("flixel.ui.FlxBar","createImageBar",0xf0f89039,"flixel.ui.FlxBar.createImageBar","flixel/ui/FlxBar.hx",606,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(empty,"empty")
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(emptyBackground,"emptyBackground")
	HX_STACK_ARG(fillBackground,"fillBackground")
{
		HX_STACK_LINE(607)
		this->createImageEmptyBar(empty,emptyBackground);
		HX_STACK_LINE(608)
		this->createImageFilledBar(fill,fillBackground);
		HX_STACK_LINE(609)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBar_obj,createImageBar,return )

::flixel::ui::FlxBar FlxBar_obj::createImageEmptyBar( Dynamic empty,hx::Null< int >  __o_emptyBackground){
int emptyBackground = __o_emptyBackground.Default(-16777216);
	HX_STACK_FRAME("flixel.ui.FlxBar","createImageEmptyBar",0xa6dfb520,"flixel.ui.FlxBar.createImageEmptyBar","flixel/ui/FlxBar.hx",620,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(empty,"empty")
	HX_STACK_ARG(emptyBackground,"emptyBackground")
{
		HX_STACK_LINE(621)
		if (((empty != null()))){
			HX_STACK_LINE(623)
			::flixel::graphics::FlxGraphic emptyGraphic = ::flixel::FlxG_obj::bitmap->add(empty,null(),null());		HX_STACK_VAR(emptyGraphic,"emptyGraphic");
			HX_STACK_LINE(626)
			::flixel::graphics::frames::FlxImageFrame _g = emptyGraphic->get_imageFrame();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(626)
			this->set_frames(_g);
		}
		else{
			HX_STACK_LINE(645)
			this->createColoredEmptyBar(emptyBackground,null(),null());
		}
		HX_STACK_LINE(648)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBar_obj,createImageEmptyBar,return )

::flixel::ui::FlxBar FlxBar_obj::createImageFilledBar( Dynamic fill,hx::Null< int >  __o_fillBackground){
int fillBackground = __o_fillBackground.Default(-16711936);
	HX_STACK_FRAME("flixel.ui.FlxBar","createImageFilledBar",0x0433bc37,"flixel.ui.FlxBar.createImageFilledBar","flixel/ui/FlxBar.hx",659,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(fillBackground,"fillBackground")
{
		HX_STACK_LINE(660)
		if (((fill != null()))){
			HX_STACK_LINE(662)
			::flixel::graphics::FlxGraphic filledGraphic = ::flixel::FlxG_obj::bitmap->add(fill,null(),null());		HX_STACK_VAR(filledGraphic,"filledGraphic");
			HX_STACK_LINE(665)
			::flixel::graphics::frames::FlxBarFrames _g = ::flixel::graphics::frames::FlxBarFrames_obj::fromGraphic(filledGraphic,this->fillDirection,null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(665)
			this->set_frontFrames(_g);
		}
		else{
			HX_STACK_LINE(682)
			this->createColoredFilledBar(fillBackground,null(),null());
		}
		HX_STACK_LINE(685)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBar_obj,createImageFilledBar,return )

::flixel::ui::FlxBarFillDirection FlxBar_obj::set_fillDirection( ::flixel::ui::FlxBarFillDirection direction){
	HX_STACK_FRAME("flixel.ui.FlxBar","set_fillDirection",0x7ac2afda,"flixel.ui.FlxBar.set_fillDirection","flixel/ui/FlxBar.hx",689,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(direction,"direction")
	HX_STACK_LINE(690)
	this->fillDirection = direction;
	HX_STACK_LINE(692)
	switch( (int)(direction->__Index())){
		case (int)0: case (int)1: case (int)4: case (int)5: {
			HX_STACK_LINE(695)
			this->_fillHorizontal = true;
		}
		;break;
		case (int)2: case (int)3: case (int)6: case (int)7: {
			HX_STACK_LINE(698)
			this->_fillHorizontal = false;
		}
		;break;
	}
	HX_STACK_LINE(702)
	::flixel::graphics::frames::FlxBarFrames _g = this->get_frontFrames();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(702)
	if (((_g != null()))){
		HX_STACK_LINE(704)
		::flixel::graphics::frames::FlxBarFrames _g1 = this->get_frontFrames()->changeType(this->fillDirection);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(704)
		this->set_frontFrames(_g1);
	}
	HX_STACK_LINE(708)
	return this->fillDirection;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,set_fillDirection,return )

Void FlxBar_obj::updateValueFromParent( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","updateValueFromParent",0x9d60d3b7,"flixel.ui.FlxBar.updateValueFromParent","flixel/ui/FlxBar.hx",712,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(713)
		Dynamic _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(713)
		{
			HX_STACK_LINE(713)
			Dynamic o = this->parent;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(713)
			if (((o == null()))){
				HX_STACK_LINE(713)
				_g = null();
			}
			else{
				HX_STACK_LINE(713)
				_g = o->__Field(this->parentVariable,true);
			}
		}
		HX_STACK_LINE(713)
		this->set_value(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,updateValueFromParent,(void))

Void FlxBar_obj::updateBar( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","updateBar",0x52521d85,"flixel.ui.FlxBar.updateBar","flixel/ui/FlxBar.hx",721,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(722)
		this->updateEmptyBar();
		HX_STACK_LINE(723)
		this->updateFilledBar();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,updateBar,(void))

Void FlxBar_obj::updateEmptyBar( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","updateEmptyBar",0x77e67454,"flixel.ui.FlxBar.updateEmptyBar","flixel/ui/FlxBar.hx",730,0x9c56c8d5)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,updateEmptyBar,(void))

Void FlxBar_obj::updateFilledBar( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","updateFilledBar",0x19144a83,"flixel.ui.FlxBar.updateFilledBar","flixel/ui/FlxBar.hx",742,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(791)
		::flixel::graphics::frames::FlxBarFrames _g = this->get_frontFrames();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(791)
		if (((_g != null()))){
			HX_STACK_LINE(793)
			Float _g1 = this->get_percent();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(793)
			int prct = ::Std_obj::_int(_g1);		HX_STACK_VAR(prct,"prct");
			HX_STACK_LINE(794)
			if (((prct > (int)0))){
				HX_STACK_LINE(796)
				::flixel::graphics::frames::FlxFrame _g2 = this->_front->set_frame(this->get_frontFrames()->frames->__get((prct - (int)1)).StaticCast< ::flixel::graphics::frames::FlxFrame >());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(796)
				this->_frontFrame = _g2;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,updateFilledBar,(void))

Void FlxBar_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","update",0xdbe594ee,"flixel.ui.FlxBar.update","flixel/ui/FlxBar.hx",803,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(804)
		if (((this->parent != null()))){
			HX_STACK_LINE(806)
			Dynamic _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(806)
			{
				HX_STACK_LINE(806)
				Dynamic o = this->parent;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(806)
				if (((o == null()))){
					HX_STACK_LINE(806)
					_g = null();
				}
				else{
					HX_STACK_LINE(806)
					_g = o->__Field(this->parentVariable,true);
				}
			}
			HX_STACK_LINE(806)
			Float _g1 = this->get_value();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(806)
			if (((_g != _g1))){
				HX_STACK_LINE(808)
				this->updateValueFromParent();
			}
			HX_STACK_LINE(811)
			if (((this->fixedPosition == false))){
				HX_STACK_LINE(813)
				this->set_x((this->parent->__Field(HX_CSTRING("x"),true) + this->positionOffset->x));
				HX_STACK_LINE(814)
				this->set_y((this->parent->__Field(HX_CSTRING("y"),true) + this->positionOffset->y));
			}
		}
		HX_STACK_LINE(818)
		this->super::update(elapsed);
	}
return null();
}


Void FlxBar_obj::draw( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","draw",0x9cd647a9,"flixel.ui.FlxBar.draw","flixel/ui/FlxBar.hx",823,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(824)
		this->super::draw();
		HX_STACK_LINE(826)
		if (((this->alpha == (int)0))){
			HX_STACK_LINE(828)
			return null();
		}
		HX_STACK_LINE(831)
		Float _g = this->get_percent();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(831)
		if (((  (((_g > (int)0))) ? bool((this->_frontFrame->type != (int)2)) : bool(false) ))){
			HX_STACK_LINE(833)
			::flixel::graphics::tile::FlxDrawStackItem drawItem;		HX_STACK_VAR(drawItem,"drawItem");
			HX_STACK_LINE(835)
			Float ox = this->origin->x;		HX_STACK_VAR(ox,"ox");
			HX_STACK_LINE(836)
			if (((this->_facingHorizontalMult != (int)1))){
				HX_STACK_LINE(838)
				ox = (this->frameWidth - ox);
			}
			HX_STACK_LINE(840)
			Float oy = this->origin->y;		HX_STACK_VAR(oy,"oy");
			HX_STACK_LINE(841)
			if (((this->_facingVerticalMult != (int)1))){
				HX_STACK_LINE(843)
				oy = (this->frameHeight - oy);
			}
			HX_STACK_LINE(846)
			{
				HX_STACK_LINE(846)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(846)
				Array< ::Dynamic > _g11 = this->get_cameras();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(846)
				while((true)){
					HX_STACK_LINE(846)
					if ((!(((_g1 < _g11->length))))){
						HX_STACK_LINE(846)
						break;
					}
					HX_STACK_LINE(846)
					::flixel::FlxCamera camera = _g11->__get(_g1).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
					HX_STACK_LINE(846)
					++(_g1);
					HX_STACK_LINE(848)
					if (((  ((!(((bool(!(camera->visible)) || bool(!(camera->exists))))))) ? bool(!(this->isOnScreen(camera))) : bool(true) ))){
						HX_STACK_LINE(850)
						continue;
					}
					HX_STACK_LINE(853)
					this->getScreenPosition(this->_point,camera)->subtractPoint(this->offset);
					HX_STACK_LINE(855)
					::flixel::graphics::tile::FlxDrawStackItem _g12 = camera->getDrawStackItem(this->_front->graphic,this->isColored,this->_blendInt,this->antialiasing);		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(855)
					drawItem = _g12;
					HX_STACK_LINE(857)
					this->_matrix->identity();
					HX_STACK_LINE(859)
					if (((this->_frontFrame->angle != (int)0))){
						HX_STACK_LINE(862)
						this->_frontFrame->prepareFrameMatrix(this->_matrix);
					}
					HX_STACK_LINE(865)
					Float x1 = (ox - this->_frontFrame->center->x);		HX_STACK_VAR(x1,"x1");
					HX_STACK_LINE(866)
					Float y1 = (oy - this->_frontFrame->center->y);		HX_STACK_VAR(y1,"y1");
					HX_STACK_LINE(867)
					this->_matrix->translate(x1,y1);
					HX_STACK_LINE(869)
					Float sx = (this->scale->x * this->_facingHorizontalMult);		HX_STACK_VAR(sx,"sx");
					HX_STACK_LINE(870)
					Float sy = (this->scale->y * this->_facingVerticalMult);		HX_STACK_VAR(sy,"sy");
					HX_STACK_LINE(871)
					this->_matrix->scale((sx * camera->totalScaleX),(sy * camera->totalScaleY));
					HX_STACK_LINE(874)
					if (((this->angle != (int)0))){
						HX_STACK_LINE(876)
						::flixel::math::FlxMatrix _this = this->_matrix;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(876)
						Float cos = this->_cosAngle;		HX_STACK_VAR(cos,"cos");
						HX_STACK_LINE(876)
						Float sin = this->_sinAngle;		HX_STACK_VAR(sin,"sin");
						HX_STACK_LINE(876)
						Float a1 = ((_this->a * cos) - (_this->b * sin));		HX_STACK_VAR(a1,"a1");
						HX_STACK_LINE(876)
						_this->b = ((_this->a * sin) + (_this->b * cos));
						HX_STACK_LINE(876)
						_this->a = a1;
						HX_STACK_LINE(876)
						Float c1 = ((_this->c * cos) - (_this->d * sin));		HX_STACK_VAR(c1,"c1");
						HX_STACK_LINE(876)
						_this->d = ((_this->c * sin) + (_this->d * cos));
						HX_STACK_LINE(876)
						_this->c = c1;
						HX_STACK_LINE(876)
						Float tx1 = ((_this->tx * cos) - (_this->ty * sin));		HX_STACK_VAR(tx1,"tx1");
						HX_STACK_LINE(876)
						_this->ty = ((_this->tx * sin) + (_this->ty * cos));
						HX_STACK_LINE(876)
						_this->tx = tx1;
						HX_STACK_LINE(876)
						_this;
					}
					HX_STACK_LINE(879)
					this->_point->addPoint(this->origin);
					HX_STACK_LINE(881)
					{
						HX_STACK_LINE(881)
						::flixel::math::FlxPoint _g2 = this->_point;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(881)
						_g2->set_x((_g2->x * camera->totalScaleX));
					}
					HX_STACK_LINE(882)
					{
						HX_STACK_LINE(882)
						::flixel::math::FlxPoint _g2 = this->_point;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(882)
						_g2->set_y((_g2->y * camera->totalScaleY));
					}
					HX_STACK_LINE(884)
					if ((this->isPixelPerfectRender(camera))){
						HX_STACK_LINE(886)
						::flixel::math::FlxPoint _this = this->_point;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(886)
						int _g2 = ::Math_obj::floor(_this->x);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(886)
						_this->set_x(_g2);
						HX_STACK_LINE(886)
						int _g3 = ::Math_obj::floor(_this->y);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(886)
						_this->set_y(_g3);
						HX_STACK_LINE(886)
						_this;
					}
					HX_STACK_LINE(889)
					{
						HX_STACK_LINE(889)
						::flixel::math::FlxPoint _this = this->_point;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(889)
						{
							HX_STACK_LINE(889)
							::flixel::math::FlxPoint _g2 = _this;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(889)
							_g2->set_x((_g2->x - this->_matrix->tx));
						}
						HX_STACK_LINE(889)
						{
							HX_STACK_LINE(889)
							::flixel::math::FlxPoint _g2 = _this;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(889)
							_g2->set_y((_g2->y - this->_matrix->ty));
						}
						HX_STACK_LINE(889)
						_this;
					}
					HX_STACK_LINE(891)
					{
						HX_STACK_LINE(891)
						::openfl::_v2::geom::Matrix matrix = this->_matrix;		HX_STACK_VAR(matrix,"matrix");
						HX_STACK_LINE(891)
						Dynamic tileID = this->_frontFrame->tileID;		HX_STACK_VAR(tileID,"tileID");
						HX_STACK_LINE(891)
						{
							HX_STACK_LINE(891)
							::flixel::math::FlxPoint coordinate = this->_point;		HX_STACK_VAR(coordinate,"coordinate");
							HX_STACK_LINE(891)
							int color = this->color;		HX_STACK_VAR(color,"color");
							HX_STACK_LINE(891)
							int _g4 = (drawItem->position)++;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(891)
							drawItem->drawData[_g4] = coordinate->x;
							HX_STACK_LINE(891)
							int _g5 = (drawItem->position)++;		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(891)
							drawItem->drawData[_g5] = coordinate->y;
							HX_STACK_LINE(891)
							int _g6 = (drawItem->position)++;		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(891)
							if (((tileID == null()))){
								HX_STACK_LINE(891)
								drawItem->drawData[_g6] = this->frame->tileID;
							}
							else{
								HX_STACK_LINE(891)
								drawItem->drawData[_g6] = tileID;
							}
							HX_STACK_LINE(891)
							int _g7 = (drawItem->position)++;		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(891)
							drawItem->drawData[_g7] = matrix->a;
							HX_STACK_LINE(891)
							int _g8 = (drawItem->position)++;		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(891)
							drawItem->drawData[_g8] = matrix->b;
							HX_STACK_LINE(891)
							int _g9 = (drawItem->position)++;		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(891)
							drawItem->drawData[_g9] = matrix->c;
							HX_STACK_LINE(891)
							int _g10 = (drawItem->position)++;		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(891)
							drawItem->drawData[_g10] = matrix->d;
							HX_STACK_LINE(891)
							if ((this->isColored)){
								HX_STACK_LINE(891)
								int _g111 = (drawItem->position)++;		HX_STACK_VAR(_g111,"_g111");
								HX_STACK_LINE(891)
								drawItem->drawData[_g111] = (Float(((int((int(color) >> int((int)16))) & int((int)255)))) / Float((int)255));
								HX_STACK_LINE(891)
								int _g121 = (drawItem->position)++;		HX_STACK_VAR(_g121,"_g121");
								HX_STACK_LINE(891)
								drawItem->drawData[_g121] = (Float(((int((int(color) >> int((int)8))) & int((int)255)))) / Float((int)255));
								HX_STACK_LINE(891)
								int _g13 = (drawItem->position)++;		HX_STACK_VAR(_g13,"_g13");
								HX_STACK_LINE(891)
								drawItem->drawData[_g13] = (Float(((int(color) & int((int)255)))) / Float((int)255));
							}
							HX_STACK_LINE(891)
							int _g14 = (drawItem->position)++;		HX_STACK_VAR(_g14,"_g14");
							HX_STACK_LINE(891)
							drawItem->drawData[_g14] = (this->alpha * camera->alpha);
							HX_STACK_LINE(891)
							if ((coordinate->_weak)){
								HX_STACK_LINE(891)
								coordinate->put();
							}
						}
					}
				}
			}
		}
	}
return null();
}


::openfl::_v2::display::BitmapData FlxBar_obj::set_pixels( ::openfl::_v2::display::BitmapData Pixels){
	HX_STACK_FRAME("flixel.ui.FlxBar","set_pixels",0x3c70e2cf,"flixel.ui.FlxBar.set_pixels","flixel/ui/FlxBar.hx",898,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Pixels,"Pixels")
	HX_STACK_LINE(898)
	return Pixels;
}


::String FlxBar_obj::toString( ){
	HX_STACK_FRAME("flixel.ui.FlxBar","toString",0x909c22d1,"flixel.ui.FlxBar.toString","flixel/ui/FlxBar.hx",903,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(905)
	::flixel::util::LabelValuePair _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(905)
	{
		HX_STACK_LINE(905)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(905)
		_this->label = HX_CSTRING("min");
		HX_STACK_LINE(905)
		_this->value = this->min;
		HX_STACK_LINE(905)
		_g = _this;
	}
	HX_STACK_LINE(906)
	::flixel::util::LabelValuePair _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(906)
	{
		HX_STACK_LINE(906)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(906)
		_this->label = HX_CSTRING("max");
		HX_STACK_LINE(906)
		_this->value = this->max;
		HX_STACK_LINE(906)
		_g1 = _this;
	}
	HX_STACK_LINE(907)
	::flixel::util::LabelValuePair _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(907)
	{
		HX_STACK_LINE(907)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(907)
		_this->label = HX_CSTRING("range");
		HX_STACK_LINE(907)
		_this->value = this->range;
		HX_STACK_LINE(907)
		_g2 = _this;
	}
	HX_STACK_LINE(908)
	::flixel::util::LabelValuePair _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(908)
	{
		HX_STACK_LINE(908)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(908)
		_this->label = HX_CSTRING("%");
		HX_STACK_LINE(908)
		_this->value = this->pct;
		HX_STACK_LINE(908)
		_g3 = _this;
	}
	HX_STACK_LINE(909)
	::flixel::util::LabelValuePair _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(909)
	{
		HX_STACK_LINE(909)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(909)
		_this->label = HX_CSTRING("px/%");
		HX_STACK_LINE(909)
		_this->value = this->pxPerPercent;
		HX_STACK_LINE(909)
		_g4 = _this;
	}
	HX_STACK_LINE(910)
	::flixel::util::LabelValuePair _g5;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(910)
	{
		HX_STACK_LINE(910)
		Dynamic value = this->get_value();		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(910)
		{
			HX_STACK_LINE(910)
			::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(910)
			_this->label = HX_CSTRING("value");
			HX_STACK_LINE(910)
			_this->value = value;
			HX_STACK_LINE(910)
			_g5 = _this;
		}
	}
	HX_STACK_LINE(904)
	Array< ::Dynamic > _g6 = Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1).Add(_g2).Add(_g3).Add(_g4).Add(_g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(904)
	return ::flixel::util::FlxStringUtil_obj::getDebugString(_g6);
}


Float FlxBar_obj::get_percent( ){
	HX_STACK_FRAME("flixel.ui.FlxBar","get_percent",0x8cbbddd7,"flixel.ui.FlxBar.get_percent","flixel/ui/FlxBar.hx",914,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(922)
	Float _g = this->get_value();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(922)
	if (((_g > this->max))){
		HX_STACK_LINE(924)
		return (int)100;
	}
	HX_STACK_LINE(927)
	Float _g1 = this->get_value();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(927)
	Float _g2 = (Float(_g1) / Float(this->range));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(927)
	Float _g3 = (_g2 * (int)100);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(927)
	return ::Math_obj::floor(_g3);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,get_percent,return )

Float FlxBar_obj::set_percent( Float newPct){
	HX_STACK_FRAME("flixel.ui.FlxBar","set_percent",0x9728e4e3,"flixel.ui.FlxBar.set_percent","flixel/ui/FlxBar.hx",931,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newPct,"newPct")
	HX_STACK_LINE(932)
	if (((bool((newPct >= (int)0)) && bool((newPct <= (int)100))))){
		HX_STACK_LINE(934)
		this->set_value((this->pct * newPct));
	}
	HX_STACK_LINE(936)
	return newPct;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,set_percent,return )

Float FlxBar_obj::set_value( Float newValue){
	HX_STACK_FRAME("flixel.ui.FlxBar","set_value",0x282d560f,"flixel.ui.FlxBar.set_value","flixel/ui/FlxBar.hx",940,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newValue,"newValue")
	HX_STACK_LINE(941)
	Float _g = ::Math_obj::min(newValue,this->max);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(941)
	Float _g1 = ::Math_obj::max(this->min,_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(941)
	this->value = _g1;
	HX_STACK_LINE(943)
	Float _g2 = this->get_value();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(943)
	if (((  (((_g2 == this->min))) ? bool((this->emptyCallback_dyn() != null())) : bool(false) ))){
		HX_STACK_LINE(945)
		this->emptyCallback();
	}
	HX_STACK_LINE(948)
	Float _g3 = this->get_value();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(948)
	if (((  (((_g3 == this->max))) ? bool((this->filledCallback_dyn() != null())) : bool(false) ))){
		HX_STACK_LINE(950)
		this->filledCallback();
	}
	HX_STACK_LINE(953)
	Float _g4 = this->get_value();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(953)
	if (((  (((_g4 == this->min))) ? bool(this->killOnEmpty) : bool(false) ))){
		HX_STACK_LINE(955)
		this->kill();
	}
	HX_STACK_LINE(958)
	this->updateBar();
	HX_STACK_LINE(959)
	return newValue;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,set_value,return )

Float FlxBar_obj::get_value( ){
	HX_STACK_FRAME("flixel.ui.FlxBar","get_value",0x44dc6a03,"flixel.ui.FlxBar.get_value","flixel/ui/FlxBar.hx",964,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(964)
	return this->value;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,get_value,return )

::flixel::graphics::frames::FlxBarFrames FlxBar_obj::get_frontFrames( ){
	HX_STACK_FRAME("flixel.ui.FlxBar","get_frontFrames",0xa222c541,"flixel.ui.FlxBar.get_frontFrames","flixel/ui/FlxBar.hx",968,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(970)
	if (((bool((this->_front != null())) && bool((this->_front->frames != null()))))){
		HX_STACK_LINE(972)
		return hx::TCast< flixel::graphics::frames::FlxBarFrames >::cast(this->_front->frames);
	}
	HX_STACK_LINE(976)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,get_frontFrames,return )

::flixel::graphics::frames::FlxBarFrames FlxBar_obj::set_frontFrames( ::flixel::graphics::frames::FlxBarFrames value){
	HX_STACK_FRAME("flixel.ui.FlxBar","set_frontFrames",0x9dee424d,"flixel.ui.FlxBar.set_frontFrames","flixel/ui/FlxBar.hx",980,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(982)
	if (((this->_front != null()))){
		HX_STACK_LINE(984)
		this->_front->set_frames(value);
		HX_STACK_LINE(985)
		this->_frontFrame = this->_front->frame;
	}
	HX_STACK_LINE(991)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,set_frontFrames,return )


FlxBar_obj::FlxBar_obj()
{
}

void FlxBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBar);
	HX_MARK_MEMBER_NAME(fixedPosition,"fixedPosition");
	HX_MARK_MEMBER_NAME(pxPerPercent,"pxPerPercent");
	HX_MARK_MEMBER_NAME(positionOffset,"positionOffset");
	HX_MARK_MEMBER_NAME(killOnEmpty,"killOnEmpty");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(min,"min");
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_MEMBER_NAME(range,"range");
	HX_MARK_MEMBER_NAME(pct,"pct");
	HX_MARK_MEMBER_NAME(emptyCallback,"emptyCallback");
	HX_MARK_MEMBER_NAME(filledCallback,"filledCallback");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(parentVariable,"parentVariable");
	HX_MARK_MEMBER_NAME(barWidth,"barWidth");
	HX_MARK_MEMBER_NAME(barHeight,"barHeight");
	HX_MARK_MEMBER_NAME(fillDirection,"fillDirection");
	HX_MARK_MEMBER_NAME(_fillHorizontal,"_fillHorizontal");
	HX_MARK_MEMBER_NAME(_front,"_front");
	HX_MARK_MEMBER_NAME(_frontFrame,"_frontFrame");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fixedPosition,"fixedPosition");
	HX_VISIT_MEMBER_NAME(pxPerPercent,"pxPerPercent");
	HX_VISIT_MEMBER_NAME(positionOffset,"positionOffset");
	HX_VISIT_MEMBER_NAME(killOnEmpty,"killOnEmpty");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(min,"min");
	HX_VISIT_MEMBER_NAME(max,"max");
	HX_VISIT_MEMBER_NAME(range,"range");
	HX_VISIT_MEMBER_NAME(pct,"pct");
	HX_VISIT_MEMBER_NAME(emptyCallback,"emptyCallback");
	HX_VISIT_MEMBER_NAME(filledCallback,"filledCallback");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(parentVariable,"parentVariable");
	HX_VISIT_MEMBER_NAME(barWidth,"barWidth");
	HX_VISIT_MEMBER_NAME(barHeight,"barHeight");
	HX_VISIT_MEMBER_NAME(fillDirection,"fillDirection");
	HX_VISIT_MEMBER_NAME(_fillHorizontal,"_fillHorizontal");
	HX_VISIT_MEMBER_NAME(_front,"_front");
	HX_VISIT_MEMBER_NAME(_frontFrame,"_frontFrame");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxBar_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return min; }
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
		if (HX_FIELD_EQ(inName,"pct") ) { return pct; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return inCallProp ? get_value() : value; }
		if (HX_FIELD_EQ(inName,"range") ) { return range; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"_front") ) { return _front; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"percent") ) { return get_percent(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"barWidth") ) { return barWidth; }
		if (HX_FIELD_EQ(inName,"setRange") ) { return setRange_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"barHeight") ) { return barHeight; }
		if (HX_FIELD_EQ(inName,"setParent") ) { return setParent_dyn(); }
		if (HX_FIELD_EQ(inName,"updateBar") ) { return updateBar_dyn(); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return set_value_dyn(); }
		if (HX_FIELD_EQ(inName,"get_value") ) { return get_value_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_pixels") ) { return set_pixels_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"killOnEmpty") ) { return killOnEmpty; }
		if (HX_FIELD_EQ(inName,"frontFrames") ) { return get_frontFrames(); }
		if (HX_FIELD_EQ(inName,"_frontFrame") ) { return _frontFrame; }
		if (HX_FIELD_EQ(inName,"trackParent") ) { return trackParent_dyn(); }
		if (HX_FIELD_EQ(inName,"get_percent") ) { return get_percent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_percent") ) { return set_percent_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pxPerPercent") ) { return pxPerPercent; }
		if (HX_FIELD_EQ(inName,"setCallbacks") ) { return setCallbacks_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fixedPosition") ) { return fixedPosition; }
		if (HX_FIELD_EQ(inName,"emptyCallback") ) { return emptyCallback; }
		if (HX_FIELD_EQ(inName,"fillDirection") ) { return fillDirection; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"positionOffset") ) { return positionOffset; }
		if (HX_FIELD_EQ(inName,"filledCallback") ) { return filledCallback; }
		if (HX_FIELD_EQ(inName,"parentVariable") ) { return parentVariable; }
		if (HX_FIELD_EQ(inName,"createImageBar") ) { return createImageBar_dyn(); }
		if (HX_FIELD_EQ(inName,"updateEmptyBar") ) { return updateEmptyBar_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fillHorizontal") ) { return _fillHorizontal; }
		if (HX_FIELD_EQ(inName,"createFilledBar") ) { return createFilledBar_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFilledBar") ) { return updateFilledBar_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frontFrames") ) { return get_frontFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frontFrames") ) { return set_frontFrames_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createGradientBar") ) { return createGradientBar_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fillDirection") ) { return set_fillDirection_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stopTrackingParent") ) { return stopTrackingParent_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"createImageEmptyBar") ) { return createImageEmptyBar_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createImageFilledBar") ) { return createImageFilledBar_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createColoredEmptyBar") ) { return createColoredEmptyBar_dyn(); }
		if (HX_FIELD_EQ(inName,"updateValueFromParent") ) { return updateValueFromParent_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createColoredFilledBar") ) { return createColoredFilledBar_dyn(); }
		if (HX_FIELD_EQ(inName,"createGradientEmptyBar") ) { return createGradientEmptyBar_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"createGradientFilledBar") ) { return createGradientFilledBar_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBar_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { min=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pct") ) { pct=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp) return set_value(inValue);value=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"range") ) { range=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_front") ) { _front=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"percent") ) { return set_percent(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"barWidth") ) { barWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"barHeight") ) { barHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"killOnEmpty") ) { killOnEmpty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frontFrames") ) { return set_frontFrames(inValue); }
		if (HX_FIELD_EQ(inName,"_frontFrame") ) { _frontFrame=inValue.Cast< ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pxPerPercent") ) { pxPerPercent=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fixedPosition") ) { fixedPosition=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emptyCallback") ) { emptyCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fillDirection") ) { if (inCallProp) return set_fillDirection(inValue);fillDirection=inValue.Cast< ::flixel::ui::FlxBarFillDirection >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"positionOffset") ) { positionOffset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filledCallback") ) { filledCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parentVariable") ) { parentVariable=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fillHorizontal") ) { _fillHorizontal=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("fixedPosition"));
	outFields->push(HX_CSTRING("pxPerPercent"));
	outFields->push(HX_CSTRING("positionOffset"));
	outFields->push(HX_CSTRING("killOnEmpty"));
	outFields->push(HX_CSTRING("percent"));
	outFields->push(HX_CSTRING("value"));
	outFields->push(HX_CSTRING("min"));
	outFields->push(HX_CSTRING("max"));
	outFields->push(HX_CSTRING("range"));
	outFields->push(HX_CSTRING("pct"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("parentVariable"));
	outFields->push(HX_CSTRING("barWidth"));
	outFields->push(HX_CSTRING("barHeight"));
	outFields->push(HX_CSTRING("frontFrames"));
	outFields->push(HX_CSTRING("fillDirection"));
	outFields->push(HX_CSTRING("_fillHorizontal"));
	outFields->push(HX_CSTRING("_front"));
	outFields->push(HX_CSTRING("_frontFrame"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxBar_obj,fixedPosition),HX_CSTRING("fixedPosition")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,pxPerPercent),HX_CSTRING("pxPerPercent")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxBar_obj,positionOffset),HX_CSTRING("positionOffset")},
	{hx::fsBool,(int)offsetof(FlxBar_obj,killOnEmpty),HX_CSTRING("killOnEmpty")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,value),HX_CSTRING("value")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,min),HX_CSTRING("min")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,max),HX_CSTRING("max")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,range),HX_CSTRING("range")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,pct),HX_CSTRING("pct")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxBar_obj,emptyCallback),HX_CSTRING("emptyCallback")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxBar_obj,filledCallback),HX_CSTRING("filledCallback")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxBar_obj,parent),HX_CSTRING("parent")},
	{hx::fsString,(int)offsetof(FlxBar_obj,parentVariable),HX_CSTRING("parentVariable")},
	{hx::fsInt,(int)offsetof(FlxBar_obj,barWidth),HX_CSTRING("barWidth")},
	{hx::fsInt,(int)offsetof(FlxBar_obj,barHeight),HX_CSTRING("barHeight")},
	{hx::fsObject /*::flixel::ui::FlxBarFillDirection*/ ,(int)offsetof(FlxBar_obj,fillDirection),HX_CSTRING("fillDirection")},
	{hx::fsBool,(int)offsetof(FlxBar_obj,_fillHorizontal),HX_CSTRING("_fillHorizontal")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxBar_obj,_front),HX_CSTRING("_front")},
	{hx::fsObject /*::flixel::graphics::frames::FlxFrame*/ ,(int)offsetof(FlxBar_obj,_frontFrame),HX_CSTRING("_frontFrame")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("fixedPosition"),
	HX_CSTRING("pxPerPercent"),
	HX_CSTRING("positionOffset"),
	HX_CSTRING("killOnEmpty"),
	HX_CSTRING("value"),
	HX_CSTRING("min"),
	HX_CSTRING("max"),
	HX_CSTRING("range"),
	HX_CSTRING("pct"),
	HX_CSTRING("emptyCallback"),
	HX_CSTRING("filledCallback"),
	HX_CSTRING("parent"),
	HX_CSTRING("parentVariable"),
	HX_CSTRING("barWidth"),
	HX_CSTRING("barHeight"),
	HX_CSTRING("fillDirection"),
	HX_CSTRING("_fillHorizontal"),
	HX_CSTRING("_front"),
	HX_CSTRING("_frontFrame"),
	HX_CSTRING("destroy"),
	HX_CSTRING("trackParent"),
	HX_CSTRING("setParent"),
	HX_CSTRING("stopTrackingParent"),
	HX_CSTRING("setCallbacks"),
	HX_CSTRING("setRange"),
	HX_CSTRING("createFilledBar"),
	HX_CSTRING("createColoredEmptyBar"),
	HX_CSTRING("createColoredFilledBar"),
	HX_CSTRING("createGradientBar"),
	HX_CSTRING("createGradientEmptyBar"),
	HX_CSTRING("createGradientFilledBar"),
	HX_CSTRING("createImageBar"),
	HX_CSTRING("createImageEmptyBar"),
	HX_CSTRING("createImageFilledBar"),
	HX_CSTRING("set_fillDirection"),
	HX_CSTRING("updateValueFromParent"),
	HX_CSTRING("updateBar"),
	HX_CSTRING("updateEmptyBar"),
	HX_CSTRING("updateFilledBar"),
	HX_CSTRING("update"),
	HX_CSTRING("draw"),
	HX_CSTRING("set_pixels"),
	HX_CSTRING("toString"),
	HX_CSTRING("get_percent"),
	HX_CSTRING("set_percent"),
	HX_CSTRING("set_value"),
	HX_CSTRING("get_value"),
	HX_CSTRING("get_frontFrames"),
	HX_CSTRING("set_frontFrames"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBar_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBar_obj::__mClass,"__mClass");
};

#endif

Class FlxBar_obj::__mClass;

void FlxBar_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.ui.FlxBar"), hx::TCanCast< FlxBar_obj> ,sStaticFields,sMemberFields,
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

void FlxBar_obj::__boot()
{
}

} // end namespace flixel
} // end namespace ui
