#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
#endif
#ifndef INCLUDED_flixel_system_replay_FrameRecord
#include <flixel/system/replay/FrameRecord.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace util{

Void FlxArrayUtil_obj::__construct()
{
	return null();
}

//FlxArrayUtil_obj::~FlxArrayUtil_obj() { }

Dynamic FlxArrayUtil_obj::__CreateEmpty() { return  new FlxArrayUtil_obj; }
hx::ObjectPtr< FlxArrayUtil_obj > FlxArrayUtil_obj::__new()
{  hx::ObjectPtr< FlxArrayUtil_obj > result = new FlxArrayUtil_obj();
	result->__construct();
	return result;}

Dynamic FlxArrayUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxArrayUtil_obj > result = new FlxArrayUtil_obj();
	result->__construct();
	return result;}

Void FlxArrayUtil_obj::clearArray_flixel_input_FlxSwipe( Array< ::Dynamic > array,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","clearArray_flixel_input_FlxSwipe",0x08ba6798,"flixel.util.FlxArrayUtil.clearArray_flixel_input_FlxSwipe","flixel/util/FlxArrayUtil.hx",92,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(92)
		if (((array != null()))){
			HX_STACK_LINE(94)
			if ((!(recursive))){
				HX_STACK_LINE(96)
				while((true)){
					HX_STACK_LINE(96)
					if ((!(((array->length > (int)0))))){
						HX_STACK_LINE(96)
						break;
					}
					HX_STACK_LINE(98)
					array->pop().StaticCast< ::flixel::input::FlxSwipe >();
				}
			}
			else{
				HX_STACK_LINE(103)
				while((true)){
					HX_STACK_LINE(103)
					if ((!(((array->length > (int)0))))){
						HX_STACK_LINE(103)
						break;
					}
					HX_STACK_LINE(105)
					::flixel::input::FlxSwipe thing = array->pop().StaticCast< ::flixel::input::FlxSwipe >();		HX_STACK_VAR(thing,"thing");
					HX_STACK_LINE(106)
					if ((::Std_obj::is(thing,hx::ClassOf< Array<int> >()))){
						HX_STACK_LINE(108)
						::flixel::util::FlxArrayUtil_obj::clearArray_clearArray_T(array,recursive);
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,clearArray_flixel_input_FlxSwipe,(void))

Void FlxArrayUtil_obj::setLength_flixel_system_replay_FrameRecord( Array< ::Dynamic > array,int newLength){
{
		HX_STACK_FRAME("flixel.util.FlxArrayUtil","setLength_flixel_system_replay_FrameRecord",0x79844eb5,"flixel.util.FlxArrayUtil.setLength_flixel_system_replay_FrameRecord","flixel/util/FlxArrayUtil.hx",16,0xa0dc755b)
		HX_STACK_ARG(array,"array")
		HX_STACK_ARG(newLength,"newLength")
		HX_STACK_LINE(17)
		if (((newLength < (int)0))){
			HX_STACK_LINE(17)
			return null();
		}
		HX_STACK_LINE(18)
		int oldLength = array->length;		HX_STACK_VAR(oldLength,"oldLength");
		HX_STACK_LINE(19)
		int diff = (newLength - oldLength);		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(20)
		if (((diff < (int)0))){
			HX_STACK_LINE(25)
			diff = -(diff);
			HX_STACK_LINE(26)
			{
				HX_STACK_LINE(26)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(26)
				while((true)){
					HX_STACK_LINE(26)
					if ((!(((_g < diff))))){
						HX_STACK_LINE(26)
						break;
					}
					HX_STACK_LINE(26)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(28)
					array->pop().StaticCast< ::flixel::system::replay::FrameRecord >();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,setLength_flixel_system_replay_FrameRecord,(void))

Void FlxArrayUtil_obj::setLength_flixel_group_FlxTypedGroup_T( Dynamic array,int newLength){
{
		HX_STACK_FRAME("flixel.util.FlxArrayUtil","setLength_flixel_group_FlxTypedGroup_T",0x1139627b,"flixel.util.FlxArrayUtil.setLength_flixel_group_FlxTypedGroup_T","flixel/util/FlxArrayUtil.hx",16,0xa0dc755b)
		HX_STACK_ARG(array,"array")
		HX_STACK_ARG(newLength,"newLength")
		HX_STACK_LINE(17)
		if (((newLength < (int)0))){
			HX_STACK_LINE(17)
			return null();
		}
		HX_STACK_LINE(18)
		int oldLength = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(oldLength,"oldLength");
		HX_STACK_LINE(19)
		int diff = (newLength - oldLength);		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(20)
		if (((diff < (int)0))){
			HX_STACK_LINE(25)
			diff = -(diff);
			HX_STACK_LINE(26)
			{
				HX_STACK_LINE(26)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(26)
				while((true)){
					HX_STACK_LINE(26)
					if ((!(((_g < diff))))){
						HX_STACK_LINE(26)
						break;
					}
					HX_STACK_LINE(26)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(28)
					array->__Field(HX_CSTRING("pop"),true)();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,setLength_flixel_group_FlxTypedGroup_T,(void))

Array< ::Dynamic > FlxArrayUtil_obj::fastSplice_flixel_util_FlxTimer( Array< ::Dynamic > array,::flixel::util::FlxTimer element){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","fastSplice_flixel_util_FlxTimer",0x46676ae9,"flixel.util.FlxArrayUtil.fastSplice_flixel_util_FlxTimer","flixel/util/FlxArrayUtil.hx",45,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(element,"element")
	HX_STACK_LINE(46)
	int index = array->indexOf(element,null());		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(47)
	if (((index != (int)-1))){
		HX_STACK_LINE(49)
		array[index] = array->__get((array->length - (int)1)).StaticCast< ::flixel::util::FlxTimer >();
		HX_STACK_LINE(49)
		array->pop().StaticCast< ::flixel::util::FlxTimer >();
		HX_STACK_LINE(49)
		return array;
	}
	HX_STACK_LINE(51)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,fastSplice_flixel_util_FlxTimer,return )

Void FlxArrayUtil_obj::clearArray_flixel_util_FlxTimer( Array< ::Dynamic > array,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","clearArray_flixel_util_FlxTimer",0xcaf076d5,"flixel.util.FlxArrayUtil.clearArray_flixel_util_FlxTimer","flixel/util/FlxArrayUtil.hx",92,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(92)
		if (((array != null()))){
			HX_STACK_LINE(94)
			if ((!(recursive))){
				HX_STACK_LINE(96)
				while((true)){
					HX_STACK_LINE(96)
					if ((!(((array->length > (int)0))))){
						HX_STACK_LINE(96)
						break;
					}
					HX_STACK_LINE(98)
					array->pop().StaticCast< ::flixel::util::FlxTimer >();
				}
			}
			else{
				HX_STACK_LINE(103)
				while((true)){
					HX_STACK_LINE(103)
					if ((!(((array->length > (int)0))))){
						HX_STACK_LINE(103)
						break;
					}
					HX_STACK_LINE(105)
					::flixel::util::FlxTimer thing = array->pop().StaticCast< ::flixel::util::FlxTimer >();		HX_STACK_VAR(thing,"thing");
					HX_STACK_LINE(106)
					if ((::Std_obj::is(thing,hx::ClassOf< Array<int> >()))){
						HX_STACK_LINE(108)
						::flixel::util::FlxArrayUtil_obj::clearArray_clearArray_T(array,recursive);
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,clearArray_flixel_util_FlxTimer,(void))

Void FlxArrayUtil_obj::clearArray_flixel_util_FlxPath( Array< ::Dynamic > array,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","clearArray_flixel_util_FlxPath",0xe3d6c095,"flixel.util.FlxArrayUtil.clearArray_flixel_util_FlxPath","flixel/util/FlxArrayUtil.hx",92,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(92)
		if (((array != null()))){
			HX_STACK_LINE(94)
			if ((!(recursive))){
				HX_STACK_LINE(96)
				while((true)){
					HX_STACK_LINE(96)
					if ((!(((array->length > (int)0))))){
						HX_STACK_LINE(96)
						break;
					}
					HX_STACK_LINE(98)
					array->pop().StaticCast< ::flixel::util::FlxPath >();
				}
			}
			else{
				HX_STACK_LINE(103)
				while((true)){
					HX_STACK_LINE(103)
					if ((!(((array->length > (int)0))))){
						HX_STACK_LINE(103)
						break;
					}
					HX_STACK_LINE(105)
					::flixel::util::FlxPath thing = array->pop().StaticCast< ::flixel::util::FlxPath >();		HX_STACK_VAR(thing,"thing");
					HX_STACK_LINE(106)
					if ((::Std_obj::is(thing,hx::ClassOf< Array<int> >()))){
						HX_STACK_LINE(108)
						::flixel::util::FlxArrayUtil_obj::clearArray_clearArray_T(array,recursive);
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,clearArray_flixel_util_FlxPath,(void))

Array< ::Dynamic > FlxArrayUtil_obj::fastSplice_flixel_util_FlxPath( Array< ::Dynamic > array,::flixel::util::FlxPath element){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","fastSplice_flixel_util_FlxPath",0xb8c4eb01,"flixel.util.FlxArrayUtil.fastSplice_flixel_util_FlxPath","flixel/util/FlxArrayUtil.hx",45,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(element,"element")
	HX_STACK_LINE(46)
	int index = array->indexOf(element,null());		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(47)
	if (((index != (int)-1))){
		HX_STACK_LINE(49)
		array[index] = array->__get((array->length - (int)1)).StaticCast< ::flixel::util::FlxPath >();
		HX_STACK_LINE(49)
		array->pop().StaticCast< ::flixel::util::FlxPath >();
		HX_STACK_LINE(49)
		return array;
	}
	HX_STACK_LINE(51)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,fastSplice_flixel_util_FlxPath,return )

Array< ::Dynamic > FlxArrayUtil_obj::fastSplice_flixel_tweens_FlxTween( Array< ::Dynamic > array,::flixel::tweens::FlxTween element){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","fastSplice_flixel_tweens_FlxTween",0x134d3569,"flixel.util.FlxArrayUtil.fastSplice_flixel_tweens_FlxTween","flixel/util/FlxArrayUtil.hx",45,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(element,"element")
	HX_STACK_LINE(46)
	int index = array->indexOf(element,null());		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(47)
	if (((index != (int)-1))){
		HX_STACK_LINE(49)
		array[index] = array->__get((array->length - (int)1)).StaticCast< ::flixel::tweens::FlxTween >();
		HX_STACK_LINE(49)
		array->pop().StaticCast< ::flixel::tweens::FlxTween >();
		HX_STACK_LINE(49)
		return array;
	}
	HX_STACK_LINE(51)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,fastSplice_flixel_tweens_FlxTween,return )

Void FlxArrayUtil_obj::setLength_Int( Array< int > array,int newLength){
{
		HX_STACK_FRAME("flixel.util.FlxArrayUtil","setLength_Int",0x3efc372d,"flixel.util.FlxArrayUtil.setLength_Int","flixel/util/FlxArrayUtil.hx",16,0xa0dc755b)
		HX_STACK_ARG(array,"array")
		HX_STACK_ARG(newLength,"newLength")
		HX_STACK_LINE(17)
		if (((newLength < (int)0))){
			HX_STACK_LINE(17)
			return null();
		}
		HX_STACK_LINE(18)
		int oldLength = array->length;		HX_STACK_VAR(oldLength,"oldLength");
		HX_STACK_LINE(19)
		int diff = (newLength - oldLength);		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(20)
		if (((diff < (int)0))){
			HX_STACK_LINE(25)
			diff = -(diff);
			HX_STACK_LINE(26)
			{
				HX_STACK_LINE(26)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(26)
				while((true)){
					HX_STACK_LINE(26)
					if ((!(((_g < diff))))){
						HX_STACK_LINE(26)
						break;
					}
					HX_STACK_LINE(26)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(28)
					array->pop();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,setLength_Int,(void))

Array< int > FlxArrayUtil_obj::flatten2DArray_Int( Array< ::Dynamic > array){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","flatten2DArray_Int",0x9867551e,"flixel.util.FlxArrayUtil.flatten2DArray_Int","flixel/util/FlxArrayUtil.hx",120,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(121)
	Array< int > result = Array_obj< int >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(123)
	{
		HX_STACK_LINE(123)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(123)
		while((true)){
			HX_STACK_LINE(123)
			if ((!(((_g < array->length))))){
				HX_STACK_LINE(123)
				break;
			}
			HX_STACK_LINE(123)
			Array< int > innerArray = array->__get(_g).StaticCast< Array< int > >();		HX_STACK_VAR(innerArray,"innerArray");
			HX_STACK_LINE(123)
			++(_g);
			HX_STACK_LINE(125)
			Array< int > _g1 = result->concat(innerArray);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(125)
			result = _g1;
		}
	}
	HX_STACK_LINE(128)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxArrayUtil_obj,flatten2DArray_Int,return )

Dynamic FlxArrayUtil_obj::swapAndPop_fastSplice_T( Dynamic array,int index){
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","swapAndPop_fastSplice_T",0xfdfa2694,"flixel.util.FlxArrayUtil.swapAndPop_fastSplice_T","flixel/util/FlxArrayUtil.hx",75,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(76)
	hx::IndexRef((array).mPtr,index) = array->__GetItem((array->__Field(HX_CSTRING("length"),true) - (int)1));
	HX_STACK_LINE(77)
	array->__Field(HX_CSTRING("pop"),true)();
	HX_STACK_LINE(78)
	return array;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,swapAndPop_fastSplice_T,return )

Void FlxArrayUtil_obj::clearArray_flixel_group_FlxTypedGroup_T( Dynamic array,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("flixel.util.FlxArrayUtil","clearArray_flixel_group_FlxTypedGroup_T",0xd9fff6a1,"flixel.util.FlxArrayUtil.clearArray_flixel_group_FlxTypedGroup_T","flixel/util/FlxArrayUtil.hx",92,0xa0dc755b)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(92)
		if (((array != null()))){
			HX_STACK_LINE(94)
			if ((!(recursive))){
				HX_STACK_LINE(96)
				while((true)){
					HX_STACK_LINE(96)
					if ((!(((array->__Field(HX_CSTRING("length"),true) > (int)0))))){
						HX_STACK_LINE(96)
						break;
					}
					HX_STACK_LINE(98)
					array->__Field(HX_CSTRING("pop"),true)();
				}
			}
			else{
				HX_STACK_LINE(103)
				while((true)){
					HX_STACK_LINE(103)
					if ((!(((array->__Field(HX_CSTRING("length"),true) > (int)0))))){
						HX_STACK_LINE(103)
						break;
					}
					HX_STACK_LINE(105)
					Dynamic thing = array->__Field(HX_CSTRING("pop"),true)();		HX_STACK_VAR(thing,"thing");
					HX_STACK_LINE(106)
					if ((::Std_obj::is(thing,hx::ClassOf< Array<int> >()))){
						HX_STACK_LINE(108)
						::flixel::util::FlxArrayUtil_obj::clearArray_clearArray_T(array,recursive);
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,clearArray_flixel_group_FlxTypedGroup_T,(void))

Dynamic FlxArrayUtil_obj::clearArray_clearArray_T;


FlxArrayUtil_obj::FlxArrayUtil_obj()
{
}

Dynamic FlxArrayUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"setLength_Int") ) { return setLength_Int_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"flatten2DArray_Int") ) { return flatten2DArray_Int_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"swapAndPop_fastSplice_T") ) { return swapAndPop_fastSplice_T_dyn(); }
		if (HX_FIELD_EQ(inName,"clearArray_clearArray_T") ) { return clearArray_clearArray_T; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"clearArray_flixel_util_FlxPath") ) { return clearArray_flixel_util_FlxPath_dyn(); }
		if (HX_FIELD_EQ(inName,"fastSplice_flixel_util_FlxPath") ) { return fastSplice_flixel_util_FlxPath_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"fastSplice_flixel_util_FlxTimer") ) { return fastSplice_flixel_util_FlxTimer_dyn(); }
		if (HX_FIELD_EQ(inName,"clearArray_flixel_util_FlxTimer") ) { return clearArray_flixel_util_FlxTimer_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"clearArray_flixel_input_FlxSwipe") ) { return clearArray_flixel_input_FlxSwipe_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"fastSplice_flixel_tweens_FlxTween") ) { return fastSplice_flixel_tweens_FlxTween_dyn(); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"setLength_flixel_group_FlxTypedGroup_T") ) { return setLength_flixel_group_FlxTypedGroup_T_dyn(); }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"clearArray_flixel_group_FlxTypedGroup_T") ) { return clearArray_flixel_group_FlxTypedGroup_T_dyn(); }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"setLength_flixel_system_replay_FrameRecord") ) { return setLength_flixel_system_replay_FrameRecord_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxArrayUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"clearArray_clearArray_T") ) { clearArray_clearArray_T=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxArrayUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("clearArray_flixel_input_FlxSwipe"),
	HX_CSTRING("setLength_flixel_system_replay_FrameRecord"),
	HX_CSTRING("setLength_flixel_group_FlxTypedGroup_T"),
	HX_CSTRING("fastSplice_flixel_util_FlxTimer"),
	HX_CSTRING("clearArray_flixel_util_FlxTimer"),
	HX_CSTRING("clearArray_flixel_util_FlxPath"),
	HX_CSTRING("fastSplice_flixel_util_FlxPath"),
	HX_CSTRING("fastSplice_flixel_tweens_FlxTween"),
	HX_CSTRING("setLength_Int"),
	HX_CSTRING("flatten2DArray_Int"),
	HX_CSTRING("swapAndPop_fastSplice_T"),
	HX_CSTRING("clearArray_flixel_group_FlxTypedGroup_T"),
	HX_CSTRING("clearArray_clearArray_T"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxArrayUtil_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxArrayUtil_obj::clearArray_clearArray_T,"clearArray_clearArray_T");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxArrayUtil_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxArrayUtil_obj::clearArray_clearArray_T,"clearArray_clearArray_T");
};

#endif

Class FlxArrayUtil_obj::__mClass;

void FlxArrayUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxArrayUtil"), hx::TCanCast< FlxArrayUtil_obj> ,sStaticFields,sMemberFields,
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

void FlxArrayUtil_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
