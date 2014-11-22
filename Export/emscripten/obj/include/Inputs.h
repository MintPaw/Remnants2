#ifndef INCLUDED_Inputs
#define INCLUDED_Inputs

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS0(Inputs)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)


class HXCPP_CLASS_ATTRIBUTES  Inputs_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Inputs_obj OBJ_;
		Inputs_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Inputs_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Inputs_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Inputs"); }

		static ::flixel::group::FlxTypedGroup players;
		static ::haxe::ds::StringMap binds;
		static ::haxe::ds::EnumValueMap LEFT_STICK;
		static ::haxe::ds::EnumValueMap RIGHT_STICK;
		static int A;
		static int B;
		static int X;
		static int Y;
		static Array< ::String > actions;
		static Void setPlatform( ::String platfrom);
		static Dynamic setPlatform_dyn();

		static Void makeBind( ::String key,::String action);
		static Dynamic makeBind_dyn();

		static Void update( );
		static Dynamic update_dyn();

};


#endif /* INCLUDED_Inputs */ 
