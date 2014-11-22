#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
namespace flixel{
namespace input{

Void FlxInput_obj::__construct(Dynamic ID)
{
HX_STACK_FRAME("flixel.input.FlxInput","new",0x726ed100,"flixel.input.FlxInput.new","flixel/input/FlxInput.hx",5,0xe8bdaaee)
HX_STACK_THIS(this)
HX_STACK_ARG(ID,"ID")
{
	HX_STACK_LINE(15)
	this->last = (int)0;
	HX_STACK_LINE(14)
	this->current = (int)0;
	HX_STACK_LINE(19)
	this->ID = ID;
}
;
	return null();
}

//FlxInput_obj::~FlxInput_obj() { }

Dynamic FlxInput_obj::__CreateEmpty() { return  new FlxInput_obj; }
hx::ObjectPtr< FlxInput_obj > FlxInput_obj::__new(Dynamic ID)
{  hx::ObjectPtr< FlxInput_obj > result = new FlxInput_obj();
	result->__construct(ID);
	return result;}

Dynamic FlxInput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxInput_obj > result = new FlxInput_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *FlxInput_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::input::IFlxInput_obj)) return operator ::flixel::input::IFlxInput_obj *();
	return super::__ToInterface(inType);
}

Void FlxInput_obj::press( ){
{
		HX_STACK_FRAME("flixel.input.FlxInput","press",0x37dcbc23,"flixel.input.FlxInput.press","flixel/input/FlxInput.hx",23,0xe8bdaaee)
		HX_STACK_THIS(this)
		HX_STACK_LINE(24)
		this->last = this->current;
		HX_STACK_LINE(25)
		if (((bool((this->current == (int)1)) || bool((this->current == (int)2))))){
			HX_STACK_LINE(25)
			this->current = (int)1;
		}
		else{
			HX_STACK_LINE(25)
			this->current = (int)2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,press,(void))

Void FlxInput_obj::release( ){
{
		HX_STACK_FRAME("flixel.input.FlxInput","release",0x94a55667,"flixel.input.FlxInput.release","flixel/input/FlxInput.hx",29,0xe8bdaaee)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		this->last = this->current;
		HX_STACK_LINE(31)
		if (((bool((this->current == (int)1)) || bool((this->current == (int)2))))){
			HX_STACK_LINE(31)
			this->current = (int)-1;
		}
		else{
			HX_STACK_LINE(31)
			this->current = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,release,(void))

Void FlxInput_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.FlxInput","update",0x818ca969,"flixel.input.FlxInput.update","flixel/input/FlxInput.hx",35,0xe8bdaaee)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		if (((bool((this->last == (int)-1)) && bool((this->current == (int)-1))))){
			HX_STACK_LINE(38)
			this->current = (int)0;
		}
		else{
			HX_STACK_LINE(40)
			if (((bool((this->last == (int)2)) && bool((this->current == (int)2))))){
				HX_STACK_LINE(42)
				this->current = (int)1;
			}
		}
		HX_STACK_LINE(45)
		this->last = this->current;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,update,(void))

Void FlxInput_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.FlxInput","reset",0x561cb26f,"flixel.input.FlxInput.reset","flixel/input/FlxInput.hx",49,0xe8bdaaee)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->current = (int)0;
		HX_STACK_LINE(51)
		this->last = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,reset,(void))

bool FlxInput_obj::hasState( int state){
	HX_STACK_FRAME("flixel.input.FlxInput","hasState",0x15827bb7,"flixel.input.FlxInput.hasState","flixel/input/FlxInput.hx",56,0xe8bdaaee)
	HX_STACK_THIS(this)
	HX_STACK_ARG(state,"state")
	HX_STACK_LINE(56)
	switch( (int)(state)){
		case (int)-1: {
			HX_STACK_LINE(58)
			return (this->current == (int)-1);
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(59)
			return (bool((this->current == (int)0)) || bool((this->current == (int)-1)));
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(60)
			return (bool((this->current == (int)1)) || bool((this->current == (int)2)));
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(61)
			return (this->current == (int)2);
		}
		;break;
	}
	HX_STACK_LINE(56)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInput_obj,hasState,return )

bool FlxInput_obj::get_justReleased( ){
	HX_STACK_FRAME("flixel.input.FlxInput","get_justReleased",0x305322f2,"flixel.input.FlxInput.get_justReleased","flixel/input/FlxInput.hx",67,0xe8bdaaee)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	return (this->current == (int)-1);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,get_justReleased,return )

bool FlxInput_obj::get_released( ){
	HX_STACK_FRAME("flixel.input.FlxInput","get_released",0x4d112826,"flixel.input.FlxInput.get_released","flixel/input/FlxInput.hx",72,0xe8bdaaee)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	return (bool((this->current == (int)0)) || bool((this->current == (int)-1)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,get_released,return )

bool FlxInput_obj::get_pressed( ){
	HX_STACK_FRAME("flixel.input.FlxInput","get_pressed",0x1bddd359,"flixel.input.FlxInput.get_pressed","flixel/input/FlxInput.hx",77,0xe8bdaaee)
	HX_STACK_THIS(this)
	HX_STACK_LINE(77)
	return (bool((this->current == (int)1)) || bool((this->current == (int)2)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,get_pressed,return )

bool FlxInput_obj::get_justPressed( ){
	HX_STACK_FRAME("flixel.input.FlxInput","get_justPressed",0xfa72360d,"flixel.input.FlxInput.get_justPressed","flixel/input/FlxInput.hx",82,0xe8bdaaee)
	HX_STACK_THIS(this)
	HX_STACK_LINE(82)
	return (this->current == (int)2);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,get_justPressed,return )


FlxInput_obj::FlxInput_obj()
{
}

void FlxInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxInput);
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_END_CLASS();
}

void FlxInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ID,"ID");
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(last,"last");
}

Dynamic FlxInput_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { return ID; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return press_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { return get_pressed(); }
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
		if (HX_FIELD_EQ(inName,"release") ) { return release_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"released") ) { return get_released(); }
		if (HX_FIELD_EQ(inName,"hasState") ) { return hasState_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return get_justPressed(); }
		if (HX_FIELD_EQ(inName,"get_pressed") ) { return get_pressed_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return get_justReleased(); }
		if (HX_FIELD_EQ(inName,"get_released") ) { return get_released_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_justPressed") ) { return get_justPressed_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_justReleased") ) { return get_justReleased_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxInput_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ID"));
	outFields->push(HX_CSTRING("justReleased"));
	outFields->push(HX_CSTRING("released"));
	outFields->push(HX_CSTRING("pressed"));
	outFields->push(HX_CSTRING("justPressed"));
	outFields->push(HX_CSTRING("current"));
	outFields->push(HX_CSTRING("last"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxInput_obj,ID),HX_CSTRING("ID")},
	{hx::fsInt,(int)offsetof(FlxInput_obj,current),HX_CSTRING("current")},
	{hx::fsInt,(int)offsetof(FlxInput_obj,last),HX_CSTRING("last")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("ID"),
	HX_CSTRING("current"),
	HX_CSTRING("last"),
	HX_CSTRING("press"),
	HX_CSTRING("release"),
	HX_CSTRING("update"),
	HX_CSTRING("reset"),
	HX_CSTRING("hasState"),
	HX_CSTRING("get_justReleased"),
	HX_CSTRING("get_released"),
	HX_CSTRING("get_pressed"),
	HX_CSTRING("get_justPressed"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxInput_obj::__mClass,"__mClass");
};

#endif

Class FlxInput_obj::__mClass;

void FlxInput_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.FlxInput"), hx::TCanCast< FlxInput_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void FlxInput_obj::__boot()
{
}

} // end namespace flixel
} // end namespace input
