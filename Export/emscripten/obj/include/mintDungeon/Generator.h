#ifndef INCLUDED_mintDungeon_Generator
#define INCLUDED_mintDungeon_Generator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(mintDungeon,DrawableObject)
HX_DECLARE_CLASS1(mintDungeon,Generator)
HX_DECLARE_CLASS1(mintDungeon,Hallway)
HX_DECLARE_CLASS1(mintDungeon,Room)
HX_DECLARE_CLASS3(openfl,_v2,display,Bitmap)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,geom,Point)
namespace mintDungeon{


class HXCPP_CLASS_ATTRIBUTES  Generator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Generator_obj OBJ_;
		Generator_obj();
		Void __construct(int seed);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Generator_obj > __new(int seed);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Generator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Generator"); }

		::openfl::_v2::geom::Point mapSizeInTiles;
		::openfl::_v2::geom::Point roomSize;
		::openfl::_v2::geom::Point roomAmount;
		::openfl::_v2::geom::Point hallLength;
		::openfl::_v2::geom::Point doorPercentage;
		::openfl::_v2::geom::Point spawnPoint;
		::openfl::_v2::geom::Point exitPoint;
		Dynamic keys;
		Dynamic doors;
		Array< ::Dynamic > _mapArray;
		Array< ::Dynamic > _hallways;
		Array< ::Dynamic > _rooms;
		bool _tryAgain;
		int _tries;
		int _colourOn;
		virtual Void generate( );
		Dynamic generate_dyn();

		virtual Void generateEmptyMap( );
		Dynamic generateEmptyMap_dyn();

		virtual Void generateRooms( );
		Dynamic generateRooms_dyn();

		virtual Void generateDoors( );
		Dynamic generateDoors_dyn();

		virtual Void generateExit( );
		Dynamic generateExit_dyn();

		virtual bool isReachable( ::openfl::_v2::geom::Point start,::openfl::_v2::geom::Point end,::String csv,::openfl::_v2::geom::Point toAdd);
		Dynamic isReachable_dyn();

		virtual ::mintDungeon::Hallway generateHallway( );
		Dynamic generateHallway_dyn();

		virtual ::mintDungeon::Room generateStartingRoom( );
		Dynamic generateStartingRoom_dyn();

		virtual ::mintDungeon::Room generateRoom( int x,int y,int width,int height);
		Dynamic generateRoom_dyn();

		virtual ::String getMapAsString( );
		Dynamic getMapAsString_dyn();

		virtual ::String getMapAsCSV( );
		Dynamic getMapAsCSV_dyn();

		virtual ::openfl::_v2::display::Bitmap getMapAsBitmap( );
		Dynamic getMapAsBitmap_dyn();

		virtual Void setTile( Float xpos,Float ypos,int type);
		Dynamic setTile_dyn();

		virtual int getTile( Float xpos,Float ypos);
		Dynamic getTile_dyn();

		virtual Void drawObject( ::mintDungeon::DrawableObject o);
		Dynamic drawObject_dyn();

		virtual bool canBuild( ::mintDungeon::DrawableObject o);
		Dynamic canBuild_dyn();

		virtual Void tried( hx::Null< int >  n);
		Dynamic tried_dyn();

		virtual Void shuffleArray( Dynamic input);
		Dynamic shuffleArray_dyn();

		static int LEFT;
		static int RIGHT;
		static int UP;
		static int DOWN;
		static int GROUND;
		static int WALL;
		static int OFF_MAP;
		static int DEBUG;
		static Array< int > colours;
};

} // end namespace mintDungeon

#endif /* INCLUDED_mintDungeon_Generator */ 
