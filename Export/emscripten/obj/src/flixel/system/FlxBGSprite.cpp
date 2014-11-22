#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
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
#ifndef INCLUDED_flixel_system_FlxBGSprite
#include <flixel/system/FlxBGSprite.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Matrix
#include <openfl/_v2/geom/Matrix.h>
#endif
namespace flixel{
namespace system{

Void FlxBGSprite_obj::__construct()
{
HX_STACK_FRAME("flixel.system.FlxBGSprite","new",0x62e2bd41,"flixel.system.FlxBGSprite.new","flixel/system/FlxBGSprite.hx",14,0xa9844f6f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(16)
	::String _g = ::flixel::FlxG_obj::bitmap->getUniqueKey(HX_CSTRING("bg_graphic_"));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(16)
	this->makeGraphic((int)1,(int)1,(int)0,true,_g);
	HX_STACK_LINE(17)
	this->scrollFactor->set(null(),null());
}
;
	return null();
}

//FlxBGSprite_obj::~FlxBGSprite_obj() { }

Dynamic FlxBGSprite_obj::__CreateEmpty() { return  new FlxBGSprite_obj; }
hx::ObjectPtr< FlxBGSprite_obj > FlxBGSprite_obj::__new()
{  hx::ObjectPtr< FlxBGSprite_obj > result = new FlxBGSprite_obj();
	result->__construct();
	return result;}

Dynamic FlxBGSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBGSprite_obj > result = new FlxBGSprite_obj();
	result->__construct();
	return result;}

Void FlxBGSprite_obj::draw( ){
{
		HX_STACK_FRAME("flixel.system.FlxBGSprite","draw",0x1cf08403,"flixel.system.FlxBGSprite.draw","flixel/system/FlxBGSprite.hx",24,0xa9844f6f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		::flixel::graphics::tile::FlxDrawStackItem drawItem;		HX_STACK_VAR(drawItem,"drawItem");
		HX_STACK_LINE(27)
		{
			HX_STACK_LINE(27)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(27)
			Array< ::Dynamic > _g1 = this->get_cameras();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(27)
			while((true)){
				HX_STACK_LINE(27)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(27)
					break;
				}
				HX_STACK_LINE(27)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(27)
				++(_g);
				HX_STACK_LINE(29)
				if (((bool(!(camera->visible)) || bool(!(camera->exists))))){
					HX_STACK_LINE(31)
					continue;
				}
				HX_STACK_LINE(34)
				::flixel::graphics::tile::FlxDrawStackItem _g2 = camera->getDrawStackItem(this->graphic,this->isColored,this->_blendInt,null());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(34)
				drawItem = _g2;
				HX_STACK_LINE(36)
				Float scaledWidth = (camera->width * camera->totalScaleX);		HX_STACK_VAR(scaledWidth,"scaledWidth");
				HX_STACK_LINE(37)
				Float scaleHeight = (camera->height * camera->totalScaleY);		HX_STACK_VAR(scaleHeight,"scaleHeight");
				HX_STACK_LINE(39)
				this->_point->set_x((0.5 * scaledWidth));
				HX_STACK_LINE(40)
				this->_point->set_y((0.5 * scaleHeight));
				HX_STACK_LINE(42)
				this->_matrix->setTo(scaledWidth,(int)0,(int)0,scaleHeight,(int)0,(int)0);
				HX_STACK_LINE(44)
				{
					HX_STACK_LINE(44)
					::flixel::math::FlxPoint coordinate = this->_point;		HX_STACK_VAR(coordinate,"coordinate");
					HX_STACK_LINE(44)
					::openfl::_v2::geom::Matrix matrix = this->_matrix;		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(44)
					int color = this->color;		HX_STACK_VAR(color,"color");
					HX_STACK_LINE(44)
					int _g11 = (drawItem->position)++;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(44)
					drawItem->drawData[_g11] = coordinate->x;
					HX_STACK_LINE(44)
					int _g21 = (drawItem->position)++;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(44)
					drawItem->drawData[_g21] = coordinate->y;
					HX_STACK_LINE(44)
					int _g3 = (drawItem->position)++;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(44)
					drawItem->drawData[_g3] = this->frame->tileID;
					HX_STACK_LINE(44)
					int _g4 = (drawItem->position)++;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(44)
					drawItem->drawData[_g4] = matrix->a;
					HX_STACK_LINE(44)
					int _g5 = (drawItem->position)++;		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(44)
					drawItem->drawData[_g5] = matrix->b;
					HX_STACK_LINE(44)
					int _g6 = (drawItem->position)++;		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(44)
					drawItem->drawData[_g6] = matrix->c;
					HX_STACK_LINE(44)
					int _g7 = (drawItem->position)++;		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(44)
					drawItem->drawData[_g7] = matrix->d;
					HX_STACK_LINE(44)
					if ((this->isColored)){
						HX_STACK_LINE(44)
						int _g8 = (drawItem->position)++;		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(44)
						drawItem->drawData[_g8] = (Float(((int((int(color) >> int((int)16))) & int((int)255)))) / Float((int)255));
						HX_STACK_LINE(44)
						int _g9 = (drawItem->position)++;		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(44)
						drawItem->drawData[_g9] = (Float(((int((int(color) >> int((int)8))) & int((int)255)))) / Float((int)255));
						HX_STACK_LINE(44)
						int _g10 = (drawItem->position)++;		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(44)
						drawItem->drawData[_g10] = (Float(((int(color) & int((int)255)))) / Float((int)255));
					}
					HX_STACK_LINE(44)
					int _g111 = (drawItem->position)++;		HX_STACK_VAR(_g111,"_g111");
					HX_STACK_LINE(44)
					drawItem->drawData[_g111] = (this->alpha * camera->alpha);
					HX_STACK_LINE(44)
					if ((coordinate->_weak)){
						HX_STACK_LINE(44)
						coordinate->put();
					}
				}
			}
		}
	}
return null();
}



FlxBGSprite_obj::FlxBGSprite_obj()
{
}

Dynamic FlxBGSprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBGSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBGSprite_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("draw"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBGSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBGSprite_obj::__mClass,"__mClass");
};

#endif

Class FlxBGSprite_obj::__mClass;

void FlxBGSprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.FlxBGSprite"), hx::TCanCast< FlxBGSprite_obj> ,sStaticFields,sMemberFields,
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

void FlxBGSprite_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
