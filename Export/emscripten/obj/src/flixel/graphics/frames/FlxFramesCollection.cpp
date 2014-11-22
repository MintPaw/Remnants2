#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
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
#ifndef INCLUDED_flixel_graphics_frames_FlxRotatedFrame
#include <flixel/graphics/frames/FlxRotatedFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxTilesheet
#include <flixel/graphics/tile/FlxTilesheet.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
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
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Tilesheet
#include <openfl/_v2/display/Tilesheet.h>
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

Void FlxFramesCollection_obj::__construct(::flixel::graphics::FlxGraphic parent,::flixel::graphics::frames::FlxFrameCollectionType type)
{
HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","new",0x41834b71,"flixel.graphics.frames.FlxFramesCollection.new","flixel/graphics/frames/FlxFramesCollection.hx",48,0xe09dd200)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
HX_STACK_ARG(type,"type")
{
	HX_STACK_LINE(49)
	this->parent = parent;
	HX_STACK_LINE(50)
	this->type = type;
	HX_STACK_LINE(51)
	this->frames = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(52)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(52)
	this->framesHash = _g;
	HX_STACK_LINE(54)
	if (((parent != null()))){
		HX_STACK_LINE(56)
		parent->addFrameCollection(hx::ObjectPtr<OBJ_>(this));
	}
}
;
	return null();
}

//FlxFramesCollection_obj::~FlxFramesCollection_obj() { }

Dynamic FlxFramesCollection_obj::__CreateEmpty() { return  new FlxFramesCollection_obj; }
hx::ObjectPtr< FlxFramesCollection_obj > FlxFramesCollection_obj::__new(::flixel::graphics::FlxGraphic parent,::flixel::graphics::frames::FlxFrameCollectionType type)
{  hx::ObjectPtr< FlxFramesCollection_obj > result = new FlxFramesCollection_obj();
	result->__construct(parent,type);
	return result;}

Dynamic FlxFramesCollection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxFramesCollection_obj > result = new FlxFramesCollection_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *FlxFramesCollection_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::getByName( ::String name){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","getByName",0xec0f52c9,"flixel.graphics.frames.FlxFramesCollection.getByName","flixel/graphics/frames/FlxFramesCollection.hx",68,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(68)
	return this->framesHash->get(name);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getByName,return )

::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::getByIndex( int index){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","getByIndex",0xc8e928d4,"flixel.graphics.frames.FlxFramesCollection.getByIndex","flixel/graphics/frames/FlxFramesCollection.hx",79,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(79)
	return this->frames->__get(index).StaticCast< ::flixel::graphics::frames::FlxFrame >();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getByIndex,return )

int FlxFramesCollection_obj::getIndexByName( ::String name){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","getIndexByName",0x9190d40d,"flixel.graphics.frames.FlxFramesCollection.getIndexByName","flixel/graphics/frames/FlxFramesCollection.hx",89,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(90)
	int numFrames = this->frames->length;		HX_STACK_VAR(numFrames,"numFrames");
	HX_STACK_LINE(91)
	::flixel::graphics::frames::FlxFrame frame;		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(93)
		while((true)){
			HX_STACK_LINE(93)
			if ((!(((_g < numFrames))))){
				HX_STACK_LINE(93)
				break;
			}
			HX_STACK_LINE(93)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(95)
			if (((this->frames->__get(i).StaticCast< ::flixel::graphics::frames::FlxFrame >()->name == name))){
				HX_STACK_LINE(97)
				return i;
			}
		}
	}
	HX_STACK_LINE(101)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getIndexByName,return )

int FlxFramesCollection_obj::getFrameIndex( ::flixel::graphics::frames::FlxFrame frame){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","getFrameIndex",0x9be9862c,"flixel.graphics.frames.FlxFramesCollection.getFrameIndex","flixel/graphics/frames/FlxFramesCollection.hx",112,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frame,"frame")
	HX_STACK_LINE(112)
	return this->frames->indexOf(frame,null());
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getFrameIndex,return )

Void FlxFramesCollection_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","destroy",0x3c5f048b,"flixel.graphics.frames.FlxFramesCollection.destroy","flixel/graphics/frames/FlxFramesCollection.hx",116,0xe09dd200)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		Array< ::Dynamic > _g = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->frames);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(117)
		this->frames = _g;
		HX_STACK_LINE(118)
		this->framesHash = null();
		HX_STACK_LINE(119)
		this->parent = null();
		HX_STACK_LINE(120)
		this->type = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFramesCollection_obj,destroy,(void))

::flixel::graphics::frames::FlxEmptyFrame FlxFramesCollection_obj::addEmptyFrame( ::flixel::math::FlxRect size){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","addEmptyFrame",0x8f5bf232,"flixel.graphics.frames.FlxFramesCollection.addEmptyFrame","flixel/graphics/frames/FlxFramesCollection.hx",131,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(132)
	::flixel::graphics::frames::FlxEmptyFrame frame = ::flixel::graphics::frames::FlxEmptyFrame_obj::__new(this->parent);		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(133)
	::flixel::math::FlxRect _g = ::flixel::math::FlxRect_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(133)
	frame->frame = _g;
	HX_STACK_LINE(134)
	frame->sourceSize->set(size->width,size->height);
	HX_STACK_LINE(135)
	this->frames->push(frame);
	HX_STACK_LINE(136)
	return frame;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,addEmptyFrame,return )

::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::addSpriteSheetFrame( ::flixel::math::FlxRect region){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","addSpriteSheetFrame",0x98036ac5,"flixel.graphics.frames.FlxFramesCollection.addSpriteSheetFrame","flixel/graphics/frames/FlxFramesCollection.hx",146,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_ARG(region,"region")
	HX_STACK_LINE(147)
	::flixel::graphics::frames::FlxFrame frame = ::flixel::graphics::frames::FlxFrame_obj::__new(this->parent);		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(149)
	::openfl::_v2::geom::Rectangle flashRect;		HX_STACK_VAR(flashRect,"flashRect");
	HX_STACK_LINE(149)
	{
		HX_STACK_LINE(149)
		::openfl::_v2::geom::Rectangle FlashRect = ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(FlashRect,"FlashRect");
		HX_STACK_LINE(149)
		if (((FlashRect == null()))){
			HX_STACK_LINE(149)
			::openfl::_v2::geom::Rectangle _g = ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(149)
			FlashRect = _g;
		}
		HX_STACK_LINE(149)
		FlashRect->x = region->x;
		HX_STACK_LINE(149)
		FlashRect->y = region->y;
		HX_STACK_LINE(149)
		FlashRect->width = region->width;
		HX_STACK_LINE(149)
		FlashRect->height = region->height;
		HX_STACK_LINE(149)
		flashRect = FlashRect;
	}
	HX_STACK_LINE(150)
	::openfl::_v2::geom::Point _g1 = ::openfl::_v2::geom::Point_obj::__new((0.5 * region->width),(0.5 * region->height));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(150)
	int _g2 = this->parent->get_tilesheet()->addTileRect(flashRect,_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(150)
	frame->tileID = _g2;
	HX_STACK_LINE(152)
	frame->frame = region;
	HX_STACK_LINE(153)
	frame->sourceSize->set(region->width,region->height);
	HX_STACK_LINE(154)
	frame->offset->set((int)0,(int)0);
	HX_STACK_LINE(155)
	frame->center->set((0.5 * region->width),(0.5 * region->height));
	HX_STACK_LINE(156)
	this->frames->push(frame);
	HX_STACK_LINE(157)
	return frame;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,addSpriteSheetFrame,return )

::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::addAtlasFrame( ::flixel::math::FlxRect frame,::flixel::math::FlxPoint sourceSize,::flixel::math::FlxPoint offset,::String name,hx::Null< int >  __o_angle){
int angle = __o_angle.Default(0);
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","addAtlasFrame",0xf1c62eb4,"flixel.graphics.frames.FlxFramesCollection.addAtlasFrame","flixel/graphics/frames/FlxFramesCollection.hx",170,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frame,"frame")
	HX_STACK_ARG(sourceSize,"sourceSize")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(angle,"angle")
{
		HX_STACK_LINE(171)
		if (((  (((name != null()))) ? bool(this->framesHash->exists(name)) : bool(false) ))){
			HX_STACK_LINE(173)
			return this->framesHash->get(name);
		}
		HX_STACK_LINE(176)
		::flixel::graphics::frames::FlxFrame texFrame = null();		HX_STACK_VAR(texFrame,"texFrame");
		HX_STACK_LINE(177)
		if (((angle != (int)0))){
			HX_STACK_LINE(179)
			::flixel::graphics::frames::FlxRotatedFrame _g = ::flixel::graphics::frames::FlxRotatedFrame_obj::__new(this->parent,angle);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(179)
			texFrame = _g;
		}
		else{
			HX_STACK_LINE(183)
			::flixel::graphics::frames::FlxFrame _g1 = ::flixel::graphics::frames::FlxFrame_obj::__new(this->parent);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(183)
			texFrame = _g1;
		}
		HX_STACK_LINE(186)
		texFrame->name = name;
		HX_STACK_LINE(187)
		texFrame->sourceSize->set(sourceSize->x,sourceSize->y);
		HX_STACK_LINE(188)
		texFrame->offset->set(offset->x,offset->y);
		HX_STACK_LINE(189)
		texFrame->frame = frame;
		HX_STACK_LINE(191)
		sourceSize->put();
		HX_STACK_LINE(192)
		offset->put();
		HX_STACK_LINE(194)
		if (((angle != (int)0))){
			HX_STACK_LINE(196)
			texFrame->center->set(((frame->height * 0.5) + texFrame->offset->x),((frame->width * 0.5) + texFrame->offset->y));
		}
		else{
			HX_STACK_LINE(200)
			texFrame->center->set(((frame->width * 0.5) + texFrame->offset->x),((frame->height * 0.5) + texFrame->offset->y));
		}
		HX_STACK_LINE(204)
		::openfl::_v2::geom::Rectangle flashRect;		HX_STACK_VAR(flashRect,"flashRect");
		HX_STACK_LINE(204)
		{
			HX_STACK_LINE(204)
			::openfl::_v2::geom::Rectangle FlashRect = ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(FlashRect,"FlashRect");
			HX_STACK_LINE(204)
			if (((FlashRect == null()))){
				HX_STACK_LINE(204)
				::openfl::_v2::geom::Rectangle _g2 = ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(204)
				FlashRect = _g2;
			}
			HX_STACK_LINE(204)
			FlashRect->x = frame->x;
			HX_STACK_LINE(204)
			FlashRect->y = frame->y;
			HX_STACK_LINE(204)
			FlashRect->width = frame->width;
			HX_STACK_LINE(204)
			FlashRect->height = frame->height;
			HX_STACK_LINE(204)
			flashRect = FlashRect;
		}
		HX_STACK_LINE(205)
		::openfl::_v2::geom::Point _g3 = ::openfl::_v2::geom::Point_obj::__new((0.5 * frame->width),(0.5 * frame->height));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(205)
		int _g4 = this->parent->get_tilesheet()->addTileRect(flashRect,_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(205)
		texFrame->tileID = _g4;
		HX_STACK_LINE(208)
		this->frames->push(texFrame);
		HX_STACK_LINE(210)
		if (((name != null()))){
			HX_STACK_LINE(212)
			this->framesHash->set(name,texFrame);
		}
		HX_STACK_LINE(215)
		return texFrame;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxFramesCollection_obj,addAtlasFrame,return )

Void FlxFramesCollection_obj::destroyBitmaps( ){
{
		HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","destroyBitmaps",0x3c807c59,"flixel.graphics.frames.FlxFramesCollection.destroyBitmaps","flixel/graphics/frames/FlxFramesCollection.hx",220,0xe09dd200)
		HX_STACK_THIS(this)
		HX_STACK_LINE(220)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(220)
		Array< ::Dynamic > _g1 = this->frames;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(220)
		while((true)){
			HX_STACK_LINE(220)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(220)
				break;
			}
			HX_STACK_LINE(220)
			::flixel::graphics::frames::FlxFrame frame = _g1->__get(_g).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(frame,"frame");
			HX_STACK_LINE(220)
			++(_g);
			HX_STACK_LINE(222)
			{
				HX_STACK_LINE(222)
				::openfl::_v2::display::BitmapData _g2 = ::flixel::util::FlxDestroyUtil_obj::dispose(frame->_bitmapData);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(222)
				frame->_bitmapData = _g2;
				HX_STACK_LINE(222)
				::openfl::_v2::display::BitmapData _g11 = ::flixel::util::FlxDestroyUtil_obj::dispose(frame->_hReversedBitmapData);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(222)
				frame->_hReversedBitmapData = _g11;
				HX_STACK_LINE(222)
				::openfl::_v2::display::BitmapData _g21 = ::flixel::util::FlxDestroyUtil_obj::dispose(frame->_vReversedBitmapData);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(222)
				frame->_vReversedBitmapData = _g21;
				HX_STACK_LINE(222)
				::openfl::_v2::display::BitmapData _g3 = ::flixel::util::FlxDestroyUtil_obj::dispose(frame->_hvReversedBitmapData);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(222)
				frame->_hvReversedBitmapData = _g3;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFramesCollection_obj,destroyBitmaps,(void))

::String FlxFramesCollection_obj::toString( ){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","toString",0xfe5297fb,"flixel.graphics.frames.FlxFramesCollection.toString","flixel/graphics/frames/FlxFramesCollection.hx",227,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_LINE(229)
	::flixel::util::LabelValuePair _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(229)
	{
		HX_STACK_LINE(229)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(229)
		_this->label = HX_CSTRING("frames");
		HX_STACK_LINE(229)
		_this->value = this->frames;
		HX_STACK_LINE(229)
		_g = _this;
	}
	HX_STACK_LINE(230)
	::flixel::util::LabelValuePair _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(230)
	{
		HX_STACK_LINE(230)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(230)
		_this->label = HX_CSTRING("type");
		HX_STACK_LINE(230)
		_this->value = this->type;
		HX_STACK_LINE(230)
		_g1 = _this;
	}
	HX_STACK_LINE(228)
	Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(228)
	return ::flixel::util::FlxStringUtil_obj::getDebugString(_g2);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFramesCollection_obj,toString,return )

int FlxFramesCollection_obj::get_numFrames( ){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","get_numFrames",0xbd2728b4,"flixel.graphics.frames.FlxFramesCollection.get_numFrames","flixel/graphics/frames/FlxFramesCollection.hx",235,0xe09dd200)
	HX_STACK_THIS(this)
	HX_STACK_LINE(235)
	return this->frames->length;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFramesCollection_obj,get_numFrames,return )


FlxFramesCollection_obj::FlxFramesCollection_obj()
{
}

void FlxFramesCollection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxFramesCollection);
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(framesHash,"framesHash");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void FlxFramesCollection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(framesHash,"framesHash");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic FlxFramesCollection_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"numFrames") ) { return get_numFrames(); }
		if (HX_FIELD_EQ(inName,"getByName") ) { return getByName_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"framesHash") ) { return framesHash; }
		if (HX_FIELD_EQ(inName,"getByIndex") ) { return getByIndex_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getFrameIndex") ) { return getFrameIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"addEmptyFrame") ) { return addEmptyFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"addAtlasFrame") ) { return addAtlasFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numFrames") ) { return get_numFrames_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getIndexByName") ) { return getIndexByName_dyn(); }
		if (HX_FIELD_EQ(inName,"destroyBitmaps") ) { return destroyBitmaps_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addSpriteSheetFrame") ) { return addSpriteSheetFrame_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxFramesCollection_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::flixel::graphics::frames::FlxFrameCollectionType >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::flixel::graphics::FlxGraphic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"framesHash") ) { framesHash=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxFramesCollection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("frames"));
	outFields->push(HX_CSTRING("numFrames"));
	outFields->push(HX_CSTRING("framesHash"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("type"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxFramesCollection_obj,frames),HX_CSTRING("frames")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxFramesCollection_obj,framesHash),HX_CSTRING("framesHash")},
	{hx::fsObject /*::flixel::graphics::FlxGraphic*/ ,(int)offsetof(FlxFramesCollection_obj,parent),HX_CSTRING("parent")},
	{hx::fsObject /*::flixel::graphics::frames::FlxFrameCollectionType*/ ,(int)offsetof(FlxFramesCollection_obj,type),HX_CSTRING("type")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("frames"),
	HX_CSTRING("framesHash"),
	HX_CSTRING("parent"),
	HX_CSTRING("type"),
	HX_CSTRING("getByName"),
	HX_CSTRING("getByIndex"),
	HX_CSTRING("getIndexByName"),
	HX_CSTRING("getFrameIndex"),
	HX_CSTRING("destroy"),
	HX_CSTRING("addEmptyFrame"),
	HX_CSTRING("addSpriteSheetFrame"),
	HX_CSTRING("addAtlasFrame"),
	HX_CSTRING("destroyBitmaps"),
	HX_CSTRING("toString"),
	HX_CSTRING("get_numFrames"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxFramesCollection_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxFramesCollection_obj::__mClass,"__mClass");
};

#endif

Class FlxFramesCollection_obj::__mClass;

void FlxFramesCollection_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.graphics.frames.FlxFramesCollection"), hx::TCanCast< FlxFramesCollection_obj> ,sStaticFields,sMemberFields,
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

void FlxFramesCollection_obj::__boot()
{
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
