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
#ifndef INCLUDED_flixel__FlxSprite_GraphicDefault
#include <flixel/_FlxSprite/GraphicDefault.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxClippedFrames
#include <flixel/graphics/frames/FlxClippedFrames.h>
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
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#include <flixel/graphics/frames/FlxTileFrames.h>
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
#ifndef INCLUDED_flixel_util_FlxBitmapDataUtil
#include <flixel/util/FlxBitmapDataUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
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
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
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

Void FlxSprite_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic)
{
HX_STACK_FRAME("flixel.FlxSprite","new",0x4dfa64d7,"flixel.FlxSprite.new","flixel/FlxSprite.hx",43,0x0384bffa)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(SimpleGraphic,"SimpleGraphic")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(198)
	this->_facingFlip = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(194)
	this->_angleChanged = false;
	HX_STACK_LINE(193)
	this->_cosAngle = (int)1;
	HX_STACK_LINE(192)
	this->_sinAngle = (int)0;
	HX_STACK_LINE(159)
	this->isColored = false;
	HX_STACK_LINE(158)
	this->_blendInt = (int)0;
	HX_STACK_LINE(157)
	this->_facingVerticalMult = (int)1;
	HX_STACK_LINE(156)
	this->_facingHorizontalMult = (int)1;
	HX_STACK_LINE(144)
	this->useColorTransform = false;
	HX_STACK_LINE(137)
	this->color = (int)16777215;
	HX_STACK_LINE(111)
	this->flipY = false;
	HX_STACK_LINE(107)
	this->flipX = false;
	HX_STACK_LINE(103)
	this->facing = (int)16;
	HX_STACK_LINE(98)
	this->alpha = 1.0;
	HX_STACK_LINE(94)
	this->bakedRotationAngle = (int)0;
	HX_STACK_LINE(84)
	this->numFrames = (int)0;
	HX_STACK_LINE(80)
	this->frameHeight = (int)0;
	HX_STACK_LINE(76)
	this->frameWidth = (int)0;
	HX_STACK_LINE(62)
	this->dirty = true;
	HX_STACK_LINE(57)
	this->antialiasing = false;
	HX_STACK_LINE(210)
	super::__construct(X,Y,null(),null());
	HX_STACK_LINE(212)
	if (((SimpleGraphic != null()))){
		HX_STACK_LINE(214)
		this->loadGraphic(SimpleGraphic,null(),null(),null(),null(),null());
	}
}
;
	return null();
}

//FlxSprite_obj::~FlxSprite_obj() { }

Dynamic FlxSprite_obj::__CreateEmpty() { return  new FlxSprite_obj; }
hx::ObjectPtr< FlxSprite_obj > FlxSprite_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic)
{  hx::ObjectPtr< FlxSprite_obj > result = new FlxSprite_obj();
	result->__construct(__o_X,__o_Y,SimpleGraphic);
	return result;}

Dynamic FlxSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSprite_obj > result = new FlxSprite_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void FlxSprite_obj::initVars( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","initVars",0x31793705,"flixel.FlxSprite.initVars","flixel/FlxSprite.hx",219,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(220)
		this->super::initVars();
		HX_STACK_LINE(222)
		::flixel::animation::FlxAnimationController _g = ::flixel::animation::FlxAnimationController_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(222)
		this->animation = _g;
		HX_STACK_LINE(224)
		::openfl::_v2::geom::Point _g1 = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(224)
		this->_flashPoint = _g1;
		HX_STACK_LINE(225)
		::openfl::_v2::geom::Rectangle _g2 = ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(225)
		this->_flashRect = _g2;
		HX_STACK_LINE(226)
		::openfl::_v2::geom::Rectangle _g3 = ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(226)
		this->_flashRect2 = _g3;
		HX_STACK_LINE(227)
		::openfl::_v2::geom::Point _g4 = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(227)
		this->_flashPointZero = _g4;
		HX_STACK_LINE(228)
		::flixel::math::FlxPoint _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(228)
		{
			HX_STACK_LINE(228)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(228)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(228)
			::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(228)
			point->_inPool = false;
			HX_STACK_LINE(228)
			_g5 = point;
		}
		HX_STACK_LINE(228)
		this->offset = _g5;
		HX_STACK_LINE(229)
		::flixel::math::FlxPoint _g6;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(229)
		{
			HX_STACK_LINE(229)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(229)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(229)
			::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(229)
			point->_inPool = false;
			HX_STACK_LINE(229)
			_g6 = point;
		}
		HX_STACK_LINE(229)
		this->origin = _g6;
		HX_STACK_LINE(230)
		::flixel::math::FlxPoint _g7;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(230)
		{
			HX_STACK_LINE(230)
			::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)1,(int)1);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(230)
			point->_inPool = false;
			HX_STACK_LINE(230)
			_g7 = point;
		}
		HX_STACK_LINE(230)
		this->scale = _g7;
		HX_STACK_LINE(231)
		::flixel::math::FlxPoint _g8;		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(231)
		{
			HX_STACK_LINE(231)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(231)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(231)
			::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(231)
			point->_inPool = false;
			HX_STACK_LINE(231)
			_g8 = point;
		}
		HX_STACK_LINE(231)
		this->_halfSize = _g8;
		HX_STACK_LINE(232)
		::flixel::math::FlxMatrix _g9 = ::flixel::math::FlxMatrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(232)
		this->_matrix = _g9;
		HX_STACK_LINE(233)
		::openfl::_v2::geom::ColorTransform _g10 = ::openfl::_v2::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(233)
		this->colorTransform = _g10;
	}
return null();
}


Void FlxSprite_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","destroy",0x0fb5c8f1,"flixel.FlxSprite.destroy","flixel/FlxSprite.hx",241,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(242)
		this->super::destroy();
		HX_STACK_LINE(244)
		::flixel::animation::FlxAnimationController _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->animation);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(244)
		this->animation = _g;
		HX_STACK_LINE(246)
		::flixel::math::FlxPoint _g1 = ::flixel::util::FlxDestroyUtil_obj::put(this->offset);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(246)
		this->offset = _g1;
		HX_STACK_LINE(247)
		::flixel::math::FlxPoint _g2 = ::flixel::util::FlxDestroyUtil_obj::put(this->origin);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(247)
		this->origin = _g2;
		HX_STACK_LINE(248)
		::flixel::math::FlxPoint _g3 = ::flixel::util::FlxDestroyUtil_obj::put(this->scale);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(248)
		this->scale = _g3;
		HX_STACK_LINE(249)
		::flixel::math::FlxPoint _g4 = ::flixel::util::FlxDestroyUtil_obj::put(this->_halfSize);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(249)
		this->_halfSize = _g4;
		HX_STACK_LINE(251)
		::openfl::_v2::display::BitmapData _g5 = ::flixel::util::FlxDestroyUtil_obj::dispose(this->framePixels);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(251)
		this->framePixels = _g5;
		HX_STACK_LINE(253)
		this->_flashPoint = null();
		HX_STACK_LINE(254)
		this->_flashRect = null();
		HX_STACK_LINE(255)
		this->_flashRect2 = null();
		HX_STACK_LINE(256)
		this->_flashPointZero = null();
		HX_STACK_LINE(257)
		this->_matrix = null();
		HX_STACK_LINE(258)
		this->colorTransform = null();
		HX_STACK_LINE(259)
		this->set_blend(null());
		HX_STACK_LINE(260)
		this->set_frame(null());
		HX_STACK_LINE(262)
		this->set_frames(null());
		HX_STACK_LINE(263)
		this->set_graphic(null());
	}
return null();
}


::flixel::FlxSprite FlxSprite_obj::clone( ){
	HX_STACK_FRAME("flixel.FlxSprite","clone",0x3c30f394,"flixel.FlxSprite.clone","flixel/FlxSprite.hx",268,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(268)
	return ::flixel::FlxSprite_obj::__new(null(),null(),null())->loadGraphicFromSprite(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,clone,return )

::flixel::FlxSprite FlxSprite_obj::loadGraphicFromSprite( ::flixel::FlxSprite Sprite){
	HX_STACK_FRAME("flixel.FlxSprite","loadGraphicFromSprite",0xd0637b08,"flixel.FlxSprite.loadGraphicFromSprite","flixel/FlxSprite.hx",279,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_LINE(280)
	this->set_frames(Sprite->frames);
	HX_STACK_LINE(281)
	this->bakedRotationAngle = Sprite->bakedRotationAngle;
	HX_STACK_LINE(282)
	if (((this->bakedRotationAngle > (int)0))){
		HX_STACK_LINE(284)
		Float _g = Sprite->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(284)
		this->set_width(_g);
		HX_STACK_LINE(285)
		Float _g1 = Sprite->get_height();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(285)
		this->set_height(_g1);
		HX_STACK_LINE(286)
		this->centerOffsets(null());
	}
	HX_STACK_LINE(288)
	this->set_antialiasing(Sprite->antialiasing);
	HX_STACK_LINE(289)
	this->animation->copyFrom(Sprite->animation);
	HX_STACK_LINE(290)
	this->graphicLoaded();
	HX_STACK_LINE(291)
	this->set_clipRect(Sprite->clipRect);
	HX_STACK_LINE(292)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,loadGraphicFromSprite,return )

::flixel::FlxSprite FlxSprite_obj::loadGraphic( Dynamic Graphic,hx::Null< bool >  __o_Animated,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< bool >  __o_Unique,::String Key){
bool Animated = __o_Animated.Default(false);
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","loadGraphic",0x47377c99,"flixel.FlxSprite.loadGraphic","flixel/FlxSprite.hx",307,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Animated,"Animated")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(308)
		::flixel::graphics::FlxGraphic graph = ::flixel::FlxG_obj::bitmap->add(Graphic,Unique,Key);		HX_STACK_VAR(graph,"graph");
		HX_STACK_LINE(310)
		if (((Width == (int)0))){
			HX_STACK_LINE(312)
			if (((Animated == true))){
				HX_STACK_LINE(312)
				Width = graph->height;
			}
			else{
				HX_STACK_LINE(312)
				Width = graph->width;
			}
			HX_STACK_LINE(313)
			if (((Width > graph->width))){
				HX_STACK_LINE(313)
				Width = graph->width;
			}
			else{
				HX_STACK_LINE(313)
				Width = Width;
			}
		}
		HX_STACK_LINE(316)
		if (((Height == (int)0))){
			HX_STACK_LINE(318)
			if (((Animated == true))){
				HX_STACK_LINE(318)
				Height = Width;
			}
			else{
				HX_STACK_LINE(318)
				Height = graph->height;
			}
			HX_STACK_LINE(319)
			if (((Height > graph->height))){
				HX_STACK_LINE(319)
				Height = graph->height;
			}
			else{
				HX_STACK_LINE(319)
				Height = Height;
			}
		}
		HX_STACK_LINE(322)
		if ((Animated)){
			HX_STACK_LINE(324)
			::flixel::math::FlxPoint _g = ::flixel::math::FlxPoint_obj::__new(Width,Height);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(324)
			::flixel::graphics::frames::FlxTileFrames _g1 = ::flixel::graphics::frames::FlxTileFrames_obj::fromGraphic(graph,_g,null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(324)
			this->set_frames(_g1);
		}
		else{
			HX_STACK_LINE(328)
			::flixel::graphics::frames::FlxImageFrame _g2 = graph->get_imageFrame();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(328)
			this->set_frames(_g2);
		}
		HX_STACK_LINE(331)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(FlxSprite_obj,loadGraphic,return )

::flixel::FlxSprite FlxSprite_obj::loadRotatedGraphic( Dynamic Graphic,hx::Null< int >  __o_Rotations,hx::Null< int >  __o_Frame,hx::Null< bool >  __o_AntiAliasing,hx::Null< bool >  __o_AutoBuffer,::String Key){
int Rotations = __o_Rotations.Default(16);
int Frame = __o_Frame.Default(-1);
bool AntiAliasing = __o_AntiAliasing.Default(false);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","loadRotatedGraphic",0xceb71e2e,"flixel.FlxSprite.loadRotatedGraphic","flixel/FlxSprite.hx",347,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphic,"Graphic")
	HX_STACK_ARG(Rotations,"Rotations")
	HX_STACK_ARG(Frame,"Frame")
	HX_STACK_ARG(AntiAliasing,"AntiAliasing")
	HX_STACK_ARG(AutoBuffer,"AutoBuffer")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(348)
		::flixel::graphics::FlxGraphic brushGraphic = ::flixel::FlxG_obj::bitmap->add(Graphic,false,Key);		HX_STACK_VAR(brushGraphic,"brushGraphic");
		HX_STACK_LINE(349)
		::openfl::_v2::display::BitmapData brush = brushGraphic->bitmap;		HX_STACK_VAR(brush,"brush");
		HX_STACK_LINE(350)
		::String key = brushGraphic->key;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(352)
		if (((Frame >= (int)0))){
			HX_STACK_LINE(355)
			int brushSize = brush->get_height();		HX_STACK_VAR(brushSize,"brushSize");
			HX_STACK_LINE(356)
			int _g = brush->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(356)
			Float _g1 = (Float(_g) / Float(brushSize));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(356)
			int framesNum = ::Std_obj::_int(_g1);		HX_STACK_VAR(framesNum,"framesNum");
			HX_STACK_LINE(357)
			if (((framesNum > Frame))){
				HX_STACK_LINE(357)
				Frame = Frame;
			}
			else{
				HX_STACK_LINE(357)
				Frame = hx::Mod(Frame,framesNum);
			}
			HX_STACK_LINE(358)
			hx::AddEq(key,(HX_CSTRING(":") + Frame));
			HX_STACK_LINE(360)
			::openfl::_v2::display::BitmapData full = brush;		HX_STACK_VAR(full,"full");
			HX_STACK_LINE(361)
			::openfl::_v2::display::BitmapData _g2 = ::openfl::_v2::display::BitmapData_obj::__new(brushSize,brushSize,true,(int)0,null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(361)
			brush = _g2;
			HX_STACK_LINE(362)
			this->_flashRect->setTo((Frame * brushSize),(int)0,brushSize,brushSize);
			HX_STACK_LINE(363)
			brush->copyPixels(full,this->_flashRect,this->_flashPointZero,null(),null(),null());
		}
		HX_STACK_LINE(366)
		::String _g3 = ::Std_obj::string(AutoBuffer);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(366)
		::String _g4 = ((((key + HX_CSTRING(":")) + Rotations) + HX_CSTRING(":")) + _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(366)
		key = _g4;
		HX_STACK_LINE(369)
		::flixel::graphics::FlxGraphic tempGraph = ::flixel::FlxG_obj::bitmap->get(key);		HX_STACK_VAR(tempGraph,"tempGraph");
		HX_STACK_LINE(370)
		if (((tempGraph == null()))){
			HX_STACK_LINE(372)
			::openfl::_v2::display::BitmapData bitmap = ::flixel::util::FlxBitmapDataUtil_obj::generateRotations(brush,Rotations,AntiAliasing,AutoBuffer);		HX_STACK_VAR(bitmap,"bitmap");
			HX_STACK_LINE(373)
			::flixel::graphics::FlxGraphic _g5 = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(bitmap,false,key,null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(373)
			tempGraph = _g5;
		}
		HX_STACK_LINE(376)
		int _g6 = brush->get_height();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(376)
		int _g7 = brush->get_width();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(376)
		int max;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(376)
		if (((_g6 > _g7))){
			HX_STACK_LINE(376)
			max = brush->get_height();
		}
		else{
			HX_STACK_LINE(376)
			max = brush->get_width();
		}
		HX_STACK_LINE(377)
		int _g8;		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(377)
		if ((AutoBuffer)){
			HX_STACK_LINE(377)
			_g8 = ::Std_obj::_int((max * 1.5));
		}
		else{
			HX_STACK_LINE(377)
			_g8 = max;
		}
		HX_STACK_LINE(377)
		max = _g8;
		HX_STACK_LINE(379)
		::flixel::math::FlxPoint _g9 = ::flixel::math::FlxPoint_obj::__new(max,max);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(379)
		::flixel::graphics::frames::FlxTileFrames _g10 = ::flixel::graphics::frames::FlxTileFrames_obj::fromGraphic(tempGraph,_g9,null(),null());		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(379)
		this->set_frames(_g10);
		HX_STACK_LINE(381)
		if ((AutoBuffer)){
			HX_STACK_LINE(383)
			int _g11 = brush->get_width();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(383)
			this->set_width(_g11);
			HX_STACK_LINE(384)
			int _g12 = brush->get_height();		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(384)
			this->set_height(_g12);
			HX_STACK_LINE(385)
			this->centerOffsets(null());
		}
		HX_STACK_LINE(388)
		this->bakedRotationAngle = (Float((int)360) / Float(Rotations));
		HX_STACK_LINE(389)
		this->animation->createPrerotated(null());
		HX_STACK_LINE(390)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(FlxSprite_obj,loadRotatedGraphic,return )

::flixel::FlxSprite FlxSprite_obj::loadRotatedFrame( ::flixel::graphics::frames::FlxFrame Frame,hx::Null< int >  __o_Rotations,hx::Null< bool >  __o_AntiAliasing,hx::Null< bool >  __o_AutoBuffer){
int Rotations = __o_Rotations.Default(16);
bool AntiAliasing = __o_AntiAliasing.Default(false);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","loadRotatedFrame",0xe0d52e33,"flixel.FlxSprite.loadRotatedFrame","flixel/FlxSprite.hx",404,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Frame,"Frame")
	HX_STACK_ARG(Rotations,"Rotations")
	HX_STACK_ARG(AntiAliasing,"AntiAliasing")
	HX_STACK_ARG(AutoBuffer,"AutoBuffer")
{
		HX_STACK_LINE(405)
		::String key = Frame->parent->key;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(406)
		if (((Frame->name != null()))){
			HX_STACK_LINE(408)
			hx::AddEq(key,(HX_CSTRING(":") + Frame->name));
		}
		else{
			HX_STACK_LINE(412)
			::String _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(412)
			{
				HX_STACK_LINE(412)
				::flixel::math::FlxRect _this = Frame->frame;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(412)
				::flixel::util::LabelValuePair _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(412)
				{
					HX_STACK_LINE(412)
					::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(412)
					_this1->label = HX_CSTRING("x");
					HX_STACK_LINE(412)
					_this1->value = _this->x;
					HX_STACK_LINE(412)
					_g = _this1;
				}
				HX_STACK_LINE(412)
				::flixel::util::LabelValuePair _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(412)
				{
					HX_STACK_LINE(412)
					::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(412)
					_this1->label = HX_CSTRING("y");
					HX_STACK_LINE(412)
					_this1->value = _this->y;
					HX_STACK_LINE(412)
					_g1 = _this1;
				}
				HX_STACK_LINE(412)
				::flixel::util::LabelValuePair _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(412)
				{
					HX_STACK_LINE(412)
					::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(412)
					_this1->label = HX_CSTRING("w");
					HX_STACK_LINE(412)
					_this1->value = _this->width;
					HX_STACK_LINE(412)
					_g2 = _this1;
				}
				HX_STACK_LINE(412)
				::flixel::util::LabelValuePair _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(412)
				{
					HX_STACK_LINE(412)
					::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(412)
					_this1->label = HX_CSTRING("h");
					HX_STACK_LINE(412)
					_this1->value = _this->height;
					HX_STACK_LINE(412)
					_g3 = _this1;
				}
				HX_STACK_LINE(412)
				Array< ::Dynamic > _g4 = Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1).Add(_g2).Add(_g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(412)
				_g5 = ::flixel::util::FlxStringUtil_obj::getDebugString(_g4);
			}
			HX_STACK_LINE(412)
			::String _g6 = (HX_CSTRING(":") + _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(412)
			hx::AddEq(key,_g6);
		}
		HX_STACK_LINE(415)
		::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->get(key);		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(416)
		if (((graphic == null()))){
			HX_STACK_LINE(418)
			::openfl::_v2::display::BitmapData _g7 = Frame->getBitmap()->clone();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(418)
			::flixel::graphics::FlxGraphic _g8 = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(_g7,false,key,null());		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(418)
			graphic = _g8;
		}
		HX_STACK_LINE(421)
		return this->loadRotatedGraphic(graphic,Rotations,(int)-1,AntiAliasing,AutoBuffer,null());
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxSprite_obj,loadRotatedFrame,return )

::flixel::FlxSprite FlxSprite_obj::makeGraphic( int Width,int Height,hx::Null< int >  __o_Color,hx::Null< bool >  __o_Unique,::String Key){
int Color = __o_Color.Default(-1);
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","makeGraphic",0xbaa3e5d1,"flixel.FlxSprite.makeGraphic","flixel/FlxSprite.hx",435,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(436)
		::flixel::graphics::FlxGraphic graph = ::flixel::FlxG_obj::bitmap->create(Width,Height,Color,Unique,Key);		HX_STACK_VAR(graph,"graph");
		HX_STACK_LINE(437)
		::flixel::graphics::frames::FlxImageFrame _g = graph->get_imageFrame();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(437)
		this->set_frames(_g);
		HX_STACK_LINE(438)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxSprite_obj,makeGraphic,return )

Void FlxSprite_obj::graphicLoaded( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","graphicLoaded",0xacabf404,"flixel.FlxSprite.graphicLoaded","flixel/FlxSprite.hx",445,0x0384bffa)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,graphicLoaded,(void))

Void FlxSprite_obj::resetSize( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","resetSize",0x5d8771e7,"flixel.FlxSprite.resetSize","flixel/FlxSprite.hx",451,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(452)
		this->_flashRect->x = (int)0;
		HX_STACK_LINE(453)
		this->_flashRect->y = (int)0;
		HX_STACK_LINE(454)
		this->_flashRect->width = this->frameWidth;
		HX_STACK_LINE(455)
		this->_flashRect->height = this->frameHeight;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetSize,(void))

Void FlxSprite_obj::resetFrameSize( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","resetFrameSize",0xb7baa4a8,"flixel.FlxSprite.resetFrameSize","flixel/FlxSprite.hx",462,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(463)
		int _g = ::Std_obj::_int(this->frame->sourceSize->x);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(463)
		this->frameWidth = _g;
		HX_STACK_LINE(464)
		int _g1 = ::Std_obj::_int(this->frame->sourceSize->y);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(464)
		this->frameHeight = _g1;
		HX_STACK_LINE(465)
		this->_halfSize->set((0.5 * this->frameWidth),(0.5 * this->frameHeight));
		HX_STACK_LINE(466)
		{
			HX_STACK_LINE(466)
			this->_flashRect->x = (int)0;
			HX_STACK_LINE(466)
			this->_flashRect->y = (int)0;
			HX_STACK_LINE(466)
			this->_flashRect->width = this->frameWidth;
			HX_STACK_LINE(466)
			this->_flashRect->height = this->frameHeight;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetFrameSize,(void))

Void FlxSprite_obj::resetSizeFromFrame( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","resetSizeFromFrame",0xf893db7c,"flixel.FlxSprite.resetSizeFromFrame","flixel/FlxSprite.hx",473,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(474)
		this->set_width(this->frameWidth);
		HX_STACK_LINE(475)
		this->set_height(this->frameHeight);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetSizeFromFrame,(void))

Void FlxSprite_obj::setGraphicSize( hx::Null< int >  __o_Width,hx::Null< int >  __o_Height){
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
	HX_STACK_FRAME("flixel.FlxSprite","setGraphicSize",0x516eb7f0,"flixel.FlxSprite.setGraphicSize","flixel/FlxSprite.hx",486,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
{
		HX_STACK_LINE(487)
		if (((bool((Width <= (int)0)) && bool((Height <= (int)0))))){
			HX_STACK_LINE(489)
			return null();
		}
		HX_STACK_LINE(492)
		Float newScaleX = (Float(Width) / Float(this->frameWidth));		HX_STACK_VAR(newScaleX,"newScaleX");
		HX_STACK_LINE(493)
		Float newScaleY = (Float(Height) / Float(this->frameHeight));		HX_STACK_VAR(newScaleY,"newScaleY");
		HX_STACK_LINE(494)
		this->scale->set(newScaleX,newScaleY);
		HX_STACK_LINE(496)
		if (((Width <= (int)0))){
			HX_STACK_LINE(498)
			this->scale->set_x(newScaleY);
		}
		else{
			HX_STACK_LINE(500)
			if (((Height <= (int)0))){
				HX_STACK_LINE(502)
				this->scale->set_y(newScaleX);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSprite_obj,setGraphicSize,(void))

Void FlxSprite_obj::updateHitbox( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","updateHitbox",0x9470392a,"flixel.FlxSprite.updateHitbox","flixel/FlxSprite.hx",511,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(512)
		this->set_width((this->scale->x * this->frameWidth));
		HX_STACK_LINE(513)
		this->set_height((this->scale->y * this->frameHeight));
		HX_STACK_LINE(514)
		Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(514)
		Float _g1 = (_g - this->frameWidth);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(514)
		Float _g2 = (-0.5 * _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(514)
		Float _g3 = this->get_height();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(514)
		Float _g4 = (_g3 - this->frameHeight);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(514)
		Float _g5 = (-0.5 * _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(514)
		this->offset->set(_g2,_g5);
		HX_STACK_LINE(515)
		this->origin->set((this->frameWidth * 0.5),(this->frameHeight * 0.5));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateHitbox,(void))

Void FlxSprite_obj::resetHelpers( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","resetHelpers",0x6fc22ddf,"flixel.FlxSprite.resetHelpers","flixel/FlxSprite.hx",522,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(523)
		{
			HX_STACK_LINE(523)
			int _g = ::Std_obj::_int(this->frame->sourceSize->x);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(523)
			this->frameWidth = _g;
			HX_STACK_LINE(523)
			int _g1 = ::Std_obj::_int(this->frame->sourceSize->y);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(523)
			this->frameHeight = _g1;
			HX_STACK_LINE(523)
			this->_halfSize->set((0.5 * this->frameWidth),(0.5 * this->frameHeight));
			HX_STACK_LINE(523)
			{
				HX_STACK_LINE(523)
				this->_flashRect->x = (int)0;
				HX_STACK_LINE(523)
				this->_flashRect->y = (int)0;
				HX_STACK_LINE(523)
				this->_flashRect->width = this->frameWidth;
				HX_STACK_LINE(523)
				this->_flashRect->height = this->frameHeight;
			}
		}
		HX_STACK_LINE(524)
		{
			HX_STACK_LINE(524)
			this->set_width(this->frameWidth);
			HX_STACK_LINE(524)
			this->set_height(this->frameHeight);
		}
		HX_STACK_LINE(525)
		this->_flashRect2->x = (int)0;
		HX_STACK_LINE(526)
		this->_flashRect2->y = (int)0;
		HX_STACK_LINE(528)
		if (((this->graphic != null()))){
			HX_STACK_LINE(530)
			this->_flashRect2->width = this->graphic->width;
			HX_STACK_LINE(531)
			this->_flashRect2->height = this->graphic->height;
		}
		HX_STACK_LINE(534)
		this->origin->set((this->frameWidth * 0.5),(this->frameHeight * 0.5));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetHelpers,(void))

Void FlxSprite_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxSprite","update",0xe75bd5f2,"flixel.FlxSprite.update","flixel/FlxSprite.hx",543,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(544)
		this->super::update(elapsed);
		HX_STACK_LINE(545)
		this->updateAnimation(elapsed);
	}
return null();
}


Void FlxSprite_obj::updateAnimation( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxSprite","updateAnimation",0x7e6eaab2,"flixel.FlxSprite.updateAnimation","flixel/FlxSprite.hx",553,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(553)
		this->animation->update(elapsed);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,updateAnimation,(void))

Void FlxSprite_obj::draw( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","draw",0xe68b7fad,"flixel.FlxSprite.draw","flixel/FlxSprite.hx",560,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(561)
		if (((this->frame == null()))){
			HX_STACK_LINE(563)
			::flixel::graphics::FlxGraphic _g = ::flixel::graphics::FlxGraphic_obj::fromClass(hx::ClassOf< ::flixel::_FlxSprite::GraphicDefault >(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(563)
			this->loadGraphic(_g,null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(566)
		if (((bool((this->alpha == (int)0)) || bool((this->frame->type == (int)2))))){
			HX_STACK_LINE(568)
			return null();
		}
		HX_STACK_LINE(571)
		if ((this->dirty)){
			HX_STACK_LINE(573)
			this->calcFrame(null());
		}
		HX_STACK_LINE(577)
		::flixel::graphics::tile::FlxDrawStackItem drawItem;		HX_STACK_VAR(drawItem,"drawItem");
		HX_STACK_LINE(579)
		Float ox = this->origin->x;		HX_STACK_VAR(ox,"ox");
		HX_STACK_LINE(580)
		if (((this->_facingHorizontalMult != (int)1))){
			HX_STACK_LINE(582)
			ox = (this->frameWidth - ox);
		}
		HX_STACK_LINE(584)
		Float oy = this->origin->y;		HX_STACK_VAR(oy,"oy");
		HX_STACK_LINE(585)
		if (((this->_facingVerticalMult != (int)1))){
			HX_STACK_LINE(587)
			oy = (this->frameHeight - oy);
		}
		HX_STACK_LINE(591)
		{
			HX_STACK_LINE(591)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(591)
			Array< ::Dynamic > _g1 = this->get_cameras();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(591)
			while((true)){
				HX_STACK_LINE(591)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(591)
					break;
				}
				HX_STACK_LINE(591)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(591)
				++(_g);
				HX_STACK_LINE(593)
				if (((  ((!(((bool(!(camera->visible)) || bool(!(camera->exists))))))) ? bool(!(this->isOnScreen(camera))) : bool(true) ))){
					HX_STACK_LINE(595)
					continue;
				}
				HX_STACK_LINE(598)
				this->getScreenPosition(this->_point,camera)->subtractPoint(this->offset);
				HX_STACK_LINE(623)
				::flixel::graphics::tile::FlxDrawStackItem _g11 = camera->getDrawStackItem(this->frame->parent,this->isColored,this->_blendInt,this->antialiasing);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(623)
				drawItem = _g11;
				HX_STACK_LINE(625)
				this->_matrix->identity();
				HX_STACK_LINE(627)
				if (((this->frame->angle != (int)0))){
					HX_STACK_LINE(630)
					this->frame->prepareFrameMatrix(this->_matrix);
				}
				HX_STACK_LINE(633)
				Float x1 = (ox - this->frame->center->x);		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(634)
				Float y1 = (oy - this->frame->center->y);		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(635)
				this->_matrix->translate(x1,y1);
				HX_STACK_LINE(637)
				Float sx = (this->scale->x * this->_facingHorizontalMult);		HX_STACK_VAR(sx,"sx");
				HX_STACK_LINE(638)
				Float sy = (this->scale->y * this->_facingVerticalMult);		HX_STACK_VAR(sy,"sy");
				HX_STACK_LINE(639)
				this->_matrix->scale((sx * camera->totalScaleX),(sy * camera->totalScaleY));
				HX_STACK_LINE(642)
				if ((!(this->isSimpleRender(camera)))){
					HX_STACK_LINE(644)
					if (((bool(this->_angleChanged) && bool((this->bakedRotationAngle <= (int)0))))){
						HX_STACK_LINE(646)
						Float radians = (this->angle * ((Float(::Math_obj::PI) / Float((int)180))));		HX_STACK_VAR(radians,"radians");
						HX_STACK_LINE(647)
						Float _g2 = ::Math_obj::sin(radians);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(647)
						this->_sinAngle = _g2;
						HX_STACK_LINE(648)
						Float _g3 = ::Math_obj::cos(radians);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(648)
						this->_cosAngle = _g3;
						HX_STACK_LINE(649)
						this->_angleChanged = false;
					}
					HX_STACK_LINE(652)
					{
						HX_STACK_LINE(652)
						::flixel::math::FlxMatrix _this = this->_matrix;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(652)
						Float cos = this->_cosAngle;		HX_STACK_VAR(cos,"cos");
						HX_STACK_LINE(652)
						Float sin = this->_sinAngle;		HX_STACK_VAR(sin,"sin");
						HX_STACK_LINE(652)
						Float a1 = ((_this->a * cos) - (_this->b * sin));		HX_STACK_VAR(a1,"a1");
						HX_STACK_LINE(652)
						_this->b = ((_this->a * sin) + (_this->b * cos));
						HX_STACK_LINE(652)
						_this->a = a1;
						HX_STACK_LINE(652)
						Float c1 = ((_this->c * cos) - (_this->d * sin));		HX_STACK_VAR(c1,"c1");
						HX_STACK_LINE(652)
						_this->d = ((_this->c * sin) + (_this->d * cos));
						HX_STACK_LINE(652)
						_this->c = c1;
						HX_STACK_LINE(652)
						Float tx1 = ((_this->tx * cos) - (_this->ty * sin));		HX_STACK_VAR(tx1,"tx1");
						HX_STACK_LINE(652)
						_this->ty = ((_this->tx * sin) + (_this->ty * cos));
						HX_STACK_LINE(652)
						_this->tx = tx1;
						HX_STACK_LINE(652)
						_this;
					}
				}
				HX_STACK_LINE(655)
				this->_point->addPoint(this->origin);
				HX_STACK_LINE(657)
				{
					HX_STACK_LINE(657)
					::flixel::math::FlxPoint _g2 = this->_point;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(657)
					_g2->set_x((_g2->x * camera->totalScaleX));
				}
				HX_STACK_LINE(658)
				{
					HX_STACK_LINE(658)
					::flixel::math::FlxPoint _g2 = this->_point;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(658)
					_g2->set_y((_g2->y * camera->totalScaleY));
				}
				HX_STACK_LINE(660)
				if ((this->isPixelPerfectRender(camera))){
					HX_STACK_LINE(662)
					::flixel::math::FlxPoint _this = this->_point;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(662)
					int _g4 = ::Math_obj::floor(_this->x);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(662)
					_this->set_x(_g4);
					HX_STACK_LINE(662)
					int _g5 = ::Math_obj::floor(_this->y);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(662)
					_this->set_y(_g5);
					HX_STACK_LINE(662)
					_this;
				}
				HX_STACK_LINE(665)
				{
					HX_STACK_LINE(665)
					::flixel::math::FlxPoint _this = this->_point;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(665)
					{
						HX_STACK_LINE(665)
						::flixel::math::FlxPoint _g2 = _this;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(665)
						_g2->set_x((_g2->x - this->_matrix->tx));
					}
					HX_STACK_LINE(665)
					{
						HX_STACK_LINE(665)
						::flixel::math::FlxPoint _g2 = _this;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(665)
						_g2->set_y((_g2->y - this->_matrix->ty));
					}
					HX_STACK_LINE(665)
					_this;
				}
				HX_STACK_LINE(667)
				{
					HX_STACK_LINE(667)
					::openfl::_v2::geom::Matrix matrix = this->_matrix;		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(667)
					{
						HX_STACK_LINE(667)
						::flixel::math::FlxPoint coordinate = this->_point;		HX_STACK_VAR(coordinate,"coordinate");
						HX_STACK_LINE(667)
						int color = this->color;		HX_STACK_VAR(color,"color");
						HX_STACK_LINE(667)
						int _g6 = (drawItem->position)++;		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(667)
						drawItem->drawData[_g6] = coordinate->x;
						HX_STACK_LINE(667)
						int _g7 = (drawItem->position)++;		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(667)
						drawItem->drawData[_g7] = coordinate->y;
						HX_STACK_LINE(667)
						int _g8 = (drawItem->position)++;		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(667)
						drawItem->drawData[_g8] = this->frame->tileID;
						HX_STACK_LINE(667)
						int _g9 = (drawItem->position)++;		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(667)
						drawItem->drawData[_g9] = matrix->a;
						HX_STACK_LINE(667)
						int _g10 = (drawItem->position)++;		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(667)
						drawItem->drawData[_g10] = matrix->b;
						HX_STACK_LINE(667)
						int _g111 = (drawItem->position)++;		HX_STACK_VAR(_g111,"_g111");
						HX_STACK_LINE(667)
						drawItem->drawData[_g111] = matrix->c;
						HX_STACK_LINE(667)
						int _g12 = (drawItem->position)++;		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(667)
						drawItem->drawData[_g12] = matrix->d;
						HX_STACK_LINE(667)
						if ((this->isColored)){
							HX_STACK_LINE(667)
							int _g13 = (drawItem->position)++;		HX_STACK_VAR(_g13,"_g13");
							HX_STACK_LINE(667)
							drawItem->drawData[_g13] = (Float(((int((int(color) >> int((int)16))) & int((int)255)))) / Float((int)255));
							HX_STACK_LINE(667)
							int _g14 = (drawItem->position)++;		HX_STACK_VAR(_g14,"_g14");
							HX_STACK_LINE(667)
							drawItem->drawData[_g14] = (Float(((int((int(color) >> int((int)8))) & int((int)255)))) / Float((int)255));
							HX_STACK_LINE(667)
							int _g15 = (drawItem->position)++;		HX_STACK_VAR(_g15,"_g15");
							HX_STACK_LINE(667)
							drawItem->drawData[_g15] = (Float(((int(color) & int((int)255)))) / Float((int)255));
						}
						HX_STACK_LINE(667)
						int _g16 = (drawItem->position)++;		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(667)
						drawItem->drawData[_g16] = (this->alpha * camera->alpha);
						HX_STACK_LINE(667)
						if ((coordinate->_weak)){
							HX_STACK_LINE(667)
							coordinate->put();
						}
					}
				}
			}
		}
	}
return null();
}


Void FlxSprite_obj::setDrawData( ::flixel::graphics::tile::FlxDrawStackItem drawItem,::flixel::FlxCamera camera,::openfl::_v2::geom::Matrix matrix,Dynamic tileID){
{
		HX_STACK_FRAME("flixel.FlxSprite","setDrawData",0x89c02d87,"flixel.FlxSprite.setDrawData","flixel/FlxSprite.hx",685,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(drawItem,"drawItem")
		HX_STACK_ARG(camera,"camera")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(tileID,"tileID")
		HX_STACK_LINE(685)
		::flixel::math::FlxPoint coordinate = this->_point;		HX_STACK_VAR(coordinate,"coordinate");
		HX_STACK_LINE(685)
		int color = this->color;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(685)
		int _g = (drawItem->position)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(685)
		drawItem->drawData[_g] = coordinate->x;
		HX_STACK_LINE(685)
		int _g1 = (drawItem->position)++;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(685)
		drawItem->drawData[_g1] = coordinate->y;
		HX_STACK_LINE(685)
		int _g2 = (drawItem->position)++;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(685)
		if (((tileID == null()))){
			HX_STACK_LINE(685)
			drawItem->drawData[_g2] = this->frame->tileID;
		}
		else{
			HX_STACK_LINE(685)
			drawItem->drawData[_g2] = tileID;
		}
		HX_STACK_LINE(685)
		int _g3 = (drawItem->position)++;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(685)
		drawItem->drawData[_g3] = matrix->a;
		HX_STACK_LINE(685)
		int _g4 = (drawItem->position)++;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(685)
		drawItem->drawData[_g4] = matrix->b;
		HX_STACK_LINE(685)
		int _g5 = (drawItem->position)++;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(685)
		drawItem->drawData[_g5] = matrix->c;
		HX_STACK_LINE(685)
		int _g6 = (drawItem->position)++;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(685)
		drawItem->drawData[_g6] = matrix->d;
		HX_STACK_LINE(685)
		if ((this->isColored)){
			HX_STACK_LINE(685)
			int _g7 = (drawItem->position)++;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(685)
			drawItem->drawData[_g7] = (Float(((int((int(color) >> int((int)16))) & int((int)255)))) / Float((int)255));
			HX_STACK_LINE(685)
			int _g8 = (drawItem->position)++;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(685)
			drawItem->drawData[_g8] = (Float(((int((int(color) >> int((int)8))) & int((int)255)))) / Float((int)255));
			HX_STACK_LINE(685)
			int _g9 = (drawItem->position)++;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(685)
			drawItem->drawData[_g9] = (Float(((int(color) & int((int)255)))) / Float((int)255));
		}
		HX_STACK_LINE(685)
		int _g10 = (drawItem->position)++;		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(685)
		drawItem->drawData[_g10] = (this->alpha * camera->alpha);
		HX_STACK_LINE(685)
		if ((coordinate->_weak)){
			HX_STACK_LINE(685)
			coordinate->put();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxSprite_obj,setDrawData,(void))

Void FlxSprite_obj::stamp( ::flixel::FlxSprite Brush,hx::Null< int >  __o_X,hx::Null< int >  __o_Y){
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.FlxSprite","stamp",0x77d9503a,"flixel.FlxSprite.stamp","flixel/FlxSprite.hx",698,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Brush,"Brush")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(699)
		if (((bool((this->graphic == null())) || bool((Brush->graphic == null()))))){
			HX_STACK_LINE(701)
			HX_STACK_DO_THROW(HX_CSTRING("Cannot stamp to or from a FlxSprite with no graphics."));
		}
		HX_STACK_LINE(704)
		::openfl::_v2::display::BitmapData bitmapData;		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(704)
		{
			HX_STACK_LINE(704)
			if (((bool((Brush->frame != null())) && bool(Brush->dirty)))){
				HX_STACK_LINE(704)
				if (((bool((bool(!(Brush->flipX)) && bool(!(Brush->flipY)))) && bool((Brush->frame->type == (int)0))))){
					HX_STACK_LINE(704)
					::openfl::_v2::display::BitmapData _g = Brush->frame->paintOnBitmap(Brush->framePixels);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(704)
					Brush->framePixels = _g;
				}
				else{
					HX_STACK_LINE(704)
					::openfl::_v2::display::BitmapData frameBmd = null();		HX_STACK_VAR(frameBmd,"frameBmd");
					HX_STACK_LINE(704)
					if (((bool(Brush->flipX) && bool(Brush->flipY)))){
						HX_STACK_LINE(704)
						::openfl::_v2::display::BitmapData _g1 = Brush->frame->getHVReversedBitmap();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(704)
						frameBmd = _g1;
					}
					else{
						HX_STACK_LINE(704)
						if ((Brush->flipX)){
							HX_STACK_LINE(704)
							::openfl::_v2::display::BitmapData _g2 = Brush->frame->getHReversedBitmap();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(704)
							frameBmd = _g2;
						}
						else{
							HX_STACK_LINE(704)
							if ((Brush->flipY)){
								HX_STACK_LINE(704)
								::openfl::_v2::display::BitmapData _g3 = Brush->frame->getVReversedBitmap();		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(704)
								frameBmd = _g3;
							}
							else{
								HX_STACK_LINE(704)
								::openfl::_v2::display::BitmapData _g4 = Brush->frame->getBitmap();		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(704)
								frameBmd = _g4;
							}
						}
					}
					struct _Function_4_1{
						inline static bool Block( ::flixel::FlxSprite &Brush){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxSprite.hx",704,0x0384bffa)
							{
								HX_STACK_LINE(704)
								int _g5 = Brush->framePixels->get_width();		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(704)
								return (_g5 != Brush->frameWidth);
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static bool Block( ::flixel::FlxSprite &Brush){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxSprite.hx",704,0x0384bffa)
							{
								HX_STACK_LINE(704)
								int _g6 = Brush->framePixels->get_height();		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(704)
								return (_g6 != Brush->frameHeight);
							}
							return null();
						}
					};
					HX_STACK_LINE(704)
					if (((  ((!(((  ((!(((Brush->framePixels == null()))))) ? bool(_Function_4_1::Block(Brush)) : bool(true) ))))) ? bool(_Function_4_2::Block(Brush)) : bool(true) ))){
						HX_STACK_LINE(704)
						::flixel::util::FlxDestroyUtil_obj::dispose(Brush->framePixels);
						HX_STACK_LINE(704)
						int _g7 = ::Std_obj::_int(Brush->frame->sourceSize->x);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(704)
						int _g8 = ::Std_obj::_int(Brush->frame->sourceSize->y);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(704)
						::openfl::_v2::display::BitmapData _g9 = ::openfl::_v2::display::BitmapData_obj::__new(_g7,_g8,null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(704)
						Brush->framePixels = _g9;
					}
					HX_STACK_LINE(704)
					Brush->framePixels->copyPixels(frameBmd,Brush->_flashRect,Brush->_flashPointZero,null(),null(),null());
				}
				HX_STACK_LINE(704)
				if ((Brush->useColorTransform)){
					HX_STACK_LINE(704)
					Brush->framePixels->colorTransform(Brush->_flashRect,Brush->colorTransform);
				}
				HX_STACK_LINE(704)
				Brush->dirty = false;
			}
			HX_STACK_LINE(704)
			bitmapData = Brush->framePixels;
		}
		HX_STACK_LINE(706)
		if ((this->isSimpleRenderBlit(null()))){
			HX_STACK_LINE(708)
			this->_flashPoint->x = (X + this->frame->frame->x);
			HX_STACK_LINE(709)
			this->_flashPoint->y = (Y + this->frame->frame->y);
			HX_STACK_LINE(710)
			int _g10 = bitmapData->get_width();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(710)
			this->_flashRect2->width = _g10;
			HX_STACK_LINE(711)
			int _g11 = bitmapData->get_height();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(711)
			this->_flashRect2->height = _g11;
			HX_STACK_LINE(712)
			this->graphic->bitmap->copyPixels(bitmapData,this->_flashRect2,this->_flashPoint,null(),null(),true);
			HX_STACK_LINE(713)
			int _g12 = this->graphic->bitmap->get_width();		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(713)
			this->_flashRect2->width = _g12;
			HX_STACK_LINE(714)
			int _g13 = this->graphic->bitmap->get_height();		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(714)
			this->_flashRect2->height = _g13;
			HX_STACK_LINE(715)
			this->graphic->resetFrameBitmaps();
		}
		else{
			HX_STACK_LINE(723)
			this->_matrix->identity();
			HX_STACK_LINE(724)
			this->_matrix->translate(-(Brush->origin->x),-(Brush->origin->y));
			HX_STACK_LINE(725)
			this->_matrix->scale(Brush->scale->x,Brush->scale->y);
			HX_STACK_LINE(726)
			if (((Brush->angle != (int)0))){
				HX_STACK_LINE(728)
				this->_matrix->rotate((Brush->angle * ((Float(::Math_obj::PI) / Float((int)180)))));
			}
			HX_STACK_LINE(730)
			this->_matrix->translate(((X + this->frame->frame->x) + Brush->origin->x),((Y + this->frame->frame->y) + Brush->origin->y));
			HX_STACK_LINE(731)
			::openfl::_v2::display::BlendMode brushBlend = Brush->blend;		HX_STACK_VAR(brushBlend,"brushBlend");
			HX_STACK_LINE(732)
			this->graphic->bitmap->draw(bitmapData,this->_matrix,null(),brushBlend,null(),Brush->antialiasing);
			HX_STACK_LINE(733)
			this->graphic->resetFrameBitmaps();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,stamp,(void))

Void FlxSprite_obj::drawFrame( hx::Null< bool >  __o_Force){
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","drawFrame",0x99d67540,"flixel.FlxSprite.drawFrame","flixel/FlxSprite.hx",756,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(756)
		this->calcFrame(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,drawFrame,(void))

Void FlxSprite_obj::centerOffsets( hx::Null< bool >  __o_AdjustPosition){
bool AdjustPosition = __o_AdjustPosition.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","centerOffsets",0x583e0f62,"flixel.FlxSprite.centerOffsets","flixel/FlxSprite.hx",766,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AdjustPosition,"AdjustPosition")
{
		HX_STACK_LINE(767)
		Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(767)
		Float _g1 = (this->frameWidth - _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(767)
		Float _g2 = (_g1 * 0.5);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(767)
		this->offset->set_x(_g2);
		HX_STACK_LINE(768)
		Float _g3 = this->get_height();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(768)
		Float _g4 = (this->frameHeight - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(768)
		Float _g5 = (_g4 * 0.5);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(768)
		this->offset->set_y(_g5);
		HX_STACK_LINE(769)
		if ((AdjustPosition)){
			HX_STACK_LINE(771)
			{
				HX_STACK_LINE(771)
				::flixel::FlxSprite _g6 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(771)
				_g6->set_x((_g6->x + this->offset->x));
			}
			HX_STACK_LINE(772)
			{
				HX_STACK_LINE(772)
				::flixel::FlxSprite _g6 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(772)
				_g6->set_y((_g6->y + this->offset->y));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,centerOffsets,(void))

Void FlxSprite_obj::centerOrigin( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","centerOrigin",0x4cbae644,"flixel.FlxSprite.centerOrigin","flixel/FlxSprite.hx",782,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(782)
		this->origin->set((this->frameWidth * 0.5),(this->frameHeight * 0.5));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,centerOrigin,(void))

Array< ::Dynamic > FlxSprite_obj::replaceColor( int Color,int NewColor,hx::Null< bool >  __o_FetchPositions){
bool FetchPositions = __o_FetchPositions.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","replaceColor",0x7b700138,"flixel.FlxSprite.replaceColor","flixel/FlxSprite.hx",795,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(NewColor,"NewColor")
	HX_STACK_ARG(FetchPositions,"FetchPositions")
{
		HX_STACK_LINE(796)
		Array< ::Dynamic > positions = ::flixel::util::FlxBitmapDataUtil_obj::replaceColor(this->graphic->bitmap,Color,NewColor,FetchPositions,null());		HX_STACK_VAR(positions,"positions");
		HX_STACK_LINE(797)
		if (((positions != null()))){
			HX_STACK_LINE(799)
			this->dirty = true;
			HX_STACK_LINE(800)
			this->graphic->resetFrameBitmaps();
		}
		HX_STACK_LINE(802)
		return positions;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,replaceColor,return )

Void FlxSprite_obj::setColorTransform( hx::Null< Float >  __o_redMultiplier,hx::Null< Float >  __o_greenMultiplier,hx::Null< Float >  __o_blueMultiplier,hx::Null< Float >  __o_alphaMultiplier,hx::Null< Float >  __o_redOffset,hx::Null< Float >  __o_greenOffset,hx::Null< Float >  __o_blueOffset,hx::Null< Float >  __o_alphaOffset){
Float redMultiplier = __o_redMultiplier.Default(1.0);
Float greenMultiplier = __o_greenMultiplier.Default(1.0);
Float blueMultiplier = __o_blueMultiplier.Default(1.0);
Float alphaMultiplier = __o_alphaMultiplier.Default(1.0);
Float redOffset = __o_redOffset.Default(0);
Float greenOffset = __o_greenOffset.Default(0);
Float blueOffset = __o_blueOffset.Default(0);
Float alphaOffset = __o_alphaOffset.Default(0);
	HX_STACK_FRAME("flixel.FlxSprite","setColorTransform",0xa09a3582,"flixel.FlxSprite.setColorTransform","flixel/FlxSprite.hx",818,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(redMultiplier,"redMultiplier")
	HX_STACK_ARG(greenMultiplier,"greenMultiplier")
	HX_STACK_ARG(blueMultiplier,"blueMultiplier")
	HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
	HX_STACK_ARG(redOffset,"redOffset")
	HX_STACK_ARG(greenOffset,"greenOffset")
	HX_STACK_ARG(blueOffset,"blueOffset")
	HX_STACK_ARG(alphaOffset,"alphaOffset")
{
		HX_STACK_LINE(819)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(819)
		{
			HX_STACK_LINE(819)
			int this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(819)
			{
				HX_STACK_LINE(819)
				Float Alpha = (int)1;		HX_STACK_VAR(Alpha,"Alpha");
				HX_STACK_LINE(819)
				int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(color,"color");
				struct _Function_3_1{
					inline static int Block( Float &redMultiplier,Float &Alpha,Float &blueMultiplier,int &color,Float &greenMultiplier){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxSprite.hx",819,0x0384bffa)
						{
							HX_STACK_LINE(819)
							{
								HX_STACK_LINE(819)
								{
									HX_STACK_LINE(819)
									int Value = ::Math_obj::round((redMultiplier * (int)255));		HX_STACK_VAR(Value,"Value");
									HX_STACK_LINE(819)
									hx::AndEq(color,(int)-16711681);
									HX_STACK_LINE(819)
									hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
									HX_STACK_LINE(819)
									Value;
								}
								HX_STACK_LINE(819)
								redMultiplier;
							}
							HX_STACK_LINE(819)
							{
								HX_STACK_LINE(819)
								{
									HX_STACK_LINE(819)
									int Value = ::Math_obj::round((greenMultiplier * (int)255));		HX_STACK_VAR(Value,"Value");
									HX_STACK_LINE(819)
									hx::AndEq(color,(int)-65281);
									HX_STACK_LINE(819)
									hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
									HX_STACK_LINE(819)
									Value;
								}
								HX_STACK_LINE(819)
								greenMultiplier;
							}
							HX_STACK_LINE(819)
							{
								HX_STACK_LINE(819)
								{
									HX_STACK_LINE(819)
									int Value = ::Math_obj::round((blueMultiplier * (int)255));		HX_STACK_VAR(Value,"Value");
									HX_STACK_LINE(819)
									hx::AndEq(color,(int)-256);
									HX_STACK_LINE(819)
									if (((Value > (int)255))){
										HX_STACK_LINE(819)
										hx::OrEq(color,(int)255);
									}
									else{
										HX_STACK_LINE(819)
										if (((Value < (int)0))){
											HX_STACK_LINE(819)
											hx::OrEq(color,(int)0);
										}
										else{
											HX_STACK_LINE(819)
											hx::OrEq(color,Value);
										}
									}
									HX_STACK_LINE(819)
									Value;
								}
								HX_STACK_LINE(819)
								blueMultiplier;
							}
							HX_STACK_LINE(819)
							{
								HX_STACK_LINE(819)
								{
									HX_STACK_LINE(819)
									int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
									HX_STACK_LINE(819)
									hx::AndEq(color,(int)16777215);
									HX_STACK_LINE(819)
									hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
									HX_STACK_LINE(819)
									Value;
								}
								HX_STACK_LINE(819)
								Alpha;
							}
							HX_STACK_LINE(819)
							return color;
						}
						return null();
					}
				};
				HX_STACK_LINE(819)
				this1 = _Function_3_1::Block(redMultiplier,Alpha,blueMultiplier,color,greenMultiplier);
			}
			HX_STACK_LINE(819)
			_g = (int(this1) & int((int)16777215));
		}
		HX_STACK_LINE(819)
		this->set_color(_g);
		HX_STACK_LINE(820)
		this->set_alpha(alphaMultiplier);
		HX_STACK_LINE(822)
		this->colorTransform->redMultiplier = redMultiplier;
		HX_STACK_LINE(823)
		this->colorTransform->greenMultiplier = greenMultiplier;
		HX_STACK_LINE(824)
		this->colorTransform->blueMultiplier = blueMultiplier;
		HX_STACK_LINE(825)
		this->colorTransform->alphaMultiplier = alphaMultiplier;
		HX_STACK_LINE(826)
		this->colorTransform->redOffset = redOffset;
		HX_STACK_LINE(827)
		this->colorTransform->greenOffset = greenOffset;
		HX_STACK_LINE(828)
		this->colorTransform->blueOffset = blueOffset;
		HX_STACK_LINE(829)
		this->colorTransform->alphaOffset = alphaOffset;
		HX_STACK_LINE(831)
		this->useColorTransform = (bool((bool((bool((bool((bool((this->alpha != (int)1)) || bool((this->color != (int)16777215)))) || bool((redOffset != (int)0)))) || bool((greenOffset != (int)0)))) || bool((blueOffset != (int)0)))) || bool((alphaOffset != (int)0)));
		HX_STACK_LINE(832)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(FlxSprite_obj,setColorTransform,(void))

Void FlxSprite_obj::updateColorTransform( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","updateColorTransform",0x79f9051b,"flixel.FlxSprite.updateColorTransform","flixel/FlxSprite.hx",836,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(837)
		if (((bool((this->alpha != (int)1)) || bool((this->color != (int)16777215))))){
			HX_STACK_LINE(839)
			this->colorTransform->redMultiplier = (Float(((int((int(this->color) >> int((int)16))) & int((int)255)))) / Float((int)255));
			HX_STACK_LINE(840)
			this->colorTransform->greenMultiplier = (Float(((int((int(this->color) >> int((int)8))) & int((int)255)))) / Float((int)255));
			HX_STACK_LINE(841)
			this->colorTransform->blueMultiplier = (Float(((int(this->color) & int((int)255)))) / Float((int)255));
			HX_STACK_LINE(842)
			this->colorTransform->alphaMultiplier = this->alpha;
			HX_STACK_LINE(843)
			this->useColorTransform = true;
		}
		else{
			HX_STACK_LINE(847)
			this->colorTransform->redMultiplier = (int)1;
			HX_STACK_LINE(848)
			this->colorTransform->greenMultiplier = (int)1;
			HX_STACK_LINE(849)
			this->colorTransform->blueMultiplier = (int)1;
			HX_STACK_LINE(850)
			this->colorTransform->alphaMultiplier = (int)1;
			HX_STACK_LINE(851)
			this->useColorTransform = false;
		}
		HX_STACK_LINE(854)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateColorTransform,(void))

bool FlxSprite_obj::pixelsOverlapPoint( ::flixel::math::FlxPoint point,hx::Null< int >  __o_Mask,::flixel::FlxCamera Camera){
int Mask = __o_Mask.Default(255);
	HX_STACK_FRAME("flixel.FlxSprite","pixelsOverlapPoint",0x4c878b7f,"flixel.FlxSprite.pixelsOverlapPoint","flixel/FlxSprite.hx",867,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(Mask,"Mask")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(868)
		if (((Camera == null()))){
			HX_STACK_LINE(870)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(872)
		this->getScreenPosition(this->_point,Camera);
		HX_STACK_LINE(873)
		this->_point->set_x((this->_point->x - this->offset->x));
		HX_STACK_LINE(874)
		this->_point->set_y((this->_point->y - this->offset->y));
		HX_STACK_LINE(875)
		this->_flashPoint->x = ((point->x - Camera->scroll->x) - this->_point->x);
		HX_STACK_LINE(876)
		this->_flashPoint->y = ((point->y - Camera->scroll->y) - this->_point->y);
		HX_STACK_LINE(878)
		if ((point->_weak)){
			HX_STACK_LINE(878)
			point->put();
		}
		HX_STACK_LINE(881)
		if (((bool((bool((bool((this->_flashPoint->x < (int)0)) || bool((this->_flashPoint->x > this->frameWidth)))) || bool((this->_flashPoint->y < (int)0)))) || bool((this->_flashPoint->y > this->frameHeight))))){
			HX_STACK_LINE(883)
			return false;
		}
		else{
			HX_STACK_LINE(887)
			::openfl::_v2::display::BitmapData frameData;		HX_STACK_VAR(frameData,"frameData");
			HX_STACK_LINE(887)
			{
				HX_STACK_LINE(887)
				if (((bool((this->frame != null())) && bool(this->dirty)))){
					HX_STACK_LINE(887)
					if (((bool((bool(!(this->flipX)) && bool(!(this->flipY)))) && bool((this->frame->type == (int)0))))){
						HX_STACK_LINE(887)
						::openfl::_v2::display::BitmapData _g = this->frame->paintOnBitmap(this->framePixels);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(887)
						this->framePixels = _g;
					}
					else{
						HX_STACK_LINE(887)
						::openfl::_v2::display::BitmapData frameBmd = null();		HX_STACK_VAR(frameBmd,"frameBmd");
						HX_STACK_LINE(887)
						if (((bool(this->flipX) && bool(this->flipY)))){
							HX_STACK_LINE(887)
							::openfl::_v2::display::BitmapData _g1 = this->frame->getHVReversedBitmap();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(887)
							frameBmd = _g1;
						}
						else{
							HX_STACK_LINE(887)
							if ((this->flipX)){
								HX_STACK_LINE(887)
								::openfl::_v2::display::BitmapData _g2 = this->frame->getHReversedBitmap();		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(887)
								frameBmd = _g2;
							}
							else{
								HX_STACK_LINE(887)
								if ((this->flipY)){
									HX_STACK_LINE(887)
									::openfl::_v2::display::BitmapData _g3 = this->frame->getVReversedBitmap();		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(887)
									frameBmd = _g3;
								}
								else{
									HX_STACK_LINE(887)
									::openfl::_v2::display::BitmapData _g4 = this->frame->getBitmap();		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(887)
									frameBmd = _g4;
								}
							}
						}
						struct _Function_5_1{
							inline static bool Block( hx::ObjectPtr< ::flixel::FlxSprite_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxSprite.hx",887,0x0384bffa)
								{
									HX_STACK_LINE(887)
									int _g5 = __this->framePixels->get_width();		HX_STACK_VAR(_g5,"_g5");
									HX_STACK_LINE(887)
									return (_g5 != __this->frameWidth);
								}
								return null();
							}
						};
						struct _Function_5_2{
							inline static bool Block( hx::ObjectPtr< ::flixel::FlxSprite_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxSprite.hx",887,0x0384bffa)
								{
									HX_STACK_LINE(887)
									int _g6 = __this->framePixels->get_height();		HX_STACK_VAR(_g6,"_g6");
									HX_STACK_LINE(887)
									return (_g6 != __this->frameHeight);
								}
								return null();
							}
						};
						HX_STACK_LINE(887)
						if (((  ((!(((  ((!(((this->framePixels == null()))))) ? bool(_Function_5_1::Block(this)) : bool(true) ))))) ? bool(_Function_5_2::Block(this)) : bool(true) ))){
							HX_STACK_LINE(887)
							::flixel::util::FlxDestroyUtil_obj::dispose(this->framePixels);
							HX_STACK_LINE(887)
							int _g7 = ::Std_obj::_int(this->frame->sourceSize->x);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(887)
							int _g8 = ::Std_obj::_int(this->frame->sourceSize->y);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(887)
							::openfl::_v2::display::BitmapData _g9 = ::openfl::_v2::display::BitmapData_obj::__new(_g7,_g8,null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(887)
							this->framePixels = _g9;
						}
						HX_STACK_LINE(887)
						this->framePixels->copyPixels(frameBmd,this->_flashRect,this->_flashPointZero,null(),null(),null());
					}
					HX_STACK_LINE(887)
					if ((this->useColorTransform)){
						HX_STACK_LINE(887)
						this->framePixels->colorTransform(this->_flashRect,this->colorTransform);
					}
					HX_STACK_LINE(887)
					this->dirty = false;
				}
				HX_STACK_LINE(887)
				frameData = this->framePixels;
			}
			HX_STACK_LINE(888)
			int _g10 = ::Std_obj::_int(this->_flashPoint->x);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(888)
			int _g11 = ::Std_obj::_int(this->_flashPoint->y);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(888)
			int pixelColor = frameData->getPixel32(_g10,_g11);		HX_STACK_VAR(pixelColor,"pixelColor");
			HX_STACK_LINE(889)
			int pixelAlpha = (int((int(pixelColor) >> int((int)24))) & int((int)255));		HX_STACK_VAR(pixelAlpha,"pixelAlpha");
			HX_STACK_LINE(890)
			return ((pixelAlpha * this->alpha) >= Mask);
		}
		HX_STACK_LINE(881)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,pixelsOverlapPoint,return )

Void FlxSprite_obj::calcFrame( hx::Null< bool >  __o_RunOnCpp){
bool RunOnCpp = __o_RunOnCpp.Default(false);
	HX_STACK_FRAME("flixel.FlxSprite","calcFrame",0xc4d45b0f,"flixel.FlxSprite.calcFrame","flixel/FlxSprite.hx",900,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RunOnCpp,"RunOnCpp")
{
		HX_STACK_LINE(901)
		if (((this->frame == null()))){
			HX_STACK_LINE(903)
			::flixel::graphics::FlxGraphic _g = ::flixel::graphics::FlxGraphic_obj::fromClass(hx::ClassOf< ::flixel::_FlxSprite::GraphicDefault >(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(903)
			this->loadGraphic(_g,null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(907)
		if ((!(RunOnCpp))){
			HX_STACK_LINE(909)
			return null();
		}
		HX_STACK_LINE(913)
		{
			HX_STACK_LINE(913)
			if (((bool((this->frame != null())) && bool(this->dirty)))){
				HX_STACK_LINE(913)
				if (((bool((bool(!(this->flipX)) && bool(!(this->flipY)))) && bool((this->frame->type == (int)0))))){
					HX_STACK_LINE(913)
					::openfl::_v2::display::BitmapData _g1 = this->frame->paintOnBitmap(this->framePixels);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(913)
					this->framePixels = _g1;
				}
				else{
					HX_STACK_LINE(913)
					::openfl::_v2::display::BitmapData frameBmd = null();		HX_STACK_VAR(frameBmd,"frameBmd");
					HX_STACK_LINE(913)
					if (((bool(this->flipX) && bool(this->flipY)))){
						HX_STACK_LINE(913)
						::openfl::_v2::display::BitmapData _g2 = this->frame->getHVReversedBitmap();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(913)
						frameBmd = _g2;
					}
					else{
						HX_STACK_LINE(913)
						if ((this->flipX)){
							HX_STACK_LINE(913)
							::openfl::_v2::display::BitmapData _g3 = this->frame->getHReversedBitmap();		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(913)
							frameBmd = _g3;
						}
						else{
							HX_STACK_LINE(913)
							if ((this->flipY)){
								HX_STACK_LINE(913)
								::openfl::_v2::display::BitmapData _g4 = this->frame->getVReversedBitmap();		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(913)
								frameBmd = _g4;
							}
							else{
								HX_STACK_LINE(913)
								::openfl::_v2::display::BitmapData _g5 = this->frame->getBitmap();		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(913)
								frameBmd = _g5;
							}
						}
					}
					struct _Function_4_1{
						inline static bool Block( hx::ObjectPtr< ::flixel::FlxSprite_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxSprite.hx",913,0x0384bffa)
							{
								HX_STACK_LINE(913)
								int _g6 = __this->framePixels->get_width();		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(913)
								return (_g6 != __this->frameWidth);
							}
							return null();
						}
					};
					struct _Function_4_2{
						inline static bool Block( hx::ObjectPtr< ::flixel::FlxSprite_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxSprite.hx",913,0x0384bffa)
							{
								HX_STACK_LINE(913)
								int _g7 = __this->framePixels->get_height();		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(913)
								return (_g7 != __this->frameHeight);
							}
							return null();
						}
					};
					HX_STACK_LINE(913)
					if (((  ((!(((  ((!(((this->framePixels == null()))))) ? bool(_Function_4_1::Block(this)) : bool(true) ))))) ? bool(_Function_4_2::Block(this)) : bool(true) ))){
						HX_STACK_LINE(913)
						::flixel::util::FlxDestroyUtil_obj::dispose(this->framePixels);
						HX_STACK_LINE(913)
						int _g8 = ::Std_obj::_int(this->frame->sourceSize->x);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(913)
						int _g9 = ::Std_obj::_int(this->frame->sourceSize->y);		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(913)
						::openfl::_v2::display::BitmapData _g10 = ::openfl::_v2::display::BitmapData_obj::__new(_g8,_g9,null(),null(),null());		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(913)
						this->framePixels = _g10;
					}
					HX_STACK_LINE(913)
					this->framePixels->copyPixels(frameBmd,this->_flashRect,this->_flashPointZero,null(),null(),null());
				}
				HX_STACK_LINE(913)
				if ((this->useColorTransform)){
					HX_STACK_LINE(913)
					this->framePixels->colorTransform(this->_flashRect,this->colorTransform);
				}
				HX_STACK_LINE(913)
				this->dirty = false;
			}
			HX_STACK_LINE(913)
			this->framePixels;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,calcFrame,(void))

::openfl::_v2::display::BitmapData FlxSprite_obj::getFlxFrameBitmapData( ){
	HX_STACK_FRAME("flixel.FlxSprite","getFlxFrameBitmapData",0xc4eba061,"flixel.FlxSprite.getFlxFrameBitmapData","flixel/FlxSprite.hx",920,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(921)
	if (((bool((this->frame != null())) && bool(this->dirty)))){
		HX_STACK_LINE(923)
		if (((bool((bool(!(this->flipX)) && bool(!(this->flipY)))) && bool((this->frame->type == (int)0))))){
			HX_STACK_LINE(925)
			::openfl::_v2::display::BitmapData _g = this->frame->paintOnBitmap(this->framePixels);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(925)
			this->framePixels = _g;
		}
		else{
			HX_STACK_LINE(929)
			::openfl::_v2::display::BitmapData frameBmd = null();		HX_STACK_VAR(frameBmd,"frameBmd");
			HX_STACK_LINE(930)
			if (((bool(this->flipX) && bool(this->flipY)))){
				HX_STACK_LINE(932)
				::openfl::_v2::display::BitmapData _g1 = this->frame->getHVReversedBitmap();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(932)
				frameBmd = _g1;
			}
			else{
				HX_STACK_LINE(934)
				if ((this->flipX)){
					HX_STACK_LINE(936)
					::openfl::_v2::display::BitmapData _g2 = this->frame->getHReversedBitmap();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(936)
					frameBmd = _g2;
				}
				else{
					HX_STACK_LINE(938)
					if ((this->flipY)){
						HX_STACK_LINE(940)
						::openfl::_v2::display::BitmapData _g3 = this->frame->getVReversedBitmap();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(940)
						frameBmd = _g3;
					}
					else{
						HX_STACK_LINE(944)
						::openfl::_v2::display::BitmapData _g4 = this->frame->getBitmap();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(944)
						frameBmd = _g4;
					}
				}
			}
			struct _Function_3_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::FlxSprite_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxSprite.hx",946,0x0384bffa)
					{
						HX_STACK_LINE(946)
						int _g5 = __this->framePixels->get_width();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(946)
						return (_g5 != __this->frameWidth);
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static bool Block( hx::ObjectPtr< ::flixel::FlxSprite_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxSprite.hx",946,0x0384bffa)
					{
						HX_STACK_LINE(946)
						int _g6 = __this->framePixels->get_height();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(946)
						return (_g6 != __this->frameHeight);
					}
					return null();
				}
			};
			HX_STACK_LINE(946)
			if (((  ((!(((  ((!(((this->framePixels == null()))))) ? bool(_Function_3_1::Block(this)) : bool(true) ))))) ? bool(_Function_3_2::Block(this)) : bool(true) ))){
				HX_STACK_LINE(948)
				::flixel::util::FlxDestroyUtil_obj::dispose(this->framePixels);
				HX_STACK_LINE(949)
				int _g7 = ::Std_obj::_int(this->frame->sourceSize->x);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(949)
				int _g8 = ::Std_obj::_int(this->frame->sourceSize->y);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(949)
				::openfl::_v2::display::BitmapData _g9 = ::openfl::_v2::display::BitmapData_obj::__new(_g7,_g8,null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(949)
				this->framePixels = _g9;
			}
			HX_STACK_LINE(952)
			this->framePixels->copyPixels(frameBmd,this->_flashRect,this->_flashPointZero,null(),null(),null());
		}
		HX_STACK_LINE(955)
		if ((this->useColorTransform)){
			HX_STACK_LINE(957)
			this->framePixels->colorTransform(this->_flashRect,this->colorTransform);
		}
		HX_STACK_LINE(960)
		this->dirty = false;
	}
	HX_STACK_LINE(963)
	return this->framePixels;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,getFlxFrameBitmapData,return )

::flixel::math::FlxPoint FlxSprite_obj::getGraphicMidpoint( ::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.FlxSprite","getGraphicMidpoint",0xc420be03,"flixel.FlxSprite.getGraphicMidpoint","flixel/FlxSprite.hx",973,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(974)
	if (((point == null()))){
		HX_STACK_LINE(976)
		::flixel::math::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(976)
		{
			HX_STACK_LINE(976)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(976)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(976)
			::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(976)
			point1->_inPool = false;
			HX_STACK_LINE(976)
			_g = point1;
		}
		HX_STACK_LINE(976)
		point = _g;
	}
	HX_STACK_LINE(978)
	return point->set((this->x + (this->frameWidth * 0.5)),(this->y + (this->frameHeight * 0.5)));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,getGraphicMidpoint,return )

Void FlxSprite_obj::resetFrameBitmaps( ){
{
		HX_STACK_FRAME("flixel.FlxSprite","resetFrameBitmaps",0xfccf081d,"flixel.FlxSprite.resetFrameBitmaps","flixel/FlxSprite.hx",987,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(987)
		this->graphic->resetFrameBitmaps();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetFrameBitmaps,(void))

bool FlxSprite_obj::isOnScreen( ::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxSprite","isOnScreen",0xb5403c5e,"flixel.FlxSprite.isOnScreen","flixel/FlxSprite.hx",998,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(999)
	if (((Camera == null()))){
		HX_STACK_LINE(1001)
		Camera = ::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(1004)
	Float minX = ((this->x - this->offset->x) - (Camera->scroll->x * this->scrollFactor->x));		HX_STACK_VAR(minX,"minX");
	HX_STACK_LINE(1005)
	Float minY = ((this->y - this->offset->y) - (Camera->scroll->y * this->scrollFactor->y));		HX_STACK_VAR(minY,"minY");
	HX_STACK_LINE(1006)
	Float maxX = (int)0;		HX_STACK_VAR(maxX,"maxX");
	HX_STACK_LINE(1007)
	Float maxY = (int)0;		HX_STACK_VAR(maxY,"maxY");
	HX_STACK_LINE(1009)
	if (((bool((bool(((bool((this->angle == (int)0)) || bool((this->bakedRotationAngle > (int)0))))) && bool((this->scale->x == (int)1)))) && bool((this->scale->y == (int)1))))){
		HX_STACK_LINE(1011)
		maxX = (minX + this->frameWidth);
		HX_STACK_LINE(1012)
		maxY = (minY + this->frameHeight);
	}
	else{
		HX_STACK_LINE(1016)
		Float radiusX = this->_halfSize->x;		HX_STACK_VAR(radiusX,"radiusX");
		HX_STACK_LINE(1017)
		Float radiusY = this->_halfSize->y;		HX_STACK_VAR(radiusY,"radiusY");
		HX_STACK_LINE(1019)
		if (((this->origin->x == radiusX))){
			HX_STACK_LINE(1021)
			Float _g = ::Math_obj::abs((radiusX * this->scale->x));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1021)
			radiusX = _g;
		}
		else{
			HX_STACK_LINE(1025)
			Float sox = (this->scale->x * this->origin->x);		HX_STACK_VAR(sox,"sox");
			HX_STACK_LINE(1026)
			Float sfw = (this->scale->x * this->frameWidth);		HX_STACK_VAR(sfw,"sfw");
			HX_STACK_LINE(1027)
			Float x1 = ::Math_obj::abs(sox);		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(1028)
			Float x2 = ::Math_obj::abs((sfw - sox));		HX_STACK_VAR(x2,"x2");
			HX_STACK_LINE(1029)
			Float _g1 = ::Math_obj::max(x2,x1);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1029)
			radiusX = _g1;
		}
		HX_STACK_LINE(1032)
		if (((this->origin->y == radiusY))){
			HX_STACK_LINE(1034)
			Float _g2 = ::Math_obj::abs((radiusY * this->scale->y));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1034)
			radiusY = _g2;
		}
		else{
			HX_STACK_LINE(1038)
			Float soy = (this->scale->y * this->origin->y);		HX_STACK_VAR(soy,"soy");
			HX_STACK_LINE(1039)
			Float sfh = (this->scale->y * this->frameHeight);		HX_STACK_VAR(sfh,"sfh");
			HX_STACK_LINE(1040)
			Float y1 = ::Math_obj::abs(soy);		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(1041)
			Float y2 = ::Math_obj::abs((sfh - soy));		HX_STACK_VAR(y2,"y2");
			HX_STACK_LINE(1042)
			Float _g3 = ::Math_obj::max(y2,y1);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1042)
			radiusY = _g3;
		}
		HX_STACK_LINE(1045)
		Float radius = ::Math_obj::max(radiusX,radiusY);		HX_STACK_VAR(radius,"radius");
		HX_STACK_LINE(1046)
		hx::MultEq(radius,1.41421356237);
		HX_STACK_LINE(1048)
		hx::AddEq(minX,this->origin->x);
		HX_STACK_LINE(1049)
		maxX = (minX + radius);
		HX_STACK_LINE(1050)
		hx::SubEq(minX,radius);
		HX_STACK_LINE(1052)
		hx::AddEq(minY,this->origin->y);
		HX_STACK_LINE(1053)
		maxY = (minY + radius);
		HX_STACK_LINE(1054)
		hx::SubEq(minY,radius);
	}
	HX_STACK_LINE(1057)
	if (((bool((maxX < (int)0)) || bool((minX > Camera->width))))){
		HX_STACK_LINE(1058)
		return false;
	}
	HX_STACK_LINE(1060)
	if (((bool((maxY < (int)0)) || bool((minY > Camera->height))))){
		HX_STACK_LINE(1061)
		return false;
	}
	HX_STACK_LINE(1063)
	return true;
}


bool FlxSprite_obj::isSimpleRender( ::flixel::FlxCamera camera){
	HX_STACK_FRAME("flixel.FlxSprite","isSimpleRender",0x6aa0d51b,"flixel.FlxSprite.isSimpleRender","flixel/FlxSprite.hx",1075,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(camera,"camera")
	HX_STACK_LINE(1075)
	return this->isSimpleRenderTile();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,isSimpleRender,return )

bool FlxSprite_obj::isSimpleRenderBlit( ::flixel::FlxCamera camera){
	HX_STACK_FRAME("flixel.FlxSprite","isSimpleRenderBlit",0x4bf362f0,"flixel.FlxSprite.isSimpleRenderBlit","flixel/FlxSprite.hx",1086,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(camera,"camera")
	HX_STACK_LINE(1087)
	bool result = (bool((bool((bool(((bool((this->angle == (int)0)) || bool((this->bakedRotationAngle > (int)0))))) && bool((this->scale->x == (int)1)))) && bool((this->scale->y == (int)1)))) && bool((this->blend == null())));		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(1089)
	bool _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1089)
	if ((result)){
		HX_STACK_LINE(1089)
		if (((camera != null()))){
			HX_STACK_LINE(1089)
			_g = this->isPixelPerfectRender(camera);
		}
		else{
			HX_STACK_LINE(1089)
			_g = this->pixelPerfectRender;
		}
	}
	else{
		HX_STACK_LINE(1089)
		_g = false;
	}
	HX_STACK_LINE(1089)
	result = _g;
	HX_STACK_LINE(1090)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,isSimpleRenderBlit,return )

bool FlxSprite_obj::isSimpleRenderTile( ){
	HX_STACK_FRAME("flixel.FlxSprite","isSimpleRenderTile",0x57d6f5e9,"flixel.FlxSprite.isSimpleRenderTile","flixel/FlxSprite.hx",1099,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1099)
	return (bool((bool((this->angle == (int)0)) && bool((this->frame->angle == (int)0)))) || bool((this->bakedRotationAngle > (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,isSimpleRenderTile,return )

Void FlxSprite_obj::setFacingFlip( int Direction,bool FlipX,bool FlipY){
{
		HX_STACK_FRAME("flixel.FlxSprite","setFacingFlip",0x6816c060,"flixel.FlxSprite.setFacingFlip","flixel/FlxSprite.hx",1114,0x0384bffa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Direction,"Direction")
		HX_STACK_ARG(FlipX,"FlipX")
		HX_STACK_ARG(FlipY,"FlipY")
		struct _Function_1_1{
			inline static Dynamic Block( bool &FlipY,bool &FlipX){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxSprite.hx",1114,0x0384bffa)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("x") , FlipX,false);
					__result->Add(HX_CSTRING("y") , FlipY,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1114)
		this->_facingFlip->set(Direction,_Function_1_1::Block(FlipY,FlipX));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,setFacingFlip,(void))

::flixel::FlxSprite FlxSprite_obj::setFrames( ::flixel::graphics::frames::FlxFramesCollection Frames,hx::Null< bool >  __o_saveAnimations){
bool saveAnimations = __o_saveAnimations.Default(true);
	HX_STACK_FRAME("flixel.FlxSprite","setFrames",0xd774ec9f,"flixel.FlxSprite.setFrames","flixel/FlxSprite.hx",1125,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Frames,"Frames")
	HX_STACK_ARG(saveAnimations,"saveAnimations")
{
		HX_STACK_LINE(1126)
		if ((saveAnimations)){
			HX_STACK_LINE(1128)
			::flixel::animation::FlxAnimationController anim = this->animation;		HX_STACK_VAR(anim,"anim");
			HX_STACK_LINE(1129)
			this->animation = null();
			HX_STACK_LINE(1130)
			this->set_frames(Frames);
			HX_STACK_LINE(1131)
			this->set_frame(this->frames->frames->__get(anim->frameIndex).StaticCast< ::flixel::graphics::frames::FlxFrame >());
			HX_STACK_LINE(1132)
			this->animation = anim;
		}
		else{
			HX_STACK_LINE(1136)
			this->set_frames(Frames);
		}
		HX_STACK_LINE(1139)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSprite_obj,setFrames,return )

::openfl::_v2::display::BitmapData FlxSprite_obj::get_pixels( ){
	HX_STACK_FRAME("flixel.FlxSprite","get_pixels",0x90b8575f,"flixel.FlxSprite.get_pixels","flixel/FlxSprite.hx",1150,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1150)
	return this->graphic->bitmap;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,get_pixels,return )

::openfl::_v2::display::BitmapData FlxSprite_obj::set_pixels( ::openfl::_v2::display::BitmapData Pixels){
	HX_STACK_FRAME("flixel.FlxSprite","set_pixels",0x9435f5d3,"flixel.FlxSprite.set_pixels","flixel/FlxSprite.hx",1154,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Pixels,"Pixels")
	HX_STACK_LINE(1155)
	::String key = ::flixel::FlxG_obj::bitmap->findKeyForBitmap(Pixels);		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(1157)
	if (((key == null()))){
		HX_STACK_LINE(1159)
		::String _g = ::flixel::FlxG_obj::bitmap->getUniqueKey(null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1159)
		key = _g;
		HX_STACK_LINE(1160)
		::flixel::graphics::FlxGraphic _g1 = ::flixel::FlxG_obj::bitmap->add(Pixels,false,key);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1160)
		this->set_graphic(_g1);
	}
	else{
		HX_STACK_LINE(1164)
		::flixel::graphics::FlxGraphic _g2 = ::flixel::FlxG_obj::bitmap->get(key);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1164)
		this->set_graphic(_g2);
	}
	HX_STACK_LINE(1167)
	::flixel::graphics::frames::FlxImageFrame _g3 = this->graphic->get_imageFrame();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(1167)
	this->set_frames(_g3);
	HX_STACK_LINE(1171)
	this->graphic->resetFrameBitmaps();
	HX_STACK_LINE(1173)
	return Pixels;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_pixels,return )

::flixel::graphics::frames::FlxFrame FlxSprite_obj::set_frame( ::flixel::graphics::frames::FlxFrame Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_frame",0xf8c58847,"flixel.FlxSprite.set_frame","flixel/FlxSprite.hx",1177,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1178)
	this->frame = Value;
	HX_STACK_LINE(1179)
	if (((this->frame != null()))){
		HX_STACK_LINE(1181)
		{
			HX_STACK_LINE(1181)
			int _g = ::Std_obj::_int(this->frame->sourceSize->x);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1181)
			this->frameWidth = _g;
			HX_STACK_LINE(1181)
			int _g1 = ::Std_obj::_int(this->frame->sourceSize->y);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1181)
			this->frameHeight = _g1;
			HX_STACK_LINE(1181)
			this->_halfSize->set((0.5 * this->frameWidth),(0.5 * this->frameHeight));
			HX_STACK_LINE(1181)
			{
				HX_STACK_LINE(1181)
				this->_flashRect->x = (int)0;
				HX_STACK_LINE(1181)
				this->_flashRect->y = (int)0;
				HX_STACK_LINE(1181)
				this->_flashRect->width = this->frameWidth;
				HX_STACK_LINE(1181)
				this->_flashRect->height = this->frameHeight;
			}
		}
		HX_STACK_LINE(1182)
		this->dirty = true;
	}
	else{
		HX_STACK_LINE(1184)
		if (((bool((bool((this->frames != null())) && bool((this->frames->frames != null())))) && bool((this->numFrames > (int)0))))){
			HX_STACK_LINE(1186)
			this->frame = this->frames->frames->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxFrame >();
			HX_STACK_LINE(1187)
			this->dirty = true;
		}
	}
	HX_STACK_LINE(1190)
	return this->frame;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_frame,return )

int FlxSprite_obj::set_facing( int Direction){
	HX_STACK_FRAME("flixel.FlxSprite","set_facing",0xeb9145c0,"flixel.FlxSprite.set_facing","flixel/FlxSprite.hx",1194,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Direction,"Direction")
	HX_STACK_LINE(1195)
	Dynamic flip = this->_facingFlip->get(Direction);		HX_STACK_VAR(flip,"flip");
	HX_STACK_LINE(1196)
	if (((flip != null()))){
		HX_STACK_LINE(1198)
		this->set_flipX(flip->__Field(HX_CSTRING("x"),true));
		HX_STACK_LINE(1199)
		this->set_flipY(flip->__Field(HX_CSTRING("y"),true));
	}
	HX_STACK_LINE(1202)
	return this->facing = Direction;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_facing,return )

Float FlxSprite_obj::set_alpha( Float Alpha){
	HX_STACK_FRAME("flixel.FlxSprite","set_alpha",0x13d8b778,"flixel.FlxSprite.set_alpha","flixel/FlxSprite.hx",1206,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_LINE(1207)
	{
		HX_STACK_LINE(1207)
		Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(1207)
		if (((Alpha < (int)0))){
			HX_STACK_LINE(1207)
			lowerBound = (int)0;
		}
		else{
			HX_STACK_LINE(1207)
			lowerBound = Alpha;
		}
		HX_STACK_LINE(1207)
		if (((lowerBound > (int)1))){
			HX_STACK_LINE(1207)
			this->alpha = (int)1;
		}
		else{
			HX_STACK_LINE(1207)
			this->alpha = lowerBound;
		}
	}
	HX_STACK_LINE(1208)
	this->updateColorTransform();
	HX_STACK_LINE(1209)
	return this->alpha;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_alpha,return )

int FlxSprite_obj::set_color( int Color){
	HX_STACK_FRAME("flixel.FlxSprite","set_color",0x3c9e817d,"flixel.FlxSprite.set_color","flixel/FlxSprite.hx",1213,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(1214)
	if (((this->color == Color))){
		HX_STACK_LINE(1216)
		return Color;
	}
	HX_STACK_LINE(1218)
	this->color = Color;
	HX_STACK_LINE(1219)
	this->updateColorTransform();
	HX_STACK_LINE(1222)
	this->isColored = (((int(this->color) & int((int)16777215))) != (int)16777215);
	HX_STACK_LINE(1225)
	return this->color;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_color,return )

Float FlxSprite_obj::set_angle( Float Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_angle",0x152453ed,"flixel.FlxSprite.set_angle","flixel/FlxSprite.hx",1229,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1230)
	this->_angleChanged = (bool((this->angle != Value)) || bool(this->_angleChanged));
	HX_STACK_LINE(1231)
	return this->super::set_angle(Value);
}


::openfl::_v2::display::BlendMode FlxSprite_obj::set_blend( ::openfl::_v2::display::BlendMode Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_blend",0xa736f86b,"flixel.FlxSprite.set_blend","flixel/FlxSprite.hx",1235,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1237)
	if (((Value != null()))){
		HX_STACK_LINE(1239)
		switch( (int)(Value->__Index())){
			case (int)7: {
				HX_STACK_LINE(1242)
				this->_blendInt = (int)65536;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(1245)
				this->_blendInt = (int)131072;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(1247)
				this->_blendInt = (int)262144;
			}
			;break;
			default: {
				HX_STACK_LINE(1250)
				this->_blendInt = (int)0;
			}
		}
	}
	else{
		HX_STACK_LINE(1255)
		this->_blendInt = (int)0;
	}
	HX_STACK_LINE(1259)
	return this->blend = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_blend,return )

::flixel::graphics::FlxGraphic FlxSprite_obj::set_graphic( ::flixel::graphics::FlxGraphic Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_graphic",0x07012542,"flixel.FlxSprite.set_graphic","flixel/FlxSprite.hx",1267,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1268)
	::flixel::graphics::FlxGraphic oldGraphic = this->graphic;		HX_STACK_VAR(oldGraphic,"oldGraphic");
	HX_STACK_LINE(1270)
	if (((bool((this->graphic != Value)) && bool((Value != null()))))){
		HX_STACK_LINE(1272)
		::flixel::graphics::FlxGraphic _g = Value;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1272)
		int _g1 = _g->get_useCount();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1272)
		_g->set_useCount((_g1 + (int)1));
		HX_STACK_LINE(1272)
		_g1;
	}
	HX_STACK_LINE(1275)
	if (((bool((oldGraphic != null())) && bool((oldGraphic != Value))))){
		HX_STACK_LINE(1277)
		::flixel::graphics::FlxGraphic _g = oldGraphic;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1277)
		int _g1 = _g->get_useCount();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1277)
		_g->set_useCount((_g1 - (int)1));
		HX_STACK_LINE(1277)
		_g1;
	}
	HX_STACK_LINE(1280)
	return this->graphic = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_graphic,return )

::flixel::math::FlxRect FlxSprite_obj::get_clipRect( ){
	HX_STACK_FRAME("flixel.FlxSprite","get_clipRect",0x4b08e8c6,"flixel.FlxSprite.get_clipRect","flixel/FlxSprite.hx",1285,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1285)
	return this->_clipRect;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,get_clipRect,return )

::flixel::math::FlxRect FlxSprite_obj::set_clipRect( ::flixel::math::FlxRect rect){
	HX_STACK_FRAME("flixel.FlxSprite","set_clipRect",0x60020c3a,"flixel.FlxSprite.set_clipRect","flixel/FlxSprite.hx",1289,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(1290)
	if (((this->frames != null()))){
		HX_STACK_LINE(1292)
		::flixel::animation::FlxAnimationController anim = this->animation;		HX_STACK_VAR(anim,"anim");
		HX_STACK_LINE(1293)
		this->animation = null();
		HX_STACK_LINE(1295)
		if (((rect != null()))){
			HX_STACK_LINE(1297)
			::flixel::graphics::frames::FlxClippedFrames _g = ::flixel::graphics::frames::FlxClippedFrames_obj::clip(this->frames,rect);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1297)
			this->set_frames(_g);
			HX_STACK_LINE(1298)
			::flixel::math::FlxRect _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1298)
			{
				HX_STACK_LINE(1298)
				::flixel::math::FlxRect Rect = ::flixel::math::FlxRect_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(Rect,"Rect");
				HX_STACK_LINE(1298)
				Rect->x = rect->x;
				HX_STACK_LINE(1298)
				Rect->y = rect->y;
				HX_STACK_LINE(1298)
				Rect->width = rect->width;
				HX_STACK_LINE(1298)
				Rect->height = rect->height;
				HX_STACK_LINE(1298)
				_g1 = Rect;
			}
			HX_STACK_LINE(1298)
			this->_clipRect = _g1;
		}
		else{
			HX_STACK_LINE(1302)
			if (((this->frames->type == ::flixel::graphics::frames::FlxFrameCollectionType_obj::CLIPPED))){
				HX_STACK_LINE(1304)
				this->set_frames((hx::TCast< flixel::graphics::frames::FlxClippedFrames >::cast(this->frames))->original);
			}
			HX_STACK_LINE(1307)
			this->_clipRect = null();
		}
		HX_STACK_LINE(1310)
		this->set_frame(this->frames->frames->__get(anim->frameIndex).StaticCast< ::flixel::graphics::frames::FlxFrame >());
		HX_STACK_LINE(1311)
		this->animation = anim;
	}
	HX_STACK_LINE(1314)
	return rect;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_clipRect,return )

::flixel::graphics::frames::FlxFramesCollection FlxSprite_obj::set_frames( ::flixel::graphics::frames::FlxFramesCollection Frames){
	HX_STACK_FRAME("flixel.FlxSprite","set_frames",0xb411b64c,"flixel.FlxSprite.set_frames","flixel/FlxSprite.hx",1325,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Frames,"Frames")
	HX_STACK_LINE(1326)
	if (((this->animation != null()))){
		HX_STACK_LINE(1328)
		this->animation->destroyAnimations();
	}
	HX_STACK_LINE(1331)
	if (((Frames != null()))){
		HX_STACK_LINE(1333)
		this->set_graphic(Frames->parent);
		HX_STACK_LINE(1334)
		this->frames = Frames;
		HX_STACK_LINE(1335)
		this->set_frame(this->frames->frames->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxFrame >());
		HX_STACK_LINE(1336)
		this->numFrames = this->frames->frames->length;
		HX_STACK_LINE(1337)
		this->resetHelpers();
		HX_STACK_LINE(1338)
		this->bakedRotationAngle = (int)0;
		HX_STACK_LINE(1339)
		this->animation->set_frameIndex((int)0);
		HX_STACK_LINE(1340)
		this->graphicLoaded();
	}
	else{
		HX_STACK_LINE(1344)
		this->frames = null();
		HX_STACK_LINE(1345)
		this->set_frame(null());
		HX_STACK_LINE(1346)
		this->set_graphic(null());
	}
	HX_STACK_LINE(1349)
	this->_clipRect = null();
	HX_STACK_LINE(1350)
	return Frames;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_frames,return )

bool FlxSprite_obj::set_flipX( bool Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_flipX",0xf4d45525,"flixel.FlxSprite.set_flipX","flixel/FlxSprite.hx",1354,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1356)
	if ((Value)){
		HX_STACK_LINE(1356)
		this->_facingHorizontalMult = (int)-1;
	}
	else{
		HX_STACK_LINE(1356)
		this->_facingHorizontalMult = (int)1;
	}
	HX_STACK_LINE(1358)
	if (((this->flipX != Value))){
		HX_STACK_LINE(1360)
		this->dirty = true;
	}
	HX_STACK_LINE(1362)
	return this->flipX = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_flipX,return )

bool FlxSprite_obj::set_flipY( bool Value){
	HX_STACK_FRAME("flixel.FlxSprite","set_flipY",0xf4d45526,"flixel.FlxSprite.set_flipY","flixel/FlxSprite.hx",1366,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1368)
	if ((Value)){
		HX_STACK_LINE(1368)
		this->_facingVerticalMult = (int)-1;
	}
	else{
		HX_STACK_LINE(1368)
		this->_facingVerticalMult = (int)1;
	}
	HX_STACK_LINE(1370)
	if (((this->flipY != Value))){
		HX_STACK_LINE(1372)
		this->dirty = true;
	}
	HX_STACK_LINE(1374)
	return this->flipY = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_flipY,return )

bool FlxSprite_obj::set_antialiasing( bool value){
	HX_STACK_FRAME("flixel.FlxSprite","set_antialiasing",0xf8f29e1a,"flixel.FlxSprite.set_antialiasing","flixel/FlxSprite.hx",1379,0x0384bffa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1379)
	return this->antialiasing = value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_antialiasing,return )


FlxSprite_obj::FlxSprite_obj()
{
}

void FlxSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSprite);
	HX_MARK_MEMBER_NAME(animation,"animation");
	HX_MARK_MEMBER_NAME(framePixels,"framePixels");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(frameWidth,"frameWidth");
	HX_MARK_MEMBER_NAME(frameHeight,"frameHeight");
	HX_MARK_MEMBER_NAME(numFrames,"numFrames");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(graphic,"graphic");
	HX_MARK_MEMBER_NAME(bakedRotationAngle,"bakedRotationAngle");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(facing,"facing");
	HX_MARK_MEMBER_NAME(flipX,"flipX");
	HX_MARK_MEMBER_NAME(flipY,"flipY");
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(colorTransform,"colorTransform");
	HX_MARK_MEMBER_NAME(useColorTransform,"useColorTransform");
	HX_MARK_MEMBER_NAME(clipRect,"clipRect");
	HX_MARK_MEMBER_NAME(_clipRect,"_clipRect");
	HX_MARK_MEMBER_NAME(_facingHorizontalMult,"_facingHorizontalMult");
	HX_MARK_MEMBER_NAME(_facingVerticalMult,"_facingVerticalMult");
	HX_MARK_MEMBER_NAME(_blendInt,"_blendInt");
	HX_MARK_MEMBER_NAME(isColored,"isColored");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashRect2,"_flashRect2");
	HX_MARK_MEMBER_NAME(_flashPointZero,"_flashPointZero");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_halfSize,"_halfSize");
	HX_MARK_MEMBER_NAME(_sinAngle,"_sinAngle");
	HX_MARK_MEMBER_NAME(_cosAngle,"_cosAngle");
	HX_MARK_MEMBER_NAME(_angleChanged,"_angleChanged");
	HX_MARK_MEMBER_NAME(_facingFlip,"_facingFlip");
	::flixel::FlxObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animation,"animation");
	HX_VISIT_MEMBER_NAME(framePixels,"framePixels");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(frameWidth,"frameWidth");
	HX_VISIT_MEMBER_NAME(frameHeight,"frameHeight");
	HX_VISIT_MEMBER_NAME(numFrames,"numFrames");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(graphic,"graphic");
	HX_VISIT_MEMBER_NAME(bakedRotationAngle,"bakedRotationAngle");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(facing,"facing");
	HX_VISIT_MEMBER_NAME(flipX,"flipX");
	HX_VISIT_MEMBER_NAME(flipY,"flipY");
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(colorTransform,"colorTransform");
	HX_VISIT_MEMBER_NAME(useColorTransform,"useColorTransform");
	HX_VISIT_MEMBER_NAME(clipRect,"clipRect");
	HX_VISIT_MEMBER_NAME(_clipRect,"_clipRect");
	HX_VISIT_MEMBER_NAME(_facingHorizontalMult,"_facingHorizontalMult");
	HX_VISIT_MEMBER_NAME(_facingVerticalMult,"_facingVerticalMult");
	HX_VISIT_MEMBER_NAME(_blendInt,"_blendInt");
	HX_VISIT_MEMBER_NAME(isColored,"isColored");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashRect2,"_flashRect2");
	HX_VISIT_MEMBER_NAME(_flashPointZero,"_flashPointZero");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_halfSize,"_halfSize");
	HX_VISIT_MEMBER_NAME(_sinAngle,"_sinAngle");
	HX_VISIT_MEMBER_NAME(_cosAngle,"_cosAngle");
	HX_VISIT_MEMBER_NAME(_angleChanged,"_angleChanged");
	HX_VISIT_MEMBER_NAME(_facingFlip,"_facingFlip");
	::flixel::FlxObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxSprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"flipX") ) { return flipX; }
		if (HX_FIELD_EQ(inName,"flipY") ) { return flipY; }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"blend") ) { return blend; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"stamp") ) { return stamp_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { return get_pixels(); }
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		if (HX_FIELD_EQ(inName,"facing") ) { return facing; }
		if (HX_FIELD_EQ(inName,"origin") ) { return origin; }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { return graphic; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipRect") ) { return clipRect; }
		if (HX_FIELD_EQ(inName,"initVars") ) { return initVars_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { return animation; }
		if (HX_FIELD_EQ(inName,"numFrames") ) { return numFrames; }
		if (HX_FIELD_EQ(inName,"_clipRect") ) { return _clipRect; }
		if (HX_FIELD_EQ(inName,"_blendInt") ) { return _blendInt; }
		if (HX_FIELD_EQ(inName,"isColored") ) { return isColored; }
		if (HX_FIELD_EQ(inName,"_halfSize") ) { return _halfSize; }
		if (HX_FIELD_EQ(inName,"_sinAngle") ) { return _sinAngle; }
		if (HX_FIELD_EQ(inName,"_cosAngle") ) { return _cosAngle; }
		if (HX_FIELD_EQ(inName,"resetSize") ) { return resetSize_dyn(); }
		if (HX_FIELD_EQ(inName,"drawFrame") ) { return drawFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return calcFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"setFrames") ) { return setFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frame") ) { return set_frame_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_blend") ) { return set_blend_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flipX") ) { return set_flipX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flipY") ) { return set_flipY_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameWidth") ) { return frameWidth; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"isOnScreen") ) { return isOnScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pixels") ) { return get_pixels_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pixels") ) { return set_pixels_dyn(); }
		if (HX_FIELD_EQ(inName,"set_facing") ) { return set_facing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frames") ) { return set_frames_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framePixels") ) { return framePixels; }
		if (HX_FIELD_EQ(inName,"frameHeight") ) { return frameHeight; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		if (HX_FIELD_EQ(inName,"_flashRect2") ) { return _flashRect2; }
		if (HX_FIELD_EQ(inName,"_facingFlip") ) { return _facingFlip; }
		if (HX_FIELD_EQ(inName,"loadGraphic") ) { return loadGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"makeGraphic") ) { return makeGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"setDrawData") ) { return setDrawData_dyn(); }
		if (HX_FIELD_EQ(inName,"set_graphic") ) { return set_graphic_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
		if (HX_FIELD_EQ(inName,"updateHitbox") ) { return updateHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"resetHelpers") ) { return resetHelpers_dyn(); }
		if (HX_FIELD_EQ(inName,"centerOrigin") ) { return centerOrigin_dyn(); }
		if (HX_FIELD_EQ(inName,"replaceColor") ) { return replaceColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_clipRect") ) { return get_clipRect_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clipRect") ) { return set_clipRect_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_angleChanged") ) { return _angleChanged; }
		if (HX_FIELD_EQ(inName,"graphicLoaded") ) { return graphicLoaded_dyn(); }
		if (HX_FIELD_EQ(inName,"centerOffsets") ) { return centerOffsets_dyn(); }
		if (HX_FIELD_EQ(inName,"setFacingFlip") ) { return setFacingFlip_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform; }
		if (HX_FIELD_EQ(inName,"resetFrameSize") ) { return resetFrameSize_dyn(); }
		if (HX_FIELD_EQ(inName,"setGraphicSize") ) { return setGraphicSize_dyn(); }
		if (HX_FIELD_EQ(inName,"isSimpleRender") ) { return isSimpleRender_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_flashPointZero") ) { return _flashPointZero; }
		if (HX_FIELD_EQ(inName,"updateAnimation") ) { return updateAnimation_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"loadRotatedFrame") ) { return loadRotatedFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"set_antialiasing") ) { return set_antialiasing_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"useColorTransform") ) { return useColorTransform; }
		if (HX_FIELD_EQ(inName,"setColorTransform") ) { return setColorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"resetFrameBitmaps") ) { return resetFrameBitmaps_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bakedRotationAngle") ) { return bakedRotationAngle; }
		if (HX_FIELD_EQ(inName,"loadRotatedGraphic") ) { return loadRotatedGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"resetSizeFromFrame") ) { return resetSizeFromFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"pixelsOverlapPoint") ) { return pixelsOverlapPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getGraphicMidpoint") ) { return getGraphicMidpoint_dyn(); }
		if (HX_FIELD_EQ(inName,"isSimpleRenderBlit") ) { return isSimpleRenderBlit_dyn(); }
		if (HX_FIELD_EQ(inName,"isSimpleRenderTile") ) { return isSimpleRenderTile_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_facingVerticalMult") ) { return _facingVerticalMult; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return updateColorTransform_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_facingHorizontalMult") ) { return _facingHorizontalMult; }
		if (HX_FIELD_EQ(inName,"loadGraphicFromSprite") ) { return loadGraphicFromSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"getFlxFrameBitmapData") ) { return getFlxFrameBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frame") ) { if (inCallProp) return set_frame(inValue);frame=inValue.Cast< ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp) return set_alpha(inValue);alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipX") ) { if (inCallProp) return set_flipX(inValue);flipX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipY") ) { if (inCallProp) return set_flipY(inValue);flipY=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blend") ) { if (inCallProp) return set_blend(inValue);blend=inValue.Cast< ::openfl::_v2::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp) return set_color(inValue);color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { return set_pixels(inValue); }
		if (HX_FIELD_EQ(inName,"frames") ) { if (inCallProp) return set_frames(inValue);frames=inValue.Cast< ::flixel::graphics::frames::FlxFramesCollection >(); return inValue; }
		if (HX_FIELD_EQ(inName,"facing") ) { if (inCallProp) return set_facing(inValue);facing=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { if (inCallProp) return set_graphic(inValue);graphic=inValue.Cast< ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::flixel::math::FlxMatrix >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipRect") ) { if (inCallProp) return set_clipRect(inValue);clipRect=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { animation=inValue.Cast< ::flixel::animation::FlxAnimationController >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numFrames") ) { numFrames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_clipRect") ) { _clipRect=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blendInt") ) { _blendInt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isColored") ) { isColored=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_halfSize") ) { _halfSize=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sinAngle") ) { _sinAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cosAngle") ) { _cosAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameWidth") ) { frameWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framePixels") ) { framePixels=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameHeight") ) { frameHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect2") ) { _flashRect2=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_facingFlip") ) { _facingFlip=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { if (inCallProp) return set_antialiasing(inValue);antialiasing=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_angleChanged") ) { _angleChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { colorTransform=inValue.Cast< ::openfl::_v2::geom::ColorTransform >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_flashPointZero") ) { _flashPointZero=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"useColorTransform") ) { useColorTransform=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bakedRotationAngle") ) { bakedRotationAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_facingVerticalMult") ) { _facingVerticalMult=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_facingHorizontalMult") ) { _facingHorizontalMult=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("animation"));
	outFields->push(HX_CSTRING("framePixels"));
	outFields->push(HX_CSTRING("antialiasing"));
	outFields->push(HX_CSTRING("dirty"));
	outFields->push(HX_CSTRING("pixels"));
	outFields->push(HX_CSTRING("frame"));
	outFields->push(HX_CSTRING("frameWidth"));
	outFields->push(HX_CSTRING("frameHeight"));
	outFields->push(HX_CSTRING("numFrames"));
	outFields->push(HX_CSTRING("frames"));
	outFields->push(HX_CSTRING("graphic"));
	outFields->push(HX_CSTRING("bakedRotationAngle"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("facing"));
	outFields->push(HX_CSTRING("flipX"));
	outFields->push(HX_CSTRING("flipY"));
	outFields->push(HX_CSTRING("origin"));
	outFields->push(HX_CSTRING("offset"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("blend"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("colorTransform"));
	outFields->push(HX_CSTRING("useColorTransform"));
	outFields->push(HX_CSTRING("clipRect"));
	outFields->push(HX_CSTRING("_clipRect"));
	outFields->push(HX_CSTRING("_facingHorizontalMult"));
	outFields->push(HX_CSTRING("_facingVerticalMult"));
	outFields->push(HX_CSTRING("_blendInt"));
	outFields->push(HX_CSTRING("isColored"));
	outFields->push(HX_CSTRING("_flashPoint"));
	outFields->push(HX_CSTRING("_flashRect"));
	outFields->push(HX_CSTRING("_flashRect2"));
	outFields->push(HX_CSTRING("_flashPointZero"));
	outFields->push(HX_CSTRING("_matrix"));
	outFields->push(HX_CSTRING("_halfSize"));
	outFields->push(HX_CSTRING("_sinAngle"));
	outFields->push(HX_CSTRING("_cosAngle"));
	outFields->push(HX_CSTRING("_angleChanged"));
	outFields->push(HX_CSTRING("_facingFlip"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::animation::FlxAnimationController*/ ,(int)offsetof(FlxSprite_obj,animation),HX_CSTRING("animation")},
	{hx::fsObject /*::openfl::_v2::display::BitmapData*/ ,(int)offsetof(FlxSprite_obj,framePixels),HX_CSTRING("framePixels")},
	{hx::fsBool,(int)offsetof(FlxSprite_obj,antialiasing),HX_CSTRING("antialiasing")},
	{hx::fsBool,(int)offsetof(FlxSprite_obj,dirty),HX_CSTRING("dirty")},
	{hx::fsObject /*::flixel::graphics::frames::FlxFrame*/ ,(int)offsetof(FlxSprite_obj,frame),HX_CSTRING("frame")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,frameWidth),HX_CSTRING("frameWidth")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,frameHeight),HX_CSTRING("frameHeight")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,numFrames),HX_CSTRING("numFrames")},
	{hx::fsObject /*::flixel::graphics::frames::FlxFramesCollection*/ ,(int)offsetof(FlxSprite_obj,frames),HX_CSTRING("frames")},
	{hx::fsObject /*::flixel::graphics::FlxGraphic*/ ,(int)offsetof(FlxSprite_obj,graphic),HX_CSTRING("graphic")},
	{hx::fsFloat,(int)offsetof(FlxSprite_obj,bakedRotationAngle),HX_CSTRING("bakedRotationAngle")},
	{hx::fsFloat,(int)offsetof(FlxSprite_obj,alpha),HX_CSTRING("alpha")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,facing),HX_CSTRING("facing")},
	{hx::fsBool,(int)offsetof(FlxSprite_obj,flipX),HX_CSTRING("flipX")},
	{hx::fsBool,(int)offsetof(FlxSprite_obj,flipY),HX_CSTRING("flipY")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxSprite_obj,origin),HX_CSTRING("origin")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxSprite_obj,offset),HX_CSTRING("offset")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxSprite_obj,scale),HX_CSTRING("scale")},
	{hx::fsObject /*::openfl::_v2::display::BlendMode*/ ,(int)offsetof(FlxSprite_obj,blend),HX_CSTRING("blend")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,color),HX_CSTRING("color")},
	{hx::fsObject /*::openfl::_v2::geom::ColorTransform*/ ,(int)offsetof(FlxSprite_obj,colorTransform),HX_CSTRING("colorTransform")},
	{hx::fsBool,(int)offsetof(FlxSprite_obj,useColorTransform),HX_CSTRING("useColorTransform")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxSprite_obj,clipRect),HX_CSTRING("clipRect")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxSprite_obj,_clipRect),HX_CSTRING("_clipRect")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,_facingHorizontalMult),HX_CSTRING("_facingHorizontalMult")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,_facingVerticalMult),HX_CSTRING("_facingVerticalMult")},
	{hx::fsInt,(int)offsetof(FlxSprite_obj,_blendInt),HX_CSTRING("_blendInt")},
	{hx::fsBool,(int)offsetof(FlxSprite_obj,isColored),HX_CSTRING("isColored")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(FlxSprite_obj,_flashPoint),HX_CSTRING("_flashPoint")},
	{hx::fsObject /*::openfl::_v2::geom::Rectangle*/ ,(int)offsetof(FlxSprite_obj,_flashRect),HX_CSTRING("_flashRect")},
	{hx::fsObject /*::openfl::_v2::geom::Rectangle*/ ,(int)offsetof(FlxSprite_obj,_flashRect2),HX_CSTRING("_flashRect2")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(FlxSprite_obj,_flashPointZero),HX_CSTRING("_flashPointZero")},
	{hx::fsObject /*::flixel::math::FlxMatrix*/ ,(int)offsetof(FlxSprite_obj,_matrix),HX_CSTRING("_matrix")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxSprite_obj,_halfSize),HX_CSTRING("_halfSize")},
	{hx::fsFloat,(int)offsetof(FlxSprite_obj,_sinAngle),HX_CSTRING("_sinAngle")},
	{hx::fsFloat,(int)offsetof(FlxSprite_obj,_cosAngle),HX_CSTRING("_cosAngle")},
	{hx::fsBool,(int)offsetof(FlxSprite_obj,_angleChanged),HX_CSTRING("_angleChanged")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(FlxSprite_obj,_facingFlip),HX_CSTRING("_facingFlip")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("animation"),
	HX_CSTRING("framePixels"),
	HX_CSTRING("antialiasing"),
	HX_CSTRING("dirty"),
	HX_CSTRING("frame"),
	HX_CSTRING("frameWidth"),
	HX_CSTRING("frameHeight"),
	HX_CSTRING("numFrames"),
	HX_CSTRING("frames"),
	HX_CSTRING("graphic"),
	HX_CSTRING("bakedRotationAngle"),
	HX_CSTRING("alpha"),
	HX_CSTRING("facing"),
	HX_CSTRING("flipX"),
	HX_CSTRING("flipY"),
	HX_CSTRING("origin"),
	HX_CSTRING("offset"),
	HX_CSTRING("scale"),
	HX_CSTRING("blend"),
	HX_CSTRING("color"),
	HX_CSTRING("colorTransform"),
	HX_CSTRING("useColorTransform"),
	HX_CSTRING("clipRect"),
	HX_CSTRING("_clipRect"),
	HX_CSTRING("_facingHorizontalMult"),
	HX_CSTRING("_facingVerticalMult"),
	HX_CSTRING("_blendInt"),
	HX_CSTRING("isColored"),
	HX_CSTRING("_flashPoint"),
	HX_CSTRING("_flashRect"),
	HX_CSTRING("_flashRect2"),
	HX_CSTRING("_flashPointZero"),
	HX_CSTRING("_matrix"),
	HX_CSTRING("_halfSize"),
	HX_CSTRING("_sinAngle"),
	HX_CSTRING("_cosAngle"),
	HX_CSTRING("_angleChanged"),
	HX_CSTRING("_facingFlip"),
	HX_CSTRING("initVars"),
	HX_CSTRING("destroy"),
	HX_CSTRING("clone"),
	HX_CSTRING("loadGraphicFromSprite"),
	HX_CSTRING("loadGraphic"),
	HX_CSTRING("loadRotatedGraphic"),
	HX_CSTRING("loadRotatedFrame"),
	HX_CSTRING("makeGraphic"),
	HX_CSTRING("graphicLoaded"),
	HX_CSTRING("resetSize"),
	HX_CSTRING("resetFrameSize"),
	HX_CSTRING("resetSizeFromFrame"),
	HX_CSTRING("setGraphicSize"),
	HX_CSTRING("updateHitbox"),
	HX_CSTRING("resetHelpers"),
	HX_CSTRING("update"),
	HX_CSTRING("updateAnimation"),
	HX_CSTRING("draw"),
	HX_CSTRING("setDrawData"),
	HX_CSTRING("stamp"),
	HX_CSTRING("drawFrame"),
	HX_CSTRING("centerOffsets"),
	HX_CSTRING("centerOrigin"),
	HX_CSTRING("replaceColor"),
	HX_CSTRING("setColorTransform"),
	HX_CSTRING("updateColorTransform"),
	HX_CSTRING("pixelsOverlapPoint"),
	HX_CSTRING("calcFrame"),
	HX_CSTRING("getFlxFrameBitmapData"),
	HX_CSTRING("getGraphicMidpoint"),
	HX_CSTRING("resetFrameBitmaps"),
	HX_CSTRING("isOnScreen"),
	HX_CSTRING("isSimpleRender"),
	HX_CSTRING("isSimpleRenderBlit"),
	HX_CSTRING("isSimpleRenderTile"),
	HX_CSTRING("setFacingFlip"),
	HX_CSTRING("setFrames"),
	HX_CSTRING("get_pixels"),
	HX_CSTRING("set_pixels"),
	HX_CSTRING("set_frame"),
	HX_CSTRING("set_facing"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("set_color"),
	HX_CSTRING("set_angle"),
	HX_CSTRING("set_blend"),
	HX_CSTRING("set_graphic"),
	HX_CSTRING("get_clipRect"),
	HX_CSTRING("set_clipRect"),
	HX_CSTRING("set_frames"),
	HX_CSTRING("set_flipX"),
	HX_CSTRING("set_flipY"),
	HX_CSTRING("set_antialiasing"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSprite_obj::__mClass,"__mClass");
};

#endif

Class FlxSprite_obj::__mClass;

void FlxSprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.FlxSprite"), hx::TCanCast< FlxSprite_obj> ,sStaticFields,sMemberFields,
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

void FlxSprite_obj::__boot()
{
}

} // end namespace flixel
