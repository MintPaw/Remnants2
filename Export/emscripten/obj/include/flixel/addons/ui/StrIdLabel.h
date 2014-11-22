#ifndef INCLUDED_flixel_addons_ui_StrIdLabel
#define INCLUDED_flixel_addons_ui_StrIdLabel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,addons,ui,StrIdLabel)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  StrIdLabel_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StrIdLabel_obj OBJ_;
		StrIdLabel_obj();
		Void __construct(::String __o_Id,::String __o_Label);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< StrIdLabel_obj > __new(::String __o_Id,::String __o_Label);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StrIdLabel_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("StrIdLabel"); }

		::String id;
		::String label;
		virtual ::flixel::addons::ui::StrIdLabel copy( );
		Dynamic copy_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		static int sortByLabel( ::flixel::addons::ui::StrIdLabel a,::flixel::addons::ui::StrIdLabel b);
		static Dynamic sortByLabel_dyn();

		static int sortById( ::flixel::addons::ui::StrIdLabel a,::flixel::addons::ui::StrIdLabel b);
		static Dynamic sortById_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_StrIdLabel */ 
