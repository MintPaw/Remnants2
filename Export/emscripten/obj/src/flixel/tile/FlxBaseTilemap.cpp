#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapAutoTiling
#include <flixel/tile/FlxTilemapAutoTiling.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__v2_AssetType
#include <openfl/_v2/AssetType.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
namespace flixel{
namespace tile{

Void FlxBaseTilemap_obj::__construct()
{
HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","new",0x601e788b,"flixel.tile.FlxBaseTilemap.new","flixel/tile/FlxBaseTilemap.hx",12,0x0139d8e5)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(76)
	this->_collideIndex = (int)0;
	HX_STACK_LINE(75)
	this->_drawIndex = (int)0;
	HX_STACK_LINE(69)
	this->_startingIndex = (int)0;
	HX_STACK_LINE(23)
	this->totalTiles = (int)0;
	HX_STACK_LINE(21)
	this->heightInTiles = (int)0;
	HX_STACK_LINE(19)
	this->widthInTiles = (int)0;
	HX_STACK_LINE(17)
	this->_auto = ::flixel::tile::FlxTilemapAutoTiling_obj::OFF;
	HX_STACK_LINE(137)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(139)
	this->flixelType = (int)3;
	HX_STACK_LINE(140)
	this->set_immovable(true);
	HX_STACK_LINE(141)
	this->set_moves(false);
}
;
	return null();
}

//FlxBaseTilemap_obj::~FlxBaseTilemap_obj() { }

Dynamic FlxBaseTilemap_obj::__CreateEmpty() { return  new FlxBaseTilemap_obj; }
hx::ObjectPtr< FlxBaseTilemap_obj > FlxBaseTilemap_obj::__new()
{  hx::ObjectPtr< FlxBaseTilemap_obj > result = new FlxBaseTilemap_obj();
	result->__construct();
	return result;}

Dynamic FlxBaseTilemap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBaseTilemap_obj > result = new FlxBaseTilemap_obj();
	result->__construct();
	return result;}

Void FlxBaseTilemap_obj::updateTile( int Index){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","updateTile",0x4985390c,"flixel.tile.FlxBaseTilemap.updateTile","flixel/tile/FlxBaseTilemap.hx",83,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Index,"Index")
		HX_STACK_LINE(83)
		HX_STACK_DO_THROW(HX_CSTRING("updateTile must be implemented"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,updateTile,(void))

Void FlxBaseTilemap_obj::cacheGraphics( int TileWidth,int TileHeight,Dynamic TileGraphic){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","cacheGraphics",0x589e0d18,"flixel.tile.FlxBaseTilemap.cacheGraphics","flixel/tile/FlxBaseTilemap.hx",88,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(TileWidth,"TileWidth")
		HX_STACK_ARG(TileHeight,"TileHeight")
		HX_STACK_ARG(TileGraphic,"TileGraphic")
		HX_STACK_LINE(88)
		HX_STACK_DO_THROW(HX_CSTRING("cacheGraphics must be implemented"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxBaseTilemap_obj,cacheGraphics,(void))

Void FlxBaseTilemap_obj::initTileObjects( ){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","initTileObjects",0x1ec17ac1,"flixel.tile.FlxBaseTilemap.initTileObjects","flixel/tile/FlxBaseTilemap.hx",93,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(93)
		HX_STACK_DO_THROW(HX_CSTRING("initTileObjects must be implemented"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,initTileObjects,(void))

Void FlxBaseTilemap_obj::updateMap( ){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","updateMap",0xe833827e,"flixel.tile.FlxBaseTilemap.updateMap","flixel/tile/FlxBaseTilemap.hx",98,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(98)
		HX_STACK_DO_THROW(HX_CSTRING("updateMap must be implemented"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,updateMap,(void))

Void FlxBaseTilemap_obj::computeDimensions( ){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","computeDimensions",0xc850220f,"flixel.tile.FlxBaseTilemap.computeDimensions","flixel/tile/FlxBaseTilemap.hx",103,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(103)
		HX_STACK_DO_THROW(HX_CSTRING("computeDimensions must be implemented"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,computeDimensions,(void))

int FlxBaseTilemap_obj::getTileIndexByCoords( ::flixel::math::FlxPoint Coord){
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","getTileIndexByCoords",0x5f0cf078,"flixel.tile.FlxBaseTilemap.getTileIndexByCoords","flixel/tile/FlxBaseTilemap.hx",107,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Coord,"Coord")
	HX_STACK_LINE(108)
	HX_STACK_DO_THROW(HX_CSTRING("getTileIndexByCoords must be implemented"));
	HX_STACK_LINE(109)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getTileIndexByCoords,return )

::flixel::math::FlxPoint FlxBaseTilemap_obj::getTileCoordsByIndex( int Index,hx::Null< bool >  __o_Midpoint){
bool Midpoint = __o_Midpoint.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","getTileCoordsByIndex",0x89a6db2e,"flixel.tile.FlxBaseTilemap.getTileCoordsByIndex","flixel/tile/FlxBaseTilemap.hx",113,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_ARG(Midpoint,"Midpoint")
{
		HX_STACK_LINE(114)
		HX_STACK_DO_THROW(HX_CSTRING("getTileCoordsByIndex must be implemented"));
		HX_STACK_LINE(115)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBaseTilemap_obj,getTileCoordsByIndex,return )

bool FlxBaseTilemap_obj::ray( ::flixel::math::FlxPoint Start,::flixel::math::FlxPoint End,::flixel::math::FlxPoint Result,hx::Null< Float >  __o_Resolution){
Float Resolution = __o_Resolution.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","ray",0x60217e15,"flixel.tile.FlxBaseTilemap.ray","flixel/tile/FlxBaseTilemap.hx",119,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Start,"Start")
	HX_STACK_ARG(End,"End")
	HX_STACK_ARG(Result,"Result")
	HX_STACK_ARG(Resolution,"Resolution")
{
		HX_STACK_LINE(120)
		HX_STACK_DO_THROW(HX_CSTRING("ray must be implemented"));
		HX_STACK_LINE(121)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,ray,return )

bool FlxBaseTilemap_obj::overlapsWithCallback( ::flixel::FlxObject Object,Dynamic Callback,hx::Null< bool >  __o_FlipCallbackParams,::flixel::math::FlxPoint Position){
bool FlipCallbackParams = __o_FlipCallbackParams.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","overlapsWithCallback",0x90f43a8c,"flixel.tile.FlxBaseTilemap.overlapsWithCallback","flixel/tile/FlxBaseTilemap.hx",125,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Callback,"Callback")
	HX_STACK_ARG(FlipCallbackParams,"FlipCallbackParams")
	HX_STACK_ARG(Position,"Position")
{
		HX_STACK_LINE(126)
		HX_STACK_DO_THROW(HX_CSTRING("overlapsWithCallback must be implemented"));
		HX_STACK_LINE(127)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,overlapsWithCallback,return )

Void FlxBaseTilemap_obj::setDirty( hx::Null< bool >  __o_Dirty){
bool Dirty = __o_Dirty.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","setDirty",0x31f19505,"flixel.tile.FlxBaseTilemap.setDirty","flixel/tile/FlxBaseTilemap.hx",132,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Dirty,"Dirty")
{
		HX_STACK_LINE(132)
		HX_STACK_DO_THROW(HX_CSTRING("setDirty must be implemented"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,setDirty,(void))

Void FlxBaseTilemap_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","destroy",0x44ffc6a5,"flixel.tile.FlxBaseTilemap.destroy","flixel/tile/FlxBaseTilemap.hx",145,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(146)
		this->_data = null();
		HX_STACK_LINE(147)
		this->super::destroy();
	}
return null();
}


::flixel::tile::FlxBaseTilemap FlxBaseTilemap_obj::loadMapFromCSV( ::String MapData,Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,::flixel::tile::FlxTilemapAutoTiling AutoTile,hx::Null< int >  __o_StartingIndex,hx::Null< int >  __o_DrawIndex,hx::Null< int >  __o_CollideIndex){
int TileWidth = __o_TileWidth.Default(0);
int TileHeight = __o_TileHeight.Default(0);
int StartingIndex = __o_StartingIndex.Default(0);
int DrawIndex = __o_DrawIndex.Default(1);
int CollideIndex = __o_CollideIndex.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","loadMapFromCSV",0xbac5ecbb,"flixel.tile.FlxBaseTilemap.loadMapFromCSV","flixel/tile/FlxBaseTilemap.hx",170,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(MapData,"MapData")
	HX_STACK_ARG(TileGraphic,"TileGraphic")
	HX_STACK_ARG(TileWidth,"TileWidth")
	HX_STACK_ARG(TileHeight,"TileHeight")
	HX_STACK_ARG(AutoTile,"AutoTile")
	HX_STACK_ARG(StartingIndex,"StartingIndex")
	HX_STACK_ARG(DrawIndex,"DrawIndex")
	HX_STACK_ARG(CollideIndex,"CollideIndex")
{
		HX_STACK_LINE(172)
		if ((::openfl::_v2::Assets_obj::exists(MapData,null()))){
			HX_STACK_LINE(174)
			::String _g = ::openfl::_v2::Assets_obj::getText(MapData);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(174)
			MapData = _g;
		}
		HX_STACK_LINE(178)
		Array< int > _g1 = Array_obj< int >::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(178)
		this->_data = _g1;
		HX_STACK_LINE(179)
		Array< ::String > columns;		HX_STACK_VAR(columns,"columns");
		HX_STACK_LINE(180)
		Array< ::String > rows = ::StringTools_obj::trim(MapData).split(HX_CSTRING("\n"));		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(181)
		this->heightInTiles = rows->length;
		HX_STACK_LINE(182)
		this->widthInTiles = (int)0;
		HX_STACK_LINE(183)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(184)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(186)
		while((true)){
			HX_STACK_LINE(186)
			if ((!(((row < this->heightInTiles))))){
				HX_STACK_LINE(186)
				break;
			}
			HX_STACK_LINE(188)
			int _g2 = (row)++;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(188)
			Array< ::String > _g3 = rows->__get(_g2).split(HX_CSTRING(","));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(188)
			columns = _g3;
			HX_STACK_LINE(190)
			if (((columns->length < (int)1))){
				HX_STACK_LINE(192)
				this->heightInTiles = (this->heightInTiles - (int)1);
				HX_STACK_LINE(193)
				continue;
			}
			HX_STACK_LINE(195)
			if (((this->widthInTiles == (int)0))){
				HX_STACK_LINE(197)
				this->widthInTiles = columns->length;
			}
			HX_STACK_LINE(199)
			column = (int)0;
			HX_STACK_LINE(201)
			while((true)){
				HX_STACK_LINE(201)
				if ((!(((column < this->widthInTiles))))){
					HX_STACK_LINE(201)
					break;
				}
				HX_STACK_LINE(204)
				int curTile = ::Std_obj::parseInt(columns->__get(column));		HX_STACK_VAR(curTile,"curTile");
				HX_STACK_LINE(206)
				if (((curTile < (int)0))){
					HX_STACK_LINE(209)
					curTile = (int)0;
				}
				HX_STACK_LINE(232)
				this->_data->push(curTile);
				HX_STACK_LINE(233)
				(column)++;
			}
		}
		HX_STACK_LINE(239)
		this->loadMapHelper(TileGraphic,TileWidth,TileHeight,AutoTile,StartingIndex,DrawIndex,CollideIndex);
		HX_STACK_LINE(240)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC8(FlxBaseTilemap_obj,loadMapFromCSV,return )

::flixel::tile::FlxBaseTilemap FlxBaseTilemap_obj::loadMapFromArray( Array< int > MapData,int WidthInTiles,int HeightInTiles,Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,::flixel::tile::FlxTilemapAutoTiling AutoTile,hx::Null< int >  __o_StartingIndex,hx::Null< int >  __o_DrawIndex,hx::Null< int >  __o_CollideIndex){
int TileWidth = __o_TileWidth.Default(0);
int TileHeight = __o_TileHeight.Default(0);
int StartingIndex = __o_StartingIndex.Default(0);
int DrawIndex = __o_DrawIndex.Default(1);
int CollideIndex = __o_CollideIndex.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","loadMapFromArray",0x576cd9ce,"flixel.tile.FlxBaseTilemap.loadMapFromArray","flixel/tile/FlxBaseTilemap.hx",265,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(MapData,"MapData")
	HX_STACK_ARG(WidthInTiles,"WidthInTiles")
	HX_STACK_ARG(HeightInTiles,"HeightInTiles")
	HX_STACK_ARG(TileGraphic,"TileGraphic")
	HX_STACK_ARG(TileWidth,"TileWidth")
	HX_STACK_ARG(TileHeight,"TileHeight")
	HX_STACK_ARG(AutoTile,"AutoTile")
	HX_STACK_ARG(StartingIndex,"StartingIndex")
	HX_STACK_ARG(DrawIndex,"DrawIndex")
	HX_STACK_ARG(CollideIndex,"CollideIndex")
{
		HX_STACK_LINE(266)
		this->widthInTiles = WidthInTiles;
		HX_STACK_LINE(267)
		this->heightInTiles = HeightInTiles;
		HX_STACK_LINE(268)
		Array< int > _g = MapData->copy();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(268)
		this->_data = _g;
		HX_STACK_LINE(270)
		this->loadMapHelper(TileGraphic,TileWidth,TileHeight,AutoTile,StartingIndex,DrawIndex,CollideIndex);
		HX_STACK_LINE(271)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC10(FlxBaseTilemap_obj,loadMapFromArray,return )

::flixel::tile::FlxBaseTilemap FlxBaseTilemap_obj::loadMapFrom2DArray( Array< ::Dynamic > MapData,Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,::flixel::tile::FlxTilemapAutoTiling AutoTile,hx::Null< int >  __o_StartingIndex,hx::Null< int >  __o_DrawIndex,hx::Null< int >  __o_CollideIndex){
int TileWidth = __o_TileWidth.Default(0);
int TileHeight = __o_TileHeight.Default(0);
int StartingIndex = __o_StartingIndex.Default(0);
int DrawIndex = __o_DrawIndex.Default(1);
int CollideIndex = __o_CollideIndex.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","loadMapFrom2DArray",0xb01a13fc,"flixel.tile.FlxBaseTilemap.loadMapFrom2DArray","flixel/tile/FlxBaseTilemap.hx",294,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(MapData,"MapData")
	HX_STACK_ARG(TileGraphic,"TileGraphic")
	HX_STACK_ARG(TileWidth,"TileWidth")
	HX_STACK_ARG(TileHeight,"TileHeight")
	HX_STACK_ARG(AutoTile,"AutoTile")
	HX_STACK_ARG(StartingIndex,"StartingIndex")
	HX_STACK_ARG(DrawIndex,"DrawIndex")
	HX_STACK_ARG(CollideIndex,"CollideIndex")
{
		HX_STACK_LINE(295)
		this->widthInTiles = MapData->__get((int)0).StaticCast< Array< int > >()->length;
		HX_STACK_LINE(296)
		this->heightInTiles = MapData->length;
		HX_STACK_LINE(297)
		Array< int > _g = ::flixel::util::FlxArrayUtil_obj::flatten2DArray_Int(MapData);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(297)
		this->_data = _g;
		HX_STACK_LINE(299)
		this->loadMapHelper(TileGraphic,TileWidth,TileHeight,AutoTile,StartingIndex,DrawIndex,CollideIndex);
		HX_STACK_LINE(300)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC8(FlxBaseTilemap_obj,loadMapFrom2DArray,return )

Void FlxBaseTilemap_obj::loadMapHelper( Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,::flixel::tile::FlxTilemapAutoTiling AutoTile,hx::Null< int >  __o_StartingIndex,hx::Null< int >  __o_DrawIndex,hx::Null< int >  __o_CollideIndex){
int TileWidth = __o_TileWidth.Default(0);
int TileHeight = __o_TileHeight.Default(0);
int StartingIndex = __o_StartingIndex.Default(0);
int DrawIndex = __o_DrawIndex.Default(1);
int CollideIndex = __o_CollideIndex.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","loadMapHelper",0xc59c560f,"flixel.tile.FlxBaseTilemap.loadMapHelper","flixel/tile/FlxBaseTilemap.hx",305,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TileGraphic,"TileGraphic")
	HX_STACK_ARG(TileWidth,"TileWidth")
	HX_STACK_ARG(TileHeight,"TileHeight")
	HX_STACK_ARG(AutoTile,"AutoTile")
	HX_STACK_ARG(StartingIndex,"StartingIndex")
	HX_STACK_ARG(DrawIndex,"DrawIndex")
	HX_STACK_ARG(CollideIndex,"CollideIndex")
{
		HX_STACK_LINE(306)
		this->totalTiles = this->_data->length;
		HX_STACK_LINE(307)
		if (((AutoTile == null()))){
			HX_STACK_LINE(307)
			this->_auto = ::flixel::tile::FlxTilemapAutoTiling_obj::OFF;
		}
		else{
			HX_STACK_LINE(307)
			this->_auto = AutoTile;
		}
		HX_STACK_LINE(308)
		if (((StartingIndex <= (int)0))){
			HX_STACK_LINE(308)
			this->_startingIndex = (int)0;
		}
		else{
			HX_STACK_LINE(308)
			this->_startingIndex = StartingIndex;
		}
		HX_STACK_LINE(310)
		if (((this->_auto != ::flixel::tile::FlxTilemapAutoTiling_obj::OFF))){
			HX_STACK_LINE(312)
			this->_startingIndex = (int)1;
			HX_STACK_LINE(313)
			DrawIndex = (int)1;
			HX_STACK_LINE(314)
			CollideIndex = (int)1;
		}
		HX_STACK_LINE(317)
		this->_drawIndex = DrawIndex;
		HX_STACK_LINE(318)
		this->_collideIndex = CollideIndex;
		HX_STACK_LINE(320)
		this->applyAutoTile();
		HX_STACK_LINE(321)
		this->applyCustomRemap();
		HX_STACK_LINE(322)
		this->randomizeIndices();
		HX_STACK_LINE(323)
		this->cacheGraphics(TileWidth,TileHeight,TileGraphic);
		HX_STACK_LINE(324)
		this->postGraphicLoad();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(FlxBaseTilemap_obj,loadMapHelper,(void))

Void FlxBaseTilemap_obj::postGraphicLoad( ){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","postGraphicLoad",0x0dc00119,"flixel.tile.FlxBaseTilemap.postGraphicLoad","flixel/tile/FlxBaseTilemap.hx",328,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(329)
		this->initTileObjects();
		HX_STACK_LINE(330)
		this->computeDimensions();
		HX_STACK_LINE(331)
		this->updateMap();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,postGraphicLoad,(void))

Void FlxBaseTilemap_obj::applyAutoTile( ){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","applyAutoTile",0xcc60c5b6,"flixel.tile.FlxBaseTilemap.applyAutoTile","flixel/tile/FlxBaseTilemap.hx",337,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(337)
		if (((this->_auto != ::flixel::tile::FlxTilemapAutoTiling_obj::OFF))){
			HX_STACK_LINE(339)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(340)
			while((true)){
				HX_STACK_LINE(340)
				if ((!(((i < this->totalTiles))))){
					HX_STACK_LINE(340)
					break;
				}
				HX_STACK_LINE(342)
				int _g = (i)++;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(342)
				this->autoTile(_g);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,applyAutoTile,(void))

Void FlxBaseTilemap_obj::applyCustomRemap( ){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","applyCustomRemap",0x2fd5c57f,"flixel.tile.FlxBaseTilemap.applyCustomRemap","flixel/tile/FlxBaseTilemap.hx",348,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(349)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(351)
		if (((this->customTileRemap != null()))){
			HX_STACK_LINE(353)
			while((true)){
				HX_STACK_LINE(353)
				if ((!(((i < this->totalTiles))))){
					HX_STACK_LINE(353)
					break;
				}
				HX_STACK_LINE(355)
				int oldIndex = this->_data->__get(i);		HX_STACK_VAR(oldIndex,"oldIndex");
				HX_STACK_LINE(356)
				int newIndex = oldIndex;		HX_STACK_VAR(newIndex,"newIndex");
				HX_STACK_LINE(357)
				if (((oldIndex < this->customTileRemap->length))){
					HX_STACK_LINE(359)
					newIndex = this->customTileRemap->__get(oldIndex);
				}
				HX_STACK_LINE(361)
				this->_data[i] = newIndex;
				HX_STACK_LINE(362)
				(i)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,applyCustomRemap,(void))

Void FlxBaseTilemap_obj::randomizeIndices( ){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","randomizeIndices",0x9015e6eb,"flixel.tile.FlxBaseTilemap.randomizeIndices","flixel/tile/FlxBaseTilemap.hx",368,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(369)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(371)
		if (((this->_randomIndices != null()))){
			HX_STACK_LINE(373)
			Dynamic randLambda;		HX_STACK_VAR(randLambda,"randLambda");
			HX_STACK_LINE(373)
			if (((this->_randomLambda_dyn() != null()))){
				HX_STACK_LINE(373)
				randLambda = this->_randomLambda_dyn();
			}
			else{

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				Float run(){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","flixel/tile/FlxBaseTilemap.hx",374,0x0139d8e5)
					{
						HX_STACK_LINE(374)
						return ::flixel::FlxG_obj::random->_float(null(),null(),null());
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(373)
				randLambda =  Dynamic(new _Function_3_1());
			}
			HX_STACK_LINE(377)
			while((true)){
				HX_STACK_LINE(377)
				if ((!(((i < this->totalTiles))))){
					HX_STACK_LINE(377)
					break;
				}
				HX_STACK_LINE(379)
				int oldIndex = this->_data->__get(i);		HX_STACK_VAR(oldIndex,"oldIndex");
				HX_STACK_LINE(380)
				int j = (int)0;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(381)
				int newIndex = oldIndex;		HX_STACK_VAR(newIndex,"newIndex");
				HX_STACK_LINE(382)
				{
					HX_STACK_LINE(382)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(382)
					Array< int > _g1 = this->_randomIndices;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(382)
					while((true)){
						HX_STACK_LINE(382)
						if ((!(((_g < _g1->length))))){
							HX_STACK_LINE(382)
							break;
						}
						HX_STACK_LINE(382)
						int rand = _g1->__get(_g);		HX_STACK_VAR(rand,"rand");
						HX_STACK_LINE(382)
						++(_g);
						HX_STACK_LINE(384)
						if (((oldIndex == rand))){
							HX_STACK_LINE(386)
							Float _g2 = randLambda().Cast< Float >();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(386)
							Float _g11 = (_g2 * this->_randomChoices->__get(j).StaticCast< Array< int > >()->length);		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(386)
							int k = ::Std_obj::_int(_g11);		HX_STACK_VAR(k,"k");
							HX_STACK_LINE(387)
							newIndex = this->_randomChoices->__get(j).StaticCast< Array< int > >()->__get(k);
						}
						HX_STACK_LINE(389)
						(j)++;
					}
				}
				HX_STACK_LINE(391)
				this->_data[i] = newIndex;
				HX_STACK_LINE(392)
				(i)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,randomizeIndices,(void))

Void FlxBaseTilemap_obj::autoTile( int Index){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","autoTile",0x7a0f9632,"flixel.tile.FlxBaseTilemap.autoTile","flixel/tile/FlxBaseTilemap.hx",403,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Index,"Index")
		HX_STACK_LINE(404)
		if (((this->_data->__get(Index) == (int)0))){
			HX_STACK_LINE(406)
			return null();
		}
		HX_STACK_LINE(409)
		this->_data[Index] = (int)0;
		HX_STACK_LINE(412)
		if (((bool(((Index - this->widthInTiles) < (int)0)) || bool((this->_data->__get((Index - this->widthInTiles)) > (int)0))))){
			HX_STACK_LINE(414)
			hx::AddEq(this->_data[Index],(int)1);
		}
		HX_STACK_LINE(417)
		if (((bool((hx::Mod(Index,this->widthInTiles) >= (this->widthInTiles - (int)1))) || bool((this->_data->__get((Index + (int)1)) > (int)0))))){
			HX_STACK_LINE(419)
			hx::AddEq(this->_data[Index],(int)2);
		}
		HX_STACK_LINE(422)
		int _g = ::Std_obj::_int((Index + this->widthInTiles));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(422)
		if (((  ((!(((_g >= this->totalTiles))))) ? bool((this->_data->__get((Index + this->widthInTiles)) > (int)0)) : bool(true) ))){
			HX_STACK_LINE(424)
			hx::AddEq(this->_data[Index],(int)4);
		}
		HX_STACK_LINE(427)
		if (((bool((hx::Mod(Index,this->widthInTiles) <= (int)0)) || bool((this->_data->__get((Index - (int)1)) > (int)0))))){
			HX_STACK_LINE(429)
			hx::AddEq(this->_data[Index],(int)8);
		}
		HX_STACK_LINE(433)
		if (((bool((this->_auto == ::flixel::tile::FlxTilemapAutoTiling_obj::ALT)) && bool((this->_data->__get(Index) == (int)15))))){
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::tile::FlxBaseTilemap_obj > __this,int &Index){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxBaseTilemap.hx",436,0x0139d8e5)
					{
						HX_STACK_LINE(436)
						int _g1 = ::Std_obj::_int((Index + __this->widthInTiles));		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(436)
						return (_g1 < __this->totalTiles);
					}
					return null();
				}
			};
			HX_STACK_LINE(436)
			if (((  (((  (((hx::Mod(Index,this->widthInTiles) > (int)0))) ? bool(_Function_2_1::Block(this,Index)) : bool(false) ))) ? bool((this->_data->__get(((Index + this->widthInTiles) - (int)1)) <= (int)0)) : bool(false) ))){
				HX_STACK_LINE(438)
				this->_data[Index] = (int)1;
			}
			HX_STACK_LINE(441)
			if (((bool((bool((hx::Mod(Index,this->widthInTiles) > (int)0)) && bool(((Index - this->widthInTiles) >= (int)0)))) && bool((this->_data->__get(((Index - this->widthInTiles) - (int)1)) <= (int)0))))){
				HX_STACK_LINE(443)
				this->_data[Index] = (int)2;
			}
			HX_STACK_LINE(446)
			if (((bool((bool((hx::Mod(Index,this->widthInTiles) < (this->widthInTiles - (int)1))) && bool(((Index - this->widthInTiles) >= (int)0)))) && bool((this->_data->__get(((Index - this->widthInTiles) + (int)1)) <= (int)0))))){
				HX_STACK_LINE(448)
				this->_data[Index] = (int)4;
			}
			struct _Function_2_2{
				inline static bool Block( hx::ObjectPtr< ::flixel::tile::FlxBaseTilemap_obj > __this,int &Index){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxBaseTilemap.hx",451,0x0139d8e5)
					{
						HX_STACK_LINE(451)
						int _g2 = ::Std_obj::_int((Index + __this->widthInTiles));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(451)
						return (_g2 < __this->totalTiles);
					}
					return null();
				}
			};
			HX_STACK_LINE(451)
			if (((  (((  (((hx::Mod(Index,this->widthInTiles) < (this->widthInTiles - (int)1)))) ? bool(_Function_2_2::Block(this,Index)) : bool(false) ))) ? bool((this->_data->__get(((Index + this->widthInTiles) + (int)1)) <= (int)0)) : bool(false) ))){
				HX_STACK_LINE(453)
				this->_data[Index] = (int)8;
			}
		}
		HX_STACK_LINE(457)
		hx::AddEq(this->_data[Index],(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,autoTile,(void))

Void FlxBaseTilemap_obj::setCustomTileMappings( Array< int > mappings,Array< int > randomIndices,Array< ::Dynamic > randomChoices,Dynamic randomLambda){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","setCustomTileMappings",0x91d80f71,"flixel.tile.FlxBaseTilemap.setCustomTileMappings","flixel/tile/FlxBaseTilemap.hx",470,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mappings,"mappings")
		HX_STACK_ARG(randomIndices,"randomIndices")
		HX_STACK_ARG(randomChoices,"randomChoices")
		HX_STACK_ARG(randomLambda,"randomLambda")
		HX_STACK_LINE(471)
		this->customTileRemap = mappings;
		HX_STACK_LINE(472)
		this->_randomIndices = randomIndices;
		HX_STACK_LINE(473)
		this->_randomChoices = randomChoices;
		HX_STACK_LINE(474)
		this->_randomLambda = randomLambda;
		HX_STACK_LINE(477)
		if (((bool((this->_randomIndices != null())) && bool(((bool((this->_randomChoices == null())) || bool((this->_randomChoices->length == (int)0)))))))){
			HX_STACK_LINE(479)
			HX_STACK_DO_THROW(HX_CSTRING("You must provide valid 'randomChoices' if you wish to randomize tilemap indicies, please read documentation of 'setCustomTileMappings' function."));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,setCustomTileMappings,(void))

int FlxBaseTilemap_obj::getTile( int X,int Y){
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","getTile",0x3ff9148f,"flixel.tile.FlxBaseTilemap.getTile","flixel/tile/FlxBaseTilemap.hx",492,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_LINE(492)
	return this->_data->__get(((Y * this->widthInTiles) + X));
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBaseTilemap_obj,getTile,return )

int FlxBaseTilemap_obj::getTileByIndex( int Index){
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","getTileByIndex",0xf0387cec,"flixel.tile.FlxBaseTilemap.getTileByIndex","flixel/tile/FlxBaseTilemap.hx",503,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(503)
	return this->_data->__get(Index);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getTileByIndex,return )

int FlxBaseTilemap_obj::getTileCollisions( int Index){
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","getTileCollisions",0x9ca1bd30,"flixel.tile.FlxBaseTilemap.getTileCollisions","flixel/tile/FlxBaseTilemap.hx",514,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(514)
	return this->_tileObjects->__GetItem(Index)->__Field(HX_CSTRING("allowCollisions"),true);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getTileCollisions,return )

Array< int > FlxBaseTilemap_obj::getTileInstances( int Index){
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","getTileInstances",0xa0cac4af,"flixel.tile.FlxBaseTilemap.getTileInstances","flixel/tile/FlxBaseTilemap.hx",524,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(525)
	Array< int > array = null();		HX_STACK_VAR(array,"array");
	HX_STACK_LINE(526)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(527)
	int l = (this->widthInTiles * this->heightInTiles);		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(529)
	while((true)){
		HX_STACK_LINE(529)
		if ((!(((i < l))))){
			HX_STACK_LINE(529)
			break;
		}
		HX_STACK_LINE(531)
		if (((this->_data->__get(i) == Index))){
			HX_STACK_LINE(533)
			if (((array == null()))){
				HX_STACK_LINE(535)
				array = Array_obj< int >::__new();
			}
			HX_STACK_LINE(537)
			array->push(i);
		}
		HX_STACK_LINE(539)
		(i)++;
	}
	HX_STACK_LINE(542)
	return array;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getTileInstances,return )

bool FlxBaseTilemap_obj::setTile( int X,int Y,int Tile,hx::Null< bool >  __o_UpdateGraphics){
bool UpdateGraphics = __o_UpdateGraphics.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","setTile",0x32faa59b,"flixel.tile.FlxBaseTilemap.setTile","flixel/tile/FlxBaseTilemap.hx",555,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Tile,"Tile")
	HX_STACK_ARG(UpdateGraphics,"UpdateGraphics")
{
		HX_STACK_LINE(556)
		if (((bool((X >= this->widthInTiles)) || bool((Y >= this->heightInTiles))))){
			HX_STACK_LINE(558)
			return false;
		}
		HX_STACK_LINE(561)
		return this->setTileByIndex(((Y * this->widthInTiles) + X),Tile,UpdateGraphics);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,setTile,return )

bool FlxBaseTilemap_obj::setTileByIndex( int Index,int Tile,hx::Null< bool >  __o_UpdateGraphics){
bool UpdateGraphics = __o_UpdateGraphics.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","setTileByIndex",0x10586560,"flixel.tile.FlxBaseTilemap.setTileByIndex","flixel/tile/FlxBaseTilemap.hx",573,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_ARG(Tile,"Tile")
	HX_STACK_ARG(UpdateGraphics,"UpdateGraphics")
{
		HX_STACK_LINE(574)
		if (((Index >= this->_data->length))){
			HX_STACK_LINE(576)
			return false;
		}
		HX_STACK_LINE(579)
		bool ok = true;		HX_STACK_VAR(ok,"ok");
		HX_STACK_LINE(580)
		this->_data[Index] = Tile;
		HX_STACK_LINE(582)
		if ((!(UpdateGraphics))){
			HX_STACK_LINE(584)
			return ok;
		}
		HX_STACK_LINE(587)
		this->setDirty(null());
		HX_STACK_LINE(589)
		if (((this->_auto == ::flixel::tile::FlxTilemapAutoTiling_obj::OFF))){
			HX_STACK_LINE(591)
			this->updateTile(this->_data->__get(Index));
			HX_STACK_LINE(592)
			return ok;
		}
		HX_STACK_LINE(596)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(597)
		int _g = ::Std_obj::_int((Float(Index) / Float(this->widthInTiles)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(597)
		int row = (_g - (int)1);		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(598)
		int rowLength = (row + (int)3);		HX_STACK_VAR(rowLength,"rowLength");
		HX_STACK_LINE(599)
		int column = (hx::Mod(Index,this->widthInTiles) - (int)1);		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(600)
		int columnHeight = (column + (int)3);		HX_STACK_VAR(columnHeight,"columnHeight");
		HX_STACK_LINE(602)
		while((true)){
			HX_STACK_LINE(602)
			if ((!(((row < rowLength))))){
				HX_STACK_LINE(602)
				break;
			}
			HX_STACK_LINE(604)
			column = (columnHeight - (int)3);
			HX_STACK_LINE(606)
			while((true)){
				HX_STACK_LINE(606)
				if ((!(((column < columnHeight))))){
					HX_STACK_LINE(606)
					break;
				}
				HX_STACK_LINE(608)
				if (((bool((bool((bool((row >= (int)0)) && bool((row < this->heightInTiles)))) && bool((column >= (int)0)))) && bool((column < this->widthInTiles))))){
					HX_STACK_LINE(610)
					i = ((row * this->widthInTiles) + column);
					HX_STACK_LINE(611)
					this->autoTile(i);
					HX_STACK_LINE(612)
					this->updateTile(this->_data->__get(i));
				}
				HX_STACK_LINE(614)
				(column)++;
			}
			HX_STACK_LINE(616)
			(row)++;
		}
		HX_STACK_LINE(619)
		return ok;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxBaseTilemap_obj,setTileByIndex,return )

Void FlxBaseTilemap_obj::setTileProperties( int Tile,hx::Null< int >  __o_AllowCollisions,Dynamic Callback,::Class CallbackFilter,hx::Null< int >  __o_Range){
int AllowCollisions = __o_AllowCollisions.Default(4369);
int Range = __o_Range.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","setTileProperties",0x2905d56e,"flixel.tile.FlxBaseTilemap.setTileProperties","flixel/tile/FlxBaseTilemap.hx",633,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tile,"Tile")
	HX_STACK_ARG(AllowCollisions,"AllowCollisions")
	HX_STACK_ARG(Callback,"Callback")
	HX_STACK_ARG(CallbackFilter,"CallbackFilter")
	HX_STACK_ARG(Range,"Range")
{
		HX_STACK_LINE(634)
		if (((Range <= (int)0))){
			HX_STACK_LINE(636)
			Range = (int)1;
		}
		HX_STACK_LINE(639)
		Dynamic tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(640)
		int i = Tile;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(641)
		int l = (Tile + Range);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(643)
		int maxIndex = this->_tileObjects->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(maxIndex,"maxIndex");
		HX_STACK_LINE(644)
		if (((l > maxIndex))){
			HX_STACK_LINE(646)
			HX_STACK_DO_THROW(((((((((HX_CSTRING("Index ") + l) + HX_CSTRING(" exceeds the maximum tile index of ")) + maxIndex) + HX_CSTRING(". Please verfiy the Tile (")) + Tile) + HX_CSTRING(") and Range (")) + Range) + HX_CSTRING(") parameters.")));
		}
		HX_STACK_LINE(649)
		while((true)){
			HX_STACK_LINE(649)
			if ((!(((i < l))))){
				HX_STACK_LINE(649)
				break;
			}
			HX_STACK_LINE(651)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(651)
			Dynamic _g1 = this->_tileObjects->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(651)
			tile = _g1;
			HX_STACK_LINE(652)
			tile->__FieldRef(HX_CSTRING("allowCollisions")) = AllowCollisions;
			HX_STACK_LINE(653)
			tile->__FieldRef(HX_CSTRING("callbackFunction")) = Callback;
			HX_STACK_LINE(654)
			tile->__FieldRef(HX_CSTRING("filter")) = CallbackFilter;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxBaseTilemap_obj,setTileProperties,(void))

Array< int > FlxBaseTilemap_obj::getData( hx::Null< bool >  __o_Simple){
bool Simple = __o_Simple.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","getData",0x355f9f8b,"flixel.tile.FlxBaseTilemap.getData","flixel/tile/FlxBaseTilemap.hx",666,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Simple,"Simple")
{
		HX_STACK_LINE(667)
		if ((!(Simple))){
			HX_STACK_LINE(669)
			return this->_data;
		}
		HX_STACK_LINE(672)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(673)
		int l = this->_data->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(674)
		Array< int > data = Array_obj< int >::__new();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(675)
		::flixel::util::FlxArrayUtil_obj::setLength_Int(data,l);
		HX_STACK_LINE(677)
		while((true)){
			HX_STACK_LINE(677)
			if ((!(((i < l))))){
				HX_STACK_LINE(677)
				break;
			}
			HX_STACK_LINE(679)
			if (((this->_tileObjects->__GetItem(this->_data->__get(i))->__Field(HX_CSTRING("allowCollisions"),true) > (int)0))){
				HX_STACK_LINE(679)
				data[i] = (int)1;
			}
			else{
				HX_STACK_LINE(679)
				data[i] = (int)0;
			}
			HX_STACK_LINE(680)
			(i)++;
		}
		HX_STACK_LINE(683)
		return data;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getData,return )

Array< ::Dynamic > FlxBaseTilemap_obj::findPath( ::flixel::math::FlxPoint Start,::flixel::math::FlxPoint End,hx::Null< bool >  __o_Simplify,hx::Null< bool >  __o_RaySimplify,hx::Null< bool >  __o_WideDiagonal){
bool Simplify = __o_Simplify.Default(true);
bool RaySimplify = __o_RaySimplify.Default(false);
bool WideDiagonal = __o_WideDiagonal.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","findPath",0xe6d2ce73,"flixel.tile.FlxBaseTilemap.findPath","flixel/tile/FlxBaseTilemap.hx",698,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Start,"Start")
	HX_STACK_ARG(End,"End")
	HX_STACK_ARG(Simplify,"Simplify")
	HX_STACK_ARG(RaySimplify,"RaySimplify")
	HX_STACK_ARG(WideDiagonal,"WideDiagonal")
{
		HX_STACK_LINE(700)
		int startIndex = this->getTileIndexByCoords(Start);		HX_STACK_VAR(startIndex,"startIndex");
		HX_STACK_LINE(701)
		int endIndex = this->getTileIndexByCoords(End);		HX_STACK_VAR(endIndex,"endIndex");
		HX_STACK_LINE(704)
		if (((bool((this->_tileObjects->__GetItem(this->_data->__get(startIndex))->__Field(HX_CSTRING("allowCollisions"),true) > (int)0)) || bool((this->_tileObjects->__GetItem(this->_data->__get(endIndex))->__Field(HX_CSTRING("allowCollisions"),true) > (int)0))))){
			HX_STACK_LINE(706)
			return null();
		}
		HX_STACK_LINE(710)
		Array< int > distances = this->computePathDistance(startIndex,endIndex,WideDiagonal,null());		HX_STACK_VAR(distances,"distances");
		HX_STACK_LINE(712)
		if (((distances == null()))){
			HX_STACK_LINE(714)
			return null();
		}
		HX_STACK_LINE(718)
		Array< ::Dynamic > points = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(719)
		this->walkPath(distances,endIndex,points);
		HX_STACK_LINE(722)
		::flixel::math::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(723)
		node = points->__get((points->length - (int)1)).StaticCast< ::flixel::math::FlxPoint >();
		HX_STACK_LINE(724)
		{
			HX_STACK_LINE(724)
			node->set_x(Start->x);
			HX_STACK_LINE(724)
			node->set_y(Start->y);
			HX_STACK_LINE(724)
			node;
		}
		HX_STACK_LINE(725)
		node = points->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();
		HX_STACK_LINE(726)
		{
			HX_STACK_LINE(726)
			node->set_x(End->x);
			HX_STACK_LINE(726)
			node->set_y(End->y);
			HX_STACK_LINE(726)
			node;
		}
		HX_STACK_LINE(729)
		if ((Simplify)){
			HX_STACK_LINE(731)
			this->simplifyPath(points);
		}
		HX_STACK_LINE(733)
		if ((RaySimplify)){
			HX_STACK_LINE(735)
			this->raySimplifyPath(points);
		}
		HX_STACK_LINE(739)
		Array< ::Dynamic > path = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(path,"path");
		HX_STACK_LINE(740)
		int i = (points->length - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(742)
		while((true)){
			HX_STACK_LINE(742)
			if ((!(((i >= (int)0))))){
				HX_STACK_LINE(742)
				break;
			}
			HX_STACK_LINE(744)
			int _g = (i)--;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(744)
			::flixel::math::FlxPoint _g1 = points->__get(_g).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(744)
			node = _g1;
			HX_STACK_LINE(746)
			if (((node != null()))){
				HX_STACK_LINE(748)
				path->push(node);
			}
		}
		HX_STACK_LINE(752)
		return path;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxBaseTilemap_obj,findPath,return )

Array< int > FlxBaseTilemap_obj::computePathDistance( int StartIndex,int EndIndex,bool WideDiagonal,hx::Null< bool >  __o_StopOnEnd){
bool StopOnEnd = __o_StopOnEnd.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","computePathDistance",0x34e53a3c,"flixel.tile.FlxBaseTilemap.computePathDistance","flixel/tile/FlxBaseTilemap.hx",766,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(StartIndex,"StartIndex")
	HX_STACK_ARG(EndIndex,"EndIndex")
	HX_STACK_ARG(WideDiagonal,"WideDiagonal")
	HX_STACK_ARG(StopOnEnd,"StopOnEnd")
{
		HX_STACK_LINE(769)
		int mapSize = (this->widthInTiles * this->heightInTiles);		HX_STACK_VAR(mapSize,"mapSize");
		HX_STACK_LINE(770)
		Array< int > distances = Array_obj< int >::__new();		HX_STACK_VAR(distances,"distances");
		HX_STACK_LINE(771)
		::flixel::util::FlxArrayUtil_obj::setLength_Int(distances,mapSize);
		HX_STACK_LINE(772)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(774)
		while((true)){
			HX_STACK_LINE(774)
			if ((!(((i < mapSize))))){
				HX_STACK_LINE(774)
				break;
			}
			HX_STACK_LINE(776)
			if (((this->_tileObjects->__GetItem(this->_data->__get(i))->__Field(HX_CSTRING("allowCollisions"),true) != (int)0))){
				HX_STACK_LINE(778)
				distances[i] = (int)-2;
			}
			else{
				HX_STACK_LINE(782)
				distances[i] = (int)-1;
			}
			HX_STACK_LINE(784)
			(i)++;
		}
		HX_STACK_LINE(787)
		distances[StartIndex] = (int)0;
		HX_STACK_LINE(788)
		int distance = (int)1;		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(789)
		Array< int > neighbors = Array_obj< int >::__new().Add(StartIndex);		HX_STACK_VAR(neighbors,"neighbors");
		HX_STACK_LINE(790)
		Array< int > current;		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(791)
		int currentIndex;		HX_STACK_VAR(currentIndex,"currentIndex");
		HX_STACK_LINE(792)
		bool left;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(793)
		bool right;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(794)
		bool up;		HX_STACK_VAR(up,"up");
		HX_STACK_LINE(795)
		bool down;		HX_STACK_VAR(down,"down");
		HX_STACK_LINE(796)
		int currentLength;		HX_STACK_VAR(currentLength,"currentLength");
		HX_STACK_LINE(797)
		bool foundEnd = false;		HX_STACK_VAR(foundEnd,"foundEnd");
		HX_STACK_LINE(799)
		while((true)){
			HX_STACK_LINE(799)
			if ((!(((neighbors->length > (int)0))))){
				HX_STACK_LINE(799)
				break;
			}
			HX_STACK_LINE(801)
			current = neighbors;
			HX_STACK_LINE(802)
			Array< int > _g = Array_obj< int >::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(802)
			neighbors = _g;
			HX_STACK_LINE(804)
			i = (int)0;
			HX_STACK_LINE(805)
			currentLength = current->length;
			HX_STACK_LINE(806)
			while((true)){
				HX_STACK_LINE(806)
				if ((!(((i < currentLength))))){
					HX_STACK_LINE(806)
					break;
				}
				HX_STACK_LINE(808)
				int _g1 = (i)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(808)
				int _g2 = current->__get(_g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(808)
				currentIndex = _g2;
				HX_STACK_LINE(810)
				int _g3 = ::Std_obj::_int(EndIndex);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(810)
				if (((currentIndex == _g3))){
					HX_STACK_LINE(812)
					foundEnd = true;
					HX_STACK_LINE(813)
					if ((StopOnEnd)){
						HX_STACK_LINE(815)
						neighbors = Array_obj< int >::__new();
						HX_STACK_LINE(816)
						break;
					}
				}
				HX_STACK_LINE(821)
				left = (hx::Mod(currentIndex,this->widthInTiles) > (int)0);
				HX_STACK_LINE(822)
				right = (hx::Mod(currentIndex,this->widthInTiles) < (this->widthInTiles - (int)1));
				HX_STACK_LINE(823)
				up = ((Float(currentIndex) / Float(this->widthInTiles)) > (int)0);
				HX_STACK_LINE(824)
				down = ((Float(currentIndex) / Float(this->widthInTiles)) < (this->heightInTiles - (int)1));
				HX_STACK_LINE(826)
				int index;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(828)
				if ((up)){
					HX_STACK_LINE(830)
					index = (currentIndex - this->widthInTiles);
					HX_STACK_LINE(832)
					if (((distances->__get(index) == (int)-1))){
						HX_STACK_LINE(834)
						distances[index] = distance;
						HX_STACK_LINE(835)
						neighbors->push(index);
					}
				}
				HX_STACK_LINE(838)
				if ((right)){
					HX_STACK_LINE(840)
					index = (currentIndex + (int)1);
					HX_STACK_LINE(842)
					if (((distances->__get(index) == (int)-1))){
						HX_STACK_LINE(844)
						distances[index] = distance;
						HX_STACK_LINE(845)
						neighbors->push(index);
					}
				}
				HX_STACK_LINE(848)
				if ((down)){
					HX_STACK_LINE(850)
					index = (currentIndex + this->widthInTiles);
					HX_STACK_LINE(852)
					if (((distances->__get(index) == (int)-1))){
						HX_STACK_LINE(854)
						distances[index] = distance;
						HX_STACK_LINE(855)
						neighbors->push(index);
					}
				}
				HX_STACK_LINE(858)
				if ((left)){
					HX_STACK_LINE(860)
					index = (currentIndex - (int)1);
					HX_STACK_LINE(862)
					if (((distances->__get(index) == (int)-1))){
						HX_STACK_LINE(864)
						distances[index] = distance;
						HX_STACK_LINE(865)
						neighbors->push(index);
					}
				}
				HX_STACK_LINE(868)
				if (((bool(up) && bool(right)))){
					HX_STACK_LINE(870)
					index = ((currentIndex - this->widthInTiles) + (int)1);
					HX_STACK_LINE(872)
					if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex - this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex + (int)1)) >= (int)-1))))){
						HX_STACK_LINE(874)
						distances[index] = distance;
						HX_STACK_LINE(875)
						neighbors->push(index);
					}
					else{
						HX_STACK_LINE(877)
						if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
							HX_STACK_LINE(879)
							distances[index] = distance;
							HX_STACK_LINE(880)
							neighbors->push(index);
						}
					}
				}
				HX_STACK_LINE(883)
				if (((bool(right) && bool(down)))){
					HX_STACK_LINE(885)
					index = ((currentIndex + this->widthInTiles) + (int)1);
					HX_STACK_LINE(887)
					if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex + this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex + (int)1)) >= (int)-1))))){
						HX_STACK_LINE(889)
						distances[index] = distance;
						HX_STACK_LINE(890)
						neighbors->push(index);
					}
					else{
						HX_STACK_LINE(892)
						if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
							HX_STACK_LINE(894)
							distances[index] = distance;
							HX_STACK_LINE(895)
							neighbors->push(index);
						}
					}
				}
				HX_STACK_LINE(898)
				if (((bool(left) && bool(down)))){
					HX_STACK_LINE(900)
					index = ((currentIndex + this->widthInTiles) - (int)1);
					HX_STACK_LINE(902)
					if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex + this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex - (int)1)) >= (int)-1))))){
						HX_STACK_LINE(904)
						distances[index] = distance;
						HX_STACK_LINE(905)
						neighbors->push(index);
					}
					else{
						HX_STACK_LINE(907)
						if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
							HX_STACK_LINE(909)
							distances[index] = distance;
							HX_STACK_LINE(910)
							neighbors->push(index);
						}
					}
				}
				HX_STACK_LINE(913)
				if (((bool(up) && bool(left)))){
					HX_STACK_LINE(915)
					index = ((currentIndex - this->widthInTiles) - (int)1);
					HX_STACK_LINE(917)
					if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex - this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex - (int)1)) >= (int)-1))))){
						HX_STACK_LINE(919)
						distances[index] = distance;
						HX_STACK_LINE(920)
						neighbors->push(index);
					}
					else{
						HX_STACK_LINE(922)
						if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
							HX_STACK_LINE(924)
							distances[index] = distance;
							HX_STACK_LINE(925)
							neighbors->push(index);
						}
					}
				}
			}
			HX_STACK_LINE(930)
			(distance)++;
		}
		HX_STACK_LINE(932)
		if ((!(foundEnd))){
			HX_STACK_LINE(934)
			distances = null();
		}
		HX_STACK_LINE(937)
		return distances;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,computePathDistance,return )

Void FlxBaseTilemap_obj::walkPath( Array< int > Data,int Start,Array< ::Dynamic > Points){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","walkPath",0xa1980343,"flixel.tile.FlxBaseTilemap.walkPath","flixel/tile/FlxBaseTilemap.hx",948,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Data,"Data")
		HX_STACK_ARG(Start,"Start")
		HX_STACK_ARG(Points,"Points")
		HX_STACK_LINE(949)
		::flixel::math::FlxPoint _g = this->getTileCoordsByIndex(Start,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(949)
		Points->push(_g);
		HX_STACK_LINE(951)
		if (((Data->__get(Start) == (int)0))){
			HX_STACK_LINE(953)
			return null();
		}
		HX_STACK_LINE(957)
		bool left = (hx::Mod(Start,this->widthInTiles) > (int)0);		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(958)
		bool right = (hx::Mod(Start,this->widthInTiles) < (this->widthInTiles - (int)1));		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(959)
		bool up = ((Float(Start) / Float(this->widthInTiles)) > (int)0);		HX_STACK_VAR(up,"up");
		HX_STACK_LINE(960)
		bool down = ((Float(Start) / Float(this->widthInTiles)) < (this->heightInTiles - (int)1));		HX_STACK_VAR(down,"down");
		HX_STACK_LINE(962)
		int current = Data->__get(Start);		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(963)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(965)
		if ((up)){
			HX_STACK_LINE(967)
			i = (Start - this->widthInTiles);
			HX_STACK_LINE(969)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(971)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(974)
		if ((right)){
			HX_STACK_LINE(976)
			i = (Start + (int)1);
			HX_STACK_LINE(978)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(980)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(983)
		if ((down)){
			HX_STACK_LINE(985)
			i = (Start + this->widthInTiles);
			HX_STACK_LINE(987)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(989)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(992)
		if ((left)){
			HX_STACK_LINE(994)
			i = (Start - (int)1);
			HX_STACK_LINE(996)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(998)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(1001)
		if (((bool(up) && bool(right)))){
			HX_STACK_LINE(1003)
			i = ((Start - this->widthInTiles) + (int)1);
			HX_STACK_LINE(1005)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1007)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(1010)
		if (((bool(right) && bool(down)))){
			HX_STACK_LINE(1012)
			i = ((Start + this->widthInTiles) + (int)1);
			HX_STACK_LINE(1014)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1016)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(1019)
		if (((bool(left) && bool(down)))){
			HX_STACK_LINE(1021)
			i = ((Start + this->widthInTiles) - (int)1);
			HX_STACK_LINE(1023)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1025)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(1028)
		if (((bool(up) && bool(left)))){
			HX_STACK_LINE(1030)
			i = ((Start - this->widthInTiles) - (int)1);
			HX_STACK_LINE(1032)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1034)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(1038)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxBaseTilemap_obj,walkPath,(void))

Void FlxBaseTilemap_obj::simplifyPath( Array< ::Dynamic > Points){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","simplifyPath",0xe8519bc3,"flixel.tile.FlxBaseTilemap.simplifyPath","flixel/tile/FlxBaseTilemap.hx",1047,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Points,"Points")
		HX_STACK_LINE(1048)
		Float deltaPrevious;		HX_STACK_VAR(deltaPrevious,"deltaPrevious");
		HX_STACK_LINE(1049)
		Float deltaNext;		HX_STACK_VAR(deltaNext,"deltaNext");
		HX_STACK_LINE(1050)
		::flixel::math::FlxPoint last = Points->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(1051)
		::flixel::math::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(1052)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1053)
		int l = (Points->length - (int)1);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1055)
		while((true)){
			HX_STACK_LINE(1055)
			if ((!(((i < l))))){
				HX_STACK_LINE(1055)
				break;
			}
			HX_STACK_LINE(1057)
			node = Points->__get(i).StaticCast< ::flixel::math::FlxPoint >();
			HX_STACK_LINE(1058)
			deltaPrevious = (Float(((node->x - last->x))) / Float(((node->y - last->y))));
			HX_STACK_LINE(1059)
			deltaNext = (Float(((node->x - Points->__get((i + (int)1)).StaticCast< ::flixel::math::FlxPoint >()->x))) / Float(((node->y - Points->__get((i + (int)1)).StaticCast< ::flixel::math::FlxPoint >()->y))));
			HX_STACK_LINE(1061)
			if (((bool((bool((last->x == Points->__get((i + (int)1)).StaticCast< ::flixel::math::FlxPoint >()->x)) || bool((last->y == Points->__get((i + (int)1)).StaticCast< ::flixel::math::FlxPoint >()->y)))) || bool((deltaPrevious == deltaNext))))){
				HX_STACK_LINE(1063)
				Points[i] = null();
			}
			else{
				HX_STACK_LINE(1067)
				last = node;
			}
			HX_STACK_LINE(1070)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,simplifyPath,(void))

Void FlxBaseTilemap_obj::raySimplifyPath( Array< ::Dynamic > Points){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","raySimplifyPath",0x32723703,"flixel.tile.FlxBaseTilemap.raySimplifyPath","flixel/tile/FlxBaseTilemap.hx",1080,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Points,"Points")
		HX_STACK_LINE(1081)
		::flixel::math::FlxPoint source = Points->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(1082)
		int lastIndex = (int)-1;		HX_STACK_VAR(lastIndex,"lastIndex");
		HX_STACK_LINE(1083)
		::flixel::math::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(1084)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1085)
		int l = Points->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1087)
		while((true)){
			HX_STACK_LINE(1087)
			if ((!(((i < l))))){
				HX_STACK_LINE(1087)
				break;
			}
			HX_STACK_LINE(1089)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1089)
			::flixel::math::FlxPoint _g1 = Points->__get(_g).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1089)
			node = _g1;
			HX_STACK_LINE(1091)
			if (((node == null()))){
				HX_STACK_LINE(1093)
				continue;
			}
			HX_STACK_LINE(1096)
			if ((this->ray(source,node,this->_point,null()))){
				HX_STACK_LINE(1098)
				if (((lastIndex >= (int)0))){
					HX_STACK_LINE(1100)
					Points[lastIndex] = null();
				}
			}
			else{
				HX_STACK_LINE(1105)
				source = Points->__get(lastIndex).StaticCast< ::flixel::math::FlxPoint >();
			}
			HX_STACK_LINE(1108)
			lastIndex = (i - (int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,raySimplifyPath,(void))

bool FlxBaseTilemap_obj::overlaps( ::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","overlaps",0x8f17af01,"flixel.tile.FlxBaseTilemap.overlaps","flixel/tile/FlxBaseTilemap.hx",1123,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(1124)
		::flixel::group::FlxTypedGroup group;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(1124)
		{
			HX_STACK_LINE(1124)
			::flixel::group::FlxTypedGroup group1 = null();		HX_STACK_VAR(group1,"group1");
			HX_STACK_LINE(1124)
			if (((ObjectOrGroup != null()))){
				HX_STACK_LINE(1124)
				if (((ObjectOrGroup->flixelType == (int)2))){
					HX_STACK_LINE(1124)
					group1 = ObjectOrGroup;
				}
				else{
					HX_STACK_LINE(1124)
					if (((ObjectOrGroup->flixelType == (int)4))){
						HX_STACK_LINE(1124)
						group1 = (hx::TCast< flixel::group::FlxTypedSpriteGroup >::cast(ObjectOrGroup))->group;
					}
				}
			}
			HX_STACK_LINE(1124)
			group = group1;
		}
		HX_STACK_LINE(1125)
		if (((group != null()))){
			HX_STACK_LINE(1127)
			Dynamic Callback = this->tilemapOverlapsCallback_dyn();		HX_STACK_VAR(Callback,"Callback");
			HX_STACK_LINE(1127)
			bool result = false;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(1127)
			if (((group != null()))){
				HX_STACK_LINE(1127)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1127)
				int l = group->length;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(1127)
				::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
				HX_STACK_LINE(1127)
				while((true)){
					HX_STACK_LINE(1127)
					if ((!(((i < l))))){
						HX_STACK_LINE(1127)
						break;
					}
					HX_STACK_LINE(1127)
					int _g = (i)++;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1127)
					::flixel::FlxBasic _g1 = group->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1127)
					basic = _g1;
					HX_STACK_LINE(1127)
					if (((  (((basic != null()))) ? bool(Callback(basic,(int)0,(int)0,InScreenSpace,Camera).Cast< bool >()) : bool(false) ))){
						HX_STACK_LINE(1127)
						result = true;
						HX_STACK_LINE(1127)
						break;
					}
				}
			}
			HX_STACK_LINE(1127)
			return result;
		}
		else{
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::tile::FlxBaseTilemap_obj > __this,::flixel::FlxBasic &ObjectOrGroup){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxBaseTilemap.hx",1129,0x0139d8e5)
					{
						HX_STACK_LINE(1129)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(1129)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(1129)
						bool InScreenSpace1 = false;		HX_STACK_VAR(InScreenSpace1,"InScreenSpace1");
						struct _Function_3_1{
							inline static bool Block( hx::ObjectPtr< ::flixel::tile::FlxBaseTilemap_obj > __this,::flixel::FlxBasic &ObjectOrGroup){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxBaseTilemap.hx",1129,0x0139d8e5)
								{
									HX_STACK_LINE(1129)
									::flixel::FlxObject _g2;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1129)
									_g2 = hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup);
									HX_STACK_LINE(1129)
									return __this->overlapsWithCallback(_g2,null(),null(),null());
								}
								return null();
							}
						};
						HX_STACK_LINE(1129)
						return (  (((bool((ObjectOrGroup->flixelType == (int)1)) || bool((ObjectOrGroup->flixelType == (int)3))))) ? bool(_Function_3_1::Block(__this,ObjectOrGroup)) : bool(__this->overlaps(ObjectOrGroup,InScreenSpace1,null())) );
					}
					return null();
				}
			};
			HX_STACK_LINE(1129)
			if ((_Function_2_1::Block(this,ObjectOrGroup))){
				HX_STACK_LINE(1131)
				return true;
			}
		}
		HX_STACK_LINE(1133)
		return false;
	}
}


bool FlxBaseTilemap_obj::tilemapOverlapsCallback( ::flixel::FlxBasic ObjectOrGroup,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","tilemapOverlapsCallback",0x40d17cea,"flixel.tile.FlxBaseTilemap.tilemapOverlapsCallback","flixel/tile/FlxBaseTilemap.hx",1138,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(1138)
		if (((bool((ObjectOrGroup->flixelType == (int)1)) || bool((ObjectOrGroup->flixelType == (int)3))))){
			HX_STACK_LINE(1141)
			::flixel::FlxObject _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1141)
			_g = hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup);
			HX_STACK_LINE(1141)
			return this->overlapsWithCallback(_g,null(),null(),null());
		}
		else{
			HX_STACK_LINE(1145)
			return this->overlaps(ObjectOrGroup,InScreenSpace,Camera);
		}
		HX_STACK_LINE(1138)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxBaseTilemap_obj,tilemapOverlapsCallback,return )

bool FlxBaseTilemap_obj::overlapsAt( Float X,Float Y,::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","overlapsAt",0x47a26a54,"flixel.tile.FlxBaseTilemap.overlapsAt","flixel/tile/FlxBaseTilemap.hx",1162,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(1163)
		::flixel::group::FlxTypedGroup group;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(1163)
		{
			HX_STACK_LINE(1163)
			::flixel::group::FlxTypedGroup group1 = null();		HX_STACK_VAR(group1,"group1");
			HX_STACK_LINE(1163)
			if (((ObjectOrGroup != null()))){
				HX_STACK_LINE(1163)
				if (((ObjectOrGroup->flixelType == (int)2))){
					HX_STACK_LINE(1163)
					group1 = ObjectOrGroup;
				}
				else{
					HX_STACK_LINE(1163)
					if (((ObjectOrGroup->flixelType == (int)4))){
						HX_STACK_LINE(1163)
						group1 = (hx::TCast< flixel::group::FlxTypedSpriteGroup >::cast(ObjectOrGroup))->group;
					}
				}
			}
			HX_STACK_LINE(1163)
			group = group1;
		}
		HX_STACK_LINE(1164)
		if (((group != null()))){
			HX_STACK_LINE(1166)
			Dynamic Callback = this->tilemapOverlapsAtCallback_dyn();		HX_STACK_VAR(Callback,"Callback");
			HX_STACK_LINE(1166)
			bool result = false;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(1166)
			if (((group != null()))){
				HX_STACK_LINE(1166)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1166)
				int l = group->length;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(1166)
				::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
				HX_STACK_LINE(1166)
				while((true)){
					HX_STACK_LINE(1166)
					if ((!(((i < l))))){
						HX_STACK_LINE(1166)
						break;
					}
					HX_STACK_LINE(1166)
					int _g = (i)++;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1166)
					::flixel::FlxBasic _g1 = group->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1166)
					basic = _g1;
					HX_STACK_LINE(1166)
					if (((  (((basic != null()))) ? bool(Callback(basic,X,Y,InScreenSpace,Camera).Cast< bool >()) : bool(false) ))){
						HX_STACK_LINE(1166)
						result = true;
						HX_STACK_LINE(1166)
						break;
					}
				}
			}
			HX_STACK_LINE(1166)
			return result;
		}
		else{
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::tile::FlxBaseTilemap_obj > __this,Float &Y,::flixel::FlxBasic &ObjectOrGroup,Float &X){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxBaseTilemap.hx",1168,0x0139d8e5)
					{
						HX_STACK_LINE(1168)
						::flixel::FlxObject _g2;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1168)
						_g2 = hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup);
						HX_STACK_LINE(1168)
						::flixel::math::FlxPoint _g3 = __this->_point->set(X,Y);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1168)
						return __this->overlapsWithCallback(_g2,null(),false,_g3);
					}
					return null();
				}
			};
			HX_STACK_LINE(1168)
			if (((  (((bool((ObjectOrGroup->flixelType == (int)1)) || bool((ObjectOrGroup->flixelType == (int)3))))) ? bool(_Function_2_1::Block(this,Y,ObjectOrGroup,X)) : bool(this->overlapsAt(X,Y,ObjectOrGroup,InScreenSpace,Camera)) ))){
				HX_STACK_LINE(1170)
				return true;
			}
		}
		HX_STACK_LINE(1173)
		return false;
	}
}


bool FlxBaseTilemap_obj::tilemapOverlapsAtCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","tilemapOverlapsAtCallback",0xbef90c3d,"flixel.tile.FlxBaseTilemap.tilemapOverlapsAtCallback","flixel/tile/FlxBaseTilemap.hx",1178,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(1178)
	if (((bool((ObjectOrGroup->flixelType == (int)1)) || bool((ObjectOrGroup->flixelType == (int)3))))){
		HX_STACK_LINE(1181)
		::flixel::FlxObject _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1181)
		_g = hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup);
		HX_STACK_LINE(1181)
		::flixel::math::FlxPoint _g1 = this->_point->set(X,Y);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1181)
		return this->overlapsWithCallback(_g,null(),false,_g1);
	}
	else{
		HX_STACK_LINE(1185)
		return this->overlapsAt(X,Y,ObjectOrGroup,InScreenSpace,Camera);
	}
	HX_STACK_LINE(1178)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC5(FlxBaseTilemap_obj,tilemapOverlapsAtCallback,return )

bool FlxBaseTilemap_obj::overlapsPoint( ::flixel::math::FlxPoint WorldPoint,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","overlapsPoint",0x91c6718f,"flixel.tile.FlxBaseTilemap.overlapsPoint","flixel/tile/FlxBaseTilemap.hx",1198,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(WorldPoint,"WorldPoint")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(1199)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(1201)
			return (this->_tileObjects->__GetItem(this->_data->__get(this->getTileIndexByCoords(WorldPoint)))->__Field(HX_CSTRING("allowCollisions"),true) > (int)0);
		}
		HX_STACK_LINE(1204)
		if (((Camera == null()))){
			HX_STACK_LINE(1206)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(1209)
		WorldPoint->subtractPoint(Camera->scroll);
		HX_STACK_LINE(1211)
		bool result = (this->_tileObjects->__GetItem(this->_data->__get(this->getTileIndexByCoords(WorldPoint)))->__Field(HX_CSTRING("allowCollisions"),true) > (int)0);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(1212)
		if ((WorldPoint->_weak)){
			HX_STACK_LINE(1212)
			WorldPoint->put();
		}
		HX_STACK_LINE(1213)
		return result;
	}
}


::flixel::math::FlxRect FlxBaseTilemap_obj::getBounds( ::flixel::math::FlxRect Bounds){
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","getBounds",0x47c7aa16,"flixel.tile.FlxBaseTilemap.getBounds","flixel/tile/FlxBaseTilemap.hx",1223,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Bounds,"Bounds")
	HX_STACK_LINE(1224)
	if (((Bounds == null()))){
		HX_STACK_LINE(1226)
		::flixel::math::FlxRect _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1226)
		{
			HX_STACK_LINE(1226)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(1226)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(1226)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(1226)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(1226)
			::flixel::math::FlxRect rect;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(1226)
			{
				HX_STACK_LINE(1226)
				::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1226)
				_this->x = X;
				HX_STACK_LINE(1226)
				_this->y = Y;
				HX_STACK_LINE(1226)
				_this->width = Width;
				HX_STACK_LINE(1226)
				_this->height = Height;
				HX_STACK_LINE(1226)
				rect = _this;
			}
			HX_STACK_LINE(1226)
			rect->_inPool = false;
			HX_STACK_LINE(1226)
			_g = rect;
		}
		HX_STACK_LINE(1226)
		Bounds = _g;
	}
	HX_STACK_LINE(1229)
	Float Width = this->get_width();		HX_STACK_VAR(Width,"Width");
	HX_STACK_LINE(1229)
	Float Height = this->get_height();		HX_STACK_VAR(Height,"Height");
	HX_STACK_LINE(1229)
	Bounds->x = this->x;
	HX_STACK_LINE(1229)
	Bounds->y = this->y;
	HX_STACK_LINE(1229)
	Bounds->width = Width;
	HX_STACK_LINE(1229)
	Bounds->height = Height;
	HX_STACK_LINE(1229)
	return Bounds;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getBounds,return )


FlxBaseTilemap_obj::FlxBaseTilemap_obj()
{
}

void FlxBaseTilemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBaseTilemap);
	HX_MARK_MEMBER_NAME(_auto,"auto");
	HX_MARK_MEMBER_NAME(widthInTiles,"widthInTiles");
	HX_MARK_MEMBER_NAME(heightInTiles,"heightInTiles");
	HX_MARK_MEMBER_NAME(totalTiles,"totalTiles");
	HX_MARK_MEMBER_NAME(customTileRemap,"customTileRemap");
	HX_MARK_MEMBER_NAME(_randomIndices,"_randomIndices");
	HX_MARK_MEMBER_NAME(_randomChoices,"_randomChoices");
	HX_MARK_MEMBER_NAME(_randomLambda,"_randomLambda");
	HX_MARK_MEMBER_NAME(_tileObjects,"_tileObjects");
	HX_MARK_MEMBER_NAME(_startingIndex,"_startingIndex");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_drawIndex,"_drawIndex");
	HX_MARK_MEMBER_NAME(_collideIndex,"_collideIndex");
	::flixel::FlxObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxBaseTilemap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_auto,"auto");
	HX_VISIT_MEMBER_NAME(widthInTiles,"widthInTiles");
	HX_VISIT_MEMBER_NAME(heightInTiles,"heightInTiles");
	HX_VISIT_MEMBER_NAME(totalTiles,"totalTiles");
	HX_VISIT_MEMBER_NAME(customTileRemap,"customTileRemap");
	HX_VISIT_MEMBER_NAME(_randomIndices,"_randomIndices");
	HX_VISIT_MEMBER_NAME(_randomChoices,"_randomChoices");
	HX_VISIT_MEMBER_NAME(_randomLambda,"_randomLambda");
	HX_VISIT_MEMBER_NAME(_tileObjects,"_tileObjects");
	HX_VISIT_MEMBER_NAME(_startingIndex,"_startingIndex");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_drawIndex,"_drawIndex");
	HX_VISIT_MEMBER_NAME(_collideIndex,"_collideIndex");
	::flixel::FlxObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxBaseTilemap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { return ray_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"auto") ) { return _auto; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"getTile") ) { return getTile_dyn(); }
		if (HX_FIELD_EQ(inName,"setTile") ) { return setTile_dyn(); }
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setDirty") ) { return setDirty_dyn(); }
		if (HX_FIELD_EQ(inName,"autoTile") ) { return autoTile_dyn(); }
		if (HX_FIELD_EQ(inName,"findPath") ) { return findPath_dyn(); }
		if (HX_FIELD_EQ(inName,"walkPath") ) { return walkPath_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"updateMap") ) { return updateMap_dyn(); }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return getBounds_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"totalTiles") ) { return totalTiles; }
		if (HX_FIELD_EQ(inName,"_drawIndex") ) { return _drawIndex; }
		if (HX_FIELD_EQ(inName,"updateTile") ) { return updateTile_dyn(); }
		if (HX_FIELD_EQ(inName,"overlapsAt") ) { return overlapsAt_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { return widthInTiles; }
		if (HX_FIELD_EQ(inName,"_tileObjects") ) { return _tileObjects; }
		if (HX_FIELD_EQ(inName,"simplifyPath") ) { return simplifyPath_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { return heightInTiles; }
		if (HX_FIELD_EQ(inName,"_randomLambda") ) { return _randomLambda; }
		if (HX_FIELD_EQ(inName,"_collideIndex") ) { return _collideIndex; }
		if (HX_FIELD_EQ(inName,"cacheGraphics") ) { return cacheGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"loadMapHelper") ) { return loadMapHelper_dyn(); }
		if (HX_FIELD_EQ(inName,"applyAutoTile") ) { return applyAutoTile_dyn(); }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return overlapsPoint_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_randomIndices") ) { return _randomIndices; }
		if (HX_FIELD_EQ(inName,"_randomChoices") ) { return _randomChoices; }
		if (HX_FIELD_EQ(inName,"_startingIndex") ) { return _startingIndex; }
		if (HX_FIELD_EQ(inName,"loadMapFromCSV") ) { return loadMapFromCSV_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileByIndex") ) { return getTileByIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"setTileByIndex") ) { return setTileByIndex_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"customTileRemap") ) { return customTileRemap; }
		if (HX_FIELD_EQ(inName,"initTileObjects") ) { return initTileObjects_dyn(); }
		if (HX_FIELD_EQ(inName,"postGraphicLoad") ) { return postGraphicLoad_dyn(); }
		if (HX_FIELD_EQ(inName,"raySimplifyPath") ) { return raySimplifyPath_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"loadMapFromArray") ) { return loadMapFromArray_dyn(); }
		if (HX_FIELD_EQ(inName,"applyCustomRemap") ) { return applyCustomRemap_dyn(); }
		if (HX_FIELD_EQ(inName,"randomizeIndices") ) { return randomizeIndices_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileInstances") ) { return getTileInstances_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"computeDimensions") ) { return computeDimensions_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileCollisions") ) { return getTileCollisions_dyn(); }
		if (HX_FIELD_EQ(inName,"setTileProperties") ) { return setTileProperties_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadMapFrom2DArray") ) { return loadMapFrom2DArray_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"computePathDistance") ) { return computePathDistance_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getTileIndexByCoords") ) { return getTileIndexByCoords_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileCoordsByIndex") ) { return getTileCoordsByIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"overlapsWithCallback") ) { return overlapsWithCallback_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setCustomTileMappings") ) { return setCustomTileMappings_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"tilemapOverlapsCallback") ) { return tilemapOverlapsCallback_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"tilemapOverlapsAtCallback") ) { return tilemapOverlapsAtCallback_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBaseTilemap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"auto") ) { _auto=inValue.Cast< ::flixel::tile::FlxTilemapAutoTiling >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"totalTiles") ) { totalTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_drawIndex") ) { _drawIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { widthInTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileObjects") ) { _tileObjects=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { heightInTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_randomLambda") ) { _randomLambda=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_collideIndex") ) { _collideIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_randomIndices") ) { _randomIndices=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_randomChoices") ) { _randomChoices=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startingIndex") ) { _startingIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"customTileRemap") ) { customTileRemap=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBaseTilemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("auto"));
	outFields->push(HX_CSTRING("widthInTiles"));
	outFields->push(HX_CSTRING("heightInTiles"));
	outFields->push(HX_CSTRING("totalTiles"));
	outFields->push(HX_CSTRING("customTileRemap"));
	outFields->push(HX_CSTRING("_randomIndices"));
	outFields->push(HX_CSTRING("_randomChoices"));
	outFields->push(HX_CSTRING("_tileObjects"));
	outFields->push(HX_CSTRING("_startingIndex"));
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("_drawIndex"));
	outFields->push(HX_CSTRING("_collideIndex"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::tile::FlxTilemapAutoTiling*/ ,(int)offsetof(FlxBaseTilemap_obj,_auto),HX_CSTRING("auto")},
	{hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,widthInTiles),HX_CSTRING("widthInTiles")},
	{hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,heightInTiles),HX_CSTRING("heightInTiles")},
	{hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,totalTiles),HX_CSTRING("totalTiles")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxBaseTilemap_obj,customTileRemap),HX_CSTRING("customTileRemap")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxBaseTilemap_obj,_randomIndices),HX_CSTRING("_randomIndices")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxBaseTilemap_obj,_randomChoices),HX_CSTRING("_randomChoices")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxBaseTilemap_obj,_randomLambda),HX_CSTRING("_randomLambda")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxBaseTilemap_obj,_tileObjects),HX_CSTRING("_tileObjects")},
	{hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,_startingIndex),HX_CSTRING("_startingIndex")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxBaseTilemap_obj,_data),HX_CSTRING("_data")},
	{hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,_drawIndex),HX_CSTRING("_drawIndex")},
	{hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,_collideIndex),HX_CSTRING("_collideIndex")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("auto"),
	HX_CSTRING("widthInTiles"),
	HX_CSTRING("heightInTiles"),
	HX_CSTRING("totalTiles"),
	HX_CSTRING("customTileRemap"),
	HX_CSTRING("_randomIndices"),
	HX_CSTRING("_randomChoices"),
	HX_CSTRING("_randomLambda"),
	HX_CSTRING("_tileObjects"),
	HX_CSTRING("_startingIndex"),
	HX_CSTRING("_data"),
	HX_CSTRING("_drawIndex"),
	HX_CSTRING("_collideIndex"),
	HX_CSTRING("updateTile"),
	HX_CSTRING("cacheGraphics"),
	HX_CSTRING("initTileObjects"),
	HX_CSTRING("updateMap"),
	HX_CSTRING("computeDimensions"),
	HX_CSTRING("getTileIndexByCoords"),
	HX_CSTRING("getTileCoordsByIndex"),
	HX_CSTRING("ray"),
	HX_CSTRING("overlapsWithCallback"),
	HX_CSTRING("setDirty"),
	HX_CSTRING("destroy"),
	HX_CSTRING("loadMapFromCSV"),
	HX_CSTRING("loadMapFromArray"),
	HX_CSTRING("loadMapFrom2DArray"),
	HX_CSTRING("loadMapHelper"),
	HX_CSTRING("postGraphicLoad"),
	HX_CSTRING("applyAutoTile"),
	HX_CSTRING("applyCustomRemap"),
	HX_CSTRING("randomizeIndices"),
	HX_CSTRING("autoTile"),
	HX_CSTRING("setCustomTileMappings"),
	HX_CSTRING("getTile"),
	HX_CSTRING("getTileByIndex"),
	HX_CSTRING("getTileCollisions"),
	HX_CSTRING("getTileInstances"),
	HX_CSTRING("setTile"),
	HX_CSTRING("setTileByIndex"),
	HX_CSTRING("setTileProperties"),
	HX_CSTRING("getData"),
	HX_CSTRING("findPath"),
	HX_CSTRING("computePathDistance"),
	HX_CSTRING("walkPath"),
	HX_CSTRING("simplifyPath"),
	HX_CSTRING("raySimplifyPath"),
	HX_CSTRING("overlaps"),
	HX_CSTRING("tilemapOverlapsCallback"),
	HX_CSTRING("overlapsAt"),
	HX_CSTRING("tilemapOverlapsAtCallback"),
	HX_CSTRING("overlapsPoint"),
	HX_CSTRING("getBounds"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBaseTilemap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBaseTilemap_obj::__mClass,"__mClass");
};

#endif

Class FlxBaseTilemap_obj::__mClass;

void FlxBaseTilemap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tile.FlxBaseTilemap"), hx::TCanCast< FlxBaseTilemap_obj> ,sStaticFields,sMemberFields,
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

void FlxBaseTilemap_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tile
