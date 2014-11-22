#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
#ifndef INCLUDED_openfl__v2_display_CapsStyle
#include <openfl/_v2/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_JointStyle
#include <openfl/_v2/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__v2_display_LineScaleMode
#include <openfl/_v2/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
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
namespace util{

Void FlxSpriteUtil_obj::__construct()
{
	return null();
}

//FlxSpriteUtil_obj::~FlxSpriteUtil_obj() { }

Dynamic FlxSpriteUtil_obj::__CreateEmpty() { return  new FlxSpriteUtil_obj; }
hx::ObjectPtr< FlxSpriteUtil_obj > FlxSpriteUtil_obj::__new()
{  hx::ObjectPtr< FlxSpriteUtil_obj > result = new FlxSpriteUtil_obj();
	result->__construct();
	return result;}

Dynamic FlxSpriteUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSpriteUtil_obj > result = new FlxSpriteUtil_obj();
	result->__construct();
	return result;}

::openfl::_v2::display::Sprite FlxSpriteUtil_obj::flashGfxSprite;

::openfl::_v2::display::Graphics FlxSpriteUtil_obj::flashGfx;

::flixel::FlxSprite FlxSpriteUtil_obj::alphaMask( ::flixel::FlxSprite output,Dynamic source,Dynamic mask){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","alphaMask",0xaad6793b,"flixel.util.FlxSpriteUtil.alphaMask","flixel/util/FlxSpriteUtil.hx",56,0xc647097f)
	HX_STACK_ARG(output,"output")
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_LINE(57)
	::openfl::_v2::display::BitmapData data = null();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(58)
	if ((::Std_obj::is(source,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(60)
		::openfl::_v2::display::BitmapData _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			::String id = source;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(60)
			_g = ::openfl::_v2::Assets_obj::getBitmapData(id,false);
		}
		HX_STACK_LINE(60)
		data = _g;
	}
	else{
		HX_STACK_LINE(62)
		if ((::Std_obj::is(source,hx::ClassOf< ::Class >()))){
			HX_STACK_LINE(64)
			data = ::Type_obj::createInstance(source,Dynamic( Array_obj<Dynamic>::__new()))->__Field(HX_CSTRING("bitmapData"),true);
		}
		else{
			HX_STACK_LINE(66)
			if ((::Std_obj::is(source,hx::ClassOf< ::openfl::_v2::display::BitmapData >()))){
				HX_STACK_LINE(68)
				::openfl::_v2::display::BitmapData _g1 = (hx::TCast< openfl::_v2::display::BitmapData >::cast(source))->clone();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(68)
				data = _g1;
			}
			else{
				HX_STACK_LINE(72)
				return null();
			}
		}
	}
	HX_STACK_LINE(74)
	::openfl::_v2::display::BitmapData maskData = null();		HX_STACK_VAR(maskData,"maskData");
	HX_STACK_LINE(75)
	if ((::Std_obj::is(mask,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(77)
		::openfl::_v2::display::BitmapData _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			::String id = mask;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(77)
			_g2 = ::openfl::_v2::Assets_obj::getBitmapData(id,false);
		}
		HX_STACK_LINE(77)
		maskData = _g2;
	}
	else{
		HX_STACK_LINE(79)
		if ((::Std_obj::is(mask,hx::ClassOf< ::Class >()))){
			HX_STACK_LINE(81)
			maskData = ::Type_obj::createInstance(mask,Dynamic( Array_obj<Dynamic>::__new()))->__Field(HX_CSTRING("bitmapData"),true);
		}
		else{
			HX_STACK_LINE(83)
			if ((::Std_obj::is(mask,hx::ClassOf< ::openfl::_v2::display::BitmapData >()))){
				HX_STACK_LINE(85)
				maskData = mask;
			}
			else{
				HX_STACK_LINE(89)
				return null();
			}
		}
	}
	HX_STACK_LINE(92)
	int _g3 = data->get_width();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(92)
	int _g4 = data->get_height();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(92)
	::openfl::_v2::geom::Rectangle _g5 = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,_g3,_g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(92)
	::openfl::_v2::geom::Point _g6 = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(92)
	data->copyChannel(maskData,_g5,_g6,(int)8,(int)8);
	HX_STACK_LINE(93)
	output->set_pixels(data);
	HX_STACK_LINE(94)
	return output;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,alphaMask,return )

::flixel::FlxSprite FlxSpriteUtil_obj::alphaMaskFlxSprite( ::flixel::FlxSprite sprite,::flixel::FlxSprite mask,::flixel::FlxSprite output){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","alphaMaskFlxSprite",0x13c0dd5c,"flixel.util.FlxSpriteUtil.alphaMaskFlxSprite","flixel/util/FlxSpriteUtil.hx",110,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(111)
	sprite->drawFrame(null());
	HX_STACK_LINE(112)
	::openfl::_v2::display::BitmapData data = sprite->get_pixels()->clone();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(113)
	::openfl::_v2::display::BitmapData _g = mask->get_pixels();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(113)
	Float _g1 = sprite->get_width();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(113)
	Float _g2 = sprite->get_height();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(113)
	::openfl::_v2::geom::Rectangle _g3 = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,_g1,_g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(113)
	::openfl::_v2::geom::Point _g4 = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(113)
	data->copyChannel(_g,_g3,_g4,(int)8,(int)8);
	HX_STACK_LINE(114)
	output->set_pixels(data);
	HX_STACK_LINE(115)
	return output;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,alphaMaskFlxSprite,return )

::flixel::FlxSprite FlxSpriteUtil_obj::screenWrap( ::flixel::FlxSprite sprite,hx::Null< bool >  __o_Left,hx::Null< bool >  __o_Right,hx::Null< bool >  __o_Top,hx::Null< bool >  __o_Bottom){
bool Left = __o_Left.Default(true);
bool Right = __o_Right.Default(true);
bool Top = __o_Top.Default(true);
bool Bottom = __o_Bottom.Default(true);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","screenWrap",0x74418065,"flixel.util.FlxSpriteUtil.screenWrap","flixel/util/FlxSpriteUtil.hx",130,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(Left,"Left")
	HX_STACK_ARG(Right,"Right")
	HX_STACK_ARG(Top,"Top")
	HX_STACK_ARG(Bottom,"Bottom")
{
		HX_STACK_LINE(131)
		if (((bool(Left) && bool(((sprite->x + sprite->frameWidth) <= (int)0))))){
			HX_STACK_LINE(133)
			sprite->set_x(::flixel::FlxG_obj::width);
		}
		else{
			HX_STACK_LINE(135)
			if (((bool(Right) && bool((sprite->x >= ::flixel::FlxG_obj::width))))){
				HX_STACK_LINE(137)
				sprite->set_x((int)0);
			}
		}
		HX_STACK_LINE(140)
		if (((bool(Top) && bool(((sprite->y + sprite->frameHeight) <= (int)0))))){
			HX_STACK_LINE(142)
			sprite->set_y(::flixel::FlxG_obj::height);
		}
		else{
			HX_STACK_LINE(144)
			if (((bool(Bottom) && bool((sprite->y >= ::flixel::FlxG_obj::height))))){
				HX_STACK_LINE(146)
				sprite->set_y((int)0);
			}
		}
		HX_STACK_LINE(148)
		return sprite;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxSpriteUtil_obj,screenWrap,return )

::flixel::FlxSprite FlxSpriteUtil_obj::bound( ::flixel::FlxSprite sprite,hx::Null< Float >  __o_MinX,hx::Null< Float >  __o_MaxX,hx::Null< Float >  __o_MinY,hx::Null< Float >  __o_MaxY){
Float MinX = __o_MinX.Default(0);
Float MaxX = __o_MaxX.Default(0);
Float MinY = __o_MinY.Default(0);
Float MaxY = __o_MaxY.Default(0);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","bound",0x7d89918f,"flixel.util.FlxSpriteUtil.bound","flixel/util/FlxSpriteUtil.hx",163,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(MinX,"MinX")
	HX_STACK_ARG(MaxX,"MaxX")
	HX_STACK_ARG(MinY,"MinY")
	HX_STACK_ARG(MaxY,"MaxY")
{
		HX_STACK_LINE(164)
		if (((MaxX <= (int)0))){
			HX_STACK_LINE(166)
			MaxX = ::flixel::FlxG_obj::width;
		}
		HX_STACK_LINE(168)
		if (((MaxY <= (int)0))){
			HX_STACK_LINE(170)
			MaxY = ::flixel::FlxG_obj::height;
		}
		HX_STACK_LINE(173)
		hx::SubEq(MaxX,sprite->frameWidth);
		HX_STACK_LINE(174)
		hx::SubEq(MaxY,sprite->frameHeight);
		struct _Function_1_1{
			inline static Float Block( ::flixel::FlxSprite &sprite,Float &MaxX,Float &MinX){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",176,0xc647097f)
				{
					HX_STACK_LINE(176)
					Float Value = sprite->x;		HX_STACK_VAR(Value,"Value");
					HX_STACK_LINE(176)
					Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(176)
					if (((bool((MinX != null())) && bool((Value < MinX))))){
						HX_STACK_LINE(176)
						lowerBound = MinX;
					}
					else{
						HX_STACK_LINE(176)
						lowerBound = Value;
					}
					HX_STACK_LINE(176)
					return (  (((bool((MaxX != null())) && bool((lowerBound > MaxX))))) ? Dynamic(MaxX) : Dynamic(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(176)
		sprite->set_x(_Function_1_1::Block(sprite,MaxX,MinX));
		struct _Function_1_2{
			inline static Float Block( Float &MaxY,::flixel::FlxSprite &sprite,Float &MinY){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",177,0xc647097f)
				{
					HX_STACK_LINE(177)
					Float Value = sprite->y;		HX_STACK_VAR(Value,"Value");
					HX_STACK_LINE(177)
					Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(177)
					if (((bool((MinY != null())) && bool((Value < MinY))))){
						HX_STACK_LINE(177)
						lowerBound = MinY;
					}
					else{
						HX_STACK_LINE(177)
						lowerBound = Value;
					}
					HX_STACK_LINE(177)
					return (  (((bool((MaxY != null())) && bool((lowerBound > MaxY))))) ? Dynamic(MaxY) : Dynamic(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(177)
		sprite->set_y(_Function_1_2::Block(MaxY,sprite,MinY));
		HX_STACK_LINE(179)
		return sprite;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxSpriteUtil_obj,bound,return )

Void FlxSpriteUtil_obj::space( Array< ::Dynamic > objects,int startX,int startY,hx::Null< int >  __o_horizontalSpacing,hx::Null< int >  __o_verticalSpacing,hx::Null< bool >  __o_spaceFromBounds){
int horizontalSpacing = __o_horizontalSpacing.Default(0);
int verticalSpacing = __o_verticalSpacing.Default(0);
bool spaceFromBounds = __o_spaceFromBounds.Default(false);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","space",0x47f36e17,"flixel.util.FlxSpriteUtil.space","flixel/util/FlxSpriteUtil.hx",194,0xc647097f)
	HX_STACK_ARG(objects,"objects")
	HX_STACK_ARG(startX,"startX")
	HX_STACK_ARG(startY,"startY")
	HX_STACK_ARG(horizontalSpacing,"horizontalSpacing")
	HX_STACK_ARG(verticalSpacing,"verticalSpacing")
	HX_STACK_ARG(spaceFromBounds,"spaceFromBounds")
{
		HX_STACK_LINE(195)
		int prevWidth = (int)0;		HX_STACK_VAR(prevWidth,"prevWidth");
		HX_STACK_LINE(196)
		int prevHeight = (int)0;		HX_STACK_VAR(prevHeight,"prevHeight");
		HX_STACK_LINE(198)
		{
			HX_STACK_LINE(198)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(198)
			int _g = objects->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(198)
			while((true)){
				HX_STACK_LINE(198)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(198)
					break;
				}
				HX_STACK_LINE(198)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(200)
				::flixel::FlxObject object = objects->__get(i).StaticCast< ::flixel::FlxObject >();		HX_STACK_VAR(object,"object");
				HX_STACK_LINE(202)
				if ((spaceFromBounds)){
					HX_STACK_LINE(204)
					object->set_x(((startX + prevWidth) + (i * horizontalSpacing)));
					HX_STACK_LINE(205)
					object->set_y(((startY + prevHeight) + (i * verticalSpacing)));
				}
				else{
					HX_STACK_LINE(209)
					object->set_x((startX + (i * horizontalSpacing)));
					HX_STACK_LINE(210)
					object->set_y((startY + (i * verticalSpacing)));
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxSpriteUtil_obj,space,(void))

::flixel::FlxObject FlxSpriteUtil_obj::screenCenter( ::flixel::FlxObject object,hx::Null< bool >  __o_xAxis,hx::Null< bool >  __o_yAxis){
bool xAxis = __o_xAxis.Default(true);
bool yAxis = __o_yAxis.Default(true);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","screenCenter",0xb5308930,"flixel.util.FlxSpriteUtil.screenCenter","flixel/util/FlxSpriteUtil.hx",224,0xc647097f)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(xAxis,"xAxis")
	HX_STACK_ARG(yAxis,"yAxis")
{
		HX_STACK_LINE(225)
		if ((xAxis)){
			HX_STACK_LINE(227)
			Float _g = object->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(227)
			Float _g1 = (Float(_g) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(227)
			Float _g2 = ((Float(::flixel::FlxG_obj::width) / Float((int)2)) - _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(227)
			object->set_x(_g2);
		}
		HX_STACK_LINE(230)
		if ((yAxis)){
			HX_STACK_LINE(232)
			Float _g3 = object->get_height();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(232)
			Float _g4 = (Float(_g3) / Float((int)2));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(232)
			Float _g5 = ((Float(::flixel::FlxG_obj::height) / Float((int)2)) - _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(232)
			object->set_y(_g5);
		}
		HX_STACK_LINE(235)
		return object;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,screenCenter,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawLine( ::flixel::FlxSprite sprite,Float StartX,Float StartY,Float EndX,Float EndY,Dynamic lineStyle,Dynamic drawStyle){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawLine",0x239cc967,"flixel.util.FlxSpriteUtil.drawLine","flixel/util/FlxSpriteUtil.hx",253,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(StartX,"StartX")
	HX_STACK_ARG(StartY,"StartY")
	HX_STACK_ARG(EndX,"EndX")
	HX_STACK_ARG(EndY,"EndY")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
	HX_STACK_LINE(254)
	Dynamic _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(254)
	{
		HX_STACK_LINE(254)
		Dynamic lineStyle1 = lineStyle;		HX_STACK_VAR(lineStyle1,"lineStyle1");
		HX_STACK_LINE(254)
		if (((lineStyle1 == null()))){
			struct _Function_3_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",254,0xc647097f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("thickness") , (int)1,false);
						__result->Add(HX_CSTRING("color") , (int)-1,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(254)
			lineStyle1 = _Function_3_1::Block();
		}
		HX_STACK_LINE(254)
		if (((lineStyle1->__Field(HX_CSTRING("thickness"),true) == null()))){
			HX_STACK_LINE(254)
			lineStyle1->__FieldRef(HX_CSTRING("thickness")) = (int)1;
		}
		HX_STACK_LINE(254)
		if (((lineStyle1->__Field(HX_CSTRING("color"),true) == null()))){
			HX_STACK_LINE(254)
			lineStyle1->__FieldRef(HX_CSTRING("color")) = (int)-1;
		}
		HX_STACK_LINE(254)
		_g = lineStyle1;
	}
	HX_STACK_LINE(254)
	lineStyle = _g;
	HX_STACK_LINE(255)
	{
		HX_STACK_LINE(255)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
		HX_STACK_LINE(255)
		if (((lineStyle != null()))){
			HX_STACK_LINE(255)
			Dynamic color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(255)
			if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
				HX_STACK_LINE(255)
				color = (int)-16777216;
			}
			else{
				HX_STACK_LINE(255)
				color = lineStyle->__Field(HX_CSTRING("color"),true);
			}
			HX_STACK_LINE(255)
			if (((lineStyle->__Field(HX_CSTRING("thickness"),true) == null()))){
				HX_STACK_LINE(255)
				lineStyle->__FieldRef(HX_CSTRING("thickness")) = (int)1;
			}
			HX_STACK_LINE(255)
			if (((lineStyle->__Field(HX_CSTRING("pixelHinting"),true) == null()))){
				HX_STACK_LINE(255)
				lineStyle->__FieldRef(HX_CSTRING("pixelHinting")) = false;
			}
			HX_STACK_LINE(255)
			if (((lineStyle->__Field(HX_CSTRING("miterLimit"),true) == null()))){
				HX_STACK_LINE(255)
				lineStyle->__FieldRef(HX_CSTRING("miterLimit")) = (int)3;
			}
			struct _Function_3_1{
				inline static int Block( Dynamic &color){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",255,0xc647097f)
					{
						HX_STACK_LINE(255)
						int this1 = color;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(255)
						return (int(this1) & int((int)16777215));
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static Float Block( Dynamic &color){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",255,0xc647097f)
					{
						HX_STACK_LINE(255)
						int this1 = color;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(255)
						return (Float(((int((int(this1) >> int((int)24))) & int((int)255)))) / Float((int)255));
					}
					return null();
				}
			};
			HX_STACK_LINE(255)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_CSTRING("thickness"),true),_Function_3_1::Block(color),_Function_3_2::Block(color),lineStyle->__Field(HX_CSTRING("pixelHinting"),true),lineStyle->__Field(HX_CSTRING("scaleMode"),true),lineStyle->__Field(HX_CSTRING("capsStyle"),true),lineStyle->__Field(HX_CSTRING("jointStyle"),true),lineStyle->__Field(HX_CSTRING("miterLimit"),true));
		}
		HX_STACK_LINE(255)
		if ((((int)0 != (int)0))){
			HX_STACK_LINE(255)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int)0,0.);
		}
	}
	HX_STACK_LINE(256)
	::flixel::util::FlxSpriteUtil_obj::flashGfx->moveTo(StartX,StartY);
	HX_STACK_LINE(257)
	::flixel::util::FlxSpriteUtil_obj::flashGfx->lineTo(EndX,EndY);
	HX_STACK_LINE(258)
	{
		HX_STACK_LINE(258)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
		HX_STACK_LINE(258)
		::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
		HX_STACK_LINE(258)
		sprite;
	}
	HX_STACK_LINE(259)
	return sprite;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxSpriteUtil_obj,drawLine,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawCurve( ::flixel::FlxSprite sprite,Float StartX,Float StartY,Float EndX,Float EndY,Float ControlX,Float ControlY,hx::Null< int >  __o_FillColor,Dynamic lineStyle,Dynamic drawStyle){
int FillColor = __o_FillColor.Default(0);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawCurve",0xdee9dfdc,"flixel.util.FlxSpriteUtil.drawCurve","flixel/util/FlxSpriteUtil.hx",280,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(StartX,"StartX")
	HX_STACK_ARG(StartY,"StartY")
	HX_STACK_ARG(EndX,"EndX")
	HX_STACK_ARG(EndY,"EndY")
	HX_STACK_ARG(ControlX,"ControlX")
	HX_STACK_ARG(ControlY,"ControlY")
	HX_STACK_ARG(FillColor,"FillColor")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
{
		HX_STACK_LINE(281)
		Dynamic _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(281)
		{
			HX_STACK_LINE(281)
			Dynamic lineStyle1 = lineStyle;		HX_STACK_VAR(lineStyle1,"lineStyle1");
			HX_STACK_LINE(281)
			if (((lineStyle1 == null()))){
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",281,0xc647097f)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("thickness") , (int)1,false);
							__result->Add(HX_CSTRING("color") , (int)-1,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(281)
				lineStyle1 = _Function_3_1::Block();
			}
			HX_STACK_LINE(281)
			if (((lineStyle1->__Field(HX_CSTRING("thickness"),true) == null()))){
				HX_STACK_LINE(281)
				lineStyle1->__FieldRef(HX_CSTRING("thickness")) = (int)1;
			}
			HX_STACK_LINE(281)
			if (((lineStyle1->__Field(HX_CSTRING("color"),true) == null()))){
				HX_STACK_LINE(281)
				lineStyle1->__FieldRef(HX_CSTRING("color")) = (int)-1;
			}
			HX_STACK_LINE(281)
			_g = lineStyle1;
		}
		HX_STACK_LINE(281)
		lineStyle = _g;
		HX_STACK_LINE(282)
		{
			HX_STACK_LINE(282)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
			HX_STACK_LINE(282)
			if (((lineStyle != null()))){
				HX_STACK_LINE(282)
				Dynamic color;		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(282)
				if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
					HX_STACK_LINE(282)
					color = (int)-16777216;
				}
				else{
					HX_STACK_LINE(282)
					color = lineStyle->__Field(HX_CSTRING("color"),true);
				}
				HX_STACK_LINE(282)
				if (((lineStyle->__Field(HX_CSTRING("thickness"),true) == null()))){
					HX_STACK_LINE(282)
					lineStyle->__FieldRef(HX_CSTRING("thickness")) = (int)1;
				}
				HX_STACK_LINE(282)
				if (((lineStyle->__Field(HX_CSTRING("pixelHinting"),true) == null()))){
					HX_STACK_LINE(282)
					lineStyle->__FieldRef(HX_CSTRING("pixelHinting")) = false;
				}
				HX_STACK_LINE(282)
				if (((lineStyle->__Field(HX_CSTRING("miterLimit"),true) == null()))){
					HX_STACK_LINE(282)
					lineStyle->__FieldRef(HX_CSTRING("miterLimit")) = (int)3;
				}
				struct _Function_3_1{
					inline static int Block( Dynamic &color){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",282,0xc647097f)
						{
							HX_STACK_LINE(282)
							int this1 = color;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(282)
							return (int(this1) & int((int)16777215));
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static Float Block( Dynamic &color){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",282,0xc647097f)
						{
							HX_STACK_LINE(282)
							int this1 = color;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(282)
							return (Float(((int((int(this1) >> int((int)24))) & int((int)255)))) / Float((int)255));
						}
						return null();
					}
				};
				HX_STACK_LINE(282)
				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_CSTRING("thickness"),true),_Function_3_1::Block(color),_Function_3_2::Block(color),lineStyle->__Field(HX_CSTRING("pixelHinting"),true),lineStyle->__Field(HX_CSTRING("scaleMode"),true),lineStyle->__Field(HX_CSTRING("capsStyle"),true),lineStyle->__Field(HX_CSTRING("jointStyle"),true),lineStyle->__Field(HX_CSTRING("miterLimit"),true));
			}
			HX_STACK_LINE(282)
			if (((FillColor != (int)0))){
				HX_STACK_LINE(282)
				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int(FillColor) & int((int)16777215)),(Float(((int((int(FillColor) >> int((int)24))) & int((int)255)))) / Float((int)255)));
			}
		}
		HX_STACK_LINE(283)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->moveTo(StartX,StartY);
		HX_STACK_LINE(284)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->curveTo(EndX,EndY,ControlX,ControlY);
		HX_STACK_LINE(285)
		{
			HX_STACK_LINE(285)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
			HX_STACK_LINE(285)
			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
			HX_STACK_LINE(285)
			sprite;
		}
		HX_STACK_LINE(286)
		return sprite;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(FlxSpriteUtil_obj,drawCurve,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawRect( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,hx::Null< int >  __o_FillColor,Dynamic lineStyle,Dynamic drawStyle){
int FillColor = __o_FillColor.Default(-1);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawRect",0x2790fe97,"flixel.util.FlxSpriteUtil.drawRect","flixel/util/FlxSpriteUtil.hx",304,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(FillColor,"FillColor")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
{
		HX_STACK_LINE(305)
		{
			HX_STACK_LINE(305)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
			HX_STACK_LINE(305)
			if (((lineStyle != null()))){
				HX_STACK_LINE(305)
				Dynamic color;		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(305)
				if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
					HX_STACK_LINE(305)
					color = (int)-16777216;
				}
				else{
					HX_STACK_LINE(305)
					color = lineStyle->__Field(HX_CSTRING("color"),true);
				}
				HX_STACK_LINE(305)
				if (((lineStyle->__Field(HX_CSTRING("thickness"),true) == null()))){
					HX_STACK_LINE(305)
					lineStyle->__FieldRef(HX_CSTRING("thickness")) = (int)1;
				}
				HX_STACK_LINE(305)
				if (((lineStyle->__Field(HX_CSTRING("pixelHinting"),true) == null()))){
					HX_STACK_LINE(305)
					lineStyle->__FieldRef(HX_CSTRING("pixelHinting")) = false;
				}
				HX_STACK_LINE(305)
				if (((lineStyle->__Field(HX_CSTRING("miterLimit"),true) == null()))){
					HX_STACK_LINE(305)
					lineStyle->__FieldRef(HX_CSTRING("miterLimit")) = (int)3;
				}
				struct _Function_3_1{
					inline static int Block( Dynamic &color){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",305,0xc647097f)
						{
							HX_STACK_LINE(305)
							int this1 = color;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(305)
							return (int(this1) & int((int)16777215));
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static Float Block( Dynamic &color){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",305,0xc647097f)
						{
							HX_STACK_LINE(305)
							int this1 = color;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(305)
							return (Float(((int((int(this1) >> int((int)24))) & int((int)255)))) / Float((int)255));
						}
						return null();
					}
				};
				HX_STACK_LINE(305)
				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_CSTRING("thickness"),true),_Function_3_1::Block(color),_Function_3_2::Block(color),lineStyle->__Field(HX_CSTRING("pixelHinting"),true),lineStyle->__Field(HX_CSTRING("scaleMode"),true),lineStyle->__Field(HX_CSTRING("capsStyle"),true),lineStyle->__Field(HX_CSTRING("jointStyle"),true),lineStyle->__Field(HX_CSTRING("miterLimit"),true));
			}
			HX_STACK_LINE(305)
			if (((FillColor != (int)0))){
				HX_STACK_LINE(305)
				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int(FillColor) & int((int)16777215)),(Float(((int((int(FillColor) >> int((int)24))) & int((int)255)))) / Float((int)255)));
			}
		}
		HX_STACK_LINE(306)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->drawRect(X,Y,Width,Height);
		HX_STACK_LINE(307)
		{
			HX_STACK_LINE(307)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
			HX_STACK_LINE(307)
			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
			HX_STACK_LINE(307)
			sprite;
		}
		HX_STACK_LINE(308)
		return sprite;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxSpriteUtil_obj,drawRect,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawRoundRect( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,Float EllipseWidth,Float EllipseHeight,hx::Null< int >  __o_FillColor,Dynamic lineStyle,Dynamic drawStyle){
int FillColor = __o_FillColor.Default(-1);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawRoundRect",0x00e2de3f,"flixel.util.FlxSpriteUtil.drawRoundRect","flixel/util/FlxSpriteUtil.hx",328,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(EllipseWidth,"EllipseWidth")
	HX_STACK_ARG(EllipseHeight,"EllipseHeight")
	HX_STACK_ARG(FillColor,"FillColor")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
{
		HX_STACK_LINE(329)
		{
			HX_STACK_LINE(329)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
			HX_STACK_LINE(329)
			if (((lineStyle != null()))){
				HX_STACK_LINE(329)
				Dynamic color;		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(329)
				if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
					HX_STACK_LINE(329)
					color = (int)-16777216;
				}
				else{
					HX_STACK_LINE(329)
					color = lineStyle->__Field(HX_CSTRING("color"),true);
				}
				HX_STACK_LINE(329)
				if (((lineStyle->__Field(HX_CSTRING("thickness"),true) == null()))){
					HX_STACK_LINE(329)
					lineStyle->__FieldRef(HX_CSTRING("thickness")) = (int)1;
				}
				HX_STACK_LINE(329)
				if (((lineStyle->__Field(HX_CSTRING("pixelHinting"),true) == null()))){
					HX_STACK_LINE(329)
					lineStyle->__FieldRef(HX_CSTRING("pixelHinting")) = false;
				}
				HX_STACK_LINE(329)
				if (((lineStyle->__Field(HX_CSTRING("miterLimit"),true) == null()))){
					HX_STACK_LINE(329)
					lineStyle->__FieldRef(HX_CSTRING("miterLimit")) = (int)3;
				}
				struct _Function_3_1{
					inline static int Block( Dynamic &color){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",329,0xc647097f)
						{
							HX_STACK_LINE(329)
							int this1 = color;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(329)
							return (int(this1) & int((int)16777215));
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static Float Block( Dynamic &color){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",329,0xc647097f)
						{
							HX_STACK_LINE(329)
							int this1 = color;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(329)
							return (Float(((int((int(this1) >> int((int)24))) & int((int)255)))) / Float((int)255));
						}
						return null();
					}
				};
				HX_STACK_LINE(329)
				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_CSTRING("thickness"),true),_Function_3_1::Block(color),_Function_3_2::Block(color),lineStyle->__Field(HX_CSTRING("pixelHinting"),true),lineStyle->__Field(HX_CSTRING("scaleMode"),true),lineStyle->__Field(HX_CSTRING("capsStyle"),true),lineStyle->__Field(HX_CSTRING("jointStyle"),true),lineStyle->__Field(HX_CSTRING("miterLimit"),true));
			}
			HX_STACK_LINE(329)
			if (((FillColor != (int)0))){
				HX_STACK_LINE(329)
				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int(FillColor) & int((int)16777215)),(Float(((int((int(FillColor) >> int((int)24))) & int((int)255)))) / Float((int)255)));
			}
		}
		HX_STACK_LINE(330)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->drawRoundRect(X,Y,Width,Height,EllipseWidth,EllipseHeight);
		HX_STACK_LINE(331)
		{
			HX_STACK_LINE(331)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
			HX_STACK_LINE(331)
			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
			HX_STACK_LINE(331)
			sprite;
		}
		HX_STACK_LINE(332)
		return sprite;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(FlxSpriteUtil_obj,drawRoundRect,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawCircle( ::flixel::FlxSprite sprite,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Radius,hx::Null< int >  __o_FillColor,Dynamic lineStyle,Dynamic drawStyle){
Float X = __o_X.Default(-1);
Float Y = __o_Y.Default(-1);
Float Radius = __o_Radius.Default(-1);
int FillColor = __o_FillColor.Default(-1);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawCircle",0x44dca643,"flixel.util.FlxSpriteUtil.drawCircle","flixel/util/FlxSpriteUtil.hx",379,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Radius,"Radius")
	HX_STACK_ARG(FillColor,"FillColor")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
{
		HX_STACK_LINE(380)
		if (((bool((X == (int)-1)) || bool((Y == (int)-1))))){
			HX_STACK_LINE(382)
			::flixel::math::FlxPoint midPoint = sprite->getGraphicMidpoint(null());		HX_STACK_VAR(midPoint,"midPoint");
			HX_STACK_LINE(384)
			if (((X == (int)-1))){
				HX_STACK_LINE(385)
				X = (midPoint->x - sprite->x);
			}
			HX_STACK_LINE(386)
			if (((Y == (int)-1))){
				HX_STACK_LINE(387)
				Y = (midPoint->y - sprite->y);
			}
			HX_STACK_LINE(389)
			midPoint->put();
		}
		HX_STACK_LINE(392)
		if (((Radius < (int)1))){
			HX_STACK_LINE(394)
			Float minVal = ::Math_obj::min(sprite->frameWidth,sprite->frameHeight);		HX_STACK_VAR(minVal,"minVal");
			HX_STACK_LINE(395)
			Radius = (Float(minVal) / Float((int)2));
		}
		HX_STACK_LINE(398)
		{
			HX_STACK_LINE(398)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
			HX_STACK_LINE(398)
			if (((lineStyle != null()))){
				HX_STACK_LINE(398)
				Dynamic color;		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(398)
				if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
					HX_STACK_LINE(398)
					color = (int)-16777216;
				}
				else{
					HX_STACK_LINE(398)
					color = lineStyle->__Field(HX_CSTRING("color"),true);
				}
				HX_STACK_LINE(398)
				if (((lineStyle->__Field(HX_CSTRING("thickness"),true) == null()))){
					HX_STACK_LINE(398)
					lineStyle->__FieldRef(HX_CSTRING("thickness")) = (int)1;
				}
				HX_STACK_LINE(398)
				if (((lineStyle->__Field(HX_CSTRING("pixelHinting"),true) == null()))){
					HX_STACK_LINE(398)
					lineStyle->__FieldRef(HX_CSTRING("pixelHinting")) = false;
				}
				HX_STACK_LINE(398)
				if (((lineStyle->__Field(HX_CSTRING("miterLimit"),true) == null()))){
					HX_STACK_LINE(398)
					lineStyle->__FieldRef(HX_CSTRING("miterLimit")) = (int)3;
				}
				struct _Function_3_1{
					inline static int Block( Dynamic &color){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",398,0xc647097f)
						{
							HX_STACK_LINE(398)
							int this1 = color;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(398)
							return (int(this1) & int((int)16777215));
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static Float Block( Dynamic &color){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",398,0xc647097f)
						{
							HX_STACK_LINE(398)
							int this1 = color;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(398)
							return (Float(((int((int(this1) >> int((int)24))) & int((int)255)))) / Float((int)255));
						}
						return null();
					}
				};
				HX_STACK_LINE(398)
				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_CSTRING("thickness"),true),_Function_3_1::Block(color),_Function_3_2::Block(color),lineStyle->__Field(HX_CSTRING("pixelHinting"),true),lineStyle->__Field(HX_CSTRING("scaleMode"),true),lineStyle->__Field(HX_CSTRING("capsStyle"),true),lineStyle->__Field(HX_CSTRING("jointStyle"),true),lineStyle->__Field(HX_CSTRING("miterLimit"),true));
			}
			HX_STACK_LINE(398)
			if (((FillColor != (int)0))){
				HX_STACK_LINE(398)
				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int(FillColor) & int((int)16777215)),(Float(((int((int(FillColor) >> int((int)24))) & int((int)255)))) / Float((int)255)));
			}
		}
		HX_STACK_LINE(399)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->drawCircle(X,Y,Radius);
		HX_STACK_LINE(400)
		{
			HX_STACK_LINE(400)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
			HX_STACK_LINE(400)
			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
			HX_STACK_LINE(400)
			sprite;
		}
		HX_STACK_LINE(401)
		return sprite;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxSpriteUtil_obj,drawCircle,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawEllipse( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,hx::Null< int >  __o_FillColor,Dynamic lineStyle,Dynamic drawStyle){
int FillColor = __o_FillColor.Default(-1);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawEllipse",0x1204b94b,"flixel.util.FlxSpriteUtil.drawEllipse","flixel/util/FlxSpriteUtil.hx",419,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(FillColor,"FillColor")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
{
		HX_STACK_LINE(420)
		{
			HX_STACK_LINE(420)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
			HX_STACK_LINE(420)
			if (((lineStyle != null()))){
				HX_STACK_LINE(420)
				Dynamic color;		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(420)
				if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
					HX_STACK_LINE(420)
					color = (int)-16777216;
				}
				else{
					HX_STACK_LINE(420)
					color = lineStyle->__Field(HX_CSTRING("color"),true);
				}
				HX_STACK_LINE(420)
				if (((lineStyle->__Field(HX_CSTRING("thickness"),true) == null()))){
					HX_STACK_LINE(420)
					lineStyle->__FieldRef(HX_CSTRING("thickness")) = (int)1;
				}
				HX_STACK_LINE(420)
				if (((lineStyle->__Field(HX_CSTRING("pixelHinting"),true) == null()))){
					HX_STACK_LINE(420)
					lineStyle->__FieldRef(HX_CSTRING("pixelHinting")) = false;
				}
				HX_STACK_LINE(420)
				if (((lineStyle->__Field(HX_CSTRING("miterLimit"),true) == null()))){
					HX_STACK_LINE(420)
					lineStyle->__FieldRef(HX_CSTRING("miterLimit")) = (int)3;
				}
				struct _Function_3_1{
					inline static int Block( Dynamic &color){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",420,0xc647097f)
						{
							HX_STACK_LINE(420)
							int this1 = color;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(420)
							return (int(this1) & int((int)16777215));
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static Float Block( Dynamic &color){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",420,0xc647097f)
						{
							HX_STACK_LINE(420)
							int this1 = color;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(420)
							return (Float(((int((int(this1) >> int((int)24))) & int((int)255)))) / Float((int)255));
						}
						return null();
					}
				};
				HX_STACK_LINE(420)
				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_CSTRING("thickness"),true),_Function_3_1::Block(color),_Function_3_2::Block(color),lineStyle->__Field(HX_CSTRING("pixelHinting"),true),lineStyle->__Field(HX_CSTRING("scaleMode"),true),lineStyle->__Field(HX_CSTRING("capsStyle"),true),lineStyle->__Field(HX_CSTRING("jointStyle"),true),lineStyle->__Field(HX_CSTRING("miterLimit"),true));
			}
			HX_STACK_LINE(420)
			if (((FillColor != (int)0))){
				HX_STACK_LINE(420)
				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int(FillColor) & int((int)16777215)),(Float(((int((int(FillColor) >> int((int)24))) & int((int)255)))) / Float((int)255)));
			}
		}
		HX_STACK_LINE(421)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->drawEllipse(X,Y,Width,Height);
		HX_STACK_LINE(422)
		{
			HX_STACK_LINE(422)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
			HX_STACK_LINE(422)
			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
			HX_STACK_LINE(422)
			sprite;
		}
		HX_STACK_LINE(423)
		return sprite;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxSpriteUtil_obj,drawEllipse,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawTriangle( ::flixel::FlxSprite sprite,Float X,Float Y,Float Height,hx::Null< int >  __o_FillColor,Dynamic lineStyle,Dynamic drawStyle){
int FillColor = __o_FillColor.Default(-1);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawTriangle",0x35f0a5bb,"flixel.util.FlxSpriteUtil.drawTriangle","flixel/util/FlxSpriteUtil.hx",440,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(FillColor,"FillColor")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
{
		HX_STACK_LINE(441)
		{
			HX_STACK_LINE(441)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
			HX_STACK_LINE(441)
			if (((lineStyle != null()))){
				HX_STACK_LINE(441)
				Dynamic color;		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(441)
				if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
					HX_STACK_LINE(441)
					color = (int)-16777216;
				}
				else{
					HX_STACK_LINE(441)
					color = lineStyle->__Field(HX_CSTRING("color"),true);
				}
				HX_STACK_LINE(441)
				if (((lineStyle->__Field(HX_CSTRING("thickness"),true) == null()))){
					HX_STACK_LINE(441)
					lineStyle->__FieldRef(HX_CSTRING("thickness")) = (int)1;
				}
				HX_STACK_LINE(441)
				if (((lineStyle->__Field(HX_CSTRING("pixelHinting"),true) == null()))){
					HX_STACK_LINE(441)
					lineStyle->__FieldRef(HX_CSTRING("pixelHinting")) = false;
				}
				HX_STACK_LINE(441)
				if (((lineStyle->__Field(HX_CSTRING("miterLimit"),true) == null()))){
					HX_STACK_LINE(441)
					lineStyle->__FieldRef(HX_CSTRING("miterLimit")) = (int)3;
				}
				struct _Function_3_1{
					inline static int Block( Dynamic &color){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",441,0xc647097f)
						{
							HX_STACK_LINE(441)
							int this1 = color;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(441)
							return (int(this1) & int((int)16777215));
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static Float Block( Dynamic &color){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",441,0xc647097f)
						{
							HX_STACK_LINE(441)
							int this1 = color;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(441)
							return (Float(((int((int(this1) >> int((int)24))) & int((int)255)))) / Float((int)255));
						}
						return null();
					}
				};
				HX_STACK_LINE(441)
				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_CSTRING("thickness"),true),_Function_3_1::Block(color),_Function_3_2::Block(color),lineStyle->__Field(HX_CSTRING("pixelHinting"),true),lineStyle->__Field(HX_CSTRING("scaleMode"),true),lineStyle->__Field(HX_CSTRING("capsStyle"),true),lineStyle->__Field(HX_CSTRING("jointStyle"),true),lineStyle->__Field(HX_CSTRING("miterLimit"),true));
			}
			HX_STACK_LINE(441)
			if (((FillColor != (int)0))){
				HX_STACK_LINE(441)
				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int(FillColor) & int((int)16777215)),(Float(((int((int(FillColor) >> int((int)24))) & int((int)255)))) / Float((int)255)));
			}
		}
		HX_STACK_LINE(442)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->moveTo((X + (Float(Height) / Float((int)2))),Y);
		HX_STACK_LINE(443)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->lineTo((X + Height),(Height + Y));
		HX_STACK_LINE(444)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->lineTo(X,(Height + Y));
		HX_STACK_LINE(445)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->lineTo((X + (Float(Height) / Float((int)2))),Y);
		HX_STACK_LINE(446)
		{
			HX_STACK_LINE(446)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
			HX_STACK_LINE(446)
			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
			HX_STACK_LINE(446)
			sprite;
		}
		HX_STACK_LINE(447)
		return sprite;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxSpriteUtil_obj,drawTriangle,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawPolygon( ::flixel::FlxSprite sprite,Array< ::Dynamic > Vertices,hx::Null< int >  __o_FillColor,Dynamic lineStyle,Dynamic drawStyle){
int FillColor = __o_FillColor.Default(-1);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","drawPolygon",0x190f7ae7,"flixel.util.FlxSpriteUtil.drawPolygon","flixel/util/FlxSpriteUtil.hx",462,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(Vertices,"Vertices")
	HX_STACK_ARG(FillColor,"FillColor")
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_ARG(drawStyle,"drawStyle")
{
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
			HX_STACK_LINE(463)
			if (((lineStyle != null()))){
				HX_STACK_LINE(463)
				Dynamic color;		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(463)
				if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
					HX_STACK_LINE(463)
					color = (int)-16777216;
				}
				else{
					HX_STACK_LINE(463)
					color = lineStyle->__Field(HX_CSTRING("color"),true);
				}
				HX_STACK_LINE(463)
				if (((lineStyle->__Field(HX_CSTRING("thickness"),true) == null()))){
					HX_STACK_LINE(463)
					lineStyle->__FieldRef(HX_CSTRING("thickness")) = (int)1;
				}
				HX_STACK_LINE(463)
				if (((lineStyle->__Field(HX_CSTRING("pixelHinting"),true) == null()))){
					HX_STACK_LINE(463)
					lineStyle->__FieldRef(HX_CSTRING("pixelHinting")) = false;
				}
				HX_STACK_LINE(463)
				if (((lineStyle->__Field(HX_CSTRING("miterLimit"),true) == null()))){
					HX_STACK_LINE(463)
					lineStyle->__FieldRef(HX_CSTRING("miterLimit")) = (int)3;
				}
				struct _Function_3_1{
					inline static int Block( Dynamic &color){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",463,0xc647097f)
						{
							HX_STACK_LINE(463)
							int this1 = color;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(463)
							return (int(this1) & int((int)16777215));
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static Float Block( Dynamic &color){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",463,0xc647097f)
						{
							HX_STACK_LINE(463)
							int this1 = color;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(463)
							return (Float(((int((int(this1) >> int((int)24))) & int((int)255)))) / Float((int)255));
						}
						return null();
					}
				};
				HX_STACK_LINE(463)
				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_CSTRING("thickness"),true),_Function_3_1::Block(color),_Function_3_2::Block(color),lineStyle->__Field(HX_CSTRING("pixelHinting"),true),lineStyle->__Field(HX_CSTRING("scaleMode"),true),lineStyle->__Field(HX_CSTRING("capsStyle"),true),lineStyle->__Field(HX_CSTRING("jointStyle"),true),lineStyle->__Field(HX_CSTRING("miterLimit"),true));
			}
			HX_STACK_LINE(463)
			if (((FillColor != (int)0))){
				HX_STACK_LINE(463)
				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int(FillColor) & int((int)16777215)),(Float(((int((int(FillColor) >> int((int)24))) & int((int)255)))) / Float((int)255)));
			}
		}
		HX_STACK_LINE(464)
		::flixel::math::FlxPoint p = Vertices->shift().StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(465)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->moveTo(p->x,p->y);
		HX_STACK_LINE(466)
		{
			HX_STACK_LINE(466)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(466)
			while((true)){
				HX_STACK_LINE(466)
				if ((!(((_g < Vertices->length))))){
					HX_STACK_LINE(466)
					break;
				}
				HX_STACK_LINE(466)
				::flixel::math::FlxPoint p1 = Vertices->__get(_g).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(466)
				++(_g);
				HX_STACK_LINE(468)
				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineTo(p1->x,p1->y);
			}
		}
		HX_STACK_LINE(470)
		{
			HX_STACK_LINE(470)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
			HX_STACK_LINE(470)
			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
			HX_STACK_LINE(470)
			sprite;
		}
		HX_STACK_LINE(471)
		Vertices->unshift(p);
		HX_STACK_LINE(472)
		return sprite;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxSpriteUtil_obj,drawPolygon,return )

Void FlxSpriteUtil_obj::beginDraw( int FillColor,Dynamic lineStyle){
{
		HX_STACK_FRAME("flixel.util.FlxSpriteUtil","beginDraw",0x53d0689e,"flixel.util.FlxSpriteUtil.beginDraw","flixel/util/FlxSpriteUtil.hx",483,0xc647097f)
		HX_STACK_ARG(FillColor,"FillColor")
		HX_STACK_ARG(lineStyle,"lineStyle")
		HX_STACK_LINE(484)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
		HX_STACK_LINE(485)
		if (((lineStyle != null()))){
			HX_STACK_LINE(485)
			Dynamic color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(485)
			if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
				HX_STACK_LINE(485)
				color = (int)-16777216;
			}
			else{
				HX_STACK_LINE(485)
				color = lineStyle->__Field(HX_CSTRING("color"),true);
			}
			HX_STACK_LINE(485)
			if (((lineStyle->__Field(HX_CSTRING("thickness"),true) == null()))){
				HX_STACK_LINE(485)
				lineStyle->__FieldRef(HX_CSTRING("thickness")) = (int)1;
			}
			HX_STACK_LINE(485)
			if (((lineStyle->__Field(HX_CSTRING("pixelHinting"),true) == null()))){
				HX_STACK_LINE(485)
				lineStyle->__FieldRef(HX_CSTRING("pixelHinting")) = false;
			}
			HX_STACK_LINE(485)
			if (((lineStyle->__Field(HX_CSTRING("miterLimit"),true) == null()))){
				HX_STACK_LINE(485)
				lineStyle->__FieldRef(HX_CSTRING("miterLimit")) = (int)3;
			}
			struct _Function_2_1{
				inline static int Block( Dynamic &color){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",485,0xc647097f)
					{
						HX_STACK_LINE(485)
						int this1 = color;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(485)
						return (int(this1) & int((int)16777215));
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( Dynamic &color){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",485,0xc647097f)
					{
						HX_STACK_LINE(485)
						int this1 = color;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(485)
						return (Float(((int((int(this1) >> int((int)24))) & int((int)255)))) / Float((int)255));
					}
					return null();
				}
			};
			HX_STACK_LINE(485)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_CSTRING("thickness"),true),_Function_2_1::Block(color),_Function_2_2::Block(color),lineStyle->__Field(HX_CSTRING("pixelHinting"),true),lineStyle->__Field(HX_CSTRING("scaleMode"),true),lineStyle->__Field(HX_CSTRING("capsStyle"),true),lineStyle->__Field(HX_CSTRING("jointStyle"),true),lineStyle->__Field(HX_CSTRING("miterLimit"),true));
		}
		HX_STACK_LINE(487)
		if (((FillColor != (int)0))){
			HX_STACK_LINE(489)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int(FillColor) & int((int)16777215)),(Float(((int((int(FillColor) >> int((int)24))) & int((int)255)))) / Float((int)255)));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,beginDraw,(void))

::flixel::FlxSprite FlxSpriteUtil_obj::endDraw( ::flixel::FlxSprite sprite,Dynamic drawStyle){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","endDraw",0x51197d10,"flixel.util.FlxSpriteUtil.endDraw","flixel/util/FlxSpriteUtil.hx",501,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(drawStyle,"drawStyle")
	HX_STACK_LINE(502)
	::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
	HX_STACK_LINE(503)
	::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
	HX_STACK_LINE(504)
	return sprite;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,endDraw,return )

::flixel::FlxSprite FlxSpriteUtil_obj::updateSpriteGraphic( ::flixel::FlxSprite sprite,Dynamic drawStyle){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","updateSpriteGraphic",0x448b866b,"flixel.util.FlxSpriteUtil.updateSpriteGraphic","flixel/util/FlxSpriteUtil.hx",516,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(drawStyle,"drawStyle")
	HX_STACK_LINE(517)
	if (((drawStyle == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",519,0xc647097f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("smoothing") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(519)
		drawStyle = _Function_2_1::Block();
	}
	else{
		HX_STACK_LINE(521)
		if (((drawStyle->__Field(HX_CSTRING("smoothing"),true) == null()))){
			HX_STACK_LINE(523)
			drawStyle->__FieldRef(HX_CSTRING("smoothing")) = false;
		}
	}
	HX_STACK_LINE(526)
	sprite->get_pixels()->draw(::flixel::util::FlxSpriteUtil_obj::flashGfxSprite,drawStyle->__Field(HX_CSTRING("matrix"),true),drawStyle->__Field(HX_CSTRING("colorTransform"),true),drawStyle->__Field(HX_CSTRING("blendMode"),true),drawStyle->__Field(HX_CSTRING("clipRect"),true),drawStyle->__Field(HX_CSTRING("smoothing"),true));
	HX_STACK_LINE(528)
	sprite->dirty = true;
	HX_STACK_LINE(529)
	sprite->graphic->resetFrameBitmaps();
	HX_STACK_LINE(530)
	return sprite;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,updateSpriteGraphic,return )

Void FlxSpriteUtil_obj::setLineStyle( Dynamic lineStyle){
{
		HX_STACK_FRAME("flixel.util.FlxSpriteUtil","setLineStyle",0xc19fc36a,"flixel.util.FlxSpriteUtil.setLineStyle","flixel/util/FlxSpriteUtil.hx",542,0xc647097f)
		HX_STACK_ARG(lineStyle,"lineStyle")
		HX_STACK_LINE(542)
		if (((lineStyle != null()))){
			HX_STACK_LINE(544)
			Dynamic color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(544)
			if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
				HX_STACK_LINE(544)
				color = (int)-16777216;
			}
			else{
				HX_STACK_LINE(544)
				color = lineStyle->__Field(HX_CSTRING("color"),true);
			}
			HX_STACK_LINE(546)
			if (((lineStyle->__Field(HX_CSTRING("thickness"),true) == null()))){
				HX_STACK_LINE(547)
				lineStyle->__FieldRef(HX_CSTRING("thickness")) = (int)1;
			}
			HX_STACK_LINE(548)
			if (((lineStyle->__Field(HX_CSTRING("pixelHinting"),true) == null()))){
				HX_STACK_LINE(549)
				lineStyle->__FieldRef(HX_CSTRING("pixelHinting")) = false;
			}
			HX_STACK_LINE(550)
			if (((lineStyle->__Field(HX_CSTRING("miterLimit"),true) == null()))){
				HX_STACK_LINE(551)
				lineStyle->__FieldRef(HX_CSTRING("miterLimit")) = (int)3;
			}
			struct _Function_2_1{
				inline static int Block( Dynamic &color){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",555,0xc647097f)
					{
						HX_STACK_LINE(555)
						int this1 = color;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(555)
						return (int(this1) & int((int)16777215));
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( Dynamic &color){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",556,0xc647097f)
					{
						HX_STACK_LINE(556)
						int this1 = color;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(556)
						return (Float(((int((int(this1) >> int((int)24))) & int((int)255)))) / Float((int)255));
					}
					return null();
				}
			};
			HX_STACK_LINE(553)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_CSTRING("thickness"),true),_Function_2_1::Block(color),_Function_2_2::Block(color),lineStyle->__Field(HX_CSTRING("pixelHinting"),true),lineStyle->__Field(HX_CSTRING("scaleMode"),true),lineStyle->__Field(HX_CSTRING("capsStyle"),true),lineStyle->__Field(HX_CSTRING("jointStyle"),true),lineStyle->__Field(HX_CSTRING("miterLimit"),true));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteUtil_obj,setLineStyle,(void))

Dynamic FlxSpriteUtil_obj::getDefaultLineStyle( Dynamic lineStyle){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","getDefaultLineStyle",0x36c9a563,"flixel.util.FlxSpriteUtil.getDefaultLineStyle","flixel/util/FlxSpriteUtil.hx",571,0xc647097f)
	HX_STACK_ARG(lineStyle,"lineStyle")
	HX_STACK_LINE(572)
	if (((lineStyle == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",573,0xc647097f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("thickness") , (int)1,false);
					__result->Add(HX_CSTRING("color") , (int)-1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(573)
		lineStyle = _Function_2_1::Block();
	}
	HX_STACK_LINE(574)
	if (((lineStyle->__Field(HX_CSTRING("thickness"),true) == null()))){
		HX_STACK_LINE(575)
		lineStyle->__FieldRef(HX_CSTRING("thickness")) = (int)1;
	}
	HX_STACK_LINE(576)
	if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
		HX_STACK_LINE(577)
		lineStyle->__FieldRef(HX_CSTRING("color")) = (int)-1;
	}
	HX_STACK_LINE(579)
	return lineStyle;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteUtil_obj,getDefaultLineStyle,return )

::flixel::FlxSprite FlxSpriteUtil_obj::fill( ::flixel::FlxSprite sprite,int FillColor){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","fill",0x7a944252,"flixel.util.FlxSpriteUtil.fill","flixel/util/FlxSpriteUtil.hx",590,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(FillColor,"FillColor")
	HX_STACK_LINE(591)
	::openfl::_v2::geom::Rectangle _g = sprite->get_pixels()->get_rect();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(591)
	sprite->get_pixels()->fillRect(_g,FillColor);
	HX_STACK_LINE(593)
	::openfl::_v2::display::BitmapData _g1 = sprite->get_pixels();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(593)
	if (((_g1 != sprite->framePixels))){
		HX_STACK_LINE(595)
		sprite->dirty = true;
	}
	HX_STACK_LINE(598)
	sprite->graphic->resetFrameBitmaps();
	HX_STACK_LINE(599)
	return sprite;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,fill,return )

::flixel::FlxObject FlxSpriteUtil_obj::flicker( ::flixel::FlxObject Object,hx::Null< Float >  __o_Duration,hx::Null< Float >  __o_Interval,hx::Null< bool >  __o_EndVisibility,hx::Null< bool >  __o_ForceRestart,Dynamic CompletionCallback,Dynamic ProgressCallback){
Float Duration = __o_Duration.Default(1);
Float Interval = __o_Interval.Default(0.04);
bool EndVisibility = __o_EndVisibility.Default(true);
bool ForceRestart = __o_ForceRestart.Default(true);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","flicker",0xa3717289,"flixel.util.FlxSpriteUtil.flicker","flixel/util/FlxSpriteUtil.hx",616,0xc647097f)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(Interval,"Interval")
	HX_STACK_ARG(EndVisibility,"EndVisibility")
	HX_STACK_ARG(ForceRestart,"ForceRestart")
	HX_STACK_ARG(CompletionCallback,"CompletionCallback")
	HX_STACK_ARG(ProgressCallback,"ProgressCallback")
{
		HX_STACK_LINE(617)
		::flixel::effects::FlxFlicker_obj::flicker(Object,Duration,Interval,EndVisibility,ForceRestart,CompletionCallback,ProgressCallback);
		HX_STACK_LINE(618)
		return Object;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxSpriteUtil_obj,flicker,return )

bool FlxSpriteUtil_obj::isFlickering( ::flixel::FlxObject Object){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","isFlickering",0x05aae043,"flixel.util.FlxSpriteUtil.isFlickering","flixel/util/FlxSpriteUtil.hx",628,0xc647097f)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(628)
	return ::flixel::effects::FlxFlicker_obj::isFlickering(Object);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteUtil_obj,isFlickering,return )

::flixel::FlxObject FlxSpriteUtil_obj::stopFlickering( ::flixel::FlxObject Object){
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","stopFlickering",0x9d49141b,"flixel.util.FlxSpriteUtil.stopFlickering","flixel/util/FlxSpriteUtil.hx",638,0xc647097f)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(639)
	::flixel::effects::FlxFlicker_obj::stopFlickering(Object);
	HX_STACK_LINE(640)
	return Object;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteUtil_obj,stopFlickering,return )

::flixel::FlxSprite FlxSpriteUtil_obj::fadeIn( ::flixel::FlxSprite sprite,hx::Null< Float >  __o_Duration,Dynamic ResetAlpha,Dynamic OnComplete){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","fadeIn",0xd9639210,"flixel.util.FlxSpriteUtil.fadeIn","flixel/util/FlxSpriteUtil.hx",651,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(ResetAlpha,"ResetAlpha")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(652)
		if ((ResetAlpha)){
			HX_STACK_LINE(654)
			sprite->set_alpha((int)0);
		}
		HX_STACK_LINE(656)
		Dynamic _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(656)
		{
			HX_STACK_LINE(656)
			Array< ::Dynamic > a1 = Array_obj< ::Dynamic >::__new().Add(sprite);		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,a1)
			Void run(Float f){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","flixel/util/FlxSpriteUtil.hx",656,0xc647097f)
				HX_STACK_ARG(f,"f")
				{
					HX_STACK_LINE(656)
					return null(::flixel::util::FlxSpriteUtil_obj::alphaTween(a1->__get((int)0).StaticCast< ::flixel::FlxSprite >(),f));
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(656)
			_g =  Dynamic(new _Function_2_1(a1));
		}
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &OnComplete){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",656,0xc647097f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("onComplete") , OnComplete,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(656)
		::flixel::tweens::FlxTween_obj::num(sprite->alpha,(int)1,Duration,_Function_1_1::Block(OnComplete),_g);
		HX_STACK_LINE(657)
		return sprite;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxSpriteUtil_obj,fadeIn,return )

::flixel::FlxSprite FlxSpriteUtil_obj::fadeOut( ::flixel::FlxSprite sprite,hx::Null< Float >  __o_Duration,Dynamic OnComplete){
Float Duration = __o_Duration.Default(1);
	HX_STACK_FRAME("flixel.util.FlxSpriteUtil","fadeOut",0x5dc0d003,"flixel.util.FlxSpriteUtil.fadeOut","flixel/util/FlxSpriteUtil.hx",668,0xc647097f)
	HX_STACK_ARG(sprite,"sprite")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(669)
		Dynamic _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(669)
		{
			HX_STACK_LINE(669)
			Array< ::Dynamic > a1 = Array_obj< ::Dynamic >::__new().Add(sprite);		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,a1)
			Void run(Float f){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","flixel/util/FlxSpriteUtil.hx",669,0xc647097f)
				HX_STACK_ARG(f,"f")
				{
					HX_STACK_LINE(669)
					return null(::flixel::util::FlxSpriteUtil_obj::alphaTween(a1->__get((int)0).StaticCast< ::flixel::FlxSprite >(),f));
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(669)
			_g =  Dynamic(new _Function_2_1(a1));
		}
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &OnComplete){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxSpriteUtil.hx",669,0xc647097f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("onComplete") , OnComplete,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(669)
		::flixel::tweens::FlxTween_obj::num(sprite->alpha,(int)0,Duration,_Function_1_1::Block(OnComplete),_g);
		HX_STACK_LINE(670)
		return sprite;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,fadeOut,return )

Void FlxSpriteUtil_obj::alphaTween( ::flixel::FlxSprite sprite,Float f){
{
		HX_STACK_FRAME("flixel.util.FlxSpriteUtil","alphaTween",0xe721b73c,"flixel.util.FlxSpriteUtil.alphaTween","flixel/util/FlxSpriteUtil.hx",675,0xc647097f)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(675)
		sprite->set_alpha(f);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,alphaTween,(void))


FlxSpriteUtil_obj::FlxSpriteUtil_obj()
{
}

Dynamic FlxSpriteUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bound") ) { return bound_dyn(); }
		if (HX_FIELD_EQ(inName,"space") ) { return space_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fadeIn") ) { return fadeIn_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endDraw") ) { return endDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"flicker") ) { return flicker_dyn(); }
		if (HX_FIELD_EQ(inName,"fadeOut") ) { return fadeOut_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"flashGfx") ) { return flashGfx; }
		if (HX_FIELD_EQ(inName,"drawLine") ) { return drawLine_dyn(); }
		if (HX_FIELD_EQ(inName,"drawRect") ) { return drawRect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alphaMask") ) { return alphaMask_dyn(); }
		if (HX_FIELD_EQ(inName,"drawCurve") ) { return drawCurve_dyn(); }
		if (HX_FIELD_EQ(inName,"beginDraw") ) { return beginDraw_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"screenWrap") ) { return screenWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"alphaTween") ) { return alphaTween_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { return drawEllipse_dyn(); }
		if (HX_FIELD_EQ(inName,"drawPolygon") ) { return drawPolygon_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenCenter") ) { return screenCenter_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTriangle") ) { return drawTriangle_dyn(); }
		if (HX_FIELD_EQ(inName,"setLineStyle") ) { return setLineStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"isFlickering") ) { return isFlickering_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return drawRoundRect_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"flashGfxSprite") ) { return flashGfxSprite; }
		if (HX_FIELD_EQ(inName,"stopFlickering") ) { return stopFlickering_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"alphaMaskFlxSprite") ) { return alphaMaskFlxSprite_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateSpriteGraphic") ) { return updateSpriteGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"getDefaultLineStyle") ) { return getDefaultLineStyle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSpriteUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"flashGfx") ) { flashGfx=inValue.Cast< ::openfl::_v2::display::Graphics >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"flashGfxSprite") ) { flashGfxSprite=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSpriteUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("flashGfxSprite"),
	HX_CSTRING("flashGfx"),
	HX_CSTRING("alphaMask"),
	HX_CSTRING("alphaMaskFlxSprite"),
	HX_CSTRING("screenWrap"),
	HX_CSTRING("bound"),
	HX_CSTRING("space"),
	HX_CSTRING("screenCenter"),
	HX_CSTRING("drawLine"),
	HX_CSTRING("drawCurve"),
	HX_CSTRING("drawRect"),
	HX_CSTRING("drawRoundRect"),
	HX_CSTRING("drawCircle"),
	HX_CSTRING("drawEllipse"),
	HX_CSTRING("drawTriangle"),
	HX_CSTRING("drawPolygon"),
	HX_CSTRING("beginDraw"),
	HX_CSTRING("endDraw"),
	HX_CSTRING("updateSpriteGraphic"),
	HX_CSTRING("setLineStyle"),
	HX_CSTRING("getDefaultLineStyle"),
	HX_CSTRING("fill"),
	HX_CSTRING("flicker"),
	HX_CSTRING("isFlickering"),
	HX_CSTRING("stopFlickering"),
	HX_CSTRING("fadeIn"),
	HX_CSTRING("fadeOut"),
	HX_CSTRING("alphaTween"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSpriteUtil_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxSpriteUtil_obj::flashGfxSprite,"flashGfxSprite");
	HX_MARK_MEMBER_NAME(FlxSpriteUtil_obj::flashGfx,"flashGfx");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSpriteUtil_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxSpriteUtil_obj::flashGfxSprite,"flashGfxSprite");
	HX_VISIT_MEMBER_NAME(FlxSpriteUtil_obj::flashGfx,"flashGfx");
};

#endif

Class FlxSpriteUtil_obj::__mClass;

void FlxSpriteUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxSpriteUtil"), hx::TCanCast< FlxSpriteUtil_obj> ,sStaticFields,sMemberFields,
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

void FlxSpriteUtil_obj::__boot()
{
	flashGfxSprite= ::openfl::_v2::display::Sprite_obj::__new();
	flashGfx= ::flixel::util::FlxSpriteUtil_obj::flashGfxSprite->get_graphics();
}

} // end namespace flixel
} // end namespace util
