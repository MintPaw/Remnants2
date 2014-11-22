#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxClippedFrames
#include <flixel/graphics/frames/FlxClippedFrames.h>
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
namespace flixel{
namespace graphics{
namespace frames{

Void FlxClippedFrames_obj::__construct(::flixel::graphics::frames::FlxFramesCollection original,::flixel::math::FlxRect clipRect)
{
HX_STACK_FRAME("flixel.graphics.frames.FlxClippedFrames","new",0x50f1fabc,"flixel.graphics.frames.FlxClippedFrames.new","flixel/graphics/frames/FlxClippedFrames.hx",27,0x387a24b3)
HX_STACK_THIS(this)
HX_STACK_ARG(original,"original")
HX_STACK_ARG(clipRect,"clipRect")
{
	HX_STACK_LINE(28)
	super::__construct(original->parent,::flixel::graphics::frames::FlxFrameCollectionType_obj::CLIPPED);
	HX_STACK_LINE(30)
	this->original = original;
	HX_STACK_LINE(31)
	this->clipRect = clipRect;
	HX_STACK_LINE(32)
	this->clipFrames();
}
;
	return null();
}

//FlxClippedFrames_obj::~FlxClippedFrames_obj() { }

Dynamic FlxClippedFrames_obj::__CreateEmpty() { return  new FlxClippedFrames_obj; }
hx::ObjectPtr< FlxClippedFrames_obj > FlxClippedFrames_obj::__new(::flixel::graphics::frames::FlxFramesCollection original,::flixel::math::FlxRect clipRect)
{  hx::ObjectPtr< FlxClippedFrames_obj > result = new FlxClippedFrames_obj();
	result->__construct(original,clipRect);
	return result;}

Dynamic FlxClippedFrames_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxClippedFrames_obj > result = new FlxClippedFrames_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void FlxClippedFrames_obj::clipFrames( ){
{
		HX_STACK_FRAME("flixel.graphics.frames.FlxClippedFrames","clipFrames",0xd6cfa7ba,"flixel.graphics.frames.FlxClippedFrames.clipFrames","flixel/graphics/frames/FlxClippedFrames.hx",36,0x387a24b3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		::flixel::math::FlxRect frameRect;		HX_STACK_VAR(frameRect,"frameRect");
		HX_STACK_LINE(38)
		::flixel::math::FlxRect clippedRect1 = ::flixel::math::FlxRect_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(clippedRect1,"clippedRect1");
		HX_STACK_LINE(39)
		::flixel::math::FlxRect clippedRect2;		HX_STACK_VAR(clippedRect2,"clippedRect2");
		HX_STACK_LINE(40)
		::flixel::math::FlxRect helperRect = ::flixel::math::FlxRect_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(helperRect,"helperRect");
		HX_STACK_LINE(41)
		::flixel::math::FlxPoint frameOffset;		HX_STACK_VAR(frameOffset,"frameOffset");
		HX_STACK_LINE(42)
		Float frameWidth;		HX_STACK_VAR(frameWidth,"frameWidth");
		HX_STACK_LINE(43)
		Float frameHeight;		HX_STACK_VAR(frameHeight,"frameHeight");
		HX_STACK_LINE(44)
		Float x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(44)
		Float y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(44)
		Float w;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(44)
		Float h;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(46)
		bool rotated;		HX_STACK_VAR(rotated,"rotated");
		HX_STACK_LINE(47)
		int angle = (int)0;		HX_STACK_VAR(angle,"angle");
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(49)
			Array< ::Dynamic > _g1 = this->original->frames;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(49)
			while((true)){
				HX_STACK_LINE(49)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(49)
					break;
				}
				HX_STACK_LINE(49)
				::flixel::graphics::frames::FlxFrame frame = _g1->__get(_g).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(frame,"frame");
				HX_STACK_LINE(49)
				++(_g);
				HX_STACK_LINE(51)
				frameWidth = frame->sourceSize->x;
				HX_STACK_LINE(52)
				frameHeight = frame->sourceSize->y;
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					helperRect->x = (int)0;
					HX_STACK_LINE(54)
					helperRect->y = (int)0;
					HX_STACK_LINE(54)
					helperRect->width = frameWidth;
					HX_STACK_LINE(54)
					helperRect->height = frameHeight;
					HX_STACK_LINE(54)
					helperRect;
				}
				HX_STACK_LINE(55)
				{
					HX_STACK_LINE(55)
					clippedRect1->x = frame->offset->x;
					HX_STACK_LINE(55)
					clippedRect1->y = frame->offset->y;
					HX_STACK_LINE(55)
					clippedRect1->width = frame->frame->width;
					HX_STACK_LINE(55)
					clippedRect1->height = frame->frame->height;
					HX_STACK_LINE(55)
					clippedRect1;
				}
				HX_STACK_LINE(57)
				rotated = (frame->type == (int)1);
				HX_STACK_LINE(58)
				angle = (int)0;
				HX_STACK_LINE(60)
				if ((rotated)){
					HX_STACK_LINE(62)
					angle = frame->angle;
					HX_STACK_LINE(63)
					clippedRect1->width = frame->frame->height;
					HX_STACK_LINE(64)
					clippedRect1->height = frame->frame->width;
				}
				HX_STACK_LINE(67)
				::flixel::math::FlxRect _g2 = clippedRect1->intersection(this->clipRect);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(67)
				clippedRect2 = _g2;
				HX_STACK_LINE(68)
				::flixel::math::FlxRect _g11 = clippedRect2->intersection(helperRect);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(68)
				frameRect = _g11;
				HX_STACK_LINE(70)
				if (((bool((bool((bool((frameRect->width == (int)0)) || bool((frameRect->height == (int)0)))) || bool((clippedRect2->width == (int)0)))) || bool((clippedRect2->height == (int)0))))){
					HX_STACK_LINE(73)
					{
						HX_STACK_LINE(73)
						frameRect->x = (int)0;
						HX_STACK_LINE(73)
						frameRect->y = (int)0;
						HX_STACK_LINE(73)
						frameRect->width = frameWidth;
						HX_STACK_LINE(73)
						frameRect->height = frameHeight;
						HX_STACK_LINE(73)
						frameRect;
					}
					HX_STACK_LINE(74)
					this->addEmptyFrame(frameRect);
				}
				else{
					HX_STACK_LINE(78)
					::flixel::math::FlxPoint _g21;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(78)
					{
						HX_STACK_LINE(78)
						::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(clippedRect2->x,clippedRect2->y);		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(78)
						point->_inPool = false;
						HX_STACK_LINE(78)
						_g21 = point;
					}
					HX_STACK_LINE(78)
					frameOffset = _g21;
					HX_STACK_LINE(80)
					x = frameRect->x;
					HX_STACK_LINE(81)
					y = frameRect->y;
					HX_STACK_LINE(82)
					w = frameRect->width;
					HX_STACK_LINE(83)
					h = frameRect->height;
					HX_STACK_LINE(85)
					if (((angle == (int)0))){
						HX_STACK_LINE(87)
						hx::SubEq(frameRect->x,clippedRect1->x);
						HX_STACK_LINE(88)
						hx::SubEq(frameRect->y,clippedRect1->y);
					}
					HX_STACK_LINE(90)
					if (((angle == (int)-90))){
						HX_STACK_LINE(92)
						frameRect->x = (((clippedRect1->y + clippedRect1->height) - y) - h);
						HX_STACK_LINE(93)
						frameRect->y = (x - clippedRect1->x);
						HX_STACK_LINE(94)
						frameRect->width = h;
						HX_STACK_LINE(95)
						frameRect->height = w;
					}
					else{
						HX_STACK_LINE(97)
						if (((angle == (int)90))){
							HX_STACK_LINE(99)
							frameRect->x = (y - clippedRect1->y);
							HX_STACK_LINE(100)
							frameRect->y = (((clippedRect1->x + clippedRect1->width) - x) - w);
							HX_STACK_LINE(101)
							frameRect->width = h;
							HX_STACK_LINE(102)
							frameRect->height = w;
						}
					}
					HX_STACK_LINE(105)
					hx::AddEq(frameRect->x,frame->frame->x);
					HX_STACK_LINE(106)
					hx::AddEq(frameRect->y,frame->frame->y);
					HX_STACK_LINE(108)
					::flixel::math::FlxPoint _g3;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(108)
					{
						HX_STACK_LINE(108)
						::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(frameWidth,frameHeight);		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(108)
						point->_inPool = false;
						HX_STACK_LINE(108)
						_g3 = point;
					}
					HX_STACK_LINE(108)
					this->addAtlasFrame(frameRect,_g3,frameOffset,frame->name,angle);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxClippedFrames_obj,clipFrames,(void))

bool FlxClippedFrames_obj::equals( ::flixel::graphics::frames::FlxFramesCollection original,::flixel::math::FlxRect clipRect){
	HX_STACK_FRAME("flixel.graphics.frames.FlxClippedFrames","equals",0x25daa563,"flixel.graphics.frames.FlxClippedFrames.equals","flixel/graphics/frames/FlxClippedFrames.hx",164,0x387a24b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(original,"original")
	HX_STACK_ARG(clipRect,"clipRect")
	HX_STACK_LINE(164)
	if (((this->original == original))){
		HX_STACK_LINE(164)
		::flixel::math::FlxRect _this = this->clipRect;		HX_STACK_VAR(_this,"_this");
		struct _Function_2_1{
			inline static bool Block( ::flixel::math::FlxRect &clipRect,::flixel::math::FlxRect _this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxClippedFrames.hx",164,0x387a24b3)
				{
					HX_STACK_LINE(164)
					Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
					HX_STACK_LINE(164)
					Float _g = ::Math_obj::abs((_this->x - clipRect->x));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(164)
					return (_g <= aDiff);
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static bool Block( ::flixel::math::FlxRect &clipRect,::flixel::math::FlxRect _this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxClippedFrames.hx",164,0x387a24b3)
				{
					HX_STACK_LINE(164)
					Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
					HX_STACK_LINE(164)
					Float _g1 = ::Math_obj::abs((_this->y - clipRect->y));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(164)
					return (_g1 <= aDiff);
				}
				return null();
			}
		};
		struct _Function_2_3{
			inline static bool Block( ::flixel::math::FlxRect &clipRect,::flixel::math::FlxRect _this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxClippedFrames.hx",164,0x387a24b3)
				{
					HX_STACK_LINE(164)
					Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
					HX_STACK_LINE(164)
					Float _g2 = ::Math_obj::abs((_this->width - clipRect->width));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(164)
					return (_g2 <= aDiff);
				}
				return null();
			}
		};
		HX_STACK_LINE(164)
		if (((  (((  ((_Function_2_1::Block(clipRect,_this))) ? bool(_Function_2_2::Block(clipRect,_this)) : bool(false) ))) ? bool(_Function_2_3::Block(clipRect,_this)) : bool(false) ))){
			HX_STACK_LINE(164)
			Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(164)
			Float _g3 = ::Math_obj::abs((_this->height - clipRect->height));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(164)
			return (_g3 <= aDiff);
		}
		else{
			HX_STACK_LINE(164)
			return false;
		}
	}
	else{
		HX_STACK_LINE(164)
		return false;
	}
	HX_STACK_LINE(164)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxClippedFrames_obj,equals,return )

Void FlxClippedFrames_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.graphics.frames.FlxClippedFrames","destroy",0xe95eb556,"flixel.graphics.frames.FlxClippedFrames.destroy","flixel/graphics/frames/FlxClippedFrames.hx",168,0x387a24b3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(169)
		this->super::destroy();
		HX_STACK_LINE(170)
		this->clipRect = null();
		HX_STACK_LINE(171)
		this->original = null();
	}
return null();
}


::flixel::graphics::frames::FlxClippedFrames FlxClippedFrames_obj::clip( ::flixel::graphics::frames::FlxFramesCollection frames,::flixel::math::FlxRect clipRect){
	HX_STACK_FRAME("flixel.graphics.frames.FlxClippedFrames","clip",0x7b8954f4,"flixel.graphics.frames.FlxClippedFrames.clip","flixel/graphics/frames/FlxClippedFrames.hx",121,0x387a24b3)
	HX_STACK_ARG(frames,"frames")
	HX_STACK_ARG(clipRect,"clipRect")
	HX_STACK_LINE(122)
	if (((frames->type == ::flixel::graphics::frames::FlxFrameCollectionType_obj::CLIPPED))){
		HX_STACK_LINE(124)
		frames = (hx::TCast< flixel::graphics::frames::FlxClippedFrames >::cast(frames))->original;
	}
	HX_STACK_LINE(127)
	::flixel::graphics::frames::FlxClippedFrames clippedFrames = ::flixel::graphics::frames::FlxClippedFrames_obj::findFrame(frames,clipRect);		HX_STACK_VAR(clippedFrames,"clippedFrames");
	HX_STACK_LINE(128)
	if (((clippedFrames != null()))){
		HX_STACK_LINE(130)
		return clippedFrames;
	}
	HX_STACK_LINE(133)
	return ::flixel::graphics::frames::FlxClippedFrames_obj::__new(frames,clipRect);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxClippedFrames_obj,clip,return )

::flixel::graphics::frames::FlxClippedFrames FlxClippedFrames_obj::findFrame( ::flixel::graphics::frames::FlxFramesCollection frames,::flixel::math::FlxRect clipRect){
	HX_STACK_FRAME("flixel.graphics.frames.FlxClippedFrames","findFrame",0x07cb0090,"flixel.graphics.frames.FlxClippedFrames.findFrame","flixel/graphics/frames/FlxClippedFrames.hx",144,0x387a24b3)
	HX_STACK_ARG(frames,"frames")
	HX_STACK_ARG(clipRect,"clipRect")
	HX_STACK_LINE(145)
	Array< ::Dynamic > clippedFramesArr;		HX_STACK_VAR(clippedFramesArr,"clippedFramesArr");
	struct _Function_1_1{
		inline static Dynamic Block( ::flixel::graphics::frames::FlxFramesCollection &frames){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxClippedFrames.hx",145,0x387a24b3)
			{
				HX_STACK_LINE(145)
				::flixel::graphics::FlxGraphic _this = frames->parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(145)
				::flixel::graphics::frames::FlxFrameCollectionType type = ::flixel::graphics::frames::FlxFrameCollectionType_obj::CLIPPED;		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(145)
				Dynamic collections = _this->frameCollections->get(type);		HX_STACK_VAR(collections,"collections");
				HX_STACK_LINE(145)
				if (((collections == null()))){
					HX_STACK_LINE(145)
					Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(145)
					collections = _g;
					HX_STACK_LINE(145)
					_this->frameCollections->set(type,collections);
				}
				HX_STACK_LINE(145)
				return collections;
			}
			return null();
		}
	};
	HX_STACK_LINE(145)
	clippedFramesArr = _Function_1_1::Block(frames);
	HX_STACK_LINE(146)
	::flixel::graphics::frames::FlxClippedFrames clippedFrames;		HX_STACK_VAR(clippedFrames,"clippedFrames");
	HX_STACK_LINE(148)
	{
		HX_STACK_LINE(148)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(148)
		while((true)){
			HX_STACK_LINE(148)
			if ((!(((_g < clippedFramesArr->length))))){
				HX_STACK_LINE(148)
				break;
			}
			HX_STACK_LINE(148)
			::flixel::graphics::frames::FlxClippedFrames clippedFrames1 = clippedFramesArr->__get(_g).StaticCast< ::flixel::graphics::frames::FlxClippedFrames >();		HX_STACK_VAR(clippedFrames1,"clippedFrames1");
			HX_STACK_LINE(148)
			++(_g);
			HX_STACK_LINE(150)
			if ((clippedFrames1->equals(frames,clipRect))){
				HX_STACK_LINE(152)
				return clippedFrames1;
			}
		}
	}
	HX_STACK_LINE(156)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxClippedFrames_obj,findFrame,return )


FlxClippedFrames_obj::FlxClippedFrames_obj()
{
}

void FlxClippedFrames_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxClippedFrames);
	HX_MARK_MEMBER_NAME(clipRect,"clipRect");
	HX_MARK_MEMBER_NAME(original,"original");
	::flixel::graphics::frames::FlxFramesCollection_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxClippedFrames_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(clipRect,"clipRect");
	HX_VISIT_MEMBER_NAME(original,"original");
	::flixel::graphics::frames::FlxFramesCollection_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxClippedFrames_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"clip") ) { return clip_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipRect") ) { return clipRect; }
		if (HX_FIELD_EQ(inName,"original") ) { return original; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"findFrame") ) { return findFrame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clipFrames") ) { return clipFrames_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxClippedFrames_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"clipRect") ) { clipRect=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"original") ) { original=inValue.Cast< ::flixel::graphics::frames::FlxFramesCollection >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxClippedFrames_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("clipRect"));
	outFields->push(HX_CSTRING("original"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("clip"),
	HX_CSTRING("findFrame"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxClippedFrames_obj,clipRect),HX_CSTRING("clipRect")},
	{hx::fsObject /*::flixel::graphics::frames::FlxFramesCollection*/ ,(int)offsetof(FlxClippedFrames_obj,original),HX_CSTRING("original")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("clipRect"),
	HX_CSTRING("original"),
	HX_CSTRING("clipFrames"),
	HX_CSTRING("equals"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxClippedFrames_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxClippedFrames_obj::__mClass,"__mClass");
};

#endif

Class FlxClippedFrames_obj::__mClass;

void FlxClippedFrames_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.graphics.frames.FlxClippedFrames"), hx::TCanCast< FlxClippedFrames_obj> ,sStaticFields,sMemberFields,
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

void FlxClippedFrames_obj::__boot()
{
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
