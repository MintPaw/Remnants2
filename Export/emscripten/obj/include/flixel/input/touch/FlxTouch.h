#ifndef INCLUDED_flixel_input_touch_FlxTouch
#define INCLUDED_flixel_input_touch_FlxTouch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/input/FlxPointer.h>
#include <flixel/input/IFlxInput.h>
#include <flixel/util/IFlxDestroyable.h>
HX_DECLARE_CLASS2(flixel,input,FlxInput)
HX_DECLARE_CLASS2(flixel,input,FlxPointer)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS3(flixel,input,touch,FlxTouch)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(openfl,_v2,geom,Point)
namespace flixel{
namespace input{
namespace touch{


class HXCPP_CLASS_ATTRIBUTES  FlxTouch_obj : public ::flixel::input::FlxPointer_obj{
	public:
		typedef ::flixel::input::FlxPointer_obj super;
		typedef FlxTouch_obj OBJ_;
		FlxTouch_obj();
		Void __construct(hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_pointID);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxTouch_obj > __new(hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_pointID);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTouch_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::util::IFlxDestroyable_obj *()
			{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxTouch_obj >(this); }
		inline operator ::flixel::input::IFlxInput_obj *()
			{ return new ::flixel::input::IFlxInput_delegate_< FlxTouch_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxTouch"); }

		::flixel::input::FlxInput input;
		::openfl::_v2::geom::Point flashPoint;
		::flixel::math::FlxPoint justPressedPosition;
		Float justPressedTimeInTicks;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void recycle( int x,int y,int pointID);
		Dynamic recycle_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void setXY( int X,int Y);
		Dynamic setXY_dyn();

		virtual int get_touchPointID( );
		Dynamic get_touchPointID_dyn();

		virtual bool get_justReleased( );
		Dynamic get_justReleased_dyn();

		virtual bool get_released( );
		Dynamic get_released_dyn();

		virtual bool get_pressed( );
		Dynamic get_pressed_dyn();

		virtual bool get_justPressed( );
		Dynamic get_justPressed_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace touch

#endif /* INCLUDED_flixel_input_touch_FlxTouch */ 
