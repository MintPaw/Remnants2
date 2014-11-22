#ifndef INCLUDED_flixel_addons_ui_Rounding
#define INCLUDED_flixel_addons_ui_Rounding

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,addons,ui,Rounding)
namespace flixel{
namespace addons{
namespace ui{


class Rounding_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Rounding_obj OBJ_;

	public:
		Rounding_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("flixel.addons.ui.Rounding"); }
		::String __ToString() const { return HX_CSTRING("Rounding.") + tag; }

		static ::flixel::addons::ui::Rounding Ceil;
		static inline ::flixel::addons::ui::Rounding Ceil_dyn() { return Ceil; }
		static ::flixel::addons::ui::Rounding Floor;
		static inline ::flixel::addons::ui::Rounding Floor_dyn() { return Floor; }
		static ::flixel::addons::ui::Rounding None;
		static inline ::flixel::addons::ui::Rounding None_dyn() { return None; }
		static ::flixel::addons::ui::Rounding Round;
		static inline ::flixel::addons::ui::Rounding Round_dyn() { return Round; }
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_Rounding */ 
