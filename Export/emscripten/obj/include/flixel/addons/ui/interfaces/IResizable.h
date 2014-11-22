#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#define INCLUDED_flixel_addons_ui_interfaces_IResizable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IResizable_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IResizable_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void resize( Float w,Float h)=0;
		Dynamic resize_dyn();
};

#define DELEGATE_flixel_addons_ui_interfaces_IResizable \
virtual Void resize( Float w,Float h) { return mDelegate->resize(w,h);}  \
virtual Dynamic resize_dyn() { return mDelegate->resize_dyn();}  \


template<typename IMPL>
class IResizable_delegate_ : public IResizable_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IResizable_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_flixel_addons_ui_interfaces_IResizable
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces

#endif /* INCLUDED_flixel_addons_ui_interfaces_IResizable */ 
