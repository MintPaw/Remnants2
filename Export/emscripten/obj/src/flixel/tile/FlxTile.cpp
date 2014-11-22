#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTile
#include <flixel/tile/FlxTile.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace tile{

Void FlxTile_obj::__construct(::flixel::tile::FlxTilemap Tilemap,int Index,Float Width,Float Height,bool Visible,int AllowCollisions)
{
HX_STACK_FRAME("flixel.tile.FlxTile","new",0xe45c12a4,"flixel.tile.FlxTile.new","flixel/tile/FlxTile.hx",11,0x7142a1ac)
HX_STACK_THIS(this)
HX_STACK_ARG(Tilemap,"Tilemap")
HX_STACK_ARG(Index,"Index")
HX_STACK_ARG(Width,"Width")
HX_STACK_ARG(Height,"Height")
HX_STACK_ARG(Visible,"Visible")
HX_STACK_ARG(AllowCollisions,"AllowCollisions")
{
	HX_STACK_LINE(41)
	this->mapIndex = (int)0;
	HX_STACK_LINE(18)
	this->callbackFunction = null();
	HX_STACK_LINE(60)
	super::__construct((int)0,(int)0,Width,Height);
	HX_STACK_LINE(62)
	this->set_immovable(true);
	HX_STACK_LINE(63)
	this->set_moves(false);
	HX_STACK_LINE(65)
	this->tilemap = Tilemap;
	HX_STACK_LINE(66)
	this->index = Index;
	HX_STACK_LINE(67)
	this->set_visible(Visible);
	HX_STACK_LINE(68)
	this->allowCollisions = AllowCollisions;
}
;
	return null();
}

//FlxTile_obj::~FlxTile_obj() { }

Dynamic FlxTile_obj::__CreateEmpty() { return  new FlxTile_obj; }
hx::ObjectPtr< FlxTile_obj > FlxTile_obj::__new(::flixel::tile::FlxTilemap Tilemap,int Index,Float Width,Float Height,bool Visible,int AllowCollisions)
{  hx::ObjectPtr< FlxTile_obj > result = new FlxTile_obj();
	result->__construct(Tilemap,Index,Width,Height,Visible,AllowCollisions);
	return result;}

Dynamic FlxTile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTile_obj > result = new FlxTile_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void FlxTile_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTile","destroy",0x4616e13e,"flixel.tile.FlxTile.destroy","flixel/tile/FlxTile.hx",75,0x7142a1ac)
		HX_STACK_THIS(this)
		HX_STACK_LINE(76)
		this->callbackFunction = null();
		HX_STACK_LINE(77)
		this->tilemap = null();
		HX_STACK_LINE(78)
		this->frame = null();
		HX_STACK_LINE(80)
		this->super::destroy();
	}
return null();
}



FlxTile_obj::FlxTile_obj()
{
}

void FlxTile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTile);
	HX_MARK_MEMBER_NAME(callbackFunction,"callbackFunction");
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(tilemap,"tilemap");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(mapIndex,"mapIndex");
	HX_MARK_MEMBER_NAME(frame,"frame");
	::flixel::FlxObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(callbackFunction,"callbackFunction");
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(tilemap,"tilemap");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(mapIndex,"mapIndex");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	::flixel::FlxObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTile_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return filter; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tilemap") ) { return tilemap; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mapIndex") ) { return mapIndex; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"callbackFunction") ) { return callbackFunction; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTile_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast< ::Class >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tilemap") ) { tilemap=inValue.Cast< ::flixel::tile::FlxTilemap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mapIndex") ) { mapIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"callbackFunction") ) { callbackFunction=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("filter"));
	outFields->push(HX_CSTRING("tilemap"));
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("mapIndex"));
	outFields->push(HX_CSTRING("frame"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTile_obj,callbackFunction),HX_CSTRING("callbackFunction")},
	{hx::fsObject /*::Class*/ ,(int)offsetof(FlxTile_obj,filter),HX_CSTRING("filter")},
	{hx::fsObject /*::flixel::tile::FlxTilemap*/ ,(int)offsetof(FlxTile_obj,tilemap),HX_CSTRING("tilemap")},
	{hx::fsInt,(int)offsetof(FlxTile_obj,index),HX_CSTRING("index")},
	{hx::fsInt,(int)offsetof(FlxTile_obj,mapIndex),HX_CSTRING("mapIndex")},
	{hx::fsObject /*::flixel::graphics::frames::FlxFrame*/ ,(int)offsetof(FlxTile_obj,frame),HX_CSTRING("frame")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("callbackFunction"),
	HX_CSTRING("filter"),
	HX_CSTRING("tilemap"),
	HX_CSTRING("index"),
	HX_CSTRING("mapIndex"),
	HX_CSTRING("frame"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTile_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTile_obj::__mClass,"__mClass");
};

#endif

Class FlxTile_obj::__mClass;

void FlxTile_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tile.FlxTile"), hx::TCanCast< FlxTile_obj> ,sStaticFields,sMemberFields,
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

void FlxTile_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tile
