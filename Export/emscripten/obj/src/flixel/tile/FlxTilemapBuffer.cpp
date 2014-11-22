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
#ifndef INCLUDED_flixel_tile_FlxTilemapBuffer
#include <flixel/tile/FlxTilemapBuffer.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace tile{

Void FlxTilemapBuffer_obj::__construct(int TileWidth,int TileHeight,int WidthInTiles,int HeightInTiles,::flixel::FlxCamera Camera,hx::Null< Float >  __o_ScaleX,hx::Null< Float >  __o_ScaleY)
{
HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","new",0x92818fbc,"flixel.tile.FlxTilemapBuffer.new","flixel/tile/FlxTilemapBuffer.hx",18,0x56d29ad4)
HX_STACK_THIS(this)
HX_STACK_ARG(TileWidth,"TileWidth")
HX_STACK_ARG(TileHeight,"TileHeight")
HX_STACK_ARG(WidthInTiles,"WidthInTiles")
HX_STACK_ARG(HeightInTiles,"HeightInTiles")
HX_STACK_ARG(Camera,"Camera")
HX_STACK_ARG(__o_ScaleX,"ScaleX")
HX_STACK_ARG(__o_ScaleY,"ScaleY")
Float ScaleX = __o_ScaleX.Default(1.0);
Float ScaleY = __o_ScaleY.Default(1.0);
{
	HX_STACK_LINE(47)
	this->columns = (int)0;
	HX_STACK_LINE(43)
	this->rows = (int)0;
	HX_STACK_LINE(39)
	this->dirty = false;
	HX_STACK_LINE(35)
	this->height = (int)0;
	HX_STACK_LINE(31)
	this->width = (int)0;
	HX_STACK_LINE(27)
	this->y = (int)0;
	HX_STACK_LINE(23)
	this->x = (int)0;
	HX_STACK_LINE(79)
	this->updateColumns(TileWidth,WidthInTiles,ScaleX,Camera);
	HX_STACK_LINE(80)
	this->updateRows(TileHeight,HeightInTiles,ScaleY,Camera);
	HX_STACK_LINE(88)
	this->dirty = true;
}
;
	return null();
}

//FlxTilemapBuffer_obj::~FlxTilemapBuffer_obj() { }

Dynamic FlxTilemapBuffer_obj::__CreateEmpty() { return  new FlxTilemapBuffer_obj; }
hx::ObjectPtr< FlxTilemapBuffer_obj > FlxTilemapBuffer_obj::__new(int TileWidth,int TileHeight,int WidthInTiles,int HeightInTiles,::flixel::FlxCamera Camera,hx::Null< Float >  __o_ScaleX,hx::Null< Float >  __o_ScaleY)
{  hx::ObjectPtr< FlxTilemapBuffer_obj > result = new FlxTilemapBuffer_obj();
	result->__construct(TileWidth,TileHeight,WidthInTiles,HeightInTiles,Camera,__o_ScaleX,__o_ScaleY);
	return result;}

Dynamic FlxTilemapBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTilemapBuffer_obj > result = new FlxTilemapBuffer_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

hx::Object *FlxTilemapBuffer_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

Void FlxTilemapBuffer_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","destroy",0x52dcca56,"flixel.tile.FlxTilemapBuffer.destroy","flixel/tile/FlxTilemapBuffer.hx",95,0x56d29ad4)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemapBuffer_obj,destroy,(void))

Void FlxTilemapBuffer_obj::updateColumns( int TileWidth,int WidthInTiles,hx::Null< Float >  __o_ScaleX,::flixel::FlxCamera Camera){
Float ScaleX = __o_ScaleX.Default(1.0);
	HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","updateColumns",0xed291c30,"flixel.tile.FlxTilemapBuffer.updateColumns","flixel/tile/FlxTilemapBuffer.hx",149,0x56d29ad4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TileWidth,"TileWidth")
	HX_STACK_ARG(WidthInTiles,"WidthInTiles")
	HX_STACK_ARG(ScaleX,"ScaleX")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(150)
		if (((WidthInTiles < (int)0))){
			HX_STACK_LINE(152)
			WidthInTiles = (int)0;
		}
		HX_STACK_LINE(155)
		if (((Camera == null()))){
			HX_STACK_LINE(157)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(160)
		int _g = ::Math_obj::ceil((Float(Camera->width) / Float(((TileWidth * ScaleX)))));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(160)
		int _g1 = (_g + (int)1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(160)
		this->columns = _g1;
		HX_STACK_LINE(162)
		if (((this->columns > WidthInTiles))){
			HX_STACK_LINE(164)
			this->columns = WidthInTiles;
		}
		HX_STACK_LINE(167)
		int _g2 = ::Std_obj::_int(((this->columns * TileWidth) * ScaleX));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(167)
		this->width = _g2;
		HX_STACK_LINE(169)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemapBuffer_obj,updateColumns,(void))

Void FlxTilemapBuffer_obj::updateRows( int TileHeight,int HeightInTiles,hx::Null< Float >  __o_ScaleY,::flixel::FlxCamera Camera){
Float ScaleY = __o_ScaleY.Default(1.0);
	HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","updateRows",0xf31d03e6,"flixel.tile.FlxTilemapBuffer.updateRows","flixel/tile/FlxTilemapBuffer.hx",173,0x56d29ad4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TileHeight,"TileHeight")
	HX_STACK_ARG(HeightInTiles,"HeightInTiles")
	HX_STACK_ARG(ScaleY,"ScaleY")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(174)
		if (((HeightInTiles < (int)0))){
			HX_STACK_LINE(176)
			HeightInTiles = (int)0;
		}
		HX_STACK_LINE(179)
		if (((Camera == null()))){
			HX_STACK_LINE(181)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(184)
		int _g = ::Math_obj::ceil((Float(Camera->height) / Float(((TileHeight * ScaleY)))));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(184)
		int _g1 = (_g + (int)1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(184)
		this->rows = _g1;
		HX_STACK_LINE(186)
		if (((this->rows > HeightInTiles))){
			HX_STACK_LINE(188)
			this->rows = HeightInTiles;
		}
		HX_STACK_LINE(191)
		int _g2 = ::Std_obj::_int(((this->rows * TileHeight) * ScaleY));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(191)
		this->height = _g2;
		HX_STACK_LINE(193)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemapBuffer_obj,updateRows,(void))

bool FlxTilemapBuffer_obj::isPixelPerfectRender( ::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","isPixelPerfectRender",0x7d4e558b,"flixel.tile.FlxTilemapBuffer.isPixelPerfectRender","flixel/tile/FlxTilemapBuffer.hx",200,0x56d29ad4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(201)
	if (((Camera == null()))){
		HX_STACK_LINE(203)
		Camera = ::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(205)
	if (((this->pixelPerfectRender == null()))){
		HX_STACK_LINE(205)
		return Camera->pixelPerfectRender;
	}
	else{
		HX_STACK_LINE(205)
		return this->pixelPerfectRender;
	}
	HX_STACK_LINE(205)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapBuffer_obj,isPixelPerfectRender,return )


FlxTilemapBuffer_obj::FlxTilemapBuffer_obj()
{
}

void FlxTilemapBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTilemapBuffer);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(columns,"columns");
	HX_MARK_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_MARK_END_CLASS();
}

void FlxTilemapBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(columns,"columns");
	HX_VISIT_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
}

Dynamic FlxTilemapBuffer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { return rows; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { return columns; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateRows") ) { return updateRows_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateColumns") ) { return updateColumns_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { return pixelPerfectRender; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"isPixelPerfectRender") ) { return isPixelPerfectRender_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTilemapBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { columns=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { pixelPerfectRender=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTilemapBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("dirty"));
	outFields->push(HX_CSTRING("rows"));
	outFields->push(HX_CSTRING("columns"));
	outFields->push(HX_CSTRING("pixelPerfectRender"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,width),HX_CSTRING("width")},
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,height),HX_CSTRING("height")},
	{hx::fsBool,(int)offsetof(FlxTilemapBuffer_obj,dirty),HX_CSTRING("dirty")},
	{hx::fsInt,(int)offsetof(FlxTilemapBuffer_obj,rows),HX_CSTRING("rows")},
	{hx::fsInt,(int)offsetof(FlxTilemapBuffer_obj,columns),HX_CSTRING("columns")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTilemapBuffer_obj,pixelPerfectRender),HX_CSTRING("pixelPerfectRender")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("dirty"),
	HX_CSTRING("rows"),
	HX_CSTRING("columns"),
	HX_CSTRING("pixelPerfectRender"),
	HX_CSTRING("destroy"),
	HX_CSTRING("updateColumns"),
	HX_CSTRING("updateRows"),
	HX_CSTRING("isPixelPerfectRender"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTilemapBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTilemapBuffer_obj::__mClass,"__mClass");
};

#endif

Class FlxTilemapBuffer_obj::__mClass;

void FlxTilemapBuffer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tile.FlxTilemapBuffer"), hx::TCanCast< FlxTilemapBuffer_obj> ,sStaticFields,sMemberFields,
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

void FlxTilemapBuffer_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tile
