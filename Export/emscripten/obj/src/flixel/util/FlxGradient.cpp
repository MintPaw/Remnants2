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
#ifndef INCLUDED_flixel_util_FlxGradient
#include <flixel/util/FlxGradient.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Bitmap
#include <openfl/_v2/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BlendMode
#include <openfl/_v2/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Shape
#include <openfl/_v2/display/Shape.h>
#endif
#ifndef INCLUDED_openfl__v2_display_SpreadMethod
#include <openfl/_v2/display/SpreadMethod.h>
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
#ifndef INCLUDED_openfl_display_GradientType
#include <openfl/display/GradientType.h>
#endif
#ifndef INCLUDED_openfl_display_InterpolationMethod
#include <openfl/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
namespace flixel{
namespace util{

Void FlxGradient_obj::__construct()
{
	return null();
}

//FlxGradient_obj::~FlxGradient_obj() { }

Dynamic FlxGradient_obj::__CreateEmpty() { return  new FlxGradient_obj; }
hx::ObjectPtr< FlxGradient_obj > FlxGradient_obj::__new()
{  hx::ObjectPtr< FlxGradient_obj > result = new FlxGradient_obj();
	result->__construct();
	return result;}

Dynamic FlxGradient_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGradient_obj > result = new FlxGradient_obj();
	result->__construct();
	return result;}

Dynamic FlxGradient_obj::createGradientMatrix( int width,int height,Array< int > colors,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
	HX_STACK_FRAME("flixel.util.FlxGradient","createGradientMatrix",0x11545e53,"flixel.util.FlxGradient.createGradientMatrix","flixel/util/FlxGradient.hx",26,0x5a5037d6)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
{
		HX_STACK_LINE(27)
		::openfl::_v2::geom::Matrix gradientMatrix = ::openfl::_v2::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(gradientMatrix,"gradientMatrix");
		HX_STACK_LINE(30)
		Float rot = (rotation * ((Float(::Math_obj::PI) / Float((int)180))));		HX_STACK_VAR(rot,"rot");
		struct _Function_1_1{
			inline static Float Block( int &height){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxGradient.hx",33,0x5a5037d6)
				{
					HX_STACK_LINE(33)
					int _int = height;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(33)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static Float Block( int &chunkSize){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxGradient.hx",33,0x5a5037d6)
				{
					HX_STACK_LINE(33)
					int _int = chunkSize;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(33)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(33)
		gradientMatrix->createGradientBox(width,(Float(_Function_1_1::Block(height)) / Float(_Function_1_2::Block(chunkSize))),rot,(int)0,(int)0);
		HX_STACK_LINE(36)
		Array< Float > alpha = Array_obj< Float >::__new();		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(38)
		{
			HX_STACK_LINE(38)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(38)
			int _g = colors->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(38)
			while((true)){
				HX_STACK_LINE(38)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(38)
					break;
				}
				HX_STACK_LINE(38)
				int ai = (_g1)++;		HX_STACK_VAR(ai,"ai");
				HX_STACK_LINE(40)
				alpha->push((Float(((int((int(colors->__get(ai)) >> int((int)24))) & int((int)255)))) / Float((int)255)));
			}
		}
		HX_STACK_LINE(43)
		Array< int > ratio = Array_obj< int >::__new();		HX_STACK_VAR(ratio,"ratio");
		HX_STACK_LINE(45)
		if (((colors->length == (int)2))){
			HX_STACK_LINE(47)
			ratio[(int)0] = (int)0;
			HX_STACK_LINE(48)
			ratio[(int)1] = (int)255;
		}
		else{
			HX_STACK_LINE(53)
			int spread = ::Std_obj::_int((Float((int)255) / Float(((colors->length - (int)1)))));		HX_STACK_VAR(spread,"spread");
			HX_STACK_LINE(55)
			ratio->push((int)0);
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(57)
				int _g = (colors->length - (int)1);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(57)
				while((true)){
					HX_STACK_LINE(57)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(57)
						break;
					}
					HX_STACK_LINE(57)
					int ri = (_g1)++;		HX_STACK_VAR(ri,"ri");
					HX_STACK_LINE(59)
					ratio->push((ri * spread));
				}
			}
			HX_STACK_LINE(62)
			ratio->push((int)255);
		}
		struct _Function_1_3{
			inline static Dynamic Block( Array< int > &ratio,Array< Float > &alpha,::openfl::_v2::geom::Matrix &gradientMatrix){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxGradient.hx",65,0x5a5037d6)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("matrix") , gradientMatrix,false);
					__result->Add(HX_CSTRING("alpha") , alpha,false);
					__result->Add(HX_CSTRING("ratio") , ratio,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(65)
		return _Function_1_3::Block(ratio,alpha,gradientMatrix);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxGradient_obj,createGradientMatrix,return )

Array< int > FlxGradient_obj::createGradientArray( int width,int height,Array< int > colors,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_interpolate){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
bool interpolate = __o_interpolate.Default(true);
	HX_STACK_FRAME("flixel.util.FlxGradient","createGradientArray",0xc5836dc7,"flixel.util.FlxGradient.createGradientArray","flixel/util/FlxGradient.hx",70,0x5a5037d6)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(interpolate,"interpolate")
{
		HX_STACK_LINE(71)
		::openfl::_v2::display::BitmapData data = ::flixel::util::FlxGradient_obj::createGradientBitmapData(width,height,colors,chunkSize,rotation,interpolate);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(72)
		Array< int > result = Array_obj< int >::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(74)
			int _g = data->get_height();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(74)
			while((true)){
				HX_STACK_LINE(74)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(74)
					break;
				}
				HX_STACK_LINE(74)
				int y = (_g1)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(76)
				int _g2 = data->getPixel32((int)0,y);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(76)
				result->push(_g2);
			}
		}
		HX_STACK_LINE(79)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxGradient_obj,createGradientArray,return )

::flixel::FlxSprite FlxGradient_obj::createGradientFlxSprite( int width,int height,Array< int > colors,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_interpolate){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
bool interpolate = __o_interpolate.Default(true);
	HX_STACK_FRAME("flixel.util.FlxGradient","createGradientFlxSprite",0xca14a545,"flixel.util.FlxGradient.createGradientFlxSprite","flixel/util/FlxGradient.hx",95,0x5a5037d6)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(interpolate,"interpolate")
{
		HX_STACK_LINE(96)
		::openfl::_v2::display::BitmapData data = ::flixel::util::FlxGradient_obj::createGradientBitmapData(width,height,colors,chunkSize,rotation,interpolate);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(97)
		::flixel::FlxSprite dest = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(dest,"dest");
		HX_STACK_LINE(98)
		dest->set_pixels(data);
		HX_STACK_LINE(99)
		return dest;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxGradient_obj,createGradientFlxSprite,return )

::openfl::_v2::display::BitmapData FlxGradient_obj::createGradientBitmapData( int width,int height,Array< int > colors,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_interpolate){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
bool interpolate = __o_interpolate.Default(true);
	HX_STACK_FRAME("flixel.util.FlxGradient","createGradientBitmapData",0xa3b74ecb,"flixel.util.FlxGradient.createGradientBitmapData","flixel/util/FlxGradient.hx",104,0x5a5037d6)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(interpolate,"interpolate")
{
		struct _Function_1_1{
			inline static bool Block( int &width){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxGradient.hx",106,0x5a5037d6)
				{
					HX_STACK_LINE(106)
					bool aNeg = ((int)1 < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(106)
					bool bNeg = (width < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(106)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool(((int)1 > width)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(106)
		if ((_Function_1_1::Block(width))){
			HX_STACK_LINE(108)
			width = (int)1;
		}
		struct _Function_1_2{
			inline static bool Block( int &height){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxGradient.hx",111,0x5a5037d6)
				{
					HX_STACK_LINE(111)
					bool aNeg = ((int)1 < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(111)
					bool bNeg = (height < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(111)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool(((int)1 > height)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(111)
		if ((_Function_1_2::Block(height))){
			HX_STACK_LINE(113)
			height = (int)1;
		}
		HX_STACK_LINE(116)
		Dynamic gradient = ::flixel::util::FlxGradient_obj::createGradientMatrix(width,height,colors,chunkSize,rotation);		HX_STACK_VAR(gradient,"gradient");
		HX_STACK_LINE(117)
		::openfl::_v2::display::Shape shape = ::openfl::_v2::display::Shape_obj::__new();		HX_STACK_VAR(shape,"shape");
		HX_STACK_LINE(118)
		::openfl::display::InterpolationMethod interpolationMethod;		HX_STACK_VAR(interpolationMethod,"interpolationMethod");
		HX_STACK_LINE(118)
		if ((interpolate)){
			HX_STACK_LINE(118)
			interpolationMethod = ::openfl::display::InterpolationMethod_obj::RGB;
		}
		else{
			HX_STACK_LINE(118)
			interpolationMethod = ::openfl::display::InterpolationMethod_obj::LINEAR_RGB;
		}
		HX_STACK_LINE(120)
		shape->get_graphics()->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,colors,gradient->__Field(HX_CSTRING("alpha"),true),gradient->__Field(HX_CSTRING("ratio"),true),gradient->__Field(HX_CSTRING("matrix"),true),::openfl::_v2::display::SpreadMethod_obj::PAD,interpolationMethod,(int)0);
		struct _Function_1_3{
			inline static Float Block( int &width){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxGradient.hx",123,0x5a5037d6)
				{
					HX_STACK_LINE(123)
					int _int = width;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(123)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		struct _Function_1_4{
			inline static Float Block( int &height){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxGradient.hx",123,0x5a5037d6)
				{
					HX_STACK_LINE(123)
					int _int = height;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(123)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		struct _Function_1_5{
			inline static Float Block( int &chunkSize){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxGradient.hx",123,0x5a5037d6)
				{
					HX_STACK_LINE(123)
					int _int = chunkSize;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(123)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(123)
		shape->get_graphics()->drawRect((int)0,(int)0,_Function_1_3::Block(width),(Float(_Function_1_4::Block(height)) / Float(_Function_1_5::Block(chunkSize))));
		HX_STACK_LINE(125)
		::openfl::_v2::display::BitmapData data = ::openfl::_v2::display::BitmapData_obj::__new(width,height,true,(int)0,null());		HX_STACK_VAR(data,"data");
		struct _Function_1_6{
			inline static Float Block( int &chunkSize){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxGradient.hx",127,0x5a5037d6)
				{
					HX_STACK_LINE(127)
					int _int = chunkSize;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(127)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(127)
		if (((_Function_1_6::Block(chunkSize) == (int)1))){
			HX_STACK_LINE(129)
			data->draw(shape,null(),null(),null(),null(),null());
		}
		else{
			struct _Function_2_1{
				inline static Float Block( int &height){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxGradient.hx",133,0x5a5037d6)
					{
						HX_STACK_LINE(133)
						int _int = height;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(133)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( int &chunkSize){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxGradient.hx",133,0x5a5037d6)
					{
						HX_STACK_LINE(133)
						int _int = chunkSize;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(133)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(133)
			int _g = ::Std_obj::_int((Float(_Function_2_1::Block(height)) / Float(_Function_2_2::Block(chunkSize))));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(133)
			::openfl::_v2::display::BitmapData _g1 = ::openfl::_v2::display::BitmapData_obj::__new(width,_g,true,(int)0,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(133)
			::openfl::_v2::display::Bitmap tempBitmap = ::openfl::_v2::display::Bitmap_obj::__new(_g1,null(),null());		HX_STACK_VAR(tempBitmap,"tempBitmap");
			HX_STACK_LINE(134)
			tempBitmap->bitmapData->draw(shape,null(),null(),null(),null(),null());
			struct _Function_2_3{
				inline static Float Block( int &chunkSize){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxGradient.hx",135,0x5a5037d6)
					{
						HX_STACK_LINE(135)
						int _int = chunkSize;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(135)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(135)
			tempBitmap->set_scaleY(_Function_2_3::Block(chunkSize));
			HX_STACK_LINE(137)
			::openfl::_v2::geom::Matrix sM = ::openfl::_v2::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(sM,"sM");
			HX_STACK_LINE(138)
			Float _g2 = tempBitmap->get_scaleX();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(138)
			Float _g3 = tempBitmap->get_scaleY();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(138)
			sM->scale(_g2,_g3);
			HX_STACK_LINE(140)
			data->draw(tempBitmap,sM,null(),null(),null(),null());
		}
		HX_STACK_LINE(143)
		return data;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxGradient_obj,createGradientBitmapData,return )

::flixel::FlxSprite FlxGradient_obj::overlayGradientOnFlxSprite( ::flixel::FlxSprite dest,int width,int height,Array< int > colors,hx::Null< int >  __o_destX,hx::Null< int >  __o_destY,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_interpolate){
int destX = __o_destX.Default(0);
int destY = __o_destY.Default(0);
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
bool interpolate = __o_interpolate.Default(true);
	HX_STACK_FRAME("flixel.util.FlxGradient","overlayGradientOnFlxSprite",0xe400659e,"flixel.util.FlxGradient.overlayGradientOnFlxSprite","flixel/util/FlxGradient.hx",163,0x5a5037d6)
	HX_STACK_ARG(dest,"dest")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(destX,"destX")
	HX_STACK_ARG(destY,"destY")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(interpolate,"interpolate")
{
		HX_STACK_LINE(164)
		Float _g = dest->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(164)
		if (((width > _g))){
			HX_STACK_LINE(166)
			Float _g1 = dest->get_width();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(166)
			int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(166)
			width = _g2;
		}
		HX_STACK_LINE(169)
		Float _g3 = dest->get_height();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(169)
		if (((height > _g3))){
			HX_STACK_LINE(171)
			Float _g4 = dest->get_height();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(171)
			int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(171)
			height = _g5;
		}
		HX_STACK_LINE(174)
		::flixel::FlxSprite source = ::flixel::util::FlxGradient_obj::createGradientFlxSprite(width,height,colors,chunkSize,rotation,interpolate);		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(175)
		dest->stamp(source,destX,destY);
		HX_STACK_LINE(176)
		source->destroy();
		HX_STACK_LINE(177)
		return dest;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxGradient_obj,overlayGradientOnFlxSprite,return )

::openfl::_v2::display::BitmapData FlxGradient_obj::overlayGradientOnBitmapData( ::openfl::_v2::display::BitmapData dest,int width,int height,Array< int > colors,hx::Null< int >  __o_destX,hx::Null< int >  __o_destY,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_interpolate){
int destX = __o_destX.Default(0);
int destY = __o_destY.Default(0);
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
bool interpolate = __o_interpolate.Default(true);
	HX_STACK_FRAME("flixel.util.FlxGradient","overlayGradientOnBitmapData",0x3813dc52,"flixel.util.FlxGradient.overlayGradientOnBitmapData","flixel/util/FlxGradient.hx",197,0x5a5037d6)
	HX_STACK_ARG(dest,"dest")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(destX,"destX")
	HX_STACK_ARG(destY,"destY")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(interpolate,"interpolate")
{
		HX_STACK_LINE(198)
		int _g = dest->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(198)
		if (((width > _g))){
			HX_STACK_LINE(200)
			int _g1 = dest->get_width();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(200)
			width = _g1;
		}
		HX_STACK_LINE(203)
		int _g2 = dest->get_height();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(203)
		if (((height > _g2))){
			HX_STACK_LINE(205)
			int _g3 = dest->get_height();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(205)
			height = _g3;
		}
		HX_STACK_LINE(208)
		::openfl::_v2::display::BitmapData source = ::flixel::util::FlxGradient_obj::createGradientBitmapData(width,height,colors,chunkSize,rotation,interpolate);		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(209)
		int _g4 = source->get_width();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(209)
		int _g5 = source->get_height();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(209)
		::openfl::_v2::geom::Rectangle _g6 = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,_g4,_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(209)
		::openfl::_v2::geom::Point _g7 = ::openfl::_v2::geom::Point_obj::__new(destX,destY);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(209)
		dest->copyPixels(source,_g6,_g7,null(),null(),true);
		HX_STACK_LINE(210)
		source->dispose();
		HX_STACK_LINE(211)
		return dest;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxGradient_obj,overlayGradientOnBitmapData,return )


FlxGradient_obj::FlxGradient_obj()
{
}

Dynamic FlxGradient_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"createGradientArray") ) { return createGradientArray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createGradientMatrix") ) { return createGradientMatrix_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"createGradientFlxSprite") ) { return createGradientFlxSprite_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"createGradientBitmapData") ) { return createGradientBitmapData_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"overlayGradientOnFlxSprite") ) { return overlayGradientOnFlxSprite_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"overlayGradientOnBitmapData") ) { return overlayGradientOnBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGradient_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGradient_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("createGradientMatrix"),
	HX_CSTRING("createGradientArray"),
	HX_CSTRING("createGradientFlxSprite"),
	HX_CSTRING("createGradientBitmapData"),
	HX_CSTRING("overlayGradientOnFlxSprite"),
	HX_CSTRING("overlayGradientOnBitmapData"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGradient_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGradient_obj::__mClass,"__mClass");
};

#endif

Class FlxGradient_obj::__mClass;

void FlxGradient_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxGradient"), hx::TCanCast< FlxGradient_obj> ,sStaticFields,sMemberFields,
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

void FlxGradient_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
