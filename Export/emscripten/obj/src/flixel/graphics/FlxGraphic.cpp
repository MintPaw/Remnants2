#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
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
#ifndef INCLUDED_flixel_graphics_tile_FlxTilesheet
#include <flixel/graphics/tile/FlxTilesheet.h>
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
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
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
namespace flixel{
namespace graphics{

Void FlxGraphic_obj::__construct(::String Key,::openfl::_v2::display::BitmapData Bitmap,Dynamic Persist)
{
HX_STACK_FRAME("flixel.graphics.FlxGraphic","new",0x02373c99,"flixel.graphics.FlxGraphic.new","flixel/graphics/FlxGraphic.hx",22,0xb3633517)
HX_STACK_THIS(this)
HX_STACK_ARG(Key,"Key")
HX_STACK_ARG(Bitmap,"Bitmap")
HX_STACK_ARG(Persist,"Persist")
{
	HX_STACK_LINE(380)
	this->_destroyOnNoUse = true;
	HX_STACK_LINE(378)
	this->_useCount = (int)0;
	HX_STACK_LINE(362)
	this->unique = false;
	HX_STACK_LINE(313)
	this->isDumped = false;
	HX_STACK_LINE(303)
	this->persist = false;
	HX_STACK_LINE(289)
	this->height = (int)0;
	HX_STACK_LINE(284)
	this->width = (int)0;
	HX_STACK_LINE(390)
	this->key = Key;
	HX_STACK_LINE(391)
	if (((Persist != null()))){
		HX_STACK_LINE(391)
		this->persist = Persist;
	}
	else{
		HX_STACK_LINE(391)
		this->persist = ::flixel::graphics::FlxGraphic_obj::defaultPersist;
	}
	HX_STACK_LINE(393)
	::haxe::ds::EnumValueMap _g = ::haxe::ds::EnumValueMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(393)
	this->frameCollections = _g;
	HX_STACK_LINE(394)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(394)
	this->frameCollectionTypes = _g1;
	HX_STACK_LINE(395)
	this->set_bitmap(Bitmap);
}
;
	return null();
}

//FlxGraphic_obj::~FlxGraphic_obj() { }

Dynamic FlxGraphic_obj::__CreateEmpty() { return  new FlxGraphic_obj; }
hx::ObjectPtr< FlxGraphic_obj > FlxGraphic_obj::__new(::String Key,::openfl::_v2::display::BitmapData Bitmap,Dynamic Persist)
{  hx::ObjectPtr< FlxGraphic_obj > result = new FlxGraphic_obj();
	result->__construct(Key,Bitmap,Persist);
	return result;}

Dynamic FlxGraphic_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGraphic_obj > result = new FlxGraphic_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void FlxGraphic_obj::dump( ){
{
		HX_STACK_FRAME("flixel.graphics.FlxGraphic","dump",0xe78dc2db,"flixel.graphics.FlxGraphic.dump","flixel/graphics/FlxGraphic.hx",405,0xb3633517)
		HX_STACK_THIS(this)
		HX_STACK_LINE(405)
		if (((bool((this->assetsClass != null())) || bool((this->assetsKey != null()))))){
			HX_STACK_LINE(407)
			this->bitmap->dumpBits();
			HX_STACK_LINE(408)
			this->isDumped = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,dump,(void))

Void FlxGraphic_obj::undump( ){
{
		HX_STACK_FRAME("flixel.graphics.FlxGraphic","undump",0xf6fcc174,"flixel.graphics.FlxGraphic.undump","flixel/graphics/FlxGraphic.hx",417,0xb3633517)
		HX_STACK_THIS(this)
		HX_STACK_LINE(418)
		::openfl::_v2::display::BitmapData newBitmap = this->getBitmapFromSystem();		HX_STACK_VAR(newBitmap,"newBitmap");
		HX_STACK_LINE(419)
		if (((newBitmap != null()))){
			HX_STACK_LINE(421)
			this->set_bitmap(newBitmap);
		}
		HX_STACK_LINE(423)
		this->isDumped = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,undump,(void))

Void FlxGraphic_obj::onContext( ){
{
		HX_STACK_FRAME("flixel.graphics.FlxGraphic","onContext",0x4fa62b89,"flixel.graphics.FlxGraphic.onContext","flixel/graphics/FlxGraphic.hx",433,0xb3633517)
		HX_STACK_THIS(this)
		HX_STACK_LINE(433)
		if ((this->isDumped)){
			HX_STACK_LINE(435)
			this->undump();
			HX_STACK_LINE(436)
			this->dump();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,onContext,(void))

Void FlxGraphic_obj::onAssetsReload( ){
{
		HX_STACK_FRAME("flixel.graphics.FlxGraphic","onAssetsReload",0x9c63b062,"flixel.graphics.FlxGraphic.onAssetsReload","flixel/graphics/FlxGraphic.hx",445,0xb3633517)
		HX_STACK_THIS(this)
		HX_STACK_LINE(446)
		if ((!(((bool((this->assetsClass != null())) || bool((this->assetsKey != null()))))))){
			HX_STACK_LINE(447)
			return null();
		}
		HX_STACK_LINE(449)
		bool dumped = this->isDumped;		HX_STACK_VAR(dumped,"dumped");
		HX_STACK_LINE(450)
		this->undump();
		HX_STACK_LINE(451)
		this->resetFrameBitmaps();
		HX_STACK_LINE(452)
		if ((dumped)){
			HX_STACK_LINE(453)
			this->dump();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,onAssetsReload,(void))

Void FlxGraphic_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.graphics.FlxGraphic","destroy",0x6c66a9b3,"flixel.graphics.FlxGraphic.destroy","flixel/graphics/FlxGraphic.hx",460,0xb3633517)
		HX_STACK_THIS(this)
		HX_STACK_LINE(461)
		::openfl::_v2::display::BitmapData _g = ::flixel::util::FlxDestroyUtil_obj::dispose(this->bitmap);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(461)
		this->set_bitmap(_g);
		HX_STACK_LINE(463)
		::flixel::graphics::tile::FlxTilesheet _g1 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_tilesheet);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(463)
		this->_tilesheet = _g1;
		HX_STACK_LINE(465)
		this->key = null();
		HX_STACK_LINE(466)
		this->assetsKey = null();
		HX_STACK_LINE(467)
		this->assetsClass = null();
		HX_STACK_LINE(468)
		this->_imageFrame = null();
		HX_STACK_LINE(469)
		this->atlasFrames = null();
		HX_STACK_LINE(471)
		Array< ::Dynamic > collections;		HX_STACK_VAR(collections,"collections");
		HX_STACK_LINE(472)
		::flixel::graphics::frames::FlxFrameCollectionType collectionType;		HX_STACK_VAR(collectionType,"collectionType");
		HX_STACK_LINE(473)
		{
			HX_STACK_LINE(473)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(473)
			Array< ::Dynamic > _g11 = this->frameCollectionTypes;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(473)
			while((true)){
				HX_STACK_LINE(473)
				if ((!(((_g2 < _g11->length))))){
					HX_STACK_LINE(473)
					break;
				}
				HX_STACK_LINE(473)
				::flixel::graphics::frames::FlxFrameCollectionType collectionType1 = _g11->__get(_g2).StaticCast< ::flixel::graphics::frames::FlxFrameCollectionType >();		HX_STACK_VAR(collectionType1,"collectionType1");
				HX_STACK_LINE(473)
				++(_g2);
				HX_STACK_LINE(475)
				Array< ::Dynamic > _g21 = this->frameCollections->get(collectionType1);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(475)
				collections = _g21;
				HX_STACK_LINE(476)
				::flixel::util::FlxDestroyUtil_obj::destroyArray(collections);
			}
		}
		HX_STACK_LINE(479)
		this->frameCollections = null();
		HX_STACK_LINE(480)
		this->frameCollectionTypes = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,destroy,(void))

Void FlxGraphic_obj::resetFrameBitmaps( ){
{
		HX_STACK_FRAME("flixel.graphics.FlxGraphic","resetFrameBitmaps",0x5be52f5f,"flixel.graphics.FlxGraphic.resetFrameBitmaps","flixel/graphics/FlxGraphic.hx",487,0xb3633517)
		HX_STACK_THIS(this)
		HX_STACK_LINE(488)
		Array< ::Dynamic > collections;		HX_STACK_VAR(collections,"collections");
		HX_STACK_LINE(489)
		::flixel::graphics::frames::FlxFramesCollection collection;		HX_STACK_VAR(collection,"collection");
		HX_STACK_LINE(490)
		::flixel::graphics::frames::FlxFrameCollectionType collectionType;		HX_STACK_VAR(collectionType,"collectionType");
		HX_STACK_LINE(491)
		{
			HX_STACK_LINE(491)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(491)
			Array< ::Dynamic > _g1 = this->frameCollectionTypes;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(491)
			while((true)){
				HX_STACK_LINE(491)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(491)
					break;
				}
				HX_STACK_LINE(491)
				::flixel::graphics::frames::FlxFrameCollectionType collectionType1 = _g1->__get(_g).StaticCast< ::flixel::graphics::frames::FlxFrameCollectionType >();		HX_STACK_VAR(collectionType1,"collectionType1");
				HX_STACK_LINE(491)
				++(_g);
				HX_STACK_LINE(493)
				Array< ::Dynamic > _g2 = this->frameCollections->get(collectionType1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(493)
				collections = _g2;
				HX_STACK_LINE(494)
				{
					HX_STACK_LINE(494)
					int _g21 = (int)0;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(494)
					while((true)){
						HX_STACK_LINE(494)
						if ((!(((_g21 < collections->length))))){
							HX_STACK_LINE(494)
							break;
						}
						HX_STACK_LINE(494)
						::flixel::graphics::frames::FlxFramesCollection collection1 = collections->__get(_g21).StaticCast< ::flixel::graphics::frames::FlxFramesCollection >();		HX_STACK_VAR(collection1,"collection1");
						HX_STACK_LINE(494)
						++(_g21);
						HX_STACK_LINE(496)
						collection1->destroyBitmaps();
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,resetFrameBitmaps,(void))

Void FlxGraphic_obj::addFrameCollection( ::flixel::graphics::frames::FlxFramesCollection collection){
{
		HX_STACK_FRAME("flixel.graphics.FlxGraphic","addFrameCollection",0x06dd03b1,"flixel.graphics.FlxGraphic.addFrameCollection","flixel/graphics/FlxGraphic.hx",508,0xb3633517)
		HX_STACK_THIS(this)
		HX_STACK_ARG(collection,"collection")
		HX_STACK_LINE(508)
		if (((collection->type != null()))){
			HX_STACK_LINE(510)
			Dynamic collections;		HX_STACK_VAR(collections,"collections");
			HX_STACK_LINE(510)
			{
				HX_STACK_LINE(510)
				::flixel::graphics::frames::FlxFrameCollectionType type = collection->type;		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(510)
				Dynamic collections1 = this->frameCollections->get(type);		HX_STACK_VAR(collections1,"collections1");
				HX_STACK_LINE(510)
				if (((collections1 == null()))){
					HX_STACK_LINE(510)
					Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(510)
					collections1 = _g;
					HX_STACK_LINE(510)
					this->frameCollections->set(type,collections1);
				}
				HX_STACK_LINE(510)
				collections = collections1;
			}
			HX_STACK_LINE(511)
			collections->__Field(HX_CSTRING("push"),true)(collection);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGraphic_obj,addFrameCollection,(void))

Dynamic FlxGraphic_obj::getFramesCollections( ::flixel::graphics::frames::FlxFrameCollectionType type){
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","getFramesCollections",0xa4089c80,"flixel.graphics.FlxGraphic.getFramesCollections","flixel/graphics/FlxGraphic.hx",522,0xb3633517)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(523)
	Dynamic collections = this->frameCollections->get(type);		HX_STACK_VAR(collections,"collections");
	HX_STACK_LINE(524)
	if (((collections == null()))){
		HX_STACK_LINE(526)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(526)
		collections = _g;
		HX_STACK_LINE(527)
		this->frameCollections->set(type,collections);
	}
	HX_STACK_LINE(529)
	return collections;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGraphic_obj,getFramesCollections,return )

::flixel::graphics::frames::FlxEmptyFrame FlxGraphic_obj::getEmptyFrame( ::flixel::math::FlxPoint size){
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","getEmptyFrame",0xc5b0f80f,"flixel.graphics.FlxGraphic.getEmptyFrame","flixel/graphics/FlxGraphic.hx",540,0xb3633517)
	HX_STACK_THIS(this)
	HX_STACK_ARG(size,"size")
	HX_STACK_LINE(541)
	::flixel::graphics::frames::FlxEmptyFrame frame = ::flixel::graphics::frames::FlxEmptyFrame_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(542)
	::flixel::math::FlxRect _g = ::flixel::math::FlxRect_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(542)
	frame->frame = _g;
	HX_STACK_LINE(543)
	frame->sourceSize->set(size->x,size->y);
	HX_STACK_LINE(544)
	return frame;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGraphic_obj,getEmptyFrame,return )

::flixel::graphics::tile::FlxTilesheet FlxGraphic_obj::get_tilesheet( ){
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","get_tilesheet",0x1819f201,"flixel.graphics.FlxGraphic.get_tilesheet","flixel/graphics/FlxGraphic.hx",552,0xb3633517)
	HX_STACK_THIS(this)
	HX_STACK_LINE(553)
	if (((this->_tilesheet == null()))){
		HX_STACK_LINE(555)
		bool dumped = this->isDumped;		HX_STACK_VAR(dumped,"dumped");
		HX_STACK_LINE(557)
		if ((dumped)){
			HX_STACK_LINE(558)
			this->undump();
		}
		HX_STACK_LINE(560)
		::flixel::graphics::tile::FlxTilesheet _g = ::flixel::graphics::tile::FlxTilesheet_obj::__new(this->bitmap);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(560)
		this->_tilesheet = _g;
		HX_STACK_LINE(562)
		if ((dumped)){
			HX_STACK_LINE(563)
			this->dump();
		}
	}
	HX_STACK_LINE(566)
	return this->_tilesheet;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,get_tilesheet,return )

::openfl::_v2::display::BitmapData FlxGraphic_obj::getBitmapFromSystem( ){
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","getBitmapFromSystem",0xb3be27b7,"flixel.graphics.FlxGraphic.getBitmapFromSystem","flixel/graphics/FlxGraphic.hx",575,0xb3633517)
	HX_STACK_THIS(this)
	HX_STACK_LINE(576)
	::openfl::_v2::display::BitmapData newBitmap = null();		HX_STACK_VAR(newBitmap,"newBitmap");
	HX_STACK_LINE(577)
	if (((this->assetsClass != null()))){
		HX_STACK_LINE(579)
		::openfl::_v2::display::BitmapData _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(579)
		{
			HX_STACK_LINE(579)
			::openfl::_v2::display::BitmapData bitmap = ::Type_obj::createInstance(this->assetsClass,Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)0)));		HX_STACK_VAR(bitmap,"bitmap");
			HX_STACK_LINE(579)
			_g = bitmap;
		}
		HX_STACK_LINE(579)
		newBitmap = _g;
	}
	else{
		HX_STACK_LINE(581)
		if (((this->assetsKey != null()))){
			HX_STACK_LINE(583)
			::openfl::_v2::display::BitmapData _g1 = ::openfl::_v2::Assets_obj::getBitmapData(this->assetsKey,false);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(583)
			newBitmap = _g1;
		}
	}
	HX_STACK_LINE(586)
	if ((this->unique)){
		HX_STACK_LINE(586)
		return newBitmap->clone();
	}
	else{
		HX_STACK_LINE(586)
		return newBitmap;
	}
	HX_STACK_LINE(586)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,getBitmapFromSystem,return )

bool FlxGraphic_obj::get_canBeDumped( ){
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","get_canBeDumped",0x9b8a5e36,"flixel.graphics.FlxGraphic.get_canBeDumped","flixel/graphics/FlxGraphic.hx",591,0xb3633517)
	HX_STACK_THIS(this)
	HX_STACK_LINE(591)
	return (bool((this->assetsClass != null())) || bool((this->assetsKey != null())));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,get_canBeDumped,return )

int FlxGraphic_obj::get_useCount( ){
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","get_useCount",0x2bcc1fb8,"flixel.graphics.FlxGraphic.get_useCount","flixel/graphics/FlxGraphic.hx",596,0xb3633517)
	HX_STACK_THIS(this)
	HX_STACK_LINE(596)
	return this->_useCount;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,get_useCount,return )

int FlxGraphic_obj::set_useCount( int Value){
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","set_useCount",0x40c5432c,"flixel.graphics.FlxGraphic.set_useCount","flixel/graphics/FlxGraphic.hx",600,0xb3633517)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(601)
	if (((bool((bool((Value <= (int)0)) && bool(this->_destroyOnNoUse))) && bool(!(this->persist))))){
		HX_STACK_LINE(603)
		::flixel::FlxG_obj::bitmap->remove(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(606)
	return this->_useCount = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGraphic_obj,set_useCount,return )

bool FlxGraphic_obj::get_destroyOnNoUse( ){
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","get_destroyOnNoUse",0x7e860bbd,"flixel.graphics.FlxGraphic.get_destroyOnNoUse","flixel/graphics/FlxGraphic.hx",611,0xb3633517)
	HX_STACK_THIS(this)
	HX_STACK_LINE(611)
	return this->_destroyOnNoUse;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,get_destroyOnNoUse,return )

bool FlxGraphic_obj::set_destroyOnNoUse( bool Value){
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","set_destroyOnNoUse",0x5b353e31,"flixel.graphics.FlxGraphic.set_destroyOnNoUse","flixel/graphics/FlxGraphic.hx",615,0xb3633517)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(616)
	if (((bool((bool((bool(Value) && bool((this->_useCount <= (int)0)))) && bool((this->key != null())))) && bool(!(this->persist))))){
		HX_STACK_LINE(618)
		::flixel::FlxG_obj::bitmap->remove(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(621)
	return this->_destroyOnNoUse = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGraphic_obj,set_destroyOnNoUse,return )

::flixel::graphics::frames::FlxImageFrame FlxGraphic_obj::get_imageFrame( ){
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","get_imageFrame",0xc1224382,"flixel.graphics.FlxGraphic.get_imageFrame","flixel/graphics/FlxGraphic.hx",625,0xb3633517)
	HX_STACK_THIS(this)
	HX_STACK_LINE(626)
	if (((this->_imageFrame == null()))){
		HX_STACK_LINE(628)
		int _g = this->bitmap->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(628)
		int _g1 = this->bitmap->get_height();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(628)
		::flixel::math::FlxRect _g2 = ::flixel::math::FlxRect_obj::__new((int)0,(int)0,_g,_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(628)
		::flixel::graphics::frames::FlxImageFrame _g3 = ::flixel::graphics::frames::FlxImageFrame_obj::fromRectangle(hx::ObjectPtr<OBJ_>(this),_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(628)
		this->_imageFrame = _g3;
	}
	HX_STACK_LINE(631)
	return this->_imageFrame;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,get_imageFrame,return )

::openfl::_v2::display::BitmapData FlxGraphic_obj::set_bitmap( ::openfl::_v2::display::BitmapData value){
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","set_bitmap",0x39ee9b13,"flixel.graphics.FlxGraphic.set_bitmap","flixel/graphics/FlxGraphic.hx",635,0xb3633517)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(636)
	if (((value != null()))){
		HX_STACK_LINE(638)
		this->bitmap = value;
		HX_STACK_LINE(639)
		int _g = this->bitmap->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(639)
		this->width = _g;
		HX_STACK_LINE(640)
		int _g1 = this->bitmap->get_height();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(640)
		this->height = _g1;
		HX_STACK_LINE(642)
		if (((this->_tilesheet != null()))){
			HX_STACK_LINE(644)
			::flixel::graphics::tile::FlxTilesheet _g2 = ::flixel::graphics::tile::FlxTilesheet_obj::rebuildFromOld(this->_tilesheet,this->bitmap);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(644)
			this->_tilesheet = _g2;
		}
		HX_STACK_LINE(647)
		this->resetFrameBitmaps();
	}
	HX_STACK_LINE(650)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGraphic_obj,set_bitmap,return )

bool FlxGraphic_obj::defaultPersist;

::flixel::graphics::FlxGraphic FlxGraphic_obj::fromAssetKey( ::String Source,hx::Null< bool >  __o_Unique,::String Key,hx::Null< bool >  __o_Cache){
bool Unique = __o_Unique.Default(false);
bool Cache = __o_Cache.Default(true);
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","fromAssetKey",0xcea54dc0,"flixel.graphics.FlxGraphic.fromAssetKey","flixel/graphics/FlxGraphic.hx",40,0xb3633517)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
	HX_STACK_ARG(Cache,"Cache")
{
		HX_STACK_LINE(41)
		::openfl::_v2::display::BitmapData bitmap = null();		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(43)
		if ((!(Cache))){
			HX_STACK_LINE(45)
			::openfl::_v2::display::BitmapData _g = ::openfl::_v2::Assets_obj::getBitmapData(Source,false);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(45)
			bitmap = _g;
			HX_STACK_LINE(46)
			return ::flixel::graphics::FlxGraphic_obj::createGraphic(bitmap,Key,Unique,Cache);
		}
		HX_STACK_LINE(49)
		::String key = ::flixel::FlxG_obj::bitmap->generateKey(Source,Key,Unique);		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(50)
		::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->get(key);		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(51)
		if (((graphic != null()))){
			HX_STACK_LINE(53)
			return graphic;
		}
		HX_STACK_LINE(56)
		::openfl::_v2::display::BitmapData _g1 = ::openfl::_v2::Assets_obj::getBitmapData(Source,false);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(56)
		bitmap = _g1;
		HX_STACK_LINE(57)
		::flixel::graphics::FlxGraphic _g2 = ::flixel::graphics::FlxGraphic_obj::createGraphic(bitmap,key,Unique,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(57)
		graphic = _g2;
		HX_STACK_LINE(58)
		graphic->assetsKey = Source;
		HX_STACK_LINE(59)
		return graphic;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxGraphic_obj,fromAssetKey,return )

::flixel::graphics::FlxGraphic FlxGraphic_obj::fromClass( ::Class Source,hx::Null< bool >  __o_Unique,::String Key,hx::Null< bool >  __o_Cache){
bool Unique = __o_Unique.Default(false);
bool Cache = __o_Cache.Default(true);
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","fromClass",0x5b653f67,"flixel.graphics.FlxGraphic.fromClass","flixel/graphics/FlxGraphic.hx",72,0xb3633517)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
	HX_STACK_ARG(Cache,"Cache")
{
		HX_STACK_LINE(73)
		::openfl::_v2::display::BitmapData bitmap = null();		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(74)
		if ((!(Cache))){
			HX_STACK_LINE(76)
			::openfl::_v2::display::BitmapData _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(76)
			{
				HX_STACK_LINE(76)
				::openfl::_v2::display::BitmapData bitmap1 = ::Type_obj::createInstance(Source,Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)0)));		HX_STACK_VAR(bitmap1,"bitmap1");
				HX_STACK_LINE(76)
				_g = bitmap1;
			}
			HX_STACK_LINE(76)
			bitmap = _g;
			HX_STACK_LINE(77)
			return ::flixel::graphics::FlxGraphic_obj::createGraphic(bitmap,Key,Unique,Cache);
		}
		HX_STACK_LINE(80)
		::String key = ::Type_obj::getClassName(Source);		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(81)
		::String _g1 = ::flixel::FlxG_obj::bitmap->generateKey(key,Key,Unique);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(81)
		key = _g1;
		HX_STACK_LINE(82)
		::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->get(key);		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(83)
		if (((graphic != null()))){
			HX_STACK_LINE(85)
			return graphic;
		}
		HX_STACK_LINE(88)
		::openfl::_v2::display::BitmapData _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			::openfl::_v2::display::BitmapData bitmap1 = ::Type_obj::createInstance(Source,Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)0)));		HX_STACK_VAR(bitmap1,"bitmap1");
			HX_STACK_LINE(88)
			_g2 = bitmap1;
		}
		HX_STACK_LINE(88)
		bitmap = _g2;
		HX_STACK_LINE(89)
		::flixel::graphics::FlxGraphic _g3 = ::flixel::graphics::FlxGraphic_obj::createGraphic(bitmap,key,Unique,null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(89)
		graphic = _g3;
		HX_STACK_LINE(90)
		graphic->assetsClass = Source;
		HX_STACK_LINE(91)
		return graphic;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxGraphic_obj,fromClass,return )

::flixel::graphics::FlxGraphic FlxGraphic_obj::fromBitmapData( ::openfl::_v2::display::BitmapData Source,hx::Null< bool >  __o_Unique,::String Key,hx::Null< bool >  __o_Cache){
bool Unique = __o_Unique.Default(false);
bool Cache = __o_Cache.Default(true);
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","fromBitmapData",0x64c8842a,"flixel.graphics.FlxGraphic.fromBitmapData","flixel/graphics/FlxGraphic.hx",104,0xb3633517)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
	HX_STACK_ARG(Cache,"Cache")
{
		HX_STACK_LINE(105)
		if ((!(Cache))){
			HX_STACK_LINE(107)
			return ::flixel::graphics::FlxGraphic_obj::createGraphic(Source,Key,Unique,Cache);
		}
		HX_STACK_LINE(110)
		::String key = ::flixel::FlxG_obj::bitmap->findKeyForBitmap(Source);		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(112)
		::String assetKey = null();		HX_STACK_VAR(assetKey,"assetKey");
		HX_STACK_LINE(113)
		::Class assetClass = null();		HX_STACK_VAR(assetClass,"assetClass");
		HX_STACK_LINE(114)
		::flixel::graphics::FlxGraphic graphic = null();		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(115)
		if (((key != null()))){
			HX_STACK_LINE(117)
			::flixel::graphics::FlxGraphic _g = ::flixel::FlxG_obj::bitmap->get(key);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(117)
			graphic = _g;
			HX_STACK_LINE(118)
			assetKey = graphic->assetsKey;
			HX_STACK_LINE(119)
			assetClass = graphic->assetsClass;
		}
		HX_STACK_LINE(122)
		::String _g1 = ::flixel::FlxG_obj::bitmap->generateKey(key,Key,Unique);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(122)
		key = _g1;
		HX_STACK_LINE(123)
		::flixel::graphics::FlxGraphic _g2 = ::flixel::FlxG_obj::bitmap->get(key);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(123)
		graphic = _g2;
		HX_STACK_LINE(124)
		if (((graphic != null()))){
			HX_STACK_LINE(126)
			return graphic;
		}
		HX_STACK_LINE(129)
		::flixel::graphics::FlxGraphic _g3 = ::flixel::graphics::FlxGraphic_obj::createGraphic(Source,key,Unique,null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(129)
		graphic = _g3;
		HX_STACK_LINE(130)
		graphic->assetsKey = assetKey;
		HX_STACK_LINE(131)
		graphic->assetsClass = assetClass;
		HX_STACK_LINE(132)
		return graphic;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxGraphic_obj,fromBitmapData,return )

::flixel::graphics::FlxGraphic FlxGraphic_obj::fromFrame( ::flixel::graphics::frames::FlxFrame Source,hx::Null< bool >  __o_Unique,::String Key){
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","fromFrame",0x19903f5c,"flixel.graphics.FlxGraphic.fromFrame","flixel/graphics/FlxGraphic.hx",145,0xb3633517)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(146)
		::String key = Source->name;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(147)
		if (((key == null()))){
			HX_STACK_LINE(149)
			::String _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(149)
			{
				HX_STACK_LINE(149)
				::flixel::math::FlxRect _this = Source->frame;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(149)
				::flixel::util::LabelValuePair _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(149)
				{
					HX_STACK_LINE(149)
					::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(149)
					_this1->label = HX_CSTRING("x");
					HX_STACK_LINE(149)
					_this1->value = _this->x;
					HX_STACK_LINE(149)
					_g = _this1;
				}
				HX_STACK_LINE(149)
				::flixel::util::LabelValuePair _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(149)
				{
					HX_STACK_LINE(149)
					::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(149)
					_this1->label = HX_CSTRING("y");
					HX_STACK_LINE(149)
					_this1->value = _this->y;
					HX_STACK_LINE(149)
					_g1 = _this1;
				}
				HX_STACK_LINE(149)
				::flixel::util::LabelValuePair _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(149)
				{
					HX_STACK_LINE(149)
					::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(149)
					_this1->label = HX_CSTRING("w");
					HX_STACK_LINE(149)
					_this1->value = _this->width;
					HX_STACK_LINE(149)
					_g2 = _this1;
				}
				HX_STACK_LINE(149)
				::flixel::util::LabelValuePair _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(149)
				{
					HX_STACK_LINE(149)
					::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(149)
					_this1->label = HX_CSTRING("h");
					HX_STACK_LINE(149)
					_this1->value = _this->height;
					HX_STACK_LINE(149)
					_g3 = _this1;
				}
				HX_STACK_LINE(149)
				Array< ::Dynamic > _g4 = Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1).Add(_g2).Add(_g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(149)
				_g5 = ::flixel::util::FlxStringUtil_obj::getDebugString(_g4);
			}
			HX_STACK_LINE(149)
			key = _g5;
		}
		HX_STACK_LINE(151)
		key = ((Source->parent->key + HX_CSTRING(":")) + key);
		HX_STACK_LINE(152)
		::String _g6 = ::flixel::FlxG_obj::bitmap->generateKey(key,Key,Unique);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(152)
		key = _g6;
		HX_STACK_LINE(153)
		::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->get(key);		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(154)
		if (((graphic != null()))){
			HX_STACK_LINE(156)
			return graphic;
		}
		HX_STACK_LINE(159)
		::openfl::_v2::display::BitmapData bitmap = Source->getBitmap()->clone();		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(160)
		::flixel::graphics::FlxGraphic _g7 = ::flixel::graphics::FlxGraphic_obj::createGraphic(bitmap,key,Unique,null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(160)
		graphic = _g7;
		HX_STACK_LINE(161)
		::flixel::graphics::frames::FlxImageFrame image = ::flixel::graphics::frames::FlxImageFrame_obj::fromGraphic(graphic,null());		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(162)
		image->frames->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxFrame >()->name = Source->name;
		HX_STACK_LINE(163)
		return graphic;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxGraphic_obj,fromFrame,return )

::flixel::graphics::FlxGraphic FlxGraphic_obj::fromFrames( ::flixel::graphics::frames::FlxFramesCollection Source,hx::Null< bool >  __o_Unique,::String Key){
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","fromFrames",0x44a73197,"flixel.graphics.FlxGraphic.fromFrames","flixel/graphics/FlxGraphic.hx",178,0xb3633517)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(178)
		return ::flixel::graphics::FlxGraphic_obj::fromGraphic(Source->parent,Unique,Key);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxGraphic_obj,fromFrames,return )

::flixel::graphics::FlxGraphic FlxGraphic_obj::fromGraphic( ::flixel::graphics::FlxGraphic Source,hx::Null< bool >  __o_Unique,::String Key){
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","fromGraphic",0xf9378b97,"flixel.graphics.FlxGraphic.fromGraphic","flixel/graphics/FlxGraphic.hx",191,0xb3633517)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(192)
		if ((!(Unique))){
			HX_STACK_LINE(194)
			return Source;
		}
		HX_STACK_LINE(197)
		::String key = ::flixel::FlxG_obj::bitmap->generateKey(Source->key,Key,Unique);		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(198)
		::flixel::graphics::FlxGraphic graphic = ::flixel::graphics::FlxGraphic_obj::createGraphic(Source->bitmap,key,Unique,null());		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(199)
		graphic->unique = Unique;
		HX_STACK_LINE(200)
		graphic->assetsClass = Source->assetsClass;
		HX_STACK_LINE(201)
		graphic->assetsKey = Source->assetsKey;
		HX_STACK_LINE(202)
		::flixel::system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(202)
		if ((!(_this->_cache->exists(graphic->key)))){
			HX_STACK_LINE(202)
			_this->_cache->set(graphic->key,graphic);
		}
		HX_STACK_LINE(202)
		return graphic;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxGraphic_obj,fromGraphic,return )

::flixel::graphics::FlxGraphic FlxGraphic_obj::fromRectangle( int Width,int Height,int Color,hx::Null< bool >  __o_Unique,::String Key){
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","fromRectangle",0x6fce5ede,"flixel.graphics.FlxGraphic.fromRectangle","flixel/graphics/FlxGraphic.hx",216,0xb3633517)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(217)
		::String _g = ::Std_obj::string(Color);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(217)
		::String systemKey = ((((Width + HX_CSTRING("x")) + Height) + HX_CSTRING(":")) + _g);		HX_STACK_VAR(systemKey,"systemKey");
		HX_STACK_LINE(218)
		::String key = ::flixel::FlxG_obj::bitmap->generateKey(systemKey,Key,Unique);		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(220)
		::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->get(key);		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(221)
		if (((graphic != null()))){
			HX_STACK_LINE(223)
			return graphic;
		}
		HX_STACK_LINE(226)
		::openfl::_v2::display::BitmapData bitmap = ::openfl::_v2::display::BitmapData_obj::__new(Width,Height,true,Color,null());		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(227)
		return ::flixel::graphics::FlxGraphic_obj::createGraphic(bitmap,key,null(),null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxGraphic_obj,fromRectangle,return )

::openfl::_v2::display::BitmapData FlxGraphic_obj::getBitmap( ::openfl::_v2::display::BitmapData Bitmap,hx::Null< bool >  __o_Unique){
bool Unique = __o_Unique.Default(false);
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","getBitmap",0xcbe6761e,"flixel.graphics.FlxGraphic.getBitmap","flixel/graphics/FlxGraphic.hx",240,0xb3633517)
	HX_STACK_ARG(Bitmap,"Bitmap")
	HX_STACK_ARG(Unique,"Unique")
{
		HX_STACK_LINE(240)
		if ((Unique)){
			HX_STACK_LINE(240)
			return Bitmap->clone();
		}
		else{
			HX_STACK_LINE(240)
			return Bitmap;
		}
		HX_STACK_LINE(240)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxGraphic_obj,getBitmap,return )

::flixel::graphics::FlxGraphic FlxGraphic_obj::createGraphic( ::openfl::_v2::display::BitmapData Bitmap,::String Key,hx::Null< bool >  __o_Unique,hx::Null< bool >  __o_Cache){
bool Unique = __o_Unique.Default(false);
bool Cache = __o_Cache.Default(true);
	HX_STACK_FRAME("flixel.graphics.FlxGraphic","createGraphic",0x3eb28085,"flixel.graphics.FlxGraphic.createGraphic","flixel/graphics/FlxGraphic.hx",253,0xb3633517)
	HX_STACK_ARG(Bitmap,"Bitmap")
	HX_STACK_ARG(Key,"Key")
	HX_STACK_ARG(Unique,"Unique")
	HX_STACK_ARG(Cache,"Cache")
{
		HX_STACK_LINE(254)
		::openfl::_v2::display::BitmapData _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(254)
		if ((Unique)){
			HX_STACK_LINE(254)
			_g = Bitmap->clone();
		}
		else{
			HX_STACK_LINE(254)
			_g = Bitmap;
		}
		HX_STACK_LINE(254)
		Bitmap = _g;
		HX_STACK_LINE(255)
		::flixel::graphics::FlxGraphic graphic = null();		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(257)
		if ((Cache)){
			HX_STACK_LINE(259)
			::flixel::graphics::FlxGraphic _g1 = ::flixel::graphics::FlxGraphic_obj::__new(Key,Bitmap,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(259)
			graphic = _g1;
			HX_STACK_LINE(260)
			graphic->unique = Unique;
			HX_STACK_LINE(261)
			{
				HX_STACK_LINE(261)
				::flixel::system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(261)
				if ((!(_this->_cache->exists(graphic->key)))){
					HX_STACK_LINE(261)
					_this->_cache->set(graphic->key,graphic);
				}
				HX_STACK_LINE(261)
				graphic;
			}
		}
		else{
			HX_STACK_LINE(265)
			::flixel::graphics::FlxGraphic _g2 = ::flixel::graphics::FlxGraphic_obj::__new(null(),Bitmap,null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(265)
			graphic = _g2;
		}
		HX_STACK_LINE(268)
		return graphic;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxGraphic_obj,createGraphic,return )


FlxGraphic_obj::FlxGraphic_obj()
{
}

void FlxGraphic_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGraphic);
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(assetsKey,"assetsKey");
	HX_MARK_MEMBER_NAME(assetsClass,"assetsClass");
	HX_MARK_MEMBER_NAME(persist,"persist");
	HX_MARK_MEMBER_NAME(isDumped,"isDumped");
	HX_MARK_MEMBER_NAME(tilesheet,"tilesheet");
	HX_MARK_MEMBER_NAME(imageFrame,"imageFrame");
	HX_MARK_MEMBER_NAME(atlasFrames,"atlasFrames");
	HX_MARK_MEMBER_NAME(frameCollections,"frameCollections");
	HX_MARK_MEMBER_NAME(frameCollectionTypes,"frameCollectionTypes");
	HX_MARK_MEMBER_NAME(unique,"unique");
	HX_MARK_MEMBER_NAME(_imageFrame,"_imageFrame");
	HX_MARK_MEMBER_NAME(_tilesheet,"_tilesheet");
	HX_MARK_MEMBER_NAME(_useCount,"_useCount");
	HX_MARK_MEMBER_NAME(_destroyOnNoUse,"_destroyOnNoUse");
	HX_MARK_END_CLASS();
}

void FlxGraphic_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(key,"key");
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(assetsKey,"assetsKey");
	HX_VISIT_MEMBER_NAME(assetsClass,"assetsClass");
	HX_VISIT_MEMBER_NAME(persist,"persist");
	HX_VISIT_MEMBER_NAME(isDumped,"isDumped");
	HX_VISIT_MEMBER_NAME(tilesheet,"tilesheet");
	HX_VISIT_MEMBER_NAME(imageFrame,"imageFrame");
	HX_VISIT_MEMBER_NAME(atlasFrames,"atlasFrames");
	HX_VISIT_MEMBER_NAME(frameCollections,"frameCollections");
	HX_VISIT_MEMBER_NAME(frameCollectionTypes,"frameCollectionTypes");
	HX_VISIT_MEMBER_NAME(unique,"unique");
	HX_VISIT_MEMBER_NAME(_imageFrame,"_imageFrame");
	HX_VISIT_MEMBER_NAME(_tilesheet,"_tilesheet");
	HX_VISIT_MEMBER_NAME(_useCount,"_useCount");
	HX_VISIT_MEMBER_NAME(_destroyOnNoUse,"_destroyOnNoUse");
}

Dynamic FlxGraphic_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return key; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"dump") ) { return dump_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return bitmap; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"unique") ) { return unique; }
		if (HX_FIELD_EQ(inName,"undump") ) { return undump_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"persist") ) { return persist; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isDumped") ) { return isDumped; }
		if (HX_FIELD_EQ(inName,"useCount") ) { return get_useCount(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromClass") ) { return fromClass_dyn(); }
		if (HX_FIELD_EQ(inName,"fromFrame") ) { return fromFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"getBitmap") ) { return getBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"assetsKey") ) { return assetsKey; }
		if (HX_FIELD_EQ(inName,"tilesheet") ) { return inCallProp ? get_tilesheet() : tilesheet; }
		if (HX_FIELD_EQ(inName,"_useCount") ) { return _useCount; }
		if (HX_FIELD_EQ(inName,"onContext") ) { return onContext_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromFrames") ) { return fromFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"imageFrame") ) { return inCallProp ? get_imageFrame() : imageFrame; }
		if (HX_FIELD_EQ(inName,"_tilesheet") ) { return _tilesheet; }
		if (HX_FIELD_EQ(inName,"set_bitmap") ) { return set_bitmap_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromGraphic") ) { return fromGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"assetsClass") ) { return assetsClass; }
		if (HX_FIELD_EQ(inName,"canBeDumped") ) { return get_canBeDumped(); }
		if (HX_FIELD_EQ(inName,"atlasFrames") ) { return atlasFrames; }
		if (HX_FIELD_EQ(inName,"_imageFrame") ) { return _imageFrame; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromAssetKey") ) { return fromAssetKey_dyn(); }
		if (HX_FIELD_EQ(inName,"get_useCount") ) { return get_useCount_dyn(); }
		if (HX_FIELD_EQ(inName,"set_useCount") ) { return set_useCount_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromRectangle") ) { return fromRectangle_dyn(); }
		if (HX_FIELD_EQ(inName,"createGraphic") ) { return createGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"getEmptyFrame") ) { return getEmptyFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tilesheet") ) { return get_tilesheet_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultPersist") ) { return defaultPersist; }
		if (HX_FIELD_EQ(inName,"fromBitmapData") ) { return fromBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"destroyOnNoUse") ) { return get_destroyOnNoUse(); }
		if (HX_FIELD_EQ(inName,"onAssetsReload") ) { return onAssetsReload_dyn(); }
		if (HX_FIELD_EQ(inName,"get_imageFrame") ) { return get_imageFrame_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_destroyOnNoUse") ) { return _destroyOnNoUse; }
		if (HX_FIELD_EQ(inName,"get_canBeDumped") ) { return get_canBeDumped_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"frameCollections") ) { return frameCollections; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resetFrameBitmaps") ) { return resetFrameBitmaps_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"addFrameCollection") ) { return addFrameCollection_dyn(); }
		if (HX_FIELD_EQ(inName,"get_destroyOnNoUse") ) { return get_destroyOnNoUse_dyn(); }
		if (HX_FIELD_EQ(inName,"set_destroyOnNoUse") ) { return set_destroyOnNoUse_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getBitmapFromSystem") ) { return getBitmapFromSystem_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"frameCollectionTypes") ) { return frameCollectionTypes; }
		if (HX_FIELD_EQ(inName,"getFramesCollections") ) { return getFramesCollections_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGraphic_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { if (inCallProp) return set_bitmap(inValue);bitmap=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"unique") ) { unique=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"persist") ) { persist=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isDumped") ) { isDumped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useCount") ) { return set_useCount(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetsKey") ) { assetsKey=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tilesheet") ) { tilesheet=inValue.Cast< ::flixel::graphics::tile::FlxTilesheet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_useCount") ) { _useCount=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"imageFrame") ) { imageFrame=inValue.Cast< ::flixel::graphics::frames::FlxImageFrame >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tilesheet") ) { _tilesheet=inValue.Cast< ::flixel::graphics::tile::FlxTilesheet >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"assetsClass") ) { assetsClass=inValue.Cast< ::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"atlasFrames") ) { atlasFrames=inValue.Cast< ::flixel::graphics::frames::FlxAtlasFrames >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_imageFrame") ) { _imageFrame=inValue.Cast< ::flixel::graphics::frames::FlxImageFrame >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultPersist") ) { defaultPersist=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"destroyOnNoUse") ) { return set_destroyOnNoUse(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_destroyOnNoUse") ) { _destroyOnNoUse=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"frameCollections") ) { frameCollections=inValue.Cast< ::haxe::ds::EnumValueMap >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"frameCollectionTypes") ) { frameCollectionTypes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGraphic_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("key"));
	outFields->push(HX_CSTRING("bitmap"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("assetsKey"));
	outFields->push(HX_CSTRING("assetsClass"));
	outFields->push(HX_CSTRING("persist"));
	outFields->push(HX_CSTRING("destroyOnNoUse"));
	outFields->push(HX_CSTRING("isDumped"));
	outFields->push(HX_CSTRING("canBeDumped"));
	outFields->push(HX_CSTRING("tilesheet"));
	outFields->push(HX_CSTRING("useCount"));
	outFields->push(HX_CSTRING("imageFrame"));
	outFields->push(HX_CSTRING("atlasFrames"));
	outFields->push(HX_CSTRING("frameCollections"));
	outFields->push(HX_CSTRING("frameCollectionTypes"));
	outFields->push(HX_CSTRING("unique"));
	outFields->push(HX_CSTRING("_imageFrame"));
	outFields->push(HX_CSTRING("_tilesheet"));
	outFields->push(HX_CSTRING("_useCount"));
	outFields->push(HX_CSTRING("_destroyOnNoUse"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("defaultPersist"),
	HX_CSTRING("fromAssetKey"),
	HX_CSTRING("fromClass"),
	HX_CSTRING("fromBitmapData"),
	HX_CSTRING("fromFrame"),
	HX_CSTRING("fromFrames"),
	HX_CSTRING("fromGraphic"),
	HX_CSTRING("fromRectangle"),
	HX_CSTRING("getBitmap"),
	HX_CSTRING("createGraphic"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(FlxGraphic_obj,key),HX_CSTRING("key")},
	{hx::fsObject /*::openfl::_v2::display::BitmapData*/ ,(int)offsetof(FlxGraphic_obj,bitmap),HX_CSTRING("bitmap")},
	{hx::fsInt,(int)offsetof(FlxGraphic_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(FlxGraphic_obj,height),HX_CSTRING("height")},
	{hx::fsString,(int)offsetof(FlxGraphic_obj,assetsKey),HX_CSTRING("assetsKey")},
	{hx::fsObject /*::Class*/ ,(int)offsetof(FlxGraphic_obj,assetsClass),HX_CSTRING("assetsClass")},
	{hx::fsBool,(int)offsetof(FlxGraphic_obj,persist),HX_CSTRING("persist")},
	{hx::fsBool,(int)offsetof(FlxGraphic_obj,isDumped),HX_CSTRING("isDumped")},
	{hx::fsObject /*::flixel::graphics::tile::FlxTilesheet*/ ,(int)offsetof(FlxGraphic_obj,tilesheet),HX_CSTRING("tilesheet")},
	{hx::fsObject /*::flixel::graphics::frames::FlxImageFrame*/ ,(int)offsetof(FlxGraphic_obj,imageFrame),HX_CSTRING("imageFrame")},
	{hx::fsObject /*::flixel::graphics::frames::FlxAtlasFrames*/ ,(int)offsetof(FlxGraphic_obj,atlasFrames),HX_CSTRING("atlasFrames")},
	{hx::fsObject /*::haxe::ds::EnumValueMap*/ ,(int)offsetof(FlxGraphic_obj,frameCollections),HX_CSTRING("frameCollections")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxGraphic_obj,frameCollectionTypes),HX_CSTRING("frameCollectionTypes")},
	{hx::fsBool,(int)offsetof(FlxGraphic_obj,unique),HX_CSTRING("unique")},
	{hx::fsObject /*::flixel::graphics::frames::FlxImageFrame*/ ,(int)offsetof(FlxGraphic_obj,_imageFrame),HX_CSTRING("_imageFrame")},
	{hx::fsObject /*::flixel::graphics::tile::FlxTilesheet*/ ,(int)offsetof(FlxGraphic_obj,_tilesheet),HX_CSTRING("_tilesheet")},
	{hx::fsInt,(int)offsetof(FlxGraphic_obj,_useCount),HX_CSTRING("_useCount")},
	{hx::fsBool,(int)offsetof(FlxGraphic_obj,_destroyOnNoUse),HX_CSTRING("_destroyOnNoUse")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("key"),
	HX_CSTRING("bitmap"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("assetsKey"),
	HX_CSTRING("assetsClass"),
	HX_CSTRING("persist"),
	HX_CSTRING("isDumped"),
	HX_CSTRING("tilesheet"),
	HX_CSTRING("imageFrame"),
	HX_CSTRING("atlasFrames"),
	HX_CSTRING("frameCollections"),
	HX_CSTRING("frameCollectionTypes"),
	HX_CSTRING("unique"),
	HX_CSTRING("_imageFrame"),
	HX_CSTRING("_tilesheet"),
	HX_CSTRING("_useCount"),
	HX_CSTRING("_destroyOnNoUse"),
	HX_CSTRING("dump"),
	HX_CSTRING("undump"),
	HX_CSTRING("onContext"),
	HX_CSTRING("onAssetsReload"),
	HX_CSTRING("destroy"),
	HX_CSTRING("resetFrameBitmaps"),
	HX_CSTRING("addFrameCollection"),
	HX_CSTRING("getFramesCollections"),
	HX_CSTRING("getEmptyFrame"),
	HX_CSTRING("get_tilesheet"),
	HX_CSTRING("getBitmapFromSystem"),
	HX_CSTRING("get_canBeDumped"),
	HX_CSTRING("get_useCount"),
	HX_CSTRING("set_useCount"),
	HX_CSTRING("get_destroyOnNoUse"),
	HX_CSTRING("set_destroyOnNoUse"),
	HX_CSTRING("get_imageFrame"),
	HX_CSTRING("set_bitmap"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGraphic_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxGraphic_obj::defaultPersist,"defaultPersist");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGraphic_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxGraphic_obj::defaultPersist,"defaultPersist");
};

#endif

Class FlxGraphic_obj::__mClass;

void FlxGraphic_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.graphics.FlxGraphic"), hx::TCanCast< FlxGraphic_obj> ,sStaticFields,sMemberFields,
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

void FlxGraphic_obj::__boot()
{
	defaultPersist= false;
}

} // end namespace flixel
} // end namespace graphics
