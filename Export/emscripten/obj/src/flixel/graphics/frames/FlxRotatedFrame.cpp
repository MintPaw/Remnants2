#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxRotatedFrame
#include <flixel/graphics/frames/FlxRotatedFrame.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
namespace graphics{
namespace frames{

Void FlxRotatedFrame_obj::__construct(::flixel::graphics::FlxGraphic parent,int angle)
{
HX_STACK_FRAME("flixel.graphics.frames.FlxRotatedFrame","new",0xa1afbe11,"flixel.graphics.frames.FlxRotatedFrame.new","flixel/graphics/frames/FlxRotatedFrame.hx",20,0x2ecc4ee0)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
HX_STACK_ARG(angle,"angle")
{
	HX_STACK_LINE(21)
	super::__construct(parent);
	HX_STACK_LINE(22)
	this->type = (int)1;
	HX_STACK_LINE(23)
	this->angle = angle;
}
;
	return null();
}

//FlxRotatedFrame_obj::~FlxRotatedFrame_obj() { }

Dynamic FlxRotatedFrame_obj::__CreateEmpty() { return  new FlxRotatedFrame_obj; }
hx::ObjectPtr< FlxRotatedFrame_obj > FlxRotatedFrame_obj::__new(::flixel::graphics::FlxGraphic parent,int angle)
{  hx::ObjectPtr< FlxRotatedFrame_obj > result = new FlxRotatedFrame_obj();
	result->__construct(parent,angle);
	return result;}

Dynamic FlxRotatedFrame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxRotatedFrame_obj > result = new FlxRotatedFrame_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::flixel::math::FlxMatrix FlxRotatedFrame_obj::prepareFrameMatrix( ::flixel::math::FlxMatrix mat){
	HX_STACK_FRAME("flixel.graphics.frames.FlxRotatedFrame","prepareFrameMatrix",0xcdf29976,"flixel.graphics.frames.FlxRotatedFrame.prepareFrameMatrix","flixel/graphics/frames/FlxRotatedFrame.hx",33,0x2ecc4ee0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mat,"mat")
	HX_STACK_LINE(34)
	if (((this->angle == (int)90))){
		HX_STACK_LINE(36)
		mat->setTo(-(mat->b),mat->a,-(mat->d),mat->c,-(mat->ty),mat->tx);
		HX_STACK_LINE(36)
		mat;
	}
	else{
		HX_STACK_LINE(38)
		if (((this->angle == (int)-90))){
			HX_STACK_LINE(40)
			mat->setTo(mat->b,-(mat->a),mat->d,-(mat->c),mat->ty,-(mat->tx));
			HX_STACK_LINE(40)
			mat;
		}
	}
	HX_STACK_LINE(43)
	return mat;
}


::openfl::_v2::display::BitmapData FlxRotatedFrame_obj::paintOnBitmap( ::openfl::_v2::display::BitmapData bmd){
	HX_STACK_FRAME("flixel.graphics.frames.FlxRotatedFrame","paintOnBitmap",0x2cf59d1d,"flixel.graphics.frames.FlxRotatedFrame.paintOnBitmap","flixel/graphics/frames/FlxRotatedFrame.hx",47,0x2ecc4ee0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bmd,"bmd")
	HX_STACK_LINE(48)
	::openfl::_v2::display::BitmapData result = null();		HX_STACK_VAR(result,"result");
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::flixel::graphics::frames::FlxRotatedFrame_obj > __this,::openfl::_v2::display::BitmapData &bmd){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxRotatedFrame.hx",50,0x2ecc4ee0)
			{
				HX_STACK_LINE(50)
				int _g = bmd->get_width();		HX_STACK_VAR(_g,"_g");
				struct _Function_2_1{
					inline static bool Block( hx::ObjectPtr< ::flixel::graphics::frames::FlxRotatedFrame_obj > __this,::openfl::_v2::display::BitmapData &bmd){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxRotatedFrame.hx",50,0x2ecc4ee0)
						{
							HX_STACK_LINE(50)
							int _g1 = bmd->get_height();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(50)
							return (_g1 == __this->sourceSize->y);
						}
						return null();
					}
				};
				HX_STACK_LINE(50)
				return (  (((_g == __this->sourceSize->x))) ? bool(_Function_2_1::Block(__this,bmd)) : bool(false) );
			}
			return null();
		}
	};
	HX_STACK_LINE(50)
	if (((  (((bmd != null()))) ? bool(_Function_1_1::Block(this,bmd)) : bool(false) ))){
		HX_STACK_LINE(52)
		result = bmd;
	}
	else{
		HX_STACK_LINE(54)
		if (((bmd != null()))){
			HX_STACK_LINE(56)
			bmd->dispose();
		}
	}
	HX_STACK_LINE(59)
	if (((result == null()))){
		HX_STACK_LINE(61)
		int _g2 = ::Std_obj::_int(this->sourceSize->x);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(61)
		int _g3 = ::Std_obj::_int(this->sourceSize->y);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(61)
		::openfl::_v2::display::BitmapData _g4 = ::openfl::_v2::display::BitmapData_obj::__new(_g2,_g3,true,(int)0,null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(61)
		result = _g4;
	}
	HX_STACK_LINE(64)
	int _g5 = ::Std_obj::_int(this->frame->width);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(64)
	int _g6 = ::Std_obj::_int(this->frame->height);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(64)
	::openfl::_v2::display::BitmapData temp = ::openfl::_v2::display::BitmapData_obj::__new(_g5,_g6,true,(int)0,null());		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(65)
	::flixel::math::FlxPoint_obj::point->setTo((int)0,(int)0);
	HX_STACK_LINE(66)
	::openfl::_v2::geom::Rectangle _g8;		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(66)
	{
		HX_STACK_LINE(66)
		::flixel::math::FlxRect _this = this->frame;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(66)
		::openfl::_v2::geom::Rectangle FlashRect = ::flixel::math::FlxRect_obj::rect;		HX_STACK_VAR(FlashRect,"FlashRect");
		HX_STACK_LINE(66)
		if (((FlashRect == null()))){
			HX_STACK_LINE(66)
			::openfl::_v2::geom::Rectangle _g7 = ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(66)
			FlashRect = _g7;
		}
		HX_STACK_LINE(66)
		FlashRect->x = _this->x;
		HX_STACK_LINE(66)
		FlashRect->y = _this->y;
		HX_STACK_LINE(66)
		FlashRect->width = _this->width;
		HX_STACK_LINE(66)
		FlashRect->height = _this->height;
		HX_STACK_LINE(66)
		_g8 = FlashRect;
	}
	HX_STACK_LINE(66)
	temp->copyPixels(this->parent->bitmap,_g8,::flixel::math::FlxPoint_obj::point,null(),null(),null());
	HX_STACK_LINE(68)
	::openfl::_v2::geom::Matrix matrix = ::flixel::math::FlxMatrix_obj::matrix;		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(69)
	matrix->identity();
	HX_STACK_LINE(70)
	matrix->translate((-0.5 * this->frame->width),(-0.5 * this->frame->height));
	HX_STACK_LINE(71)
	matrix->rotate((this->angle * ((Float(::Math_obj::PI) / Float((int)180)))));
	HX_STACK_LINE(72)
	matrix->translate((this->offset->x + (0.5 * this->frame->height)),(this->offset->y + (0.5 * this->frame->width)));
	HX_STACK_LINE(74)
	result->draw(temp,matrix,null(),null(),null(),null());
	HX_STACK_LINE(75)
	temp->dispose();
	HX_STACK_LINE(76)
	return result;
}



FlxRotatedFrame_obj::FlxRotatedFrame_obj()
{
}

Dynamic FlxRotatedFrame_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"paintOnBitmap") ) { return paintOnBitmap_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"prepareFrameMatrix") ) { return prepareFrameMatrix_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxRotatedFrame_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxRotatedFrame_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("prepareFrameMatrix"),
	HX_CSTRING("paintOnBitmap"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxRotatedFrame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxRotatedFrame_obj::__mClass,"__mClass");
};

#endif

Class FlxRotatedFrame_obj::__mClass;

void FlxRotatedFrame_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.graphics.frames.FlxRotatedFrame"), hx::TCanCast< FlxRotatedFrame_obj> ,sStaticFields,sMemberFields,
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

void FlxRotatedFrame_obj::__boot()
{
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
