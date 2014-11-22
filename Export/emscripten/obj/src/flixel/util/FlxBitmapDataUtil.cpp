#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_util_FlxBitmapDataUtil
#include <flixel/util/FlxBitmapDataUtil.h>
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
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
namespace util{

Void FlxBitmapDataUtil_obj::__construct()
{
	return null();
}

//FlxBitmapDataUtil_obj::~FlxBitmapDataUtil_obj() { }

Dynamic FlxBitmapDataUtil_obj::__CreateEmpty() { return  new FlxBitmapDataUtil_obj; }
hx::ObjectPtr< FlxBitmapDataUtil_obj > FlxBitmapDataUtil_obj::__new()
{  hx::ObjectPtr< FlxBitmapDataUtil_obj > result = new FlxBitmapDataUtil_obj();
	result->__construct();
	return result;}

Dynamic FlxBitmapDataUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBitmapDataUtil_obj > result = new FlxBitmapDataUtil_obj();
	result->__construct();
	return result;}

Void FlxBitmapDataUtil_obj::merge( ::openfl::_v2::display::BitmapData sourceBitmapData,::openfl::_v2::geom::Rectangle sourceRect,::openfl::_v2::display::BitmapData destBitmapData,::openfl::_v2::geom::Point destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("flixel.util.FlxBitmapDataUtil","merge",0x21db12bd,"flixel.util.FlxBitmapDataUtil.merge","flixel/util/FlxBitmapDataUtil.hx",32,0xf477b24b)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destBitmapData,"destBitmapData")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(36)
		int _g = destBitmapData->get_width();		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static bool Block( ::openfl::_v2::geom::Point &destPoint,::openfl::_v2::display::BitmapData &destBitmapData){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxBitmapDataUtil.hx",37,0xf477b24b)
				{
					HX_STACK_LINE(37)
					int _g1 = destBitmapData->get_height();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(37)
					return (destPoint->y >= _g1);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( ::openfl::_v2::geom::Rectangle &sourceRect,::openfl::_v2::display::BitmapData &sourceBitmapData){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxBitmapDataUtil.hx",38,0xf477b24b)
				{
					HX_STACK_LINE(38)
					int _g2 = sourceBitmapData->get_width();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(38)
					return (sourceRect->x >= _g2);
				}
				return null();
			}
		};
		struct _Function_1_3{
			inline static bool Block( ::openfl::_v2::geom::Rectangle &sourceRect,::openfl::_v2::display::BitmapData &sourceBitmapData){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxBitmapDataUtil.hx",39,0xf477b24b)
				{
					HX_STACK_LINE(39)
					int _g3 = sourceBitmapData->get_height();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(39)
					return (sourceRect->y >= _g3);
				}
				return null();
			}
		};
		HX_STACK_LINE(36)
		if (((  ((!(((  ((!(((  ((!(((  ((!(((  ((!(((destPoint->x >= _g))))) ? bool(_Function_1_1::Block(destPoint,destBitmapData)) : bool(true) ))))) ? bool(_Function_1_2::Block(sourceRect,sourceBitmapData)) : bool(true) ))))) ? bool(_Function_1_3::Block(sourceRect,sourceBitmapData)) : bool(true) ))))) ? bool(((sourceRect->x + sourceRect->width) <= (int)0)) : bool(true) ))))) ? bool(((sourceRect->y + sourceRect->height) <= (int)0)) : bool(true) ))){
			HX_STACK_LINE(43)
			return null();
		}
		HX_STACK_LINE(47)
		while((true)){
			HX_STACK_LINE(47)
			int _g4 = sourceBitmapData->get_width();		HX_STACK_VAR(_g4,"_g4");
			struct _Function_2_1{
				inline static bool Block( ::openfl::_v2::geom::Rectangle &sourceRect,::openfl::_v2::display::BitmapData &sourceBitmapData){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxBitmapDataUtil.hx",48,0xf477b24b)
					{
						HX_STACK_LINE(48)
						int _g5 = sourceBitmapData->get_height();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(48)
						return ((sourceRect->y + sourceRect->height) > _g5);
					}
					return null();
				}
			};
			HX_STACK_LINE(47)
			if ((!(((  ((!(((  ((!(((  ((!(((  ((!(((  ((!((((sourceRect->x + sourceRect->width) > _g4))))) ? bool(_Function_2_1::Block(sourceRect,sourceBitmapData)) : bool(true) ))))) ? bool((sourceRect->x < (int)0)) : bool(true) ))))) ? bool((sourceRect->y < (int)0)) : bool(true) ))))) ? bool((destPoint->x < (int)0)) : bool(true) ))))) ? bool((destPoint->y < (int)0)) : bool(true) ))))){
				HX_STACK_LINE(47)
				break;
			}
			HX_STACK_LINE(54)
			int _g6 = sourceBitmapData->get_width();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(54)
			if ((((sourceRect->x + sourceRect->width) > _g6))){
				HX_STACK_LINE(54)
				int _g7 = sourceBitmapData->get_width();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(54)
				Float _g8 = (_g7 - sourceRect->x);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(54)
				sourceRect->width = _g8;
			}
			HX_STACK_LINE(55)
			int _g9 = sourceBitmapData->get_height();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(55)
			if ((((sourceRect->y + sourceRect->height) > _g9))){
				HX_STACK_LINE(55)
				int _g10 = sourceBitmapData->get_height();		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(55)
				Float _g11 = (_g10 - sourceRect->y);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(55)
				sourceRect->height = _g11;
			}
			HX_STACK_LINE(57)
			if (((sourceRect->x < (int)0))){
				HX_STACK_LINE(59)
				destPoint->x = (destPoint->x - sourceRect->x);
				HX_STACK_LINE(60)
				sourceRect->width = (sourceRect->width + sourceRect->x);
				HX_STACK_LINE(61)
				sourceRect->x = (int)0;
			}
			HX_STACK_LINE(64)
			if (((sourceRect->y < (int)0))){
				HX_STACK_LINE(66)
				destPoint->y = (destPoint->y - sourceRect->y);
				HX_STACK_LINE(67)
				sourceRect->height = (sourceRect->height + sourceRect->y);
				HX_STACK_LINE(68)
				sourceRect->y = (int)0;
			}
			HX_STACK_LINE(71)
			int _g12 = destBitmapData->get_width();		HX_STACK_VAR(_g12,"_g12");
			struct _Function_2_2{
				inline static bool Block( ::openfl::_v2::geom::Point &destPoint,::openfl::_v2::display::BitmapData &destBitmapData){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxBitmapDataUtil.hx",71,0xf477b24b)
					{
						HX_STACK_LINE(71)
						int _g13 = destBitmapData->get_height();		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(71)
						return (destPoint->y >= _g13);
					}
					return null();
				}
			};
			HX_STACK_LINE(71)
			if (((  ((!(((destPoint->x >= _g12))))) ? bool(_Function_2_2::Block(destPoint,destBitmapData)) : bool(true) ))){
				HX_STACK_LINE(71)
				return null();
			}
			HX_STACK_LINE(73)
			if (((destPoint->x < (int)0))){
				HX_STACK_LINE(75)
				sourceRect->x = (sourceRect->x - destPoint->x);
				HX_STACK_LINE(76)
				sourceRect->width = (sourceRect->width + destPoint->x);
				HX_STACK_LINE(77)
				destPoint->x = (int)0;
			}
			HX_STACK_LINE(80)
			if (((destPoint->y < (int)0))){
				HX_STACK_LINE(82)
				sourceRect->y = (sourceRect->y - destPoint->y);
				HX_STACK_LINE(83)
				sourceRect->height = (sourceRect->height + destPoint->y);
				HX_STACK_LINE(84)
				destPoint->y = (int)0;
			}
		}
		HX_STACK_LINE(88)
		if (((bool((sourceRect->width <= (int)0)) || bool((sourceRect->height <= (int)0))))){
			HX_STACK_LINE(88)
			return null();
		}
		HX_STACK_LINE(90)
		int startSourceX = ::Math_obj::round(sourceRect->x);		HX_STACK_VAR(startSourceX,"startSourceX");
		HX_STACK_LINE(91)
		int startSourceY = ::Math_obj::round(sourceRect->y);		HX_STACK_VAR(startSourceY,"startSourceY");
		HX_STACK_LINE(93)
		int width = ::Math_obj::round(sourceRect->width);		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(94)
		int height = ::Math_obj::round(sourceRect->height);		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(96)
		int sourceX = startSourceX;		HX_STACK_VAR(sourceX,"sourceX");
		HX_STACK_LINE(97)
		int sourceY = startSourceY;		HX_STACK_VAR(sourceY,"sourceY");
		HX_STACK_LINE(99)
		int destX = ::Math_obj::round(destPoint->x);		HX_STACK_VAR(destX,"destX");
		HX_STACK_LINE(100)
		int destY = ::Math_obj::round(destPoint->y);		HX_STACK_VAR(destY,"destY");
		HX_STACK_LINE(102)
		int currX = destX;		HX_STACK_VAR(currX,"currX");
		HX_STACK_LINE(103)
		int currY = destY;		HX_STACK_VAR(currY,"currY");
		HX_STACK_LINE(105)
		int sourceColor;		HX_STACK_VAR(sourceColor,"sourceColor");
		HX_STACK_LINE(106)
		int destColor;		HX_STACK_VAR(destColor,"destColor");
		HX_STACK_LINE(108)
		int resultRed;		HX_STACK_VAR(resultRed,"resultRed");
		HX_STACK_LINE(109)
		int resultGreen;		HX_STACK_VAR(resultGreen,"resultGreen");
		HX_STACK_LINE(110)
		int resultBlue;		HX_STACK_VAR(resultBlue,"resultBlue");
		HX_STACK_LINE(111)
		int resultAlpha;		HX_STACK_VAR(resultAlpha,"resultAlpha");
		HX_STACK_LINE(113)
		int resultColor = (int)0;		HX_STACK_VAR(resultColor,"resultColor");
		HX_STACK_LINE(114)
		destBitmapData->lock();
		HX_STACK_LINE(117)
		{
			HX_STACK_LINE(117)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(117)
			while((true)){
				HX_STACK_LINE(117)
				if ((!(((_g1 < width))))){
					HX_STACK_LINE(117)
					break;
				}
				HX_STACK_LINE(117)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(119)
				{
					HX_STACK_LINE(119)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(119)
					while((true)){
						HX_STACK_LINE(119)
						if ((!(((_g11 < height))))){
							HX_STACK_LINE(119)
							break;
						}
						HX_STACK_LINE(119)
						int j = (_g11)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(121)
						sourceX = (startSourceX + i);
						HX_STACK_LINE(122)
						sourceY = (startSourceY + j);
						HX_STACK_LINE(124)
						currX = (destX + i);
						HX_STACK_LINE(125)
						currY = (destY + j);
						HX_STACK_LINE(127)
						int _g14 = sourceBitmapData->getPixel32(sourceX,sourceY);		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(127)
						sourceColor = _g14;
						HX_STACK_LINE(128)
						int _g15 = destBitmapData->getPixel32(currX,currY);		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(128)
						destColor = _g15;
						HX_STACK_LINE(131)
						int _g16 = ::Std_obj::_int((Float((((((int((int(sourceColor) >> int((int)16))) & int((int)255))) * redMultiplier) + (((int((int(destColor) >> int((int)16))) & int((int)255))) * (((int)256 - redMultiplier)))))) / Float((int)256)));		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(131)
						resultRed = _g16;
						HX_STACK_LINE(132)
						int _g17 = ::Std_obj::_int((Float((((((int((int(sourceColor) >> int((int)8))) & int((int)255))) * greenMultiplier) + (((int((int(destColor) >> int((int)8))) & int((int)255))) * (((int)256 - greenMultiplier)))))) / Float((int)256)));		HX_STACK_VAR(_g17,"_g17");
						HX_STACK_LINE(132)
						resultGreen = _g17;
						HX_STACK_LINE(133)
						int _g18 = ::Std_obj::_int((Float((((((int(sourceColor) & int((int)255))) * blueMultiplier) + (((int(destColor) & int((int)255))) * (((int)256 - blueMultiplier)))))) / Float((int)256)));		HX_STACK_VAR(_g18,"_g18");
						HX_STACK_LINE(133)
						resultBlue = _g18;
						HX_STACK_LINE(134)
						int _g19 = ::Std_obj::_int((Float((((((int((int(sourceColor) >> int((int)24))) & int((int)255))) * alphaMultiplier) + (((int((int(destColor) >> int((int)24))) & int((int)255))) * (((int)256 - alphaMultiplier)))))) / Float((int)256)));		HX_STACK_VAR(_g19,"_g19");
						HX_STACK_LINE(134)
						resultAlpha = _g19;
						HX_STACK_LINE(137)
						int _g20;		HX_STACK_VAR(_g20,"_g20");
						HX_STACK_LINE(137)
						{
							HX_STACK_LINE(137)
							int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(color,"color");
							struct _Function_6_1{
								inline static int Block( int &resultGreen,int &resultAlpha,int &resultBlue,int &color,int &resultRed){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxBitmapDataUtil.hx",137,0xf477b24b)
									{
										HX_STACK_LINE(137)
										{
											HX_STACK_LINE(137)
											hx::AndEq(color,(int)-16711681);
											HX_STACK_LINE(137)
											hx::OrEq(color,(int(((  (((resultRed > (int)255))) ? int((int)255) : int((  (((resultRed < (int)0))) ? int((int)0) : int(resultRed) )) ))) << int((int)16)));
											HX_STACK_LINE(137)
											resultRed;
										}
										HX_STACK_LINE(137)
										{
											HX_STACK_LINE(137)
											hx::AndEq(color,(int)-65281);
											HX_STACK_LINE(137)
											hx::OrEq(color,(int(((  (((resultGreen > (int)255))) ? int((int)255) : int((  (((resultGreen < (int)0))) ? int((int)0) : int(resultGreen) )) ))) << int((int)8)));
											HX_STACK_LINE(137)
											resultGreen;
										}
										HX_STACK_LINE(137)
										{
											HX_STACK_LINE(137)
											hx::AndEq(color,(int)-256);
											HX_STACK_LINE(137)
											if (((resultBlue > (int)255))){
												HX_STACK_LINE(137)
												hx::OrEq(color,(int)255);
											}
											else{
												HX_STACK_LINE(137)
												if (((resultBlue < (int)0))){
													HX_STACK_LINE(137)
													hx::OrEq(color,(int)0);
												}
												else{
													HX_STACK_LINE(137)
													hx::OrEq(color,resultBlue);
												}
											}
											HX_STACK_LINE(137)
											resultBlue;
										}
										HX_STACK_LINE(137)
										{
											HX_STACK_LINE(137)
											hx::AndEq(color,(int)16777215);
											HX_STACK_LINE(137)
											hx::OrEq(color,(int(((  (((resultAlpha > (int)255))) ? int((int)255) : int((  (((resultAlpha < (int)0))) ? int((int)0) : int(resultAlpha) )) ))) << int((int)24)));
											HX_STACK_LINE(137)
											resultAlpha;
										}
										HX_STACK_LINE(137)
										return color;
									}
									return null();
								}
							};
							HX_STACK_LINE(137)
							_g20 = _Function_6_1::Block(resultGreen,resultAlpha,resultBlue,color,resultRed);
						}
						HX_STACK_LINE(137)
						resultColor = _g20;
						HX_STACK_LINE(140)
						destBitmapData->setPixel32(currX,currY,resultColor);
					}
				}
			}
		}
		HX_STACK_LINE(143)
		destBitmapData->unlock(null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxBitmapDataUtil_obj,merge,(void))

int FlxBitmapDataUtil_obj::mergeColorComponent( int source,int dest,int multiplier){
	HX_STACK_FRAME("flixel.util.FlxBitmapDataUtil","mergeColorComponent",0x5b71b277,"flixel.util.FlxBitmapDataUtil.mergeColorComponent","flixel/util/FlxBitmapDataUtil.hx",149,0xf477b24b)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(dest,"dest")
	HX_STACK_ARG(multiplier,"multiplier")
	HX_STACK_LINE(149)
	return ::Std_obj::_int((Float((((source * multiplier) + (dest * (((int)256 - multiplier)))))) / Float((int)256)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxBitmapDataUtil_obj,mergeColorComponent,return )

Dynamic FlxBitmapDataUtil_obj::compare( ::openfl::_v2::display::BitmapData Bitmap1,::openfl::_v2::display::BitmapData Bitmap2){
	HX_STACK_FRAME("flixel.util.FlxBitmapDataUtil","compare",0x217d53ea,"flixel.util.FlxBitmapDataUtil.compare","flixel/util/FlxBitmapDataUtil.hx",164,0xf477b24b)
	HX_STACK_ARG(Bitmap1,"Bitmap1")
	HX_STACK_ARG(Bitmap2,"Bitmap2")
	HX_STACK_LINE(168)
	if (((Bitmap1 == Bitmap2))){
		HX_STACK_LINE(170)
		return (int)0;
	}
	HX_STACK_LINE(172)
	int _g = Bitmap1->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(172)
	int _g1 = Bitmap2->get_width();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(172)
	if (((_g != _g1))){
		HX_STACK_LINE(174)
		return (int)-3;
	}
	else{
		HX_STACK_LINE(176)
		int _g2 = Bitmap1->get_height();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(176)
		int _g3 = Bitmap2->get_height();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(176)
		if (((_g2 != _g3))){
			HX_STACK_LINE(178)
			return (int)-4;
		}
		else{
			HX_STACK_LINE(182)
			int width = Bitmap1->get_width();		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(183)
			int height = Bitmap1->get_height();		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(184)
			::openfl::_v2::display::BitmapData result = ::openfl::_v2::display::BitmapData_obj::__new(width,height,true,(int)0,null());		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(185)
			bool identical = true;		HX_STACK_VAR(identical,"identical");
			HX_STACK_LINE(187)
			int pixel1;		HX_STACK_VAR(pixel1,"pixel1");
			HX_STACK_LINE(187)
			int pixel2;		HX_STACK_VAR(pixel2,"pixel2");
			HX_STACK_LINE(188)
			int rgb1;		HX_STACK_VAR(rgb1,"rgb1");
			HX_STACK_LINE(188)
			int rgb2;		HX_STACK_VAR(rgb2,"rgb2");
			HX_STACK_LINE(189)
			int r1;		HX_STACK_VAR(r1,"r1");
			HX_STACK_LINE(189)
			int g1;		HX_STACK_VAR(g1,"g1");
			HX_STACK_LINE(189)
			int b1;		HX_STACK_VAR(b1,"b1");
			HX_STACK_LINE(190)
			int r2;		HX_STACK_VAR(r2,"r2");
			HX_STACK_LINE(190)
			int g2;		HX_STACK_VAR(g2,"g2");
			HX_STACK_LINE(190)
			int b2;		HX_STACK_VAR(b2,"b2");
			HX_STACK_LINE(191)
			int alpha1;		HX_STACK_VAR(alpha1,"alpha1");
			HX_STACK_LINE(191)
			int alpha2;		HX_STACK_VAR(alpha2,"alpha2");
			HX_STACK_LINE(192)
			int resultAlpha;		HX_STACK_VAR(resultAlpha,"resultAlpha");
			HX_STACK_LINE(192)
			int resultColor;		HX_STACK_VAR(resultColor,"resultColor");
			HX_STACK_LINE(193)
			int resultR;		HX_STACK_VAR(resultR,"resultR");
			HX_STACK_LINE(193)
			int resultG;		HX_STACK_VAR(resultG,"resultG");
			HX_STACK_LINE(193)
			int resultB;		HX_STACK_VAR(resultB,"resultB");
			HX_STACK_LINE(194)
			int diffR;		HX_STACK_VAR(diffR,"diffR");
			HX_STACK_LINE(194)
			int diffG;		HX_STACK_VAR(diffG,"diffG");
			HX_STACK_LINE(194)
			int diffB;		HX_STACK_VAR(diffB,"diffB");
			HX_STACK_LINE(194)
			int diffA;		HX_STACK_VAR(diffA,"diffA");
			HX_STACK_LINE(195)
			bool checkAlpha = true;		HX_STACK_VAR(checkAlpha,"checkAlpha");
			HX_STACK_LINE(197)
			{
				HX_STACK_LINE(197)
				int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(197)
				while((true)){
					HX_STACK_LINE(197)
					if ((!(((_g4 < width))))){
						HX_STACK_LINE(197)
						break;
					}
					HX_STACK_LINE(197)
					int i = (_g4)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(199)
					{
						HX_STACK_LINE(199)
						int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(199)
						while((true)){
							HX_STACK_LINE(199)
							if ((!(((_g11 < height))))){
								HX_STACK_LINE(199)
								break;
							}
							HX_STACK_LINE(199)
							int j = (_g11)++;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(201)
							int _g41 = Bitmap1->getPixel32(i,j);		HX_STACK_VAR(_g41,"_g41");
							HX_STACK_LINE(201)
							pixel1 = _g41;
							HX_STACK_LINE(202)
							int _g5 = Bitmap2->getPixel32(i,j);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(202)
							pixel2 = _g5;
							HX_STACK_LINE(204)
							if (((pixel1 != pixel2))){
								HX_STACK_LINE(206)
								identical = false;
								HX_STACK_LINE(207)
								checkAlpha = true;
								HX_STACK_LINE(209)
								rgb1 = (int(pixel1) & int((int)16777215));
								HX_STACK_LINE(210)
								rgb2 = (int(pixel2) & int((int)16777215));
								HX_STACK_LINE(212)
								if (((rgb1 != rgb2))){
									HX_STACK_LINE(214)
									r1 = (int((int(pixel1) >> int((int)16))) & int((int)255));
									HX_STACK_LINE(215)
									g1 = (int((int(pixel1) >> int((int)8))) & int((int)255));
									HX_STACK_LINE(216)
									b1 = (int(pixel1) & int((int)255));
									HX_STACK_LINE(218)
									r2 = (int((int(pixel2) >> int((int)16))) & int((int)255));
									HX_STACK_LINE(219)
									g2 = (int((int(pixel2) >> int((int)8))) & int((int)255));
									HX_STACK_LINE(220)
									b2 = (int(pixel2) & int((int)255));
									HX_STACK_LINE(222)
									diffR = (r1 - r2);
									HX_STACK_LINE(223)
									diffG = (g1 - g2);
									HX_STACK_LINE(224)
									diffB = (b1 - b2);
									HX_STACK_LINE(226)
									if (((diffR >= (int)0))){
										HX_STACK_LINE(226)
										resultR = diffR;
									}
									else{
										HX_STACK_LINE(226)
										resultR = ((int)256 + diffR);
									}
									HX_STACK_LINE(227)
									if (((diffG >= (int)0))){
										HX_STACK_LINE(227)
										resultG = diffG;
									}
									else{
										HX_STACK_LINE(227)
										resultG = ((int)256 + diffG);
									}
									HX_STACK_LINE(228)
									if (((diffB >= (int)0))){
										HX_STACK_LINE(228)
										resultB = diffB;
									}
									else{
										HX_STACK_LINE(228)
										resultB = ((int)256 + diffB);
									}
									HX_STACK_LINE(230)
									resultColor = (int((int((int((int)-16777216) | int((int(resultR) << int((int)16))))) | int((int(resultG) << int((int)8))))) | int(resultB));
									HX_STACK_LINE(231)
									result->setPixel32(i,j,resultColor);
									HX_STACK_LINE(233)
									checkAlpha = false;
								}
								HX_STACK_LINE(236)
								if ((checkAlpha)){
									HX_STACK_LINE(238)
									alpha1 = (int((int(pixel1) >> int((int)24))) & int((int)255));
									HX_STACK_LINE(239)
									alpha2 = (int((int(pixel2) >> int((int)24))) & int((int)255));
									HX_STACK_LINE(240)
									diffA = (alpha1 - alpha2);
									HX_STACK_LINE(241)
									if (((diffA >= (int)0))){
										HX_STACK_LINE(241)
										resultAlpha = diffA;
									}
									else{
										HX_STACK_LINE(241)
										resultAlpha = ((int)256 + diffA);
									}
									HX_STACK_LINE(242)
									resultColor = (int((int((int(resultAlpha) | int((int)16711680))) | int((int)65280))) | int((int)255));
									HX_STACK_LINE(244)
									if (((alpha1 != alpha2))){
										HX_STACK_LINE(246)
										result->setPixel32(i,j,resultColor);
									}
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(253)
			if ((!(identical))){
				HX_STACK_LINE(255)
				return result;
			}
		}
	}
	HX_STACK_LINE(259)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxBitmapDataUtil_obj,compare,return )

Float FlxBitmapDataUtil_obj::getMemorySize( ::openfl::_v2::display::BitmapData bitmapData){
	HX_STACK_FRAME("flixel.util.FlxBitmapDataUtil","getMemorySize",0x5bc2859d,"flixel.util.FlxBitmapDataUtil.getMemorySize","flixel/util/FlxBitmapDataUtil.hx",267,0xf477b24b)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_LINE(268)
	int _g = bitmapData->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(268)
	int _g1 = bitmapData->get_height();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(268)
	int _g2 = (_g * _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(268)
	return (_g2 * (int)4);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapDataUtil_obj,getMemorySize,return )

Array< ::Dynamic > FlxBitmapDataUtil_obj::replaceColor( ::openfl::_v2::display::BitmapData bitmapData,int color,int newColor,hx::Null< bool >  __o_fetchPositions,::flixel::math::FlxRect rect){
bool fetchPositions = __o_fetchPositions.Default(false);
	HX_STACK_FRAME("flixel.util.FlxBitmapDataUtil","replaceColor",0xbc41272a,"flixel.util.FlxBitmapDataUtil.replaceColor","flixel/util/FlxBitmapDataUtil.hx",283,0xf477b24b)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(newColor,"newColor")
	HX_STACK_ARG(fetchPositions,"fetchPositions")
	HX_STACK_ARG(rect,"rect")
{
		HX_STACK_LINE(284)
		Array< ::Dynamic > positions = null();		HX_STACK_VAR(positions,"positions");
		HX_STACK_LINE(285)
		if ((fetchPositions)){
			HX_STACK_LINE(287)
			Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(287)
			positions = _g;
		}
		HX_STACK_LINE(290)
		int startX = (int)0;		HX_STACK_VAR(startX,"startX");
		HX_STACK_LINE(291)
		int startY = (int)0;		HX_STACK_VAR(startY,"startY");
		HX_STACK_LINE(292)
		int columns = bitmapData->get_width();		HX_STACK_VAR(columns,"columns");
		HX_STACK_LINE(293)
		int rows = bitmapData->get_height();		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(295)
		if (((rect != null()))){
			HX_STACK_LINE(297)
			int _g1 = ::Std_obj::_int(rect->x);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(297)
			startX = _g1;
			HX_STACK_LINE(298)
			int _g2 = ::Std_obj::_int(rect->y);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(298)
			startY = _g2;
			HX_STACK_LINE(299)
			int _g3 = ::Std_obj::_int(rect->width);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(299)
			columns = _g3;
			HX_STACK_LINE(300)
			int _g4 = ::Std_obj::_int(rect->height);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(300)
			rows = _g4;
		}
		HX_STACK_LINE(303)
		int _g5 = bitmapData->get_width();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(303)
		Float _g6 = ::Math_obj::max(columns,_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(303)
		int _g7 = ::Std_obj::_int(_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(303)
		columns = _g7;
		HX_STACK_LINE(304)
		int _g8 = bitmapData->get_height();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(304)
		Float _g9 = ::Math_obj::max(rows,_g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(304)
		int _g10 = ::Std_obj::_int(_g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(304)
		rows = _g10;
		HX_STACK_LINE(306)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(307)
		int column = (int)0;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(308)
		int x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(308)
		int y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(310)
		bool changed = false;		HX_STACK_VAR(changed,"changed");
		HX_STACK_LINE(311)
		bitmapData->lock();
		HX_STACK_LINE(312)
		while((true)){
			HX_STACK_LINE(312)
			if ((!(((row < rows))))){
				HX_STACK_LINE(312)
				break;
			}
			HX_STACK_LINE(314)
			column = (int)0;
			HX_STACK_LINE(315)
			while((true)){
				HX_STACK_LINE(315)
				if ((!(((column < columns))))){
					HX_STACK_LINE(315)
					break;
				}
				HX_STACK_LINE(317)
				x = (startX + column);
				HX_STACK_LINE(318)
				y = (startY + row);
				HX_STACK_LINE(319)
				int _g11 = bitmapData->getPixel32(x,y);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(319)
				if (((_g11 == color))){
					HX_STACK_LINE(321)
					bitmapData->setPixel32(x,y,newColor);
					HX_STACK_LINE(322)
					changed = true;
					HX_STACK_LINE(323)
					if ((fetchPositions)){
						HX_STACK_LINE(325)
						::flixel::math::FlxPoint _g12;		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(325)
						{
							HX_STACK_LINE(325)
							::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(x,y);		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(325)
							point->_inPool = false;
							HX_STACK_LINE(325)
							_g12 = point;
						}
						HX_STACK_LINE(325)
						positions->push(_g12);
					}
				}
				HX_STACK_LINE(328)
				(column)++;
			}
			HX_STACK_LINE(330)
			(row)++;
		}
		HX_STACK_LINE(332)
		bitmapData->unlock(null());
		HX_STACK_LINE(334)
		if (((bool(changed) && bool((positions == null()))))){
			HX_STACK_LINE(336)
			Array< ::Dynamic > _g13 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(336)
			positions = _g13;
		}
		HX_STACK_LINE(339)
		return positions;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxBitmapDataUtil_obj,replaceColor,return )

::openfl::_v2::display::BitmapData FlxBitmapDataUtil_obj::addSpacing( ::openfl::_v2::display::BitmapData bitmapData,::flixel::math::FlxPoint frameSize,::flixel::math::FlxPoint spacing,::flixel::math::FlxRect region){
	HX_STACK_FRAME("flixel.util.FlxBitmapDataUtil","addSpacing",0x8ce3bd3d,"flixel.util.FlxBitmapDataUtil.addSpacing","flixel/util/FlxBitmapDataUtil.hx",351,0xf477b24b)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_ARG(frameSize,"frameSize")
	HX_STACK_ARG(spacing,"spacing")
	HX_STACK_ARG(region,"region")
	HX_STACK_LINE(352)
	if (((region == null()))){
		HX_STACK_LINE(354)
		int _g = bitmapData->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(354)
		int _g1 = bitmapData->get_height();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(354)
		::flixel::math::FlxRect _g2 = ::flixel::math::FlxRect_obj::__new((int)0,(int)0,_g,_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(354)
		region = _g2;
	}
	HX_STACK_LINE(357)
	int frameWidth = ::Std_obj::_int(frameSize->x);		HX_STACK_VAR(frameWidth,"frameWidth");
	HX_STACK_LINE(358)
	int frameHeight = ::Std_obj::_int(frameSize->y);		HX_STACK_VAR(frameHeight,"frameHeight");
	HX_STACK_LINE(360)
	int numHorizontalFrames = ::Std_obj::_int((Float(region->width) / Float(frameWidth)));		HX_STACK_VAR(numHorizontalFrames,"numHorizontalFrames");
	HX_STACK_LINE(361)
	int numVerticalFrames = ::Std_obj::_int((Float(region->height) / Float(frameHeight)));		HX_STACK_VAR(numVerticalFrames,"numVerticalFrames");
	HX_STACK_LINE(364)
	int _g3 = ::Std_obj::_int((region->width + (((numHorizontalFrames - (int)1)) * spacing->x)));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(365)
	int _g4 = ::Std_obj::_int((region->height + (((numVerticalFrames - (int)1)) * spacing->y)));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(363)
	::openfl::_v2::display::BitmapData result = ::openfl::_v2::display::BitmapData_obj::__new(_g3,_g4,true,(int)0,null());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(369)
	result->lock();
	HX_STACK_LINE(370)
	::openfl::_v2::geom::Rectangle tempRect = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,frameWidth,frameHeight);		HX_STACK_VAR(tempRect,"tempRect");
	HX_STACK_LINE(371)
	::openfl::_v2::geom::Point tempPoint = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tempPoint,"tempPoint");
	HX_STACK_LINE(373)
	{
		HX_STACK_LINE(373)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(373)
		int _g = numHorizontalFrames;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(373)
		while((true)){
			HX_STACK_LINE(373)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(373)
				break;
			}
			HX_STACK_LINE(373)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(375)
			tempPoint->x = (i * ((frameWidth + spacing->x)));
			HX_STACK_LINE(376)
			tempRect->x = ((i * frameWidth) + region->x);
			HX_STACK_LINE(378)
			{
				HX_STACK_LINE(378)
				int _g31 = (int)0;		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(378)
				int _g2 = numVerticalFrames;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(378)
				while((true)){
					HX_STACK_LINE(378)
					if ((!(((_g31 < _g2))))){
						HX_STACK_LINE(378)
						break;
					}
					HX_STACK_LINE(378)
					int j = (_g31)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(380)
					tempPoint->y = (j * ((frameHeight + spacing->y)));
					HX_STACK_LINE(381)
					tempRect->y = ((j * frameHeight) + region->y);
					HX_STACK_LINE(382)
					result->copyPixels(bitmapData,tempRect,tempPoint,null(),null(),null());
				}
			}
		}
	}
	HX_STACK_LINE(385)
	result->unlock(null());
	HX_STACK_LINE(386)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxBitmapDataUtil_obj,addSpacing,return )

::openfl::_v2::display::BitmapData FlxBitmapDataUtil_obj::generateRotations( ::openfl::_v2::display::BitmapData brush,hx::Null< int >  __o_rotations,hx::Null< bool >  __o_antiAliasing,hx::Null< bool >  __o_autoBuffer){
int rotations = __o_rotations.Default(16);
bool antiAliasing = __o_antiAliasing.Default(false);
bool autoBuffer = __o_autoBuffer.Default(false);
	HX_STACK_FRAME("flixel.util.FlxBitmapDataUtil","generateRotations",0xe085af05,"flixel.util.FlxBitmapDataUtil.generateRotations","flixel/util/FlxBitmapDataUtil.hx",399,0xf477b24b)
	HX_STACK_ARG(brush,"brush")
	HX_STACK_ARG(rotations,"rotations")
	HX_STACK_ARG(antiAliasing,"antiAliasing")
	HX_STACK_ARG(autoBuffer,"autoBuffer")
{
		HX_STACK_LINE(400)
		int brushWidth = brush->get_width();		HX_STACK_VAR(brushWidth,"brushWidth");
		HX_STACK_LINE(401)
		int brushHeight = brush->get_height();		HX_STACK_VAR(brushHeight,"brushHeight");
		HX_STACK_LINE(402)
		int max;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(402)
		if (((brushHeight > brushWidth))){
			HX_STACK_LINE(402)
			max = brushHeight;
		}
		else{
			HX_STACK_LINE(402)
			max = brushWidth;
		}
		HX_STACK_LINE(403)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(403)
		if ((autoBuffer)){
			HX_STACK_LINE(403)
			_g = ::Std_obj::_int((max * 1.5));
		}
		else{
			HX_STACK_LINE(403)
			_g = max;
		}
		HX_STACK_LINE(403)
		max = _g;
		HX_STACK_LINE(405)
		Float _g1 = ::Math_obj::sqrt(rotations);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(405)
		int rows = ::Std_obj::_int(_g1);		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(406)
		int columns = ::Math_obj::ceil((Float(rotations) / Float(rows)));		HX_STACK_VAR(columns,"columns");
		HX_STACK_LINE(407)
		Float bakedRotationAngle = (Float((int)360) / Float(rotations));		HX_STACK_VAR(bakedRotationAngle,"bakedRotationAngle");
		HX_STACK_LINE(409)
		int width = (max * columns);		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(410)
		int height = (max * rows);		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(412)
		::openfl::_v2::display::BitmapData result = ::openfl::_v2::display::BitmapData_obj::__new(width,height,true,(int)0,null());		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(414)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(415)
		int column = (int)0;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(416)
		Float bakedAngle = (int)0;		HX_STACK_VAR(bakedAngle,"bakedAngle");
		HX_STACK_LINE(417)
		int halfBrushWidth = ::Std_obj::_int((brushWidth * 0.5));		HX_STACK_VAR(halfBrushWidth,"halfBrushWidth");
		HX_STACK_LINE(418)
		int halfBrushHeight = ::Std_obj::_int((brushHeight * 0.5));		HX_STACK_VAR(halfBrushHeight,"halfBrushHeight");
		HX_STACK_LINE(419)
		int midpointX = ::Std_obj::_int((max * 0.5));		HX_STACK_VAR(midpointX,"midpointX");
		HX_STACK_LINE(420)
		int midpointY = ::Std_obj::_int((max * 0.5));		HX_STACK_VAR(midpointY,"midpointY");
		HX_STACK_LINE(422)
		::openfl::_v2::geom::Matrix matrix = ::flixel::math::FlxMatrix_obj::matrix;		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(424)
		while((true)){
			HX_STACK_LINE(424)
			if ((!(((row < rows))))){
				HX_STACK_LINE(424)
				break;
			}
			HX_STACK_LINE(426)
			column = (int)0;
			HX_STACK_LINE(427)
			while((true)){
				HX_STACK_LINE(427)
				if ((!(((column < columns))))){
					HX_STACK_LINE(427)
					break;
				}
				HX_STACK_LINE(429)
				matrix->identity();
				HX_STACK_LINE(430)
				matrix->translate(-(halfBrushWidth),-(halfBrushHeight));
				HX_STACK_LINE(431)
				matrix->rotate((bakedAngle * ((Float(::Math_obj::PI) / Float((int)180)))));
				HX_STACK_LINE(432)
				matrix->translate(((max * column) + midpointX),midpointY);
				HX_STACK_LINE(433)
				hx::AddEq(bakedAngle,bakedRotationAngle);
				HX_STACK_LINE(434)
				result->draw(brush,matrix,null(),null(),null(),antiAliasing);
				HX_STACK_LINE(435)
				(column)++;
			}
			HX_STACK_LINE(437)
			hx::AddEq(midpointY,max);
			HX_STACK_LINE(438)
			(row)++;
		}
		HX_STACK_LINE(441)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxBitmapDataUtil_obj,generateRotations,return )


FlxBitmapDataUtil_obj::FlxBitmapDataUtil_obj()
{
}

Dynamic FlxBitmapDataUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addSpacing") ) { return addSpacing_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"replaceColor") ) { return replaceColor_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getMemorySize") ) { return getMemorySize_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"generateRotations") ) { return generateRotations_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"mergeColorComponent") ) { return mergeColorComponent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBitmapDataUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBitmapDataUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("merge"),
	HX_CSTRING("mergeColorComponent"),
	HX_CSTRING("compare"),
	HX_CSTRING("getMemorySize"),
	HX_CSTRING("replaceColor"),
	HX_CSTRING("addSpacing"),
	HX_CSTRING("generateRotations"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBitmapDataUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBitmapDataUtil_obj::__mClass,"__mClass");
};

#endif

Class FlxBitmapDataUtil_obj::__mClass;

void FlxBitmapDataUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxBitmapDataUtil"), hx::TCanCast< FlxBitmapDataUtil_obj> ,sStaticFields,sMemberFields,
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

void FlxBitmapDataUtil_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
