#ifndef INCLUDED_mintDungeon_Random
#define INCLUDED_mintDungeon_Random

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(mintDungeon,Random)
namespace mintDungeon{


class HXCPP_CLASS_ATTRIBUTES  Random_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Random_obj OBJ_;
		Random_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Random_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Random_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Random"); }

		static int seed;
		static Void giveSeed( int s);
		static Dynamic giveSeed_dyn();

		static Float random( );
		static Dynamic random_dyn();

		static int minMaxInt( Float min,Float max);
		static Dynamic minMaxInt_dyn();

};

} // end namespace mintDungeon

#endif /* INCLUDED_mintDungeon_Random */ 
