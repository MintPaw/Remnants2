#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_XmlType
#include <XmlType.h>
#endif
#ifndef INCLUDED_haxe_xml_Printer
#include <haxe/xml/Printer.h>
#endif
namespace haxe{
namespace xml{

Void Printer_obj::__construct()
{
HX_STACK_FRAME("haxe.xml.Printer","new",0x896dce4d,"haxe.xml.Printer.new","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Printer.hx",41,0xc6da548c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(42)
	::StringBuf _g = ::StringBuf_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(42)
	this->output = _g;
}
;
	return null();
}

//Printer_obj::~Printer_obj() { }

Dynamic Printer_obj::__CreateEmpty() { return  new Printer_obj; }
hx::ObjectPtr< Printer_obj > Printer_obj::__new()
{  hx::ObjectPtr< Printer_obj > result = new Printer_obj();
	result->__construct();
	return result;}

Dynamic Printer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Printer_obj > result = new Printer_obj();
	result->__construct();
	return result;}

Void Printer_obj::writeNode( ::Xml value,::String tabs){
{
		HX_STACK_FRAME("haxe.xml.Printer","writeNode",0x6952ac2e,"haxe.xml.Printer.writeNode","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Printer.hx",46,0xc6da548c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(tabs,"tabs")
		HX_STACK_LINE(46)
		::XmlType _switch_1 = (value->nodeType);
		if (  ( _switch_1==::Xml_obj::CData)){
			HX_STACK_LINE(48)
			this->output->add((tabs + HX_CSTRING("<![CDATA[")));
			HX_STACK_LINE(49)
			{
				HX_STACK_LINE(49)
				::String _g = value->get_nodeValue();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(49)
				::String input = ::StringTools_obj::trim(_g);		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(49)
				this->output->add(input);
			}
			HX_STACK_LINE(50)
			this->output->add(HX_CSTRING("]]>"));
			HX_STACK_LINE(51)
			this->output->add(HX_CSTRING("\n"));
		}
		else if (  ( _switch_1==::Xml_obj::Comment)){
			HX_STACK_LINE(53)
			::String commentContent = value->get_nodeValue();		HX_STACK_VAR(commentContent,"commentContent");
			HX_STACK_LINE(54)
			::String _g1 = ::EReg_obj::__new(HX_CSTRING("[\n\r\t]+"),HX_CSTRING("g"))->replace(commentContent,HX_CSTRING(""));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(54)
			commentContent = _g1;
			HX_STACK_LINE(55)
			this->output->add(tabs);
			HX_STACK_LINE(56)
			{
				HX_STACK_LINE(56)
				::String input = ::StringTools_obj::trim(commentContent);		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(56)
				this->output->add(input);
			}
			HX_STACK_LINE(57)
			this->output->add(HX_CSTRING("\n"));
		}
		else if (  ( _switch_1==::Xml_obj::Document)){
			HX_STACK_LINE(59)
			for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(value->iterator());  __it->hasNext(); ){
				::Xml child = __it->next();
				this->writeNode(child,tabs);
			}
		}
		else if (  ( _switch_1==::Xml_obj::Element)){
			HX_STACK_LINE(63)
			this->output->add((tabs + HX_CSTRING("<")));
			HX_STACK_LINE(64)
			{
				HX_STACK_LINE(64)
				::String input = value->get_nodeName();		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(64)
				this->output->add(input);
			}
			HX_STACK_LINE(65)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(value->attributes());  __it->hasNext(); ){
				::String attribute = __it->next();
				{
					HX_STACK_LINE(66)
					this->output->add(((HX_CSTRING(" ") + attribute) + HX_CSTRING("=\"")));
					HX_STACK_LINE(67)
					{
						HX_STACK_LINE(67)
						::String input = value->get(attribute);		HX_STACK_VAR(input,"input");
						HX_STACK_LINE(67)
						this->output->add(input);
					}
					HX_STACK_LINE(68)
					this->output->add(HX_CSTRING("\""));
				}
;
			}
			HX_STACK_LINE(70)
			if ((this->hasChildren(value))){
				HX_STACK_LINE(71)
				this->output->add(HX_CSTRING(">"));
				HX_STACK_LINE(72)
				this->output->add(HX_CSTRING("\n"));
				HX_STACK_LINE(73)
				for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(value->iterator());  __it->hasNext(); ){
					::Xml child = __it->next();
					this->writeNode(child,(tabs + HX_CSTRING("\t")));
				}
				HX_STACK_LINE(76)
				this->output->add((tabs + HX_CSTRING("</")));
				HX_STACK_LINE(77)
				{
					HX_STACK_LINE(77)
					::String input = value->get_nodeName();		HX_STACK_VAR(input,"input");
					HX_STACK_LINE(77)
					this->output->add(input);
				}
				HX_STACK_LINE(78)
				this->output->add(HX_CSTRING(">"));
				HX_STACK_LINE(79)
				this->output->add(HX_CSTRING("\n"));
			}
			else{
				HX_STACK_LINE(81)
				this->output->add(HX_CSTRING(" />"));
				HX_STACK_LINE(82)
				this->output->add(HX_CSTRING("\n"));
			}
		}
		else if (  ( _switch_1==::Xml_obj::PCData)){
			HX_STACK_LINE(85)
			::String _g2 = value->get_nodeValue();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(85)
			::String nodeValue = ::StringTools_obj::trim(_g2);		HX_STACK_VAR(nodeValue,"nodeValue");
			HX_STACK_LINE(86)
			if (((nodeValue.length != (int)0))){
				HX_STACK_LINE(87)
				this->output->add((tabs + nodeValue));
				HX_STACK_LINE(88)
				this->output->add(HX_CSTRING("\n"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Printer_obj,writeNode,(void))

bool Printer_obj::hasChildren( ::Xml value){
	HX_STACK_FRAME("haxe.xml.Printer","hasChildren",0xeb7e31a6,"haxe.xml.Printer.hasChildren","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Printer.hx",101,0xc6da548c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(102)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(value->iterator());  __it->hasNext(); ){
		::Xml child = __it->next();
		::XmlType _switch_2 = (child->nodeType);
		if (  ( _switch_2==::Xml_obj::Element)){
			HX_STACK_LINE(105)
			return true;
		}
		else if (  ( _switch_2==::Xml_obj::CData) ||  ( _switch_2==::Xml_obj::Comment) ||  ( _switch_2==::Xml_obj::PCData)){
			HX_STACK_LINE(107)
			if (((::StringTools_obj::ltrim(child->get_nodeValue()).length != (int)0))){
				HX_STACK_LINE(108)
				return true;
			}
		}
;
	}
	HX_STACK_LINE(112)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,hasChildren,return )

::String Printer_obj::print( ::Xml xml){
	HX_STACK_FRAME("haxe.xml.Printer","print",0x4a926b5a,"haxe.xml.Printer.print","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Printer.hx",33,0xc6da548c)
	HX_STACK_ARG(xml,"xml")
	HX_STACK_LINE(34)
	::haxe::xml::Printer printer = ::haxe::xml::Printer_obj::__new();		HX_STACK_VAR(printer,"printer");
	HX_STACK_LINE(35)
	printer->writeNode(xml,HX_CSTRING(""));
	HX_STACK_LINE(36)
	return printer->output->b->join(HX_CSTRING(""));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,print,return )


Printer_obj::Printer_obj()
{
}

void Printer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Printer);
	HX_MARK_MEMBER_NAME(output,"output");
	HX_MARK_END_CLASS();
}

void Printer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(output,"output");
}

Dynamic Printer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { return print_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"output") ) { return output; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"writeNode") ) { return writeNode_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasChildren") ) { return hasChildren_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Printer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"output") ) { output=inValue.Cast< ::StringBuf >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Printer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("output"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("print"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::StringBuf*/ ,(int)offsetof(Printer_obj,output),HX_CSTRING("output")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("output"),
	HX_CSTRING("writeNode"),
	HX_CSTRING("hasChildren"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Printer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Printer_obj::__mClass,"__mClass");
};

#endif

Class Printer_obj::__mClass;

void Printer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.xml.Printer"), hx::TCanCast< Printer_obj> ,sStaticFields,sMemberFields,
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

void Printer_obj::__boot()
{
}

} // end namespace haxe
} // end namespace xml
