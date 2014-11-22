#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flixel_effects_postprocess_PostProcess
#include <flixel/effects/postprocess/PostProcess.h>
#endif
#ifndef INCLUDED_flixel_effects_postprocess_Shader
#include <flixel/effects/postprocess/Shader.h>
#endif
#ifndef INCLUDED_flixel_effects_postprocess__PostProcess_Uniform
#include <flixel/effects/postprocess/_PostProcess/Uniform.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DirectRenderer
#include <openfl/_v2/display/DirectRenderer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_MovieClip
#include <openfl/_v2/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__v2_display_OpenGLView
#include <openfl/_v2/display/OpenGLView.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Stage
#include <openfl/_v2/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GL
#include <openfl/_v2/gl/GL.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GLBuffer
#include <openfl/_v2/gl/GLBuffer.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GLFramebuffer
#include <openfl/_v2/gl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GLObject
#include <openfl/_v2/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GLProgram
#include <openfl/_v2/gl/GLProgram.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GLRenderbuffer
#include <openfl/_v2/gl/GLRenderbuffer.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GLTexture
#include <openfl/_v2/gl/GLTexture.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_ArrayBufferView
#include <openfl/_v2/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_ByteArray
#include <openfl/_v2/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_Float32Array
#include <openfl/_v2/utils/Float32Array.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataInput
#include <openfl/_v2/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataOutput
#include <openfl/_v2/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IMemoryRange
#include <openfl/_v2/utils/IMemoryRange.h>
#endif
namespace flixel{
namespace effects{
namespace postprocess{

Void PostProcess_obj::__construct(::String fragmentShader)
{
HX_STACK_FRAME("flixel.effects.postprocess.PostProcess","new",0x00edfd24,"flixel.effects.postprocess.PostProcess.new","flixel/effects/postprocess/PostProcess.hx",28,0x6a90b60f)
HX_STACK_THIS(this)
HX_STACK_ARG(fragmentShader,"fragmentShader")
{
	HX_STACK_LINE(241)
	this->time = (int)0;
	HX_STACK_LINE(238)
	this->defaultFramebuffer = null();
	HX_STACK_LINE(39)
	super::__construct();
	HX_STACK_LINE(40)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(40)
	this->uniforms = _g;
	HX_STACK_LINE(43)
	int _g1 = ::openfl::_v2::gl::GL_obj::get_version();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(43)
	Dynamic _g2 = ::openfl::_v2::gl::GL_obj::lime_gl_create_framebuffer();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(43)
	::openfl::_v2::gl::GLFramebuffer _g3 = ::openfl::_v2::gl::GLFramebuffer_obj::__new(_g1,_g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(43)
	this->framebuffer = _g3;
	HX_STACK_LINE(44)
	this->rebuild();
	HX_STACK_LINE(48)
	int status = ::openfl::_v2::gl::GL_obj::lime_gl_check_framebuffer_status((int)36160);		HX_STACK_VAR(status,"status");
	HX_STACK_LINE(50)
	switch( (int)(status)){
		case (int)36054: {
			HX_STACK_LINE(53)
			::haxe::Log_obj::trace(HX_CSTRING("FRAMEBUFFER_INCOMPLETE_ATTACHMENT"),hx::SourceInfo(HX_CSTRING("PostProcess.hx"),53,HX_CSTRING("flixel.effects.postprocess.PostProcess"),HX_CSTRING("new")));
		}
		;break;
		case (int)36061: {
			HX_STACK_LINE(55)
			::haxe::Log_obj::trace(HX_CSTRING("GL_FRAMEBUFFER_UNSUPPORTED"),hx::SourceInfo(HX_CSTRING("PostProcess.hx"),55,HX_CSTRING("flixel.effects.postprocess.PostProcess"),HX_CSTRING("new")));
		}
		;break;
		case (int)36053: {
		}
		;break;
		default: {
			HX_STACK_LINE(58)
			::haxe::Log_obj::trace((HX_CSTRING("Check frame buffer: ") + status),hx::SourceInfo(HX_CSTRING("PostProcess.hx"),58,HX_CSTRING("flixel.effects.postprocess.PostProcess"),HX_CSTRING("new")));
		}
	}
	HX_STACK_LINE(62)
	int _g4 = ::openfl::_v2::gl::GL_obj::get_version();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(62)
	Dynamic _g5 = ::openfl::_v2::gl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(62)
	::openfl::_v2::gl::GLBuffer _g6 = ::openfl::_v2::gl::GLBuffer_obj::__new(_g4,_g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(62)
	this->buffer = _g6;
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		::openfl::_v2::gl::GLBuffer buffer = this->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(63)
		::openfl::_v2::gl::GL_obj::lime_gl_bind_buffer((int)34962,(  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) ));
	}
	HX_STACK_LINE(64)
	{
		HX_STACK_LINE(64)
		::openfl::_v2::utils::IMemoryRange data = ::openfl::_v2::utils::Float32Array_obj::__new(Array_obj< Float >::__new().Add(-1.0).Add(-1.0).Add((int)0).Add((int)0).Add(1.0).Add(-1.0).Add((int)1).Add((int)0).Add(-1.0).Add(1.0).Add((int)0).Add((int)1).Add(1.0).Add(-1.0).Add((int)1).Add((int)0).Add(1.0).Add(1.0).Add((int)1).Add((int)1).Add(-1.0).Add(1.0).Add((int)0).Add((int)1),null(),null());		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(64)
		::openfl::_v2::utils::ByteArray _g7 = data->getByteBuffer();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(64)
		int _g8 = data->getStart();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(64)
		int _g9 = data->getLength();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(64)
		::openfl::_v2::gl::GL_obj::lime_gl_buffer_data((int)34962,_g7,_g8,_g9,(int)35044);
	}
	HX_STACK_LINE(65)
	::openfl::_v2::gl::GL_obj::lime_gl_bind_buffer((int)34962,null());
	HX_STACK_LINE(69)
	::String _g10 = ::openfl::_v2::Assets_obj::getText(fragmentShader);		HX_STACK_VAR(_g10,"_g10");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &_g10){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/effects/postprocess/PostProcess.hx",69,0x6a90b60f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("src") , _g10,false);
				__result->Add(HX_CSTRING("fragment") , true,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(69)
	Dynamic _g11 = _Function_1_1::Block(_g10);		HX_STACK_VAR(_g11,"_g11");
	struct _Function_1_2{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/effects/postprocess/PostProcess.hx",68,0x6a90b60f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("src") , HX_CSTRING("\n#ifdef GL_ES\n\tprecision mediump float;\n#endif\n\nattribute vec2 aVertex;\nattribute vec2 aTexCoord;\nvarying vec2 vTexCoord;\n\nvoid main() {\n\tvTexCoord = aTexCoord;\n\tgl_Position = vec4(aVertex, 0.0, 1.0);\n}"),false);
				__result->Add(HX_CSTRING("fragment") , false,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(67)
	Dynamic _g12 = Dynamic( Array_obj<Dynamic>::__new().Add(_Function_1_2::Block()).Add(_g11));		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(67)
	::flixel::effects::postprocess::Shader _g13 = ::flixel::effects::postprocess::Shader_obj::__new(_g12);		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(67)
	this->shader = _g13;
	HX_STACK_LINE(73)
	int _g14 = ::openfl::_v2::gl::GL_obj::lime_gl_get_uniform_location(this->shader->program->id,HX_CSTRING("uImage0"));		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(73)
	this->imageUniform = _g14;
	HX_STACK_LINE(74)
	int _g15 = ::openfl::_v2::gl::GL_obj::lime_gl_get_uniform_location(this->shader->program->id,HX_CSTRING("uTime"));		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(74)
	this->timeUniform = _g15;
	HX_STACK_LINE(75)
	int _g16 = ::openfl::_v2::gl::GL_obj::lime_gl_get_uniform_location(this->shader->program->id,HX_CSTRING("uResolution"));		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(75)
	this->resolutionUniform = _g16;
	HX_STACK_LINE(77)
	int _g17 = ::openfl::_v2::gl::GL_obj::lime_gl_get_attrib_location(this->shader->program->id,HX_CSTRING("aVertex"));		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(77)
	this->vertexSlot = _g17;
	HX_STACK_LINE(78)
	int _g18 = ::openfl::_v2::gl::GL_obj::lime_gl_get_attrib_location(this->shader->program->id,HX_CSTRING("aTexCoord"));		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(78)
	this->texCoordSlot = _g18;
}
;
	return null();
}

//PostProcess_obj::~PostProcess_obj() { }

Dynamic PostProcess_obj::__CreateEmpty() { return  new PostProcess_obj; }
hx::ObjectPtr< PostProcess_obj > PostProcess_obj::__new(::String fragmentShader)
{  hx::ObjectPtr< PostProcess_obj > result = new PostProcess_obj();
	result->__construct(fragmentShader);
	return result;}

Dynamic PostProcess_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PostProcess_obj > result = new PostProcess_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PostProcess_obj::setUniform( ::String uniform,Float value){
{
		HX_STACK_FRAME("flixel.effects.postprocess.PostProcess","setUniform",0x2526196e,"flixel.effects.postprocess.PostProcess.setUniform","flixel/effects/postprocess/PostProcess.hx",88,0x6a90b60f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniform,"uniform")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(88)
		if ((this->uniforms->exists(uniform))){
			HX_STACK_LINE(90)
			::flixel::effects::postprocess::_PostProcess::Uniform uniform1 = this->uniforms->get(uniform);		HX_STACK_VAR(uniform1,"uniform1");
			HX_STACK_LINE(91)
			uniform1->value = value;
		}
		else{
			HX_STACK_LINE(95)
			int id = ::openfl::_v2::gl::GL_obj::lime_gl_get_uniform_location(this->shader->program->id,uniform);		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(96)
			if (((id != (int)-1))){
				HX_STACK_LINE(98)
				::flixel::effects::postprocess::_PostProcess::Uniform value1 = ::flixel::effects::postprocess::_PostProcess::Uniform_obj::__new(id,value);		HX_STACK_VAR(value1,"value1");
				HX_STACK_LINE(98)
				this->uniforms->set(uniform,value1);
			}
			else{
				HX_STACK_LINE(102)
				HX_STACK_DO_THROW(((HX_CSTRING("Uniform with name \"") + uniform) + HX_CSTRING("\" could not be found.")));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PostProcess_obj,setUniform,(void))

::flixel::effects::postprocess::PostProcess PostProcess_obj::set_to( ::flixel::effects::postprocess::PostProcess value){
	HX_STACK_FRAME("flixel.effects.postprocess.PostProcess","set_to",0xe20f76f4,"flixel.effects.postprocess.PostProcess.set_to","flixel/effects/postprocess/PostProcess.hx",114,0x6a90b60f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(115)
	if (((value == null()))){
		HX_STACK_LINE(115)
		this->renderTo = this->defaultFramebuffer;
	}
	else{
		HX_STACK_LINE(115)
		this->renderTo = value->framebuffer;
	}
	HX_STACK_LINE(116)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(PostProcess_obj,set_to,return )

Void PostProcess_obj::rebuild( ){
{
		HX_STACK_FRAME("flixel.effects.postprocess.PostProcess","rebuild",0x732f0d5f,"flixel.effects.postprocess.PostProcess.rebuild","flixel/effects/postprocess/PostProcess.hx",123,0x6a90b60f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			::openfl::_v2::gl::GLFramebuffer framebuffer = this->framebuffer;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(124)
			::openfl::_v2::gl::GL_obj::lime_gl_bind_framebuffer((int)36160,(  (((framebuffer == null()))) ? Dynamic(null()) : Dynamic(framebuffer->id) ));
		}
		HX_STACK_LINE(126)
		if (((this->texture != null()))){
			HX_STACK_LINE(126)
			::openfl::_v2::gl::GLTexture texture = this->texture;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(126)
			::openfl::_v2::gl::GL_obj::lime_gl_delete_texture(texture->id);
			HX_STACK_LINE(126)
			texture->invalidate();
		}
		HX_STACK_LINE(127)
		if (((this->renderbuffer != null()))){
			HX_STACK_LINE(127)
			::openfl::_v2::gl::GL_obj::deleteRenderbuffer(this->renderbuffer);
		}
		HX_STACK_LINE(129)
		int _g = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(129)
		this->screenWidth = _g;
		HX_STACK_LINE(130)
		int _g1 = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(130)
		this->screenHeight = _g1;
		HX_STACK_LINE(131)
		{
			HX_STACK_LINE(131)
			int _g2 = ::openfl::_v2::gl::GL_obj::get_version();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(131)
			Dynamic _g3 = ::openfl::_v2::gl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(131)
			::openfl::_v2::gl::GLTexture _g4 = ::openfl::_v2::gl::GLTexture_obj::__new(_g2,_g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(131)
			this->texture = _g4;
			HX_STACK_LINE(131)
			{
				HX_STACK_LINE(131)
				::openfl::_v2::gl::GLTexture texture = this->texture;		HX_STACK_VAR(texture,"texture");
				HX_STACK_LINE(131)
				::openfl::_v2::gl::GL_obj::lime_gl_bind_texture((int)3553,(  (((texture == null()))) ? Dynamic(null()) : Dynamic(texture->id) ));
			}
			HX_STACK_LINE(131)
			{
				HX_STACK_LINE(131)
				::openfl::_v2::utils::ByteArray _g5 = null();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(131)
				Dynamic _g6 = null();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(131)
				::openfl::_v2::gl::GL_obj::lime_gl_tex_image_2d((int)3553,(int)0,(int)6407,this->screenWidth,this->screenHeight,(int)0,(int)6407,(int)5121,_g5,_g6);
			}
			HX_STACK_LINE(131)
			::openfl::_v2::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)33071);
			HX_STACK_LINE(131)
			::openfl::_v2::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)33071);
			HX_STACK_LINE(131)
			::openfl::_v2::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9729);
			HX_STACK_LINE(131)
			::openfl::_v2::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9729);
			HX_STACK_LINE(131)
			::openfl::_v2::gl::GL_obj::lime_gl_framebuffer_texture2D((int)36160,(int)36064,(int)3553,this->texture->id,(int)0);
		}
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			int _g7 = ::openfl::_v2::gl::GL_obj::get_version();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(132)
			Dynamic _g8 = ::openfl::_v2::gl::GL_obj::lime_gl_create_render_buffer();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(132)
			::openfl::_v2::gl::GLRenderbuffer _g9 = ::openfl::_v2::gl::GLRenderbuffer_obj::__new(_g7,_g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(132)
			this->renderbuffer = _g9;
			HX_STACK_LINE(132)
			{
				HX_STACK_LINE(132)
				::openfl::_v2::gl::GLRenderbuffer renderbuffer = this->renderbuffer;		HX_STACK_VAR(renderbuffer,"renderbuffer");
				HX_STACK_LINE(132)
				::openfl::_v2::gl::GL_obj::lime_gl_bind_renderbuffer((int)36161,(  (((renderbuffer == null()))) ? Dynamic(null()) : Dynamic(renderbuffer->id) ));
			}
			HX_STACK_LINE(132)
			::openfl::_v2::gl::GL_obj::lime_gl_renderbuffer_storage((int)36161,(int)33189,this->screenWidth,this->screenHeight);
			HX_STACK_LINE(132)
			::openfl::_v2::gl::GL_obj::lime_gl_framebuffer_renderbuffer((int)36160,(int)36096,(int)36161,this->renderbuffer->id);
		}
		HX_STACK_LINE(134)
		::openfl::_v2::gl::GL_obj::lime_gl_bind_framebuffer((int)36160,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PostProcess_obj,rebuild,(void))

Void PostProcess_obj::createRenderbuffer( int width,int height){
{
		HX_STACK_FRAME("flixel.effects.postprocess.PostProcess","createRenderbuffer",0x8a0b59ae,"flixel.effects.postprocess.PostProcess.createRenderbuffer","flixel/effects/postprocess/PostProcess.hx",138,0x6a90b60f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(140)
		int _g = ::openfl::_v2::gl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(140)
		Dynamic _g1 = ::openfl::_v2::gl::GL_obj::lime_gl_create_render_buffer();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(140)
		::openfl::_v2::gl::GLRenderbuffer _g2 = ::openfl::_v2::gl::GLRenderbuffer_obj::__new(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(140)
		this->renderbuffer = _g2;
		HX_STACK_LINE(142)
		{
			HX_STACK_LINE(142)
			::openfl::_v2::gl::GLRenderbuffer renderbuffer = this->renderbuffer;		HX_STACK_VAR(renderbuffer,"renderbuffer");
			HX_STACK_LINE(142)
			::openfl::_v2::gl::GL_obj::lime_gl_bind_renderbuffer((int)36161,(  (((renderbuffer == null()))) ? Dynamic(null()) : Dynamic(renderbuffer->id) ));
		}
		HX_STACK_LINE(143)
		::openfl::_v2::gl::GL_obj::lime_gl_renderbuffer_storage((int)36161,(int)33189,width,height);
		HX_STACK_LINE(146)
		::openfl::_v2::gl::GL_obj::lime_gl_framebuffer_renderbuffer((int)36160,(int)36096,(int)36161,this->renderbuffer->id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PostProcess_obj,createRenderbuffer,(void))

Void PostProcess_obj::createTexture( int width,int height){
{
		HX_STACK_FRAME("flixel.effects.postprocess.PostProcess","createTexture",0xf0f6eb03,"flixel.effects.postprocess.PostProcess.createTexture","flixel/effects/postprocess/PostProcess.hx",150,0x6a90b60f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(151)
		int _g = ::openfl::_v2::gl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(151)
		Dynamic _g1 = ::openfl::_v2::gl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(151)
		::openfl::_v2::gl::GLTexture _g2 = ::openfl::_v2::gl::GLTexture_obj::__new(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(151)
		this->texture = _g2;
		HX_STACK_LINE(153)
		{
			HX_STACK_LINE(153)
			::openfl::_v2::gl::GLTexture texture = this->texture;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(153)
			::openfl::_v2::gl::GL_obj::lime_gl_bind_texture((int)3553,(  (((texture == null()))) ? Dynamic(null()) : Dynamic(texture->id) ));
		}
		HX_STACK_LINE(154)
		{
			HX_STACK_LINE(154)
			::openfl::_v2::utils::ByteArray _g3 = null();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(154)
			Dynamic _g4 = null();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(154)
			::openfl::_v2::gl::GL_obj::lime_gl_tex_image_2d((int)3553,(int)0,(int)6407,width,height,(int)0,(int)6407,(int)5121,_g3,_g4);
		}
		HX_STACK_LINE(156)
		::openfl::_v2::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)33071);
		HX_STACK_LINE(157)
		::openfl::_v2::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)33071);
		HX_STACK_LINE(158)
		::openfl::_v2::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9729);
		HX_STACK_LINE(159)
		::openfl::_v2::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9729);
		HX_STACK_LINE(162)
		::openfl::_v2::gl::GL_obj::lime_gl_framebuffer_texture2D((int)36160,(int)36064,(int)3553,this->texture->id,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PostProcess_obj,createTexture,(void))

Void PostProcess_obj::capture( ){
{
		HX_STACK_FRAME("flixel.effects.postprocess.PostProcess","capture",0x78fbaf4a,"flixel.effects.postprocess.PostProcess.capture","flixel/effects/postprocess/PostProcess.hx",169,0x6a90b60f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(170)
		{
			HX_STACK_LINE(170)
			::openfl::_v2::gl::GLFramebuffer framebuffer = this->framebuffer;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(170)
			::openfl::_v2::gl::GL_obj::lime_gl_bind_framebuffer((int)36160,(  (((framebuffer == null()))) ? Dynamic(null()) : Dynamic(framebuffer->id) ));
		}
		HX_STACK_LINE(171)
		::openfl::_v2::gl::GL_obj::lime_gl_clear((int)16640);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PostProcess_obj,capture,(void))

Void PostProcess_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.effects.postprocess.PostProcess","update",0xf99cabc5,"flixel.effects.postprocess.PostProcess.update","flixel/effects/postprocess/PostProcess.hx",176,0x6a90b60f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(176)
		hx::AddEq(this->time,elapsed);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PostProcess_obj,update,(void))

HX_BEGIN_DEFAULT_FUNC(__default_render,PostProcess_obj)
Void run(::openfl::_v2::geom::Rectangle rect){
{
		HX_STACK_FRAME("flixel.effects.postprocess.PostProcess","render",0x77c09112,"flixel.effects.postprocess.PostProcess.render","flixel/effects/postprocess/PostProcess.hx",184,0x6a90b60f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_LINE(185)
		{
			HX_STACK_LINE(185)
			::openfl::_v2::gl::GLFramebuffer framebuffer = __this->renderTo;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(185)
			::openfl::_v2::gl::GL_obj::lime_gl_bind_framebuffer((int)36160,(  (((framebuffer == null()))) ? Dynamic(null()) : Dynamic(framebuffer->id) ));
		}
		HX_STACK_LINE(186)
		::openfl::_v2::gl::GL_obj::lime_gl_viewport((int)0,(int)0,__this->screenWidth,__this->screenHeight);
		HX_STACK_LINE(188)
		{
			HX_STACK_LINE(188)
			::openfl::_v2::gl::GLProgram program = __this->shader->program;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(188)
			::openfl::_v2::gl::GL_obj::lime_gl_use_program((  (((program == null()))) ? Dynamic(null()) : Dynamic(program->id) ));
		}
		HX_STACK_LINE(190)
		::openfl::_v2::gl::GL_obj::lime_gl_enable_vertex_attrib_array(__this->vertexSlot);
		HX_STACK_LINE(191)
		::openfl::_v2::gl::GL_obj::lime_gl_enable_vertex_attrib_array(__this->texCoordSlot);
		HX_STACK_LINE(193)
		::openfl::_v2::gl::GL_obj::lime_gl_active_texture((int)33984);
		HX_STACK_LINE(194)
		{
			HX_STACK_LINE(194)
			::openfl::_v2::gl::GLTexture texture = __this->texture;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(194)
			::openfl::_v2::gl::GL_obj::lime_gl_bind_texture((int)3553,(  (((texture == null()))) ? Dynamic(null()) : Dynamic(texture->id) ));
		}
		HX_STACK_LINE(195)
		::openfl::_v2::gl::GL_obj::lime_gl_enable((int)3553);
		HX_STACK_LINE(197)
		{
			HX_STACK_LINE(197)
			::openfl::_v2::gl::GLBuffer buffer = __this->buffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(197)
			::openfl::_v2::gl::GL_obj::lime_gl_bind_buffer((int)34962,(  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) ));
		}
		HX_STACK_LINE(198)
		::openfl::_v2::gl::GL_obj::lime_gl_vertex_attrib_pointer(__this->vertexSlot,(int)2,(int)5126,false,(int)16,(int)0);
		HX_STACK_LINE(199)
		::openfl::_v2::gl::GL_obj::lime_gl_vertex_attrib_pointer(__this->texCoordSlot,(int)2,(int)5126,false,(int)16,(int)8);
		HX_STACK_LINE(201)
		::openfl::_v2::gl::GL_obj::lime_gl_uniform1i(__this->imageUniform,(int)0);
		HX_STACK_LINE(202)
		::openfl::_v2::gl::GL_obj::lime_gl_uniform1f(__this->timeUniform,__this->time);
		HX_STACK_LINE(203)
		::openfl::_v2::gl::GL_obj::lime_gl_uniform2f(__this->resolutionUniform,__this->screenWidth,__this->screenHeight);
		HX_STACK_LINE(205)
		for(::cpp::FastIterator_obj< ::flixel::effects::postprocess::_PostProcess::Uniform > *__it = ::cpp::CreateFastIterator< ::flixel::effects::postprocess::_PostProcess::Uniform >(__this->uniforms->iterator());  __it->hasNext(); ){
			::flixel::effects::postprocess::_PostProcess::Uniform u = __it->next();
			::openfl::_v2::gl::GL_obj::lime_gl_uniform1f(u->id,u->value);
		}
		HX_STACK_LINE(210)
		::openfl::_v2::gl::GL_obj::lime_gl_draw_arrays((int)4,(int)0,(int)6);
		HX_STACK_LINE(212)
		::openfl::_v2::gl::GL_obj::lime_gl_bind_buffer((int)34962,null());
		HX_STACK_LINE(213)
		::openfl::_v2::gl::GL_obj::lime_gl_disable((int)3553);
		HX_STACK_LINE(214)
		::openfl::_v2::gl::GL_obj::lime_gl_bind_texture((int)3553,null());
		HX_STACK_LINE(216)
		::openfl::_v2::gl::GL_obj::lime_gl_disable_vertex_attrib_array(__this->vertexSlot);
		HX_STACK_LINE(217)
		::openfl::_v2::gl::GL_obj::lime_gl_disable_vertex_attrib_array(__this->texCoordSlot);
		HX_STACK_LINE(219)
		::openfl::_v2::gl::GL_obj::lime_gl_use_program(null());
		HX_STACK_LINE(221)
		::openfl::_v2::gl::GL_obj::lime_gl_bind_framebuffer((int)36160,null());
		HX_STACK_LINE(224)
		int _g = ::openfl::_v2::gl::GL_obj::lime_gl_get_error();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(224)
		if (((_g == (int)1286))){
			HX_STACK_LINE(226)
			::haxe::Log_obj::trace(HX_CSTRING("INVALID_FRAMEBUFFER_OPERATION!!"),hx::SourceInfo(HX_CSTRING("PostProcess.hx"),226,HX_CSTRING("flixel.effects.postprocess.PostProcess"),HX_CSTRING("render")));
		}
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

::String PostProcess_obj::vertexShader;

Array< Float > PostProcess_obj::get_vertices( ){
	HX_STACK_FRAME("flixel.effects.postprocess.PostProcess","get_vertices",0x40f38ebe,"flixel.effects.postprocess.PostProcess.get_vertices","flixel/effects/postprocess/PostProcess.hx",268,0x6a90b60f)
	HX_STACK_LINE(268)
	return Array_obj< Float >::__new().Add(-1.0).Add(-1.0).Add((int)0).Add((int)0).Add(1.0).Add(-1.0).Add((int)1).Add((int)0).Add(-1.0).Add(1.0).Add((int)0).Add((int)1).Add(1.0).Add(-1.0).Add((int)1).Add((int)0).Add(1.0).Add(1.0).Add((int)1).Add((int)1).Add(-1.0).Add(1.0).Add((int)0).Add((int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PostProcess_obj,get_vertices,return )


PostProcess_obj::PostProcess_obj()
{
	render = new __default_render(this);
}

void PostProcess_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PostProcess);
	HX_MARK_MEMBER_NAME(screenWidth,"screenWidth");
	HX_MARK_MEMBER_NAME(screenHeight,"screenHeight");
	HX_MARK_MEMBER_NAME(render,"render");
	HX_MARK_MEMBER_NAME(framebuffer,"framebuffer");
	HX_MARK_MEMBER_NAME(renderbuffer,"renderbuffer");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(renderTo,"renderTo");
	HX_MARK_MEMBER_NAME(defaultFramebuffer,"defaultFramebuffer");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(vertexSlot,"vertexSlot");
	HX_MARK_MEMBER_NAME(texCoordSlot,"texCoordSlot");
	HX_MARK_MEMBER_NAME(imageUniform,"imageUniform");
	HX_MARK_MEMBER_NAME(resolutionUniform,"resolutionUniform");
	HX_MARK_MEMBER_NAME(timeUniform,"timeUniform");
	HX_MARK_MEMBER_NAME(uniforms,"uniforms");
	::openfl::_v2::display::DirectRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PostProcess_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(screenWidth,"screenWidth");
	HX_VISIT_MEMBER_NAME(screenHeight,"screenHeight");
	HX_VISIT_MEMBER_NAME(render,"render");
	HX_VISIT_MEMBER_NAME(framebuffer,"framebuffer");
	HX_VISIT_MEMBER_NAME(renderbuffer,"renderbuffer");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(renderTo,"renderTo");
	HX_VISIT_MEMBER_NAME(defaultFramebuffer,"defaultFramebuffer");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(vertexSlot,"vertexSlot");
	HX_VISIT_MEMBER_NAME(texCoordSlot,"texCoordSlot");
	HX_VISIT_MEMBER_NAME(imageUniform,"imageUniform");
	HX_VISIT_MEMBER_NAME(resolutionUniform,"resolutionUniform");
	HX_VISIT_MEMBER_NAME(timeUniform,"timeUniform");
	HX_VISIT_MEMBER_NAME(uniforms,"uniforms");
	::openfl::_v2::display::DirectRenderer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PostProcess_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"set_to") ) { return set_to_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render; }
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rebuild") ) { return rebuild_dyn(); }
		if (HX_FIELD_EQ(inName,"capture") ) { return capture_dyn(); }
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { return get_vertices(); }
		if (HX_FIELD_EQ(inName,"renderTo") ) { return renderTo; }
		if (HX_FIELD_EQ(inName,"uniforms") ) { return uniforms; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setUniform") ) { return setUniform_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexSlot") ) { return vertexSlot; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"screenWidth") ) { return screenWidth; }
		if (HX_FIELD_EQ(inName,"framebuffer") ) { return framebuffer; }
		if (HX_FIELD_EQ(inName,"timeUniform") ) { return timeUniform; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_vertices") ) { return get_vertices_dyn(); }
		if (HX_FIELD_EQ(inName,"screenHeight") ) { return screenHeight; }
		if (HX_FIELD_EQ(inName,"renderbuffer") ) { return renderbuffer; }
		if (HX_FIELD_EQ(inName,"texCoordSlot") ) { return texCoordSlot; }
		if (HX_FIELD_EQ(inName,"imageUniform") ) { return imageUniform; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createTexture") ) { return createTexture_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resolutionUniform") ) { return resolutionUniform; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createRenderbuffer") ) { return createRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"defaultFramebuffer") ) { return defaultFramebuffer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PostProcess_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"to") ) { return set_to(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { render=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast< ::flixel::effects::postprocess::Shader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::openfl::_v2::gl::GLBuffer >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::openfl::_v2::gl::GLTexture >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderTo") ) { renderTo=inValue.Cast< ::openfl::_v2::gl::GLFramebuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uniforms") ) { uniforms=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"vertexSlot") ) { vertexSlot=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"screenWidth") ) { screenWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framebuffer") ) { framebuffer=inValue.Cast< ::openfl::_v2::gl::GLFramebuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeUniform") ) { timeUniform=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenHeight") ) { screenHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderbuffer") ) { renderbuffer=inValue.Cast< ::openfl::_v2::gl::GLRenderbuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texCoordSlot") ) { texCoordSlot=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imageUniform") ) { imageUniform=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resolutionUniform") ) { resolutionUniform=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"defaultFramebuffer") ) { defaultFramebuffer=inValue.Cast< ::openfl::_v2::gl::GLFramebuffer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PostProcess_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("screenWidth"));
	outFields->push(HX_CSTRING("screenHeight"));
	outFields->push(HX_CSTRING("to"));
	outFields->push(HX_CSTRING("framebuffer"));
	outFields->push(HX_CSTRING("renderbuffer"));
	outFields->push(HX_CSTRING("texture"));
	outFields->push(HX_CSTRING("shader"));
	outFields->push(HX_CSTRING("buffer"));
	outFields->push(HX_CSTRING("renderTo"));
	outFields->push(HX_CSTRING("defaultFramebuffer"));
	outFields->push(HX_CSTRING("time"));
	outFields->push(HX_CSTRING("vertexSlot"));
	outFields->push(HX_CSTRING("texCoordSlot"));
	outFields->push(HX_CSTRING("imageUniform"));
	outFields->push(HX_CSTRING("resolutionUniform"));
	outFields->push(HX_CSTRING("timeUniform"));
	outFields->push(HX_CSTRING("uniforms"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("vertexShader"),
	HX_CSTRING("get_vertices"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(PostProcess_obj,screenWidth),HX_CSTRING("screenWidth")},
	{hx::fsInt,(int)offsetof(PostProcess_obj,screenHeight),HX_CSTRING("screenHeight")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(PostProcess_obj,render),HX_CSTRING("render")},
	{hx::fsObject /*::openfl::_v2::gl::GLFramebuffer*/ ,(int)offsetof(PostProcess_obj,framebuffer),HX_CSTRING("framebuffer")},
	{hx::fsObject /*::openfl::_v2::gl::GLRenderbuffer*/ ,(int)offsetof(PostProcess_obj,renderbuffer),HX_CSTRING("renderbuffer")},
	{hx::fsObject /*::openfl::_v2::gl::GLTexture*/ ,(int)offsetof(PostProcess_obj,texture),HX_CSTRING("texture")},
	{hx::fsObject /*::flixel::effects::postprocess::Shader*/ ,(int)offsetof(PostProcess_obj,shader),HX_CSTRING("shader")},
	{hx::fsObject /*::openfl::_v2::gl::GLBuffer*/ ,(int)offsetof(PostProcess_obj,buffer),HX_CSTRING("buffer")},
	{hx::fsObject /*::openfl::_v2::gl::GLFramebuffer*/ ,(int)offsetof(PostProcess_obj,renderTo),HX_CSTRING("renderTo")},
	{hx::fsObject /*::openfl::_v2::gl::GLFramebuffer*/ ,(int)offsetof(PostProcess_obj,defaultFramebuffer),HX_CSTRING("defaultFramebuffer")},
	{hx::fsFloat,(int)offsetof(PostProcess_obj,time),HX_CSTRING("time")},
	{hx::fsInt,(int)offsetof(PostProcess_obj,vertexSlot),HX_CSTRING("vertexSlot")},
	{hx::fsInt,(int)offsetof(PostProcess_obj,texCoordSlot),HX_CSTRING("texCoordSlot")},
	{hx::fsInt,(int)offsetof(PostProcess_obj,imageUniform),HX_CSTRING("imageUniform")},
	{hx::fsInt,(int)offsetof(PostProcess_obj,resolutionUniform),HX_CSTRING("resolutionUniform")},
	{hx::fsInt,(int)offsetof(PostProcess_obj,timeUniform),HX_CSTRING("timeUniform")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(PostProcess_obj,uniforms),HX_CSTRING("uniforms")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("screenWidth"),
	HX_CSTRING("screenHeight"),
	HX_CSTRING("setUniform"),
	HX_CSTRING("set_to"),
	HX_CSTRING("rebuild"),
	HX_CSTRING("createRenderbuffer"),
	HX_CSTRING("createTexture"),
	HX_CSTRING("capture"),
	HX_CSTRING("update"),
	HX_CSTRING("render"),
	HX_CSTRING("framebuffer"),
	HX_CSTRING("renderbuffer"),
	HX_CSTRING("texture"),
	HX_CSTRING("shader"),
	HX_CSTRING("buffer"),
	HX_CSTRING("renderTo"),
	HX_CSTRING("defaultFramebuffer"),
	HX_CSTRING("time"),
	HX_CSTRING("vertexSlot"),
	HX_CSTRING("texCoordSlot"),
	HX_CSTRING("imageUniform"),
	HX_CSTRING("resolutionUniform"),
	HX_CSTRING("timeUniform"),
	HX_CSTRING("uniforms"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PostProcess_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PostProcess_obj::vertexShader,"vertexShader");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PostProcess_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PostProcess_obj::vertexShader,"vertexShader");
};

#endif

Class PostProcess_obj::__mClass;

void PostProcess_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.effects.postprocess.PostProcess"), hx::TCanCast< PostProcess_obj> ,sStaticFields,sMemberFields,
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

void PostProcess_obj::__boot()
{
	vertexShader= HX_CSTRING("\n#ifdef GL_ES\n\tprecision mediump float;\n#endif\n\nattribute vec2 aVertex;\nattribute vec2 aTexCoord;\nvarying vec2 vTexCoord;\n\nvoid main() {\n\tvTexCoord = aTexCoord;\n\tgl_Position = vec4(aVertex, 0.0, 1.0);\n}");
}

} // end namespace flixel
} // end namespace effects
} // end namespace postprocess
