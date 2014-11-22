#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUIGroup_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUIGroup","new",0x7ddf049c,"flixel.addons.ui.FlxUIGroup.new","flixel/addons/ui/FlxUIGroup.hx",12,0xd49587d3)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(26)
	this->autoBounds = true;
	HX_STACK_LINE(19)
	this->broadcastToFlxUI = true;
	HX_STACK_LINE(32)
	super::__construct(X,Y,null());
}
;
	return null();
}

//FlxUIGroup_obj::~FlxUIGroup_obj() { }

Dynamic FlxUIGroup_obj::__CreateEmpty() { return  new FlxUIGroup_obj; }
hx::ObjectPtr< FlxUIGroup_obj > FlxUIGroup_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{  hx::ObjectPtr< FlxUIGroup_obj > result = new FlxUIGroup_obj();
	result->__construct(__o_X,__o_Y);
	return result;}

Dynamic FlxUIGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUIGroup_obj > result = new FlxUIGroup_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *FlxUIGroup_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::IFlxSprite_obj)) return operator ::flixel::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::IFlxBasic_obj)) return operator ::flixel::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	return super::__ToInterface(inType);
}

Void FlxUIGroup_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIGroup","destroy",0x25c62f36,"flixel.addons.ui.FlxUIGroup.destroy","flixel/addons/ui/FlxUIGroup.hx",36,0xd49587d3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		this->super::destroy();
	}
return null();
}


Dynamic FlxUIGroup_obj::add( Dynamic _tmp_Object){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIGroup","add",0x7dd5265d,"flixel.addons.ui.FlxUIGroup.add","flixel/addons/ui/FlxUIGroup.hx",39,0xd49587d3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_tmp_Object,"_tmp_Object")
	HX_STACK_LINE(40)
	::flixel::FlxSprite Object = _tmp_Object;		HX_STACK_VAR(Object,"Object");
	HX_STACK_LINE(40)
	::flixel::FlxSprite obj = this->super::add(Object);		HX_STACK_VAR(obj,"obj");
	HX_STACK_LINE(41)
	if ((this->autoBounds)){
		HX_STACK_LINE(42)
		this->calcBounds();
	}
	HX_STACK_LINE(44)
	return obj;
}


Dynamic FlxUIGroup_obj::remove( Dynamic _tmp_Object,hx::Null< bool >  __o_Splice){
bool Splice = __o_Splice.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUIGroup","remove",0xd69eb588,"flixel.addons.ui.FlxUIGroup.remove","flixel/addons/ui/FlxUIGroup.hx",47,0xd49587d3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_tmp_Object,"_tmp_Object")
	HX_STACK_ARG(Splice,"Splice")
{
		HX_STACK_LINE(48)
		::flixel::FlxSprite Object = _tmp_Object;		HX_STACK_VAR(Object,"Object");
		HX_STACK_LINE(48)
		::flixel::FlxSprite obj = this->super::remove(Object,Splice);		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(49)
		if ((this->autoBounds)){
			HX_STACK_LINE(50)
			this->calcBounds();
		}
		HX_STACK_LINE(52)
		return obj;
	}
}


bool FlxUIGroup_obj::hasThis( ::flixel::FlxSprite Object){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIGroup","hasThis",0x1d802914,"flixel.addons.ui.FlxUIGroup.hasThis","flixel/addons/ui/FlxUIGroup.hx",55,0xd49587d3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(56)
	{
		HX_STACK_LINE(56)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(56)
		Array< ::Dynamic > _g1 = this->group->members;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(56)
		while((true)){
			HX_STACK_LINE(56)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(56)
				break;
			}
			HX_STACK_LINE(56)
			::flixel::FlxSprite obj = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(56)
			++(_g);
			HX_STACK_LINE(57)
			if (((obj == Object))){
				HX_STACK_LINE(58)
				return true;
			}
		}
	}
	HX_STACK_LINE(61)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIGroup_obj,hasThis,return )

Void FlxUIGroup_obj::calcBounds( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIGroup","calcBounds",0xdbe23c2e,"flixel.addons.ui.FlxUIGroup.calcBounds","flixel/addons/ui/FlxUIGroup.hx",66,0xd49587d3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		if (((bool((this->group->members != null())) && bool((this->group->members->__Field(HX_CSTRING("length"),true) > (int)0))))){
			HX_STACK_LINE(67)
			Float left = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(left,"left");
			HX_STACK_LINE(68)
			Float right = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(right,"right");
			HX_STACK_LINE(69)
			Float top = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(top,"top");
			HX_STACK_LINE(70)
			Float bottom = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(bottom,"bottom");
			HX_STACK_LINE(71)
			{
				HX_STACK_LINE(71)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(71)
				Array< ::Dynamic > _g1 = this->group->members;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(71)
				while((true)){
					HX_STACK_LINE(71)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(71)
						break;
					}
					HX_STACK_LINE(71)
					::flixel::FlxSprite fb = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(fb,"fb");
					HX_STACK_LINE(71)
					++(_g);
					HX_STACK_LINE(72)
					if (((fb != null()))){
						HX_STACK_LINE(73)
						if ((::Std_obj::is(fb,hx::ClassOf< ::flixel::addons::ui::interfaces::IFlxUIWidget >()))){
							HX_STACK_LINE(74)
							::flixel::FlxSprite flui = fb;		HX_STACK_VAR(flui,"flui");
							HX_STACK_LINE(75)
							if (((flui->x < left))){
								HX_STACK_LINE(75)
								left = flui->x;
							}
							HX_STACK_LINE(76)
							Float _g2 = flui->get_width();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(76)
							Float _g11 = (flui->x + _g2);		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(76)
							if (((_g11 > right))){
								HX_STACK_LINE(76)
								Float _g21 = flui->get_width();		HX_STACK_VAR(_g21,"_g21");
								HX_STACK_LINE(76)
								Float _g3 = (flui->x + _g21);		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(76)
								right = _g3;
							}
							HX_STACK_LINE(77)
							if (((flui->y < top))){
								HX_STACK_LINE(77)
								top = flui->y;
							}
							HX_STACK_LINE(78)
							Float _g4 = flui->get_height();		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(78)
							Float _g5 = (flui->y + _g4);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(78)
							if (((_g5 > bottom))){
								HX_STACK_LINE(78)
								Float _g6 = flui->get_height();		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(78)
								Float _g7 = (flui->y + _g6);		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(78)
								bottom = _g7;
							}
						}
						else{
							HX_STACK_LINE(79)
							if ((::Std_obj::is(fb,hx::ClassOf< ::flixel::FlxSprite >()))){
								HX_STACK_LINE(80)
								::flixel::FlxSprite flxi = fb;		HX_STACK_VAR(flxi,"flxi");
								HX_STACK_LINE(81)
								if (((flxi->x < left))){
									HX_STACK_LINE(81)
									left = flxi->x;
								}
								HX_STACK_LINE(82)
								if (((flxi->x > right))){
									HX_STACK_LINE(82)
									right = flxi->x;
								}
								HX_STACK_LINE(83)
								if (((flxi->y < top))){
									HX_STACK_LINE(83)
									top = flxi->y;
								}
								HX_STACK_LINE(84)
								if (((flxi->y > bottom))){
									HX_STACK_LINE(84)
									bottom = flxi->y;
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(88)
			this->set_width((right - left));
			HX_STACK_LINE(89)
			this->set_height((bottom - top));
		}
		else{
			HX_STACK_LINE(91)
			Float _g8 = this->set_height((int)0);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(91)
			this->set_width(_g8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIGroup_obj,calcBounds,(void))

Void FlxUIGroup_obj::floorAll( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIGroup","floorAll",0x028cf8f9,"flixel.addons.ui.FlxUIGroup.floorAll","flixel/addons/ui/FlxUIGroup.hx",99,0xd49587d3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(100)
		::flixel::FlxSprite fs = null();		HX_STACK_VAR(fs,"fs");
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(101)
			Array< ::Dynamic > _g1 = this->group->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(101)
			while((true)){
				HX_STACK_LINE(101)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(101)
					break;
				}
				HX_STACK_LINE(101)
				::flixel::FlxSprite fb = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(fb,"fb");
				HX_STACK_LINE(101)
				++(_g);
				HX_STACK_LINE(102)
				fs = fb;
				HX_STACK_LINE(103)
				int _g2 = ::Math_obj::floor(fs->x);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(103)
				fs->set_x(_g2);
				HX_STACK_LINE(104)
				int _g11 = ::Math_obj::floor(fs->y);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(104)
				fs->set_y(_g11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIGroup_obj,floorAll,(void))


FlxUIGroup_obj::FlxUIGroup_obj()
{
}

void FlxUIGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIGroup);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_MARK_MEMBER_NAME(autoBounds,"autoBounds");
	::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_VISIT_MEMBER_NAME(autoBounds,"autoBounds");
	::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUIGroup_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"hasThis") ) { return hasThis_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"floorAll") ) { return floorAll_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoBounds") ) { return autoBounds; }
		if (HX_FIELD_EQ(inName,"calcBounds") ) { return calcBounds_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { return broadcastToFlxUI; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUIGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoBounds") ) { autoBounds=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { broadcastToFlxUI=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUIGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("broadcastToFlxUI"));
	outFields->push(HX_CSTRING("autoBounds"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(FlxUIGroup_obj,id),HX_CSTRING("id")},
	{hx::fsBool,(int)offsetof(FlxUIGroup_obj,broadcastToFlxUI),HX_CSTRING("broadcastToFlxUI")},
	{hx::fsBool,(int)offsetof(FlxUIGroup_obj,autoBounds),HX_CSTRING("autoBounds")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("broadcastToFlxUI"),
	HX_CSTRING("autoBounds"),
	HX_CSTRING("destroy"),
	HX_CSTRING("add"),
	HX_CSTRING("remove"),
	HX_CSTRING("hasThis"),
	HX_CSTRING("calcBounds"),
	HX_CSTRING("floorAll"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIGroup_obj::__mClass,"__mClass");
};

#endif

Class FlxUIGroup_obj::__mClass;

void FlxUIGroup_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxUIGroup"), hx::TCanCast< FlxUIGroup_obj> ,sStaticFields,sMemberFields,
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

void FlxUIGroup_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
