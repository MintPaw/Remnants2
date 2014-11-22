#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTileblock
#include <flixel/tile/FlxTileblock.h>
#endif
#ifndef INCLUDED_flixel_util_FlxBitmapDataPool
#include <flixel/util/FlxBitmapDataPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
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
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_openfl__v2_utils_ByteArray
#include <openfl/_v2/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataInput
#include <openfl/_v2/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataOutput
#include <openfl/_v2/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IMemoryRange
#include <openfl/_v2/utils/IMemoryRange.h>
#endif
namespace flixel{
namespace util{

Void FlxCollision_obj::__construct()
{
	return null();
}

//FlxCollision_obj::~FlxCollision_obj() { }

Dynamic FlxCollision_obj::__CreateEmpty() { return  new FlxCollision_obj; }
hx::ObjectPtr< FlxCollision_obj > FlxCollision_obj::__new()
{  hx::ObjectPtr< FlxCollision_obj > result = new FlxCollision_obj();
	result->__construct();
	return result;}

Dynamic FlxCollision_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxCollision_obj > result = new FlxCollision_obj();
	result->__construct();
	return result;}

::openfl::_v2::geom::Point FlxCollision_obj::pointA;

::openfl::_v2::geom::Point FlxCollision_obj::pointB;

::openfl::_v2::geom::Point FlxCollision_obj::centerA;

::openfl::_v2::geom::Point FlxCollision_obj::centerB;

::openfl::_v2::geom::Matrix FlxCollision_obj::matrixA;

::openfl::_v2::geom::Matrix FlxCollision_obj::matrixB;

::openfl::_v2::geom::Matrix FlxCollision_obj::testMatrix;

::openfl::_v2::geom::Rectangle FlxCollision_obj::boundsA;

::openfl::_v2::geom::Rectangle FlxCollision_obj::boundsB;

bool FlxCollision_obj::pixelPerfectCheck( ::flixel::FlxSprite Contact,::flixel::FlxSprite Target,hx::Null< int >  __o_AlphaTolerance,::flixel::FlxCamera Camera){
int AlphaTolerance = __o_AlphaTolerance.Default(1);
	HX_STACK_FRAME("flixel.util.FlxCollision","pixelPerfectCheck",0xcaf595cd,"flixel.util.FlxCollision.pixelPerfectCheck","flixel/util/FlxCollision.hx",45,0x8c8a7b84)
	HX_STACK_ARG(Contact,"Contact")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(AlphaTolerance,"AlphaTolerance")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(47)
		bool considerRotation = (bool((Contact->angle != (int)0)) || bool((Target->angle != (int)0)));		HX_STACK_VAR(considerRotation,"considerRotation");
		HX_STACK_LINE(49)
		if (((Camera != null()))){
			HX_STACK_LINE(49)
			Camera = Camera;
		}
		else{
			HX_STACK_LINE(49)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(51)
		int _g = ::Std_obj::_int((Camera->scroll->x * Contact->scrollFactor->x));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(51)
		Float _g1 = (Contact->x - _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(51)
		Float _g2 = (_g1 - Contact->offset->x);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(51)
		::flixel::util::FlxCollision_obj::pointA->x = _g2;
		HX_STACK_LINE(52)
		int _g3 = ::Std_obj::_int((Camera->scroll->y * Contact->scrollFactor->y));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(52)
		Float _g4 = (Contact->y - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(52)
		Float _g5 = (_g4 - Contact->offset->y);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(52)
		::flixel::util::FlxCollision_obj::pointA->y = _g5;
		HX_STACK_LINE(54)
		int _g6 = ::Std_obj::_int((Camera->scroll->x * Target->scrollFactor->x));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(54)
		Float _g7 = (Target->x - _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(54)
		Float _g8 = (_g7 - Target->offset->x);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(54)
		::flixel::util::FlxCollision_obj::pointB->x = _g8;
		HX_STACK_LINE(55)
		int _g9 = ::Std_obj::_int((Camera->scroll->y * Target->scrollFactor->y));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(55)
		Float _g10 = (Target->y - _g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(55)
		Float _g11 = (_g10 - Target->offset->y);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(55)
		::flixel::util::FlxCollision_obj::pointB->y = _g11;
		HX_STACK_LINE(57)
		if ((considerRotation)){
			HX_STACK_LINE(60)
			{
				HX_STACK_LINE(60)
				::flixel::math::FlxPoint _this = Contact->origin;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(60)
				::openfl::_v2::geom::Point FlashPoint = ::flixel::util::FlxCollision_obj::centerA;		HX_STACK_VAR(FlashPoint,"FlashPoint");
				HX_STACK_LINE(60)
				if (((FlashPoint == null()))){
					HX_STACK_LINE(60)
					::openfl::_v2::geom::Point _g12 = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(60)
					FlashPoint = _g12;
				}
				HX_STACK_LINE(60)
				FlashPoint->x = _this->x;
				HX_STACK_LINE(60)
				FlashPoint->y = _this->y;
				HX_STACK_LINE(60)
				FlashPoint;
			}
			HX_STACK_LINE(61)
			{
				HX_STACK_LINE(61)
				::flixel::math::FlxPoint _this = Target->origin;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(61)
				::openfl::_v2::geom::Point FlashPoint = ::flixel::util::FlxCollision_obj::centerB;		HX_STACK_VAR(FlashPoint,"FlashPoint");
				HX_STACK_LINE(61)
				if (((FlashPoint == null()))){
					HX_STACK_LINE(61)
					::openfl::_v2::geom::Point _g13 = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(61)
					FlashPoint = _g13;
				}
				HX_STACK_LINE(61)
				FlashPoint->x = _this->x;
				HX_STACK_LINE(61)
				FlashPoint->y = _this->y;
				HX_STACK_LINE(61)
				FlashPoint;
			}
			HX_STACK_LINE(64)
			Float _g14 = ::flixel::util::FlxCollision_obj::centerA->get_length();		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(64)
			Float _g15 = ((::flixel::util::FlxCollision_obj::pointA->x + ::flixel::util::FlxCollision_obj::centerA->x) - _g14);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(64)
			::flixel::util::FlxCollision_obj::boundsA->x = _g15;
			HX_STACK_LINE(65)
			Float _g16 = ::flixel::util::FlxCollision_obj::centerA->get_length();		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(65)
			Float _g17 = ((::flixel::util::FlxCollision_obj::pointA->y + ::flixel::util::FlxCollision_obj::centerA->y) - _g16);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(65)
			::flixel::util::FlxCollision_obj::boundsA->y = _g17;
			HX_STACK_LINE(66)
			Float _g18 = ::flixel::util::FlxCollision_obj::centerA->get_length();		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(66)
			Float _g19 = (_g18 * (int)2);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(66)
			::flixel::util::FlxCollision_obj::boundsA->width = _g19;
			HX_STACK_LINE(67)
			::flixel::util::FlxCollision_obj::boundsA->height = ::flixel::util::FlxCollision_obj::boundsA->width;
			HX_STACK_LINE(69)
			Float _g20 = ::flixel::util::FlxCollision_obj::centerB->get_length();		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(69)
			Float _g21 = ((::flixel::util::FlxCollision_obj::pointB->x + ::flixel::util::FlxCollision_obj::centerB->x) - _g20);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(69)
			::flixel::util::FlxCollision_obj::boundsB->x = _g21;
			HX_STACK_LINE(70)
			Float _g22 = ::flixel::util::FlxCollision_obj::centerB->get_length();		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(70)
			Float _g23 = ((::flixel::util::FlxCollision_obj::pointB->y + ::flixel::util::FlxCollision_obj::centerB->y) - _g22);		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(70)
			::flixel::util::FlxCollision_obj::boundsB->y = _g23;
			HX_STACK_LINE(71)
			Float _g24 = ::flixel::util::FlxCollision_obj::centerB->get_length();		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(71)
			Float _g25 = (_g24 * (int)2);		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(71)
			::flixel::util::FlxCollision_obj::boundsB->width = _g25;
			HX_STACK_LINE(72)
			::flixel::util::FlxCollision_obj::boundsB->height = ::flixel::util::FlxCollision_obj::boundsB->width;
		}
		else{
			HX_STACK_LINE(76)
			::flixel::util::FlxCollision_obj::boundsA->x = ::flixel::util::FlxCollision_obj::pointA->x;
			HX_STACK_LINE(77)
			::flixel::util::FlxCollision_obj::boundsA->y = ::flixel::util::FlxCollision_obj::pointA->y;
			HX_STACK_LINE(78)
			::flixel::util::FlxCollision_obj::boundsA->width = Contact->frameWidth;
			HX_STACK_LINE(79)
			::flixel::util::FlxCollision_obj::boundsA->height = Contact->frameHeight;
			HX_STACK_LINE(81)
			::flixel::util::FlxCollision_obj::boundsB->x = ::flixel::util::FlxCollision_obj::pointB->x;
			HX_STACK_LINE(82)
			::flixel::util::FlxCollision_obj::boundsB->y = ::flixel::util::FlxCollision_obj::pointB->y;
			HX_STACK_LINE(83)
			::flixel::util::FlxCollision_obj::boundsB->width = Target->frameWidth;
			HX_STACK_LINE(84)
			::flixel::util::FlxCollision_obj::boundsB->height = Target->frameHeight;
		}
		HX_STACK_LINE(87)
		::openfl::_v2::geom::Rectangle intersect = ::flixel::util::FlxCollision_obj::boundsA->intersection(::flixel::util::FlxCollision_obj::boundsB);		HX_STACK_VAR(intersect,"intersect");
		HX_STACK_LINE(89)
		if (((  ((!(((  ((!(intersect->isEmpty()))) ? bool((intersect->width < (int)1)) : bool(true) ))))) ? bool((intersect->height < (int)1)) : bool(true) ))){
			HX_STACK_LINE(91)
			return false;
		}
		HX_STACK_LINE(95)
		::flixel::util::FlxCollision_obj::matrixA->identity();
		HX_STACK_LINE(96)
		::flixel::util::FlxCollision_obj::matrixA->translate(-(((intersect->x - ::flixel::util::FlxCollision_obj::boundsA->x))),-(((intersect->y - ::flixel::util::FlxCollision_obj::boundsA->y))));
		HX_STACK_LINE(98)
		::flixel::util::FlxCollision_obj::matrixB->identity();
		HX_STACK_LINE(99)
		::flixel::util::FlxCollision_obj::matrixB->translate(-(((intersect->x - ::flixel::util::FlxCollision_obj::boundsB->x))),-(((intersect->y - ::flixel::util::FlxCollision_obj::boundsB->y))));
		HX_STACK_LINE(102)
		Contact->drawFrame(null());
		HX_STACK_LINE(103)
		Target->drawFrame(null());
		HX_STACK_LINE(106)
		::openfl::_v2::display::BitmapData testA = Contact->framePixels;		HX_STACK_VAR(testA,"testA");
		HX_STACK_LINE(107)
		::openfl::_v2::display::BitmapData testB = Target->framePixels;		HX_STACK_VAR(testB,"testB");
		HX_STACK_LINE(109)
		int overlapWidth = ::Std_obj::_int(intersect->width);		HX_STACK_VAR(overlapWidth,"overlapWidth");
		HX_STACK_LINE(110)
		int overlapHeight = ::Std_obj::_int(intersect->height);		HX_STACK_VAR(overlapHeight,"overlapHeight");
		HX_STACK_LINE(113)
		if ((considerRotation)){
			HX_STACK_LINE(115)
			::flixel::util::FlxCollision_obj::testMatrix->identity();
			HX_STACK_LINE(118)
			::flixel::util::FlxCollision_obj::testMatrix->translate(-(Contact->origin->x),-(Contact->origin->y));
			HX_STACK_LINE(121)
			::flixel::util::FlxCollision_obj::testMatrix->rotate((Contact->angle * ((Float(::Math_obj::PI) / Float((int)180)))));
			HX_STACK_LINE(124)
			::flixel::util::FlxCollision_obj::testMatrix->translate((Float(::flixel::util::FlxCollision_obj::boundsA->width) / Float((int)2)),(Float(::flixel::util::FlxCollision_obj::boundsA->height) / Float((int)2)));
			HX_STACK_LINE(127)
			int _g26 = ::Math_obj::floor(::flixel::util::FlxCollision_obj::boundsA->width);		HX_STACK_VAR(_g26,"_g26");
			HX_STACK_LINE(127)
			int _g27 = ::Math_obj::floor(::flixel::util::FlxCollision_obj::boundsA->height);		HX_STACK_VAR(_g27,"_g27");
			HX_STACK_LINE(127)
			::openfl::_v2::display::BitmapData testA2 = ::flixel::util::FlxBitmapDataPool_obj::get(_g26,_g27,true,(int)0,false);		HX_STACK_VAR(testA2,"testA2");
			HX_STACK_LINE(130)
			testA2->draw(testA,::flixel::util::FlxCollision_obj::testMatrix,null(),null(),null(),false);
			HX_STACK_LINE(131)
			testA = testA2;
			HX_STACK_LINE(134)
			::flixel::util::FlxCollision_obj::testMatrix->identity();
			HX_STACK_LINE(135)
			::flixel::util::FlxCollision_obj::testMatrix->translate(-(Target->origin->x),-(Target->origin->y));
			HX_STACK_LINE(136)
			::flixel::util::FlxCollision_obj::testMatrix->rotate((Target->angle * ((Float(::Math_obj::PI) / Float((int)180)))));
			HX_STACK_LINE(137)
			::flixel::util::FlxCollision_obj::testMatrix->translate((Float(::flixel::util::FlxCollision_obj::boundsB->width) / Float((int)2)),(Float(::flixel::util::FlxCollision_obj::boundsB->height) / Float((int)2)));
			HX_STACK_LINE(139)
			int _g28 = ::Math_obj::floor(::flixel::util::FlxCollision_obj::boundsB->width);		HX_STACK_VAR(_g28,"_g28");
			HX_STACK_LINE(139)
			int _g29 = ::Math_obj::floor(::flixel::util::FlxCollision_obj::boundsB->height);		HX_STACK_VAR(_g29,"_g29");
			HX_STACK_LINE(139)
			::openfl::_v2::display::BitmapData testB2 = ::flixel::util::FlxBitmapDataPool_obj::get(_g28,_g29,true,(int)0,false);		HX_STACK_VAR(testB2,"testB2");
			HX_STACK_LINE(140)
			testB2->draw(testB,::flixel::util::FlxCollision_obj::testMatrix,null(),null(),null(),false);
			HX_STACK_LINE(141)
			testB = testB2;
		}
		HX_STACK_LINE(144)
		int _g30 = ::Std_obj::_int(-(::flixel::util::FlxCollision_obj::matrixA->tx));		HX_STACK_VAR(_g30,"_g30");
		HX_STACK_LINE(144)
		::flixel::util::FlxCollision_obj::boundsA->x = _g30;
		HX_STACK_LINE(145)
		int _g31 = ::Std_obj::_int(-(::flixel::util::FlxCollision_obj::matrixA->ty));		HX_STACK_VAR(_g31,"_g31");
		HX_STACK_LINE(145)
		::flixel::util::FlxCollision_obj::boundsA->y = _g31;
		HX_STACK_LINE(146)
		::flixel::util::FlxCollision_obj::boundsA->width = overlapWidth;
		HX_STACK_LINE(147)
		::flixel::util::FlxCollision_obj::boundsA->height = overlapHeight;
		HX_STACK_LINE(149)
		int _g32 = ::Std_obj::_int(-(::flixel::util::FlxCollision_obj::matrixB->tx));		HX_STACK_VAR(_g32,"_g32");
		HX_STACK_LINE(149)
		::flixel::util::FlxCollision_obj::boundsB->x = _g32;
		HX_STACK_LINE(150)
		int _g33 = ::Std_obj::_int(-(::flixel::util::FlxCollision_obj::matrixB->ty));		HX_STACK_VAR(_g33,"_g33");
		HX_STACK_LINE(150)
		::flixel::util::FlxCollision_obj::boundsB->y = _g33;
		HX_STACK_LINE(151)
		::flixel::util::FlxCollision_obj::boundsB->width = overlapWidth;
		HX_STACK_LINE(152)
		::flixel::util::FlxCollision_obj::boundsB->height = overlapHeight;
		HX_STACK_LINE(154)
		::openfl::_v2::utils::ByteArray pixelsA = testA->getPixels(::flixel::util::FlxCollision_obj::boundsA);		HX_STACK_VAR(pixelsA,"pixelsA");
		HX_STACK_LINE(155)
		::openfl::_v2::utils::ByteArray pixelsB = testB->getPixels(::flixel::util::FlxCollision_obj::boundsB);		HX_STACK_VAR(pixelsB,"pixelsB");
		HX_STACK_LINE(157)
		bool hit = false;		HX_STACK_VAR(hit,"hit");
		HX_STACK_LINE(160)
		int alphaA = (int)0;		HX_STACK_VAR(alphaA,"alphaA");
		HX_STACK_LINE(161)
		int alphaB = (int)0;		HX_STACK_VAR(alphaB,"alphaB");
		HX_STACK_LINE(162)
		int overlapPixels = (overlapWidth * overlapHeight);		HX_STACK_VAR(overlapPixels,"overlapPixels");
		HX_STACK_LINE(163)
		int alphaIdx = (int)0;		HX_STACK_VAR(alphaIdx,"alphaIdx");
		HX_STACK_LINE(166)
		{
			HX_STACK_LINE(166)
			int _g12 = (int)0;		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(166)
			int _g13 = ::Math_obj::ceil((Float(overlapPixels) / Float((int)2)));		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(166)
			while((true)){
				HX_STACK_LINE(166)
				if ((!(((_g12 < _g13))))){
					HX_STACK_LINE(166)
					break;
				}
				HX_STACK_LINE(166)
				int i = (_g12)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(168)
				alphaIdx = (int(i) << int((int)3));
				HX_STACK_LINE(169)
				int _g34 = pixelsB->position = alphaIdx;		HX_STACK_VAR(_g34,"_g34");
				HX_STACK_LINE(169)
				pixelsA->position = _g34;
				HX_STACK_LINE(170)
				int _g35;		HX_STACK_VAR(_g35,"_g35");
				HX_STACK_LINE(170)
				if (((pixelsA->position < pixelsA->length))){
					HX_STACK_LINE(170)
					int pos = (pixelsA->position)++;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(170)
					_g35 = pixelsA->b->__get(pos);
				}
				else{
					HX_STACK_LINE(170)
					_g35 = pixelsA->__throwEOFi();
				}
				HX_STACK_LINE(170)
				alphaA = _g35;
				HX_STACK_LINE(171)
				int _g36;		HX_STACK_VAR(_g36,"_g36");
				HX_STACK_LINE(171)
				if (((pixelsB->position < pixelsB->length))){
					HX_STACK_LINE(171)
					int pos = (pixelsB->position)++;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(171)
					_g36 = pixelsB->b->__get(pos);
				}
				else{
					HX_STACK_LINE(171)
					_g36 = pixelsB->__throwEOFi();
				}
				HX_STACK_LINE(171)
				alphaB = _g36;
				HX_STACK_LINE(173)
				if (((bool((alphaA >= AlphaTolerance)) && bool((alphaB >= AlphaTolerance))))){
					HX_STACK_LINE(175)
					hit = true;
					HX_STACK_LINE(176)
					break;
				}
			}
		}
		HX_STACK_LINE(180)
		if ((!(hit))){
			HX_STACK_LINE(183)
			int _g12 = (int)0;		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(183)
			int _g13 = (int(overlapPixels) >> int((int)1));		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(183)
			while((true)){
				HX_STACK_LINE(183)
				if ((!(((_g12 < _g13))))){
					HX_STACK_LINE(183)
					break;
				}
				HX_STACK_LINE(183)
				int i = (_g12)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(185)
				alphaIdx = (((int(i) << int((int)3))) + (int)4);
				HX_STACK_LINE(186)
				int _g37 = pixelsB->position = alphaIdx;		HX_STACK_VAR(_g37,"_g37");
				HX_STACK_LINE(186)
				pixelsA->position = _g37;
				HX_STACK_LINE(187)
				int _g38;		HX_STACK_VAR(_g38,"_g38");
				HX_STACK_LINE(187)
				if (((pixelsA->position < pixelsA->length))){
					HX_STACK_LINE(187)
					int pos = (pixelsA->position)++;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(187)
					_g38 = pixelsA->b->__get(pos);
				}
				else{
					HX_STACK_LINE(187)
					_g38 = pixelsA->__throwEOFi();
				}
				HX_STACK_LINE(187)
				alphaA = _g38;
				HX_STACK_LINE(188)
				int _g39;		HX_STACK_VAR(_g39,"_g39");
				HX_STACK_LINE(188)
				if (((pixelsB->position < pixelsB->length))){
					HX_STACK_LINE(188)
					int pos = (pixelsB->position)++;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(188)
					_g39 = pixelsB->b->__get(pos);
				}
				else{
					HX_STACK_LINE(188)
					_g39 = pixelsB->__throwEOFi();
				}
				HX_STACK_LINE(188)
				alphaB = _g39;
				HX_STACK_LINE(190)
				if (((bool((alphaA >= AlphaTolerance)) && bool((alphaB >= AlphaTolerance))))){
					HX_STACK_LINE(192)
					hit = true;
					HX_STACK_LINE(193)
					break;
				}
			}
		}
		HX_STACK_LINE(198)
		if ((considerRotation)){
			HX_STACK_LINE(200)
			::flixel::util::FlxBitmapDataPool_obj::put(testA);
			HX_STACK_LINE(201)
			::flixel::util::FlxBitmapDataPool_obj::put(testB);
		}
		HX_STACK_LINE(204)
		return hit;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,pixelPerfectCheck,return )

bool FlxCollision_obj::pixelPerfectPointCheck( int PointX,int PointY,::flixel::FlxSprite Target,hx::Null< int >  __o_AlphaTolerance){
int AlphaTolerance = __o_AlphaTolerance.Default(1);
	HX_STACK_FRAME("flixel.util.FlxCollision","pixelPerfectPointCheck",0x29896333,"flixel.util.FlxCollision.pixelPerfectPointCheck","flixel/util/FlxCollision.hx",217,0x8c8a7b84)
	HX_STACK_ARG(PointX,"PointX")
	HX_STACK_ARG(PointY,"PointY")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(AlphaTolerance,"AlphaTolerance")
{
		HX_STACK_LINE(219)
		int _g = ::Math_obj::floor(Target->x);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(219)
		int _g1 = ::Math_obj::floor(Target->y);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(219)
		Float _g2 = Target->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(219)
		int _g3 = ::Std_obj::_int(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(219)
		Float _g4 = Target->get_height();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(219)
		int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(219)
		bool _g6 = ::flixel::math::FlxMath_obj::pointInCoordinates(PointX,PointY,_g,_g1,_g3,_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(219)
		if (((_g6 == false))){
			HX_STACK_LINE(221)
			return false;
		}
		HX_STACK_LINE(225)
		Target->drawFrame(null());
		HX_STACK_LINE(229)
		::openfl::_v2::display::BitmapData test = Target->framePixels;		HX_STACK_VAR(test,"test");
		HX_STACK_LINE(231)
		int pixelAlpha;		HX_STACK_VAR(pixelAlpha,"pixelAlpha");
		HX_STACK_LINE(231)
		{
			HX_STACK_LINE(231)
			int this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(231)
			{
				HX_STACK_LINE(231)
				int _g7 = ::Math_obj::floor((PointX - Target->x));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(231)
				int _g8 = ::Math_obj::floor((PointY - Target->y));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(231)
				int Value = test->getPixel32(_g7,_g8);		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(231)
				this1 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(Value);
			}
			HX_STACK_LINE(231)
			pixelAlpha = (int((int(this1) >> int((int)24))) & int((int)255));
		}
		HX_STACK_LINE(234)
		int _g9 = ::Std_obj::_int((pixelAlpha * Target->alpha));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(234)
		pixelAlpha = _g9;
		HX_STACK_LINE(238)
		if (((pixelAlpha >= AlphaTolerance))){
			HX_STACK_LINE(240)
			return true;
		}
		else{
			HX_STACK_LINE(244)
			return false;
		}
		HX_STACK_LINE(238)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,pixelPerfectPointCheck,return )

::flixel::group::FlxTypedGroup FlxCollision_obj::createCameraWall( ::flixel::FlxCamera Camera,hx::Null< bool >  __o_PlaceOutside,int Thickness,hx::Null< bool >  __o_AdjustWorldBounds){
bool PlaceOutside = __o_PlaceOutside.Default(true);
bool AdjustWorldBounds = __o_AdjustWorldBounds.Default(false);
	HX_STACK_FRAME("flixel.util.FlxCollision","createCameraWall",0x3ca8e03f,"flixel.util.FlxCollision.createCameraWall","flixel/util/FlxCollision.hx",258,0x8c8a7b84)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(PlaceOutside,"PlaceOutside")
	HX_STACK_ARG(Thickness,"Thickness")
	HX_STACK_ARG(AdjustWorldBounds,"AdjustWorldBounds")
{
		HX_STACK_LINE(259)
		::flixel::tile::FlxTileblock left = null();		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(260)
		::flixel::tile::FlxTileblock right = null();		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(261)
		::flixel::tile::FlxTileblock top = null();		HX_STACK_VAR(top,"top");
		HX_STACK_LINE(262)
		::flixel::tile::FlxTileblock bottom = null();		HX_STACK_VAR(bottom,"bottom");
		HX_STACK_LINE(264)
		if ((PlaceOutside)){
			HX_STACK_LINE(266)
			int _g = ::Math_obj::floor((Camera->x - Thickness));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(266)
			int _g1 = ::Math_obj::floor((Camera->y + Thickness));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(266)
			::flixel::tile::FlxTileblock _g2 = ::flixel::tile::FlxTileblock_obj::__new(_g,_g1,Thickness,(Camera->height - (Thickness * (int)2)));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(266)
			left = _g2;
			HX_STACK_LINE(267)
			int _g3 = ::Math_obj::floor((Camera->x + Camera->width));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(267)
			int _g4 = ::Math_obj::floor((Camera->y + Thickness));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(267)
			::flixel::tile::FlxTileblock _g5 = ::flixel::tile::FlxTileblock_obj::__new(_g3,_g4,Thickness,(Camera->height - (Thickness * (int)2)));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(267)
			right = _g5;
			HX_STACK_LINE(268)
			int _g6 = ::Math_obj::floor((Camera->x - Thickness));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(268)
			int _g7 = ::Math_obj::floor((Camera->y - Thickness));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(268)
			::flixel::tile::FlxTileblock _g8 = ::flixel::tile::FlxTileblock_obj::__new(_g6,_g7,(Camera->width + (Thickness * (int)2)),Thickness);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(268)
			top = _g8;
			HX_STACK_LINE(269)
			int _g9 = ::Math_obj::floor((Camera->x - Thickness));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(269)
			::flixel::tile::FlxTileblock _g10 = ::flixel::tile::FlxTileblock_obj::__new(_g9,Camera->height,(Camera->width + (Thickness * (int)2)),Thickness);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(269)
			bottom = _g10;
			HX_STACK_LINE(271)
			if ((AdjustWorldBounds)){
				HX_STACK_LINE(273)
				::flixel::math::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(273)
				_this->x = (Camera->x - Thickness);
				HX_STACK_LINE(273)
				_this->y = (Camera->y - Thickness);
				HX_STACK_LINE(273)
				_this->width = (Camera->width + (Thickness * (int)2));
				HX_STACK_LINE(273)
				_this->height = (Camera->height + (Thickness * (int)2));
				HX_STACK_LINE(273)
				_this;
			}
		}
		else{
			HX_STACK_LINE(278)
			int _g11 = ::Math_obj::floor(Camera->x);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(278)
			int _g12 = ::Math_obj::floor((Camera->y + Thickness));		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(278)
			::flixel::tile::FlxTileblock _g13 = ::flixel::tile::FlxTileblock_obj::__new(_g11,_g12,Thickness,(Camera->height - (Thickness * (int)2)));		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(278)
			left = _g13;
			HX_STACK_LINE(279)
			int _g14 = ::Math_obj::floor(((Camera->x + Camera->width) - Thickness));		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(279)
			int _g15 = ::Math_obj::floor((Camera->y + Thickness));		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(279)
			::flixel::tile::FlxTileblock _g16 = ::flixel::tile::FlxTileblock_obj::__new(_g14,_g15,Thickness,(Camera->height - (Thickness * (int)2)));		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(279)
			right = _g16;
			HX_STACK_LINE(280)
			int _g17 = ::Math_obj::floor(Camera->x);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(280)
			int _g18 = ::Math_obj::floor(Camera->y);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(280)
			::flixel::tile::FlxTileblock _g19 = ::flixel::tile::FlxTileblock_obj::__new(_g17,_g18,Camera->width,Thickness);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(280)
			top = _g19;
			HX_STACK_LINE(281)
			int _g20 = ::Math_obj::floor(Camera->x);		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(281)
			::flixel::tile::FlxTileblock _g21 = ::flixel::tile::FlxTileblock_obj::__new(_g20,(Camera->height - Thickness),Camera->width,Thickness);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(281)
			bottom = _g21;
			HX_STACK_LINE(283)
			if ((AdjustWorldBounds)){
				HX_STACK_LINE(285)
				::flixel::math::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(285)
				_this->x = Camera->x;
				HX_STACK_LINE(285)
				_this->y = Camera->y;
				HX_STACK_LINE(285)
				_this->width = Camera->width;
				HX_STACK_LINE(285)
				_this->height = Camera->height;
				HX_STACK_LINE(285)
				_this;
			}
		}
		HX_STACK_LINE(289)
		::flixel::group::FlxTypedGroup result = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(291)
		result->add(left);
		HX_STACK_LINE(292)
		result->add(right);
		HX_STACK_LINE(293)
		result->add(top);
		HX_STACK_LINE(294)
		result->add(bottom);
		HX_STACK_LINE(296)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,createCameraWall,return )


FlxCollision_obj::FlxCollision_obj()
{
}

Dynamic FlxCollision_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"pointA") ) { return pointA; }
		if (HX_FIELD_EQ(inName,"pointB") ) { return pointB; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"centerA") ) { return centerA; }
		if (HX_FIELD_EQ(inName,"centerB") ) { return centerB; }
		if (HX_FIELD_EQ(inName,"matrixA") ) { return matrixA; }
		if (HX_FIELD_EQ(inName,"matrixB") ) { return matrixB; }
		if (HX_FIELD_EQ(inName,"boundsA") ) { return boundsA; }
		if (HX_FIELD_EQ(inName,"boundsB") ) { return boundsB; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testMatrix") ) { return testMatrix; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createCameraWall") ) { return createCameraWall_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"pixelPerfectCheck") ) { return pixelPerfectCheck_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"pixelPerfectPointCheck") ) { return pixelPerfectPointCheck_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxCollision_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"pointA") ) { pointA=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pointB") ) { pointB=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"centerA") ) { centerA=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"centerB") ) { centerB=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrixA") ) { matrixA=inValue.Cast< ::openfl::_v2::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrixB") ) { matrixB=inValue.Cast< ::openfl::_v2::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"boundsA") ) { boundsA=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"boundsB") ) { boundsB=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testMatrix") ) { testMatrix=inValue.Cast< ::openfl::_v2::geom::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxCollision_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("pointA"),
	HX_CSTRING("pointB"),
	HX_CSTRING("centerA"),
	HX_CSTRING("centerB"),
	HX_CSTRING("matrixA"),
	HX_CSTRING("matrixB"),
	HX_CSTRING("testMatrix"),
	HX_CSTRING("boundsA"),
	HX_CSTRING("boundsB"),
	HX_CSTRING("pixelPerfectCheck"),
	HX_CSTRING("pixelPerfectPointCheck"),
	HX_CSTRING("createCameraWall"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCollision_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::pointA,"pointA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::pointB,"pointB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::centerA,"centerA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::centerB,"centerB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::matrixA,"matrixA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::matrixB,"matrixB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::testMatrix,"testMatrix");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::boundsA,"boundsA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::boundsB,"boundsB");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::pointA,"pointA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::pointB,"pointB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::centerA,"centerA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::centerB,"centerB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::matrixA,"matrixA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::matrixB,"matrixB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::testMatrix,"testMatrix");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::boundsA,"boundsA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::boundsB,"boundsB");
};

#endif

Class FlxCollision_obj::__mClass;

void FlxCollision_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxCollision"), hx::TCanCast< FlxCollision_obj> ,sStaticFields,sMemberFields,
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

void FlxCollision_obj::__boot()
{
	pointA= ::openfl::_v2::geom::Point_obj::__new(null(),null());
	pointB= ::openfl::_v2::geom::Point_obj::__new(null(),null());
	centerA= ::openfl::_v2::geom::Point_obj::__new(null(),null());
	centerB= ::openfl::_v2::geom::Point_obj::__new(null(),null());
	matrixA= ::openfl::_v2::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	matrixB= ::openfl::_v2::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	testMatrix= ::openfl::_v2::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	boundsA= ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());
	boundsB= ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());
}

} // end namespace flixel
} // end namespace util
