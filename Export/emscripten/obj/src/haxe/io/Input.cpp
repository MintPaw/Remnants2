#include <hxcpp.h>

#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
namespace haxe{
namespace io{

Void Input_obj::__construct()
{
	return null();
}

//Input_obj::~Input_obj() { }

Dynamic Input_obj::__CreateEmpty() { return  new Input_obj; }
hx::ObjectPtr< Input_obj > Input_obj::__new()
{  hx::ObjectPtr< Input_obj > result = new Input_obj();
	result->__construct();
	return result;}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Input_obj > result = new Input_obj();
	result->__construct();
	return result;}

int Input_obj::readByte( ){
	HX_STACK_FRAME("haxe.io.Input","readByte",0x4de8a3c2,"haxe.io.Input.readByte","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",37,0x854a6ecd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	HX_STACK_DO_THROW(HX_CSTRING("Not implemented"));
	HX_STACK_LINE(40)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readByte,return )

int Input_obj::readBytes( ::haxe::io::Bytes s,int pos,int len){
	HX_STACK_FRAME("haxe.io.Input","readBytes",0xdda6a671,"haxe.io.Input.readBytes","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",46,0x854a6ecd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(47)
	int k = len;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(48)
	Array< unsigned char > b = s->b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(49)
	if (((bool((bool((pos < (int)0)) || bool((len < (int)0)))) || bool(((pos + len) > s->length))))){
		HX_STACK_LINE(50)
		HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
	}
	HX_STACK_LINE(51)
	while((true)){
		HX_STACK_LINE(51)
		if ((!(((k > (int)0))))){
			HX_STACK_LINE(51)
			break;
		}
		HX_STACK_LINE(57)
		b[pos] = this->readByte();
		HX_STACK_LINE(61)
		(pos)++;
		HX_STACK_LINE(62)
		(k)--;
	}
	HX_STACK_LINE(64)
	return len;
}


HX_DEFINE_DYNAMIC_FUNC3(Input_obj,readBytes,return )

Void Input_obj::close( ){
{
		HX_STACK_FRAME("haxe.io.Input","close",0xfc421af4,"haxe.io.Input.close","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",67,0x854a6ecd)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,close,(void))

Void Input_obj::readFullBytes( ::haxe::io::Bytes s,int pos,int len){
{
		HX_STACK_FRAME("haxe.io.Input","readFullBytes",0x3db9a162,"haxe.io.Input.readFullBytes","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",100,0x854a6ecd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(len,"len")
		HX_STACK_LINE(100)
		while((true)){
			HX_STACK_LINE(100)
			if ((!(((len > (int)0))))){
				HX_STACK_LINE(100)
				break;
			}
			HX_STACK_LINE(101)
			int k = this->readBytes(s,pos,len);		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(102)
			hx::AddEq(pos,k);
			HX_STACK_LINE(103)
			hx::SubEq(len,k);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Input_obj,readFullBytes,(void))

::String Input_obj::readLine( ){
	HX_STACK_FRAME("haxe.io.Input","readLine",0x54789cae,"haxe.io.Input.readLine","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",127,0x854a6ecd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(128)
	::StringBuf buf = ::StringBuf_obj::__new();		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(129)
	int last;		HX_STACK_VAR(last,"last");
	HX_STACK_LINE(130)
	::String s;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(131)
	try
	{
	HX_STACK_CATCHABLE(::haxe::io::Eof, 0);
	{
		HX_STACK_LINE(132)
		while((true)){
			HX_STACK_LINE(132)
			int _g = this->readByte();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(132)
			int _g1 = last = _g;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(132)
			if ((!(((_g1 != (int)10))))){
				HX_STACK_LINE(132)
				break;
			}
			HX_STACK_LINE(133)
			::String _g2 = ::String::fromCharCode(last);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(133)
			buf->b->push(_g2);
		}
		HX_STACK_LINE(134)
		::String _g3 = buf->b->join(HX_CSTRING(""));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(134)
		s = _g3;
		HX_STACK_LINE(135)
		Dynamic _g4 = s.charCodeAt((s.length - (int)1));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(135)
		if (((_g4 == (int)13))){
			HX_STACK_LINE(135)
			::String _g5 = s.substr((int)0,(int)-1);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(135)
			s = _g5;
		}
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::haxe::io::Eof >() ){
			HX_STACK_BEGIN_CATCH
			::haxe::io::Eof e = __e;{
				HX_STACK_LINE(137)
				::String _g6 = buf->b->join(HX_CSTRING(""));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(137)
				s = _g6;
				HX_STACK_LINE(138)
				if (((s.length == (int)0))){
					HX_STACK_LINE(139)
					HX_STACK_DO_THROW(e);
				}
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(141)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readLine,return )

::String Input_obj::readString( int len){
	HX_STACK_FRAME("haxe.io.Input","readString",0xfdebd00b,"haxe.io.Input.readString","C:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",326,0x854a6ecd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(327)
	::haxe::io::Bytes b = ::haxe::io::Bytes_obj::alloc(len);		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(328)
	this->readFullBytes(b,(int)0,len);
	HX_STACK_LINE(332)
	return b->toString();
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,readString,return )


Input_obj::Input_obj()
{
}

Dynamic Input_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		if (HX_FIELD_EQ(inName,"readLine") ) { return readLine_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readString") ) { return readString_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readFullBytes") ) { return readFullBytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Input_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Input_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("readByte"),
	HX_CSTRING("readBytes"),
	HX_CSTRING("close"),
	HX_CSTRING("readFullBytes"),
	HX_CSTRING("readLine"),
	HX_CSTRING("readString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#endif

Class Input_obj::__mClass;

void Input_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.io.Input"), hx::TCanCast< Input_obj> ,sStaticFields,sMemberFields,
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

void Input_obj::__boot()
{
}

} // end namespace haxe
} // end namespace io
