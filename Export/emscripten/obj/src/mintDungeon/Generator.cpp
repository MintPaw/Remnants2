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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapAutoTiling
#include <flixel/tile/FlxTilemapAutoTiling.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_mintDungeon_DrawableObject
#include <mintDungeon/DrawableObject.h>
#endif
#ifndef INCLUDED_mintDungeon_Generator
#include <mintDungeon/Generator.h>
#endif
#ifndef INCLUDED_mintDungeon_Hallway
#include <mintDungeon/Hallway.h>
#endif
#ifndef INCLUDED_mintDungeon_Random
#include <mintDungeon/Random.h>
#endif
#ifndef INCLUDED_mintDungeon_Room
#include <mintDungeon/Room.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Bitmap
#include <openfl/_v2/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
namespace mintDungeon{

Void Generator_obj::__construct(int seed)
{
HX_STACK_FRAME("mintDungeon.Generator","new",0x3a44a62f,"mintDungeon.Generator.new","mintDungeon/Generator.hx",13,0x4045f1a2)
HX_STACK_THIS(this)
HX_STACK_ARG(seed,"seed")
{
	HX_STACK_LINE(34)
	this->exitPoint = ::openfl::_v2::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(33)
	this->spawnPoint = ::openfl::_v2::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(31)
	this->doorPercentage = ::openfl::_v2::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(30)
	this->hallLength = ::openfl::_v2::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(29)
	this->roomAmount = ::openfl::_v2::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(28)
	this->roomSize = ::openfl::_v2::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(27)
	this->mapSizeInTiles = ::openfl::_v2::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(49)
	::mintDungeon::Random_obj::giveSeed(seed);
}
;
	return null();
}

//Generator_obj::~Generator_obj() { }

Dynamic Generator_obj::__CreateEmpty() { return  new Generator_obj; }
hx::ObjectPtr< Generator_obj > Generator_obj::__new(int seed)
{  hx::ObjectPtr< Generator_obj > result = new Generator_obj();
	result->__construct(seed);
	return result;}

Dynamic Generator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Generator_obj > result = new Generator_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Generator_obj::generate( ){
{
		HX_STACK_FRAME("mintDungeon.Generator","generate",0x616d1b06,"mintDungeon.Generator.generate","mintDungeon/Generator.hx",53,0x4045f1a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(54)
		this->_tryAgain = true;
		HX_STACK_LINE(56)
		int loops = (int)0;		HX_STACK_VAR(loops,"loops");
		HX_STACK_LINE(58)
		while((true)){
			HX_STACK_LINE(58)
			if ((!(this->_tryAgain))){
				HX_STACK_LINE(58)
				break;
			}
			HX_STACK_LINE(60)
			this->_tryAgain = false;
			HX_STACK_LINE(61)
			this->_tries = (int)0;
			HX_STACK_LINE(62)
			this->_colourOn = (int)0;
			HX_STACK_LINE(63)
			this->_mapArray = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(64)
			this->_rooms = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(65)
			this->_hallways = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(66)
			this->keys = Dynamic( Array_obj<Dynamic>::__new());
			HX_STACK_LINE(67)
			this->doors = Dynamic( Array_obj<Dynamic>::__new());
			HX_STACK_LINE(68)
			::openfl::_v2::geom::Point _g = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(68)
			this->spawnPoint = _g;
			HX_STACK_LINE(69)
			::openfl::_v2::geom::Point _g1 = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(69)
			this->exitPoint = _g1;
			HX_STACK_LINE(71)
			this->generateEmptyMap();
			HX_STACK_LINE(72)
			this->generateRooms();
			HX_STACK_LINE(73)
			this->generateDoors();
			HX_STACK_LINE(74)
			this->generateExit();
			HX_STACK_LINE(76)
			(loops)++;
			HX_STACK_LINE(78)
			if (((loops >= (int)10))){
				HX_STACK_LINE(80)
				::haxe::Log_obj::trace(HX_CSTRING("MAP CANNOT BE MADE"),hx::SourceInfo(HX_CSTRING("Generator.hx"),80,HX_CSTRING("mintDungeon.Generator"),HX_CSTRING("generate")));
				HX_STACK_LINE(81)
				return null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Generator_obj,generate,(void))

Void Generator_obj::generateEmptyMap( ){
{
		HX_STACK_FRAME("mintDungeon.Generator","generateEmptyMap",0x800e2b35,"mintDungeon.Generator.generateEmptyMap","mintDungeon/Generator.hx",88,0x4045f1a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(88)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(88)
		int _g = ::Std_obj::_int(this->mapSizeInTiles->y);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(88)
		while((true)){
			HX_STACK_LINE(88)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(88)
				break;
			}
			HX_STACK_LINE(88)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(90)
			Array< int > row = Array_obj< int >::__new();		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(92)
			{
				HX_STACK_LINE(92)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(92)
				int _g2 = ::Std_obj::_int(this->mapSizeInTiles->x);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(92)
				while((true)){
					HX_STACK_LINE(92)
					if ((!(((_g3 < _g2))))){
						HX_STACK_LINE(92)
						break;
					}
					HX_STACK_LINE(92)
					int i1 = (_g3)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(92)
					row->push(::mintDungeon::Generator_obj::WALL);
				}
			}
			HX_STACK_LINE(94)
			this->_mapArray->push(row);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Generator_obj,generateEmptyMap,(void))

Void Generator_obj::generateRooms( ){
{
		HX_STACK_FRAME("mintDungeon.Generator","generateRooms",0xdce40912,"mintDungeon.Generator.generateRooms","mintDungeon/Generator.hx",99,0x4045f1a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(100)
		::mintDungeon::Room startRoom = this->generateStartingRoom();		HX_STACK_VAR(startRoom,"startRoom");
		HX_STACK_LINE(101)
		this->_rooms->push(startRoom);
		HX_STACK_LINE(102)
		this->drawObject(startRoom);
		HX_STACK_LINE(104)
		int _g = ::mintDungeon::Random_obj::minMaxInt(this->roomAmount->x,this->roomAmount->y);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(104)
		int roomsToGenerate = (_g - (int)1);		HX_STACK_VAR(roomsToGenerate,"roomsToGenerate");
		HX_STACK_LINE(106)
		::mintDungeon::Room room;		HX_STACK_VAR(room,"room");
		HX_STACK_LINE(107)
		::mintDungeon::Hallway hall;		HX_STACK_VAR(hall,"hall");
		HX_STACK_LINE(109)
		{
			HX_STACK_LINE(109)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(109)
			while((true)){
				HX_STACK_LINE(109)
				if ((!(((_g1 < roomsToGenerate))))){
					HX_STACK_LINE(109)
					break;
				}
				HX_STACK_LINE(109)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(111)
				while((true)){
					HX_STACK_LINE(113)
					this->tried(null());
					HX_STACK_LINE(115)
					::mintDungeon::Hallway _g11 = this->generateHallway();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(115)
					hall = _g11;
					HX_STACK_LINE(117)
					int _g2 = ::mintDungeon::Random_obj::minMaxInt(this->roomSize->x,this->roomSize->y);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(117)
					int _g3 = ::mintDungeon::Random_obj::minMaxInt(this->roomSize->x,this->roomSize->y);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(117)
					::openfl::_v2::geom::Point size = ::openfl::_v2::geom::Point_obj::__new(_g2,_g3);		HX_STACK_VAR(size,"size");
					HX_STACK_LINE(118)
					::openfl::_v2::geom::Point location = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(120)
					if (((hall->direction == ::mintDungeon::Generator_obj::LEFT))){
						HX_STACK_LINE(120)
						int _g4 = ::mintDungeon::Random_obj::minMaxInt((int)0,(size->y - (int)1));		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(120)
						Float _g5 = (hall->endPoint->y - _g4);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(120)
						::openfl::_v2::geom::Point _g6 = ::openfl::_v2::geom::Point_obj::__new((hall->endPoint->x - size->x),_g5);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(120)
						location = _g6;
					}
					HX_STACK_LINE(121)
					if (((hall->direction == ::mintDungeon::Generator_obj::RIGHT))){
						HX_STACK_LINE(121)
						int _g7 = ::mintDungeon::Random_obj::minMaxInt((int)0,(size->y - (int)1));		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(121)
						Float _g8 = (hall->endPoint->y - _g7);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(121)
						::openfl::_v2::geom::Point _g9 = ::openfl::_v2::geom::Point_obj::__new((hall->endPoint->x + (int)1),_g8);		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(121)
						location = _g9;
					}
					HX_STACK_LINE(122)
					if (((hall->direction == ::mintDungeon::Generator_obj::UP))){
						HX_STACK_LINE(122)
						int _g10 = ::mintDungeon::Random_obj::minMaxInt((int)0,(size->x - (int)1));		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(122)
						Float _g111 = (hall->endPoint->x - _g10);		HX_STACK_VAR(_g111,"_g111");
						HX_STACK_LINE(122)
						::openfl::_v2::geom::Point _g12 = ::openfl::_v2::geom::Point_obj::__new(_g111,(hall->endPoint->y - size->y));		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(122)
						location = _g12;
					}
					HX_STACK_LINE(123)
					if (((hall->direction == ::mintDungeon::Generator_obj::DOWN))){
						HX_STACK_LINE(123)
						int _g13 = ::mintDungeon::Random_obj::minMaxInt((int)0,(size->x - (int)1));		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(123)
						Float _g14 = (hall->endPoint->x - _g13);		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(123)
						::openfl::_v2::geom::Point _g15 = ::openfl::_v2::geom::Point_obj::__new(_g14,(hall->endPoint->y + (int)1));		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(123)
						location = _g15;
					}
					HX_STACK_LINE(125)
					int _g16 = ::Math_obj::round(location->x);		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(125)
					int _g17 = ::Math_obj::round(location->y);		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(125)
					int _g18 = ::Math_obj::round(size->x);		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(125)
					int _g19 = ::Math_obj::round(size->y);		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(125)
					::mintDungeon::Room _g20 = this->generateRoom(_g16,_g17,_g18,_g19);		HX_STACK_VAR(_g20,"_g20");
					HX_STACK_LINE(125)
					room = _g20;
					HX_STACK_LINE(126)
					if ((this->_tryAgain)){
						HX_STACK_LINE(126)
						return null();
					}
					HX_STACK_LINE(127)
					if (((  ((this->canBuild(hall))) ? bool(this->canBuild(room)) : bool(false) ))){
						HX_STACK_LINE(127)
						break;
					}
				}
				HX_STACK_LINE(130)
				this->drawObject(room);
				HX_STACK_LINE(131)
				this->drawObject(hall);
				HX_STACK_LINE(133)
				this->_rooms->push(room);
				HX_STACK_LINE(134)
				this->_hallways->push(hall);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Generator_obj,generateRooms,(void))

Void Generator_obj::generateDoors( ){
{
		HX_STACK_FRAME("mintDungeon.Generator","generateDoors",0xcd47ee5f,"mintDungeon.Generator.generateDoors","mintDungeon/Generator.hx",139,0x4045f1a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		this->doors = Dynamic( Array_obj<Dynamic>::__new());
		HX_STACK_LINE(141)
		this->keys = Dynamic( Array_obj<Dynamic>::__new());
		HX_STACK_LINE(143)
		int absDoorPerc = ::mintDungeon::Random_obj::minMaxInt(this->doorPercentage->x,this->doorPercentage->y);		HX_STACK_VAR(absDoorPerc,"absDoorPerc");
		HX_STACK_LINE(144)
		int doorsToCreate = ::Math_obj::round((Float((this->_hallways->length * absDoorPerc)) / Float((int)100)));		HX_STACK_VAR(doorsToCreate,"doorsToCreate");
		HX_STACK_LINE(146)
		{
			HX_STACK_LINE(146)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(146)
			while((true)){
				HX_STACK_LINE(146)
				if ((!(((_g < doorsToCreate))))){
					HX_STACK_LINE(146)
					break;
				}
				HX_STACK_LINE(146)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(148)
				::String currentCSV = this->getMapAsCSV();		HX_STACK_VAR(currentCSV,"currentCSV");
				HX_STACK_LINE(149)
				while((true)){
					HX_STACK_LINE(151)
					this->tried(null());
					HX_STACK_LINE(152)
					::openfl::_v2::geom::Point doorLoc;		HX_STACK_VAR(doorLoc,"doorLoc");
					HX_STACK_LINE(153)
					while((true)){
						HX_STACK_LINE(155)
						bool badDoorPos = false;		HX_STACK_VAR(badDoorPos,"badDoorPos");
						HX_STACK_LINE(156)
						int _g1 = ::mintDungeon::Random_obj::minMaxInt((int)0,(this->_hallways->length - (int)1));		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(156)
						::openfl::_v2::geom::Point _g11 = this->_hallways->__get(_g1).StaticCast< ::mintDungeon::Hallway >()->endPoint->clone();		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(156)
						doorLoc = _g11;
						HX_STACK_LINE(158)
						{
							HX_STACK_LINE(158)
							int _g12 = (int)0;		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(158)
							Dynamic _g2 = this->doors;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(158)
							while((true)){
								HX_STACK_LINE(158)
								if ((!(((_g12 < _g2->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(158)
									break;
								}
								HX_STACK_LINE(158)
								Dynamic i1 = _g2->__GetItem(_g12);		HX_STACK_VAR(i1,"i1");
								HX_STACK_LINE(158)
								++(_g12);
								HX_STACK_LINE(158)
								if (((bool((i1->__Field(HX_CSTRING("x"),true) == doorLoc->x)) && bool((i1->__Field(HX_CSTRING("y"),true) == doorLoc->y))))){
									HX_STACK_LINE(158)
									badDoorPos = true;
								}
							}
						}
						HX_STACK_LINE(160)
						if ((!(badDoorPos))){
							HX_STACK_LINE(160)
							break;
						}
					}
					HX_STACK_LINE(163)
					::openfl::_v2::geom::Point keyLoc = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(keyLoc,"keyLoc");
					HX_STACK_LINE(165)
					while((true)){
						HX_STACK_LINE(167)
						int _g2 = ::mintDungeon::Random_obj::minMaxInt((int)1,(this->mapSizeInTiles->x - (int)1));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(167)
						int _g3 = ::mintDungeon::Random_obj::minMaxInt((int)1,(this->mapSizeInTiles->y - (int)1));		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(167)
						keyLoc->setTo(_g2,_g3);
						HX_STACK_LINE(168)
						int _g4 = this->getTile(keyLoc->x,keyLoc->y);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(168)
						if (((  (((_g4 == ::mintDungeon::Generator_obj::GROUND))) ? bool(!(keyLoc->equals(this->spawnPoint))) : bool(false) ))){
							HX_STACK_LINE(168)
							break;
						}
					}
					HX_STACK_LINE(171)
					if (((  ((!(this->isReachable(this->spawnPoint,keyLoc,currentCSV,doorLoc)))) ? bool(this->_tryAgain) : bool(true) ))){
						HX_STACK_LINE(173)
						int _g5 = ::Std_obj::_int(keyLoc->x);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(173)
						int _g6 = ::Std_obj::_int(keyLoc->y);		HX_STACK_VAR(_g6,"_g6");
						struct _Function_5_1{
							inline static Dynamic Block( int &_g5,hx::ObjectPtr< ::mintDungeon::Generator_obj > __this,int &_g6){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mintDungeon/Generator.hx",173,0x4045f1a2)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("x") , _g5,false);
									__result->Add(HX_CSTRING("y") , _g6,false);
									__result->Add(HX_CSTRING("colour") , ::mintDungeon::Generator_obj::colours->__get(__this->_colourOn),false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(173)
						Dynamic _g7 = _Function_5_1::Block(_g5,this,_g6);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(173)
						this->keys->__Field(HX_CSTRING("push"),true)(_g7);
						HX_STACK_LINE(174)
						int _g8 = ::Std_obj::_int(doorLoc->x);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(174)
						int _g9 = ::Std_obj::_int(doorLoc->y);		HX_STACK_VAR(_g9,"_g9");
						struct _Function_5_2{
							inline static Dynamic Block( hx::ObjectPtr< ::mintDungeon::Generator_obj > __this,int &_g8,int &_g9){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mintDungeon/Generator.hx",174,0x4045f1a2)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("x") , _g8,false);
									__result->Add(HX_CSTRING("y") , _g9,false);
									__result->Add(HX_CSTRING("colour") , ::mintDungeon::Generator_obj::colours->__get(__this->_colourOn),false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(174)
						Dynamic _g10 = _Function_5_2::Block(this,_g8,_g9);		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(174)
						this->doors->__Field(HX_CSTRING("push"),true)(_g10);
						HX_STACK_LINE(176)
						(this->_colourOn)++;
						HX_STACK_LINE(178)
						break;
					}
				}
				HX_STACK_LINE(181)
				if ((this->_tryAgain)){
					HX_STACK_LINE(181)
					break;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Generator_obj,generateDoors,(void))

Void Generator_obj::generateExit( ){
{
		HX_STACK_FRAME("mintDungeon.Generator","generateExit",0x8ff53944,"mintDungeon.Generator.generateExit","mintDungeon/Generator.hx",186,0x4045f1a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(187)
		int _g = ::mintDungeon::Random_obj::minMaxInt((int)1,(this->_rooms->length - (int)1));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(187)
		::mintDungeon::Room choosenRoom = this->_rooms->__get(_g).StaticCast< ::mintDungeon::Room >();		HX_STACK_VAR(choosenRoom,"choosenRoom");
		HX_STACK_LINE(188)
		int _g1 = ::mintDungeon::Random_obj::minMaxInt((int)0,(choosenRoom->tiles->length - (int)1));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(188)
		::openfl::_v2::geom::Point _g2 = choosenRoom->tiles->__get(_g1).StaticCast< ::openfl::_v2::geom::Point >()->clone();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(188)
		this->exitPoint = _g2;
		HX_STACK_LINE(190)
		{
			HX_STACK_LINE(190)
			int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(190)
			Dynamic _g11 = this->keys;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(190)
			while((true)){
				HX_STACK_LINE(190)
				if ((!(((_g3 < _g11->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(190)
					break;
				}
				HX_STACK_LINE(190)
				Dynamic i = _g11->__GetItem(_g3);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(190)
				++(_g3);
				HX_STACK_LINE(192)
				if (((bool((this->exitPoint->x == i->__Field(HX_CSTRING("x"),true))) && bool((this->exitPoint->y == i->__Field(HX_CSTRING("y"),true)))))){
					HX_STACK_LINE(194)
					this->generateExit();
					HX_STACK_LINE(195)
					return null();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Generator_obj,generateExit,(void))

bool Generator_obj::isReachable( ::openfl::_v2::geom::Point start,::openfl::_v2::geom::Point end,::String csv,::openfl::_v2::geom::Point toAdd){
	HX_STACK_FRAME("mintDungeon.Generator","isReachable",0xef75b612,"mintDungeon.Generator.isReachable","mintDungeon/Generator.hx",202,0x4045f1a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_ARG(csv,"csv")
	HX_STACK_ARG(toAdd,"toAdd")
	HX_STACK_LINE(203)
	::flixel::tile::FlxTilemap map = ::flixel::tile::FlxTilemap_obj::__new();		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(204)
	map->loadMapFromCSV(csv,HX_CSTRING("assets/empty.png"),(int)1,(int)1,null(),null(),null(),null());
	HX_STACK_LINE(205)
	map->setTileProperties(::mintDungeon::Generator_obj::GROUND,(int)0,null(),null(),null());
	HX_STACK_LINE(207)
	{
		HX_STACK_LINE(207)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(207)
		Dynamic _g1 = this->doors;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(207)
		while((true)){
			HX_STACK_LINE(207)
			if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(207)
				break;
			}
			HX_STACK_LINE(207)
			Dynamic i = _g1->__GetItem(_g);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(207)
			++(_g);
			HX_STACK_LINE(207)
			int _g2 = ::Std_obj::_int(i->__Field(HX_CSTRING("x"),true));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(207)
			int _g11 = ::Std_obj::_int(i->__Field(HX_CSTRING("y"),true));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(207)
			map->setTile(_g2,_g11,::mintDungeon::Generator_obj::WALL,null());
		}
	}
	HX_STACK_LINE(208)
	if (((toAdd != null()))){
		HX_STACK_LINE(208)
		int _g2 = ::Std_obj::_int(toAdd->x);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(208)
		int _g3 = ::Std_obj::_int(toAdd->y);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(208)
		map->setTile(_g2,_g3,::mintDungeon::Generator_obj::WALL,null());
	}
	HX_STACK_LINE(210)
	int _g4 = ::Std_obj::_int(start->x);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(210)
	int _g5 = ::Std_obj::_int(start->y);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(210)
	::flixel::math::FlxPoint _g6 = ::flixel::math::FlxPoint_obj::__new(_g4,_g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(210)
	int _g7 = ::Std_obj::_int(end->x);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(210)
	int _g8 = ::Std_obj::_int(end->y);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(210)
	::flixel::math::FlxPoint _g9 = ::flixel::math::FlxPoint_obj::__new(_g7,_g8);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(210)
	Array< ::Dynamic > path = map->findPath(_g6,_g9,null(),null(),null());		HX_STACK_VAR(path,"path");
	HX_STACK_LINE(212)
	return (path != null());
}


HX_DEFINE_DYNAMIC_FUNC4(Generator_obj,isReachable,return )

::mintDungeon::Hallway Generator_obj::generateHallway( ){
	HX_STACK_FRAME("mintDungeon.Generator","generateHallway",0xf116aab0,"mintDungeon.Generator.generateHallway","mintDungeon/Generator.hx",216,0x4045f1a2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(217)
	::mintDungeon::Hallway hall;		HX_STACK_VAR(hall,"hall");
	HX_STACK_LINE(219)
	::mintDungeon::Hallway _g = ::mintDungeon::Hallway_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(219)
	hall = _g;
	HX_STACK_LINE(220)
	::openfl::_v2::geom::Point startingWall = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(startingWall,"startingWall");
	HX_STACK_LINE(222)
	while((true)){
		HX_STACK_LINE(224)
		int _g1 = ::mintDungeon::Random_obj::minMaxInt((int)1,(this->mapSizeInTiles->x - (int)1));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(224)
		int _g2 = ::mintDungeon::Random_obj::minMaxInt((int)0,(this->mapSizeInTiles->y - (int)1));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(224)
		startingWall->setTo(_g1,_g2);
		HX_STACK_LINE(225)
		int _g3 = this->getTile(startingWall->x,startingWall->y);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(225)
		if (((_g3 == ::mintDungeon::Generator_obj::GROUND))){
			HX_STACK_LINE(228)
			int _g4 = this->getTile((startingWall->x + (int)1),startingWall->y);		HX_STACK_VAR(_g4,"_g4");
			struct _Function_3_1{
				inline static bool Block( hx::ObjectPtr< ::mintDungeon::Generator_obj > __this,::openfl::_v2::geom::Point &startingWall){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mintDungeon/Generator.hx",229,0x4045f1a2)
					{
						HX_STACK_LINE(229)
						int _g5 = __this->getTile((startingWall->x - (int)1),startingWall->y);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(229)
						return (_g5 == ::mintDungeon::Generator_obj::WALL);
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static bool Block( hx::ObjectPtr< ::mintDungeon::Generator_obj > __this,::openfl::_v2::geom::Point &startingWall){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mintDungeon/Generator.hx",230,0x4045f1a2)
					{
						HX_STACK_LINE(230)
						int _g6 = __this->getTile(startingWall->x,(startingWall->y + (int)1));		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(230)
						return (_g6 == ::mintDungeon::Generator_obj::WALL);
					}
					return null();
				}
			};
			struct _Function_3_3{
				inline static bool Block( hx::ObjectPtr< ::mintDungeon::Generator_obj > __this,::openfl::_v2::geom::Point &startingWall){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","mintDungeon/Generator.hx",231,0x4045f1a2)
					{
						HX_STACK_LINE(231)
						int _g7 = __this->getTile(startingWall->x,(startingWall->y - (int)1));		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(231)
						return (_g7 == ::mintDungeon::Generator_obj::WALL);
					}
					return null();
				}
			};
			HX_STACK_LINE(227)
			if (((  ((!(((  ((!(((  ((!(((  ((!(((_g4 == ::mintDungeon::Generator_obj::WALL))))) ? bool(_Function_3_1::Block(this,startingWall)) : bool(true) ))))) ? bool(_Function_3_2::Block(this,startingWall)) : bool(true) ))))) ? bool(_Function_3_3::Block(this,startingWall)) : bool(true) ))))) ? bool(this->_tryAgain) : bool(true) ))){
				HX_STACK_LINE(231)
				break;
			}
		}
	}
	HX_STACK_LINE(235)
	int direction = ::mintDungeon::Random_obj::minMaxInt((int)0,(int)3);		HX_STACK_VAR(direction,"direction");
	HX_STACK_LINE(236)
	int _g8 = ::mintDungeon::Random_obj::minMaxInt(this->hallLength->x,this->hallLength->y);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(236)
	int length = (_g8 + (int)1);		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(237)
	hall->direction = direction;
	HX_STACK_LINE(239)
	{
		HX_STACK_LINE(239)
		int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(239)
		while((true)){
			HX_STACK_LINE(239)
			if ((!(((_g1 < length))))){
				HX_STACK_LINE(239)
				break;
			}
			HX_STACK_LINE(239)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(241)
			if (((direction == ::mintDungeon::Generator_obj::LEFT))){
				HX_STACK_LINE(241)
				::openfl::_v2::geom::Point _g9 = ::openfl::_v2::geom::Point_obj::__new((startingWall->x - i),startingWall->y);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(241)
				hall->tiles->push(_g9);
			}
			HX_STACK_LINE(242)
			if (((direction == ::mintDungeon::Generator_obj::RIGHT))){
				HX_STACK_LINE(242)
				::openfl::_v2::geom::Point _g10 = ::openfl::_v2::geom::Point_obj::__new((startingWall->x + i),startingWall->y);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(242)
				hall->tiles->push(_g10);
			}
			HX_STACK_LINE(243)
			if (((direction == ::mintDungeon::Generator_obj::UP))){
				HX_STACK_LINE(243)
				::openfl::_v2::geom::Point _g11 = ::openfl::_v2::geom::Point_obj::__new(startingWall->x,(startingWall->y - i));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(243)
				hall->tiles->push(_g11);
			}
			HX_STACK_LINE(244)
			if (((direction == ::mintDungeon::Generator_obj::DOWN))){
				HX_STACK_LINE(244)
				::openfl::_v2::geom::Point _g12 = ::openfl::_v2::geom::Point_obj::__new(startingWall->x,(startingWall->y + i));		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(244)
				hall->tiles->push(_g12);
			}
		}
	}
	HX_STACK_LINE(247)
	::openfl::_v2::geom::Point _g13 = hall->tiles->shift().StaticCast< ::openfl::_v2::geom::Point >();		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(247)
	hall->startPoint = _g13;
	HX_STACK_LINE(248)
	hall->endPoint = hall->tiles->__get((hall->tiles->length - (int)1)).StaticCast< ::openfl::_v2::geom::Point >();
	HX_STACK_LINE(250)
	if (((length == (int)2))){
		HX_STACK_LINE(250)
		hall->endPoint = hall->startPoint;
	}
	HX_STACK_LINE(252)
	return hall;
}


HX_DEFINE_DYNAMIC_FUNC0(Generator_obj,generateHallway,return )

::mintDungeon::Room Generator_obj::generateStartingRoom( ){
	HX_STACK_FRAME("mintDungeon.Generator","generateStartingRoom",0x3b76d421,"mintDungeon.Generator.generateStartingRoom","mintDungeon/Generator.hx",256,0x4045f1a2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(257)
	int _g = ::mintDungeon::Random_obj::minMaxInt(this->roomSize->x,this->roomSize->y);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(257)
	int _g1 = ::mintDungeon::Random_obj::minMaxInt(this->roomSize->x,this->roomSize->y);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(257)
	::openfl::_v2::geom::Point size = ::openfl::_v2::geom::Point_obj::__new(_g,_g1);		HX_STACK_VAR(size,"size");
	HX_STACK_LINE(258)
	::openfl::_v2::geom::Point location = ::openfl::_v2::geom::Point_obj::__new(((Float(this->mapSizeInTiles->x) / Float((int)2)) - (Float(size->x) / Float((int)2))),((Float(this->mapSizeInTiles->y) / Float((int)2)) - (Float(size->y) / Float((int)2))));		HX_STACK_VAR(location,"location");
	HX_STACK_LINE(260)
	int _g2 = ::Math_obj::round((location->x + (Float(size->x) / Float((int)2))));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(260)
	this->spawnPoint->x = _g2;
	HX_STACK_LINE(261)
	int _g3 = ::Math_obj::round((location->y + (Float(size->y) / Float((int)2))));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(261)
	this->spawnPoint->y = _g3;
	HX_STACK_LINE(263)
	int _g4 = ::Math_obj::round(location->x);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(263)
	int _g5 = ::Math_obj::round(location->y);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(263)
	int _g6 = ::Math_obj::round(size->x);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(263)
	int _g7 = ::Math_obj::round(size->y);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(263)
	return this->generateRoom(_g4,_g5,_g6,_g7);
}


HX_DEFINE_DYNAMIC_FUNC0(Generator_obj,generateStartingRoom,return )

::mintDungeon::Room Generator_obj::generateRoom( int x,int y,int width,int height){
	HX_STACK_FRAME("mintDungeon.Generator","generateRoom",0x98863041,"mintDungeon.Generator.generateRoom","mintDungeon/Generator.hx",267,0x4045f1a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(268)
	::mintDungeon::Room room = ::mintDungeon::Room_obj::__new();		HX_STACK_VAR(room,"room");
	HX_STACK_LINE(270)
	room->location->setTo(x,y,width,height);
	HX_STACK_LINE(272)
	{
		HX_STACK_LINE(272)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(272)
		int _g = ::Std_obj::_int(height);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(272)
		while((true)){
			HX_STACK_LINE(272)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(272)
				break;
			}
			HX_STACK_LINE(272)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(274)
			{
				HX_STACK_LINE(274)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(274)
				int _g2 = ::Std_obj::_int(width);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(274)
				while((true)){
					HX_STACK_LINE(274)
					if ((!(((_g3 < _g2))))){
						HX_STACK_LINE(274)
						break;
					}
					HX_STACK_LINE(274)
					int j = (_g3)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(276)
					::openfl::_v2::geom::Point _g4 = ::openfl::_v2::geom::Point_obj::__new((x + j),(y + i));		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(276)
					room->tiles->push(_g4);
				}
			}
		}
	}
	HX_STACK_LINE(280)
	return room;
}


HX_DEFINE_DYNAMIC_FUNC4(Generator_obj,generateRoom,return )

::String Generator_obj::getMapAsString( ){
	HX_STACK_FRAME("mintDungeon.Generator","getMapAsString",0xa1ee37ba,"mintDungeon.Generator.getMapAsString","mintDungeon/Generator.hx",284,0x4045f1a2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(285)
	::String s = HX_CSTRING("");		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(287)
	{
		HX_STACK_LINE(287)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(287)
		Array< ::Dynamic > _g1 = this->_mapArray;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(287)
		while((true)){
			HX_STACK_LINE(287)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(287)
				break;
			}
			HX_STACK_LINE(287)
			Array< int > i = _g1->__get(_g).StaticCast< Array< int > >();		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(287)
			++(_g);
			HX_STACK_LINE(289)
			{
				HX_STACK_LINE(289)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(289)
				while((true)){
					HX_STACK_LINE(289)
					if ((!(((_g2 < i->length))))){
						HX_STACK_LINE(289)
						break;
					}
					HX_STACK_LINE(289)
					int j = i->__get(_g2);		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(289)
					++(_g2);
					HX_STACK_LINE(289)
					hx::AddEq(s,(j + HX_CSTRING(" ")));
				}
			}
			HX_STACK_LINE(290)
			hx::AddEq(s,HX_CSTRING("\n"));
		}
	}
	HX_STACK_LINE(293)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC0(Generator_obj,getMapAsString,return )

::String Generator_obj::getMapAsCSV( ){
	HX_STACK_FRAME("mintDungeon.Generator","getMapAsCSV",0xdaccdd3d,"mintDungeon.Generator.getMapAsCSV","mintDungeon/Generator.hx",297,0x4045f1a2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(298)
	::String s = HX_CSTRING("");		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(300)
	{
		HX_STACK_LINE(300)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(300)
		Array< ::Dynamic > _g1 = this->_mapArray;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(300)
		while((true)){
			HX_STACK_LINE(300)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(300)
				break;
			}
			HX_STACK_LINE(300)
			Array< int > i = _g1->__get(_g).StaticCast< Array< int > >();		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(300)
			++(_g);
			HX_STACK_LINE(302)
			{
				HX_STACK_LINE(302)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(302)
				while((true)){
					HX_STACK_LINE(302)
					if ((!(((_g2 < i->length))))){
						HX_STACK_LINE(302)
						break;
					}
					HX_STACK_LINE(302)
					int j = i->__get(_g2);		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(302)
					++(_g2);
					HX_STACK_LINE(302)
					hx::AddEq(s,(j + HX_CSTRING(",")));
				}
			}
			HX_STACK_LINE(303)
			::String _g2 = s.substr((int)0,(s.length - (int)1));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(303)
			s = _g2;
			HX_STACK_LINE(304)
			hx::AddEq(s,HX_CSTRING("\n"));
		}
	}
	HX_STACK_LINE(307)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC0(Generator_obj,getMapAsCSV,return )

::openfl::_v2::display::Bitmap Generator_obj::getMapAsBitmap( ){
	HX_STACK_FRAME("mintDungeon.Generator","getMapAsBitmap",0x81ca1ed8,"mintDungeon.Generator.getMapAsBitmap","mintDungeon/Generator.hx",311,0x4045f1a2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(312)
	int _g = ::Std_obj::_int(this->mapSizeInTiles->x);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(312)
	int _g1 = ::Std_obj::_int(this->mapSizeInTiles->y);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(312)
	::openfl::_v2::display::BitmapData b = ::openfl::_v2::display::BitmapData_obj::__new(_g,_g1,null(),null(),null());		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(314)
	{
		HX_STACK_LINE(314)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(314)
		int _g2 = this->_mapArray->length;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(314)
		while((true)){
			HX_STACK_LINE(314)
			if ((!(((_g11 < _g2))))){
				HX_STACK_LINE(314)
				break;
			}
			HX_STACK_LINE(314)
			int i = (_g11)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(316)
			{
				HX_STACK_LINE(316)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(316)
				int _g21 = this->_mapArray->__get(i).StaticCast< Array< int > >()->length;		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(316)
				while((true)){
					HX_STACK_LINE(316)
					if ((!(((_g3 < _g21))))){
						HX_STACK_LINE(316)
						break;
					}
					HX_STACK_LINE(316)
					int j = (_g3)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(318)
					if (((this->_mapArray->__get(i).StaticCast< Array< int > >()->__get(j) == ::mintDungeon::Generator_obj::WALL))){
						HX_STACK_LINE(318)
						b->setPixel(j,i,(int)0);
					}
					HX_STACK_LINE(319)
					if (((this->_mapArray->__get(i).StaticCast< Array< int > >()->__get(j) == ::mintDungeon::Generator_obj::GROUND))){
						HX_STACK_LINE(319)
						b->setPixel(j,i,(int)16777215);
					}
					HX_STACK_LINE(320)
					if (((this->_mapArray->__get(i).StaticCast< Array< int > >()->__get(j) == ::mintDungeon::Generator_obj::DEBUG))){
						HX_STACK_LINE(320)
						b->setPixel(j,i,(int)16711680);
					}
				}
			}
		}
	}
	HX_STACK_LINE(324)
	int _g2 = ::Std_obj::_int(this->spawnPoint->x);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(324)
	int _g3 = ::Std_obj::_int(this->spawnPoint->y);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(324)
	b->setPixel(_g2,_g3,(int)255);
	HX_STACK_LINE(325)
	int _g4 = ::Std_obj::_int(this->exitPoint->x);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(325)
	int _g5 = ::Std_obj::_int(this->exitPoint->y);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(325)
	b->setPixel(_g4,_g5,(int)68);
	HX_STACK_LINE(327)
	{
		HX_STACK_LINE(327)
		int _g6 = (int)0;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(327)
		Dynamic _g11 = this->doors;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(327)
		while((true)){
			HX_STACK_LINE(327)
			if ((!(((_g6 < _g11->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(327)
				break;
			}
			HX_STACK_LINE(327)
			Dynamic i = _g11->__GetItem(_g6);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(327)
			++(_g6);
			HX_STACK_LINE(327)
			int _g61 = ::Std_obj::_int(i->__Field(HX_CSTRING("x"),true));		HX_STACK_VAR(_g61,"_g61");
			HX_STACK_LINE(327)
			int _g7 = ::Std_obj::_int(i->__Field(HX_CSTRING("y"),true));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(327)
			b->setPixel(_g61,_g7,(int)4456448);
		}
	}
	HX_STACK_LINE(328)
	{
		HX_STACK_LINE(328)
		int _g6 = (int)0;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(328)
		Dynamic _g11 = this->keys;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(328)
		while((true)){
			HX_STACK_LINE(328)
			if ((!(((_g6 < _g11->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(328)
				break;
			}
			HX_STACK_LINE(328)
			Dynamic i = _g11->__GetItem(_g6);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(328)
			++(_g6);
			HX_STACK_LINE(328)
			int _g8 = ::Std_obj::_int(i->__Field(HX_CSTRING("x"),true));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(328)
			int _g9 = ::Std_obj::_int(i->__Field(HX_CSTRING("y"),true));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(328)
			b->setPixel(_g8,_g9,(int)5635925);
		}
	}
	HX_STACK_LINE(330)
	return ::openfl::_v2::display::Bitmap_obj::__new(b,null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(Generator_obj,getMapAsBitmap,return )

Void Generator_obj::setTile( Float xpos,Float ypos,int type){
{
		HX_STACK_FRAME("mintDungeon.Generator","setTile",0x8df2753f,"mintDungeon.Generator.setTile","mintDungeon/Generator.hx",334,0x4045f1a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xpos,"xpos")
		HX_STACK_ARG(ypos,"ypos")
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(335)
		if ((this->_tryAgain)){
			HX_STACK_LINE(335)
			return null();
		}
		HX_STACK_LINE(336)
		int _g = ::Std_obj::_int(ypos);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(336)
		Array< int > _g1 = this->_mapArray->__get(_g).StaticCast< Array< int > >();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(336)
		int _g2 = ::Std_obj::_int(xpos);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(336)
		_g1[_g2] = type;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Generator_obj,setTile,(void))

int Generator_obj::getTile( Float xpos,Float ypos){
	HX_STACK_FRAME("mintDungeon.Generator","getTile",0x9af0e433,"mintDungeon.Generator.getTile","mintDungeon/Generator.hx",340,0x4045f1a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(xpos,"xpos")
	HX_STACK_ARG(ypos,"ypos")
	HX_STACK_LINE(341)
	if (((bool((bool((bool((xpos < (int)0)) || bool((xpos > (this->mapSizeInTiles->x - (int)1))))) || bool((ypos < (int)0)))) || bool((ypos > (this->mapSizeInTiles->y - (int)1)))))){
		HX_STACK_LINE(341)
		return ::mintDungeon::Generator_obj::OFF_MAP;
	}
	HX_STACK_LINE(342)
	int _g = ::Std_obj::_int(ypos);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(342)
	Array< int > _g1 = this->_mapArray->__get(_g).StaticCast< Array< int > >();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(342)
	int _g2 = ::Std_obj::_int(xpos);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(342)
	return _g1->__get(_g2);
}


HX_DEFINE_DYNAMIC_FUNC2(Generator_obj,getTile,return )

Void Generator_obj::drawObject( ::mintDungeon::DrawableObject o){
{
		HX_STACK_FRAME("mintDungeon.Generator","drawObject",0x73d10bf4,"mintDungeon.Generator.drawObject","mintDungeon/Generator.hx",346,0x4045f1a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(o,"o")
		HX_STACK_LINE(347)
		{
			HX_STACK_LINE(347)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(347)
			Array< ::Dynamic > _g1 = o->tiles;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(347)
			while((true)){
				HX_STACK_LINE(347)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(347)
					break;
				}
				HX_STACK_LINE(347)
				::openfl::_v2::geom::Point i = _g1->__get(_g).StaticCast< ::openfl::_v2::geom::Point >();		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(347)
				++(_g);
				HX_STACK_LINE(347)
				this->setTile(i->x,i->y,::mintDungeon::Generator_obj::GROUND);
			}
		}
		HX_STACK_LINE(348)
		if ((::Std_obj::is(o,hx::ClassOf< ::mintDungeon::Hallway >()))){
			HX_STACK_LINE(348)
			this->setTile((hx::TCast< mintDungeon::Hallway >::cast(o))->startPoint->x,(hx::TCast< mintDungeon::Hallway >::cast(o))->startPoint->y,::mintDungeon::Generator_obj::GROUND);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Generator_obj,drawObject,(void))

bool Generator_obj::canBuild( ::mintDungeon::DrawableObject o){
	HX_STACK_FRAME("mintDungeon.Generator","canBuild",0xb148d8cf,"mintDungeon.Generator.canBuild","mintDungeon/Generator.hx",352,0x4045f1a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(353)
	o->generateOutline();
	HX_STACK_LINE(355)
	{
		HX_STACK_LINE(355)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(355)
		Array< ::Dynamic > _g1 = o->outline;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(355)
		while((true)){
			HX_STACK_LINE(355)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(355)
				break;
			}
			HX_STACK_LINE(355)
			::openfl::_v2::geom::Point i = _g1->__get(_g).StaticCast< ::openfl::_v2::geom::Point >();		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(355)
			++(_g);
			HX_STACK_LINE(357)
			int _g2 = this->getTile(i->x,i->y);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(357)
			if (((  ((!(((  ((!(((  ((!(((  ((!(((_g2 != ::mintDungeon::Generator_obj::WALL))))) ? bool((i->x < (int)0)) : bool(true) ))))) ? bool((i->y < (int)0)) : bool(true) ))))) ? bool((i->x > (this->mapSizeInTiles->x - (int)1))) : bool(true) ))))) ? bool((i->y > (this->mapSizeInTiles->y - (int)1))) : bool(true) ))){
				HX_STACK_LINE(359)
				return false;
			}
		}
	}
	HX_STACK_LINE(363)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Generator_obj,canBuild,return )

Void Generator_obj::tried( hx::Null< int >  __o_n){
int n = __o_n.Default(1);
	HX_STACK_FRAME("mintDungeon.Generator","tried",0x4e52c9d9,"mintDungeon.Generator.tried","mintDungeon/Generator.hx",367,0x4045f1a2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
{
		HX_STACK_LINE(368)
		int _g = hx::AddEq(this->_tries,n);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(368)
		if (((_g > (int)1000))){
			HX_STACK_LINE(368)
			this->_tryAgain = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Generator_obj,tried,(void))

Void Generator_obj::shuffleArray( Dynamic input){
{
		HX_STACK_FRAME("mintDungeon.Generator","shuffleArray",0xbb85c931,"mintDungeon.Generator.shuffleArray","mintDungeon/Generator.hx",372,0x4045f1a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(input,"input")
		HX_STACK_LINE(373)
		int i = (input->__Field(HX_CSTRING("length"),true) - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(375)
		while((true)){
			HX_STACK_LINE(375)
			if ((!(((i >= (int)0))))){
				HX_STACK_LINE(375)
				break;
			}
			HX_STACK_LINE(377)
			Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(377)
			Float _g1 = (_g * ((i + (int)1)));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(377)
			int randomIndex = ::Math_obj::floor(_g1);		HX_STACK_VAR(randomIndex,"randomIndex");
			HX_STACK_LINE(378)
			Dynamic itemAtIndex = input->__GetItem(randomIndex);		HX_STACK_VAR(itemAtIndex,"itemAtIndex");
			HX_STACK_LINE(379)
			hx::IndexRef((input).mPtr,randomIndex) = input->__GetItem(i);
			HX_STACK_LINE(380)
			hx::IndexRef((input).mPtr,i) = itemAtIndex;
			HX_STACK_LINE(381)
			(i)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Generator_obj,shuffleArray,(void))

int Generator_obj::LEFT;

int Generator_obj::RIGHT;

int Generator_obj::UP;

int Generator_obj::DOWN;

int Generator_obj::GROUND;

int Generator_obj::WALL;

int Generator_obj::OFF_MAP;

int Generator_obj::DEBUG;

Array< int > Generator_obj::colours;


Generator_obj::Generator_obj()
{
}

void Generator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Generator);
	HX_MARK_MEMBER_NAME(mapSizeInTiles,"mapSizeInTiles");
	HX_MARK_MEMBER_NAME(roomSize,"roomSize");
	HX_MARK_MEMBER_NAME(roomAmount,"roomAmount");
	HX_MARK_MEMBER_NAME(hallLength,"hallLength");
	HX_MARK_MEMBER_NAME(doorPercentage,"doorPercentage");
	HX_MARK_MEMBER_NAME(spawnPoint,"spawnPoint");
	HX_MARK_MEMBER_NAME(exitPoint,"exitPoint");
	HX_MARK_MEMBER_NAME(keys,"keys");
	HX_MARK_MEMBER_NAME(doors,"doors");
	HX_MARK_MEMBER_NAME(_mapArray,"_mapArray");
	HX_MARK_MEMBER_NAME(_hallways,"_hallways");
	HX_MARK_MEMBER_NAME(_rooms,"_rooms");
	HX_MARK_MEMBER_NAME(_tryAgain,"_tryAgain");
	HX_MARK_MEMBER_NAME(_tries,"_tries");
	HX_MARK_MEMBER_NAME(_colourOn,"_colourOn");
	HX_MARK_END_CLASS();
}

void Generator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mapSizeInTiles,"mapSizeInTiles");
	HX_VISIT_MEMBER_NAME(roomSize,"roomSize");
	HX_VISIT_MEMBER_NAME(roomAmount,"roomAmount");
	HX_VISIT_MEMBER_NAME(hallLength,"hallLength");
	HX_VISIT_MEMBER_NAME(doorPercentage,"doorPercentage");
	HX_VISIT_MEMBER_NAME(spawnPoint,"spawnPoint");
	HX_VISIT_MEMBER_NAME(exitPoint,"exitPoint");
	HX_VISIT_MEMBER_NAME(keys,"keys");
	HX_VISIT_MEMBER_NAME(doors,"doors");
	HX_VISIT_MEMBER_NAME(_mapArray,"_mapArray");
	HX_VISIT_MEMBER_NAME(_hallways,"_hallways");
	HX_VISIT_MEMBER_NAME(_rooms,"_rooms");
	HX_VISIT_MEMBER_NAME(_tryAgain,"_tryAgain");
	HX_VISIT_MEMBER_NAME(_tries,"_tries");
	HX_VISIT_MEMBER_NAME(_colourOn,"_colourOn");
}

Dynamic Generator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"UP") ) { return UP; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"LEFT") ) { return LEFT; }
		if (HX_FIELD_EQ(inName,"DOWN") ) { return DOWN; }
		if (HX_FIELD_EQ(inName,"WALL") ) { return WALL; }
		if (HX_FIELD_EQ(inName,"keys") ) { return keys; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { return RIGHT; }
		if (HX_FIELD_EQ(inName,"DEBUG") ) { return DEBUG; }
		if (HX_FIELD_EQ(inName,"doors") ) { return doors; }
		if (HX_FIELD_EQ(inName,"tried") ) { return tried_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"GROUND") ) { return GROUND; }
		if (HX_FIELD_EQ(inName,"_rooms") ) { return _rooms; }
		if (HX_FIELD_EQ(inName,"_tries") ) { return _tries; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"OFF_MAP") ) { return OFF_MAP; }
		if (HX_FIELD_EQ(inName,"colours") ) { return colours; }
		if (HX_FIELD_EQ(inName,"setTile") ) { return setTile_dyn(); }
		if (HX_FIELD_EQ(inName,"getTile") ) { return getTile_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"roomSize") ) { return roomSize; }
		if (HX_FIELD_EQ(inName,"generate") ) { return generate_dyn(); }
		if (HX_FIELD_EQ(inName,"canBuild") ) { return canBuild_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"exitPoint") ) { return exitPoint; }
		if (HX_FIELD_EQ(inName,"_mapArray") ) { return _mapArray; }
		if (HX_FIELD_EQ(inName,"_hallways") ) { return _hallways; }
		if (HX_FIELD_EQ(inName,"_tryAgain") ) { return _tryAgain; }
		if (HX_FIELD_EQ(inName,"_colourOn") ) { return _colourOn; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"roomAmount") ) { return roomAmount; }
		if (HX_FIELD_EQ(inName,"hallLength") ) { return hallLength; }
		if (HX_FIELD_EQ(inName,"spawnPoint") ) { return spawnPoint; }
		if (HX_FIELD_EQ(inName,"drawObject") ) { return drawObject_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isReachable") ) { return isReachable_dyn(); }
		if (HX_FIELD_EQ(inName,"getMapAsCSV") ) { return getMapAsCSV_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"generateExit") ) { return generateExit_dyn(); }
		if (HX_FIELD_EQ(inName,"generateRoom") ) { return generateRoom_dyn(); }
		if (HX_FIELD_EQ(inName,"shuffleArray") ) { return shuffleArray_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"generateRooms") ) { return generateRooms_dyn(); }
		if (HX_FIELD_EQ(inName,"generateDoors") ) { return generateDoors_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mapSizeInTiles") ) { return mapSizeInTiles; }
		if (HX_FIELD_EQ(inName,"doorPercentage") ) { return doorPercentage; }
		if (HX_FIELD_EQ(inName,"getMapAsString") ) { return getMapAsString_dyn(); }
		if (HX_FIELD_EQ(inName,"getMapAsBitmap") ) { return getMapAsBitmap_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"generateHallway") ) { return generateHallway_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"generateEmptyMap") ) { return generateEmptyMap_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"generateStartingRoom") ) { return generateStartingRoom_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Generator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"UP") ) { UP=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"LEFT") ) { LEFT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DOWN") ) { DOWN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"WALL") ) { WALL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keys") ) { keys=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { RIGHT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEBUG") ) { DEBUG=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"doors") ) { doors=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"GROUND") ) { GROUND=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rooms") ) { _rooms=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tries") ) { _tries=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"OFF_MAP") ) { OFF_MAP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colours") ) { colours=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"roomSize") ) { roomSize=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"exitPoint") ) { exitPoint=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mapArray") ) { _mapArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hallways") ) { _hallways=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tryAgain") ) { _tryAgain=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_colourOn") ) { _colourOn=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"roomAmount") ) { roomAmount=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hallLength") ) { hallLength=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spawnPoint") ) { spawnPoint=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mapSizeInTiles") ) { mapSizeInTiles=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"doorPercentage") ) { doorPercentage=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Generator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mapSizeInTiles"));
	outFields->push(HX_CSTRING("roomSize"));
	outFields->push(HX_CSTRING("roomAmount"));
	outFields->push(HX_CSTRING("hallLength"));
	outFields->push(HX_CSTRING("doorPercentage"));
	outFields->push(HX_CSTRING("spawnPoint"));
	outFields->push(HX_CSTRING("exitPoint"));
	outFields->push(HX_CSTRING("keys"));
	outFields->push(HX_CSTRING("doors"));
	outFields->push(HX_CSTRING("_mapArray"));
	outFields->push(HX_CSTRING("_hallways"));
	outFields->push(HX_CSTRING("_rooms"));
	outFields->push(HX_CSTRING("_tryAgain"));
	outFields->push(HX_CSTRING("_tries"));
	outFields->push(HX_CSTRING("_colourOn"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LEFT"),
	HX_CSTRING("RIGHT"),
	HX_CSTRING("UP"),
	HX_CSTRING("DOWN"),
	HX_CSTRING("GROUND"),
	HX_CSTRING("WALL"),
	HX_CSTRING("OFF_MAP"),
	HX_CSTRING("DEBUG"),
	HX_CSTRING("colours"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(Generator_obj,mapSizeInTiles),HX_CSTRING("mapSizeInTiles")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(Generator_obj,roomSize),HX_CSTRING("roomSize")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(Generator_obj,roomAmount),HX_CSTRING("roomAmount")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(Generator_obj,hallLength),HX_CSTRING("hallLength")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(Generator_obj,doorPercentage),HX_CSTRING("doorPercentage")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(Generator_obj,spawnPoint),HX_CSTRING("spawnPoint")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(Generator_obj,exitPoint),HX_CSTRING("exitPoint")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Generator_obj,keys),HX_CSTRING("keys")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Generator_obj,doors),HX_CSTRING("doors")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Generator_obj,_mapArray),HX_CSTRING("_mapArray")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Generator_obj,_hallways),HX_CSTRING("_hallways")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Generator_obj,_rooms),HX_CSTRING("_rooms")},
	{hx::fsBool,(int)offsetof(Generator_obj,_tryAgain),HX_CSTRING("_tryAgain")},
	{hx::fsInt,(int)offsetof(Generator_obj,_tries),HX_CSTRING("_tries")},
	{hx::fsInt,(int)offsetof(Generator_obj,_colourOn),HX_CSTRING("_colourOn")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mapSizeInTiles"),
	HX_CSTRING("roomSize"),
	HX_CSTRING("roomAmount"),
	HX_CSTRING("hallLength"),
	HX_CSTRING("doorPercentage"),
	HX_CSTRING("spawnPoint"),
	HX_CSTRING("exitPoint"),
	HX_CSTRING("keys"),
	HX_CSTRING("doors"),
	HX_CSTRING("_mapArray"),
	HX_CSTRING("_hallways"),
	HX_CSTRING("_rooms"),
	HX_CSTRING("_tryAgain"),
	HX_CSTRING("_tries"),
	HX_CSTRING("_colourOn"),
	HX_CSTRING("generate"),
	HX_CSTRING("generateEmptyMap"),
	HX_CSTRING("generateRooms"),
	HX_CSTRING("generateDoors"),
	HX_CSTRING("generateExit"),
	HX_CSTRING("isReachable"),
	HX_CSTRING("generateHallway"),
	HX_CSTRING("generateStartingRoom"),
	HX_CSTRING("generateRoom"),
	HX_CSTRING("getMapAsString"),
	HX_CSTRING("getMapAsCSV"),
	HX_CSTRING("getMapAsBitmap"),
	HX_CSTRING("setTile"),
	HX_CSTRING("getTile"),
	HX_CSTRING("drawObject"),
	HX_CSTRING("canBuild"),
	HX_CSTRING("tried"),
	HX_CSTRING("shuffleArray"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Generator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Generator_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(Generator_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(Generator_obj::UP,"UP");
	HX_MARK_MEMBER_NAME(Generator_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(Generator_obj::GROUND,"GROUND");
	HX_MARK_MEMBER_NAME(Generator_obj::WALL,"WALL");
	HX_MARK_MEMBER_NAME(Generator_obj::OFF_MAP,"OFF_MAP");
	HX_MARK_MEMBER_NAME(Generator_obj::DEBUG,"DEBUG");
	HX_MARK_MEMBER_NAME(Generator_obj::colours,"colours");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Generator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Generator_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(Generator_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(Generator_obj::UP,"UP");
	HX_VISIT_MEMBER_NAME(Generator_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(Generator_obj::GROUND,"GROUND");
	HX_VISIT_MEMBER_NAME(Generator_obj::WALL,"WALL");
	HX_VISIT_MEMBER_NAME(Generator_obj::OFF_MAP,"OFF_MAP");
	HX_VISIT_MEMBER_NAME(Generator_obj::DEBUG,"DEBUG");
	HX_VISIT_MEMBER_NAME(Generator_obj::colours,"colours");
};

#endif

Class Generator_obj::__mClass;

void Generator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("mintDungeon.Generator"), hx::TCanCast< Generator_obj> ,sStaticFields,sMemberFields,
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

void Generator_obj::__boot()
{
	LEFT= (int)0;
	RIGHT= (int)1;
	UP= (int)2;
	DOWN= (int)3;
	GROUND= (int)1;
	WALL= (int)2;
	OFF_MAP= (int)98;
	DEBUG= (int)99;
	colours= Array_obj< int >::__new().Add((int)16711680).Add((int)65280).Add((int)255).Add((int)16776960).Add((int)16711935).Add((int)65535);
}

} // end namespace mintDungeon
