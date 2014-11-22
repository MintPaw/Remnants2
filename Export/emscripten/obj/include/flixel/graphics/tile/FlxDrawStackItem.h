#ifndef INCLUDED_flixel_graphics_tile_FlxDrawStackItem
#define INCLUDED_flixel_graphics_tile_FlxDrawStackItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,graphics,FlxGraphic)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxDrawStackItem)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(openfl,_v2,geom,Matrix)
namespace flixel{
namespace graphics{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES  FlxDrawStackItem_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxDrawStackItem_obj OBJ_;
		FlxDrawStackItem_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxDrawStackItem_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxDrawStackItem_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxDrawStackItem"); }

		::flixel::graphics::FlxGraphic graphics;
		Array< Float > drawData;
		int position;
		::flixel::graphics::tile::FlxDrawStackItem next;
		bool colored;
		int blending;
		bool initialized;
		bool antialiasing;
		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void setDrawData( ::flixel::math::FlxPoint coordinate,Float ID,::openfl::_v2::geom::Matrix matrix,hx::Null< bool >  isColored,hx::Null< int >  color,hx::Null< Float >  alpha);
		Dynamic setDrawData_dyn();

};

} // end namespace flixel
} // end namespace graphics
} // end namespace tile

#endif /* INCLUDED_flixel_graphics_tile_FlxDrawStackItem */ 
