#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
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
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_U
#include <flixel/addons/ui/U.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml_Printer
#include <haxe/xml/Printer.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BlendMode
#include <openfl/_v2/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_ColorTransform
#include <openfl/_v2/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Matrix
#include <openfl/_v2/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void U_obj::__construct()
{
	return null();
}

//U_obj::~U_obj() { }

Dynamic U_obj::__CreateEmpty() { return  new U_obj; }
hx::ObjectPtr< U_obj > U_obj::__new()
{  hx::ObjectPtr< U_obj > result = new U_obj();
	result->__construct();
	return result;}

Dynamic U_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< U_obj > result = new U_obj();
	result->__construct();
	return result;}

::String U_obj::xml_str( ::Xml data,::String att,hx::Null< bool >  __o_lower_case,::String __o_default_str){
bool lower_case = __o_lower_case.Default(false);
::String default_str = __o_default_str.Default(HX_CSTRING(""));
	HX_STACK_FRAME("flixel.addons.ui.U","xml_str",0xebebbe9f,"flixel.addons.ui.U.xml_str","flixel/addons/ui/U.hx",40,0x74647d9b)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(att,"att")
	HX_STACK_ARG(lower_case,"lower_case")
	HX_STACK_ARG(default_str,"default_str")
{
		HX_STACK_LINE(41)
		::String _g = data->get(att);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(41)
		if (((_g != null()))){
			HX_STACK_LINE(42)
			if ((lower_case)){
				HX_STACK_LINE(43)
				return data->get(att).toLowerCase();
			}
			else{
				HX_STACK_LINE(45)
				return data->get(att);
			}
		}
		HX_STACK_LINE(47)
		return default_str;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(U_obj,xml_str,return )

Float U_obj::perc_to_float( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","perc_to_float",0xc1657e67,"flixel.addons.ui.U.perc_to_float","flixel/addons/ui/U.hx",56,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(57)
	int _g = str.lastIndexOf(HX_CSTRING("%"),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(57)
	if (((_g == (str.length - (int)1)))){
		HX_STACK_LINE(58)
		::String _g1 = str.substr((int)0,(str.length - (int)1));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(58)
		str = _g1;
		HX_STACK_LINE(59)
		::EReg r = ::EReg_obj::__new(HX_CSTRING("([0-9]+)?(\\.)?([0-9]*)?"),HX_CSTRING(""));		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(60)
		if ((r->match(str))){
			HX_STACK_LINE(61)
			Dynamic match = r->matchedPos();		HX_STACK_VAR(match,"match");
			HX_STACK_LINE(62)
			if (((bool((match->__Field(HX_CSTRING("pos"),true) == (int)0)) && bool((match->__Field(HX_CSTRING("len"),true) == str.length))))){
				HX_STACK_LINE(63)
				Float perc_float = ::Std_obj::parseFloat(str);		HX_STACK_VAR(perc_float,"perc_float");
				HX_STACK_LINE(64)
				hx::DivEq(perc_float,(int)100);
				HX_STACK_LINE(65)
				return perc_float;
			}
		}
	}
	HX_STACK_LINE(69)
	return ::Math_obj::NaN;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,perc_to_float,return )

bool U_obj::isStrNum( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","isStrNum",0x399f4549,"flixel.addons.ui.U.isStrNum","flixel/addons/ui/U.hx",72,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(73)
	::EReg r = ::EReg_obj::__new(HX_CSTRING("-?([0-9]+)?(\\.)?([0-9]*)?"),HX_CSTRING(""));		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(74)
	if ((r->match(str))){
		HX_STACK_LINE(75)
		Dynamic p = r->matchedPos();		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(76)
		if (((bool((p->__Field(HX_CSTRING("pos"),true) == (int)0)) && bool((p->__Field(HX_CSTRING("len"),true) == str.length))))){
			HX_STACK_LINE(77)
			return true;
		}
	}
	HX_STACK_LINE(80)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,isStrNum,return )

bool U_obj::isStrInt( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","isStrInt",0x399b73f2,"flixel.addons.ui.U.isStrInt","flixel/addons/ui/U.hx",83,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(84)
	::EReg r = ::EReg_obj::__new(HX_CSTRING("[0-9]+"),HX_CSTRING(""));		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(85)
	if ((r->match(str))){
		HX_STACK_LINE(86)
		Dynamic p = r->matchedPos();		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(87)
		if (((bool((p->__Field(HX_CSTRING("pos"),true) == (int)0)) && bool((p->__Field(HX_CSTRING("len"),true) == str.length))))){
			HX_STACK_LINE(88)
			return true;
		}
	}
	HX_STACK_LINE(91)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,isStrInt,return )

bool U_obj::isStrFloat( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","isStrFloat",0xb2cc335f,"flixel.addons.ui.U.isStrFloat","flixel/addons/ui/U.hx",94,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(95)
	::EReg r = ::EReg_obj::__new(HX_CSTRING("[0-9]+\\.[0-9]+"),HX_CSTRING(""));		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(96)
	if ((r->match(str))){
		HX_STACK_LINE(97)
		Dynamic p = r->matchedPos();		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(98)
		if (((bool((p->__Field(HX_CSTRING("pos"),true) == (int)0)) && bool((p->__Field(HX_CSTRING("len"),true) == str.length))))){
			HX_STACK_LINE(99)
			return true;
		}
	}
	HX_STACK_LINE(102)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,isStrFloat,return )

Float U_obj::xml_f( ::Xml data,::String att,hx::Null< Float >  __o_default_){
Float default_ = __o_default_.Default(0);
	HX_STACK_FRAME("flixel.addons.ui.U","xml_f",0xcb3d1ed4,"flixel.addons.ui.U.xml_f","flixel/addons/ui/U.hx",113,0x74647d9b)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(att,"att")
	HX_STACK_ARG(default_,"default_")
{
		HX_STACK_LINE(114)
		::String _g = data->get(att);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(114)
		if (((_g != null()))){
			HX_STACK_LINE(115)
			::String _g1 = data->get(att);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(115)
			return ::Std_obj::parseFloat(_g1);
		}
		HX_STACK_LINE(116)
		return default_;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(U_obj,xml_f,return )

int U_obj::xml_i( ::Xml data,::String att,hx::Null< int >  __o_default_){
int default_ = __o_default_.Default(0);
	HX_STACK_FRAME("flixel.addons.ui.U","xml_i",0xcb3d1ed7,"flixel.addons.ui.U.xml_i","flixel/addons/ui/U.hx",127,0x74647d9b)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(att,"att")
	HX_STACK_ARG(default_,"default_")
{
		HX_STACK_LINE(128)
		::String _g = data->get(att);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(128)
		if (((_g != null()))){
			HX_STACK_LINE(129)
			::String _g1 = data->get(att);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(129)
			return ::Std_obj::parseInt(_g1);
		}
		HX_STACK_LINE(130)
		return default_;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(U_obj,xml_i,return )

::flixel::math::FlxPoint U_obj::xml_pt( ::Xml data,::String att,::flixel::math::FlxPoint default_){
	HX_STACK_FRAME("flixel.addons.ui.U","xml_pt",0x0a3de3d6,"flixel.addons.ui.U.xml_pt","flixel/addons/ui/U.hx",141,0x74647d9b)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(att,"att")
	HX_STACK_ARG(default_,"default_")
	HX_STACK_LINE(142)
	::String _g = data->get(att);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(142)
	if (((_g != null()))){
		HX_STACK_LINE(143)
		::String _g1 = data->get(att);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(143)
		return ::flixel::addons::ui::U_obj::pointify(_g1);
	}
	HX_STACK_LINE(145)
	return default_;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(U_obj,xml_pt,return )

bool U_obj::boolify( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","boolify",0xe88e23a8,"flixel.addons.ui.U.boolify","flixel/addons/ui/U.hx",148,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(149)
	::String _g = str.toLowerCase();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(149)
	str = _g;
	HX_STACK_LINE(150)
	if (((bool((str == HX_CSTRING("true"))) || bool((str == HX_CSTRING("1")))))){
		HX_STACK_LINE(151)
		return true;
	}
	HX_STACK_LINE(153)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,boolify,return )

::flixel::math::FlxPoint U_obj::pointify( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","pointify",0x7c83db56,"flixel.addons.ui.U.pointify","flixel/addons/ui/U.hx",164,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(165)
	::flixel::math::FlxPoint pt = null();		HX_STACK_VAR(pt,"pt");
	HX_STACK_LINE(166)
	if (((str != null()))){
		HX_STACK_LINE(167)
		Array< ::String > arr = Array_obj< ::String >::__new().Add(HX_CSTRING("(")).Add(HX_CSTRING(")")).Add(HX_CSTRING(" ")).Add(HX_CSTRING("=")).Add(HX_CSTRING(":"));		HX_STACK_VAR(arr,"arr");
		HX_STACK_LINE(168)
		{
			HX_STACK_LINE(168)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(168)
			while((true)){
				HX_STACK_LINE(168)
				if ((!(((_g < arr->length))))){
					HX_STACK_LINE(168)
					break;
				}
				HX_STACK_LINE(168)
				::String thing = arr->__get(_g);		HX_STACK_VAR(thing,"thing");
				HX_STACK_LINE(168)
				++(_g);
				HX_STACK_LINE(169)
				while((true)){
					HX_STACK_LINE(169)
					int _g1 = str.indexOf(thing,null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(169)
					if ((!(((_g1 != (int)-1))))){
						HX_STACK_LINE(169)
						break;
					}
					HX_STACK_LINE(170)
					::String _g11 = ::StringTools_obj::replace(str,thing,HX_CSTRING(""));		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(170)
					str = _g11;
				}
			}
		}
		HX_STACK_LINE(173)
		int _g2 = str.indexOf(HX_CSTRING(","),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(173)
		if (((_g2 == (int)-1))){
			HX_STACK_LINE(174)
			int _g3 = str.indexOf(HX_CSTRING("x"),null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(174)
			if (((_g3 != (int)-1))){
				HX_STACK_LINE(175)
				::String _g4 = ::StringTools_obj::replace(str,HX_CSTRING("x"),HX_CSTRING(","));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(175)
				str = _g4;
			}
		}
		HX_STACK_LINE(178)
		Array< ::String > _g5 = str.split(HX_CSTRING(","));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(178)
		arr = _g5;
		HX_STACK_LINE(179)
		if (((arr->length == (int)2))){
			HX_STACK_LINE(180)
			Float _g6 = ::Std_obj::parseFloat(arr->__get((int)0));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(180)
			Float _g7 = ::Std_obj::parseFloat(arr->__get((int)1));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(180)
			::flixel::math::FlxPoint _g8 = ::flixel::math::FlxPoint_obj::__new(_g6,_g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(180)
			pt = _g8;
		}
	}
	HX_STACK_LINE(183)
	return pt;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,pointify,return )

bool U_obj::compareStringVars( ::String variable,::String otherValue,::String type,::String __o__operator){
::String _operator = __o__operator.Default(HX_CSTRING("=="));
	HX_STACK_FRAME("flixel.addons.ui.U","compareStringVars",0x90ebbd38,"flixel.addons.ui.U.compareStringVars","flixel/addons/ui/U.hx",195,0x74647d9b)
	HX_STACK_ARG(variable,"variable")
	HX_STACK_ARG(otherValue,"otherValue")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(_operator,"operator")
{
		HX_STACK_LINE(196)
		::String _switch_1 = (type);
		if (  ( _switch_1==HX_CSTRING("string"))){
			HX_STACK_LINE(198)
			if (((bool((_operator == HX_CSTRING("=="))) || bool((_operator == HX_CSTRING("=")))))){
				HX_STACK_LINE(198)
				return (variable == otherValue);
			}
			HX_STACK_LINE(199)
			if (((bool((_operator == HX_CSTRING("!=="))) || bool((_operator == HX_CSTRING("!=")))))){
				HX_STACK_LINE(199)
				return (variable != otherValue);
			}
		}
		else if (  ( _switch_1==HX_CSTRING("int"))){
			HX_STACK_LINE(201)
			int ia = ::Std_obj::parseInt(variable);		HX_STACK_VAR(ia,"ia");
			HX_STACK_LINE(202)
			int ib = ::Std_obj::parseInt(otherValue);		HX_STACK_VAR(ib,"ib");
			HX_STACK_LINE(203)
			if (((bool((_operator == HX_CSTRING("=="))) || bool((_operator == HX_CSTRING("=")))))){
				HX_STACK_LINE(203)
				return (ia == ib);
			}
			else{
				HX_STACK_LINE(204)
				if (((bool((_operator == HX_CSTRING("!=="))) || bool((_operator == HX_CSTRING("!=")))))){
					HX_STACK_LINE(204)
					return (ia != ib);
				}
				else{
					HX_STACK_LINE(205)
					if (((_operator == HX_CSTRING("<")))){
						HX_STACK_LINE(205)
						return (ia < ib);
					}
					else{
						HX_STACK_LINE(206)
						if (((_operator == HX_CSTRING(">")))){
							HX_STACK_LINE(206)
							return (ia > ib);
						}
						else{
							HX_STACK_LINE(207)
							if (((_operator == HX_CSTRING("<=")))){
								HX_STACK_LINE(207)
								return (ia <= ib);
							}
							else{
								HX_STACK_LINE(208)
								if (((_operator == HX_CSTRING(">=")))){
									HX_STACK_LINE(208)
									return (ia >= ib);
								}
							}
						}
					}
				}
			}
		}
		else if (  ( _switch_1==HX_CSTRING("float"))){
			HX_STACK_LINE(210)
			Float fa = ::Std_obj::parseFloat(variable);		HX_STACK_VAR(fa,"fa");
			HX_STACK_LINE(211)
			Float fb = ::Std_obj::parseFloat(otherValue);		HX_STACK_VAR(fb,"fb");
			HX_STACK_LINE(212)
			if (((bool((_operator == HX_CSTRING("=="))) || bool((_operator == HX_CSTRING("=")))))){
				HX_STACK_LINE(212)
				return (fa == fb);
			}
			else{
				HX_STACK_LINE(213)
				if (((bool((_operator == HX_CSTRING("!=="))) || bool((_operator == HX_CSTRING("!=")))))){
					HX_STACK_LINE(213)
					return (fa != fb);
				}
				else{
					HX_STACK_LINE(214)
					if (((_operator == HX_CSTRING("<")))){
						HX_STACK_LINE(214)
						return (fa < fb);
					}
					else{
						HX_STACK_LINE(215)
						if (((_operator == HX_CSTRING(">")))){
							HX_STACK_LINE(215)
							return (fa > fb);
						}
						else{
							HX_STACK_LINE(216)
							if (((_operator == HX_CSTRING("<=")))){
								HX_STACK_LINE(216)
								return (fa <= fb);
							}
							else{
								HX_STACK_LINE(217)
								if (((_operator == HX_CSTRING(">=")))){
									HX_STACK_LINE(217)
									return (fa >= fb);
								}
							}
						}
					}
				}
			}
		}
		else if (  ( _switch_1==HX_CSTRING("bool"))){
			HX_STACK_LINE(219)
			bool ba = ::flixel::addons::ui::U_obj::boolify(variable);		HX_STACK_VAR(ba,"ba");
			HX_STACK_LINE(220)
			bool bb = ::flixel::addons::ui::U_obj::boolify(otherValue);		HX_STACK_VAR(bb,"bb");
			HX_STACK_LINE(221)
			if (((bool((_operator == HX_CSTRING("=="))) || bool((_operator == HX_CSTRING("=")))))){
				HX_STACK_LINE(221)
				return (ba == bb);
			}
			else{
				HX_STACK_LINE(222)
				if (((bool((_operator == HX_CSTRING("!=="))) || bool((_operator == HX_CSTRING("!=")))))){
					HX_STACK_LINE(222)
					return (ba != bb);
				}
			}
		}
		HX_STACK_LINE(224)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(U_obj,compareStringVars,return )

bool U_obj::xml_bool( ::Xml data,::String att,hx::Null< bool >  __o_default_){
bool default_ = __o_default_.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.U","xml_bool",0x771a9e7c,"flixel.addons.ui.U.xml_bool","flixel/addons/ui/U.hx",235,0x74647d9b)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(att,"att")
	HX_STACK_ARG(default_,"default_")
{
		HX_STACK_LINE(236)
		::String _g = data->get(att);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(236)
		if (((_g != null()))){
			HX_STACK_LINE(237)
			::String str = data->get(att);		HX_STACK_VAR(str,"str");
			HX_STACK_LINE(238)
			::String _g1 = str.toLowerCase();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(238)
			str = _g1;
			HX_STACK_LINE(239)
			if (((bool((str == HX_CSTRING("true"))) || bool((str == HX_CSTRING("1")))))){
				HX_STACK_LINE(240)
				return true;
			}
			HX_STACK_LINE(242)
			return false;
		}
		HX_STACK_LINE(244)
		return default_;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(U_obj,xml_bool,return )

::String U_obj::xml_gfx( ::Xml data,::String att,hx::Null< bool >  __o_test){
bool test = __o_test.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.U","xml_gfx",0xebe29767,"flixel.addons.ui.U.xml_gfx","flixel/addons/ui/U.hx",247,0x74647d9b)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(att,"att")
	HX_STACK_ARG(test,"test")
{
		HX_STACK_LINE(248)
		::String str = HX_CSTRING("");		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(249)
		::String _g = data->get(att);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(249)
		if (((_g != null()))){
			HX_STACK_LINE(250)
			::String _g1 = data->get(att);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(250)
			str = _g1;
			HX_STACK_LINE(251)
			if (((bool((str == HX_CSTRING(""))) || bool((str == null()))))){
				HX_STACK_LINE(252)
				str = HX_CSTRING("");
			}
			else{
				HX_STACK_LINE(254)
				::String _g2 = ::flixel::addons::ui::U_obj::gfx(str,null(),null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(254)
				str = _g2;
				HX_STACK_LINE(255)
				if ((test)){
					HX_STACK_LINE(256)
					try
					{
					HX_STACK_CATCHABLE(::String, 0);
					{
						HX_STACK_LINE(257)
						::openfl::_v2::display::BitmapData testbmp = ::openfl::_v2::Assets_obj::getBitmapData(str,null());		HX_STACK_VAR(testbmp,"testbmp");
						HX_STACK_LINE(258)
						if (((testbmp == null()))){
							HX_STACK_LINE(259)
							HX_STACK_DO_THROW(((HX_CSTRING("couldn't load bmp \"") + att) + HX_CSTRING("\"")));
						}
						HX_STACK_LINE(261)
						testbmp = null();
					}
					}
					catch(Dynamic __e){
						if (__e.IsClass< ::String >() ){
							HX_STACK_BEGIN_CATCH
							::String msg = __e;{
								HX_STACK_LINE(263)
								Dynamic();
							}
						}
						else {
						    HX_STACK_DO_THROW(__e);
						}
					}
				}
			}
		}
		HX_STACK_LINE(268)
		return str;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(U_obj,xml_gfx,return )

Void U_obj::center( ::flixel::FlxObject fb1,::flixel::FlxObject fb2,hx::Null< bool >  __o_centerX,hx::Null< bool >  __o_centerY){
bool centerX = __o_centerX.Default(true);
bool centerY = __o_centerY.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.U","center",0x0aecfeff,"flixel.addons.ui.U.center","flixel/addons/ui/U.hx",279,0x74647d9b)
	HX_STACK_ARG(fb1,"fb1")
	HX_STACK_ARG(fb2,"fb2")
	HX_STACK_ARG(centerX,"centerX")
	HX_STACK_ARG(centerY,"centerY")
{
		HX_STACK_LINE(280)
		if ((centerX)){
			HX_STACK_LINE(280)
			Float _g = fb1->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(280)
			Float _g1 = fb2->get_width();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(280)
			Float _g2 = (_g - _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(280)
			Float _g3 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(280)
			Float _g4 = (fb1->x + _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(280)
			fb2->set_x(_g4);
		}
		HX_STACK_LINE(281)
		if ((centerY)){
			HX_STACK_LINE(281)
			Float _g5 = fb1->get_height();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(281)
			Float _g6 = fb2->get_height();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(281)
			Float _g7 = (_g5 - _g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(281)
			Float _g8 = (Float(_g7) / Float((int)2));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(281)
			Float _g9 = (fb1->y + _g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(281)
			fb2->set_y(_g9);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(U_obj,center,(void))

bool U_obj::test_int( int i1,::String test,int i2){
	HX_STACK_FRAME("flixel.addons.ui.U","test_int",0x278ea2ec,"flixel.addons.ui.U.test_int","flixel/addons/ui/U.hx",284,0x74647d9b)
	HX_STACK_ARG(i1,"i1")
	HX_STACK_ARG(test,"test")
	HX_STACK_ARG(i2,"i2")
	HX_STACK_LINE(285)
	bool _bool = false;		HX_STACK_VAR(_bool,"bool");
	HX_STACK_LINE(286)
	::String _switch_2 = (test);
	if (  ( _switch_2==HX_CSTRING("=="))){
		HX_STACK_LINE(287)
		_bool = (i1 == i2);
	}
	else if (  ( _switch_2==HX_CSTRING("<"))){
		HX_STACK_LINE(288)
		_bool = (i1 < i2);
	}
	else if (  ( _switch_2==HX_CSTRING(">"))){
		HX_STACK_LINE(289)
		_bool = (i1 > i2);
	}
	else if (  ( _switch_2==HX_CSTRING("<="))){
		HX_STACK_LINE(290)
		_bool = (i1 <= i2);
	}
	else if (  ( _switch_2==HX_CSTRING(">="))){
		HX_STACK_LINE(291)
		_bool = (i1 >= i2);
	}
	else if (  ( _switch_2==HX_CSTRING("!="))){
		HX_STACK_LINE(292)
		_bool = (i1 != i2);
	}
	HX_STACK_LINE(294)
	return _bool;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(U_obj,test_int,return )

bool U_obj::test_float( Float f1,::String test,int f2){
	HX_STACK_FRAME("flixel.addons.ui.U","test_float",0x672494d9,"flixel.addons.ui.U.test_float","flixel/addons/ui/U.hx",297,0x74647d9b)
	HX_STACK_ARG(f1,"f1")
	HX_STACK_ARG(test,"test")
	HX_STACK_ARG(f2,"f2")
	HX_STACK_LINE(298)
	bool _bool = false;		HX_STACK_VAR(_bool,"bool");
	HX_STACK_LINE(299)
	::String _switch_3 = (test);
	if (  ( _switch_3==HX_CSTRING("=="))){
		HX_STACK_LINE(300)
		_bool = (f1 == f2);
	}
	else if (  ( _switch_3==HX_CSTRING("<"))){
		HX_STACK_LINE(301)
		_bool = (f1 < f2);
	}
	else if (  ( _switch_3==HX_CSTRING(">"))){
		HX_STACK_LINE(302)
		_bool = (f1 > f2);
	}
	else if (  ( _switch_3==HX_CSTRING("<="))){
		HX_STACK_LINE(303)
		_bool = (f1 <= f2);
	}
	else if (  ( _switch_3==HX_CSTRING(">="))){
		HX_STACK_LINE(304)
		_bool = (f1 >= f2);
	}
	else if (  ( _switch_3==HX_CSTRING("!="))){
		HX_STACK_LINE(305)
		_bool = (f1 != f2);
	}
	HX_STACK_LINE(307)
	return _bool;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(U_obj,test_float,return )

::String U_obj::padDigits( int i,int d,::String __o_padChar){
::String padChar = __o_padChar.Default(HX_CSTRING("0"));
	HX_STACK_FRAME("flixel.addons.ui.U","padDigits",0x6478ccef,"flixel.addons.ui.U.padDigits","flixel/addons/ui/U.hx",318,0x74647d9b)
	HX_STACK_ARG(i,"i")
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(padChar,"padChar")
{
		HX_STACK_LINE(319)
		Float f = i;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(320)
		::String str = HX_CSTRING("");		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(321)
		int num_digits = (int)0;		HX_STACK_VAR(num_digits,"num_digits");
		HX_STACK_LINE(322)
		while((true)){
			HX_STACK_LINE(322)
			if ((!(((f >= (int)1))))){
				HX_STACK_LINE(322)
				break;
			}
			HX_STACK_LINE(323)
			hx::DivEq(f,(int)10);
			HX_STACK_LINE(324)
			(num_digits)++;
		}
		HX_STACK_LINE(327)
		if (((i == (int)0))){
			HX_STACK_LINE(328)
			num_digits = (int)1;
		}
		HX_STACK_LINE(331)
		if (((num_digits < d))){
			HX_STACK_LINE(332)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(332)
			int _g = (d - num_digits);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(332)
			while((true)){
				HX_STACK_LINE(332)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(332)
					break;
				}
				HX_STACK_LINE(332)
				int temp = (_g1)++;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(333)
				hx::AddEq(str,padChar);
			}
		}
		HX_STACK_LINE(337)
		::String _g = ::Std_obj::string(i);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(337)
		return (str + _g);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(U_obj,padDigits,return )

int U_obj::parseHex( ::String str,hx::Null< bool >  __o_cast32Bit,hx::Null< bool >  __o_safe,hx::Null< int >  __o_default_color){
bool cast32Bit = __o_cast32Bit.Default(false);
bool safe = __o_safe.Default(false);
int default_color = __o_default_color.Default(0);
	HX_STACK_FRAME("flixel.addons.ui.U","parseHex",0xa68b4412,"flixel.addons.ui.U.parseHex","flixel/addons/ui/U.hx",349,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(cast32Bit,"cast32Bit")
	HX_STACK_ARG(safe,"safe")
	HX_STACK_ARG(default_color,"default_color")
{
		HX_STACK_LINE(350)
		Dynamic return_val = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(str);		HX_STACK_VAR(return_val,"return_val");
		HX_STACK_LINE(351)
		if (((return_val == null()))){
			HX_STACK_LINE(352)
			if ((!(safe))){
				HX_STACK_LINE(353)
				HX_STACK_DO_THROW((HX_CSTRING("U.parseHex() unable to parse hex String ") + str));
			}
			else{
				HX_STACK_LINE(355)
				return_val = default_color;
			}
		}
		HX_STACK_LINE(358)
		return return_val;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(U_obj,parseHex,return )

int U_obj::hexChar2dec( ::String hex_char){
	HX_STACK_FRAME("flixel.addons.ui.U","hexChar2dec",0xbd0fe737,"flixel.addons.ui.U.hexChar2dec","flixel/addons/ui/U.hx",367,0x74647d9b)
	HX_STACK_ARG(hex_char,"hex_char")
	HX_STACK_LINE(368)
	int val = (int)-1;		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(369)
	::String _switch_4 = (hex_char);
	if (  ( _switch_4==HX_CSTRING("0")) ||  ( _switch_4==HX_CSTRING("1")) ||  ( _switch_4==HX_CSTRING("2")) ||  ( _switch_4==HX_CSTRING("3")) ||  ( _switch_4==HX_CSTRING("4")) ||  ( _switch_4==HX_CSTRING("5")) ||  ( _switch_4==HX_CSTRING("6")) ||  ( _switch_4==HX_CSTRING("7")) ||  ( _switch_4==HX_CSTRING("8")) ||  ( _switch_4==HX_CSTRING("9")) ||  ( _switch_4==HX_CSTRING("10"))){
		HX_STACK_LINE(370)
		Dynamic _g = ::Std_obj::parseInt(hex_char);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(370)
		val = _g;
	}
	else if (  ( _switch_4==HX_CSTRING("A")) ||  ( _switch_4==HX_CSTRING("a"))){
		HX_STACK_LINE(371)
		val = (int)10;
	}
	else if (  ( _switch_4==HX_CSTRING("B")) ||  ( _switch_4==HX_CSTRING("b"))){
		HX_STACK_LINE(372)
		val = (int)11;
	}
	else if (  ( _switch_4==HX_CSTRING("C")) ||  ( _switch_4==HX_CSTRING("c"))){
		HX_STACK_LINE(373)
		val = (int)12;
	}
	else if (  ( _switch_4==HX_CSTRING("D")) ||  ( _switch_4==HX_CSTRING("d"))){
		HX_STACK_LINE(374)
		val = (int)13;
	}
	else if (  ( _switch_4==HX_CSTRING("E")) ||  ( _switch_4==HX_CSTRING("e"))){
		HX_STACK_LINE(375)
		val = (int)14;
	}
	else if (  ( _switch_4==HX_CSTRING("F")) ||  ( _switch_4==HX_CSTRING("f"))){
		HX_STACK_LINE(376)
		val = (int)15;
	}
	HX_STACK_LINE(378)
	if (((val == (int)-1))){
		HX_STACK_LINE(379)
		HX_STACK_DO_THROW(((HX_CSTRING("U.hexChar2dec() illegal char(") + hex_char) + HX_CSTRING(")")));
	}
	HX_STACK_LINE(381)
	return val;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,hexChar2dec,return )

int U_obj::hex2dec( ::String hex_str){
	HX_STACK_FRAME("flixel.addons.ui.U","hex2dec",0xeabe5cc1,"flixel.addons.ui.U.hex2dec","flixel/addons/ui/U.hx",390,0x74647d9b)
	HX_STACK_ARG(hex_str,"hex_str")
	HX_STACK_LINE(391)
	int length = hex_str.length;		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(392)
	int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
	HX_STACK_LINE(393)
	int sum = (int)0;		HX_STACK_VAR(sum,"sum");
	HX_STACK_LINE(394)
	int i = (length - (int)1);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(394)
	while((true)){
		HX_STACK_LINE(394)
		if ((!(((i >= (int)0))))){
			HX_STACK_LINE(394)
			break;
		}
		HX_STACK_LINE(395)
		::String char_hex = hex_str.substr(i,(int)1);		HX_STACK_VAR(char_hex,"char_hex");
		HX_STACK_LINE(396)
		int char_int;		HX_STACK_VAR(char_int,"char_int");
		HX_STACK_LINE(396)
		{
			HX_STACK_LINE(396)
			int val = (int)-1;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(396)
			::String _switch_5 = (char_hex);
			if (  ( _switch_5==HX_CSTRING("0")) ||  ( _switch_5==HX_CSTRING("1")) ||  ( _switch_5==HX_CSTRING("2")) ||  ( _switch_5==HX_CSTRING("3")) ||  ( _switch_5==HX_CSTRING("4")) ||  ( _switch_5==HX_CSTRING("5")) ||  ( _switch_5==HX_CSTRING("6")) ||  ( _switch_5==HX_CSTRING("7")) ||  ( _switch_5==HX_CSTRING("8")) ||  ( _switch_5==HX_CSTRING("9")) ||  ( _switch_5==HX_CSTRING("10"))){
				HX_STACK_LINE(396)
				Dynamic _g = ::Std_obj::parseInt(char_hex);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(396)
				val = _g;
			}
			else if (  ( _switch_5==HX_CSTRING("A")) ||  ( _switch_5==HX_CSTRING("a"))){
				HX_STACK_LINE(396)
				val = (int)10;
			}
			else if (  ( _switch_5==HX_CSTRING("B")) ||  ( _switch_5==HX_CSTRING("b"))){
				HX_STACK_LINE(396)
				val = (int)11;
			}
			else if (  ( _switch_5==HX_CSTRING("C")) ||  ( _switch_5==HX_CSTRING("c"))){
				HX_STACK_LINE(396)
				val = (int)12;
			}
			else if (  ( _switch_5==HX_CSTRING("D")) ||  ( _switch_5==HX_CSTRING("d"))){
				HX_STACK_LINE(396)
				val = (int)13;
			}
			else if (  ( _switch_5==HX_CSTRING("E")) ||  ( _switch_5==HX_CSTRING("e"))){
				HX_STACK_LINE(396)
				val = (int)14;
			}
			else if (  ( _switch_5==HX_CSTRING("F")) ||  ( _switch_5==HX_CSTRING("f"))){
				HX_STACK_LINE(396)
				val = (int)15;
			}
			HX_STACK_LINE(396)
			if (((val == (int)-1))){
				HX_STACK_LINE(396)
				HX_STACK_DO_THROW(((HX_CSTRING("U.hexChar2dec() illegal char(") + char_hex) + HX_CSTRING(")")));
			}
			HX_STACK_LINE(396)
			char_int = val;
		}
		HX_STACK_LINE(397)
		hx::AddEq(sum,(char_int * place_mult));
		HX_STACK_LINE(398)
		hx::MultEq(place_mult,(int)16);
		HX_STACK_LINE(399)
		(i)--;
	}
	HX_STACK_LINE(401)
	return sum;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,hex2dec,return )

Array< int > U_obj::hex2rgb( int hex){
	HX_STACK_FRAME("flixel.addons.ui.U","hex2rgb",0xeac8fe0c,"flixel.addons.ui.U.hex2rgb","flixel/addons/ui/U.hx",411,0x74647d9b)
	HX_STACK_ARG(hex,"hex")
	HX_STACK_LINE(411)
	return Array_obj< int >::__new().Add((int((int(hex) >> int((int)16))) & int((int)255))).Add((int((int(hex) >> int((int)8))) & int((int)255))).Add((int(hex) & int((int)255)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,hex2rgb,return )

int U_obj::rgb2hex( int r,int g,int b){
	HX_STACK_FRAME("flixel.addons.ui.U","rgb2hex",0xac7dff0c,"flixel.addons.ui.U.rgb2hex","flixel/addons/ui/U.hx",425,0x74647d9b)
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(425)
	return (int((int((int(r) << int((int)16))) | int((int(g) << int((int)8))))) | int(b));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(U_obj,rgb2hex,return )

int U_obj::interpolate( int hex1,int hex2,Float amt){
	HX_STACK_FRAME("flixel.addons.ui.U","interpolate",0x58cb8357,"flixel.addons.ui.U.interpolate","flixel/addons/ui/U.hx",436,0x74647d9b)
	HX_STACK_ARG(hex1,"hex1")
	HX_STACK_ARG(hex2,"hex2")
	HX_STACK_ARG(amt,"amt")
	HX_STACK_LINE(437)
	if (((amt < (int)0))){
		HX_STACK_LINE(437)
		amt = (int)0;
	}
	else{
		HX_STACK_LINE(437)
		if (((amt > (int)1))){
			HX_STACK_LINE(437)
			amt = (int)1;
		}
	}
	HX_STACK_LINE(439)
	Float a1 = ((int)1 - amt);		HX_STACK_VAR(a1,"a1");
	HX_STACK_LINE(441)
	int c1r = (int((int(hex1) >> int((int)16))) & int((int)255));		HX_STACK_VAR(c1r,"c1r");
	HX_STACK_LINE(442)
	int c1g = (int((int(hex1) >> int((int)8))) & int((int)255));		HX_STACK_VAR(c1g,"c1g");
	HX_STACK_LINE(443)
	int c1b = (int(hex1) & int((int)255));		HX_STACK_VAR(c1b,"c1b");
	HX_STACK_LINE(445)
	int c2r = (int((int(hex2) >> int((int)16))) & int((int)255));		HX_STACK_VAR(c2r,"c2r");
	HX_STACK_LINE(446)
	int c2g = (int((int(hex2) >> int((int)8))) & int((int)255));		HX_STACK_VAR(c2g,"c2g");
	HX_STACK_LINE(447)
	int c2b = (int(hex2) & int((int)255));		HX_STACK_VAR(c2b,"c2b");
	HX_STACK_LINE(449)
	int c3r = ::Std_obj::_int(((c1r * a1) + (c2r * amt)));		HX_STACK_VAR(c3r,"c3r");
	HX_STACK_LINE(450)
	int c3g = ::Std_obj::_int(((c1g * a1) + (c2g * amt)));		HX_STACK_VAR(c3g,"c3g");
	HX_STACK_LINE(451)
	int c3b = ::Std_obj::_int(((c1b * a1) + (c2b * amt)));		HX_STACK_VAR(c3b,"c3b");
	HX_STACK_LINE(453)
	return (int((int((int(c3r) << int((int)16))) | int((int(c3g) << int((int)8))))) | int(c3b));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(U_obj,interpolate,return )

Array< ::Dynamic > U_obj::getLocList( int xmin,int ymin,int xmax,int ymax){
	HX_STACK_FRAME("flixel.addons.ui.U","getLocList",0xf38b1932,"flixel.addons.ui.U.getLocList","flixel/addons/ui/U.hx",472,0x74647d9b)
	HX_STACK_ARG(xmin,"xmin")
	HX_STACK_ARG(ymin,"ymin")
	HX_STACK_ARG(xmax,"xmax")
	HX_STACK_ARG(ymax,"ymax")
	HX_STACK_LINE(473)
	Array< ::Dynamic > list = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(474)
	{
		HX_STACK_LINE(474)
		int _g1 = ymin;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(474)
		int _g = (ymax + (int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(474)
		while((true)){
			HX_STACK_LINE(474)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(474)
				break;
			}
			HX_STACK_LINE(474)
			int yy = (_g1)++;		HX_STACK_VAR(yy,"yy");
			HX_STACK_LINE(475)
			{
				HX_STACK_LINE(475)
				int _g3 = xmin;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(475)
				int _g2 = (xmax + (int)1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(475)
				while((true)){
					HX_STACK_LINE(475)
					if ((!(((_g3 < _g2))))){
						HX_STACK_LINE(475)
						break;
					}
					HX_STACK_LINE(475)
					int xx = (_g3)++;		HX_STACK_VAR(xx,"xx");
					HX_STACK_LINE(476)
					::flixel::math::FlxPoint _g4;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(476)
					{
						HX_STACK_LINE(476)
						::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(xx,yy);		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(476)
						point->_inPool = false;
						HX_STACK_LINE(476)
						_g4 = point;
					}
					HX_STACK_LINE(476)
					list->push(_g4);
				}
			}
		}
	}
	HX_STACK_LINE(478)
	return list;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(U_obj,getLocList,return )

Void U_obj::disposeXML( Dynamic thing){
{
		HX_STACK_FRAME("flixel.addons.ui.U","disposeXML",0xe5262ca2,"flixel.addons.ui.U.disposeXML","flixel/addons/ui/U.hx",481,0x74647d9b)
		HX_STACK_ARG(thing,"thing")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,disposeXML,(void))

::haxe::xml::Fast U_obj::copyFast( ::haxe::xml::Fast fast){
	HX_STACK_FRAME("flixel.addons.ui.U","copyFast",0x986e209b,"flixel.addons.ui.U.copyFast","flixel/addons/ui/U.hx",495,0x74647d9b)
	HX_STACK_ARG(fast,"fast")
	HX_STACK_LINE(496)
	::String _g = fast->x->toString();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(496)
	::Xml _g1 = ::Xml_obj::parse(_g)->firstElement();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(496)
	return ::haxe::xml::Fast_obj::__new(_g1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,copyFast,return )

::Xml U_obj::copyXml( ::Xml data){
	HX_STACK_FRAME("flixel.addons.ui.U","copyXml",0xae1514b8,"flixel.addons.ui.U.copyXml","flixel/addons/ui/U.hx",499,0x74647d9b)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(500)
	::String _g = data->toString();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(500)
	return ::Xml_obj::parse(_g)->firstElement();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,copyXml,return )

::Xml U_obj::readXml( ::String path){
	HX_STACK_FRAME("flixel.addons.ui.U","readXml",0x6d613fb7,"flixel.addons.ui.U.readXml","flixel/addons/ui/U.hx",504,0x74647d9b)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(505)
	::String _g = ::haxe::io::Path_obj::removeTrailingSlashes(path);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(505)
	if ((::sys::FileSystem_obj::sys_exists(_g))){
		HX_STACK_LINE(506)
		::String content = ::sys::io::File_obj::getContent(path);		HX_STACK_VAR(content,"content");
		HX_STACK_LINE(507)
		return ::Xml_obj::parse(content)->firstElement();
	}
	HX_STACK_LINE(509)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,readXml,return )

::haxe::xml::Fast U_obj::readFast( ::String path){
	HX_STACK_FRAME("flixel.addons.ui.U","readFast",0x3bc794bc,"flixel.addons.ui.U.readFast","flixel/addons/ui/U.hx",512,0x74647d9b)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(513)
	::Xml xml = ::flixel::addons::ui::U_obj::readXml(path);		HX_STACK_VAR(xml,"xml");
	HX_STACK_LINE(514)
	if (((xml != null()))){
		HX_STACK_LINE(515)
		return ::haxe::xml::Fast_obj::__new(xml);
	}
	HX_STACK_LINE(517)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,readFast,return )

::String U_obj::fixSlash( ::String path){
	HX_STACK_FRAME("flixel.addons.ui.U","fixSlash",0xb543a1d2,"flixel.addons.ui.U.fixSlash","flixel/addons/ui/U.hx",521,0x74647d9b)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(522)
	::String goodSlash = HX_CSTRING("/");		HX_STACK_VAR(goodSlash,"goodSlash");
	HX_STACK_LINE(523)
	::String badSlash;		HX_STACK_VAR(badSlash,"badSlash");
	HX_STACK_LINE(523)
	if (((goodSlash == HX_CSTRING("/")))){
		HX_STACK_LINE(523)
		badSlash = HX_CSTRING("\\");
	}
	else{
		HX_STACK_LINE(523)
		badSlash = HX_CSTRING("/");
	}
	HX_STACK_LINE(524)
	while((true)){
		HX_STACK_LINE(524)
		int _g = path.indexOf(badSlash,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(524)
		if ((!(((_g != (int)-1))))){
			HX_STACK_LINE(524)
			break;
		}
		HX_STACK_LINE(526)
		::String _g1 = ::StringTools_obj::replace(path,badSlash,goodSlash);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(526)
		path = _g1;
	}
	HX_STACK_LINE(528)
	return path;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,fixSlash,return )

::String U_obj::endline( ){
	HX_STACK_FRAME("flixel.addons.ui.U","endline",0xa98ad0e5,"flixel.addons.ui.U.endline","flixel/addons/ui/U.hx",538,0x74647d9b)
	HX_STACK_LINE(538)
	return HX_CSTRING("\n");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(U_obj,endline,return )

::String U_obj::slash( ){
	HX_STACK_FRAME("flixel.addons.ui.U","slash",0xe98aba53,"flixel.addons.ui.U.slash","flixel/addons/ui/U.hx",547,0x74647d9b)
	HX_STACK_LINE(547)
	return HX_CSTRING("/");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(U_obj,slash,return )

Void U_obj::writeXml( ::Xml data,::String path,hx::Null< bool >  __o_wrapData,hx::Null< bool >  __o_addHeader){
bool wrapData = __o_wrapData.Default(true);
bool addHeader = __o_addHeader.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.U","writeXml",0xf415c5e2,"flixel.addons.ui.U.writeXml","flixel/addons/ui/U.hx",551,0x74647d9b)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(wrapData,"wrapData")
	HX_STACK_ARG(addHeader,"addHeader")
{
		HX_STACK_LINE(552)
		::Xml xml = data;		HX_STACK_VAR(xml,"xml");
		HX_STACK_LINE(554)
		::String _g = ::haxe::io::Path_obj::removeTrailingSlashes(path);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(554)
		if ((::sys::FileSystem_obj::sys_exists(_g))){
			HX_STACK_LINE(556)
			::sys::FileSystem_obj::deleteFile(path);
		}
		HX_STACK_LINE(559)
		::String xmlString = HX_CSTRING("");		HX_STACK_VAR(xmlString,"xmlString");
		HX_STACK_LINE(561)
		::sys::io::FileOutput fout = ::sys::io::File_obj::write(path,false);		HX_STACK_VAR(fout,"fout");
		HX_STACK_LINE(562)
		if ((addHeader)){
			HX_STACK_LINE(563)
			xmlString = HX_CSTRING("<?xml version=\"1.0\" encoding=\"utf-8\" ?>\n");
		}
		HX_STACK_LINE(565)
		if ((wrapData)){
			HX_STACK_LINE(566)
			hx::AddEq(xmlString,HX_CSTRING("<data>\n"));
		}
		HX_STACK_LINE(569)
		::String _g1 = ::haxe::xml::Printer_obj::print(xml);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(569)
		hx::AddEq(xmlString,_g1);
		HX_STACK_LINE(571)
		if ((wrapData)){
			HX_STACK_LINE(572)
			hx::AddEq(xmlString,HX_CSTRING("</data>"));
		}
		HX_STACK_LINE(575)
		fout->writeString(xmlString);
		HX_STACK_LINE(576)
		fout->close();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(U_obj,writeXml,(void))

Dynamic U_obj::getXML( ::String str,::String __o_folder){
::String folder = __o_folder.Default(HX_CSTRING(""));
	HX_STACK_FRAME("flixel.addons.ui.U","getXML",0xa83c640b,"flixel.addons.ui.U.getXML","flixel/addons/ui/U.hx",580,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(folder,"folder")
{
		HX_STACK_LINE(581)
		::String id = str;		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(582)
		if (((folder != HX_CSTRING("")))){
			HX_STACK_LINE(583)
			id = ((folder + HX_CSTRING("/")) + id);
		}
		HX_STACK_LINE(585)
		return ::flixel::addons::ui::U_obj::xml(id,null(),null(),null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(U_obj,getXML,return )

Dynamic U_obj::json( ::String str,::String __o_extension,::String __o_dir){
::String extension = __o_extension.Default(HX_CSTRING("json"));
::String dir = __o_dir.Default(HX_CSTRING("assets/json/"));
	HX_STACK_FRAME("flixel.addons.ui.U","json",0x492e9cd2,"flixel.addons.ui.U.json","flixel/addons/ui/U.hx",588,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(extension,"extension")
	HX_STACK_ARG(dir,"dir")
{
		HX_STACK_LINE(589)
		::String json_str = ::openfl::_v2::Assets_obj::getText((((dir + str) + HX_CSTRING(".")) + extension));		HX_STACK_VAR(json_str,"json_str");
		HX_STACK_LINE(590)
		if (((bool((json_str != HX_CSTRING(""))) && bool((json_str != null()))))){
			HX_STACK_LINE(591)
			Dynamic the_json = ::haxe::format::JsonParser_obj::__new(json_str)->parseRec();		HX_STACK_VAR(the_json,"the_json");
			HX_STACK_LINE(592)
			return the_json;
		}
		HX_STACK_LINE(594)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(U_obj,json,return )

Dynamic U_obj::field( Dynamic object,::String field,Dynamic _default){
	HX_STACK_FRAME("flixel.addons.ui.U","field",0x6b5c8ed0,"flixel.addons.ui.U.field","flixel/addons/ui/U.hx",597,0x74647d9b)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(field,"field")
	HX_STACK_ARG(_default,"_default")
	HX_STACK_LINE(598)
	if (((object == null()))){
		HX_STACK_LINE(598)
		return null();
	}
	HX_STACK_LINE(599)
	if ((::Reflect_obj::hasField(object,field))){
		HX_STACK_LINE(600)
		Dynamic thing = ::Reflect_obj::field(object,field);		HX_STACK_VAR(thing,"thing");
		HX_STACK_LINE(601)
		if (((thing == null()))){
			HX_STACK_LINE(602)
			return _default;
		}
		HX_STACK_LINE(604)
		return thing;
	}
	HX_STACK_LINE(606)
	return _default;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(U_obj,field,return )

Dynamic U_obj::xml( ::String id,::String __o_extension,hx::Null< bool >  __o_getFast,::String __o_dir){
::String extension = __o_extension.Default(HX_CSTRING("xml"));
bool getFast = __o_getFast.Default(true);
::String dir = __o_dir.Default(HX_CSTRING("assets/xml/"));
	HX_STACK_FRAME("flixel.addons.ui.U","xml",0x6318966d,"flixel.addons.ui.U.xml","flixel/addons/ui/U.hx",609,0x74647d9b)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(extension,"extension")
	HX_STACK_ARG(getFast,"getFast")
	HX_STACK_ARG(dir,"dir")
{
		HX_STACK_LINE(610)
		int _g = id.indexOf(HX_CSTRING("raw:"),null());		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static bool Block( ::String &id){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/U.hx",610,0x74647d9b)
				{
					HX_STACK_LINE(610)
					int _g1 = id.indexOf(HX_CSTRING("RAW:"),null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(610)
					return (_g1 == (int)0);
				}
				return null();
			}
		};
		HX_STACK_LINE(610)
		if (((  ((!(((_g == (int)0))))) ? bool(_Function_1_1::Block(id)) : bool(true) ))){
			HX_STACK_LINE(612)
			::String _g2 = id.substr((int)4,(id.length - (int)4));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(612)
			id = _g2;
			HX_STACK_LINE(613)
			dir = HX_CSTRING("");
		}
		HX_STACK_LINE(616)
		::String str = ::openfl::_v2::Assets_obj::getText((((dir + id) + HX_CSTRING(".")) + extension));		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(617)
		if (((str == null()))){
			HX_STACK_LINE(618)
			return null();
		}
		HX_STACK_LINE(620)
		::Xml the_xml = ::Xml_obj::parse(str);		HX_STACK_VAR(the_xml,"the_xml");
		HX_STACK_LINE(621)
		if ((getFast)){
			HX_STACK_LINE(622)
			::Xml _g3 = the_xml->firstElement();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(622)
			::haxe::xml::Fast fast = ::haxe::xml::Fast_obj::__new(_g3);		HX_STACK_VAR(fast,"fast");
			HX_STACK_LINE(623)
			return fast;
		}
		else{
			HX_STACK_LINE(625)
			return the_xml->firstElement();
		}
		HX_STACK_LINE(621)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(U_obj,xml,return )

Void U_obj::clearArraySoft( Dynamic array){
{
		HX_STACK_FRAME("flixel.addons.ui.U","clearArraySoft",0x8f7d5f00,"flixel.addons.ui.U.clearArraySoft","flixel/addons/ui/U.hx",637,0x74647d9b)
		HX_STACK_ARG(array,"array")
		HX_STACK_LINE(638)
		if (((array == null()))){
			HX_STACK_LINE(638)
			return null();
		}
		HX_STACK_LINE(639)
		int i = (array->__Field(HX_CSTRING("length"),true) - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(639)
		while((true)){
			HX_STACK_LINE(639)
			if ((!(((i >= (int)0))))){
				HX_STACK_LINE(639)
				break;
			}
			HX_STACK_LINE(640)
			hx::IndexRef((array).mPtr,i) = null();
			HX_STACK_LINE(641)
			array->__Field(HX_CSTRING("splice"),true)(i,(int)1);
			HX_STACK_LINE(642)
			(i)--;
		}
		HX_STACK_LINE(643)
		array = null();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,clearArraySoft,(void))

Void U_obj::clearArray( Dynamic array){
{
		HX_STACK_FRAME("flixel.addons.ui.U","clearArray",0x7ee062f6,"flixel.addons.ui.U.clearArray","flixel/addons/ui/U.hx",651,0x74647d9b)
		HX_STACK_ARG(array,"array")
		HX_STACK_LINE(652)
		if (((array == null()))){
			HX_STACK_LINE(652)
			return null();
		}
		HX_STACK_LINE(653)
		int i = (array->__Field(HX_CSTRING("length"),true) - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(653)
		while((true)){
			HX_STACK_LINE(653)
			if ((!(((i >= (int)0))))){
				HX_STACK_LINE(653)
				break;
			}
			HX_STACK_LINE(654)
			::flixel::addons::ui::U_obj::destroyThing(array->__GetItem(i));
			HX_STACK_LINE(655)
			hx::IndexRef((array).mPtr,i) = null();
			HX_STACK_LINE(656)
			array->__Field(HX_CSTRING("splice"),true)(i,(int)1);
			HX_STACK_LINE(657)
			(i)--;
		}
		HX_STACK_LINE(658)
		array = null();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,clearArray,(void))

Void U_obj::destroyThing( Dynamic thing){
{
		HX_STACK_FRAME("flixel.addons.ui.U","destroyThing",0x2d89953e,"flixel.addons.ui.U.destroyThing","flixel/addons/ui/U.hx",661,0x74647d9b)
		HX_STACK_ARG(thing,"thing")
		HX_STACK_LINE(662)
		if (((thing == null()))){
			HX_STACK_LINE(662)
			return null();
		}
		HX_STACK_LINE(664)
		if ((::Std_obj::is(thing,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(665)
			::flixel::addons::ui::U_obj::clearArray(thing);
		}
		else{
			HX_STACK_LINE(666)
			if ((::Std_obj::is(thing,hx::ClassOf< ::flixel::util::IFlxDestroyable >()))){
				HX_STACK_LINE(667)
				::flixel::util::IFlxDestroyable idstr;		HX_STACK_VAR(idstr,"idstr");
				HX_STACK_LINE(667)
				idstr = hx::TCast< flixel::util::IFlxDestroyable >::cast(thing);
				HX_STACK_LINE(668)
				idstr->destroy();
				HX_STACK_LINE(669)
				idstr = null();
			}
			else{
				HX_STACK_LINE(670)
				if ((::Std_obj::is(thing,hx::ClassOf< ::flixel::FlxBasic >()))){
					HX_STACK_LINE(671)
					::flixel::FlxBasic fb;		HX_STACK_VAR(fb,"fb");
					HX_STACK_LINE(671)
					fb = hx::TCast< flixel::FlxBasic >::cast(thing);
					HX_STACK_LINE(672)
					fb->destroy();
					HX_STACK_LINE(673)
					fb = null();
				}
			}
		}
		HX_STACK_LINE(675)
		thing = null();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,destroyThing,(void))

::String U_obj::fontStr( ::String str,::String __o_style){
::String style = __o_style.Default(HX_CSTRING(""));
	HX_STACK_FRAME("flixel.addons.ui.U","fontStr",0x00b679b8,"flixel.addons.ui.U.fontStr","flixel/addons/ui/U.hx",680,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(style,"style")
{
		HX_STACK_LINE(680)
		::String style1 = style;		HX_STACK_VAR(style1,"style1");
		HX_STACK_LINE(680)
		::String _g = style1.toLowerCase();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(680)
		style1 = _g;
		HX_STACK_LINE(680)
		::String suffix = HX_CSTRING("");		HX_STACK_VAR(suffix,"suffix");
		HX_STACK_LINE(680)
		::String _switch_6 = (style1);
		if (  ( _switch_6==HX_CSTRING("normal")) ||  ( _switch_6==HX_CSTRING("regular")) ||  ( _switch_6==HX_CSTRING("none")) ||  ( _switch_6==HX_CSTRING(""))){
			HX_STACK_LINE(680)
			suffix = HX_CSTRING("");
		}
		else if (  ( _switch_6==HX_CSTRING("bold")) ||  ( _switch_6==HX_CSTRING("b"))){
			HX_STACK_LINE(680)
			suffix = HX_CSTRING("b");
		}
		else if (  ( _switch_6==HX_CSTRING("italic")) ||  ( _switch_6==HX_CSTRING("i"))){
			HX_STACK_LINE(680)
			suffix = HX_CSTRING("i");
		}
		else if (  ( _switch_6==HX_CSTRING("bold-italic")) ||  ( _switch_6==HX_CSTRING("bolditalic")) ||  ( _switch_6==HX_CSTRING("italic-bold")) ||  ( _switch_6==HX_CSTRING("italicbold")) ||  ( _switch_6==HX_CSTRING("ibold")) ||  ( _switch_6==HX_CSTRING("boldi")) ||  ( _switch_6==HX_CSTRING("ib")) ||  ( _switch_6==HX_CSTRING("bi")) ||  ( _switch_6==HX_CSTRING("z"))){
			HX_STACK_LINE(680)
			suffix = HX_CSTRING("z");
		}
		HX_STACK_LINE(680)
		int _g1 = str.indexOf(HX_CSTRING("assets/fonts/"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(680)
		if (((_g1 != (int)0))){
			HX_STACK_LINE(680)
			return ((HX_CSTRING("assets/fonts/") + str) + suffix);
		}
		else{
			HX_STACK_LINE(680)
			return (str + suffix);
		}
		HX_STACK_LINE(680)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(U_obj,fontStr,return )

::String U_obj::font( ::String str,::String __o_style){
::String style = __o_style.Default(HX_CSTRING(""));
	HX_STACK_FRAME("flixel.addons.ui.U","font",0x4686b879,"flixel.addons.ui.U.font","flixel/addons/ui/U.hx",683,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(style,"style")
{
		HX_STACK_LINE(684)
		::String str1;		HX_STACK_VAR(str1,"str1");
		HX_STACK_LINE(684)
		{
			HX_STACK_LINE(684)
			::String style1 = style;		HX_STACK_VAR(style1,"style1");
			HX_STACK_LINE(684)
			::String _g = style1.toLowerCase();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(684)
			style1 = _g;
			HX_STACK_LINE(684)
			::String suffix = HX_CSTRING("");		HX_STACK_VAR(suffix,"suffix");
			HX_STACK_LINE(684)
			::String _switch_7 = (style1);
			if (  ( _switch_7==HX_CSTRING("normal")) ||  ( _switch_7==HX_CSTRING("regular")) ||  ( _switch_7==HX_CSTRING("none")) ||  ( _switch_7==HX_CSTRING(""))){
				HX_STACK_LINE(684)
				suffix = HX_CSTRING("");
			}
			else if (  ( _switch_7==HX_CSTRING("bold")) ||  ( _switch_7==HX_CSTRING("b"))){
				HX_STACK_LINE(684)
				suffix = HX_CSTRING("b");
			}
			else if (  ( _switch_7==HX_CSTRING("italic")) ||  ( _switch_7==HX_CSTRING("i"))){
				HX_STACK_LINE(684)
				suffix = HX_CSTRING("i");
			}
			else if (  ( _switch_7==HX_CSTRING("bold-italic")) ||  ( _switch_7==HX_CSTRING("bolditalic")) ||  ( _switch_7==HX_CSTRING("italic-bold")) ||  ( _switch_7==HX_CSTRING("italicbold")) ||  ( _switch_7==HX_CSTRING("ibold")) ||  ( _switch_7==HX_CSTRING("boldi")) ||  ( _switch_7==HX_CSTRING("ib")) ||  ( _switch_7==HX_CSTRING("bi")) ||  ( _switch_7==HX_CSTRING("z"))){
				HX_STACK_LINE(684)
				suffix = HX_CSTRING("z");
			}
			HX_STACK_LINE(684)
			int _g1 = str.indexOf(HX_CSTRING("assets/fonts/"),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(684)
			if (((_g1 != (int)0))){
				HX_STACK_LINE(684)
				str1 = ((HX_CSTRING("assets/fonts/") + str) + suffix);
			}
			else{
				HX_STACK_LINE(684)
				str1 = (str + suffix);
			}
		}
		HX_STACK_LINE(685)
		int _g2 = str1.indexOf(HX_CSTRING(".ttf"),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(685)
		if (((_g2 == (int)-1))){
			HX_STACK_LINE(686)
			str1 = (str1 + HX_CSTRING(".ttf"));
		}
		HX_STACK_LINE(688)
		return str1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(U_obj,font,return )

::String U_obj::_font( ::String str,::String __o_style){
::String style = __o_style.Default(HX_CSTRING(""));
	HX_STACK_FRAME("flixel.addons.ui.U","_font",0x619a73c4,"flixel.addons.ui.U._font","flixel/addons/ui/U.hx",693,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(style,"style")
{
		HX_STACK_LINE(694)
		::String _g = style.toLowerCase();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(694)
		style = _g;
		HX_STACK_LINE(695)
		::String suffix = HX_CSTRING("");		HX_STACK_VAR(suffix,"suffix");
		HX_STACK_LINE(696)
		::String _switch_8 = (style);
		if (  ( _switch_8==HX_CSTRING("normal")) ||  ( _switch_8==HX_CSTRING("regular")) ||  ( _switch_8==HX_CSTRING("none")) ||  ( _switch_8==HX_CSTRING(""))){
			HX_STACK_LINE(697)
			suffix = HX_CSTRING("");
		}
		else if (  ( _switch_8==HX_CSTRING("bold")) ||  ( _switch_8==HX_CSTRING("b"))){
			HX_STACK_LINE(698)
			suffix = HX_CSTRING("b");
		}
		else if (  ( _switch_8==HX_CSTRING("italic")) ||  ( _switch_8==HX_CSTRING("i"))){
			HX_STACK_LINE(699)
			suffix = HX_CSTRING("i");
		}
		else if (  ( _switch_8==HX_CSTRING("bold-italic")) ||  ( _switch_8==HX_CSTRING("bolditalic")) ||  ( _switch_8==HX_CSTRING("italic-bold")) ||  ( _switch_8==HX_CSTRING("italicbold")) ||  ( _switch_8==HX_CSTRING("ibold")) ||  ( _switch_8==HX_CSTRING("boldi")) ||  ( _switch_8==HX_CSTRING("ib")) ||  ( _switch_8==HX_CSTRING("bi")) ||  ( _switch_8==HX_CSTRING("z"))){
			HX_STACK_LINE(700)
			suffix = HX_CSTRING("z");
		}
		HX_STACK_LINE(703)
		int _g1 = str.indexOf(HX_CSTRING("assets/fonts/"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(703)
		if (((_g1 != (int)0))){
			HX_STACK_LINE(704)
			return ((HX_CSTRING("assets/fonts/") + str) + suffix);
		}
		HX_STACK_LINE(706)
		return (str + suffix);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(U_obj,_font,return )

::flixel::addons::ui::FlxUISprite U_obj::fsx( Dynamic data){
	HX_STACK_FRAME("flixel.addons.ui.U","fsx",0x630af321,"flixel.addons.ui.U.fsx","flixel/addons/ui/U.hx",710,0x74647d9b)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(710)
	return ::flixel::addons::ui::FlxUISprite_obj::__new((int)0,(int)0,data);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,fsx,return )

::flixel::FlxSprite U_obj::fs( Dynamic data){
	HX_STACK_FRAME("flixel.addons.ui.U","fs",0x12cfd577,"flixel.addons.ui.U.fs","flixel/addons/ui/U.hx",714,0x74647d9b)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(714)
	return ::flixel::FlxSprite_obj::__new((int)0,(int)0,data);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,fs,return )

::String U_obj::FU( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","FU",0x12cfb979,"flixel.addons.ui.U.FU","flixel/addons/ui/U.hx",723,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(724)
	::String _g = str.substr((int)0,(int)1).toUpperCase();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(724)
	::String _g1 = str.substr((int)1,(str.length - (int)1));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(724)
	return (_g + _g1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,FU,return )

::String U_obj::FUL( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","FUL",0x62f290b3,"flixel.addons.ui.U.FUL","flixel/addons/ui/U.hx",733,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(734)
	::String _g = str.substr((int)0,(int)1).toUpperCase();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(734)
	::String _g1 = str.substr((int)1,(str.length - (int)1)).toLowerCase();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(734)
	return (_g + _g1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,FUL,return )

bool U_obj::checkHaxedef( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","checkHaxedef",0x22016e21,"flixel.addons.ui.U.checkHaxedef","flixel/addons/ui/U.hx",737,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(738)
	::String _g = str.toLowerCase();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(738)
	str = _g;
	HX_STACK_LINE(739)
	::String _switch_9 = (str);
	if (  ( _switch_9==HX_CSTRING("cpp"))){
		HX_STACK_LINE(742)
		return true;
	}
	else if (  ( _switch_9==HX_CSTRING("windows"))){
	}
	else if (  ( _switch_9==HX_CSTRING("mac"))){
	}
	else if (  ( _switch_9==HX_CSTRING("linux"))){
	}
	else if (  ( _switch_9==HX_CSTRING("desktop"))){
	}
	else if (  ( _switch_9==HX_CSTRING("mobile"))){
	}
	else if (  ( _switch_9==HX_CSTRING("android"))){
	}
	else if (  ( _switch_9==HX_CSTRING("ios"))){
	}
	else if (  ( _switch_9==HX_CSTRING("flash"))){
	}
	else if (  ( _switch_9==HX_CSTRING("html5"))){
	}
	else if (  ( _switch_9==HX_CSTRING("js"))){
	}
	else if (  ( _switch_9==HX_CSTRING("web"))){
		HX_STACK_LINE(786)
		return true;
	}
	else if (  ( _switch_9==HX_CSTRING("sys"))){
		HX_STACK_LINE(790)
		return true;
	}
	HX_STACK_LINE(793)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,checkHaxedef,return )

Dynamic U_obj::copy_shallow_arr( Dynamic src){
	HX_STACK_FRAME("flixel.addons.ui.U","copy_shallow_arr",0xfda79816,"flixel.addons.ui.U.copy_shallow_arr","flixel/addons/ui/U.hx",796,0x74647d9b)
	HX_STACK_ARG(src,"src")
	HX_STACK_LINE(797)
	if (((src == null()))){
		HX_STACK_LINE(797)
		return null();
	}
	HX_STACK_LINE(798)
	Dynamic arr = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(799)
	Dynamic thing;		HX_STACK_VAR(thing,"thing");
	HX_STACK_LINE(800)
	if (((src == null()))){
		HX_STACK_LINE(801)
		return arr;
	}
	HX_STACK_LINE(803)
	{
		HX_STACK_LINE(803)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(803)
		while((true)){
			HX_STACK_LINE(803)
			if ((!(((_g < src->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(803)
				break;
			}
			HX_STACK_LINE(803)
			Dynamic thing1 = src->__GetItem(_g);		HX_STACK_VAR(thing1,"thing1");
			HX_STACK_LINE(803)
			++(_g);
			HX_STACK_LINE(804)
			arr->__Field(HX_CSTRING("push"),true)(thing1);
		}
	}
	HX_STACK_LINE(806)
	return arr;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,copy_shallow_arr,return )

Array< ::Dynamic > U_obj::copy_arr_arr_i( Array< ::Dynamic > src){
	HX_STACK_FRAME("flixel.addons.ui.U","copy_arr_arr_i",0xd7a40f0d,"flixel.addons.ui.U.copy_arr_arr_i","flixel/addons/ui/U.hx",809,0x74647d9b)
	HX_STACK_ARG(src,"src")
	HX_STACK_LINE(810)
	if (((src == null()))){
		HX_STACK_LINE(810)
		return null();
	}
	HX_STACK_LINE(811)
	Array< ::Dynamic > arrarr = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(arrarr,"arrarr");
	HX_STACK_LINE(812)
	{
		HX_STACK_LINE(812)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(812)
		while((true)){
			HX_STACK_LINE(812)
			if ((!(((_g < src->length))))){
				HX_STACK_LINE(812)
				break;
			}
			HX_STACK_LINE(812)
			Array< int > arri = src->__get(_g).StaticCast< Array< int > >();		HX_STACK_VAR(arri,"arri");
			HX_STACK_LINE(812)
			++(_g);
			HX_STACK_LINE(813)
			Array< int > temp = Array_obj< int >::__new();		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(814)
			{
				HX_STACK_LINE(814)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(814)
				while((true)){
					HX_STACK_LINE(814)
					if ((!(((_g1 < arri->length))))){
						HX_STACK_LINE(814)
						break;
					}
					HX_STACK_LINE(814)
					int i = arri->__get(_g1);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(814)
					++(_g1);
					HX_STACK_LINE(815)
					temp->push(i);
				}
			}
			HX_STACK_LINE(817)
			arrarr->push(temp);
		}
	}
	HX_STACK_LINE(819)
	return arrarr;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,copy_arr_arr_i,return )

Array< int > U_obj::copy_shallow_arr_i( Array< int > src){
	HX_STACK_FRAME("flixel.addons.ui.U","copy_shallow_arr_i",0x68ce9cc0,"flixel.addons.ui.U.copy_shallow_arr_i","flixel/addons/ui/U.hx",822,0x74647d9b)
	HX_STACK_ARG(src,"src")
	HX_STACK_LINE(823)
	if (((src == null()))){
		HX_STACK_LINE(823)
		return null();
	}
	HX_STACK_LINE(824)
	Array< int > arr = Array_obj< int >::__new();		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(825)
	int thing;		HX_STACK_VAR(thing,"thing");
	HX_STACK_LINE(826)
	{
		HX_STACK_LINE(826)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(826)
		while((true)){
			HX_STACK_LINE(826)
			if ((!(((_g < src->length))))){
				HX_STACK_LINE(826)
				break;
			}
			HX_STACK_LINE(826)
			int thing1 = src->__get(_g);		HX_STACK_VAR(thing1,"thing1");
			HX_STACK_LINE(826)
			++(_g);
			HX_STACK_LINE(827)
			arr->push(thing1);
		}
	}
	HX_STACK_LINE(829)
	return arr;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,copy_shallow_arr_i,return )

Array< ::String > U_obj::copy_shallow_arr_str( Array< ::String > src){
	HX_STACK_FRAME("flixel.addons.ui.U","copy_shallow_arr_str",0x2f4748c8,"flixel.addons.ui.U.copy_shallow_arr_str","flixel/addons/ui/U.hx",832,0x74647d9b)
	HX_STACK_ARG(src,"src")
	HX_STACK_LINE(833)
	if (((src == null()))){
		HX_STACK_LINE(833)
		return null();
	}
	HX_STACK_LINE(834)
	Array< ::String > arr = Array_obj< ::String >::__new();		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(835)
	::String thing;		HX_STACK_VAR(thing,"thing");
	HX_STACK_LINE(836)
	{
		HX_STACK_LINE(836)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(836)
		while((true)){
			HX_STACK_LINE(836)
			if ((!(((_g < src->length))))){
				HX_STACK_LINE(836)
				break;
			}
			HX_STACK_LINE(836)
			::String thing1 = src->__get(_g);		HX_STACK_VAR(thing1,"thing1");
			HX_STACK_LINE(836)
			++(_g);
			HX_STACK_LINE(837)
			arr->push(thing1);
		}
	}
	HX_STACK_LINE(839)
	return arr;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,copy_shallow_arr_str,return )

::String U_obj::FU_( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","FU_",0x62f290c6,"flixel.addons.ui.U.FU_","flixel/addons/ui/U.hx",842,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(843)
	Array< ::String > arr = str.split(HX_CSTRING(" "));		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(844)
	::String str1 = HX_CSTRING("");		HX_STACK_VAR(str1,"str1");
	HX_STACK_LINE(845)
	{
		HX_STACK_LINE(845)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(845)
		int _g = arr->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(845)
		while((true)){
			HX_STACK_LINE(845)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(845)
				break;
			}
			HX_STACK_LINE(845)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(846)
			::String _g2 = ::flixel::addons::ui::U_obj::FU(arr->__get(i));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(846)
			hx::AddEq(str1,_g2);
			HX_STACK_LINE(847)
			if (((i != (arr->length - (int)1)))){
				HX_STACK_LINE(848)
				hx::AddEq(str1,HX_CSTRING(" "));
			}
		}
	}
	HX_STACK_LINE(851)
	return str1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,FU_,return )

::openfl::_v2::display::BlendMode U_obj::blendModeFromString( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","blendModeFromString",0x03077be5,"flixel.addons.ui.U.blendModeFromString","flixel/addons/ui/U.hx",855,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(856)
	::String _g = str.toLowerCase();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(856)
	str = _g;
	HX_STACK_LINE(857)
	::String _switch_10 = (str);
	if (  ( _switch_10==HX_CSTRING("add"))){
		HX_STACK_LINE(859)
		return ::openfl::_v2::display::BlendMode_obj::ADD;
	}
	else if (  ( _switch_10==HX_CSTRING("alpha"))){
		HX_STACK_LINE(860)
		return ::openfl::_v2::display::BlendMode_obj::ALPHA;
	}
	else if (  ( _switch_10==HX_CSTRING("darken"))){
		HX_STACK_LINE(861)
		return ::openfl::_v2::display::BlendMode_obj::DARKEN;
	}
	else if (  ( _switch_10==HX_CSTRING("difference"))){
		HX_STACK_LINE(862)
		return ::openfl::_v2::display::BlendMode_obj::DIFFERENCE;
	}
	else if (  ( _switch_10==HX_CSTRING("erase"))){
		HX_STACK_LINE(863)
		return ::openfl::_v2::display::BlendMode_obj::ERASE;
	}
	else if (  ( _switch_10==HX_CSTRING("hardlight"))){
		HX_STACK_LINE(864)
		return ::openfl::_v2::display::BlendMode_obj::HARDLIGHT;
	}
	else if (  ( _switch_10==HX_CSTRING("invert"))){
		HX_STACK_LINE(865)
		return ::openfl::_v2::display::BlendMode_obj::INVERT;
	}
	else if (  ( _switch_10==HX_CSTRING("layer"))){
		HX_STACK_LINE(866)
		return ::openfl::_v2::display::BlendMode_obj::LAYER;
	}
	else if (  ( _switch_10==HX_CSTRING("lighten"))){
		HX_STACK_LINE(867)
		return ::openfl::_v2::display::BlendMode_obj::LIGHTEN;
	}
	else if (  ( _switch_10==HX_CSTRING("multiply"))){
		HX_STACK_LINE(868)
		return ::openfl::_v2::display::BlendMode_obj::MULTIPLY;
	}
	else if (  ( _switch_10==HX_CSTRING("normal"))){
		HX_STACK_LINE(869)
		return ::openfl::_v2::display::BlendMode_obj::NORMAL;
	}
	else if (  ( _switch_10==HX_CSTRING("overlay"))){
		HX_STACK_LINE(870)
		return ::openfl::_v2::display::BlendMode_obj::OVERLAY;
	}
	else if (  ( _switch_10==HX_CSTRING("screen"))){
		HX_STACK_LINE(871)
		return ::openfl::_v2::display::BlendMode_obj::SCREEN;
	}
	else if (  ( _switch_10==HX_CSTRING("subtract"))){
		HX_STACK_LINE(872)
		return ::openfl::_v2::display::BlendMode_obj::SUBTRACT;
	}
	HX_STACK_LINE(877)
	return ::openfl::_v2::display::BlendMode_obj::NORMAL;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,blendModeFromString,return )

::String U_obj::loadScaledImage( ::String src,Float W,Float H){
	HX_STACK_FRAME("flixel.addons.ui.U","loadScaledImage",0x44902b71,"flixel.addons.ui.U.loadScaledImage","flixel/addons/ui/U.hx",889,0x74647d9b)
	HX_STACK_ARG(src,"src")
	HX_STACK_ARG(W,"W")
	HX_STACK_ARG(H,"H")
	HX_STACK_LINE(890)
	::String bmpSrc = ::flixel::addons::ui::U_obj::gfx(src,null(),null(),null(),null(),null());		HX_STACK_VAR(bmpSrc,"bmpSrc");
	HX_STACK_LINE(891)
	::openfl::_v2::display::BitmapData testBmp = ::openfl::_v2::Assets_obj::getBitmapData(bmpSrc,true);		HX_STACK_VAR(testBmp,"testBmp");
	HX_STACK_LINE(893)
	if (((testBmp != null()))){
		HX_STACK_LINE(895)
		if (((W < (int)0))){
			HX_STACK_LINE(897)
			int _g = testBmp->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(897)
			W = _g;
		}
		HX_STACK_LINE(899)
		if (((H < (int)0))){
			HX_STACK_LINE(901)
			int _g1 = testBmp->get_height();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(901)
			H = _g1;
		}
		HX_STACK_LINE(904)
		int _g2 = testBmp->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(904)
		Float _g3 = (W - _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(904)
		Float _g4 = ::Math_obj::abs(_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(904)
		int _g5 = testBmp->get_height();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(904)
		Float _g6 = (H - _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(904)
		Float _g7 = ::Math_obj::abs(_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(904)
		Float diff = (_g4 + _g7);		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(907)
		if (((diff > 0.01))){
			HX_STACK_LINE(909)
			int _g8 = ::Std_obj::_int(W);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(909)
			::String _g9 = ((bmpSrc + HX_CSTRING("_")) + _g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(909)
			::String _g10 = (_g9 + HX_CSTRING("x"));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(909)
			int _g11 = ::Std_obj::_int(H);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(909)
			::String scaleKey = (_g10 + _g11);		HX_STACK_VAR(scaleKey,"scaleKey");
			HX_STACK_LINE(912)
			::flixel::graphics::FlxGraphic _g12 = ::flixel::FlxG_obj::bitmap->get(scaleKey);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(912)
			if (((_g12 == null()))){
				HX_STACK_LINE(914)
				int _g13 = ::Std_obj::_int(W);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(914)
				int _g14 = ::Std_obj::_int(H);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(914)
				::openfl::_v2::display::BitmapData scaledBmp = ::openfl::_v2::display::BitmapData_obj::__new(_g13,_g14,true,(int)0,null());		HX_STACK_VAR(scaledBmp,"scaledBmp");
				HX_STACK_LINE(916)
				::openfl::_v2::geom::Matrix m = ::flixel::addons::ui::U_obj::getMatrix();		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(917)
				m->identity();
				HX_STACK_LINE(918)
				int _g15 = testBmp->get_width();		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(918)
				Float _g16 = (Float(W) / Float(_g15));		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(918)
				int _g17 = testBmp->get_height();		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(918)
				Float _g18 = (Float(H) / Float(_g17));		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(918)
				m->scale(_g16,_g18);
				HX_STACK_LINE(919)
				scaledBmp->draw(testBmp,m,null(),null(),null(),true);
				HX_STACK_LINE(921)
				::flixel::FlxG_obj::bitmap->add(scaledBmp,true,scaleKey);
			}
			HX_STACK_LINE(923)
			return scaleKey;
		}
		else{
			HX_STACK_LINE(927)
			return bmpSrc;
		}
	}
	HX_STACK_LINE(930)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(U_obj,loadScaledImage,return )

::String U_obj::loadImageScaleToHeight( ::String src,Float Height,hx::Null< bool >  __o_Smooth){
bool Smooth = __o_Smooth.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.U","loadImageScaleToHeight",0xb375d501,"flixel.addons.ui.U.loadImageScaleToHeight","flixel/addons/ui/U.hx",934,0x74647d9b)
	HX_STACK_ARG(src,"src")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Smooth,"Smooth")
{
		HX_STACK_LINE(935)
		::String bmpSrc = ::flixel::addons::ui::U_obj::gfx(src,null(),null(),null(),null(),null());		HX_STACK_VAR(bmpSrc,"bmpSrc");
		HX_STACK_LINE(936)
		::openfl::_v2::display::BitmapData testBmp = ::openfl::_v2::Assets_obj::getBitmapData(bmpSrc,true);		HX_STACK_VAR(testBmp,"testBmp");
		HX_STACK_LINE(937)
		int _g = testBmp->get_height();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(937)
		Float ratio = (Float(Height) / Float(_g));		HX_STACK_VAR(ratio,"ratio");
		HX_STACK_LINE(938)
		return ::flixel::addons::ui::U_obj::loadMonoScaledImage(bmpSrc,ratio,Smooth,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(U_obj,loadImageScaleToHeight,return )

::String U_obj::loadMonoScaledImage( ::String src,Float Scale,hx::Null< bool >  __o_smooth,hx::Null< bool >  __o_checkFlxBitmap){
bool smooth = __o_smooth.Default(true);
bool checkFlxBitmap = __o_checkFlxBitmap.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.U","loadMonoScaledImage",0x63eb2c0e,"flixel.addons.ui.U.loadMonoScaledImage","flixel/addons/ui/U.hx",951,0x74647d9b)
	HX_STACK_ARG(src,"src")
	HX_STACK_ARG(Scale,"Scale")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(checkFlxBitmap,"checkFlxBitmap")
{
		HX_STACK_LINE(952)
		::String bmpSrc = ::flixel::addons::ui::U_obj::gfx(src,null(),null(),null(),null(),null());		HX_STACK_VAR(bmpSrc,"bmpSrc");
		HX_STACK_LINE(953)
		::openfl::_v2::display::BitmapData testBmp = null();		HX_STACK_VAR(testBmp,"testBmp");
		HX_STACK_LINE(955)
		if ((!(checkFlxBitmap))){
			HX_STACK_LINE(957)
			::openfl::_v2::display::BitmapData _g = ::openfl::_v2::Assets_obj::getBitmapData(bmpSrc,true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(957)
			testBmp = _g;
		}
		else{
			HX_STACK_LINE(961)
			::flixel::graphics::FlxGraphic flximg = ::flixel::FlxG_obj::bitmap->get(bmpSrc);		HX_STACK_VAR(flximg,"flximg");
			HX_STACK_LINE(962)
			if (((flximg != null()))){
				HX_STACK_LINE(962)
				testBmp = flximg->bitmap;
			}
			else{
				HX_STACK_LINE(962)
				testBmp = null();
			}
		}
		HX_STACK_LINE(965)
		if (((testBmp != null()))){
			HX_STACK_LINE(967)
			if (((Scale <= (int)0))){
				HX_STACK_LINE(969)
				HX_STACK_DO_THROW(((HX_CSTRING("Error! Scale must be positive & > 0! (Scale was = ") + Scale) + HX_CSTRING(")")));
			}
			HX_STACK_LINE(973)
			Float _g1 = ::Math_obj::abs((Scale - 1.00));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(973)
			if (((_g1 > 0.001))){
				HX_STACK_LINE(975)
				::String scaleKey = ((bmpSrc + HX_CSTRING("_ScaleX")) + Scale);		HX_STACK_VAR(scaleKey,"scaleKey");
				HX_STACK_LINE(978)
				::flixel::graphics::FlxGraphic _g2 = ::flixel::FlxG_obj::bitmap->get(scaleKey);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(978)
				if (((_g2 == null()))){
					HX_STACK_LINE(980)
					int _g3 = testBmp->get_width();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(980)
					Float _g4 = (_g3 * Scale);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(980)
					int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(980)
					int _g6 = testBmp->get_height();		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(980)
					Float _g7 = (_g6 * Scale);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(980)
					int _g8 = ::Std_obj::_int(_g7);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(980)
					::openfl::_v2::display::BitmapData scaledBmp = ::openfl::_v2::display::BitmapData_obj::__new(_g5,_g8,true,(int)0,null());		HX_STACK_VAR(scaledBmp,"scaledBmp");
					HX_STACK_LINE(982)
					::openfl::_v2::geom::Matrix m = ::flixel::addons::ui::U_obj::getMatrix();		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(983)
					m->identity();
					HX_STACK_LINE(984)
					m->scale(Scale,Scale);
					HX_STACK_LINE(985)
					scaledBmp->draw(testBmp,m,null(),null(),null(),smooth);
					HX_STACK_LINE(987)
					::flixel::FlxG_obj::bitmap->add(scaledBmp,true,scaleKey);
				}
				HX_STACK_LINE(989)
				return scaleKey;
			}
			else{
				HX_STACK_LINE(993)
				::flixel::FlxG_obj::bitmap->add(testBmp,false,bmpSrc);
				HX_STACK_LINE(994)
				return bmpSrc;
			}
		}
		HX_STACK_LINE(997)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(U_obj,loadMonoScaledImage,return )

::String U_obj::gfx( ::String id,::String __o_dir1,::String __o_dir2,::String __o_dir3,::String __o_dir4,hx::Null< bool >  __o_suppressError){
::String dir1 = __o_dir1.Default(HX_CSTRING(""));
::String dir2 = __o_dir2.Default(HX_CSTRING(""));
::String dir3 = __o_dir3.Default(HX_CSTRING(""));
::String dir4 = __o_dir4.Default(HX_CSTRING(""));
bool suppressError = __o_suppressError.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.U","gfx",0x630baa0f,"flixel.addons.ui.U.gfx","flixel/addons/ui/U.hx",1001,0x74647d9b)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(dir1,"dir1")
	HX_STACK_ARG(dir2,"dir2")
	HX_STACK_ARG(dir3,"dir3")
	HX_STACK_ARG(dir4,"dir4")
	HX_STACK_ARG(suppressError,"suppressError")
{
		HX_STACK_LINE(1002)
		if (((id != null()))){
			HX_STACK_LINE(1003)
			::String _g = id.toLowerCase();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1003)
			id = _g;
		}
		HX_STACK_LINE(1006)
		::String prefix = HX_CSTRING("");		HX_STACK_VAR(prefix,"prefix");
		HX_STACK_LINE(1008)
		if (((dir1 != HX_CSTRING("")))){
			HX_STACK_LINE(1009)
			prefix = (dir1 + HX_CSTRING("/"));
			HX_STACK_LINE(1010)
			if (((dir2 != HX_CSTRING("")))){
				HX_STACK_LINE(1011)
				hx::AddEq(prefix,(dir2 + HX_CSTRING("/")));
				HX_STACK_LINE(1012)
				if (((dir3 != HX_CSTRING("")))){
					HX_STACK_LINE(1013)
					hx::AddEq(prefix,(dir3 + HX_CSTRING("/")));
					HX_STACK_LINE(1014)
					if (((dir4 != HX_CSTRING("")))){
						HX_STACK_LINE(1015)
						hx::AddEq(prefix,(dir4 + HX_CSTRING("/")));
					}
				}
			}
		}
		HX_STACK_LINE(1021)
		if (((prefix != HX_CSTRING("")))){
			HX_STACK_LINE(1022)
			id = (prefix + id);
		}
		HX_STACK_LINE(1025)
		int _g1 = id.indexOf(HX_CSTRING("raw:"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1025)
		if (((_g1 != (int)0))){
			HX_STACK_LINE(1026)
			::String _g2 = ::StringTools_obj::replace(id,HX_CSTRING("-"),HX_CSTRING("_"));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1026)
			id = _g2;
		}
		HX_STACK_LINE(1029)
		return ::flixel::addons::ui::U_obj::get_gfx(id);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(U_obj,gfx,return )

Array< int > U_obj::bmpToArrayIntLayer( int color_index,::openfl::_v2::display::BitmapData bd){
	HX_STACK_FRAME("flixel.addons.ui.U","bmpToArrayIntLayer",0x35cf3805,"flixel.addons.ui.U.bmpToArrayIntLayer","flixel/addons/ui/U.hx",1054,0x74647d9b)
	HX_STACK_ARG(color_index,"color_index")
	HX_STACK_ARG(bd,"bd")
	HX_STACK_LINE(1056)
	int p;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(1057)
	int last_p = (int)-1;		HX_STACK_VAR(last_p,"last_p");
	HX_STACK_LINE(1058)
	Array< int > arr = Array_obj< int >::__new();		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(1059)
	int w = bd->get_width();		HX_STACK_VAR(w,"w");
	HX_STACK_LINE(1060)
	int h = bd->get_height();		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(1061)
	{
		HX_STACK_LINE(1061)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1061)
		while((true)){
			HX_STACK_LINE(1061)
			if ((!(((_g < h))))){
				HX_STACK_LINE(1061)
				break;
			}
			HX_STACK_LINE(1061)
			int r = (_g)++;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(1062)
			{
				HX_STACK_LINE(1062)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1062)
				while((true)){
					HX_STACK_LINE(1062)
					if ((!(((_g1 < w))))){
						HX_STACK_LINE(1062)
						break;
					}
					HX_STACK_LINE(1062)
					int c = (_g1)++;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(1064)
					int _g2 = bd->getPixel(c,r);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1064)
					p = _g2;
					HX_STACK_LINE(1066)
					if (((p == color_index))){
						HX_STACK_LINE(1067)
						p = (int)1;
					}
					else{
						HX_STACK_LINE(1069)
						p = (int)0;
					}
					HX_STACK_LINE(1073)
					arr->push(p);
				}
			}
		}
	}
	HX_STACK_LINE(1076)
	return arr;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(U_obj,bmpToArrayIntLayer,return )

::String U_obj::bmpToCSVLayer( int color_index,::openfl::_v2::display::BitmapData bd){
	HX_STACK_FRAME("flixel.addons.ui.U","bmpToCSVLayer",0xcff6d981,"flixel.addons.ui.U.bmpToCSVLayer","flixel/addons/ui/U.hx",1089,0x74647d9b)
	HX_STACK_ARG(color_index,"color_index")
	HX_STACK_ARG(bd,"bd")
	HX_STACK_LINE(1092)
	int p;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(1093)
	int last_p = (int)-1;		HX_STACK_VAR(last_p,"last_p");
	HX_STACK_LINE(1094)
	::String csv = HX_CSTRING("");		HX_STACK_VAR(csv,"csv");
	HX_STACK_LINE(1095)
	int w = bd->get_width();		HX_STACK_VAR(w,"w");
	HX_STACK_LINE(1096)
	int h = bd->get_height();		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(1097)
	{
		HX_STACK_LINE(1097)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1097)
		while((true)){
			HX_STACK_LINE(1097)
			if ((!(((_g < h))))){
				HX_STACK_LINE(1097)
				break;
			}
			HX_STACK_LINE(1097)
			int r = (_g)++;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(1098)
			{
				HX_STACK_LINE(1098)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1098)
				while((true)){
					HX_STACK_LINE(1098)
					if ((!(((_g1 < w))))){
						HX_STACK_LINE(1098)
						break;
					}
					HX_STACK_LINE(1098)
					int c = (_g1)++;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(1100)
					int _g2 = bd->getPixel(c,r);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1100)
					p = _g2;
					HX_STACK_LINE(1102)
					if (((p == color_index))){
						HX_STACK_LINE(1103)
						p = (int)1;
					}
					else{
						HX_STACK_LINE(1105)
						p = (int)0;
					}
					HX_STACK_LINE(1109)
					if (((c == (int)0))){
						HX_STACK_LINE(1111)
						if (((r == (int)0))){
							HX_STACK_LINE(1112)
							hx::AddEq(csv,p);
						}
						else{
							HX_STACK_LINE(1114)
							hx::AddEq(csv,(HX_CSTRING("\n") + p));
						}
					}
					else{
						HX_STACK_LINE(1118)
						hx::AddEq(csv,(HX_CSTRING(", ") + p));
					}
				}
			}
		}
	}
	HX_STACK_LINE(1122)
	return csv;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(U_obj,bmpToCSVLayer,return )

::String U_obj::get_gfx( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","get_gfx",0x914f75a6,"flixel.addons.ui.U.get_gfx","flixel/addons/ui/U.hx",1125,0x74647d9b)
	HX_STACK_ARG(str,"str")
	struct _Function_1_1{
		inline static bool Block( ::String &str){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/U.hx",1126,0x74647d9b)
			{
				HX_STACK_LINE(1126)
				int _g = str.indexOf(HX_CSTRING(".png"),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1126)
				return (_g != (int)-1);
			}
			return null();
		}
	};
	HX_STACK_LINE(1126)
	if (((  (((bool((str != null())) && bool((str.length > (int)4))))) ? bool(_Function_1_1::Block(str)) : bool(false) ))){
		HX_STACK_LINE(1128)
		::String _g1 = str.substr((int)0,(str.length - (int)4));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1128)
		str = _g1;
	}
	HX_STACK_LINE(1130)
	int _g2 = str.indexOf(HX_CSTRING("raw:"),null());		HX_STACK_VAR(_g2,"_g2");
	struct _Function_1_2{
		inline static bool Block( ::String &str){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/U.hx",1130,0x74647d9b)
			{
				HX_STACK_LINE(1130)
				int _g3 = str.indexOf(HX_CSTRING("RAW:"),null());		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1130)
				return (_g3 == (int)0);
			}
			return null();
		}
	};
	HX_STACK_LINE(1130)
	if (((  ((!(((_g2 == (int)0))))) ? bool(_Function_1_2::Block(str)) : bool(true) ))){
		HX_STACK_LINE(1131)
		::String _g4 = str.substr((int)4,(str.length - (int)4));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(1131)
		str = _g4;
		HX_STACK_LINE(1132)
		return (str + HX_CSTRING(".png"));
	}
	struct _Function_1_3{
		inline static bool Block( ::String &str){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/U.hx",1134,0x74647d9b)
			{
				HX_STACK_LINE(1134)
				int _g5 = str.indexOf(HX_CSTRING("assets/gfx/"),null());		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(1134)
				return (_g5 == (int)0);
			}
			return null();
		}
	};
	HX_STACK_LINE(1134)
	if (((  (((str != null()))) ? bool(_Function_1_3::Block(str)) : bool(false) ))){
		HX_STACK_LINE(1136)
		return (str + HX_CSTRING(".png"));
	}
	HX_STACK_LINE(1138)
	return ((HX_CSTRING("assets/gfx/") + str) + HX_CSTRING(".png"));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,get_gfx,return )

::String U_obj::sfx( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","sfx",0x6314c51b,"flixel.addons.ui.U.sfx","flixel/addons/ui/U.hx",1141,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(1142)
	::String extension = HX_CSTRING("");		HX_STACK_VAR(extension,"extension");
	HX_STACK_LINE(1146)
	extension = HX_CSTRING(".ogg");
	HX_STACK_LINE(1148)
	int _g = str.indexOf(HX_CSTRING("RAW:"),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1148)
	if (((_g == (int)0))){
		HX_STACK_LINE(1149)
		::String _g1 = str.substr((int)4,(str.length - (int)4));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1149)
		str = _g1;
		HX_STACK_LINE(1150)
		return (str + extension);
	}
	HX_STACK_LINE(1152)
	return ((HX_CSTRING("assets/sfx/") + str) + extension);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,sfx,return )

Array< int > U_obj::intStr_to_arr( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","intStr_to_arr",0xf37b0550,"flixel.addons.ui.U.intStr_to_arr","flixel/addons/ui/U.hx",1161,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(1162)
	Array< ::String > arr = str.split(HX_CSTRING(","));		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(1163)
	Array< int > str_arr = Array_obj< int >::__new();		HX_STACK_VAR(str_arr,"str_arr");
	HX_STACK_LINE(1164)
	{
		HX_STACK_LINE(1164)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1164)
		while((true)){
			HX_STACK_LINE(1164)
			if ((!(((_g < arr->length))))){
				HX_STACK_LINE(1164)
				break;
			}
			HX_STACK_LINE(1164)
			::String s = arr->__get(_g);		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1164)
			++(_g);
			HX_STACK_LINE(1165)
			int _g1 = s.indexOf(HX_CSTRING("-"),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1165)
			if (((_g1 == (int)-1))){
				HX_STACK_LINE(1166)
				Dynamic _g11 = ::Std_obj::parseInt(s);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(1166)
				str_arr->push(_g11);
			}
			else{
				HX_STACK_LINE(1168)
				Array< ::String > range = str.split(HX_CSTRING("-"));		HX_STACK_VAR(range,"range");
				HX_STACK_LINE(1169)
				int lo = (int)-1;		HX_STACK_VAR(lo,"lo");
				HX_STACK_LINE(1170)
				int hi = (int)-1;		HX_STACK_VAR(hi,"hi");
				HX_STACK_LINE(1171)
				if (((bool((range != null())) && bool((range->length == (int)2))))){
					HX_STACK_LINE(1172)
					Dynamic _g2 = ::Std_obj::parseInt(range->__get((int)0));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1172)
					lo = _g2;
					HX_STACK_LINE(1173)
					Dynamic _g3 = ::Std_obj::parseInt(range->__get((int)1));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(1173)
					int _g4 = (_g3 + (int)1);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(1173)
					hi = _g4;
					HX_STACK_LINE(1174)
					if (((bool((lo >= (int)0)) && bool((hi > lo))))){
						HX_STACK_LINE(1175)
						int _g11 = lo;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(1175)
						while((true)){
							HX_STACK_LINE(1175)
							if ((!(((_g11 < hi))))){
								HX_STACK_LINE(1175)
								break;
							}
							HX_STACK_LINE(1175)
							int i = (_g11)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(1176)
							str_arr->push(i);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(1182)
	return str_arr;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,intStr_to_arr,return )

Array< ::String > U_obj::intStr_to_arrStr( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","intStr_to_arrStr",0xae968d41,"flixel.addons.ui.U.intStr_to_arrStr","flixel/addons/ui/U.hx",1191,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(1192)
	Array< ::String > arr = str.split(HX_CSTRING(","));		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(1193)
	Array< ::String > str_arr = Array_obj< ::String >::__new();		HX_STACK_VAR(str_arr,"str_arr");
	HX_STACK_LINE(1194)
	{
		HX_STACK_LINE(1194)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1194)
		while((true)){
			HX_STACK_LINE(1194)
			if ((!(((_g < arr->length))))){
				HX_STACK_LINE(1194)
				break;
			}
			HX_STACK_LINE(1194)
			::String s = arr->__get(_g);		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1194)
			++(_g);
			HX_STACK_LINE(1195)
			int _g1 = s.indexOf(HX_CSTRING("-"),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1195)
			if (((_g1 == (int)-1))){
				HX_STACK_LINE(1196)
				Dynamic _g11 = ::Std_obj::parseInt(s);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(1196)
				::String _g2 = ::Std_obj::string(_g11);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1196)
				str_arr->push(_g2);
			}
			else{
				HX_STACK_LINE(1198)
				Array< ::String > range = str.split(HX_CSTRING("-"));		HX_STACK_VAR(range,"range");
				HX_STACK_LINE(1199)
				int lo = (int)-1;		HX_STACK_VAR(lo,"lo");
				HX_STACK_LINE(1200)
				int hi = (int)-1;		HX_STACK_VAR(hi,"hi");
				HX_STACK_LINE(1201)
				if (((bool((range != null())) && bool((range->length == (int)2))))){
					HX_STACK_LINE(1202)
					Dynamic _g3 = ::Std_obj::parseInt(range->__get((int)0));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(1202)
					lo = _g3;
					HX_STACK_LINE(1203)
					Dynamic _g4 = ::Std_obj::parseInt(range->__get((int)1));		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(1203)
					int _g5 = (_g4 + (int)1);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(1203)
					hi = _g5;
					HX_STACK_LINE(1204)
					if (((bool((lo >= (int)0)) && bool((hi > lo))))){
						HX_STACK_LINE(1205)
						int _g11 = lo;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(1205)
						while((true)){
							HX_STACK_LINE(1205)
							if ((!(((_g11 < hi))))){
								HX_STACK_LINE(1205)
								break;
							}
							HX_STACK_LINE(1205)
							int i = (_g11)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(1206)
							::String _g6 = ::Std_obj::string(i);		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(1206)
							str_arr->push(_g6);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(1212)
	return str_arr;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,intStr_to_arrStr,return )

::String U_obj::dirStr( int XX,int YY){
	HX_STACK_FRAME("flixel.addons.ui.U","dirStr",0xc16e8a8e,"flixel.addons.ui.U.dirStr","flixel/addons/ui/U.hx",1215,0x74647d9b)
	HX_STACK_ARG(XX,"XX")
	HX_STACK_ARG(YY,"YY")
	HX_STACK_LINE(1216)
	::String str = HX_CSTRING("");		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(1217)
	if (((XX == (int)0))){
		HX_STACK_LINE(1218)
		if (((YY == (int)-1))){
			HX_STACK_LINE(1218)
			str = HX_CSTRING("N");
		}
		else{
			HX_STACK_LINE(1219)
			if (((YY == (int)1))){
				HX_STACK_LINE(1219)
				str = HX_CSTRING("S");
			}
			else{
				HX_STACK_LINE(1220)
				if (((YY == (int)0))){
					HX_STACK_LINE(1220)
					str = HX_CSTRING("NONE");
				}
			}
		}
	}
	else{
		HX_STACK_LINE(1221)
		if (((XX == (int)1))){
			HX_STACK_LINE(1222)
			if (((YY == (int)-1))){
				HX_STACK_LINE(1222)
				str = HX_CSTRING("NE");
			}
			else{
				HX_STACK_LINE(1223)
				if (((YY == (int)1))){
					HX_STACK_LINE(1223)
					str = HX_CSTRING("SE");
				}
				else{
					HX_STACK_LINE(1224)
					if (((YY == (int)0))){
						HX_STACK_LINE(1224)
						str = HX_CSTRING("E");
					}
				}
			}
		}
		else{
			HX_STACK_LINE(1225)
			if (((XX == (int)-1))){
				HX_STACK_LINE(1226)
				if (((YY == (int)-1))){
					HX_STACK_LINE(1226)
					str = HX_CSTRING("NW");
				}
				else{
					HX_STACK_LINE(1227)
					if (((YY == (int)1))){
						HX_STACK_LINE(1227)
						str = HX_CSTRING("SW");
					}
					else{
						HX_STACK_LINE(1228)
						if (((YY == (int)0))){
							HX_STACK_LINE(1228)
							str = HX_CSTRING("W");
						}
					}
				}
			}
			else{
				HX_STACK_LINE(1230)
				str = HX_CSTRING("NONE");
			}
		}
	}
	HX_STACK_LINE(1231)
	return str;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(U_obj,dirStr,return )

::flixel::math::FlxPoint U_obj::obj_direction( ::flixel::FlxObject a,::flixel::FlxObject b){
	HX_STACK_FRAME("flixel.addons.ui.U","obj_direction",0x85cba8cd,"flixel.addons.ui.U.obj_direction","flixel/addons/ui/U.hx",1234,0x74647d9b)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(1235)
	Float _g = a->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1235)
	Float _g1 = (Float(_g) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1235)
	Float ax = (a->x + _g1);		HX_STACK_VAR(ax,"ax");
	HX_STACK_LINE(1236)
	Float _g2 = a->get_height();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(1236)
	Float _g3 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(1236)
	Float ay = (a->y + _g3);		HX_STACK_VAR(ay,"ay");
	HX_STACK_LINE(1238)
	Float _g4 = b->get_width();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(1238)
	Float _g5 = (Float(_g4) / Float((int)2));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(1238)
	Float bx = (b->x + _g5);		HX_STACK_VAR(bx,"bx");
	HX_STACK_LINE(1239)
	Float _g6 = b->get_height();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(1239)
	Float _g7 = (Float(_g6) / Float((int)2));		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(1239)
	Float by = (b->y + _g7);		HX_STACK_VAR(by,"by");
	HX_STACK_LINE(1241)
	Float dx = (a->x - b->x);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(1242)
	Float dy = (a->y - b->y);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(1244)
	::flixel::math::FlxPoint ipt;		HX_STACK_VAR(ipt,"ipt");
	HX_STACK_LINE(1244)
	{
		HX_STACK_LINE(1244)
		Float _g8 = ::Math_obj::abs(dx);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(1244)
		Float _g9 = (Float(dx) / Float(_g8));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(1244)
		Float X = ::Std_obj::_int(_g9);		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(1244)
		Float _g10 = ::Math_obj::abs(dy);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(1244)
		Float _g11 = (Float(dy) / Float(_g10));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(1244)
		Float Y = ::Std_obj::_int(_g11);		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(1244)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(1244)
		point->_inPool = false;
		HX_STACK_LINE(1244)
		ipt = point;
	}
	HX_STACK_LINE(1245)
	return ipt;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(U_obj,obj_direction,return )

bool U_obj::circle_test( Float x1,Float y1,Float r1,Float x2,Float y2,Float r2){
	HX_STACK_FRAME("flixel.addons.ui.U","circle_test",0xe94ea6b7,"flixel.addons.ui.U.circle_test","flixel/addons/ui/U.hx",1248,0x74647d9b)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(r1,"r1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(r2,"r2")
	HX_STACK_LINE(1249)
	Float dx = (x1 - x2);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(1250)
	Float dy = (y1 - y2);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(1251)
	Float d2 = ((dx * dx) + (dy * dy));		HX_STACK_VAR(d2,"d2");
	HX_STACK_LINE(1252)
	Float dr2 = ((r1 * r1) + (r2 * r2));		HX_STACK_VAR(dr2,"dr2");
	HX_STACK_LINE(1253)
	return (d2 <= dr2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(U_obj,circle_test,return )

bool U_obj::point_circle_test( Float x,Float y,Float cx,Float cy,Float r){
	HX_STACK_FRAME("flixel.addons.ui.U","point_circle_test",0x8b175588,"flixel.addons.ui.U.point_circle_test","flixel/addons/ui/U.hx",1256,0x74647d9b)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(cx,"cx")
	HX_STACK_ARG(cy,"cy")
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(1257)
	Float dx = (x - cx);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(1258)
	Float dy = (y - cy);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(1259)
	Float d2 = ((dx * dx) + (dy * dy));		HX_STACK_VAR(d2,"d2");
	HX_STACK_LINE(1260)
	return (d2 <= (r * r));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(U_obj,point_circle_test,return )

bool U_obj::aabb_test_mult( ::flixel::FlxObject a,::flixel::FlxObject b,hx::Null< Float >  __o_multA,hx::Null< Float >  __o_multB){
Float multA = __o_multA.Default(1);
Float multB = __o_multB.Default(1);
	HX_STACK_FRAME("flixel.addons.ui.U","aabb_test_mult",0x7aa50bc8,"flixel.addons.ui.U.aabb_test_mult","flixel/addons/ui/U.hx",1263,0x74647d9b)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(multA,"multA")
	HX_STACK_ARG(multB,"multB")
{
		HX_STACK_LINE(1264)
		Float _g = a->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1264)
		Float extra = (_g * multA);		HX_STACK_VAR(extra,"extra");
		HX_STACK_LINE(1264)
		Float _g1 = a->get_width();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1264)
		Float _g2 = (extra - _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1264)
		Float diff = (Float(_g2) / Float((int)2));		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(1266)
		Float ax1 = (a->x - diff);		HX_STACK_VAR(ax1,"ax1");
		HX_STACK_LINE(1267)
		Float _g3 = a->get_width();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(1267)
		Float _g4 = (a->x + _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(1267)
		Float ax2 = (_g4 + diff);		HX_STACK_VAR(ax2,"ax2");
		HX_STACK_LINE(1269)
		Float _g5 = a->get_height();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(1269)
		Float _g6 = (_g5 * multA);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(1269)
		extra = _g6;
		HX_STACK_LINE(1269)
		Float _g7 = a->get_height();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(1269)
		Float _g8 = (extra - _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(1269)
		Float _g9 = (Float(_g8) / Float((int)2));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(1269)
		diff = _g9;
		HX_STACK_LINE(1271)
		Float ay1 = (a->y - diff);		HX_STACK_VAR(ay1,"ay1");
		HX_STACK_LINE(1272)
		Float _g10 = a->get_height();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(1272)
		Float _g11 = (a->y + _g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(1272)
		Float ay2 = (_g11 + diff);		HX_STACK_VAR(ay2,"ay2");
		HX_STACK_LINE(1274)
		Float _g12 = b->get_width();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(1274)
		Float _g13 = (_g12 * multB);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(1274)
		extra = _g13;
		HX_STACK_LINE(1274)
		Float _g14 = b->get_width();		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(1274)
		Float _g15 = (extra - _g14);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(1274)
		Float _g16 = (Float(_g15) / Float((int)2));		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(1274)
		diff = _g16;
		HX_STACK_LINE(1276)
		Float bx1 = (b->x - diff);		HX_STACK_VAR(bx1,"bx1");
		HX_STACK_LINE(1277)
		Float _g17 = b->get_width();		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(1277)
		Float _g18 = (b->x + _g17);		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(1277)
		Float bx2 = (_g18 + diff);		HX_STACK_VAR(bx2,"bx2");
		HX_STACK_LINE(1279)
		Float _g19 = b->get_height();		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(1279)
		Float _g20 = (_g19 * multB);		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(1279)
		extra = _g20;
		HX_STACK_LINE(1279)
		Float _g21 = b->get_height();		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(1279)
		Float _g22 = (extra - _g21);		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(1279)
		Float _g23 = (Float(_g22) / Float((int)2));		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(1279)
		diff = _g23;
		HX_STACK_LINE(1281)
		Float by1 = (b->y - diff);		HX_STACK_VAR(by1,"by1");
		HX_STACK_LINE(1282)
		Float _g24 = b->get_height();		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(1282)
		Float _g25 = (b->y + _g24);		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(1282)
		Float by2 = (_g25 + diff);		HX_STACK_VAR(by2,"by2");
		HX_STACK_LINE(1284)
		Float _g26 = ::Math_obj::abs(((bx2 + bx1) - ((ax2 + ax1))));		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(1284)
		if (((_g26 <= (((bx2 - bx1) + ax2) - ax1)))){
			HX_STACK_LINE(1285)
			Float _g27 = ::Math_obj::abs(((by2 + by1) - ((ay2 + ay1))));		HX_STACK_VAR(_g27,"_g27");
			HX_STACK_LINE(1285)
			return (_g27 <= (((by2 - by1) + ay2) - ay1));
		}
		else{
			HX_STACK_LINE(1284)
			return false;
		}
		HX_STACK_LINE(1284)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(U_obj,aabb_test_mult,return )

bool U_obj::aabb_test( ::flixel::FlxObject a,::flixel::FlxObject b){
	HX_STACK_FRAME("flixel.addons.ui.U","aabb_test",0xfa707aa7,"flixel.addons.ui.U.aabb_test","flixel/addons/ui/U.hx",1288,0x74647d9b)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(1290)
	Float ax1 = a->x;		HX_STACK_VAR(ax1,"ax1");
	HX_STACK_LINE(1291)
	Float _g = a->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1291)
	Float ax2 = (a->x + _g);		HX_STACK_VAR(ax2,"ax2");
	HX_STACK_LINE(1293)
	Float ay1 = a->y;		HX_STACK_VAR(ay1,"ay1");
	HX_STACK_LINE(1294)
	Float _g1 = a->get_height();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1294)
	Float ay2 = (a->y + _g1);		HX_STACK_VAR(ay2,"ay2");
	HX_STACK_LINE(1296)
	Float bx1 = b->x;		HX_STACK_VAR(bx1,"bx1");
	HX_STACK_LINE(1297)
	Float _g2 = b->get_width();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(1297)
	Float bx2 = (b->x + _g2);		HX_STACK_VAR(bx2,"bx2");
	HX_STACK_LINE(1299)
	Float by1 = b->y;		HX_STACK_VAR(by1,"by1");
	HX_STACK_LINE(1300)
	Float _g3 = b->get_height();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(1300)
	Float by2 = (b->y + _g3);		HX_STACK_VAR(by2,"by2");
	HX_STACK_LINE(1302)
	Float _g4 = ::Math_obj::abs(((bx2 + bx1) - ((ax2 + ax1))));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(1302)
	if (((_g4 <= (((bx2 - bx1) + ax2) - ax1)))){
		HX_STACK_LINE(1303)
		Float _g5 = ::Math_obj::abs(((by2 + by1) - ((ay2 + ay1))));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(1303)
		return (_g5 <= (((by2 - by1) + ay2) - ay1));
	}
	else{
		HX_STACK_LINE(1302)
		return false;
	}
	HX_STACK_LINE(1302)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(U_obj,aabb_test,return )

::openfl::_v2::geom::Point U_obj::bitStringDimensions( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","bitStringDimensions",0x61b76e01,"flixel.addons.ui.U.bitStringDimensions","flixel/addons/ui/U.hx",1312,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(1313)
	::openfl::_v2::geom::Point pt = ::openfl::_v2::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(pt,"pt");
	HX_STACK_LINE(1314)
	Array< ::String > arr = str.split(HX_CSTRING("\n"));		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(1315)
	if (((bool((arr != null())) && bool((arr->length > (int)1))))){
		HX_STACK_LINE(1316)
		pt->y = arr->length;
		HX_STACK_LINE(1317)
		if (((bool((arr->__get((int)0) != null())) && bool((arr->__get((int)0).length > (int)1))))){
			HX_STACK_LINE(1318)
			pt->x = arr->__get((int)0).length;
		}
	}
	HX_STACK_LINE(1321)
	return pt;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,bitStringDimensions,return )

Array< int > U_obj::splitBitString( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","splitBitString",0xe2e84a6e,"flixel.addons.ui.U.splitBitString","flixel/addons/ui/U.hx",1330,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(1331)
	Array< int > final = Array_obj< int >::__new();		HX_STACK_VAR(final,"final");
	HX_STACK_LINE(1332)
	Array< ::String > arr = str.split(HX_CSTRING("\n"));		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(1333)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1333)
	while((true)){
		HX_STACK_LINE(1333)
		if ((!(((i < arr->length))))){
			HX_STACK_LINE(1333)
			break;
		}
		HX_STACK_LINE(1334)
		int len = arr->__get(i).length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(1335)
		int j = (int)0;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(1335)
		while((true)){
			HX_STACK_LINE(1335)
			if ((!(((j < len))))){
				HX_STACK_LINE(1335)
				break;
			}
			HX_STACK_LINE(1336)
			::String _char = arr->__get(i).charAt(j);		HX_STACK_VAR(_char,"char");
			HX_STACK_LINE(1337)
			int num = ::Std_obj::parseInt(_char);		HX_STACK_VAR(num,"num");
			HX_STACK_LINE(1338)
			final->push(num);
			HX_STACK_LINE(1339)
			(j)++;
		}
		HX_STACK_LINE(1341)
		(i)++;
	}
	HX_STACK_LINE(1343)
	return final;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,splitBitString,return )

::String U_obj::getShortTextFromFlxKeyText( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","getShortTextFromFlxKeyText",0x3a78f701,"flixel.addons.ui.U.getShortTextFromFlxKeyText","flixel/addons/ui/U.hx",1346,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(1347)
	::String s = str.toUpperCase();		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(1348)
	::String _switch_11 = (str);
	if (  ( _switch_11==HX_CSTRING("ESC"))){
	}
	else if (  ( _switch_11==HX_CSTRING("ESCAPE"))){
		HX_STACK_LINE(1350)
		s = HX_CSTRING("EC");
	}
	else if (  ( _switch_11==HX_CSTRING("MINUS"))){
		HX_STACK_LINE(1351)
		s = HX_CSTRING("-");
	}
	else if (  ( _switch_11==HX_CSTRING("PLUS"))){
		HX_STACK_LINE(1352)
		s = HX_CSTRING("+");
	}
	else if (  ( _switch_11==HX_CSTRING("EQUALS"))){
		HX_STACK_LINE(1353)
		s = HX_CSTRING("=");
	}
	else if (  ( _switch_11==HX_CSTRING("DELETE"))){
		HX_STACK_LINE(1354)
		s = HX_CSTRING("DE");
	}
	else if (  ( _switch_11==HX_CSTRING("BACKSPACE"))){
		HX_STACK_LINE(1355)
		s = HX_CSTRING("BK");
	}
	else if (  ( _switch_11==HX_CSTRING("LBRACKET"))){
		HX_STACK_LINE(1356)
		s = HX_CSTRING("[");
	}
	else if (  ( _switch_11==HX_CSTRING("RBRACKET"))){
		HX_STACK_LINE(1357)
		s = HX_CSTRING("]");
	}
	else if (  ( _switch_11==HX_CSTRING("BACKSLASH"))){
		HX_STACK_LINE(1358)
		s = HX_CSTRING("\\");
	}
	else if (  ( _switch_11==HX_CSTRING("SEMICOLON"))){
		HX_STACK_LINE(1359)
		s = HX_CSTRING(";");
	}
	else if (  ( _switch_11==HX_CSTRING("QUOTE"))){
		HX_STACK_LINE(1360)
		s = HX_CSTRING("\"");
	}
	else if (  ( _switch_11==HX_CSTRING("ENTER"))){
		HX_STACK_LINE(1361)
		s = HX_CSTRING("EN");
	}
	else if (  ( _switch_11==HX_CSTRING("SHIFT"))){
		HX_STACK_LINE(1362)
		s = HX_CSTRING("SH");
	}
	else if (  ( _switch_11==HX_CSTRING("COMMA"))){
		HX_STACK_LINE(1363)
		s = HX_CSTRING(",");
	}
	else if (  ( _switch_11==HX_CSTRING("PERIOD"))){
		HX_STACK_LINE(1364)
		s = HX_CSTRING(".");
	}
	else if (  ( _switch_11==HX_CSTRING("SLASH"))){
		HX_STACK_LINE(1365)
		s = HX_CSTRING("/");
	}
	else if (  ( _switch_11==HX_CSTRING("CONTROL"))){
		HX_STACK_LINE(1366)
		s = HX_CSTRING("CT");
	}
	else if (  ( _switch_11==HX_CSTRING("ALT"))){
		HX_STACK_LINE(1367)
		s = HX_CSTRING("AT");
	}
	else if (  ( _switch_11==HX_CSTRING("SPACE"))){
		HX_STACK_LINE(1368)
		s = HX_CSTRING("SP");
	}
	else if (  ( _switch_11==HX_CSTRING("UP"))){
		HX_STACK_LINE(1369)
		s = HX_CSTRING("UP");
	}
	else if (  ( _switch_11==HX_CSTRING("DOWN"))){
		HX_STACK_LINE(1370)
		s = HX_CSTRING("DN");
	}
	else if (  ( _switch_11==HX_CSTRING("LEFT"))){
		HX_STACK_LINE(1371)
		s = HX_CSTRING("LT");
	}
	else if (  ( _switch_11==HX_CSTRING("RIGHT"))){
		HX_STACK_LINE(1372)
		s = HX_CSTRING("RT");
	}
	else if (  ( _switch_11==HX_CSTRING("ZERO"))){
		HX_STACK_LINE(1373)
		s = HX_CSTRING("0");
	}
	else if (  ( _switch_11==HX_CSTRING("ONE"))){
		HX_STACK_LINE(1374)
		s = HX_CSTRING("1");
	}
	else if (  ( _switch_11==HX_CSTRING("TWO"))){
		HX_STACK_LINE(1375)
		s = HX_CSTRING("2");
	}
	else if (  ( _switch_11==HX_CSTRING("THREE"))){
		HX_STACK_LINE(1376)
		s = HX_CSTRING("3");
	}
	else if (  ( _switch_11==HX_CSTRING("FOUR"))){
		HX_STACK_LINE(1377)
		s = HX_CSTRING("4");
	}
	else if (  ( _switch_11==HX_CSTRING("FIVE"))){
		HX_STACK_LINE(1378)
		s = HX_CSTRING("5");
	}
	else if (  ( _switch_11==HX_CSTRING("SIX"))){
		HX_STACK_LINE(1379)
		s = HX_CSTRING("6");
	}
	else if (  ( _switch_11==HX_CSTRING("SEVEN"))){
		HX_STACK_LINE(1380)
		s = HX_CSTRING("7");
	}
	else if (  ( _switch_11==HX_CSTRING("EIGHT"))){
		HX_STACK_LINE(1381)
		s = HX_CSTRING("8");
	}
	else if (  ( _switch_11==HX_CSTRING("NINE"))){
		HX_STACK_LINE(1382)
		s = HX_CSTRING("9");
	}
	else if (  ( _switch_11==HX_CSTRING("TEN"))){
		HX_STACK_LINE(1383)
		s = HX_CSTRING("10");
	}
	else if (  ( _switch_11==HX_CSTRING("ACCENT"))){
		HX_STACK_LINE(1384)
		s = HX_CSTRING("`");
	}
	else if (  ( _switch_11==HX_CSTRING("TAB"))){
		HX_STACK_LINE(1385)
		s = HX_CSTRING("TB");
	}
	else if (  ( _switch_11==HX_CSTRING("CAPSLOCK"))){
		HX_STACK_LINE(1386)
		s = HX_CSTRING("CP");
	}
	else if (  ( _switch_11==HX_CSTRING("PAUSEBREAK"))){
		HX_STACK_LINE(1387)
		s = HX_CSTRING("PB");
	}
	else if (  ( _switch_11==HX_CSTRING("HOME"))){
		HX_STACK_LINE(1388)
		s = HX_CSTRING("HM");
	}
	else if (  ( _switch_11==HX_CSTRING("INSERT"))){
		HX_STACK_LINE(1389)
		s = HX_CSTRING("IN");
	}
	else if (  ( _switch_11==HX_CSTRING("PAGEUP"))){
		HX_STACK_LINE(1390)
		s = HX_CSTRING("PU");
	}
	else if (  ( _switch_11==HX_CSTRING("PAGEDOWN"))){
		HX_STACK_LINE(1391)
		s = HX_CSTRING("PD");
	}
	else if (  ( _switch_11==HX_CSTRING("END"))){
		HX_STACK_LINE(1392)
		s = HX_CSTRING("ED");
	}
	else if (  ( _switch_11==HX_CSTRING("NUMLOCK"))){
		HX_STACK_LINE(1393)
		s = HX_CSTRING("NM");
	}
	else if (  ( _switch_11==HX_CSTRING("SCROLLLOCK"))){
		HX_STACK_LINE(1394)
		s = HX_CSTRING("SC");
	}
	else if (  ( _switch_11==HX_CSTRING("NUM0"))){
		HX_STACK_LINE(1395)
		s = HX_CSTRING("N0");
	}
	else if (  ( _switch_11==HX_CSTRING("NUM1"))){
		HX_STACK_LINE(1396)
		s = HX_CSTRING("N1");
	}
	else if (  ( _switch_11==HX_CSTRING("NUM2"))){
		HX_STACK_LINE(1397)
		s = HX_CSTRING("N2");
	}
	else if (  ( _switch_11==HX_CSTRING("NUM3"))){
		HX_STACK_LINE(1398)
		s = HX_CSTRING("N3");
	}
	else if (  ( _switch_11==HX_CSTRING("NUM4"))){
		HX_STACK_LINE(1399)
		s = HX_CSTRING("N4");
	}
	else if (  ( _switch_11==HX_CSTRING("NUM5"))){
		HX_STACK_LINE(1400)
		s = HX_CSTRING("N5");
	}
	else if (  ( _switch_11==HX_CSTRING("NUM6"))){
		HX_STACK_LINE(1401)
		s = HX_CSTRING("N6");
	}
	else if (  ( _switch_11==HX_CSTRING("NUM7"))){
		HX_STACK_LINE(1402)
		s = HX_CSTRING("N7");
	}
	else if (  ( _switch_11==HX_CSTRING("NUM8"))){
		HX_STACK_LINE(1403)
		s = HX_CSTRING("N8");
	}
	else if (  ( _switch_11==HX_CSTRING("NUM9"))){
		HX_STACK_LINE(1404)
		s = HX_CSTRING("N9");
	}
	else if (  ( _switch_11==HX_CSTRING("NUMDIV"))){
		HX_STACK_LINE(1405)
		s = HX_CSTRING("N/");
	}
	else if (  ( _switch_11==HX_CSTRING("NUMMULT"))){
		HX_STACK_LINE(1406)
		s = HX_CSTRING("N*");
	}
	else if (  ( _switch_11==HX_CSTRING("NUMPLUS"))){
		HX_STACK_LINE(1407)
		s = HX_CSTRING("N+");
	}
	else if (  ( _switch_11==HX_CSTRING("NUMMINUS"))){
		HX_STACK_LINE(1408)
		s = HX_CSTRING("N-");
	}
	else if (  ( _switch_11==HX_CSTRING("NUMDEC"))){
		HX_STACK_LINE(1409)
		s = HX_CSTRING("N.");
	}
	else if (  ( _switch_11==HX_CSTRING("NULL"))){
		HX_STACK_LINE(1410)
		s = HX_CSTRING(" ");
	}
	else  {
		HX_STACK_LINE(1411)
		s = str;
	}
;
;
	HX_STACK_LINE(1413)
	return s;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,getShortTextFromFlxKeyText,return )

::String U_obj::getFlxKeyTextFromShortText( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","getFlxKeyTextFromShortText",0x32f730b9,"flixel.addons.ui.U.getFlxKeyTextFromShortText","flixel/addons/ui/U.hx",1416,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(1417)
	::String s = str.toUpperCase();		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(1418)
	::String _switch_12 = (str);
	if (  ( _switch_12==HX_CSTRING("EC"))){
		HX_STACK_LINE(1419)
		s = HX_CSTRING("ESCAPE");
	}
	else if (  ( _switch_12==HX_CSTRING("-"))){
		HX_STACK_LINE(1420)
		s = HX_CSTRING("MINUS");
	}
	else if (  ( _switch_12==HX_CSTRING("="))){
		HX_STACK_LINE(1421)
		s = HX_CSTRING("EQUALS");
	}
	else if (  ( _switch_12==HX_CSTRING("+"))){
		HX_STACK_LINE(1422)
		s = HX_CSTRING("PLUS");
	}
	else if (  ( _switch_12==HX_CSTRING("DE"))){
		HX_STACK_LINE(1423)
		s = HX_CSTRING("DELETE");
	}
	else if (  ( _switch_12==HX_CSTRING("BK"))){
		HX_STACK_LINE(1424)
		s = HX_CSTRING("BACKSPACE");
	}
	else if (  ( _switch_12==HX_CSTRING("["))){
		HX_STACK_LINE(1425)
		s = HX_CSTRING("LBRACKET");
	}
	else if (  ( _switch_12==HX_CSTRING("]"))){
		HX_STACK_LINE(1426)
		s = HX_CSTRING("RBRACKET");
	}
	else if (  ( _switch_12==HX_CSTRING("\\"))){
		HX_STACK_LINE(1427)
		s = HX_CSTRING("BACKSLASH");
	}
	else if (  ( _switch_12==HX_CSTRING("CP"))){
		HX_STACK_LINE(1428)
		s = HX_CSTRING("CAPSLOCK");
	}
	else if (  ( _switch_12==HX_CSTRING(";"))){
		HX_STACK_LINE(1429)
		s = HX_CSTRING("SEMICOLON");
	}
	else if (  ( _switch_12==HX_CSTRING("\""))){
		HX_STACK_LINE(1430)
		s = HX_CSTRING("QUOTE");
	}
	else if (  ( _switch_12==HX_CSTRING("EN"))){
		HX_STACK_LINE(1431)
		s = HX_CSTRING("ENTER");
	}
	else if (  ( _switch_12==HX_CSTRING("SH"))){
		HX_STACK_LINE(1432)
		s = HX_CSTRING("SHIFT");
	}
	else if (  ( _switch_12==HX_CSTRING(","))){
		HX_STACK_LINE(1433)
		s = HX_CSTRING("COMMA");
	}
	else if (  ( _switch_12==HX_CSTRING("."))){
		HX_STACK_LINE(1434)
		s = HX_CSTRING("PERIOD");
	}
	else if (  ( _switch_12==HX_CSTRING("/"))){
		HX_STACK_LINE(1435)
		s = HX_CSTRING("SLASH");
	}
	else if (  ( _switch_12==HX_CSTRING("CT"))){
		HX_STACK_LINE(1436)
		s = HX_CSTRING("CONTROL");
	}
	else if (  ( _switch_12==HX_CSTRING("AT"))){
		HX_STACK_LINE(1437)
		s = HX_CSTRING("ALT");
	}
	else if (  ( _switch_12==HX_CSTRING("SP"))){
		HX_STACK_LINE(1438)
		s = HX_CSTRING("SPACE");
	}
	else if (  ( _switch_12==HX_CSTRING("UP"))){
		HX_STACK_LINE(1439)
		s = HX_CSTRING("UP");
	}
	else if (  ( _switch_12==HX_CSTRING("DN"))){
		HX_STACK_LINE(1440)
		s = HX_CSTRING("DOWN");
	}
	else if (  ( _switch_12==HX_CSTRING("LT"))){
		HX_STACK_LINE(1441)
		s = HX_CSTRING("LEFT");
	}
	else if (  ( _switch_12==HX_CSTRING("RT"))){
		HX_STACK_LINE(1442)
		s = HX_CSTRING("RIGHT");
	}
	else if (  ( _switch_12==HX_CSTRING("0"))){
		HX_STACK_LINE(1443)
		s = HX_CSTRING("ZERO");
	}
	else if (  ( _switch_12==HX_CSTRING("1"))){
		HX_STACK_LINE(1444)
		s = HX_CSTRING("ONE");
	}
	else if (  ( _switch_12==HX_CSTRING("2"))){
		HX_STACK_LINE(1445)
		s = HX_CSTRING("TWO");
	}
	else if (  ( _switch_12==HX_CSTRING("3"))){
		HX_STACK_LINE(1446)
		s = HX_CSTRING("THREE");
	}
	else if (  ( _switch_12==HX_CSTRING("4"))){
		HX_STACK_LINE(1447)
		s = HX_CSTRING("FOUR");
	}
	else if (  ( _switch_12==HX_CSTRING("5"))){
		HX_STACK_LINE(1448)
		s = HX_CSTRING("FIVE");
	}
	else if (  ( _switch_12==HX_CSTRING("6"))){
		HX_STACK_LINE(1449)
		s = HX_CSTRING("SIX");
	}
	else if (  ( _switch_12==HX_CSTRING("7"))){
		HX_STACK_LINE(1450)
		s = HX_CSTRING("SEVEN");
	}
	else if (  ( _switch_12==HX_CSTRING("8"))){
		HX_STACK_LINE(1451)
		s = HX_CSTRING("EIGHT");
	}
	else if (  ( _switch_12==HX_CSTRING("9"))){
		HX_STACK_LINE(1452)
		s = HX_CSTRING("NINE");
	}
	else if (  ( _switch_12==HX_CSTRING("10"))){
		HX_STACK_LINE(1453)
		s = HX_CSTRING("TEN");
	}
	else if (  ( _switch_12==HX_CSTRING("`"))){
		HX_STACK_LINE(1454)
		s = HX_CSTRING("ACCENT");
	}
	else if (  ( _switch_12==HX_CSTRING("TB"))){
		HX_STACK_LINE(1455)
		s = HX_CSTRING("TAB");
	}
	else if (  ( _switch_12==HX_CSTRING("PB"))){
		HX_STACK_LINE(1456)
		s = HX_CSTRING("PAUSEBREAK");
	}
	else if (  ( _switch_12==HX_CSTRING("HM"))){
		HX_STACK_LINE(1457)
		s = HX_CSTRING("HOME");
	}
	else if (  ( _switch_12==HX_CSTRING("IN"))){
		HX_STACK_LINE(1458)
		s = HX_CSTRING("INSERT");
	}
	else if (  ( _switch_12==HX_CSTRING("PU"))){
		HX_STACK_LINE(1459)
		s = HX_CSTRING("PAGEUP");
	}
	else if (  ( _switch_12==HX_CSTRING("PD"))){
		HX_STACK_LINE(1460)
		s = HX_CSTRING("PAGEDOWN");
	}
	else if (  ( _switch_12==HX_CSTRING("ED"))){
		HX_STACK_LINE(1461)
		s = HX_CSTRING("END");
	}
	else if (  ( _switch_12==HX_CSTRING("NM"))){
		HX_STACK_LINE(1462)
		s = HX_CSTRING("NUMLOCK");
	}
	else if (  ( _switch_12==HX_CSTRING("SC"))){
		HX_STACK_LINE(1463)
		s = HX_CSTRING("SCROLLLOCK");
	}
	else if (  ( _switch_12==HX_CSTRING("N0"))){
		HX_STACK_LINE(1464)
		s = HX_CSTRING("NUM0");
	}
	else if (  ( _switch_12==HX_CSTRING("N1"))){
		HX_STACK_LINE(1465)
		s = HX_CSTRING("NUM1");
	}
	else if (  ( _switch_12==HX_CSTRING("N2"))){
		HX_STACK_LINE(1466)
		s = HX_CSTRING("NUM2");
	}
	else if (  ( _switch_12==HX_CSTRING("N3"))){
		HX_STACK_LINE(1467)
		s = HX_CSTRING("NUM3");
	}
	else if (  ( _switch_12==HX_CSTRING("N4"))){
		HX_STACK_LINE(1468)
		s = HX_CSTRING("NUM4");
	}
	else if (  ( _switch_12==HX_CSTRING("N5"))){
		HX_STACK_LINE(1469)
		s = HX_CSTRING("NUM5");
	}
	else if (  ( _switch_12==HX_CSTRING("N6"))){
		HX_STACK_LINE(1470)
		s = HX_CSTRING("NUM6");
	}
	else if (  ( _switch_12==HX_CSTRING("N7"))){
		HX_STACK_LINE(1471)
		s = HX_CSTRING("NUM7");
	}
	else if (  ( _switch_12==HX_CSTRING("N8"))){
		HX_STACK_LINE(1472)
		s = HX_CSTRING("NUM8");
	}
	else if (  ( _switch_12==HX_CSTRING("N9"))){
		HX_STACK_LINE(1473)
		s = HX_CSTRING("NUM9");
	}
	else if (  ( _switch_12==HX_CSTRING("N."))){
		HX_STACK_LINE(1474)
		s = HX_CSTRING("NUMDEC");
	}
	else if (  ( _switch_12==HX_CSTRING("N/"))){
		HX_STACK_LINE(1475)
		s = HX_CSTRING("NUMDIV");
	}
	else if (  ( _switch_12==HX_CSTRING("N+"))){
		HX_STACK_LINE(1476)
		s = HX_CSTRING("NUMPLUS");
	}
	else if (  ( _switch_12==HX_CSTRING("N-"))){
		HX_STACK_LINE(1477)
		s = HX_CSTRING("NUMMINUS");
	}
	else if (  ( _switch_12==HX_CSTRING("*"))){
		HX_STACK_LINE(1478)
		s = HX_CSTRING("NUMMULT");
	}
	else if (  ( _switch_12==HX_CSTRING(""))){
		HX_STACK_LINE(1479)
		s = HX_CSTRING(" ");
	}
	else  {
		HX_STACK_LINE(1480)
		s = str;
	}
;
;
	HX_STACK_LINE(1482)
	return s;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,getFlxKeyTextFromShortText,return )

::String U_obj::formatXml( ::Xml _xml){
	HX_STACK_FRAME("flixel.addons.ui.U","formatXml",0x5ff16ff6,"flixel.addons.ui.U.formatXml","flixel/addons/ui/U.hx",1486,0x74647d9b)
	HX_STACK_ARG(_xml,"_xml")
	HX_STACK_LINE(1487)
	::String s = _xml->toString();		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(1489)
	::EReg r = ::EReg_obj::__new(HX_CSTRING(">[^`<]*<"),HX_CSTRING("g"));		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(1490)
	::String _g = r->replace(s,HX_CSTRING(">___SPLITHERE___<"));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1490)
	s = _g;
	HX_STACK_LINE(1492)
	::EReg _g1 = ::EReg_obj::__new(HX_CSTRING("___SPLITHERE___"),HX_CSTRING("g"));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1492)
	r = _g1;
	HX_STACK_LINE(1493)
	Array< ::String > split = r->split(s);		HX_STACK_VAR(split,"split");
	HX_STACK_LINE(1496)
	s = HX_CSTRING("");
	HX_STACK_LINE(1497)
	int childDepht = (int)0;		HX_STACK_VAR(childDepht,"childDepht");
	HX_STACK_LINE(1498)
	::String whiteSpace = HX_CSTRING("\t");		HX_STACK_VAR(whiteSpace,"whiteSpace");
	HX_STACK_LINE(1500)
	{
		HX_STACK_LINE(1500)
		int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1500)
		while((true)){
			HX_STACK_LINE(1500)
			if ((!(((_g2 < split->length))))){
				HX_STACK_LINE(1500)
				break;
			}
			HX_STACK_LINE(1500)
			::String str = split->__get(_g2);		HX_STACK_VAR(str,"str");
			HX_STACK_LINE(1500)
			++(_g2);
			HX_STACK_LINE(1502)
			{
				HX_STACK_LINE(1502)
				int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(1502)
				while((true)){
					HX_STACK_LINE(1502)
					if ((!(((_g11 < childDepht))))){
						HX_STACK_LINE(1502)
						break;
					}
					HX_STACK_LINE(1502)
					int i = (_g11)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1504)
					hx::AddEq(s,whiteSpace);
				}
			}
			HX_STACK_LINE(1507)
			::String _g21 = str.charAt((int)0);		HX_STACK_VAR(_g21,"_g21");
			struct _Function_3_1{
				inline static bool Block( ::String &str){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/U.hx",1507,0x74647d9b)
					{
						HX_STACK_LINE(1507)
						::String _g3 = str.charAt((int)1);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1507)
						return (_g3 == HX_CSTRING("/"));
					}
					return null();
				}
			};
			HX_STACK_LINE(1507)
			if (((  (((_g21 == HX_CSTRING("<")))) ? bool(_Function_3_1::Block(str)) : bool(false) ))){
				HX_STACK_LINE(1509)
				(childDepht)--;
				HX_STACK_LINE(1510)
				::String _g4 = s.substr((int)0,(s.length - whiteSpace.length));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(1510)
				s = _g4;
			}
			else{
				HX_STACK_LINE(1513)
				::String _g5 = str.charAt((str.length - (int)1));		HX_STACK_VAR(_g5,"_g5");
				struct _Function_4_1{
					inline static bool Block( ::String &str){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/U.hx",1513,0x74647d9b)
						{
							HX_STACK_LINE(1513)
							::String _g6 = str.charAt((str.length - (int)2));		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(1513)
							return (_g6 != HX_CSTRING("/"));
						}
						return null();
					}
				};
				struct _Function_4_2{
					inline static bool Block( ::String &str){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/U.hx",1513,0x74647d9b)
						{
							HX_STACK_LINE(1513)
							::String _g7 = str.charAt((str.length - (int)2));		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(1513)
							return (_g7 != HX_CSTRING("-"));
						}
						return null();
					}
				};
				HX_STACK_LINE(1513)
				if (((  (((  (((_g5 == HX_CSTRING(">")))) ? bool(_Function_4_1::Block(str)) : bool(false) ))) ? bool(_Function_4_2::Block(str)) : bool(false) ))){
					HX_STACK_LINE(1515)
					(childDepht)++;
				}
			}
			HX_STACK_LINE(1518)
			hx::AddEq(s,(str + HX_CSTRING("\n")));
		}
	}
	HX_STACK_LINE(1521)
	return s;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,formatXml,return )

::String U_obj::strCase( ::String str,::String code){
	HX_STACK_FRAME("flixel.addons.ui.U","strCase",0x4a57cb97,"flixel.addons.ui.U.strCase","flixel/addons/ui/U.hx",1524,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(code,"code")
	HX_STACK_LINE(1525)
	::String _switch_13 = (code);
	if (  ( _switch_13==HX_CSTRING("u"))){
		HX_STACK_LINE(1526)
		return str.toUpperCase();
	}
	else if (  ( _switch_13==HX_CSTRING("l"))){
		HX_STACK_LINE(1527)
		return str.toLowerCase();
	}
	else if (  ( _switch_13==HX_CSTRING("fu"))){
		HX_STACK_LINE(1528)
		return ::flixel::addons::ui::U_obj::FU(str);
	}
	else if (  ( _switch_13==HX_CSTRING("fu_"))){
		HX_STACK_LINE(1529)
		return ::flixel::addons::ui::U_obj::FU_(str);
	}
	HX_STACK_LINE(1531)
	return str;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(U_obj,strCase,return )

::openfl::_v2::geom::Matrix U_obj::getMatrix( ){
	HX_STACK_FRAME("flixel.addons.ui.U","getMatrix",0x7ebd7c8d,"flixel.addons.ui.U.getMatrix","flixel/addons/ui/U.hx",1534,0x74647d9b)
	HX_STACK_LINE(1535)
	if (((::flixel::addons::ui::U_obj::_matrix == null()))){
		HX_STACK_LINE(1536)
		::openfl::_v2::geom::Matrix _g = ::openfl::_v2::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1536)
		::flixel::addons::ui::U_obj::_matrix = _g;
	}
	HX_STACK_LINE(1538)
	return ::flixel::addons::ui::U_obj::_matrix;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(U_obj,getMatrix,return )

::openfl::_v2::geom::Matrix U_obj::_matrix;


U_obj::U_obj()
{
}

Dynamic U_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"fs") ) { return fs_dyn(); }
		if (HX_FIELD_EQ(inName,"FU") ) { return FU_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { return xml_dyn(); }
		if (HX_FIELD_EQ(inName,"fsx") ) { return fsx_dyn(); }
		if (HX_FIELD_EQ(inName,"FUL") ) { return FUL_dyn(); }
		if (HX_FIELD_EQ(inName,"FU_") ) { return FU__dyn(); }
		if (HX_FIELD_EQ(inName,"gfx") ) { return gfx_dyn(); }
		if (HX_FIELD_EQ(inName,"sfx") ) { return sfx_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"json") ) { return json_dyn(); }
		if (HX_FIELD_EQ(inName,"font") ) { return font_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"xml_f") ) { return xml_f_dyn(); }
		if (HX_FIELD_EQ(inName,"xml_i") ) { return xml_i_dyn(); }
		if (HX_FIELD_EQ(inName,"slash") ) { return slash_dyn(); }
		if (HX_FIELD_EQ(inName,"field") ) { return field_dyn(); }
		if (HX_FIELD_EQ(inName,"_font") ) { return _font_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"xml_pt") ) { return xml_pt_dyn(); }
		if (HX_FIELD_EQ(inName,"center") ) { return center_dyn(); }
		if (HX_FIELD_EQ(inName,"getXML") ) { return getXML_dyn(); }
		if (HX_FIELD_EQ(inName,"dirStr") ) { return dirStr_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xml_str") ) { return xml_str_dyn(); }
		if (HX_FIELD_EQ(inName,"boolify") ) { return boolify_dyn(); }
		if (HX_FIELD_EQ(inName,"xml_gfx") ) { return xml_gfx_dyn(); }
		if (HX_FIELD_EQ(inName,"hex2dec") ) { return hex2dec_dyn(); }
		if (HX_FIELD_EQ(inName,"hex2rgb") ) { return hex2rgb_dyn(); }
		if (HX_FIELD_EQ(inName,"rgb2hex") ) { return rgb2hex_dyn(); }
		if (HX_FIELD_EQ(inName,"copyXml") ) { return copyXml_dyn(); }
		if (HX_FIELD_EQ(inName,"readXml") ) { return readXml_dyn(); }
		if (HX_FIELD_EQ(inName,"endline") ) { return endline_dyn(); }
		if (HX_FIELD_EQ(inName,"fontStr") ) { return fontStr_dyn(); }
		if (HX_FIELD_EQ(inName,"get_gfx") ) { return get_gfx_dyn(); }
		if (HX_FIELD_EQ(inName,"strCase") ) { return strCase_dyn(); }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isStrNum") ) { return isStrNum_dyn(); }
		if (HX_FIELD_EQ(inName,"isStrInt") ) { return isStrInt_dyn(); }
		if (HX_FIELD_EQ(inName,"pointify") ) { return pointify_dyn(); }
		if (HX_FIELD_EQ(inName,"xml_bool") ) { return xml_bool_dyn(); }
		if (HX_FIELD_EQ(inName,"test_int") ) { return test_int_dyn(); }
		if (HX_FIELD_EQ(inName,"parseHex") ) { return parseHex_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFast") ) { return copyFast_dyn(); }
		if (HX_FIELD_EQ(inName,"readFast") ) { return readFast_dyn(); }
		if (HX_FIELD_EQ(inName,"fixSlash") ) { return fixSlash_dyn(); }
		if (HX_FIELD_EQ(inName,"writeXml") ) { return writeXml_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"padDigits") ) { return padDigits_dyn(); }
		if (HX_FIELD_EQ(inName,"aabb_test") ) { return aabb_test_dyn(); }
		if (HX_FIELD_EQ(inName,"formatXml") ) { return formatXml_dyn(); }
		if (HX_FIELD_EQ(inName,"getMatrix") ) { return getMatrix_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isStrFloat") ) { return isStrFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"test_float") ) { return test_float_dyn(); }
		if (HX_FIELD_EQ(inName,"getLocList") ) { return getLocList_dyn(); }
		if (HX_FIELD_EQ(inName,"disposeXML") ) { return disposeXML_dyn(); }
		if (HX_FIELD_EQ(inName,"clearArray") ) { return clearArray_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hexChar2dec") ) { return hexChar2dec_dyn(); }
		if (HX_FIELD_EQ(inName,"interpolate") ) { return interpolate_dyn(); }
		if (HX_FIELD_EQ(inName,"circle_test") ) { return circle_test_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"destroyThing") ) { return destroyThing_dyn(); }
		if (HX_FIELD_EQ(inName,"checkHaxedef") ) { return checkHaxedef_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"perc_to_float") ) { return perc_to_float_dyn(); }
		if (HX_FIELD_EQ(inName,"bmpToCSVLayer") ) { return bmpToCSVLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"intStr_to_arr") ) { return intStr_to_arr_dyn(); }
		if (HX_FIELD_EQ(inName,"obj_direction") ) { return obj_direction_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"clearArraySoft") ) { return clearArraySoft_dyn(); }
		if (HX_FIELD_EQ(inName,"copy_arr_arr_i") ) { return copy_arr_arr_i_dyn(); }
		if (HX_FIELD_EQ(inName,"aabb_test_mult") ) { return aabb_test_mult_dyn(); }
		if (HX_FIELD_EQ(inName,"splitBitString") ) { return splitBitString_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadScaledImage") ) { return loadScaledImage_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"copy_shallow_arr") ) { return copy_shallow_arr_dyn(); }
		if (HX_FIELD_EQ(inName,"intStr_to_arrStr") ) { return intStr_to_arrStr_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"compareStringVars") ) { return compareStringVars_dyn(); }
		if (HX_FIELD_EQ(inName,"point_circle_test") ) { return point_circle_test_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"copy_shallow_arr_i") ) { return copy_shallow_arr_i_dyn(); }
		if (HX_FIELD_EQ(inName,"bmpToArrayIntLayer") ) { return bmpToArrayIntLayer_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"blendModeFromString") ) { return blendModeFromString_dyn(); }
		if (HX_FIELD_EQ(inName,"loadMonoScaledImage") ) { return loadMonoScaledImage_dyn(); }
		if (HX_FIELD_EQ(inName,"bitStringDimensions") ) { return bitStringDimensions_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"copy_shallow_arr_str") ) { return copy_shallow_arr_str_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"loadImageScaleToHeight") ) { return loadImageScaleToHeight_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getShortTextFromFlxKeyText") ) { return getShortTextFromFlxKeyText_dyn(); }
		if (HX_FIELD_EQ(inName,"getFlxKeyTextFromShortText") ) { return getFlxKeyTextFromShortText_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic U_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::openfl::_v2::geom::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void U_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("xml_str"),
	HX_CSTRING("perc_to_float"),
	HX_CSTRING("isStrNum"),
	HX_CSTRING("isStrInt"),
	HX_CSTRING("isStrFloat"),
	HX_CSTRING("xml_f"),
	HX_CSTRING("xml_i"),
	HX_CSTRING("xml_pt"),
	HX_CSTRING("boolify"),
	HX_CSTRING("pointify"),
	HX_CSTRING("compareStringVars"),
	HX_CSTRING("xml_bool"),
	HX_CSTRING("xml_gfx"),
	HX_CSTRING("center"),
	HX_CSTRING("test_int"),
	HX_CSTRING("test_float"),
	HX_CSTRING("padDigits"),
	HX_CSTRING("parseHex"),
	HX_CSTRING("hexChar2dec"),
	HX_CSTRING("hex2dec"),
	HX_CSTRING("hex2rgb"),
	HX_CSTRING("rgb2hex"),
	HX_CSTRING("interpolate"),
	HX_CSTRING("getLocList"),
	HX_CSTRING("disposeXML"),
	HX_CSTRING("copyFast"),
	HX_CSTRING("copyXml"),
	HX_CSTRING("readXml"),
	HX_CSTRING("readFast"),
	HX_CSTRING("fixSlash"),
	HX_CSTRING("endline"),
	HX_CSTRING("slash"),
	HX_CSTRING("writeXml"),
	HX_CSTRING("getXML"),
	HX_CSTRING("json"),
	HX_CSTRING("field"),
	HX_CSTRING("xml"),
	HX_CSTRING("clearArraySoft"),
	HX_CSTRING("clearArray"),
	HX_CSTRING("destroyThing"),
	HX_CSTRING("fontStr"),
	HX_CSTRING("font"),
	HX_CSTRING("_font"),
	HX_CSTRING("fsx"),
	HX_CSTRING("fs"),
	HX_CSTRING("FU"),
	HX_CSTRING("FUL"),
	HX_CSTRING("checkHaxedef"),
	HX_CSTRING("copy_shallow_arr"),
	HX_CSTRING("copy_arr_arr_i"),
	HX_CSTRING("copy_shallow_arr_i"),
	HX_CSTRING("copy_shallow_arr_str"),
	HX_CSTRING("FU_"),
	HX_CSTRING("blendModeFromString"),
	HX_CSTRING("loadScaledImage"),
	HX_CSTRING("loadImageScaleToHeight"),
	HX_CSTRING("loadMonoScaledImage"),
	HX_CSTRING("gfx"),
	HX_CSTRING("bmpToArrayIntLayer"),
	HX_CSTRING("bmpToCSVLayer"),
	HX_CSTRING("get_gfx"),
	HX_CSTRING("sfx"),
	HX_CSTRING("intStr_to_arr"),
	HX_CSTRING("intStr_to_arrStr"),
	HX_CSTRING("dirStr"),
	HX_CSTRING("obj_direction"),
	HX_CSTRING("circle_test"),
	HX_CSTRING("point_circle_test"),
	HX_CSTRING("aabb_test_mult"),
	HX_CSTRING("aabb_test"),
	HX_CSTRING("bitStringDimensions"),
	HX_CSTRING("splitBitString"),
	HX_CSTRING("getShortTextFromFlxKeyText"),
	HX_CSTRING("getFlxKeyTextFromShortText"),
	HX_CSTRING("formatXml"),
	HX_CSTRING("strCase"),
	HX_CSTRING("getMatrix"),
	HX_CSTRING("_matrix"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(U_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(U_obj::_matrix,"_matrix");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(U_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(U_obj::_matrix,"_matrix");
};

#endif

Class U_obj::__mClass;

void U_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.U"), hx::TCanCast< U_obj> ,sStaticFields,sMemberFields,
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

void U_obj::__boot()
{
	_matrix= null();
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
