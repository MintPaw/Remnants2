#include <hxcpp.h>

#ifndef INCLUDED_Console
#include <Console.h>
#endif
#ifndef INCLUDED_Inputs
#include <Inputs.h>
#endif
#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
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
#ifndef INCLUDED_game_Door
#include <game/Door.h>
#endif
#ifndef INCLUDED_game_GameState
#include <game/GameState.h>
#endif
#ifndef INCLUDED_game_Key
#include <game/Key.h>
#endif
#ifndef INCLUDED_game_Player
#include <game/Player.h>
#endif
#ifndef INCLUDED_mintDungeon_Generator
#include <mintDungeon/Generator.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
namespace game{

Void GameState_obj::__construct()
{
HX_STACK_FRAME("game.GameState","new",0x4ce15395,"game.GameState.new","game/GameState.hx",16,0x979a72fc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	this->cameraMode = HX_CSTRING("none");
	HX_STACK_LINE(30)
	super::__construct(null());
}
;
	return null();
}

//GameState_obj::~GameState_obj() { }

Dynamic GameState_obj::__CreateEmpty() { return  new GameState_obj; }
hx::ObjectPtr< GameState_obj > GameState_obj::__new()
{  hx::ObjectPtr< GameState_obj > result = new GameState_obj();
	result->__construct();
	return result;}

Dynamic GameState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameState_obj > result = new GameState_obj();
	result->__construct();
	return result;}

Void GameState_obj::create( ){
{
		HX_STACK_FRAME("game.GameState","create",0x7f9e12e7,"game.GameState.create","game/GameState.hx",34,0x979a72fc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->super::create();
		HX_STACK_LINE(36)
		this->setup();
	}
return null();
}


Void GameState_obj::setup( ){
{
		HX_STACK_FRAME("game.GameState","setup",0x278c28f2,"game.GameState.setup","game/GameState.hx",40,0x979a72fc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		this->setupVars();
		HX_STACK_LINE(42)
		this->setupConsole();
		HX_STACK_LINE(43)
		this->_console->exec(HX_CSTRING("autoexecgame"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameState_obj,setup,(void))

Void GameState_obj::setupVars( ){
{
		HX_STACK_FRAME("game.GameState","setupVars",0x74dae1be,"game.GameState.setupVars","game/GameState.hx",47,0x979a72fc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(48)
		::flixel::group::FlxTypedGroup _g = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(48)
		this->_playerGroup = _g;
		HX_STACK_LINE(49)
		::flixel::group::FlxTypedGroup _g1 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(49)
		this->_doorGroup = _g1;
		HX_STACK_LINE(50)
		::flixel::group::FlxTypedGroup _g2 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(50)
		this->_keyGroup = _g2;
		HX_STACK_LINE(51)
		::Inputs_obj::players = this->_playerGroup;
		HX_STACK_LINE(53)
		::mintDungeon::Generator _g3 = ::mintDungeon::Generator_obj::__new((int)0);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(53)
		this->generator = _g3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameState_obj,setupVars,(void))

Void GameState_obj::setupConsole( ){
{
		HX_STACK_FRAME("game.GameState","setupConsole",0xfb9fcc85,"game.GameState.setupConsole","game/GameState.hx",57,0x979a72fc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		::Console _g = ::Console_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(58)
		this->_console = _g;
		HX_STACK_LINE(59)
		this->_console->passInReference(HX_CSTRING("G"),hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(60)
		this->_console->passInReference(HX_CSTRING("R"),hx::ClassOf< ::Reg >());
		HX_STACK_LINE(61)
		this->add(this->_console);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameState_obj,setupConsole,(void))

Void GameState_obj::generateMap( ){
{
		HX_STACK_FRAME("game.GameState","generateMap",0x9c69529c,"game.GameState.generateMap","game/GameState.hx",65,0x979a72fc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		this->generator->generate();
		HX_STACK_LINE(67)
		::flixel::tile::FlxTilemap _g = ::flixel::tile::FlxTilemap_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(67)
		this->_map = _g;
		HX_STACK_LINE(68)
		::String _g1 = this->generator->getMapAsCSV();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(68)
		this->_map->loadMapFromCSV(_g1,HX_CSTRING("assets/img/tileset.png"),::Reg_obj::TILE_SIZE,::Reg_obj::TILE_SIZE,null(),null(),null(),null());
		HX_STACK_LINE(70)
		this->_map->setTileProperties((int)1,(int)0,null(),null(),null());
		HX_STACK_LINE(71)
		this->add(this->_map);
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			::flixel::math::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(73)
			Float Width = this->_map->get_width();		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(73)
			Float Height = this->_map->get_height();		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(73)
			_this->x = (int)0;
			HX_STACK_LINE(73)
			_this->y = (int)0;
			HX_STACK_LINE(73)
			_this->width = Width;
			HX_STACK_LINE(73)
			_this->height = Height;
			HX_STACK_LINE(73)
			_this;
		}
		HX_STACK_LINE(74)
		Float _g2 = this->_map->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(74)
		Float _g3 = this->_map->get_height();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(74)
		::flixel::FlxG_obj::camera->setScrollBoundsRect((int)0,(int)0,_g2,_g3,null());
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(76)
			Dynamic _g11 = this->generator->doors;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(76)
			while((true)){
				HX_STACK_LINE(76)
				if ((!(((_g4 < _g11->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(76)
					break;
				}
				HX_STACK_LINE(76)
				Dynamic i = _g11->__GetItem(_g4);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(76)
				++(_g4);
				HX_STACK_LINE(78)
				::game::Door d = ::game::Door_obj::__new((i->__Field(HX_CSTRING("x"),true) * ::Reg_obj::TILE_SIZE),(i->__Field(HX_CSTRING("y"),true) * ::Reg_obj::TILE_SIZE),i->__Field(HX_CSTRING("colour"),true));		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(79)
				this->_doorGroup->add(d);
				HX_STACK_LINE(80)
				this->add(d);
			}
		}
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(83)
			Dynamic _g11 = this->generator->keys;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(83)
			while((true)){
				HX_STACK_LINE(83)
				if ((!(((_g4 < _g11->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(83)
					break;
				}
				HX_STACK_LINE(83)
				Dynamic i = _g11->__GetItem(_g4);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(83)
				++(_g4);
				HX_STACK_LINE(85)
				::game::Key k = ::game::Key_obj::__new((i->__Field(HX_CSTRING("x"),true) * ::Reg_obj::TILE_SIZE),(i->__Field(HX_CSTRING("y"),true) * ::Reg_obj::TILE_SIZE),i->__Field(HX_CSTRING("colour"),true));		HX_STACK_VAR(k,"k");
				HX_STACK_LINE(86)
				this->_keyGroup->add(k);
				HX_STACK_LINE(87)
				this->add(k);
			}
		}
		HX_STACK_LINE(90)
		::flixel::FlxSprite _g4 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(90)
		this->_exit = _g4;
		HX_STACK_LINE(91)
		this->_exit->makeGraphic((int)50,(int)100,(int)-256,null(),null());
		HX_STACK_LINE(92)
		this->_exit->set_x(this->generator->exitPoint->x);
		HX_STACK_LINE(93)
		this->_exit->set_y(this->generator->exitPoint->y);
		HX_STACK_LINE(94)
		this->add(this->_exit);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameState_obj,generateMap,(void))

Void GameState_obj::createPlayer( int model,hx::Null< Float >  __o_xpos,hx::Null< Float >  __o_ypos){
Float xpos = __o_xpos.Default(-1);
Float ypos = __o_ypos.Default(-1);
	HX_STACK_FRAME("game.GameState","createPlayer",0x7ea319a8,"game.GameState.createPlayer","game/GameState.hx",98,0x979a72fc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(model,"model")
	HX_STACK_ARG(xpos,"xpos")
	HX_STACK_ARG(ypos,"ypos")
{
		HX_STACK_LINE(99)
		::game::Player p = ::game::Player_obj::__new(model);		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(100)
		p->set_x((  (((xpos == (int)-1))) ? Float((this->generator->spawnPoint->x * ::Reg_obj::TILE_SIZE)) : Float(xpos) ));
		HX_STACK_LINE(101)
		p->set_y((  (((ypos == (int)-1))) ? Float((this->generator->spawnPoint->y * ::Reg_obj::TILE_SIZE)) : Float(ypos) ));
		HX_STACK_LINE(102)
		this->add(p);
		HX_STACK_LINE(103)
		this->add(p->aimer);
		HX_STACK_LINE(105)
		this->_playerGroup->add(p);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GameState_obj,createPlayer,(void))

Void GameState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("game.GameState","update",0x8a9431f4,"game.GameState.update","game/GameState.hx",109,0x979a72fc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(110)
		::Inputs_obj::update();
		HX_STACK_LINE(111)
		this->updateCamera();
		HX_STACK_LINE(112)
		this->updateExit();
		HX_STACK_LINE(114)
		this->super::update(elapsed);
		HX_STACK_LINE(116)
		this->updateCollisions();
	}
return null();
}


Void GameState_obj::updateCamera( ){
{
		HX_STACK_FRAME("game.GameState","updateCamera",0xdbe4dbb9,"game.GameState.updateCamera","game/GameState.hx",120,0x979a72fc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(121)
		Array< ::Dynamic > points = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(122)
		::flixel::math::FlxPoint cameraPoint = ::flixel::math::FlxPoint_obj::__new(::flixel::FlxG_obj::camera->x,::flixel::FlxG_obj::camera->y);		HX_STACK_VAR(cameraPoint,"cameraPoint");
		HX_STACK_LINE(124)
		if (((this->cameraMode == HX_CSTRING("c")))){
			HX_STACK_LINE(126)
			for(::cpp::FastIterator_obj< ::game::Player > *__it = ::cpp::CreateFastIterator< ::game::Player >(::flixel::group::FlxTypedGroupIterator_obj::__new(this->_playerGroup->members,null()));  __it->hasNext(); ){
				::game::Player i = __it->next();
				{
					HX_STACK_LINE(126)
					::flixel::math::FlxPoint _g = i->getMidpoint(null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(126)
					points->push(_g);
				}
;
			}
			HX_STACK_LINE(127)
			::flixel::math::FlxPoint _g1 = ::Reg_obj::centroid(points);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(127)
			cameraPoint = _g1;
		}
		else{
			HX_STACK_LINE(128)
			::String _g2 = this->cameraMode.charAt((int)0);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(128)
			if (((_g2 == HX_CSTRING("p")))){
				HX_STACK_LINE(129)
				::String _g3 = this->cameraMode.charAt((int)1);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(129)
				Dynamic _g4 = ::Std_obj::parseInt(_g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(129)
				::flixel::math::FlxPoint _g5 = this->_playerGroup->members->__GetItem(_g4)->__Field(HX_CSTRING("getMidpoint"),true)(null());		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(129)
				cameraPoint = _g5;
			}
		}
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			::flixel::FlxCamera _this = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(132)
			_this->scroll->set((cameraPoint->x - (_this->width * 0.5)),(cameraPoint->y - (_this->height * 0.5)));
			HX_STACK_LINE(132)
			if ((cameraPoint->_weak)){
				HX_STACK_LINE(132)
				cameraPoint->put();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameState_obj,updateCamera,(void))

Void GameState_obj::updateCollisions( ){
{
		HX_STACK_FRAME("game.GameState","updateCollisions",0x60e36ad5,"game.GameState.updateCollisions","game/GameState.hx",136,0x979a72fc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(137)
		::flixel::FlxG_obj::overlap(this->_keyGroup,this->_playerGroup,this->keyVSPlayer_dyn(),null());
		HX_STACK_LINE(138)
		::flixel::FlxG_obj::overlap(this->_doorGroup,this->_playerGroup,this->doorVSPlayer_dyn(),::flixel::FlxObject_obj::separate_dyn());
		HX_STACK_LINE(139)
		::flixel::FlxG_obj::overlap(this->_map,this->_playerGroup,null(),::flixel::FlxObject_obj::separate_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameState_obj,updateCollisions,(void))

Void GameState_obj::updateExit( ){
{
		HX_STACK_FRAME("game.GameState","updateExit",0xb2bd5f32,"game.GameState.updateExit","game/GameState.hx",143,0x979a72fc)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameState_obj,updateExit,(void))

Void GameState_obj::keyVSPlayer( ::flixel::FlxBasic b1,::flixel::FlxBasic b2){
{
		HX_STACK_FRAME("game.GameState","keyVSPlayer",0xe36b3752,"game.GameState.keyVSPlayer","game/GameState.hx",148,0x979a72fc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(b1,"b1")
		HX_STACK_ARG(b2,"b2")
		HX_STACK_LINE(149)
		::game::Key k;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(149)
		k = hx::TCast< game::Key >::cast(b1);
		HX_STACK_LINE(150)
		::game::Player p;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(150)
		p = hx::TCast< game::Player >::cast(b2);
		HX_STACK_LINE(151)
		p->keys->push(k->colour);
		HX_STACK_LINE(152)
		k->kill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GameState_obj,keyVSPlayer,(void))

Void GameState_obj::doorVSPlayer( ::flixel::FlxBasic b1,::flixel::FlxBasic b2){
{
		HX_STACK_FRAME("game.GameState","doorVSPlayer",0x224c3417,"game.GameState.doorVSPlayer","game/GameState.hx",156,0x979a72fc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(b1,"b1")
		HX_STACK_ARG(b2,"b2")
		HX_STACK_LINE(157)
		::game::Door d;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(157)
		d = hx::TCast< game::Door >::cast(b1);
		HX_STACK_LINE(158)
		::game::Player p;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(158)
		p = hx::TCast< game::Player >::cast(b2);
		HX_STACK_LINE(160)
		{
			HX_STACK_LINE(160)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(160)
			Array< int > _g1 = p->keys;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(160)
			while((true)){
				HX_STACK_LINE(160)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(160)
					break;
				}
				HX_STACK_LINE(160)
				int i = _g1->__get(_g);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(160)
				++(_g);
				HX_STACK_LINE(162)
				if (((i == d->colour))){
					HX_STACK_LINE(164)
					d->kill();
					HX_STACK_LINE(165)
					int _g2 = p->keys->indexOf(i,null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(165)
					p->keys->splice(_g2,(int)1);
					HX_STACK_LINE(166)
					return null();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GameState_obj,doorVSPlayer,(void))


GameState_obj::GameState_obj()
{
}

void GameState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameState);
	HX_MARK_MEMBER_NAME(generator,"generator");
	HX_MARK_MEMBER_NAME(cameraMode,"cameraMode");
	HX_MARK_MEMBER_NAME(_console,"_console");
	HX_MARK_MEMBER_NAME(_map,"_map");
	HX_MARK_MEMBER_NAME(_playerGroup,"_playerGroup");
	HX_MARK_MEMBER_NAME(_doorGroup,"_doorGroup");
	HX_MARK_MEMBER_NAME(_keyGroup,"_keyGroup");
	HX_MARK_MEMBER_NAME(_exit,"_exit");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(generator,"generator");
	HX_VISIT_MEMBER_NAME(cameraMode,"cameraMode");
	HX_VISIT_MEMBER_NAME(_console,"_console");
	HX_VISIT_MEMBER_NAME(_map,"_map");
	HX_VISIT_MEMBER_NAME(_playerGroup,"_playerGroup");
	HX_VISIT_MEMBER_NAME(_doorGroup,"_doorGroup");
	HX_VISIT_MEMBER_NAME(_keyGroup,"_keyGroup");
	HX_VISIT_MEMBER_NAME(_exit,"_exit");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GameState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { return _map; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_exit") ) { return _exit; }
		if (HX_FIELD_EQ(inName,"setup") ) { return setup_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_console") ) { return _console; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"generator") ) { return generator; }
		if (HX_FIELD_EQ(inName,"_keyGroup") ) { return _keyGroup; }
		if (HX_FIELD_EQ(inName,"setupVars") ) { return setupVars_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cameraMode") ) { return cameraMode; }
		if (HX_FIELD_EQ(inName,"_doorGroup") ) { return _doorGroup; }
		if (HX_FIELD_EQ(inName,"updateExit") ) { return updateExit_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"generateMap") ) { return generateMap_dyn(); }
		if (HX_FIELD_EQ(inName,"keyVSPlayer") ) { return keyVSPlayer_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_playerGroup") ) { return _playerGroup; }
		if (HX_FIELD_EQ(inName,"setupConsole") ) { return setupConsole_dyn(); }
		if (HX_FIELD_EQ(inName,"createPlayer") ) { return createPlayer_dyn(); }
		if (HX_FIELD_EQ(inName,"updateCamera") ) { return updateCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"doorVSPlayer") ) { return doorVSPlayer_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateCollisions") ) { return updateCollisions_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { _map=inValue.Cast< ::flixel::tile::FlxTilemap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_exit") ) { _exit=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_console") ) { _console=inValue.Cast< ::Console >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"generator") ) { generator=inValue.Cast< ::mintDungeon::Generator >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keyGroup") ) { _keyGroup=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cameraMode") ) { cameraMode=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_doorGroup") ) { _doorGroup=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_playerGroup") ) { _playerGroup=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("generator"));
	outFields->push(HX_CSTRING("cameraMode"));
	outFields->push(HX_CSTRING("_console"));
	outFields->push(HX_CSTRING("_map"));
	outFields->push(HX_CSTRING("_playerGroup"));
	outFields->push(HX_CSTRING("_doorGroup"));
	outFields->push(HX_CSTRING("_keyGroup"));
	outFields->push(HX_CSTRING("_exit"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::mintDungeon::Generator*/ ,(int)offsetof(GameState_obj,generator),HX_CSTRING("generator")},
	{hx::fsString,(int)offsetof(GameState_obj,cameraMode),HX_CSTRING("cameraMode")},
	{hx::fsObject /*::Console*/ ,(int)offsetof(GameState_obj,_console),HX_CSTRING("_console")},
	{hx::fsObject /*::flixel::tile::FlxTilemap*/ ,(int)offsetof(GameState_obj,_map),HX_CSTRING("_map")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(GameState_obj,_playerGroup),HX_CSTRING("_playerGroup")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(GameState_obj,_doorGroup),HX_CSTRING("_doorGroup")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(GameState_obj,_keyGroup),HX_CSTRING("_keyGroup")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(GameState_obj,_exit),HX_CSTRING("_exit")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("generator"),
	HX_CSTRING("cameraMode"),
	HX_CSTRING("_console"),
	HX_CSTRING("_map"),
	HX_CSTRING("_playerGroup"),
	HX_CSTRING("_doorGroup"),
	HX_CSTRING("_keyGroup"),
	HX_CSTRING("_exit"),
	HX_CSTRING("create"),
	HX_CSTRING("setup"),
	HX_CSTRING("setupVars"),
	HX_CSTRING("setupConsole"),
	HX_CSTRING("generateMap"),
	HX_CSTRING("createPlayer"),
	HX_CSTRING("update"),
	HX_CSTRING("updateCamera"),
	HX_CSTRING("updateCollisions"),
	HX_CSTRING("updateExit"),
	HX_CSTRING("keyVSPlayer"),
	HX_CSTRING("doorVSPlayer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameState_obj::__mClass,"__mClass");
};

#endif

Class GameState_obj::__mClass;

void GameState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.GameState"), hx::TCanCast< GameState_obj> ,sStaticFields,sMemberFields,
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

void GameState_obj::__boot()
{
}

} // end namespace game
