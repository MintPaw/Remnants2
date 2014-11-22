#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxBarFrames
#include <flixel/graphics/frames/FlxBarFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxEmptyFrame
#include <flixel/graphics/frames/FlxEmptyFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrameCollectionType
#include <flixel/graphics/frames/FlxFrameCollectionType.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
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
#ifndef INCLUDED_flixel_ui_FlxBarFillDirection
#include <flixel/ui/FlxBarFillDirection.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
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
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
namespace flixel{
namespace graphics{
namespace frames{

Void FlxBarFrames_obj::__construct(::flixel::graphics::FlxGraphic parent,::flixel::ui::FlxBarFillDirection barType)
{
HX_STACK_FRAME("flixel.graphics.frames.FlxBarFrames","new",0xa6faef10,"flixel.graphics.frames.FlxBarFrames.new","flixel/graphics/frames/FlxBarFrames.hx",34,0x30732b5f)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
HX_STACK_ARG(barType,"barType")
{
	HX_STACK_LINE(35)
	::flixel::graphics::frames::FlxFrameCollectionType _g = ::flixel::graphics::frames::FlxFrameCollectionType_obj::BAR(barType);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(35)
	super::__construct(parent,_g);
	HX_STACK_LINE(36)
	this->barType = barType;
}
;
	return null();
}

//FlxBarFrames_obj::~FlxBarFrames_obj() { }

Dynamic FlxBarFrames_obj::__CreateEmpty() { return  new FlxBarFrames_obj; }
hx::ObjectPtr< FlxBarFrames_obj > FlxBarFrames_obj::__new(::flixel::graphics::FlxGraphic parent,::flixel::ui::FlxBarFillDirection barType)
{  hx::ObjectPtr< FlxBarFrames_obj > result = new FlxBarFrames_obj();
	result->__construct(parent,barType);
	return result;}

Dynamic FlxBarFrames_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBarFrames_obj > result = new FlxBarFrames_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::flixel::graphics::frames::FlxBarFrames FlxBarFrames_obj::changeType( ::flixel::ui::FlxBarFillDirection barType){
	HX_STACK_FRAME("flixel.graphics.frames.FlxBarFrames","changeType",0xef993f9a,"flixel.graphics.frames.FlxBarFrames.changeType","flixel/graphics/frames/FlxBarFrames.hx",46,0x30732b5f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(barType,"barType")
	HX_STACK_LINE(47)
	if (((this->barType == barType))){
		HX_STACK_LINE(49)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(52)
	if (((this->atlasFrame != null()))){
		HX_STACK_LINE(54)
		return ::flixel::graphics::frames::FlxBarFrames_obj::fromFrame(this->atlasFrame,barType,this->frames->length);
	}
	HX_STACK_LINE(57)
	return ::flixel::graphics::frames::FlxBarFrames_obj::fromGraphic(this->parent,barType,this->frames->length,this->region);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBarFrames_obj,changeType,return )

::openfl::_v2::display::BitmapData FlxBarFrames_obj::getFilledBitmap( ){
	HX_STACK_FRAME("flixel.graphics.frames.FlxBarFrames","getFilledBitmap",0x4ac93397,"flixel.graphics.frames.FlxBarFrames.getFilledBitmap","flixel/graphics/frames/FlxBarFrames.hx",64,0x30732b5f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(65)
	if (((this->atlasFrame != null()))){
		HX_STACK_LINE(67)
		return this->atlasFrame->getBitmap()->clone();
	}
	else{
		HX_STACK_LINE(71)
		int _g = ::Std_obj::_int(this->region->width);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(71)
		int _g1 = ::Std_obj::_int(this->region->height);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(71)
		::openfl::_v2::display::BitmapData filled = ::openfl::_v2::display::BitmapData_obj::__new(_g,_g1,true,(int)0,null());		HX_STACK_VAR(filled,"filled");
		HX_STACK_LINE(72)
		::flixel::math::FlxPoint_obj::point->setTo((int)0,(int)0);
		HX_STACK_LINE(73)
		::openfl::_v2::geom::Rectangle _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			::flixel::math::FlxRect _this = this->region;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(73)
			::openfl::_v2::geom::Rectangle FlashRect = ::flixel::math::FlxRect_obj::rect;		HX_STACK_VAR(FlashRect,"FlashRect");
			HX_STACK_LINE(73)
			if (((FlashRect == null()))){
				HX_STACK_LINE(73)
				::openfl::_v2::geom::Rectangle _g2 = ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(73)
				FlashRect = _g2;
			}
			HX_STACK_LINE(73)
			FlashRect->x = _this->x;
			HX_STACK_LINE(73)
			FlashRect->y = _this->y;
			HX_STACK_LINE(73)
			FlashRect->width = _this->width;
			HX_STACK_LINE(73)
			FlashRect->height = _this->height;
			HX_STACK_LINE(73)
			_g3 = FlashRect;
		}
		HX_STACK_LINE(73)
		filled->copyPixels(this->parent->bitmap,_g3,::flixel::math::FlxPoint_obj::point,null(),null(),null());
		HX_STACK_LINE(74)
		return filled;
	}
	HX_STACK_LINE(77)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBarFrames_obj,getFilledBitmap,return )

bool FlxBarFrames_obj::equals( ::flixel::ui::FlxBarFillDirection barType,int numFrames,::flixel::math::FlxRect region,::flixel::graphics::frames::FlxFrame atlasFrame){
	HX_STACK_FRAME("flixel.graphics.frames.FlxBarFrames","equals",0xc4681d8f,"flixel.graphics.frames.FlxBarFrames.equals","flixel/graphics/frames/FlxBarFrames.hx",366,0x30732b5f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(barType,"barType")
	HX_STACK_ARG(numFrames,"numFrames")
	HX_STACK_ARG(region,"region")
	HX_STACK_ARG(atlasFrame,"atlasFrame")
	HX_STACK_LINE(367)
	if (((atlasFrame != null()))){
		HX_STACK_LINE(369)
		region = atlasFrame->frame;
	}
	HX_STACK_LINE(372)
	if (((region == null()))){
		HX_STACK_LINE(374)
		region = ::flixel::math::FlxRect_obj::flxRect;
		HX_STACK_LINE(375)
		{
			HX_STACK_LINE(375)
			region->x = (int)0;
			HX_STACK_LINE(375)
			region->y = (int)0;
			HX_STACK_LINE(375)
			region->width = this->parent->width;
			HX_STACK_LINE(375)
			region->height = this->parent->height;
			HX_STACK_LINE(375)
			region;
		}
	}
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::flixel::graphics::frames::FlxBarFrames_obj > __this,::flixel::math::FlxRect &region){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxBarFrames.hx",378,0x30732b5f)
			{
				HX_STACK_LINE(378)
				::flixel::math::FlxRect _this = __this->region;		HX_STACK_VAR(_this,"_this");
				struct _Function_2_1{
					inline static bool Block( ::flixel::math::FlxRect &region,::flixel::math::FlxRect _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxBarFrames.hx",378,0x30732b5f)
						{
							HX_STACK_LINE(378)
							Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
							HX_STACK_LINE(378)
							Float _g = ::Math_obj::abs((_this->x - region->x));		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(378)
							return (_g <= aDiff);
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static bool Block( ::flixel::math::FlxRect &region,::flixel::math::FlxRect _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxBarFrames.hx",378,0x30732b5f)
						{
							HX_STACK_LINE(378)
							Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
							HX_STACK_LINE(378)
							Float _g1 = ::Math_obj::abs((_this->y - region->y));		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(378)
							return (_g1 <= aDiff);
						}
						return null();
					}
				};
				struct _Function_2_3{
					inline static bool Block( ::flixel::math::FlxRect &region,::flixel::math::FlxRect _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxBarFrames.hx",378,0x30732b5f)
						{
							HX_STACK_LINE(378)
							Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
							HX_STACK_LINE(378)
							Float _g2 = ::Math_obj::abs((_this->width - region->width));		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(378)
							return (_g2 <= aDiff);
						}
						return null();
					}
				};
				struct _Function_2_4{
					inline static bool Block( ::flixel::math::FlxRect &region,::flixel::math::FlxRect _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxBarFrames.hx",378,0x30732b5f)
						{
							HX_STACK_LINE(378)
							Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
							HX_STACK_LINE(378)
							Float _g3 = ::Math_obj::abs((_this->height - region->height));		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(378)
							return (_g3 <= aDiff);
						}
						return null();
					}
				};
				HX_STACK_LINE(378)
				return (  (((  (((  ((_Function_2_1::Block(region,_this))) ? bool(_Function_2_2::Block(region,_this)) : bool(false) ))) ? bool(_Function_2_3::Block(region,_this)) : bool(false) ))) ? bool(_Function_2_4::Block(region,_this)) : bool(false) );
			}
			return null();
		}
	};
	HX_STACK_LINE(378)
	if (((  (((  (((this->atlasFrame == atlasFrame))) ? bool(_Function_1_1::Block(this,region)) : bool(false) ))) ? bool((this->barType == barType)) : bool(false) ))){
		HX_STACK_LINE(378)
		return (this->frames->length == numFrames);
	}
	else{
		HX_STACK_LINE(378)
		return false;
	}
	HX_STACK_LINE(378)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBarFrames_obj,equals,return )

Void FlxBarFrames_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.graphics.frames.FlxBarFrames","destroy",0x069a63aa,"flixel.graphics.frames.FlxBarFrames.destroy","flixel/graphics/frames/FlxBarFrames.hx",382,0x30732b5f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(383)
		this->super::destroy();
		HX_STACK_LINE(384)
		this->atlasFrame = null();
		HX_STACK_LINE(385)
		this->region = null();
		HX_STACK_LINE(386)
		this->barType = null();
	}
return null();
}


::flixel::graphics::frames::FlxBarFrames FlxBarFrames_obj::fromFrame( ::flixel::graphics::frames::FlxFrame frame,::flixel::ui::FlxBarFillDirection barType,hx::Null< int >  __o_numFrames){
int numFrames = __o_numFrames.Default(100);
	HX_STACK_FRAME("flixel.graphics.frames.FlxBarFrames","fromFrame",0x739fa513,"flixel.graphics.frames.FlxBarFrames.fromFrame","flixel/graphics/frames/FlxBarFrames.hx",90,0x30732b5f)
	HX_STACK_ARG(frame,"frame")
	HX_STACK_ARG(barType,"barType")
	HX_STACK_ARG(numFrames,"numFrames")
{
		HX_STACK_LINE(91)
		::flixel::graphics::FlxGraphic graphic = frame->parent;		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(93)
		::flixel::graphics::frames::FlxBarFrames barFrames = ::flixel::graphics::frames::FlxBarFrames_obj::findFrame(graphic,barType,numFrames,null(),frame);		HX_STACK_VAR(barFrames,"barFrames");
		HX_STACK_LINE(94)
		if (((barFrames != null()))){
			HX_STACK_LINE(96)
			return barFrames;
		}
		HX_STACK_LINE(100)
		::flixel::graphics::frames::FlxBarFrames _g = ::flixel::graphics::frames::FlxBarFrames_obj::__new(graphic,barType);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(100)
		barFrames = _g;
		HX_STACK_LINE(101)
		barFrames->atlasFrame = frame;
		HX_STACK_LINE(102)
		barFrames->region = frame->frame;
		HX_STACK_LINE(104)
		int width = ::Std_obj::_int(frame->sourceSize->x);		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(105)
		int height = ::Std_obj::_int(frame->sourceSize->y);		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(107)
		::flixel::math::FlxRect clippedRect = ::flixel::math::FlxRect_obj::__new(frame->offset->x,frame->offset->y,frame->frame->width,frame->frame->height);		HX_STACK_VAR(clippedRect,"clippedRect");
		HX_STACK_LINE(108)
		::flixel::math::FlxRect helperRect = ::flixel::math::FlxRect_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(helperRect,"helperRect");
		HX_STACK_LINE(109)
		::flixel::math::FlxRect frameRect;		HX_STACK_VAR(frameRect,"frameRect");
		HX_STACK_LINE(110)
		::flixel::math::FlxPoint frameOffset;		HX_STACK_VAR(frameOffset,"frameOffset");
		HX_STACK_LINE(111)
		::flixel::math::FlxPoint sourceSize;		HX_STACK_VAR(sourceSize,"sourceSize");
		HX_STACK_LINE(113)
		Float x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(113)
		Float y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(113)
		Float w;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(113)
		Float h;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(114)
		Float ratio = (int)0;		HX_STACK_VAR(ratio,"ratio");
		HX_STACK_LINE(116)
		bool rotated = (frame->type == (int)1);		HX_STACK_VAR(rotated,"rotated");
		HX_STACK_LINE(117)
		int angle = (int)0;		HX_STACK_VAR(angle,"angle");
		HX_STACK_LINE(119)
		if ((rotated)){
			HX_STACK_LINE(121)
			angle = frame->angle;
			HX_STACK_LINE(122)
			clippedRect->width = frame->frame->height;
			HX_STACK_LINE(123)
			clippedRect->height = frame->frame->width;
		}
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(126)
			int _g2 = (numFrames + (int)1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(126)
			while((true)){
				HX_STACK_LINE(126)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(126)
					break;
				}
				HX_STACK_LINE(126)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(128)
				ratio = (Float(i) / Float(numFrames));
				HX_STACK_LINE(129)
				{
					HX_STACK_LINE(129)
					helperRect->x = (int)0;
					HX_STACK_LINE(129)
					helperRect->y = (int)0;
					HX_STACK_LINE(129)
					helperRect->width = width;
					HX_STACK_LINE(129)
					helperRect->height = height;
					HX_STACK_LINE(129)
					helperRect;
				}
				HX_STACK_LINE(131)
				switch( (int)(barType->__Index())){
					case (int)0: {
						HX_STACK_LINE(134)
						helperRect->width = (width * ratio);
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(137)
						helperRect->height = (height * ratio);
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(140)
						helperRect->height = (height * ratio);
						HX_STACK_LINE(141)
						helperRect->y = (height - helperRect->height);
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(144)
						helperRect->width = (width * ratio);
						HX_STACK_LINE(145)
						helperRect->x = (width - helperRect->width);
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(148)
						helperRect->width = (width * ratio);
						HX_STACK_LINE(149)
						helperRect->x = (0.5 * ((width - helperRect->width)));
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(152)
						helperRect->width = (width * (((int)1 - ratio)));
						HX_STACK_LINE(153)
						helperRect->x = (0.5 * ((width - helperRect->width)));
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(156)
						helperRect->height = (height * ratio);
						HX_STACK_LINE(157)
						helperRect->y = (0.5 * ((height - helperRect->height)));
					}
					;break;
					case (int)7: {
						HX_STACK_LINE(160)
						helperRect->height = (height * (((int)1 - ratio)));
						HX_STACK_LINE(161)
						helperRect->y = (0.5 * ((height - helperRect->height)));
					}
					;break;
				}
				HX_STACK_LINE(164)
				int _g11 = ::Std_obj::_int(helperRect->x);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(164)
				helperRect->x = _g11;
				HX_STACK_LINE(165)
				int _g21 = ::Std_obj::_int(helperRect->y);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(165)
				helperRect->y = _g21;
				HX_STACK_LINE(166)
				int _g3 = ::Std_obj::_int(helperRect->width);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(166)
				helperRect->width = _g3;
				HX_STACK_LINE(167)
				int _g4 = ::Std_obj::_int(helperRect->height);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(167)
				helperRect->height = _g4;
				HX_STACK_LINE(169)
				::flixel::math::FlxRect _g5 = clippedRect->intersection(helperRect);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(169)
				frameRect = _g5;
				HX_STACK_LINE(171)
				if (((bool((frameRect->width == (int)0)) || bool((frameRect->height == (int)0))))){
					HX_STACK_LINE(173)
					{
						HX_STACK_LINE(173)
						frameRect->x = (int)0;
						HX_STACK_LINE(173)
						frameRect->y = (int)0;
						HX_STACK_LINE(173)
						frameRect->width = width;
						HX_STACK_LINE(173)
						frameRect->height = height;
						HX_STACK_LINE(173)
						frameRect;
					}
					HX_STACK_LINE(174)
					barFrames->addEmptyFrame(frameRect);
				}
				else{
					HX_STACK_LINE(178)
					::flixel::math::FlxPoint _g6;		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(178)
					{
						HX_STACK_LINE(178)
						::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(frameRect->x,frameRect->y);		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(178)
						point->_inPool = false;
						HX_STACK_LINE(178)
						_g6 = point;
					}
					HX_STACK_LINE(178)
					frameOffset = _g6;
					HX_STACK_LINE(179)
					::flixel::math::FlxPoint _g7;		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(179)
					{
						HX_STACK_LINE(179)
						::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(width,height);		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(179)
						point->_inPool = false;
						HX_STACK_LINE(179)
						_g7 = point;
					}
					HX_STACK_LINE(179)
					sourceSize = _g7;
					HX_STACK_LINE(181)
					x = frameRect->x;
					HX_STACK_LINE(182)
					y = frameRect->y;
					HX_STACK_LINE(183)
					w = frameRect->width;
					HX_STACK_LINE(184)
					h = frameRect->height;
					HX_STACK_LINE(186)
					if (((angle == (int)0))){
						HX_STACK_LINE(188)
						hx::SubEq(frameRect->x,clippedRect->x);
						HX_STACK_LINE(189)
						hx::SubEq(frameRect->y,clippedRect->y);
					}
					HX_STACK_LINE(191)
					if (((angle == (int)-90))){
						HX_STACK_LINE(193)
						frameRect->x = (((clippedRect->y + clippedRect->height) - y) - h);
						HX_STACK_LINE(194)
						frameRect->y = (x - clippedRect->x);
						HX_STACK_LINE(195)
						frameRect->width = h;
						HX_STACK_LINE(196)
						frameRect->height = w;
					}
					else{
						HX_STACK_LINE(198)
						if (((angle == (int)90))){
							HX_STACK_LINE(200)
							frameRect->x = (y - clippedRect->y);
							HX_STACK_LINE(201)
							frameRect->y = (((clippedRect->x + clippedRect->width) - x) - w);
							HX_STACK_LINE(202)
							frameRect->width = h;
							HX_STACK_LINE(203)
							frameRect->height = w;
						}
					}
					HX_STACK_LINE(206)
					hx::AddEq(frameRect->x,frame->frame->x);
					HX_STACK_LINE(207)
					hx::AddEq(frameRect->y,frame->frame->y);
					HX_STACK_LINE(208)
					barFrames->addAtlasFrame(frameRect,sourceSize,frameOffset,null(),angle);
				}
			}
		}
		HX_STACK_LINE(212)
		return barFrames;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxBarFrames_obj,fromFrame,return )

::flixel::graphics::frames::FlxBarFrames FlxBarFrames_obj::fromGraphic( ::flixel::graphics::FlxGraphic graphic,::flixel::ui::FlxBarFillDirection barType,hx::Null< int >  __o_numFrames,::flixel::math::FlxRect region){
int numFrames = __o_numFrames.Default(100);
	HX_STACK_FRAME("flixel.graphics.frames.FlxBarFrames","fromGraphic",0x82350d0e,"flixel.graphics.frames.FlxBarFrames.fromGraphic","flixel/graphics/frames/FlxBarFrames.hx",226,0x30732b5f)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_ARG(barType,"barType")
	HX_STACK_ARG(numFrames,"numFrames")
	HX_STACK_ARG(region,"region")
{
		HX_STACK_LINE(228)
		::flixel::graphics::frames::FlxBarFrames barFrames = ::flixel::graphics::frames::FlxBarFrames_obj::findFrame(graphic,barType,numFrames,region,null());		HX_STACK_VAR(barFrames,"barFrames");
		HX_STACK_LINE(229)
		if (((barFrames != null()))){
			HX_STACK_LINE(231)
			return barFrames;
		}
		HX_STACK_LINE(235)
		if (((region == null()))){
			HX_STACK_LINE(237)
			::flixel::math::FlxRect _g = ::flixel::math::FlxRect_obj::__new((int)0,(int)0,graphic->width,graphic->height);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(237)
			region = _g;
		}
		else{
			HX_STACK_LINE(241)
			if (((region->width == (int)0))){
				HX_STACK_LINE(243)
				region->width = (graphic->width - region->x);
			}
			HX_STACK_LINE(246)
			if (((region->height == (int)0))){
				HX_STACK_LINE(248)
				region->height = (graphic->height - region->y);
			}
		}
		HX_STACK_LINE(252)
		::flixel::graphics::frames::FlxBarFrames _g1 = ::flixel::graphics::frames::FlxBarFrames_obj::__new(graphic,barType);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(252)
		barFrames = _g1;
		HX_STACK_LINE(253)
		barFrames->region = region;
		HX_STACK_LINE(254)
		barFrames->atlasFrame = null();
		HX_STACK_LINE(256)
		int width = ::Std_obj::_int(region->width);		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(257)
		int height = ::Std_obj::_int(region->height);		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(259)
		int startX = ::Std_obj::_int(region->x);		HX_STACK_VAR(startX,"startX");
		HX_STACK_LINE(260)
		int startY = ::Std_obj::_int(region->y);		HX_STACK_VAR(startY,"startY");
		HX_STACK_LINE(262)
		::flixel::math::FlxRect frameRect;		HX_STACK_VAR(frameRect,"frameRect");
		HX_STACK_LINE(263)
		::flixel::math::FlxPoint sourceSize;		HX_STACK_VAR(sourceSize,"sourceSize");
		HX_STACK_LINE(264)
		::flixel::math::FlxPoint offset;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(266)
		Float ratio = (int)0;		HX_STACK_VAR(ratio,"ratio");
		HX_STACK_LINE(268)
		{
			HX_STACK_LINE(268)
			int _g11 = (int)1;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(268)
			int _g = (numFrames + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(268)
			while((true)){
				HX_STACK_LINE(268)
				if ((!(((_g11 < _g))))){
					HX_STACK_LINE(268)
					break;
				}
				HX_STACK_LINE(268)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(270)
				ratio = (Float(i) / Float(numFrames));
				HX_STACK_LINE(271)
				::flixel::math::FlxRect _g2 = ::flixel::math::FlxRect_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(271)
				frameRect = _g2;
				HX_STACK_LINE(273)
				switch( (int)(barType->__Index())){
					case (int)0: {
						HX_STACK_LINE(276)
						frameRect->width = (width * ratio);
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(279)
						frameRect->height = (height * ratio);
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(282)
						frameRect->height = (height * ratio);
						HX_STACK_LINE(283)
						frameRect->y = (height - frameRect->height);
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(286)
						frameRect->width = (width * ratio);
						HX_STACK_LINE(287)
						frameRect->x = (width - frameRect->width);
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(290)
						frameRect->width = (width * ratio);
						HX_STACK_LINE(291)
						frameRect->x = (0.5 * ((width - frameRect->width)));
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(294)
						frameRect->width = (width * (((int)1 - ratio)));
						HX_STACK_LINE(295)
						frameRect->x = (0.5 * ((width - frameRect->width)));
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(298)
						frameRect->height = (height * ratio);
						HX_STACK_LINE(299)
						frameRect->y = (0.5 * ((height - frameRect->height)));
					}
					;break;
					case (int)7: {
						HX_STACK_LINE(302)
						frameRect->height = (height * (((int)1 - ratio)));
						HX_STACK_LINE(303)
						frameRect->y = (0.5 * ((height - frameRect->height)));
					}
					;break;
				}
				HX_STACK_LINE(306)
				::flixel::math::FlxPoint _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(306)
				{
					HX_STACK_LINE(306)
					::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(width,height);		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(306)
					point->_inPool = false;
					HX_STACK_LINE(306)
					_g3 = point;
				}
				HX_STACK_LINE(306)
				sourceSize = _g3;
				HX_STACK_LINE(307)
				::flixel::math::FlxPoint _g4;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(307)
				{
					HX_STACK_LINE(307)
					::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(frameRect->x,frameRect->y);		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(307)
					point->_inPool = false;
					HX_STACK_LINE(307)
					_g4 = point;
				}
				HX_STACK_LINE(307)
				offset = _g4;
				HX_STACK_LINE(309)
				hx::AddEq(frameRect->x,startX);
				HX_STACK_LINE(310)
				hx::AddEq(frameRect->y,startY);
				HX_STACK_LINE(312)
				barFrames->addAtlasFrame(frameRect,sourceSize,offset,null(),null());
			}
		}
		HX_STACK_LINE(315)
		return barFrames;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxBarFrames_obj,fromGraphic,return )

::flixel::graphics::frames::FlxBarFrames FlxBarFrames_obj::fromRectangle( Dynamic source,::flixel::ui::FlxBarFillDirection barType,hx::Null< int >  __o_numFrames,::flixel::math::FlxRect region){
int numFrames = __o_numFrames.Default(100);
	HX_STACK_FRAME("flixel.graphics.frames.FlxBarFrames","fromRectangle",0x54486c15,"flixel.graphics.frames.FlxBarFrames.fromRectangle","flixel/graphics/frames/FlxBarFrames.hx",330,0x30732b5f)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(barType,"barType")
	HX_STACK_ARG(numFrames,"numFrames")
	HX_STACK_ARG(region,"region")
{
		HX_STACK_LINE(331)
		::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(source,false,null());		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(332)
		if (((graphic == null()))){
			HX_STACK_LINE(332)
			return null();
		}
		HX_STACK_LINE(333)
		return ::flixel::graphics::frames::FlxBarFrames_obj::fromGraphic(graphic,barType,numFrames,region);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxBarFrames_obj,fromRectangle,return )

::flixel::graphics::frames::FlxBarFrames FlxBarFrames_obj::findFrame( ::flixel::graphics::FlxGraphic graphic,::flixel::ui::FlxBarFillDirection barType,hx::Null< int >  __o_numFrames,::flixel::math::FlxRect region,::flixel::graphics::frames::FlxFrame atlasFrame){
int numFrames = __o_numFrames.Default(100);
	HX_STACK_FRAME("flixel.graphics.frames.FlxBarFrames","findFrame",0xae0debe4,"flixel.graphics.frames.FlxBarFrames.findFrame","flixel/graphics/frames/FlxBarFrames.hx",347,0x30732b5f)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_ARG(barType,"barType")
	HX_STACK_ARG(numFrames,"numFrames")
	HX_STACK_ARG(region,"region")
	HX_STACK_ARG(atlasFrame,"atlasFrame")
{
		HX_STACK_LINE(348)
		Array< ::Dynamic > barFramesArr;		HX_STACK_VAR(barFramesArr,"barFramesArr");
		struct _Function_1_1{
			inline static Dynamic Block( ::flixel::ui::FlxBarFillDirection &barType,::flixel::graphics::FlxGraphic &graphic){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxBarFrames.hx",348,0x30732b5f)
				{
					HX_STACK_LINE(348)
					::flixel::graphics::frames::FlxFrameCollectionType type = ::flixel::graphics::frames::FlxFrameCollectionType_obj::BAR(barType);		HX_STACK_VAR(type,"type");
					HX_STACK_LINE(348)
					Dynamic collections = graphic->frameCollections->get(type);		HX_STACK_VAR(collections,"collections");
					HX_STACK_LINE(348)
					if (((collections == null()))){
						HX_STACK_LINE(348)
						Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(348)
						collections = _g;
						HX_STACK_LINE(348)
						graphic->frameCollections->set(type,collections);
					}
					HX_STACK_LINE(348)
					return collections;
				}
				return null();
			}
		};
		HX_STACK_LINE(348)
		barFramesArr = _Function_1_1::Block(barType,graphic);
		HX_STACK_LINE(349)
		::flixel::graphics::frames::FlxBarFrames barFrames;		HX_STACK_VAR(barFrames,"barFrames");
		HX_STACK_LINE(351)
		{
			HX_STACK_LINE(351)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(351)
			while((true)){
				HX_STACK_LINE(351)
				if ((!(((_g < barFramesArr->length))))){
					HX_STACK_LINE(351)
					break;
				}
				HX_STACK_LINE(351)
				::flixel::graphics::frames::FlxBarFrames barFrames1 = barFramesArr->__get(_g).StaticCast< ::flixel::graphics::frames::FlxBarFrames >();		HX_STACK_VAR(barFrames1,"barFrames1");
				HX_STACK_LINE(351)
				++(_g);
				HX_STACK_LINE(353)
				if ((barFrames1->equals(barType,numFrames,region,null()))){
					HX_STACK_LINE(355)
					return barFrames1;
				}
			}
		}
		HX_STACK_LINE(359)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxBarFrames_obj,findFrame,return )


FlxBarFrames_obj::FlxBarFrames_obj()
{
}

void FlxBarFrames_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBarFrames);
	HX_MARK_MEMBER_NAME(atlasFrame,"atlasFrame");
	HX_MARK_MEMBER_NAME(region,"region");
	HX_MARK_MEMBER_NAME(barType,"barType");
	::flixel::graphics::frames::FlxFramesCollection_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxBarFrames_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(atlasFrame,"atlasFrame");
	HX_VISIT_MEMBER_NAME(region,"region");
	HX_VISIT_MEMBER_NAME(barType,"barType");
	::flixel::graphics::frames::FlxFramesCollection_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxBarFrames_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"region") ) { return region; }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"barType") ) { return barType; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromFrame") ) { return fromFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"findFrame") ) { return findFrame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"atlasFrame") ) { return atlasFrame; }
		if (HX_FIELD_EQ(inName,"changeType") ) { return changeType_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromGraphic") ) { return fromGraphic_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromRectangle") ) { return fromRectangle_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFilledBitmap") ) { return getFilledBitmap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBarFrames_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"region") ) { region=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"barType") ) { barType=inValue.Cast< ::flixel::ui::FlxBarFillDirection >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"atlasFrame") ) { atlasFrame=inValue.Cast< ::flixel::graphics::frames::FlxFrame >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBarFrames_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("atlasFrame"));
	outFields->push(HX_CSTRING("region"));
	outFields->push(HX_CSTRING("barType"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromFrame"),
	HX_CSTRING("fromGraphic"),
	HX_CSTRING("fromRectangle"),
	HX_CSTRING("findFrame"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::graphics::frames::FlxFrame*/ ,(int)offsetof(FlxBarFrames_obj,atlasFrame),HX_CSTRING("atlasFrame")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxBarFrames_obj,region),HX_CSTRING("region")},
	{hx::fsObject /*::flixel::ui::FlxBarFillDirection*/ ,(int)offsetof(FlxBarFrames_obj,barType),HX_CSTRING("barType")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("atlasFrame"),
	HX_CSTRING("region"),
	HX_CSTRING("barType"),
	HX_CSTRING("changeType"),
	HX_CSTRING("getFilledBitmap"),
	HX_CSTRING("equals"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBarFrames_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBarFrames_obj::__mClass,"__mClass");
};

#endif

Class FlxBarFrames_obj::__mClass;

void FlxBarFrames_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.graphics.frames.FlxBarFrames"), hx::TCanCast< FlxBarFrames_obj> ,sStaticFields,sMemberFields,
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

void FlxBarFrames_obj::__boot()
{
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
