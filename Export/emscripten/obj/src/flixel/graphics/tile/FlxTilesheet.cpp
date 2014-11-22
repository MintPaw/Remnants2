#include <hxcpp.h>

#ifndef INCLUDED_flixel_graphics_tile_FlxTilesheet
#include <flixel/graphics/tile/FlxTilesheet.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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
namespace tile{

Void FlxTilesheet_obj::__construct(::openfl::_v2::display::BitmapData bitmap)
{
HX_STACK_FRAME("flixel.graphics.tile.FlxTilesheet","new",0x9cbfe7a0,"flixel.graphics.tile.FlxTilesheet.new","flixel/graphics/tile/FlxTilesheet.hx",45,0x06ecbccf)
HX_STACK_THIS(this)
HX_STACK_ARG(bitmap,"bitmap")
{
	HX_STACK_LINE(46)
	super::__construct(bitmap);
	HX_STACK_LINE(47)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(47)
	this->tileOrder = _g;
}
;
	return null();
}

//FlxTilesheet_obj::~FlxTilesheet_obj() { }

Dynamic FlxTilesheet_obj::__CreateEmpty() { return  new FlxTilesheet_obj; }
hx::ObjectPtr< FlxTilesheet_obj > FlxTilesheet_obj::__new(::openfl::_v2::display::BitmapData bitmap)
{  hx::ObjectPtr< FlxTilesheet_obj > result = new FlxTilesheet_obj();
	result->__construct(bitmap);
	return result;}

Dynamic FlxTilesheet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTilesheet_obj > result = new FlxTilesheet_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *FlxTilesheet_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

int FlxTilesheet_obj::addTileRect( ::openfl::_v2::geom::Rectangle rectangle,::openfl::_v2::geom::Point centerPoint){
	HX_STACK_FRAME("flixel.graphics.tile.FlxTilesheet","addTileRect",0x0c3f01f3,"flixel.graphics.tile.FlxTilesheet.addTileRect","flixel/graphics/tile/FlxTilesheet.hx",57,0x06ecbccf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rectangle,"rectangle")
	HX_STACK_ARG(centerPoint,"centerPoint")
	HX_STACK_LINE(58)
	int tileID = this->super::addTileRect(rectangle,centerPoint);		HX_STACK_VAR(tileID,"tileID");
	HX_STACK_LINE(59)
	this->tileOrder[tileID] = rectangle;
	HX_STACK_LINE(60)
	return tileID;
}


Void FlxTilesheet_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.graphics.tile.FlxTilesheet","destroy",0x77eee43a,"flixel.graphics.tile.FlxTilesheet.destroy","flixel/graphics/tile/FlxTilesheet.hx",65,0x06ecbccf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		this->tileOrder = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilesheet_obj,destroy,(void))

int FlxTilesheet_obj::_DRAWCALLS;

::flixel::graphics::tile::FlxTilesheet FlxTilesheet_obj::rebuildFromOld( ::flixel::graphics::tile::FlxTilesheet old,::openfl::_v2::display::BitmapData bitmap){
	HX_STACK_FRAME("flixel.graphics.tile.FlxTilesheet","rebuildFromOld",0x6640ecc2,"flixel.graphics.tile.FlxTilesheet.rebuildFromOld","flixel/graphics/tile/FlxTilesheet.hx",26,0x06ecbccf)
	HX_STACK_ARG(old,"old")
	HX_STACK_ARG(bitmap,"bitmap")
	HX_STACK_LINE(27)
	::flixel::graphics::tile::FlxTilesheet newSheet = ::flixel::graphics::tile::FlxTilesheet_obj::__new(bitmap);		HX_STACK_VAR(newSheet,"newSheet");
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		int _g = old->tileOrder->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(29)
		while((true)){
			HX_STACK_LINE(29)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(29)
				break;
			}
			HX_STACK_LINE(29)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(31)
			::openfl::_v2::geom::Point _g2 = ::openfl::_v2::geom::Point_obj::__new((0.5 * old->tileOrder->__get(i).StaticCast< ::openfl::_v2::geom::Rectangle >()->width),(0.5 * old->tileOrder->__get(i).StaticCast< ::openfl::_v2::geom::Rectangle >()->height));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(31)
			newSheet->addTileRect(old->tileOrder->__get(i).StaticCast< ::openfl::_v2::geom::Rectangle >(),_g2);
		}
	}
	HX_STACK_LINE(34)
	::flixel::util::FlxDestroyUtil_obj::destroy(old);
	HX_STACK_LINE(35)
	return newSheet;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxTilesheet_obj,rebuildFromOld,return )


FlxTilesheet_obj::FlxTilesheet_obj()
{
}

void FlxTilesheet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTilesheet);
	HX_MARK_MEMBER_NAME(tileOrder,"tileOrder");
	::openfl::_v2::display::Tilesheet_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTilesheet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tileOrder,"tileOrder");
	::openfl::_v2::display::Tilesheet_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTilesheet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileOrder") ) { return tileOrder; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_DRAWCALLS") ) { return _DRAWCALLS; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addTileRect") ) { return addTileRect_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rebuildFromOld") ) { return rebuildFromOld_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTilesheet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"tileOrder") ) { tileOrder=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_DRAWCALLS") ) { _DRAWCALLS=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTilesheet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tileOrder"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_DRAWCALLS"),
	HX_CSTRING("rebuildFromOld"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTilesheet_obj,tileOrder),HX_CSTRING("tileOrder")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("tileOrder"),
	HX_CSTRING("addTileRect"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTilesheet_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTilesheet_obj::_DRAWCALLS,"_DRAWCALLS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTilesheet_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTilesheet_obj::_DRAWCALLS,"_DRAWCALLS");
};

#endif

Class FlxTilesheet_obj::__mClass;

void FlxTilesheet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.graphics.tile.FlxTilesheet"), hx::TCanCast< FlxTilesheet_obj> ,sStaticFields,sMemberFields,
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

void FlxTilesheet_obj::__boot()
{
	_DRAWCALLS= (int)0;
}

} // end namespace flixel
} // end namespace graphics
} // end namespace tile
