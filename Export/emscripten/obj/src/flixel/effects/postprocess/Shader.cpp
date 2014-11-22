#include <hxcpp.h>

#ifndef INCLUDED_flixel_effects_postprocess_Shader
#include <flixel/effects/postprocess/Shader.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GL
#include <openfl/_v2/gl/GL.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GLObject
#include <openfl/_v2/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GLProgram
#include <openfl/_v2/gl/GLProgram.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GLShader
#include <openfl/_v2/gl/GLShader.h>
#endif
namespace flixel{
namespace effects{
namespace postprocess{

Void Shader_obj::__construct(Dynamic sources)
{
HX_STACK_FRAME("flixel.effects.postprocess.Shader","new",0x5a1426b4,"flixel.effects.postprocess.Shader.new","flixel/effects/postprocess/Shader.hx",18,0x282d2ed9)
HX_STACK_THIS(this)
HX_STACK_ARG(sources,"sources")
{
	HX_STACK_LINE(19)
	int _g = ::openfl::_v2::gl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(19)
	Dynamic _g1 = ::openfl::_v2::gl::GL_obj::lime_gl_create_program();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(19)
	::openfl::_v2::gl::GLProgram _g2 = ::openfl::_v2::gl::GLProgram_obj::__new(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(19)
	this->program = _g2;
	HX_STACK_LINE(21)
	{
		HX_STACK_LINE(21)
		int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(21)
		while((true)){
			HX_STACK_LINE(21)
			if ((!(((_g3 < sources->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(21)
				break;
			}
			HX_STACK_LINE(21)
			Dynamic source = sources->__GetItem(_g3);		HX_STACK_VAR(source,"source");
			HX_STACK_LINE(21)
			++(_g3);
			HX_STACK_LINE(23)
			::openfl::_v2::gl::GLShader shader = this->compile(source->__Field(HX_CSTRING("src"),true),(  ((source->__Field(HX_CSTRING("fragment"),true))) ? int((int)35632) : int((int)35633) ));		HX_STACK_VAR(shader,"shader");
			HX_STACK_LINE(24)
			if (((shader == null()))){
				HX_STACK_LINE(24)
				return null();
			}
			HX_STACK_LINE(25)
			{
				HX_STACK_LINE(25)
				::openfl::_v2::gl::GLProgram program = this->program;		HX_STACK_VAR(program,"program");
				HX_STACK_LINE(25)
				program->attach(shader);
				HX_STACK_LINE(25)
				::openfl::_v2::gl::GL_obj::lime_gl_attach_shader(program->id,shader->id);
			}
			HX_STACK_LINE(26)
			{
				HX_STACK_LINE(26)
				::openfl::_v2::gl::GL_obj::lime_gl_delete_shader(shader->id);
				HX_STACK_LINE(26)
				shader->invalidate();
			}
		}
	}
	HX_STACK_LINE(29)
	::openfl::_v2::gl::GL_obj::lime_gl_link_program(this->program->id);
	HX_STACK_LINE(31)
	int _g3 = ::openfl::_v2::gl::GL_obj::lime_gl_get_program_parameter(this->program->id,(int)35714);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(31)
	if (((_g3 == (int)0))){
		HX_STACK_LINE(33)
		::String _g4 = ::openfl::_v2::gl::GL_obj::lime_gl_get_program_info_log(this->program->id);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(33)
		::haxe::Log_obj::trace(_g4,hx::SourceInfo(HX_CSTRING("Shader.hx"),33,HX_CSTRING("flixel.effects.postprocess.Shader"),HX_CSTRING("new")));
		HX_STACK_LINE(34)
		int _g5 = ::openfl::_v2::gl::GL_obj::lime_gl_get_program_parameter(this->program->id,(int)35715);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(34)
		::String _g6 = (HX_CSTRING("VALIDATE_STATUS: ") + _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(34)
		::haxe::Log_obj::trace(_g6,hx::SourceInfo(HX_CSTRING("Shader.hx"),34,HX_CSTRING("flixel.effects.postprocess.Shader"),HX_CSTRING("new")));
		HX_STACK_LINE(35)
		int _g7 = ::openfl::_v2::gl::GL_obj::lime_gl_get_error();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(35)
		::String _g8 = (HX_CSTRING("ERROR: ") + _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(35)
		::haxe::Log_obj::trace(_g8,hx::SourceInfo(HX_CSTRING("Shader.hx"),35,HX_CSTRING("flixel.effects.postprocess.Shader"),HX_CSTRING("new")));
		HX_STACK_LINE(36)
		return null();
	}
}
;
	return null();
}

//Shader_obj::~Shader_obj() { }

Dynamic Shader_obj::__CreateEmpty() { return  new Shader_obj; }
hx::ObjectPtr< Shader_obj > Shader_obj::__new(Dynamic sources)
{  hx::ObjectPtr< Shader_obj > result = new Shader_obj();
	result->__construct(sources);
	return result;}

Dynamic Shader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Shader_obj > result = new Shader_obj();
	result->__construct(inArgs[0]);
	return result;}

::openfl::_v2::gl::GLShader Shader_obj::compile( ::String source,int type){
	HX_STACK_FRAME("flixel.effects.postprocess.Shader","compile",0x90bb35c7,"flixel.effects.postprocess.Shader.compile","flixel/effects/postprocess/Shader.hx",46,0x282d2ed9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(47)
	int _g = ::openfl::_v2::gl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(47)
	Dynamic _g1 = ::openfl::_v2::gl::GL_obj::lime_gl_create_shader(type);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(47)
	::openfl::_v2::gl::GLShader shader = ::openfl::_v2::gl::GLShader_obj::__new(_g,_g1);		HX_STACK_VAR(shader,"shader");
	HX_STACK_LINE(48)
	::openfl::_v2::gl::GL_obj::lime_gl_shader_source(shader->id,source);
	HX_STACK_LINE(49)
	::openfl::_v2::gl::GL_obj::lime_gl_compile_shader(shader->id);
	HX_STACK_LINE(51)
	int _g2 = ::openfl::_v2::gl::GL_obj::lime_gl_get_shader_parameter(shader->id,(int)35713);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(51)
	if (((_g2 == (int)0))){
		HX_STACK_LINE(53)
		::String _g3 = ::openfl::_v2::gl::GL_obj::lime_gl_get_shader_info_log(shader->id);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(53)
		::haxe::Log_obj::trace(_g3,hx::SourceInfo(HX_CSTRING("Shader.hx"),53,HX_CSTRING("flixel.effects.postprocess.Shader"),HX_CSTRING("compile")));
		HX_STACK_LINE(54)
		return null();
	}
	HX_STACK_LINE(57)
	return shader;
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,compile,return )

int Shader_obj::attribute( ::String a){
	HX_STACK_FRAME("flixel.effects.postprocess.Shader","attribute",0xffa03d70,"flixel.effects.postprocess.Shader.attribute","flixel/effects/postprocess/Shader.hx",66,0x282d2ed9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(66)
	return ::openfl::_v2::gl::GL_obj::lime_gl_get_attrib_location(this->program->id,a);
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,attribute,return )

int Shader_obj::uniform( ::String u){
	HX_STACK_FRAME("flixel.effects.postprocess.Shader","uniform",0xc2b05188,"flixel.effects.postprocess.Shader.uniform","flixel/effects/postprocess/Shader.hx",75,0x282d2ed9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(u,"u")
	HX_STACK_LINE(75)
	return ::openfl::_v2::gl::GL_obj::lime_gl_get_uniform_location(this->program->id,u);
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,uniform,return )

Void Shader_obj::bind( ){
{
		HX_STACK_FRAME("flixel.effects.postprocess.Shader","bind",0x6fa228e9,"flixel.effects.postprocess.Shader.bind","flixel/effects/postprocess/Shader.hx",83,0x282d2ed9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(83)
		::openfl::_v2::gl::GLProgram program = this->program;		HX_STACK_VAR(program,"program");
		HX_STACK_LINE(83)
		::openfl::_v2::gl::GL_obj::lime_gl_use_program((  (((program == null()))) ? Dynamic(null()) : Dynamic(program->id) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,bind,(void))


Shader_obj::Shader_obj()
{
}

void Shader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shader);
	HX_MARK_MEMBER_NAME(program,"program");
	HX_MARK_END_CLASS();
}

void Shader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(program,"program");
}

Dynamic Shader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bind") ) { return bind_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { return program; }
		if (HX_FIELD_EQ(inName,"compile") ) { return compile_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform") ) { return uniform_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"attribute") ) { return attribute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Shader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { program=inValue.Cast< ::openfl::_v2::gl::GLProgram >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Shader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("program"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::gl::GLProgram*/ ,(int)offsetof(Shader_obj,program),HX_CSTRING("program")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("program"),
	HX_CSTRING("compile"),
	HX_CSTRING("attribute"),
	HX_CSTRING("uniform"),
	HX_CSTRING("bind"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
};

#endif

Class Shader_obj::__mClass;

void Shader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.effects.postprocess.Shader"), hx::TCanCast< Shader_obj> ,sStaticFields,sMemberFields,
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

void Shader_obj::__boot()
{
}

} // end namespace flixel
} // end namespace effects
} // end namespace postprocess
