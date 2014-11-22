#include <hxcpp.h>

#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawStackItem
#include <flixel/graphics/tile/FlxDrawStackItem.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
namespace graphics{
namespace tile{

Void FlxDrawStackItem_obj::__construct()
{
HX_STACK_FRAME("flixel.graphics.tile.FlxDrawStackItem","new",0x001b5446,"flixel.graphics.tile.FlxDrawStackItem.new","flixel/graphics/tile/FlxDrawStackItem.hx",8,0x75241269)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	this->antialiasing = false;
	HX_STACK_LINE(18)
	this->initialized = false;
	HX_STACK_LINE(16)
	this->blending = (int)0;
	HX_STACK_LINE(15)
	this->colored = false;
	HX_STACK_LINE(12)
	this->position = (int)0;
	HX_STACK_LINE(11)
	this->drawData = Array_obj< Float >::__new();
}
;
	return null();
}

//FlxDrawStackItem_obj::~FlxDrawStackItem_obj() { }

Dynamic FlxDrawStackItem_obj::__CreateEmpty() { return  new FlxDrawStackItem_obj; }
hx::ObjectPtr< FlxDrawStackItem_obj > FlxDrawStackItem_obj::__new()
{  hx::ObjectPtr< FlxDrawStackItem_obj > result = new FlxDrawStackItem_obj();
	result->__construct();
	return result;}

Dynamic FlxDrawStackItem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxDrawStackItem_obj > result = new FlxDrawStackItem_obj();
	result->__construct();
	return result;}

Void FlxDrawStackItem_obj::reset( ){
{
		HX_STACK_FRAME("flixel.graphics.tile.FlxDrawStackItem","reset",0x0a651335,"flixel.graphics.tile.FlxDrawStackItem.reset","flixel/graphics/tile/FlxDrawStackItem.hx",25,0x75241269)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		this->graphics = null();
		HX_STACK_LINE(27)
		this->initialized = false;
		HX_STACK_LINE(28)
		this->antialiasing = false;
		HX_STACK_LINE(29)
		this->position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDrawStackItem_obj,reset,(void))

Void FlxDrawStackItem_obj::dispose( ){
{
		HX_STACK_FRAME("flixel.graphics.tile.FlxDrawStackItem","dispose",0x96baef85,"flixel.graphics.tile.FlxDrawStackItem.dispose","flixel/graphics/tile/FlxDrawStackItem.hx",33,0x75241269)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		this->graphics = null();
		HX_STACK_LINE(35)
		this->drawData = null();
		HX_STACK_LINE(36)
		this->next = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDrawStackItem_obj,dispose,(void))

Void FlxDrawStackItem_obj::setDrawData( ::flixel::math::FlxPoint coordinate,Float ID,::openfl::_v2::geom::Matrix matrix,hx::Null< bool >  __o_isColored,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
bool isColored = __o_isColored.Default(false);
int color = __o_color.Default(-1);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawStackItem","setDrawData",0x3394a3f6,"flixel.graphics.tile.FlxDrawStackItem.setDrawData","flixel/graphics/tile/FlxDrawStackItem.hx",41,0x75241269)
	HX_STACK_THIS(this)
	HX_STACK_ARG(coordinate,"coordinate")
	HX_STACK_ARG(ID,"ID")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(isColored,"isColored")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(42)
		int _g = (this->position)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(42)
		this->drawData[_g] = coordinate->x;
		HX_STACK_LINE(43)
		int _g1 = (this->position)++;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(43)
		this->drawData[_g1] = coordinate->y;
		HX_STACK_LINE(45)
		int _g2 = (this->position)++;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(45)
		this->drawData[_g2] = ID;
		HX_STACK_LINE(47)
		int _g3 = (this->position)++;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(47)
		this->drawData[_g3] = matrix->a;
		HX_STACK_LINE(48)
		int _g4 = (this->position)++;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(48)
		this->drawData[_g4] = matrix->b;
		HX_STACK_LINE(49)
		int _g5 = (this->position)++;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(49)
		this->drawData[_g5] = matrix->c;
		HX_STACK_LINE(50)
		int _g6 = (this->position)++;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(50)
		this->drawData[_g6] = matrix->d;
		HX_STACK_LINE(52)
		if ((isColored)){
			HX_STACK_LINE(54)
			int _g7 = (this->position)++;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(54)
			this->drawData[_g7] = (Float(((int((int(color) >> int((int)16))) & int((int)255)))) / Float((int)255));
			HX_STACK_LINE(55)
			int _g8 = (this->position)++;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(55)
			this->drawData[_g8] = (Float(((int((int(color) >> int((int)8))) & int((int)255)))) / Float((int)255));
			HX_STACK_LINE(56)
			int _g9 = (this->position)++;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(56)
			this->drawData[_g9] = (Float(((int(color) & int((int)255)))) / Float((int)255));
		}
		HX_STACK_LINE(59)
		int _g10 = (this->position)++;		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(59)
		this->drawData[_g10] = alpha;
		HX_STACK_LINE(61)
		if ((coordinate->_weak)){
			HX_STACK_LINE(61)
			coordinate->put();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxDrawStackItem_obj,setDrawData,(void))


FlxDrawStackItem_obj::FlxDrawStackItem_obj()
{
}

void FlxDrawStackItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxDrawStackItem);
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	HX_MARK_MEMBER_NAME(drawData,"drawData");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(colored,"colored");
	HX_MARK_MEMBER_NAME(blending,"blending");
	HX_MARK_MEMBER_NAME(initialized,"initialized");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_END_CLASS();
}

void FlxDrawStackItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	HX_VISIT_MEMBER_NAME(drawData,"drawData");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(colored,"colored");
	HX_VISIT_MEMBER_NAME(blending,"blending");
	HX_VISIT_MEMBER_NAME(initialized,"initialized");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
}

Dynamic FlxDrawStackItem_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"colored") ) { return colored; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { return graphics; }
		if (HX_FIELD_EQ(inName,"drawData") ) { return drawData; }
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"blending") ) { return blending; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		if (HX_FIELD_EQ(inName,"setDrawData") ) { return setDrawData_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxDrawStackItem_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::flixel::graphics::tile::FlxDrawStackItem >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"colored") ) { colored=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawData") ) { drawData=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blending") ) { blending=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { antialiasing=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxDrawStackItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("graphics"));
	outFields->push(HX_CSTRING("drawData"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("colored"));
	outFields->push(HX_CSTRING("blending"));
	outFields->push(HX_CSTRING("initialized"));
	outFields->push(HX_CSTRING("antialiasing"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::graphics::FlxGraphic*/ ,(int)offsetof(FlxDrawStackItem_obj,graphics),HX_CSTRING("graphics")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxDrawStackItem_obj,drawData),HX_CSTRING("drawData")},
	{hx::fsInt,(int)offsetof(FlxDrawStackItem_obj,position),HX_CSTRING("position")},
	{hx::fsObject /*::flixel::graphics::tile::FlxDrawStackItem*/ ,(int)offsetof(FlxDrawStackItem_obj,next),HX_CSTRING("next")},
	{hx::fsBool,(int)offsetof(FlxDrawStackItem_obj,colored),HX_CSTRING("colored")},
	{hx::fsInt,(int)offsetof(FlxDrawStackItem_obj,blending),HX_CSTRING("blending")},
	{hx::fsBool,(int)offsetof(FlxDrawStackItem_obj,initialized),HX_CSTRING("initialized")},
	{hx::fsBool,(int)offsetof(FlxDrawStackItem_obj,antialiasing),HX_CSTRING("antialiasing")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("graphics"),
	HX_CSTRING("drawData"),
	HX_CSTRING("position"),
	HX_CSTRING("next"),
	HX_CSTRING("colored"),
	HX_CSTRING("blending"),
	HX_CSTRING("initialized"),
	HX_CSTRING("antialiasing"),
	HX_CSTRING("reset"),
	HX_CSTRING("dispose"),
	HX_CSTRING("setDrawData"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDrawStackItem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDrawStackItem_obj::__mClass,"__mClass");
};

#endif

Class FlxDrawStackItem_obj::__mClass;

void FlxDrawStackItem_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.graphics.tile.FlxDrawStackItem"), hx::TCanCast< FlxDrawStackItem_obj> ,sStaticFields,sMemberFields,
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

void FlxDrawStackItem_obj::__boot()
{
}

} // end namespace flixel
} // end namespace graphics
} // end namespace tile
