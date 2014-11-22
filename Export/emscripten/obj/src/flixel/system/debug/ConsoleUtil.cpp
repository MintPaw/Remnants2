#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_debug_ConsoleUtil
#include <flixel/system/debug/ConsoleUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_LogStyle
#include <flixel/system/debug/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
namespace flixel{
namespace system{
namespace debug{

Void ConsoleUtil_obj::__construct()
{
	return null();
}

//ConsoleUtil_obj::~ConsoleUtil_obj() { }

Dynamic ConsoleUtil_obj::__CreateEmpty() { return  new ConsoleUtil_obj; }
hx::ObjectPtr< ConsoleUtil_obj > ConsoleUtil_obj::__new()
{  hx::ObjectPtr< ConsoleUtil_obj > result = new ConsoleUtil_obj();
	result->__construct();
	return result;}

Dynamic ConsoleUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConsoleUtil_obj > result = new ConsoleUtil_obj();
	result->__construct();
	return result;}

bool ConsoleUtil_obj::callFunction( Dynamic Function,Dynamic Args){
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","callFunction",0x976d0913,"flixel.system.debug.ConsoleUtil.callFunction","flixel/system/debug/ConsoleUtil.hx",26,0x3784f9ee)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Args,"Args")
	HX_STACK_LINE(26)
	try
	{
	HX_STACK_CATCHABLE(::openfl::errors::ArgumentError, 0);
	{
		HX_STACK_LINE(28)
		::Reflect_obj::callMethod(null(),Function,Args);
		HX_STACK_LINE(29)
		return true;
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::openfl::errors::ArgumentError >() ){
			HX_STACK_BEGIN_CATCH
			::openfl::errors::ArgumentError e = __e;{
				HX_STACK_LINE(33)
				if (((e->errorID == (int)1063))){
					HX_STACK_LINE(38)
					::String _g = ::flixel::util::FlxStringUtil_obj::filterDigits(e->message).charAt((int)4);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(38)
					int expected = ::Std_obj::parseInt(_g);		HX_STACK_VAR(expected,"expected");
					HX_STACK_LINE(41)
					if (((expected < Args->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(44)
						Dynamic shortenedArgs = Args->__Field(HX_CSTRING("slice"),true)((int)0,expected);		HX_STACK_VAR(shortenedArgs,"shortenedArgs");
						HX_STACK_LINE(46)
						::Reflect_obj::callMethod(null(),Function,shortenedArgs);
					}
					else{
						HX_STACK_LINE(52)
						return false;
					}
					HX_STACK_LINE(55)
					return true;
				}
				HX_STACK_LINE(58)
				return false;
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(26)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ConsoleUtil_obj,callFunction,return )

Dynamic ConsoleUtil_obj::findCommand( ::String Alias,Dynamic Commands){
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","findCommand",0x57346d75,"flixel.system.debug.ConsoleUtil.findCommand","flixel/system/debug/ConsoleUtil.hx",70,0x3784f9ee)
	HX_STACK_ARG(Alias,"Alias")
	HX_STACK_ARG(Commands,"Commands")
	HX_STACK_LINE(71)
	{
		HX_STACK_LINE(71)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(71)
		int _g = Commands->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(71)
		while((true)){
			HX_STACK_LINE(71)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(71)
				break;
			}
			HX_STACK_LINE(71)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(73)
			int _g2 = Commands->__GetItem(i)->__Field(HX_CSTRING("aliases"),true)->__Field(HX_CSTRING("indexOf"),true)(Alias,null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(73)
			if (((_g2 != (int)-1))){
				HX_STACK_LINE(75)
				return Commands->__GetItem(i);
			}
		}
	}
	HX_STACK_LINE(78)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ConsoleUtil_obj,findCommand,return )

Dynamic ConsoleUtil_obj::resolveObjectAndVariable( ::String ObjectAndVariable,Dynamic Object){
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","resolveObjectAndVariable",0x216061e5,"flixel.system.debug.ConsoleUtil.resolveObjectAndVariable","flixel/system/debug/ConsoleUtil.hx",126,0x3784f9ee)
	HX_STACK_ARG(ObjectAndVariable,"ObjectAndVariable")
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(127)
	Array< ::String > searchArr = ObjectAndVariable.split(HX_CSTRING("."));		HX_STACK_VAR(searchArr,"searchArr");
	HX_STACK_LINE(129)
	if (((searchArr->length == (int)1))){
		struct _Function_2_1{
			inline static Dynamic Block( ::String &ObjectAndVariable,Dynamic &Object){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleUtil.hx",131,0x3784f9ee)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("object") , Object,false);
					__result->Add(HX_CSTRING("variableName") , ObjectAndVariable,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(131)
		return _Function_2_1::Block(ObjectAndVariable,Object);
	}
	HX_STACK_LINE(134)
	::String variableName = searchArr->join(HX_CSTRING("."));		HX_STACK_VAR(variableName,"variableName");
	HX_STACK_LINE(136)
	if ((!(::Reflect_obj::isObject(Object)))){
		HX_STACK_LINE(138)
		{
			HX_STACK_LINE(138)
			::String _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(138)
			{
				HX_STACK_LINE(138)
				::Class cl;		HX_STACK_VAR(cl,"cl");
				HX_STACK_LINE(138)
				if ((::Std_obj::is(Object,hx::ClassOf< ::Class >()))){
					HX_STACK_LINE(138)
					cl = Object;
				}
				else{
					HX_STACK_LINE(138)
					::Class _g = ::Type_obj::getClass(Object);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(138)
					cl = _g;
				}
				HX_STACK_LINE(138)
				::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(138)
				if (((s != null()))){
					HX_STACK_LINE(138)
					::String _g1 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(138)
					s = _g1;
					HX_STACK_LINE(138)
					int _g2 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(138)
					int _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(138)
					::String _g4 = s.substr(_g3,null());		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(138)
					s = _g4;
				}
				HX_STACK_LINE(138)
				_g5 = s;
			}
			HX_STACK_LINE(138)
			::String _g6 = (HX_CSTRING("'") + _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(138)
			Dynamic Data = (_g6 + HX_CSTRING("' is not a valid Object"));		HX_STACK_VAR(Data,"Data");
			HX_STACK_LINE(138)
			Dynamic();
		}
		HX_STACK_LINE(139)
		return null();
	}
	HX_STACK_LINE(143)
	int l = searchArr->length;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(144)
	Dynamic tempObj = Object;		HX_STACK_VAR(tempObj,"tempObj");
	HX_STACK_LINE(145)
	::String tempVarName = HX_CSTRING("");		HX_STACK_VAR(tempVarName,"tempVarName");
	HX_STACK_LINE(146)
	{
		HX_STACK_LINE(146)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(146)
		while((true)){
			HX_STACK_LINE(146)
			if ((!(((_g < l))))){
				HX_STACK_LINE(146)
				break;
			}
			HX_STACK_LINE(146)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(148)
			tempVarName = searchArr->__get(i);
			HX_STACK_LINE(151)
			if (((i < (l - (int)1)))){
				HX_STACK_LINE(153)
				Dynamic _g7 = ::flixel::system::debug::ConsoleUtil_obj::resolveProperty(tempObj,tempVarName);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(153)
				tempObj = _g7;
				HX_STACK_LINE(155)
				if (((tempObj == null()))){
					HX_STACK_LINE(156)
					return null();
				}
			}
		}
	}
	struct _Function_1_1{
		inline static Dynamic Block( ::String &tempVarName,Dynamic &tempObj){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleUtil.hx",160,0x3784f9ee)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("object") , tempObj,false);
				__result->Add(HX_CSTRING("variableName") , tempVarName,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(160)
	return _Function_1_1::Block(tempVarName,tempObj);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ConsoleUtil_obj,resolveObjectAndVariable,return )

Dynamic ConsoleUtil_obj::resolveProperty( Dynamic obj,::String propName){
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","resolveProperty",0x55fa0c44,"flixel.system.debug.ConsoleUtil.resolveProperty","flixel/system/debug/ConsoleUtil.hx",170,0x3784f9ee)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_ARG(propName,"propName")
	HX_STACK_LINE(172)
	Array< int > arrayIndices = Array_obj< int >::__new();		HX_STACK_VAR(arrayIndices,"arrayIndices");
	HX_STACK_LINE(173)
	Array< ::String > arrayIndicesStr = propName.split(HX_CSTRING("["));		HX_STACK_VAR(arrayIndicesStr,"arrayIndicesStr");
	HX_STACK_LINE(174)
	::String _g = arrayIndicesStr->shift();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(174)
	propName = _g;
	HX_STACK_LINE(175)
	{
		HX_STACK_LINE(175)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(175)
		while((true)){
			HX_STACK_LINE(175)
			if ((!(((_g1 < arrayIndicesStr->length))))){
				HX_STACK_LINE(175)
				break;
			}
			HX_STACK_LINE(175)
			::String indice = arrayIndicesStr->__get(_g1);		HX_STACK_VAR(indice,"indice");
			HX_STACK_LINE(175)
			++(_g1);
			HX_STACK_LINE(178)
			::String _g11 = indice.charAt((indice.length - (int)1));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(178)
			if (((_g11 != HX_CSTRING("]")))){
				HX_STACK_LINE(180)
				{
					HX_STACK_LINE(180)
					::String _g7;		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(180)
					{
						HX_STACK_LINE(180)
						::Class cl;		HX_STACK_VAR(cl,"cl");
						HX_STACK_LINE(180)
						if ((::Std_obj::is(obj,hx::ClassOf< ::Class >()))){
							HX_STACK_LINE(180)
							cl = obj;
						}
						else{
							HX_STACK_LINE(180)
							::Class _g2 = ::Type_obj::getClass(obj);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(180)
							cl = _g2;
						}
						HX_STACK_LINE(180)
						::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(180)
						if (((s != null()))){
							HX_STACK_LINE(180)
							::String _g3 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(180)
							s = _g3;
							HX_STACK_LINE(180)
							int _g4 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(180)
							int _g5 = (_g4 + (int)1);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(180)
							::String _g6 = s.substr(_g5,null());		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(180)
							s = _g6;
						}
						HX_STACK_LINE(180)
						_g7 = s;
					}
					HX_STACK_LINE(180)
					::String _g8 = (HX_CSTRING("'") + _g7);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(180)
					::String _g9 = (_g8 + HX_CSTRING("' does not have a field '"));		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(180)
					::String _g10 = (_g9 + propName);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(180)
					Dynamic Data = (_g10 + HX_CSTRING("'"));		HX_STACK_VAR(Data,"Data");
					HX_STACK_LINE(180)
					Dynamic();
				}
				HX_STACK_LINE(181)
				return null();
			}
			HX_STACK_LINE(184)
			::String _g111 = indice.substr((int)0,(indice.length - (int)1));		HX_STACK_VAR(_g111,"_g111");
			HX_STACK_LINE(184)
			Dynamic index = ::Std_obj::parseInt(_g111);		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(185)
			if (((index == null()))){
				HX_STACK_LINE(187)
				{
					HX_STACK_LINE(187)
					::String _g17;		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(187)
					{
						HX_STACK_LINE(187)
						::Class cl;		HX_STACK_VAR(cl,"cl");
						HX_STACK_LINE(187)
						if ((::Std_obj::is(obj,hx::ClassOf< ::Class >()))){
							HX_STACK_LINE(187)
							cl = obj;
						}
						else{
							HX_STACK_LINE(187)
							::Class _g12 = ::Type_obj::getClass(obj);		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(187)
							cl = _g12;
						}
						HX_STACK_LINE(187)
						::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(187)
						if (((s != null()))){
							HX_STACK_LINE(187)
							::String _g13 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g13,"_g13");
							HX_STACK_LINE(187)
							s = _g13;
							HX_STACK_LINE(187)
							int _g14 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g14,"_g14");
							HX_STACK_LINE(187)
							int _g15 = (_g14 + (int)1);		HX_STACK_VAR(_g15,"_g15");
							HX_STACK_LINE(187)
							::String _g16 = s.substr(_g15,null());		HX_STACK_VAR(_g16,"_g16");
							HX_STACK_LINE(187)
							s = _g16;
						}
						HX_STACK_LINE(187)
						_g17 = s;
					}
					HX_STACK_LINE(187)
					::String _g18 = (HX_CSTRING("'") + _g17);		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(187)
					::String _g19 = (_g18 + HX_CSTRING("' does not have a field '"));		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(187)
					::String _g20 = (_g19 + propName);		HX_STACK_VAR(_g20,"_g20");
					HX_STACK_LINE(187)
					Dynamic Data = (_g20 + HX_CSTRING("'"));		HX_STACK_VAR(Data,"Data");
					HX_STACK_LINE(187)
					Dynamic();
				}
				HX_STACK_LINE(188)
				return null();
			}
			HX_STACK_LINE(190)
			arrayIndices->push(index);
		}
	}
	HX_STACK_LINE(193)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(195)
		Dynamic _g21;		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(195)
		_g21 = (  (((obj == null()))) ? Dynamic(null()) : Dynamic(obj->__Field(propName,true)) );
		HX_STACK_LINE(195)
		obj = _g21;
		HX_STACK_LINE(197)
		{
			HX_STACK_LINE(197)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(197)
			while((true)){
				HX_STACK_LINE(197)
				if ((!(((_g1 < arrayIndices->length))))){
					HX_STACK_LINE(197)
					break;
				}
				HX_STACK_LINE(197)
				int index = arrayIndices->__get(_g1);		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(197)
				++(_g1);
				HX_STACK_LINE(199)
				if (((  ((!((!(::Std_obj::is(obj,hx::ClassOf< Array<int> >())))))) ? bool((obj->__Field(HX_CSTRING("length"),true) <= index)) : bool(true) ))){
					HX_STACK_LINE(201)
					::String _g27;		HX_STACK_VAR(_g27,"_g27");
					HX_STACK_LINE(201)
					{
						HX_STACK_LINE(201)
						::Class cl;		HX_STACK_VAR(cl,"cl");
						HX_STACK_LINE(201)
						if ((::Std_obj::is(obj,hx::ClassOf< ::Class >()))){
							HX_STACK_LINE(201)
							cl = obj;
						}
						else{
							HX_STACK_LINE(201)
							::Class _g22 = ::Type_obj::getClass(obj);		HX_STACK_VAR(_g22,"_g22");
							HX_STACK_LINE(201)
							cl = _g22;
						}
						HX_STACK_LINE(201)
						::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(201)
						if (((s != null()))){
							HX_STACK_LINE(201)
							::String _g23 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g23,"_g23");
							HX_STACK_LINE(201)
							s = _g23;
							HX_STACK_LINE(201)
							int _g24 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g24,"_g24");
							HX_STACK_LINE(201)
							int _g25 = (_g24 + (int)1);		HX_STACK_VAR(_g25,"_g25");
							HX_STACK_LINE(201)
							::String _g26 = s.substr(_g25,null());		HX_STACK_VAR(_g26,"_g26");
							HX_STACK_LINE(201)
							s = _g26;
						}
						HX_STACK_LINE(201)
						_g27 = s;
					}
					HX_STACK_LINE(201)
					::String _g28 = (HX_CSTRING("'") + _g27);		HX_STACK_VAR(_g28,"_g28");
					HX_STACK_LINE(201)
					::String _g29 = (_g28 + HX_CSTRING("' does not have index '"));		HX_STACK_VAR(_g29,"_g29");
					HX_STACK_LINE(201)
					::String _g30 = (_g29 + index);		HX_STACK_VAR(_g30,"_g30");
					HX_STACK_LINE(201)
					Dynamic Data = (_g30 + HX_CSTRING("' or is not an Array"));		HX_STACK_VAR(Data,"Data");
					HX_STACK_LINE(201)
					Dynamic();
				}
				HX_STACK_LINE(203)
				obj = obj->__GetItem(index);
			}
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(208)
				{
					HX_STACK_LINE(208)
					::String _g36;		HX_STACK_VAR(_g36,"_g36");
					HX_STACK_LINE(208)
					{
						HX_STACK_LINE(208)
						::Class cl;		HX_STACK_VAR(cl,"cl");
						HX_STACK_LINE(208)
						if ((::Std_obj::is(obj,hx::ClassOf< ::Class >()))){
							HX_STACK_LINE(208)
							cl = obj;
						}
						else{
							HX_STACK_LINE(208)
							::Class _g31 = ::Type_obj::getClass(obj);		HX_STACK_VAR(_g31,"_g31");
							HX_STACK_LINE(208)
							cl = _g31;
						}
						HX_STACK_LINE(208)
						::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(208)
						if (((s != null()))){
							HX_STACK_LINE(208)
							::String _g32 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g32,"_g32");
							HX_STACK_LINE(208)
							s = _g32;
							HX_STACK_LINE(208)
							int _g33 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g33,"_g33");
							HX_STACK_LINE(208)
							int _g34 = (_g33 + (int)1);		HX_STACK_VAR(_g34,"_g34");
							HX_STACK_LINE(208)
							::String _g35 = s.substr(_g34,null());		HX_STACK_VAR(_g35,"_g35");
							HX_STACK_LINE(208)
							s = _g35;
						}
						HX_STACK_LINE(208)
						_g36 = s;
					}
					HX_STACK_LINE(208)
					::String _g37 = (HX_CSTRING("'") + _g36);		HX_STACK_VAR(_g37,"_g37");
					HX_STACK_LINE(208)
					::String _g38 = (_g37 + HX_CSTRING("' does not have a field '"));		HX_STACK_VAR(_g38,"_g38");
					HX_STACK_LINE(208)
					::String _g39 = (_g38 + propName);		HX_STACK_VAR(_g39,"_g39");
					HX_STACK_LINE(208)
					Dynamic Data = (_g39 + HX_CSTRING("'"));		HX_STACK_VAR(Data,"Data");
					HX_STACK_LINE(208)
					Dynamic();
				}
				HX_STACK_LINE(209)
				return null();
			}
		}
	}
	HX_STACK_LINE(211)
	return obj;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ConsoleUtil_obj,resolveProperty,return )

Dynamic ConsoleUtil_obj::resolveObjectAndVariableFromMap( ::String ObjectAndVariable,::haxe::ds::StringMap ObjectMap){
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","resolveObjectAndVariableFromMap",0x374cd7ed,"flixel.system.debug.ConsoleUtil.resolveObjectAndVariableFromMap","flixel/system/debug/ConsoleUtil.hx",223,0x3784f9ee)
	HX_STACK_ARG(ObjectAndVariable,"ObjectAndVariable")
	HX_STACK_ARG(ObjectMap,"ObjectMap")
	HX_STACK_LINE(224)
	Array< ::String > splitString = ObjectAndVariable.split(HX_CSTRING("."));		HX_STACK_VAR(splitString,"splitString");
	HX_STACK_LINE(225)
	Dynamic object = ObjectMap->get(splitString->__get((int)0));		HX_STACK_VAR(object,"object");
	HX_STACK_LINE(226)
	splitString->shift();
	HX_STACK_LINE(227)
	::String _g = splitString->join(HX_CSTRING("."));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(227)
	ObjectAndVariable = _g;
	HX_STACK_LINE(228)
	return ::flixel::system::debug::ConsoleUtil_obj::resolveObjectAndVariable(ObjectAndVariable,object);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ConsoleUtil_obj,resolveObjectAndVariableFromMap,return )

Array< ::String > ConsoleUtil_obj::getInstanceFieldsAdvanced( ::Class cl,hx::Null< int >  __o_numSuperClassesToInclude){
int numSuperClassesToInclude = __o_numSuperClassesToInclude.Default(0);
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","getInstanceFieldsAdvanced",0x67fa5b89,"flixel.system.debug.ConsoleUtil.getInstanceFieldsAdvanced","flixel/system/debug/ConsoleUtil.hx",242,0x3784f9ee)
	HX_STACK_ARG(cl,"cl")
	HX_STACK_ARG(numSuperClassesToInclude,"numSuperClassesToInclude")
{
		HX_STACK_LINE(243)
		Array< ::String > fields = ::Type_obj::getInstanceFields(cl);		HX_STACK_VAR(fields,"fields");
		HX_STACK_LINE(244)
		if (((numSuperClassesToInclude >= (int)0))){
			HX_STACK_LINE(246)
			::Class curClass = ::Type_obj::getSuperClass(cl);		HX_STACK_VAR(curClass,"curClass");
			HX_STACK_LINE(247)
			Array< ::Dynamic > superClasses = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(superClasses,"superClasses");
			HX_STACK_LINE(248)
			while((true)){
				HX_STACK_LINE(248)
				if ((!(((curClass != null()))))){
					HX_STACK_LINE(248)
					break;
				}
				HX_STACK_LINE(250)
				superClasses->push(curClass);
				HX_STACK_LINE(251)
				::Class _g = ::Type_obj::getSuperClass(curClass);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(251)
				curClass = _g;
			}
			HX_STACK_LINE(254)
			superClasses->reverse();
			HX_STACK_LINE(256)
			if (((numSuperClassesToInclude > superClasses->length))){
				HX_STACK_LINE(257)
				numSuperClassesToInclude = superClasses->length;
			}
			HX_STACK_LINE(259)
			{
				HX_STACK_LINE(259)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(259)
				int _g = (superClasses->length - numSuperClassesToInclude);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(259)
				while((true)){
					HX_STACK_LINE(259)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(259)
						break;
					}
					HX_STACK_LINE(259)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(261)
					Array< ::String > superFields = ::Type_obj::getInstanceFields(superClasses->__get(i).StaticCast< ::Class >());		HX_STACK_VAR(superFields,"superFields");
					HX_STACK_LINE(262)
					{
						HX_STACK_LINE(262)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(262)
						while((true)){
							HX_STACK_LINE(262)
							if ((!(((_g2 < superFields->length))))){
								HX_STACK_LINE(262)
								break;
							}
							HX_STACK_LINE(262)
							::String superField = superFields->__get(_g2);		HX_STACK_VAR(superField,"superField");
							HX_STACK_LINE(262)
							++(_g2);
							HX_STACK_LINE(264)
							int _g11 = fields->indexOf(superField,null());		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(264)
							if (((_g11 != (int)-1))){
								HX_STACK_LINE(265)
								fields->remove(superField);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(270)
		return fields;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ConsoleUtil_obj,getInstanceFieldsAdvanced,return )

::String ConsoleUtil_obj::getTypeName( Dynamic v){
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","getTypeName",0xb19a743e,"flixel.system.debug.ConsoleUtil.getTypeName","flixel/system/debug/ConsoleUtil.hx",274,0x3784f9ee)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(275)
	::ValueType type = ::Type_obj::_typeof(v);		HX_STACK_VAR(type,"type");
	HX_STACK_LINE(277)
	switch( (int)(type->__Index())){
		case (int)6: {
			HX_STACK_LINE(277)
			::Class c = (::ValueType(type))->__Param(0);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(280)
			{
				HX_STACK_LINE(280)
				::Class cl;		HX_STACK_VAR(cl,"cl");
				HX_STACK_LINE(280)
				if ((::Std_obj::is(c,hx::ClassOf< ::Class >()))){
					HX_STACK_LINE(280)
					cl = c;
				}
				else{
					HX_STACK_LINE(280)
					::Class _g = ::Type_obj::getClass(c);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(280)
					cl = _g;
				}
				HX_STACK_LINE(280)
				::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(280)
				if (((s != null()))){
					HX_STACK_LINE(280)
					::String _g1 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(280)
					s = _g1;
					HX_STACK_LINE(280)
					{
						HX_STACK_LINE(280)
						int _g2 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(280)
						int _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(280)
						::String _g4 = s.substr(_g3,null());		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(280)
						s = _g4;
					}
				}
				HX_STACK_LINE(280)
				return s;
			}
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(277)
			::Enum e = (::ValueType(type))->__Param(0);		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(281)
			{
				HX_STACK_LINE(282)
				::String name = ::Type_obj::getEnumName(e);		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(283)
				int _g5 = name.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(283)
				int _g6 = (_g5 + (int)1);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(283)
				return name.substr(_g6,null());
			}
		}
		;break;
		default: {
			HX_STACK_LINE(285)
			return ::Std_obj::string(type).substr((int)1,null());
		}
	}
	HX_STACK_LINE(277)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,getTypeName,return )

Dynamic ConsoleUtil_obj::parseBool( ::String s){
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","parseBool",0xb0a762a0,"flixel.system.debug.ConsoleUtil.parseBool","flixel/system/debug/ConsoleUtil.hx",298,0x3784f9ee)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(298)
	if (((s == HX_CSTRING("true")))){
		HX_STACK_LINE(299)
		return true;
	}
	else{
		HX_STACK_LINE(300)
		if (((s == HX_CSTRING("false")))){
			HX_STACK_LINE(301)
			return false;
		}
		else{
			HX_STACK_LINE(303)
			return null();
		}
	}
	HX_STACK_LINE(298)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,parseBool,return )

Dynamic ConsoleUtil_obj::parseArray( ::String s){
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","parseArray",0x50663663,"flixel.system.debug.ConsoleUtil.parseArray","flixel/system/debug/ConsoleUtil.hx",314,0x3784f9ee)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(315)
	Dynamic returnArray = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(returnArray,"returnArray");
	HX_STACK_LINE(317)
	::String _g = s.charAt((int)0);		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static bool Block( ::String &s){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleUtil.hx",317,0x3784f9ee)
			{
				HX_STACK_LINE(317)
				::String _g1 = s.charAt((s.length - (int)1));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(317)
				return (_g1 == HX_CSTRING("]"));
			}
			return null();
		}
	};
	HX_STACK_LINE(317)
	if (((  (((_g == HX_CSTRING("[")))) ? bool(_Function_1_1::Block(s)) : bool(false) ))){
		HX_STACK_LINE(320)
		Array< ::String > values = Array_obj< ::String >::__new();		HX_STACK_VAR(values,"values");
		HX_STACK_LINE(321)
		::String _g2 = s.substr((int)1,(s.length - (int)2));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(321)
		s = _g2;
		HX_STACK_LINE(322)
		::String value = HX_CSTRING("");		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(323)
		bool skipComma = false;		HX_STACK_VAR(skipComma,"skipComma");
		HX_STACK_LINE(324)
		{
			HX_STACK_LINE(324)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(324)
			int _g3 = s.length;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(324)
			while((true)){
				HX_STACK_LINE(324)
				if ((!(((_g1 < _g3))))){
					HX_STACK_LINE(324)
					break;
				}
				HX_STACK_LINE(324)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(326)
				::String c = s.charAt(i);		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(327)
				if (((bool((c == HX_CSTRING(","))) && bool(!(skipComma))))){
					HX_STACK_LINE(329)
					values->push(value);
					HX_STACK_LINE(330)
					value = HX_CSTRING("");
				}
				else{
					HX_STACK_LINE(333)
					hx::AddEq(value,c);
				}
				HX_STACK_LINE(334)
				if (((c == HX_CSTRING("[")))){
					HX_STACK_LINE(335)
					skipComma = true;
				}
				else{
					HX_STACK_LINE(336)
					if (((c == HX_CSTRING("]")))){
						HX_STACK_LINE(337)
						skipComma = false;
					}
				}
			}
		}
		HX_STACK_LINE(339)
		values->push(value);
		HX_STACK_LINE(341)
		{
			HX_STACK_LINE(341)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(341)
			while((true)){
				HX_STACK_LINE(341)
				if ((!(((_g1 < values->length))))){
					HX_STACK_LINE(341)
					break;
				}
				HX_STACK_LINE(341)
				::String value1 = values->__get(_g1);		HX_STACK_VAR(value1,"value1");
				HX_STACK_LINE(341)
				++(_g1);
				HX_STACK_LINE(343)
				Dynamic parsedValue = null();		HX_STACK_VAR(parsedValue,"parsedValue");
				HX_STACK_LINE(344)
				::String _g3 = ::StringTools_obj::trim(value1);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(344)
				value1 = _g3;
				HX_STACK_LINE(345)
				Dynamic _g4 = ::flixel::system::debug::ConsoleUtil_obj::parseBool(value1);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(345)
				if (((_g4 != null()))){
					HX_STACK_LINE(346)
					Dynamic _g5 = ::flixel::system::debug::ConsoleUtil_obj::parseBool(value1);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(346)
					parsedValue = _g5;
				}
				else{
					HX_STACK_LINE(347)
					Float _g6 = ::Std_obj::parseFloat(value1);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(347)
					if ((!(::Math_obj::isNaN(_g6)))){
						HX_STACK_LINE(348)
						Float _g7 = ::Std_obj::parseFloat(value1);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(348)
						parsedValue = _g7;
					}
					else{
						HX_STACK_LINE(352)
						int start = value1.indexOf(HX_CSTRING("\""),null());		HX_STACK_VAR(start,"start");
						HX_STACK_LINE(353)
						int end = value1.lastIndexOf(HX_CSTRING("\""),null());		HX_STACK_VAR(end,"end");
						HX_STACK_LINE(354)
						if (((bool((start != end)) && bool((start != (int)-1))))){
							HX_STACK_LINE(355)
							::String _g8 = value1.substr((start + (int)1),end);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(355)
							parsedValue = _g8;
						}
						HX_STACK_LINE(358)
						if (((parsedValue == null()))){
							HX_STACK_LINE(359)
							Dynamic _g9 = ::flixel::system::debug::ConsoleUtil_obj::parseArray(value1);		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(359)
							parsedValue = _g9;
						}
					}
				}
				HX_STACK_LINE(362)
				if (((parsedValue != null()))){
					HX_STACK_LINE(363)
					returnArray->__Field(HX_CSTRING("push"),true)(parsedValue);
				}
				else{
					HX_STACK_LINE(365)
					return null();
				}
			}
		}
		HX_STACK_LINE(367)
		return returnArray;
	}
	HX_STACK_LINE(369)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,parseArray,return )

Void ConsoleUtil_obj::log( Dynamic Text){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","log",0x8132f4e7,"flixel.system.debug.ConsoleUtil.log","flixel/system/debug/ConsoleUtil.hx",379,0x3784f9ee)
		HX_STACK_ARG(Text,"Text")
		HX_STACK_LINE(379)
		::flixel::FlxG_obj::log->advanced(Dynamic( Array_obj<Dynamic>::__new().Add(Text)),::flixel::system::debug::LogStyle_obj::CONSOLE,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,log,(void))


ConsoleUtil_obj::ConsoleUtil_obj()
{
}

Dynamic ConsoleUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"parseBool") ) { return parseBool_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parseArray") ) { return parseArray_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"findCommand") ) { return findCommand_dyn(); }
		if (HX_FIELD_EQ(inName,"getTypeName") ) { return getTypeName_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"callFunction") ) { return callFunction_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"resolveProperty") ) { return resolveProperty_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"resolveObjectAndVariable") ) { return resolveObjectAndVariable_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getInstanceFieldsAdvanced") ) { return getInstanceFieldsAdvanced_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"resolveObjectAndVariableFromMap") ) { return resolveObjectAndVariableFromMap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ConsoleUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ConsoleUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("callFunction"),
	HX_CSTRING("findCommand"),
	HX_CSTRING("resolveObjectAndVariable"),
	HX_CSTRING("resolveProperty"),
	HX_CSTRING("resolveObjectAndVariableFromMap"),
	HX_CSTRING("getInstanceFieldsAdvanced"),
	HX_CSTRING("getTypeName"),
	HX_CSTRING("parseBool"),
	HX_CSTRING("parseArray"),
	HX_CSTRING("log"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConsoleUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConsoleUtil_obj::__mClass,"__mClass");
};

#endif

Class ConsoleUtil_obj::__mClass;

void ConsoleUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.ConsoleUtil"), hx::TCanCast< ConsoleUtil_obj> ,sStaticFields,sMemberFields,
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

void ConsoleUtil_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
