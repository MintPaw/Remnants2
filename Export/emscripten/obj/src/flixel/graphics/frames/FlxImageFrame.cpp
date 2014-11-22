#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
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
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
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
namespace flixel{
namespace graphics{
namespace frames{

Void FlxImageFrame_obj::__construct(::flixel::graphics::FlxGraphic parent)
{
HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","new",0xda56055f,"flixel.graphics.frames.FlxImageFrame.new","flixel/graphics/frames/FlxImageFrame.hx",27,0x94146112)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(27)
	super::__construct(parent,::flixel::graphics::frames::FlxFrameCollectionType_obj::IMAGE);
}
;
	return null();
}

//FlxImageFrame_obj::~FlxImageFrame_obj() { }

Dynamic FlxImageFrame_obj::__CreateEmpty() { return  new FlxImageFrame_obj; }
hx::ObjectPtr< FlxImageFrame_obj > FlxImageFrame_obj::__new(::flixel::graphics::FlxGraphic parent)
{  hx::ObjectPtr< FlxImageFrame_obj > result = new FlxImageFrame_obj();
	result->__construct(parent);
	return result;}

Dynamic FlxImageFrame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxImageFrame_obj > result = new FlxImageFrame_obj();
	result->__construct(inArgs[0]);
	return result;}

bool FlxImageFrame_obj::equals( ::flixel::math::FlxRect rect){
	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","equals",0x9ad6a2a0,"flixel.graphics.frames.FlxImageFrame.equals","flixel/graphics/frames/FlxImageFrame.hx",203,0x94146112)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(203)
	::flixel::math::FlxRect rect1 = this->frame->frame;		HX_STACK_VAR(rect1,"rect1");
	struct _Function_1_1{
		inline static bool Block( ::flixel::math::FlxRect &rect1,::flixel::math::FlxRect &rect){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxImageFrame.hx",203,0x94146112)
			{
				HX_STACK_LINE(203)
				Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
				HX_STACK_LINE(203)
				Float _g = ::Math_obj::abs((rect->x - rect1->x));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(203)
				return (_g <= aDiff);
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static bool Block( ::flixel::math::FlxRect &rect1,::flixel::math::FlxRect &rect){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxImageFrame.hx",203,0x94146112)
			{
				HX_STACK_LINE(203)
				Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
				HX_STACK_LINE(203)
				Float _g1 = ::Math_obj::abs((rect->y - rect1->y));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(203)
				return (_g1 <= aDiff);
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static bool Block( ::flixel::math::FlxRect &rect1,::flixel::math::FlxRect &rect){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxImageFrame.hx",203,0x94146112)
			{
				HX_STACK_LINE(203)
				Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
				HX_STACK_LINE(203)
				Float _g2 = ::Math_obj::abs((rect->width - rect1->width));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(203)
				return (_g2 <= aDiff);
			}
			return null();
		}
	};
	HX_STACK_LINE(203)
	if (((  (((  ((_Function_1_1::Block(rect1,rect))) ? bool(_Function_1_2::Block(rect1,rect)) : bool(false) ))) ? bool(_Function_1_3::Block(rect1,rect)) : bool(false) ))){
		HX_STACK_LINE(203)
		Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
		HX_STACK_LINE(203)
		Float _g3 = ::Math_obj::abs((rect->height - rect1->height));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(203)
		return (_g3 <= aDiff);
	}
	else{
		HX_STACK_LINE(203)
		return false;
	}
	HX_STACK_LINE(203)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxImageFrame_obj,equals,return )

Void FlxImageFrame_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","destroy",0xd0e04d79,"flixel.graphics.frames.FlxImageFrame.destroy","flixel/graphics/frames/FlxImageFrame.hx",207,0x94146112)
		HX_STACK_THIS(this)
		HX_STACK_LINE(208)
		this->super::destroy();
		HX_STACK_LINE(209)
		::flixel::graphics::frames::FlxFrame _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->frame);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(209)
		this->frame = _g;
	}
return null();
}


::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromEmptyFrame( ::flixel::graphics::FlxGraphic graphic,::flixel::math::FlxRect frameRect){
	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","fromEmptyFrame",0x20331dcb,"flixel.graphics.frames.FlxImageFrame.fromEmptyFrame","flixel/graphics/frames/FlxImageFrame.hx",38,0x94146112)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_ARG(frameRect,"frameRect")
	HX_STACK_LINE(39)
	if (((bool((graphic == null())) || bool((frameRect == null()))))){
		HX_STACK_LINE(39)
		return null();
	}
	HX_STACK_LINE(42)
	::flixel::graphics::frames::FlxImageFrame imageFrame = ::flixel::graphics::frames::FlxImageFrame_obj::findEmptyFrame(graphic,frameRect);		HX_STACK_VAR(imageFrame,"imageFrame");
	HX_STACK_LINE(43)
	if (((imageFrame != null()))){
		HX_STACK_LINE(45)
		return imageFrame;
	}
	HX_STACK_LINE(49)
	::flixel::graphics::frames::FlxImageFrame _g = ::flixel::graphics::frames::FlxImageFrame_obj::__new(graphic);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(49)
	imageFrame = _g;
	HX_STACK_LINE(50)
	::flixel::graphics::frames::FlxEmptyFrame _g1 = imageFrame->addEmptyFrame(frameRect);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(50)
	imageFrame->frame = _g1;
	HX_STACK_LINE(51)
	return imageFrame;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,fromEmptyFrame,return )

::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromFrame( ::flixel::graphics::frames::FlxFrame source){
	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","fromFrame",0xca8ee0a2,"flixel.graphics.frames.FlxImageFrame.fromFrame","flixel/graphics/frames/FlxImageFrame.hx",61,0x94146112)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(62)
	::flixel::graphics::FlxGraphic graphic = source->parent;		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(63)
	::flixel::math::FlxRect rect = source->frame;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(65)
	::flixel::graphics::frames::FlxImageFrame imageFrame = ::flixel::graphics::frames::FlxImageFrame_obj::findFrame(graphic,rect);		HX_STACK_VAR(imageFrame,"imageFrame");
	HX_STACK_LINE(66)
	if (((imageFrame != null()))){
		HX_STACK_LINE(68)
		return imageFrame;
	}
	HX_STACK_LINE(71)
	::flixel::graphics::frames::FlxImageFrame _g = ::flixel::graphics::frames::FlxImageFrame_obj::__new(graphic);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(71)
	imageFrame = _g;
	HX_STACK_LINE(72)
	::flixel::math::FlxRect _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(72)
	{
		HX_STACK_LINE(72)
		::flixel::math::FlxRect Rect = ::flixel::math::FlxRect_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(Rect,"Rect");
		HX_STACK_LINE(72)
		Rect->x = rect->x;
		HX_STACK_LINE(72)
		Rect->y = rect->y;
		HX_STACK_LINE(72)
		Rect->width = rect->width;
		HX_STACK_LINE(72)
		Rect->height = rect->height;
		HX_STACK_LINE(72)
		_g1 = Rect;
	}
	HX_STACK_LINE(72)
	::flixel::graphics::frames::FlxFrame _g2 = imageFrame->addSpriteSheetFrame(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(72)
	imageFrame->frame = _g2;
	HX_STACK_LINE(73)
	return imageFrame;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxImageFrame_obj,fromFrame,return )

::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromImage( Dynamic source){
	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","fromImage",0x817487d0,"flixel.graphics.frames.FlxImageFrame.fromImage","flixel/graphics/frames/FlxImageFrame.hx",84,0x94146112)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(84)
	return ::flixel::graphics::frames::FlxImageFrame_obj::fromRectangle(source,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxImageFrame_obj,fromImage,return )

::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromGraphic( ::flixel::graphics::FlxGraphic graphic,::flixel::math::FlxRect region){
	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","fromGraphic",0xe0158a5d,"flixel.graphics.frames.FlxImageFrame.fromGraphic","flixel/graphics/frames/FlxImageFrame.hx",95,0x94146112)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_ARG(region,"region")
	HX_STACK_LINE(96)
	if (((graphic == null()))){
		HX_STACK_LINE(96)
		return null();
	}
	HX_STACK_LINE(99)
	::flixel::math::FlxRect checkRegion = region;		HX_STACK_VAR(checkRegion,"checkRegion");
	HX_STACK_LINE(101)
	if (((checkRegion == null()))){
		HX_STACK_LINE(103)
		checkRegion = ::flixel::math::FlxRect_obj::flxRect;
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			checkRegion->x = (int)0;
			HX_STACK_LINE(104)
			checkRegion->y = (int)0;
			HX_STACK_LINE(104)
			checkRegion->width = graphic->width;
			HX_STACK_LINE(104)
			checkRegion->height = graphic->height;
			HX_STACK_LINE(104)
			checkRegion;
		}
	}
	HX_STACK_LINE(107)
	::flixel::graphics::frames::FlxImageFrame imageFrame = ::flixel::graphics::frames::FlxImageFrame_obj::findFrame(graphic,checkRegion);		HX_STACK_VAR(imageFrame,"imageFrame");
	HX_STACK_LINE(108)
	if (((imageFrame != null()))){
		HX_STACK_LINE(110)
		return imageFrame;
	}
	HX_STACK_LINE(114)
	::flixel::graphics::frames::FlxImageFrame _g = ::flixel::graphics::frames::FlxImageFrame_obj::__new(graphic);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(114)
	imageFrame = _g;
	HX_STACK_LINE(116)
	if (((region == null()))){
		HX_STACK_LINE(118)
		::flixel::math::FlxRect _g1 = ::flixel::math::FlxRect_obj::__new((int)0,(int)0,graphic->width,graphic->height);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(118)
		region = _g1;
	}
	else{
		HX_STACK_LINE(122)
		if (((region->width == (int)0))){
			HX_STACK_LINE(124)
			region->width = (graphic->width - region->x);
		}
		HX_STACK_LINE(127)
		if (((region->height == (int)0))){
			HX_STACK_LINE(129)
			region->height = (graphic->height - region->y);
		}
	}
	HX_STACK_LINE(133)
	::flixel::graphics::frames::FlxFrame _g2 = imageFrame->addSpriteSheetFrame(region);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(133)
	imageFrame->frame = _g2;
	HX_STACK_LINE(134)
	return imageFrame;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,fromGraphic,return )

::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromRectangle( Dynamic source,::flixel::math::FlxRect region){
	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","fromRectangle",0x493e1b24,"flixel.graphics.frames.FlxImageFrame.fromRectangle","flixel/graphics/frames/FlxImageFrame.hx",145,0x94146112)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(region,"region")
	HX_STACK_LINE(146)
	::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(source,false,null());		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(147)
	return ::flixel::graphics::frames::FlxImageFrame_obj::fromGraphic(graphic,region);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,fromRectangle,return )

::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::findFrame( ::flixel::graphics::FlxGraphic graphic,::flixel::math::FlxRect frameRect){
	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","findFrame",0x04fd2773,"flixel.graphics.frames.FlxImageFrame.findFrame","flixel/graphics/frames/FlxImageFrame.hx",158,0x94146112)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_ARG(frameRect,"frameRect")
	HX_STACK_LINE(159)
	Array< ::Dynamic > imageFrames;		HX_STACK_VAR(imageFrames,"imageFrames");
	struct _Function_1_1{
		inline static Dynamic Block( ::flixel::graphics::FlxGraphic &graphic){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxImageFrame.hx",159,0x94146112)
			{
				HX_STACK_LINE(159)
				::flixel::graphics::frames::FlxFrameCollectionType type = ::flixel::graphics::frames::FlxFrameCollectionType_obj::IMAGE;		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(159)
				Dynamic collections = graphic->frameCollections->get(type);		HX_STACK_VAR(collections,"collections");
				HX_STACK_LINE(159)
				if (((collections == null()))){
					HX_STACK_LINE(159)
					Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(159)
					collections = _g;
					HX_STACK_LINE(159)
					graphic->frameCollections->set(type,collections);
				}
				HX_STACK_LINE(159)
				return collections;
			}
			return null();
		}
	};
	HX_STACK_LINE(159)
	imageFrames = _Function_1_1::Block(graphic);
	HX_STACK_LINE(160)
	::flixel::graphics::frames::FlxImageFrame imageFrame;		HX_STACK_VAR(imageFrame,"imageFrame");
	HX_STACK_LINE(161)
	{
		HX_STACK_LINE(161)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(161)
		while((true)){
			HX_STACK_LINE(161)
			if ((!(((_g < imageFrames->length))))){
				HX_STACK_LINE(161)
				break;
			}
			HX_STACK_LINE(161)
			::flixel::graphics::frames::FlxImageFrame imageFrame1 = imageFrames->__get(_g).StaticCast< ::flixel::graphics::frames::FlxImageFrame >();		HX_STACK_VAR(imageFrame1,"imageFrame1");
			HX_STACK_LINE(161)
			++(_g);
			struct _Function_3_1{
				inline static bool Block( ::flixel::graphics::frames::FlxImageFrame &imageFrame1,::flixel::math::FlxRect &frameRect){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxImageFrame.hx",163,0x94146112)
					{
						HX_STACK_LINE(163)
						::flixel::math::FlxRect rect = imageFrame1->frame->frame;		HX_STACK_VAR(rect,"rect");
						struct _Function_4_1{
							inline static bool Block( ::flixel::math::FlxRect &frameRect,::flixel::math::FlxRect &rect){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxImageFrame.hx",163,0x94146112)
								{
									HX_STACK_LINE(163)
									Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
									HX_STACK_LINE(163)
									Float _g1 = ::Math_obj::abs((frameRect->x - rect->x));		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(163)
									return (_g1 <= aDiff);
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static bool Block( ::flixel::math::FlxRect &frameRect,::flixel::math::FlxRect &rect){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxImageFrame.hx",163,0x94146112)
								{
									HX_STACK_LINE(163)
									Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
									HX_STACK_LINE(163)
									Float _g2 = ::Math_obj::abs((frameRect->y - rect->y));		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(163)
									return (_g2 <= aDiff);
								}
								return null();
							}
						};
						struct _Function_4_3{
							inline static bool Block( ::flixel::math::FlxRect &frameRect,::flixel::math::FlxRect &rect){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxImageFrame.hx",163,0x94146112)
								{
									HX_STACK_LINE(163)
									Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
									HX_STACK_LINE(163)
									Float _g3 = ::Math_obj::abs((frameRect->width - rect->width));		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(163)
									return (_g3 <= aDiff);
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static bool Block( ::flixel::math::FlxRect &frameRect,::flixel::math::FlxRect &rect){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxImageFrame.hx",163,0x94146112)
								{
									HX_STACK_LINE(163)
									Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
									HX_STACK_LINE(163)
									Float _g4 = ::Math_obj::abs((frameRect->height - rect->height));		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(163)
									return (_g4 <= aDiff);
								}
								return null();
							}
						};
						HX_STACK_LINE(163)
						return (  (((  (((  ((_Function_4_1::Block(frameRect,rect))) ? bool(_Function_4_2::Block(frameRect,rect)) : bool(false) ))) ? bool(_Function_4_3::Block(frameRect,rect)) : bool(false) ))) ? bool(_Function_4_4::Block(frameRect,rect)) : bool(false) );
					}
					return null();
				}
			};
			HX_STACK_LINE(163)
			if (((  ((_Function_3_1::Block(imageFrame1,frameRect))) ? bool((imageFrame1->frame->type != (int)2)) : bool(false) ))){
				HX_STACK_LINE(165)
				return imageFrame1;
			}
		}
	}
	HX_STACK_LINE(169)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,findFrame,return )

::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::findEmptyFrame( ::flixel::graphics::FlxGraphic graphic,::flixel::math::FlxRect frameRect){
	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","findEmptyFrame",0xe2dd815a,"flixel.graphics.frames.FlxImageFrame.findEmptyFrame","flixel/graphics/frames/FlxImageFrame.hx",180,0x94146112)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_ARG(frameRect,"frameRect")
	HX_STACK_LINE(181)
	Array< ::Dynamic > imageFrames;		HX_STACK_VAR(imageFrames,"imageFrames");
	struct _Function_1_1{
		inline static Dynamic Block( ::flixel::graphics::FlxGraphic &graphic){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxImageFrame.hx",181,0x94146112)
			{
				HX_STACK_LINE(181)
				::flixel::graphics::frames::FlxFrameCollectionType type = ::flixel::graphics::frames::FlxFrameCollectionType_obj::IMAGE;		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(181)
				Dynamic collections = graphic->frameCollections->get(type);		HX_STACK_VAR(collections,"collections");
				HX_STACK_LINE(181)
				if (((collections == null()))){
					HX_STACK_LINE(181)
					Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(181)
					collections = _g;
					HX_STACK_LINE(181)
					graphic->frameCollections->set(type,collections);
				}
				HX_STACK_LINE(181)
				return collections;
			}
			return null();
		}
	};
	HX_STACK_LINE(181)
	imageFrames = _Function_1_1::Block(graphic);
	HX_STACK_LINE(182)
	::flixel::graphics::frames::FlxImageFrame imageFrame;		HX_STACK_VAR(imageFrame,"imageFrame");
	HX_STACK_LINE(183)
	::flixel::graphics::frames::FlxFrame frame;		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(185)
	{
		HX_STACK_LINE(185)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(185)
		while((true)){
			HX_STACK_LINE(185)
			if ((!(((_g < imageFrames->length))))){
				HX_STACK_LINE(185)
				break;
			}
			HX_STACK_LINE(185)
			::flixel::graphics::frames::FlxImageFrame imageFrame1 = imageFrames->__get(_g).StaticCast< ::flixel::graphics::frames::FlxImageFrame >();		HX_STACK_VAR(imageFrame1,"imageFrame1");
			HX_STACK_LINE(185)
			++(_g);
			HX_STACK_LINE(187)
			frame = imageFrame1->frame;
			HX_STACK_LINE(189)
			if (((bool((bool((frame->sourceSize->x == frameRect->width)) && bool((frame->sourceSize->y == frameRect->height)))) && bool((frame->type == (int)2))))){
				HX_STACK_LINE(191)
				return imageFrame1;
			}
		}
	}
	HX_STACK_LINE(195)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,findEmptyFrame,return )


FlxImageFrame_obj::FlxImageFrame_obj()
{
}

void FlxImageFrame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxImageFrame);
	HX_MARK_MEMBER_NAME(frame,"frame");
	::flixel::graphics::frames::FlxFramesCollection_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxImageFrame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frame,"frame");
	::flixel::graphics::frames::FlxFramesCollection_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxImageFrame_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromFrame") ) { return fromFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"fromImage") ) { return fromImage_dyn(); }
		if (HX_FIELD_EQ(inName,"findFrame") ) { return findFrame_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromGraphic") ) { return fromGraphic_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromRectangle") ) { return fromRectangle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromEmptyFrame") ) { return fromEmptyFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"findEmptyFrame") ) { return findEmptyFrame_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxImageFrame_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< ::flixel::graphics::frames::FlxFrame >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxImageFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("frame"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromEmptyFrame"),
	HX_CSTRING("fromFrame"),
	HX_CSTRING("fromImage"),
	HX_CSTRING("fromGraphic"),
	HX_CSTRING("fromRectangle"),
	HX_CSTRING("findFrame"),
	HX_CSTRING("findEmptyFrame"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::graphics::frames::FlxFrame*/ ,(int)offsetof(FlxImageFrame_obj,frame),HX_CSTRING("frame")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("frame"),
	HX_CSTRING("equals"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxImageFrame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxImageFrame_obj::__mClass,"__mClass");
};

#endif

Class FlxImageFrame_obj::__mClass;

void FlxImageFrame_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.graphics.frames.FlxImageFrame"), hx::TCanCast< FlxImageFrame_obj> ,sStaticFields,sMemberFields,
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

void FlxImageFrame_obj::__boot()
{
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
