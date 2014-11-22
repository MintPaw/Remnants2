#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#define INCLUDED_flixel_addons_ui_interfaces_IHasParams

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IHasParams_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IHasParams_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Dynamic set_params( Dynamic p)=0;
		Dynamic set_params_dyn();
};

#define DELEGATE_flixel_addons_ui_interfaces_IHasParams \
virtual Dynamic set_params( Dynamic p) { return mDelegate->set_params(p);}  \
virtual Dynamic set_params_dyn() { return mDelegate->set_params_dyn();}  \


template<typename IMPL>
class IHasParams_delegate_ : public IHasParams_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IHasParams_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_flixel_addons_ui_interfaces_IHasParams
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces

#endif /* INCLUDED_flixel_addons_ui_interfaces_IHasParams */ 
