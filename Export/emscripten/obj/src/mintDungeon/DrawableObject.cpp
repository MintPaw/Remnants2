#include <hxcpp.h>

#ifndef INCLUDED_mintDungeon_DrawableObject
#include <mintDungeon/DrawableObject.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
namespace mintDungeon{

Void DrawableObject_obj::__construct()
{
HX_STACK_FRAME("mintDungeon.DrawableObject","new",0xb913c4c5,"mintDungeon.DrawableObject.new","mintDungeon/DrawableObject.hx",5,0x0697a92a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8)
	this->outline = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(7)
	this->tiles = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//DrawableObject_obj::~DrawableObject_obj() { }

Dynamic DrawableObject_obj::__CreateEmpty() { return  new DrawableObject_obj; }
hx::ObjectPtr< DrawableObject_obj > DrawableObject_obj::__new()
{  hx::ObjectPtr< DrawableObject_obj > result = new DrawableObject_obj();
	result->__construct();
	return result;}

Dynamic DrawableObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DrawableObject_obj > result = new DrawableObject_obj();
	result->__construct();
	return result;}

Void DrawableObject_obj::generateOutline( ){
{
		HX_STACK_FRAME("mintDungeon.DrawableObject","generateOutline",0x1547d8b2,"mintDungeon.DrawableObject.generateOutline","mintDungeon/DrawableObject.hx",16,0x0697a92a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(17)
		Array< ::Dynamic > tempOutline = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tempOutline,"tempOutline");
		HX_STACK_LINE(18)
		{
			HX_STACK_LINE(18)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(18)
			Array< ::Dynamic > _g1 = this->tiles;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(18)
			while((true)){
				HX_STACK_LINE(18)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(18)
					break;
				}
				HX_STACK_LINE(18)
				::openfl::_v2::geom::Point i = _g1->__get(_g).StaticCast< ::openfl::_v2::geom::Point >();		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(18)
				++(_g);
				HX_STACK_LINE(20)
				::openfl::_v2::geom::Point _g2 = ::openfl::_v2::geom::Point_obj::__new(i->x,i->y);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(20)
				tempOutline->push(_g2);
				HX_STACK_LINE(22)
				::openfl::_v2::geom::Point _g11 = ::openfl::_v2::geom::Point_obj::__new((i->x + (int)1),i->y);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(22)
				tempOutline->push(_g11);
				HX_STACK_LINE(23)
				::openfl::_v2::geom::Point _g21 = ::openfl::_v2::geom::Point_obj::__new(i->x,(i->y + (int)1));		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(23)
				tempOutline->push(_g21);
				HX_STACK_LINE(24)
				::openfl::_v2::geom::Point _g3 = ::openfl::_v2::geom::Point_obj::__new((i->x + (int)1),(i->y + (int)1));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(24)
				tempOutline->push(_g3);
				HX_STACK_LINE(26)
				::openfl::_v2::geom::Point _g4 = ::openfl::_v2::geom::Point_obj::__new((i->x - (int)1),i->y);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(26)
				tempOutline->push(_g4);
				HX_STACK_LINE(27)
				::openfl::_v2::geom::Point _g5 = ::openfl::_v2::geom::Point_obj::__new(i->x,(i->y - (int)1));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(27)
				tempOutline->push(_g5);
				HX_STACK_LINE(28)
				::openfl::_v2::geom::Point _g6 = ::openfl::_v2::geom::Point_obj::__new((i->x - (int)1),(i->y - (int)1));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(28)
				tempOutline->push(_g6);
				HX_STACK_LINE(30)
				::openfl::_v2::geom::Point _g7 = ::openfl::_v2::geom::Point_obj::__new((i->x + (int)1),(i->y - (int)1));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(30)
				tempOutline->push(_g7);
				HX_STACK_LINE(31)
				::openfl::_v2::geom::Point _g8 = ::openfl::_v2::geom::Point_obj::__new((i->x - (int)1),(i->y + (int)1));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(31)
				tempOutline->push(_g8);
			}
		}
		HX_STACK_LINE(34)
		{
			HX_STACK_LINE(34)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(34)
			while((true)){
				HX_STACK_LINE(34)
				if ((!(((_g < tempOutline->length))))){
					HX_STACK_LINE(34)
					break;
				}
				HX_STACK_LINE(34)
				::openfl::_v2::geom::Point i = tempOutline->__get(_g).StaticCast< ::openfl::_v2::geom::Point >();		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(34)
				++(_g);
				HX_STACK_LINE(36)
				bool add = true;		HX_STACK_VAR(add,"add");
				HX_STACK_LINE(37)
				{
					HX_STACK_LINE(37)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(37)
					Array< ::Dynamic > _g2 = this->outline;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(37)
					while((true)){
						HX_STACK_LINE(37)
						if ((!(((_g1 < _g2->length))))){
							HX_STACK_LINE(37)
							break;
						}
						HX_STACK_LINE(37)
						::openfl::_v2::geom::Point j = _g2->__get(_g1).StaticCast< ::openfl::_v2::geom::Point >();		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(37)
						++(_g1);
						HX_STACK_LINE(37)
						if ((i->equals(j))){
							HX_STACK_LINE(37)
							add = false;
						}
					}
				}
				HX_STACK_LINE(39)
				if ((add)){
					HX_STACK_LINE(39)
					this->outline->push(i);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawableObject_obj,generateOutline,(void))


DrawableObject_obj::DrawableObject_obj()
{
}

void DrawableObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DrawableObject);
	HX_MARK_MEMBER_NAME(tiles,"tiles");
	HX_MARK_MEMBER_NAME(outline,"outline");
	HX_MARK_END_CLASS();
}

void DrawableObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tiles,"tiles");
	HX_VISIT_MEMBER_NAME(outline,"outline");
}

Dynamic DrawableObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tiles") ) { return tiles; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outline") ) { return outline; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"generateOutline") ) { return generateOutline_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DrawableObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tiles") ) { tiles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outline") ) { outline=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DrawableObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tiles"));
	outFields->push(HX_CSTRING("outline"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DrawableObject_obj,tiles),HX_CSTRING("tiles")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DrawableObject_obj,outline),HX_CSTRING("outline")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("tiles"),
	HX_CSTRING("outline"),
	HX_CSTRING("generateOutline"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawableObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawableObject_obj::__mClass,"__mClass");
};

#endif

Class DrawableObject_obj::__mClass;

void DrawableObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("mintDungeon.DrawableObject"), hx::TCanCast< DrawableObject_obj> ,sStaticFields,sMemberFields,
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

void DrawableObject_obj::__boot()
{
}

} // end namespace mintDungeon
