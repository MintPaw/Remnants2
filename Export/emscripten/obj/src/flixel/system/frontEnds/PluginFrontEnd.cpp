#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_PluginFrontEnd
#include <flixel/system/frontEnds/PluginFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPathManager
#include <flixel/util/FlxPathManager.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace system{
namespace frontEnds{

Void PluginFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","new",0x6ca9c2b1,"flixel.system.frontEnds.PluginFrontEnd.new","flixel/system/frontEnds/PluginFrontEnd.hx",9,0xbff70e9e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	this->list = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(110)
	::flixel::util::FlxPathManager _g = ::flixel::util::FlxPathManager_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(110)
	::flixel::util::FlxPathManager _g1 = ::flixel::util::FlxPath_obj::manager = _g;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(110)
	this->add_flixel_util_FlxPathManager(_g1);
	HX_STACK_LINE(111)
	::flixel::util::FlxTimerManager _g2 = ::flixel::util::FlxTimerManager_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(111)
	::flixel::util::FlxTimerManager _g3 = ::flixel::util::FlxTimer_obj::manager = _g2;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(111)
	this->add_flixel_util_FlxTimerManager(_g3);
	HX_STACK_LINE(112)
	::flixel::tweens::FlxTweenManager _g4 = ::flixel::tweens::FlxTweenManager_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(112)
	::flixel::tweens::FlxTweenManager _g5 = ::flixel::tweens::FlxTween_obj::manager = _g4;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(112)
	this->add_flixel_tweens_FlxTweenManager(_g5);
}
;
	return null();
}

//PluginFrontEnd_obj::~PluginFrontEnd_obj() { }

Dynamic PluginFrontEnd_obj::__CreateEmpty() { return  new PluginFrontEnd_obj; }
hx::ObjectPtr< PluginFrontEnd_obj > PluginFrontEnd_obj::__new()
{  hx::ObjectPtr< PluginFrontEnd_obj > result = new PluginFrontEnd_obj();
	result->__construct();
	return result;}

Dynamic PluginFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PluginFrontEnd_obj > result = new PluginFrontEnd_obj();
	result->__construct();
	return result;}

::flixel::tweens::FlxTweenManager PluginFrontEnd_obj::add_flixel_tweens_FlxTweenManager( ::flixel::tweens::FlxTweenManager Plugin){
	HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","add_flixel_tweens_FlxTweenManager",0xfdb05bd3,"flixel.system.frontEnds.PluginFrontEnd.add_flixel_tweens_FlxTweenManager","flixel/system/frontEnds/PluginFrontEnd.hx",24,0xbff70e9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Plugin,"Plugin")
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(26)
		while((true)){
			HX_STACK_LINE(26)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(26)
				break;
			}
			HX_STACK_LINE(26)
			::flixel::FlxBasic plugin = _g1->__get(_g).StaticCast< ::flixel::FlxBasic >();		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(26)
			++(_g);
			struct _Function_3_1{
				inline static bool Block( ::flixel::tweens::FlxTweenManager &Plugin,::flixel::FlxBasic &plugin){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/frontEnds/PluginFrontEnd.hx",28,0xbff70e9e)
					{
						HX_STACK_LINE(28)
						bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
						HX_STACK_LINE(28)
						::String _g5;		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(28)
						{
							HX_STACK_LINE(28)
							::Class cl;		HX_STACK_VAR(cl,"cl");
							HX_STACK_LINE(28)
							if ((::Std_obj::is(Plugin,hx::ClassOf< ::Class >()))){
								HX_STACK_LINE(28)
								cl = Plugin;
							}
							else{
								HX_STACK_LINE(28)
								::Class _g2 = ::Type_obj::getClass(Plugin);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(28)
								cl = _g2;
							}
							HX_STACK_LINE(28)
							::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(28)
							if (((s != null()))){
								HX_STACK_LINE(28)
								::String _g11 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(28)
								s = _g11;
								HX_STACK_LINE(28)
								if ((Simple)){
									HX_STACK_LINE(28)
									int _g2 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(28)
									int _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(28)
									::String _g4 = s.substr(_g3,null());		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(28)
									s = _g4;
								}
							}
							HX_STACK_LINE(28)
							_g5 = s;
						}
						HX_STACK_LINE(28)
						::String _g11;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(28)
						{
							HX_STACK_LINE(28)
							::Class cl;		HX_STACK_VAR(cl,"cl");
							HX_STACK_LINE(28)
							if ((::Std_obj::is(plugin,hx::ClassOf< ::Class >()))){
								HX_STACK_LINE(28)
								cl = plugin;
							}
							else{
								HX_STACK_LINE(28)
								::Class _g6 = ::Type_obj::getClass(plugin);		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(28)
								cl = _g6;
							}
							HX_STACK_LINE(28)
							::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(28)
							if (((s != null()))){
								HX_STACK_LINE(28)
								::String _g7 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(28)
								s = _g7;
								HX_STACK_LINE(28)
								if ((Simple)){
									HX_STACK_LINE(28)
									int _g8 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g8,"_g8");
									HX_STACK_LINE(28)
									int _g9 = (_g8 + (int)1);		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(28)
									::String _g10 = s.substr(_g9,null());		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(28)
									s = _g10;
								}
							}
							HX_STACK_LINE(28)
							_g11 = s;
						}
						HX_STACK_LINE(28)
						return (_g5 == _g11);
					}
					return null();
				}
			};
			HX_STACK_LINE(28)
			if ((_Function_3_1::Block(Plugin,plugin))){
				HX_STACK_LINE(30)
				return Plugin;
			}
		}
	}
	HX_STACK_LINE(35)
	this->list->push(Plugin);
	HX_STACK_LINE(36)
	return Plugin;
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,add_flixel_tweens_FlxTweenManager,return )

::flixel::util::FlxTimerManager PluginFrontEnd_obj::add_flixel_util_FlxTimerManager( ::flixel::util::FlxTimerManager Plugin){
	HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","add_flixel_util_FlxTimerManager",0x16f6f493,"flixel.system.frontEnds.PluginFrontEnd.add_flixel_util_FlxTimerManager","flixel/system/frontEnds/PluginFrontEnd.hx",24,0xbff70e9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Plugin,"Plugin")
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(26)
		while((true)){
			HX_STACK_LINE(26)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(26)
				break;
			}
			HX_STACK_LINE(26)
			::flixel::FlxBasic plugin = _g1->__get(_g).StaticCast< ::flixel::FlxBasic >();		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(26)
			++(_g);
			struct _Function_3_1{
				inline static bool Block( ::flixel::util::FlxTimerManager &Plugin,::flixel::FlxBasic &plugin){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/frontEnds/PluginFrontEnd.hx",28,0xbff70e9e)
					{
						HX_STACK_LINE(28)
						bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
						HX_STACK_LINE(28)
						::String _g5;		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(28)
						{
							HX_STACK_LINE(28)
							::Class cl;		HX_STACK_VAR(cl,"cl");
							HX_STACK_LINE(28)
							if ((::Std_obj::is(Plugin,hx::ClassOf< ::Class >()))){
								HX_STACK_LINE(28)
								cl = Plugin;
							}
							else{
								HX_STACK_LINE(28)
								::Class _g2 = ::Type_obj::getClass(Plugin);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(28)
								cl = _g2;
							}
							HX_STACK_LINE(28)
							::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(28)
							if (((s != null()))){
								HX_STACK_LINE(28)
								::String _g11 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(28)
								s = _g11;
								HX_STACK_LINE(28)
								if ((Simple)){
									HX_STACK_LINE(28)
									int _g2 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(28)
									int _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(28)
									::String _g4 = s.substr(_g3,null());		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(28)
									s = _g4;
								}
							}
							HX_STACK_LINE(28)
							_g5 = s;
						}
						HX_STACK_LINE(28)
						::String _g11;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(28)
						{
							HX_STACK_LINE(28)
							::Class cl;		HX_STACK_VAR(cl,"cl");
							HX_STACK_LINE(28)
							if ((::Std_obj::is(plugin,hx::ClassOf< ::Class >()))){
								HX_STACK_LINE(28)
								cl = plugin;
							}
							else{
								HX_STACK_LINE(28)
								::Class _g6 = ::Type_obj::getClass(plugin);		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(28)
								cl = _g6;
							}
							HX_STACK_LINE(28)
							::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(28)
							if (((s != null()))){
								HX_STACK_LINE(28)
								::String _g7 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(28)
								s = _g7;
								HX_STACK_LINE(28)
								if ((Simple)){
									HX_STACK_LINE(28)
									int _g8 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g8,"_g8");
									HX_STACK_LINE(28)
									int _g9 = (_g8 + (int)1);		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(28)
									::String _g10 = s.substr(_g9,null());		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(28)
									s = _g10;
								}
							}
							HX_STACK_LINE(28)
							_g11 = s;
						}
						HX_STACK_LINE(28)
						return (_g5 == _g11);
					}
					return null();
				}
			};
			HX_STACK_LINE(28)
			if ((_Function_3_1::Block(Plugin,plugin))){
				HX_STACK_LINE(30)
				return Plugin;
			}
		}
	}
	HX_STACK_LINE(35)
	this->list->push(Plugin);
	HX_STACK_LINE(36)
	return Plugin;
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,add_flixel_util_FlxTimerManager,return )

::flixel::util::FlxPathManager PluginFrontEnd_obj::add_flixel_util_FlxPathManager( ::flixel::util::FlxPathManager Plugin){
	HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","add_flixel_util_FlxPathManager",0x266dd23d,"flixel.system.frontEnds.PluginFrontEnd.add_flixel_util_FlxPathManager","flixel/system/frontEnds/PluginFrontEnd.hx",24,0xbff70e9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Plugin,"Plugin")
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(26)
		while((true)){
			HX_STACK_LINE(26)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(26)
				break;
			}
			HX_STACK_LINE(26)
			::flixel::FlxBasic plugin = _g1->__get(_g).StaticCast< ::flixel::FlxBasic >();		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(26)
			++(_g);
			struct _Function_3_1{
				inline static bool Block( ::flixel::util::FlxPathManager &Plugin,::flixel::FlxBasic &plugin){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/frontEnds/PluginFrontEnd.hx",28,0xbff70e9e)
					{
						HX_STACK_LINE(28)
						bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
						HX_STACK_LINE(28)
						::String _g5;		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(28)
						{
							HX_STACK_LINE(28)
							::Class cl;		HX_STACK_VAR(cl,"cl");
							HX_STACK_LINE(28)
							if ((::Std_obj::is(Plugin,hx::ClassOf< ::Class >()))){
								HX_STACK_LINE(28)
								cl = Plugin;
							}
							else{
								HX_STACK_LINE(28)
								::Class _g2 = ::Type_obj::getClass(Plugin);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(28)
								cl = _g2;
							}
							HX_STACK_LINE(28)
							::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(28)
							if (((s != null()))){
								HX_STACK_LINE(28)
								::String _g11 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(28)
								s = _g11;
								HX_STACK_LINE(28)
								if ((Simple)){
									HX_STACK_LINE(28)
									int _g2 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(28)
									int _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(28)
									::String _g4 = s.substr(_g3,null());		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(28)
									s = _g4;
								}
							}
							HX_STACK_LINE(28)
							_g5 = s;
						}
						HX_STACK_LINE(28)
						::String _g11;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(28)
						{
							HX_STACK_LINE(28)
							::Class cl;		HX_STACK_VAR(cl,"cl");
							HX_STACK_LINE(28)
							if ((::Std_obj::is(plugin,hx::ClassOf< ::Class >()))){
								HX_STACK_LINE(28)
								cl = plugin;
							}
							else{
								HX_STACK_LINE(28)
								::Class _g6 = ::Type_obj::getClass(plugin);		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(28)
								cl = _g6;
							}
							HX_STACK_LINE(28)
							::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
							HX_STACK_LINE(28)
							if (((s != null()))){
								HX_STACK_LINE(28)
								::String _g7 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(28)
								s = _g7;
								HX_STACK_LINE(28)
								if ((Simple)){
									HX_STACK_LINE(28)
									int _g8 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g8,"_g8");
									HX_STACK_LINE(28)
									int _g9 = (_g8 + (int)1);		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(28)
									::String _g10 = s.substr(_g9,null());		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(28)
									s = _g10;
								}
							}
							HX_STACK_LINE(28)
							_g11 = s;
						}
						HX_STACK_LINE(28)
						return (_g5 == _g11);
					}
					return null();
				}
			};
			HX_STACK_LINE(28)
			if ((_Function_3_1::Block(Plugin,plugin))){
				HX_STACK_LINE(30)
				return Plugin;
			}
		}
	}
	HX_STACK_LINE(35)
	this->list->push(Plugin);
	HX_STACK_LINE(36)
	return Plugin;
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,add_flixel_util_FlxPathManager,return )

::flixel::FlxBasic PluginFrontEnd_obj::get( ::Class ClassType){
	HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","get",0x6ca472e7,"flixel.system.frontEnds.PluginFrontEnd.get","flixel/system/frontEnds/PluginFrontEnd.hx",46,0xbff70e9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ClassType,"ClassType")
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(47)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(47)
		while((true)){
			HX_STACK_LINE(47)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(47)
				break;
			}
			HX_STACK_LINE(47)
			::flixel::FlxBasic plugin = _g1->__get(_g).StaticCast< ::flixel::FlxBasic >();		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(47)
			++(_g);
			HX_STACK_LINE(49)
			if ((::Std_obj::is(plugin,ClassType))){
				HX_STACK_LINE(51)
				return plugin;
			}
		}
	}
	HX_STACK_LINE(55)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,get,return )

::flixel::FlxBasic PluginFrontEnd_obj::remove( ::flixel::FlxBasic Plugin){
	HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","remove",0x66803293,"flixel.system.frontEnds.PluginFrontEnd.remove","flixel/system/frontEnds/PluginFrontEnd.hx",65,0xbff70e9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Plugin,"Plugin")
	HX_STACK_LINE(67)
	int i = (this->list->length - (int)1);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(69)
	while((true)){
		HX_STACK_LINE(69)
		if ((!(((i >= (int)0))))){
			HX_STACK_LINE(69)
			break;
		}
		HX_STACK_LINE(71)
		if (((this->list->__get(i).StaticCast< ::flixel::FlxBasic >() == Plugin))){
			HX_STACK_LINE(73)
			this->list->splice(i,(int)1);
			HX_STACK_LINE(74)
			return Plugin;
		}
		HX_STACK_LINE(76)
		(i)--;
	}
	HX_STACK_LINE(79)
	return Plugin;
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,remove,return )

bool PluginFrontEnd_obj::removeType( ::Class ClassType){
	HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","removeType",0x8b4a96ed,"flixel.system.frontEnds.PluginFrontEnd.removeType","flixel/system/frontEnds/PluginFrontEnd.hx",89,0xbff70e9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ClassType,"ClassType")
	HX_STACK_LINE(91)
	bool results = false;		HX_STACK_VAR(results,"results");
	HX_STACK_LINE(92)
	int i = (this->list->length - (int)1);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(94)
	while((true)){
		HX_STACK_LINE(94)
		if ((!(((i >= (int)0))))){
			HX_STACK_LINE(94)
			break;
		}
		HX_STACK_LINE(96)
		if ((::Std_obj::is(this->list->__get(i).StaticCast< ::flixel::FlxBasic >(),ClassType))){
			HX_STACK_LINE(98)
			this->list->splice(i,(int)1);
			HX_STACK_LINE(99)
			results = true;
		}
		HX_STACK_LINE(101)
		(i)--;
	}
	HX_STACK_LINE(104)
	return results;
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,removeType,return )

Void PluginFrontEnd_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","update",0xe8fd1c58,"flixel.system.frontEnds.PluginFrontEnd.update","flixel/system/frontEnds/PluginFrontEnd.hx",120,0xbff70e9e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(120)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(120)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(120)
		while((true)){
			HX_STACK_LINE(120)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(120)
				break;
			}
			HX_STACK_LINE(120)
			::flixel::FlxBasic plugin = _g1->__get(_g).StaticCast< ::flixel::FlxBasic >();		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(120)
			++(_g);
			HX_STACK_LINE(122)
			if (((bool(plugin->exists) && bool(plugin->active)))){
				HX_STACK_LINE(124)
				plugin->update(elapsed);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PluginFrontEnd_obj,update,(void))

Void PluginFrontEnd_obj::draw( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.PluginFrontEnd","draw",0xa14e4093,"flixel.system.frontEnds.PluginFrontEnd.draw","flixel/system/frontEnds/PluginFrontEnd.hx",134,0xbff70e9e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(134)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(134)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(134)
		while((true)){
			HX_STACK_LINE(134)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(134)
				break;
			}
			HX_STACK_LINE(134)
			::flixel::FlxBasic plugin = _g1->__get(_g).StaticCast< ::flixel::FlxBasic >();		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(134)
			++(_g);
			HX_STACK_LINE(136)
			if (((bool(plugin->exists) && bool(plugin->visible)))){
				HX_STACK_LINE(138)
				plugin->draw();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PluginFrontEnd_obj,draw,(void))


PluginFrontEnd_obj::PluginFrontEnd_obj()
{
}

void PluginFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PluginFrontEnd);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_END_CLASS();
}

void PluginFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
}

Dynamic PluginFrontEnd_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeType") ) { return removeType_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"add_flixel_util_FlxPathManager") ) { return add_flixel_util_FlxPathManager_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"add_flixel_util_FlxTimerManager") ) { return add_flixel_util_FlxTimerManager_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_FlxTweenManager") ) { return add_flixel_tweens_FlxTweenManager_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PluginFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PluginFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("list"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PluginFrontEnd_obj,list),HX_CSTRING("list")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("add_flixel_tweens_FlxTweenManager"),
	HX_CSTRING("add_flixel_util_FlxTimerManager"),
	HX_CSTRING("add_flixel_util_FlxPathManager"),
	HX_CSTRING("list"),
	HX_CSTRING("get"),
	HX_CSTRING("remove"),
	HX_CSTRING("removeType"),
	HX_CSTRING("update"),
	HX_CSTRING("draw"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PluginFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PluginFrontEnd_obj::__mClass,"__mClass");
};

#endif

Class PluginFrontEnd_obj::__mClass;

void PluginFrontEnd_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.frontEnds.PluginFrontEnd"), hx::TCanCast< PluginFrontEnd_obj> ,sStaticFields,sMemberFields,
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

void PluginFrontEnd_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
