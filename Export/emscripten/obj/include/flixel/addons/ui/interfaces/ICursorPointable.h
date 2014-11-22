#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#define INCLUDED_flixel_addons_ui_interfaces_ICursorPointable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  ICursorPointable_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef ICursorPointable_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
};

#define DELEGATE_flixel_addons_ui_interfaces_ICursorPointable \


template<typename IMPL>
class ICursorPointable_delegate_ : public ICursorPointable_obj
{
	protected:
		IMPL *mDelegate;
	public:
		ICursorPointable_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_flixel_addons_ui_interfaces_ICursorPointable
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces

#endif /* INCLUDED_flixel_addons_ui_interfaces_ICursorPointable */ 
