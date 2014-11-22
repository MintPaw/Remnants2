#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Orientation3D
#include <openfl/geom/Orientation3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif
namespace openfl{
namespace geom{

Void Matrix3D_obj::__construct(Array< Float > v)
{
HX_STACK_FRAME("openfl.geom.Matrix3D","new",0xe0591fd8,"openfl.geom.Matrix3D.new","openfl/geom/Matrix3D.hx",20,0x3acce238)
HX_STACK_THIS(this)
HX_STACK_ARG(v,"v")
{
	HX_STACK_LINE(20)
	if (((bool((v != null())) && bool((v->length == (int)16))))){
		HX_STACK_LINE(22)
		this->rawData = v;
	}
	else{
		HX_STACK_LINE(26)
		this->rawData = Array_obj< Float >::__new().Add(1.0).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(1.0).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(1.0).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(1.0);
	}
}
;
	return null();
}

//Matrix3D_obj::~Matrix3D_obj() { }

Dynamic Matrix3D_obj::__CreateEmpty() { return  new Matrix3D_obj; }
hx::ObjectPtr< Matrix3D_obj > Matrix3D_obj::__new(Array< Float > v)
{  hx::ObjectPtr< Matrix3D_obj > result = new Matrix3D_obj();
	result->__construct(v);
	return result;}

Dynamic Matrix3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix3D_obj > result = new Matrix3D_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Matrix3D_obj::append( ::openfl::geom::Matrix3D lhs){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","append",0x481b8d62,"openfl.geom.Matrix3D.append","openfl/geom/Matrix3D.hx",33,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lhs,"lhs")
		HX_STACK_LINE(35)
		Float m111 = this->rawData->__get((int)0);		HX_STACK_VAR(m111,"m111");
		HX_STACK_LINE(35)
		Float m121 = this->rawData->__get((int)4);		HX_STACK_VAR(m121,"m121");
		HX_STACK_LINE(35)
		Float m131 = this->rawData->__get((int)8);		HX_STACK_VAR(m131,"m131");
		HX_STACK_LINE(35)
		Float m141 = this->rawData->__get((int)12);		HX_STACK_VAR(m141,"m141");
		HX_STACK_LINE(36)
		Float m112 = this->rawData->__get((int)1);		HX_STACK_VAR(m112,"m112");
		HX_STACK_LINE(36)
		Float m122 = this->rawData->__get((int)5);		HX_STACK_VAR(m122,"m122");
		HX_STACK_LINE(36)
		Float m132 = this->rawData->__get((int)9);		HX_STACK_VAR(m132,"m132");
		HX_STACK_LINE(36)
		Float m142 = this->rawData->__get((int)13);		HX_STACK_VAR(m142,"m142");
		HX_STACK_LINE(37)
		Float m113 = this->rawData->__get((int)2);		HX_STACK_VAR(m113,"m113");
		HX_STACK_LINE(37)
		Float m123 = this->rawData->__get((int)6);		HX_STACK_VAR(m123,"m123");
		HX_STACK_LINE(37)
		Float m133 = this->rawData->__get((int)10);		HX_STACK_VAR(m133,"m133");
		HX_STACK_LINE(37)
		Float m143 = this->rawData->__get((int)14);		HX_STACK_VAR(m143,"m143");
		HX_STACK_LINE(38)
		Float m114 = this->rawData->__get((int)3);		HX_STACK_VAR(m114,"m114");
		HX_STACK_LINE(38)
		Float m124 = this->rawData->__get((int)7);		HX_STACK_VAR(m124,"m124");
		HX_STACK_LINE(38)
		Float m134 = this->rawData->__get((int)11);		HX_STACK_VAR(m134,"m134");
		HX_STACK_LINE(38)
		Float m144 = this->rawData->__get((int)15);		HX_STACK_VAR(m144,"m144");
		HX_STACK_LINE(39)
		Float m211 = lhs->rawData->__get((int)0);		HX_STACK_VAR(m211,"m211");
		HX_STACK_LINE(39)
		Float m221 = lhs->rawData->__get((int)4);		HX_STACK_VAR(m221,"m221");
		HX_STACK_LINE(39)
		Float m231 = lhs->rawData->__get((int)8);		HX_STACK_VAR(m231,"m231");
		HX_STACK_LINE(39)
		Float m241 = lhs->rawData->__get((int)12);		HX_STACK_VAR(m241,"m241");
		HX_STACK_LINE(40)
		Float m212 = lhs->rawData->__get((int)1);		HX_STACK_VAR(m212,"m212");
		HX_STACK_LINE(40)
		Float m222 = lhs->rawData->__get((int)5);		HX_STACK_VAR(m222,"m222");
		HX_STACK_LINE(40)
		Float m232 = lhs->rawData->__get((int)9);		HX_STACK_VAR(m232,"m232");
		HX_STACK_LINE(40)
		Float m242 = lhs->rawData->__get((int)13);		HX_STACK_VAR(m242,"m242");
		HX_STACK_LINE(41)
		Float m213 = lhs->rawData->__get((int)2);		HX_STACK_VAR(m213,"m213");
		HX_STACK_LINE(41)
		Float m223 = lhs->rawData->__get((int)6);		HX_STACK_VAR(m223,"m223");
		HX_STACK_LINE(41)
		Float m233 = lhs->rawData->__get((int)10);		HX_STACK_VAR(m233,"m233");
		HX_STACK_LINE(41)
		Float m243 = lhs->rawData->__get((int)14);		HX_STACK_VAR(m243,"m243");
		HX_STACK_LINE(42)
		Float m214 = lhs->rawData->__get((int)3);		HX_STACK_VAR(m214,"m214");
		HX_STACK_LINE(42)
		Float m224 = lhs->rawData->__get((int)7);		HX_STACK_VAR(m224,"m224");
		HX_STACK_LINE(42)
		Float m234 = lhs->rawData->__get((int)11);		HX_STACK_VAR(m234,"m234");
		HX_STACK_LINE(42)
		Float m244 = lhs->rawData->__get((int)15);		HX_STACK_VAR(m244,"m244");
		HX_STACK_LINE(44)
		this->rawData[(int)0] = ((((m111 * m211) + (m112 * m221)) + (m113 * m231)) + (m114 * m241));
		HX_STACK_LINE(45)
		this->rawData[(int)1] = ((((m111 * m212) + (m112 * m222)) + (m113 * m232)) + (m114 * m242));
		HX_STACK_LINE(46)
		this->rawData[(int)2] = ((((m111 * m213) + (m112 * m223)) + (m113 * m233)) + (m114 * m243));
		HX_STACK_LINE(47)
		this->rawData[(int)3] = ((((m111 * m214) + (m112 * m224)) + (m113 * m234)) + (m114 * m244));
		HX_STACK_LINE(49)
		this->rawData[(int)4] = ((((m121 * m211) + (m122 * m221)) + (m123 * m231)) + (m124 * m241));
		HX_STACK_LINE(50)
		this->rawData[(int)5] = ((((m121 * m212) + (m122 * m222)) + (m123 * m232)) + (m124 * m242));
		HX_STACK_LINE(51)
		this->rawData[(int)6] = ((((m121 * m213) + (m122 * m223)) + (m123 * m233)) + (m124 * m243));
		HX_STACK_LINE(52)
		this->rawData[(int)7] = ((((m121 * m214) + (m122 * m224)) + (m123 * m234)) + (m124 * m244));
		HX_STACK_LINE(54)
		this->rawData[(int)8] = ((((m131 * m211) + (m132 * m221)) + (m133 * m231)) + (m134 * m241));
		HX_STACK_LINE(55)
		this->rawData[(int)9] = ((((m131 * m212) + (m132 * m222)) + (m133 * m232)) + (m134 * m242));
		HX_STACK_LINE(56)
		this->rawData[(int)10] = ((((m131 * m213) + (m132 * m223)) + (m133 * m233)) + (m134 * m243));
		HX_STACK_LINE(57)
		this->rawData[(int)11] = ((((m131 * m214) + (m132 * m224)) + (m133 * m234)) + (m134 * m244));
		HX_STACK_LINE(59)
		this->rawData[(int)12] = ((((m141 * m211) + (m142 * m221)) + (m143 * m231)) + (m144 * m241));
		HX_STACK_LINE(60)
		this->rawData[(int)13] = ((((m141 * m212) + (m142 * m222)) + (m143 * m232)) + (m144 * m242));
		HX_STACK_LINE(61)
		this->rawData[(int)14] = ((((m141 * m213) + (m142 * m223)) + (m143 * m233)) + (m144 * m243));
		HX_STACK_LINE(62)
		this->rawData[(int)15] = ((((m141 * m214) + (m142 * m224)) + (m143 * m234)) + (m144 * m244));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,append,(void))

Void Matrix3D_obj::appendRotation( Float degrees,::openfl::geom::Vector3D axis,::openfl::geom::Vector3D pivotPoint){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","appendRotation",0xf492b8c0,"openfl.geom.Matrix3D.appendRotation","openfl/geom/Matrix3D.hx",67,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(degrees,"degrees")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(pivotPoint,"pivotPoint")
		HX_STACK_LINE(69)
		::openfl::geom::Matrix3D m = ::openfl::geom::Matrix3D_obj::getAxisRotation(axis->x,axis->y,axis->z,degrees);		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(71)
		if (((pivotPoint != null()))){
			HX_STACK_LINE(73)
			::openfl::geom::Vector3D p = pivotPoint;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(74)
			{
				HX_STACK_LINE(74)
				m->rawData[(int)12] = (m->rawData->__get((int)12) + p->x);
				HX_STACK_LINE(74)
				m->rawData[(int)13] = (m->rawData->__get((int)13) + p->y);
				HX_STACK_LINE(74)
				m->rawData[(int)14] = (m->rawData->__get((int)14) + p->z);
			}
		}
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			Float m111 = this->rawData->__get((int)0);		HX_STACK_VAR(m111,"m111");
			HX_STACK_LINE(78)
			Float m121 = this->rawData->__get((int)4);		HX_STACK_VAR(m121,"m121");
			HX_STACK_LINE(78)
			Float m131 = this->rawData->__get((int)8);		HX_STACK_VAR(m131,"m131");
			HX_STACK_LINE(78)
			Float m141 = this->rawData->__get((int)12);		HX_STACK_VAR(m141,"m141");
			HX_STACK_LINE(78)
			Float m112 = this->rawData->__get((int)1);		HX_STACK_VAR(m112,"m112");
			HX_STACK_LINE(78)
			Float m122 = this->rawData->__get((int)5);		HX_STACK_VAR(m122,"m122");
			HX_STACK_LINE(78)
			Float m132 = this->rawData->__get((int)9);		HX_STACK_VAR(m132,"m132");
			HX_STACK_LINE(78)
			Float m142 = this->rawData->__get((int)13);		HX_STACK_VAR(m142,"m142");
			HX_STACK_LINE(78)
			Float m113 = this->rawData->__get((int)2);		HX_STACK_VAR(m113,"m113");
			HX_STACK_LINE(78)
			Float m123 = this->rawData->__get((int)6);		HX_STACK_VAR(m123,"m123");
			HX_STACK_LINE(78)
			Float m133 = this->rawData->__get((int)10);		HX_STACK_VAR(m133,"m133");
			HX_STACK_LINE(78)
			Float m143 = this->rawData->__get((int)14);		HX_STACK_VAR(m143,"m143");
			HX_STACK_LINE(78)
			Float m114 = this->rawData->__get((int)3);		HX_STACK_VAR(m114,"m114");
			HX_STACK_LINE(78)
			Float m124 = this->rawData->__get((int)7);		HX_STACK_VAR(m124,"m124");
			HX_STACK_LINE(78)
			Float m134 = this->rawData->__get((int)11);		HX_STACK_VAR(m134,"m134");
			HX_STACK_LINE(78)
			Float m144 = this->rawData->__get((int)15);		HX_STACK_VAR(m144,"m144");
			HX_STACK_LINE(78)
			Float m211 = m->rawData->__get((int)0);		HX_STACK_VAR(m211,"m211");
			HX_STACK_LINE(78)
			Float m221 = m->rawData->__get((int)4);		HX_STACK_VAR(m221,"m221");
			HX_STACK_LINE(78)
			Float m231 = m->rawData->__get((int)8);		HX_STACK_VAR(m231,"m231");
			HX_STACK_LINE(78)
			Float m241 = m->rawData->__get((int)12);		HX_STACK_VAR(m241,"m241");
			HX_STACK_LINE(78)
			Float m212 = m->rawData->__get((int)1);		HX_STACK_VAR(m212,"m212");
			HX_STACK_LINE(78)
			Float m222 = m->rawData->__get((int)5);		HX_STACK_VAR(m222,"m222");
			HX_STACK_LINE(78)
			Float m232 = m->rawData->__get((int)9);		HX_STACK_VAR(m232,"m232");
			HX_STACK_LINE(78)
			Float m242 = m->rawData->__get((int)13);		HX_STACK_VAR(m242,"m242");
			HX_STACK_LINE(78)
			Float m213 = m->rawData->__get((int)2);		HX_STACK_VAR(m213,"m213");
			HX_STACK_LINE(78)
			Float m223 = m->rawData->__get((int)6);		HX_STACK_VAR(m223,"m223");
			HX_STACK_LINE(78)
			Float m233 = m->rawData->__get((int)10);		HX_STACK_VAR(m233,"m233");
			HX_STACK_LINE(78)
			Float m243 = m->rawData->__get((int)14);		HX_STACK_VAR(m243,"m243");
			HX_STACK_LINE(78)
			Float m214 = m->rawData->__get((int)3);		HX_STACK_VAR(m214,"m214");
			HX_STACK_LINE(78)
			Float m224 = m->rawData->__get((int)7);		HX_STACK_VAR(m224,"m224");
			HX_STACK_LINE(78)
			Float m234 = m->rawData->__get((int)11);		HX_STACK_VAR(m234,"m234");
			HX_STACK_LINE(78)
			Float m244 = m->rawData->__get((int)15);		HX_STACK_VAR(m244,"m244");
			HX_STACK_LINE(78)
			this->rawData[(int)0] = ((((m111 * m211) + (m112 * m221)) + (m113 * m231)) + (m114 * m241));
			HX_STACK_LINE(78)
			this->rawData[(int)1] = ((((m111 * m212) + (m112 * m222)) + (m113 * m232)) + (m114 * m242));
			HX_STACK_LINE(78)
			this->rawData[(int)2] = ((((m111 * m213) + (m112 * m223)) + (m113 * m233)) + (m114 * m243));
			HX_STACK_LINE(78)
			this->rawData[(int)3] = ((((m111 * m214) + (m112 * m224)) + (m113 * m234)) + (m114 * m244));
			HX_STACK_LINE(78)
			this->rawData[(int)4] = ((((m121 * m211) + (m122 * m221)) + (m123 * m231)) + (m124 * m241));
			HX_STACK_LINE(78)
			this->rawData[(int)5] = ((((m121 * m212) + (m122 * m222)) + (m123 * m232)) + (m124 * m242));
			HX_STACK_LINE(78)
			this->rawData[(int)6] = ((((m121 * m213) + (m122 * m223)) + (m123 * m233)) + (m124 * m243));
			HX_STACK_LINE(78)
			this->rawData[(int)7] = ((((m121 * m214) + (m122 * m224)) + (m123 * m234)) + (m124 * m244));
			HX_STACK_LINE(78)
			this->rawData[(int)8] = ((((m131 * m211) + (m132 * m221)) + (m133 * m231)) + (m134 * m241));
			HX_STACK_LINE(78)
			this->rawData[(int)9] = ((((m131 * m212) + (m132 * m222)) + (m133 * m232)) + (m134 * m242));
			HX_STACK_LINE(78)
			this->rawData[(int)10] = ((((m131 * m213) + (m132 * m223)) + (m133 * m233)) + (m134 * m243));
			HX_STACK_LINE(78)
			this->rawData[(int)11] = ((((m131 * m214) + (m132 * m224)) + (m133 * m234)) + (m134 * m244));
			HX_STACK_LINE(78)
			this->rawData[(int)12] = ((((m141 * m211) + (m142 * m221)) + (m143 * m231)) + (m144 * m241));
			HX_STACK_LINE(78)
			this->rawData[(int)13] = ((((m141 * m212) + (m142 * m222)) + (m143 * m232)) + (m144 * m242));
			HX_STACK_LINE(78)
			this->rawData[(int)14] = ((((m141 * m213) + (m142 * m223)) + (m143 * m233)) + (m144 * m243));
			HX_STACK_LINE(78)
			this->rawData[(int)15] = ((((m141 * m214) + (m142 * m224)) + (m143 * m234)) + (m144 * m244));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,appendRotation,(void))

Void Matrix3D_obj::appendScale( Float xScale,Float yScale,Float zScale){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","appendScale",0x02daedc8,"openfl.geom.Matrix3D.appendScale","openfl/geom/Matrix3D.hx",85,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xScale,"xScale")
		HX_STACK_ARG(yScale,"yScale")
		HX_STACK_ARG(zScale,"zScale")
		HX_STACK_LINE(85)
		::openfl::geom::Matrix3D lhs = ::openfl::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add(xScale).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(yScale).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(zScale).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(1.0));		HX_STACK_VAR(lhs,"lhs");
		HX_STACK_LINE(85)
		Float m111 = this->rawData->__get((int)0);		HX_STACK_VAR(m111,"m111");
		HX_STACK_LINE(85)
		Float m121 = this->rawData->__get((int)4);		HX_STACK_VAR(m121,"m121");
		HX_STACK_LINE(85)
		Float m131 = this->rawData->__get((int)8);		HX_STACK_VAR(m131,"m131");
		HX_STACK_LINE(85)
		Float m141 = this->rawData->__get((int)12);		HX_STACK_VAR(m141,"m141");
		HX_STACK_LINE(85)
		Float m112 = this->rawData->__get((int)1);		HX_STACK_VAR(m112,"m112");
		HX_STACK_LINE(85)
		Float m122 = this->rawData->__get((int)5);		HX_STACK_VAR(m122,"m122");
		HX_STACK_LINE(85)
		Float m132 = this->rawData->__get((int)9);		HX_STACK_VAR(m132,"m132");
		HX_STACK_LINE(85)
		Float m142 = this->rawData->__get((int)13);		HX_STACK_VAR(m142,"m142");
		HX_STACK_LINE(85)
		Float m113 = this->rawData->__get((int)2);		HX_STACK_VAR(m113,"m113");
		HX_STACK_LINE(85)
		Float m123 = this->rawData->__get((int)6);		HX_STACK_VAR(m123,"m123");
		HX_STACK_LINE(85)
		Float m133 = this->rawData->__get((int)10);		HX_STACK_VAR(m133,"m133");
		HX_STACK_LINE(85)
		Float m143 = this->rawData->__get((int)14);		HX_STACK_VAR(m143,"m143");
		HX_STACK_LINE(85)
		Float m114 = this->rawData->__get((int)3);		HX_STACK_VAR(m114,"m114");
		HX_STACK_LINE(85)
		Float m124 = this->rawData->__get((int)7);		HX_STACK_VAR(m124,"m124");
		HX_STACK_LINE(85)
		Float m134 = this->rawData->__get((int)11);		HX_STACK_VAR(m134,"m134");
		HX_STACK_LINE(85)
		Float m144 = this->rawData->__get((int)15);		HX_STACK_VAR(m144,"m144");
		HX_STACK_LINE(85)
		Float m211 = lhs->rawData->__get((int)0);		HX_STACK_VAR(m211,"m211");
		HX_STACK_LINE(85)
		Float m221 = lhs->rawData->__get((int)4);		HX_STACK_VAR(m221,"m221");
		HX_STACK_LINE(85)
		Float m231 = lhs->rawData->__get((int)8);		HX_STACK_VAR(m231,"m231");
		HX_STACK_LINE(85)
		Float m241 = lhs->rawData->__get((int)12);		HX_STACK_VAR(m241,"m241");
		HX_STACK_LINE(85)
		Float m212 = lhs->rawData->__get((int)1);		HX_STACK_VAR(m212,"m212");
		HX_STACK_LINE(85)
		Float m222 = lhs->rawData->__get((int)5);		HX_STACK_VAR(m222,"m222");
		HX_STACK_LINE(85)
		Float m232 = lhs->rawData->__get((int)9);		HX_STACK_VAR(m232,"m232");
		HX_STACK_LINE(85)
		Float m242 = lhs->rawData->__get((int)13);		HX_STACK_VAR(m242,"m242");
		HX_STACK_LINE(85)
		Float m213 = lhs->rawData->__get((int)2);		HX_STACK_VAR(m213,"m213");
		HX_STACK_LINE(85)
		Float m223 = lhs->rawData->__get((int)6);		HX_STACK_VAR(m223,"m223");
		HX_STACK_LINE(85)
		Float m233 = lhs->rawData->__get((int)10);		HX_STACK_VAR(m233,"m233");
		HX_STACK_LINE(85)
		Float m243 = lhs->rawData->__get((int)14);		HX_STACK_VAR(m243,"m243");
		HX_STACK_LINE(85)
		Float m214 = lhs->rawData->__get((int)3);		HX_STACK_VAR(m214,"m214");
		HX_STACK_LINE(85)
		Float m224 = lhs->rawData->__get((int)7);		HX_STACK_VAR(m224,"m224");
		HX_STACK_LINE(85)
		Float m234 = lhs->rawData->__get((int)11);		HX_STACK_VAR(m234,"m234");
		HX_STACK_LINE(85)
		Float m244 = lhs->rawData->__get((int)15);		HX_STACK_VAR(m244,"m244");
		HX_STACK_LINE(85)
		this->rawData[(int)0] = ((((m111 * m211) + (m112 * m221)) + (m113 * m231)) + (m114 * m241));
		HX_STACK_LINE(85)
		this->rawData[(int)1] = ((((m111 * m212) + (m112 * m222)) + (m113 * m232)) + (m114 * m242));
		HX_STACK_LINE(85)
		this->rawData[(int)2] = ((((m111 * m213) + (m112 * m223)) + (m113 * m233)) + (m114 * m243));
		HX_STACK_LINE(85)
		this->rawData[(int)3] = ((((m111 * m214) + (m112 * m224)) + (m113 * m234)) + (m114 * m244));
		HX_STACK_LINE(85)
		this->rawData[(int)4] = ((((m121 * m211) + (m122 * m221)) + (m123 * m231)) + (m124 * m241));
		HX_STACK_LINE(85)
		this->rawData[(int)5] = ((((m121 * m212) + (m122 * m222)) + (m123 * m232)) + (m124 * m242));
		HX_STACK_LINE(85)
		this->rawData[(int)6] = ((((m121 * m213) + (m122 * m223)) + (m123 * m233)) + (m124 * m243));
		HX_STACK_LINE(85)
		this->rawData[(int)7] = ((((m121 * m214) + (m122 * m224)) + (m123 * m234)) + (m124 * m244));
		HX_STACK_LINE(85)
		this->rawData[(int)8] = ((((m131 * m211) + (m132 * m221)) + (m133 * m231)) + (m134 * m241));
		HX_STACK_LINE(85)
		this->rawData[(int)9] = ((((m131 * m212) + (m132 * m222)) + (m133 * m232)) + (m134 * m242));
		HX_STACK_LINE(85)
		this->rawData[(int)10] = ((((m131 * m213) + (m132 * m223)) + (m133 * m233)) + (m134 * m243));
		HX_STACK_LINE(85)
		this->rawData[(int)11] = ((((m131 * m214) + (m132 * m224)) + (m133 * m234)) + (m134 * m244));
		HX_STACK_LINE(85)
		this->rawData[(int)12] = ((((m141 * m211) + (m142 * m221)) + (m143 * m231)) + (m144 * m241));
		HX_STACK_LINE(85)
		this->rawData[(int)13] = ((((m141 * m212) + (m142 * m222)) + (m143 * m232)) + (m144 * m242));
		HX_STACK_LINE(85)
		this->rawData[(int)14] = ((((m141 * m213) + (m142 * m223)) + (m143 * m233)) + (m144 * m243));
		HX_STACK_LINE(85)
		this->rawData[(int)15] = ((((m141 * m214) + (m142 * m224)) + (m143 * m234)) + (m144 * m244));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,appendScale,(void))

Void Matrix3D_obj::appendTranslation( Float x,Float y,Float z){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","appendTranslation",0x514252af,"openfl.geom.Matrix3D.appendTranslation","openfl/geom/Matrix3D.hx",90,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(92)
		this->rawData[(int)12] = (this->rawData->__get((int)12) + x);
		HX_STACK_LINE(93)
		this->rawData[(int)13] = (this->rawData->__get((int)13) + y);
		HX_STACK_LINE(94)
		this->rawData[(int)14] = (this->rawData->__get((int)14) + z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,appendTranslation,(void))

::openfl::geom::Matrix3D Matrix3D_obj::clone( ){
	HX_STACK_FRAME("openfl.geom.Matrix3D","clone",0x2ff530d5,"openfl.geom.Matrix3D.clone","openfl/geom/Matrix3D.hx",99,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_LINE(101)
	Array< Float > _g = this->rawData->copy();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(101)
	return ::openfl::geom::Matrix3D_obj::__new(_g);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,clone,return )

Void Matrix3D_obj::copyColumnFrom( int column,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","copyColumnFrom",0x63600afd,"openfl.geom.Matrix3D.copyColumnFrom","openfl/geom/Matrix3D.hx",108,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(108)
		switch( (int)(column)){
			case (int)0: {
				HX_STACK_LINE(111)
				this->rawData[(int)0] = vector3D->x;
				HX_STACK_LINE(112)
				this->rawData[(int)1] = vector3D->y;
				HX_STACK_LINE(113)
				this->rawData[(int)2] = vector3D->z;
				HX_STACK_LINE(114)
				this->rawData[(int)3] = vector3D->w;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(116)
				this->rawData[(int)4] = vector3D->x;
				HX_STACK_LINE(117)
				this->rawData[(int)5] = vector3D->y;
				HX_STACK_LINE(118)
				this->rawData[(int)6] = vector3D->z;
				HX_STACK_LINE(119)
				this->rawData[(int)7] = vector3D->w;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(121)
				this->rawData[(int)8] = vector3D->x;
				HX_STACK_LINE(122)
				this->rawData[(int)9] = vector3D->y;
				HX_STACK_LINE(123)
				this->rawData[(int)10] = vector3D->z;
				HX_STACK_LINE(124)
				this->rawData[(int)11] = vector3D->w;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(126)
				this->rawData[(int)12] = vector3D->x;
				HX_STACK_LINE(127)
				this->rawData[(int)13] = vector3D->y;
				HX_STACK_LINE(128)
				this->rawData[(int)14] = vector3D->z;
				HX_STACK_LINE(129)
				this->rawData[(int)15] = vector3D->w;
			}
			;break;
			default: {
				HX_STACK_LINE(131)
				HX_STACK_DO_THROW(::openfl::errors::Error_obj::__new(((HX_CSTRING("Error, Column ") + column) + HX_CSTRING(" out of bounds [0, ..., 3]")),null()));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,copyColumnFrom,(void))

Void Matrix3D_obj::copyColumnTo( int column,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","copyColumnTo",0x8c37304e,"openfl.geom.Matrix3D.copyColumnTo","openfl/geom/Matrix3D.hx",139,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(139)
		switch( (int)(column)){
			case (int)0: {
				HX_STACK_LINE(142)
				vector3D->x = this->rawData->__get((int)0);
				HX_STACK_LINE(143)
				vector3D->y = this->rawData->__get((int)1);
				HX_STACK_LINE(144)
				vector3D->z = this->rawData->__get((int)2);
				HX_STACK_LINE(145)
				vector3D->w = this->rawData->__get((int)3);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(147)
				vector3D->x = this->rawData->__get((int)4);
				HX_STACK_LINE(148)
				vector3D->y = this->rawData->__get((int)5);
				HX_STACK_LINE(149)
				vector3D->z = this->rawData->__get((int)6);
				HX_STACK_LINE(150)
				vector3D->w = this->rawData->__get((int)7);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(152)
				vector3D->x = this->rawData->__get((int)8);
				HX_STACK_LINE(153)
				vector3D->y = this->rawData->__get((int)9);
				HX_STACK_LINE(154)
				vector3D->z = this->rawData->__get((int)10);
				HX_STACK_LINE(155)
				vector3D->w = this->rawData->__get((int)11);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(157)
				vector3D->x = this->rawData->__get((int)12);
				HX_STACK_LINE(158)
				vector3D->y = this->rawData->__get((int)13);
				HX_STACK_LINE(159)
				vector3D->z = this->rawData->__get((int)14);
				HX_STACK_LINE(160)
				vector3D->w = this->rawData->__get((int)15);
			}
			;break;
			default: {
				HX_STACK_LINE(162)
				HX_STACK_DO_THROW(::openfl::errors::Error_obj::__new(((HX_CSTRING("Error, Column ") + column) + HX_CSTRING(" out of bounds [0, ..., 3]")),null()));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,copyColumnTo,(void))

Void Matrix3D_obj::copyFrom( ::openfl::geom::Matrix3D other){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","copyFrom",0xe290a947,"openfl.geom.Matrix3D.copyFrom","openfl/geom/Matrix3D.hx",168,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(170)
		Array< Float > _g = other->rawData->copy();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(170)
		this->rawData = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,copyFrom,(void))

Void Matrix3D_obj::copyRawDataFrom( Array< Float > vector,hx::Null< int >  __o_index,hx::Null< bool >  __o_transpose){
int index = __o_index.Default(0);
bool transpose = __o_transpose.Default(false);
	HX_STACK_FRAME("openfl.geom.Matrix3D","copyRawDataFrom",0x9938207f,"openfl.geom.Matrix3D.copyRawDataFrom","openfl/geom/Matrix3D.hx",174,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(transpose,"transpose")
{
		HX_STACK_LINE(176)
		if ((transpose)){
			HX_STACK_LINE(177)
			Array< Float > oRawData = this->rawData->copy();		HX_STACK_VAR(oRawData,"oRawData");
			HX_STACK_LINE(177)
			this->rawData[(int)1] = oRawData->__get((int)4);
			HX_STACK_LINE(177)
			this->rawData[(int)2] = oRawData->__get((int)8);
			HX_STACK_LINE(177)
			this->rawData[(int)3] = oRawData->__get((int)12);
			HX_STACK_LINE(177)
			this->rawData[(int)4] = oRawData->__get((int)1);
			HX_STACK_LINE(177)
			this->rawData[(int)6] = oRawData->__get((int)9);
			HX_STACK_LINE(177)
			this->rawData[(int)7] = oRawData->__get((int)13);
			HX_STACK_LINE(177)
			this->rawData[(int)8] = oRawData->__get((int)2);
			HX_STACK_LINE(177)
			this->rawData[(int)9] = oRawData->__get((int)6);
			HX_STACK_LINE(177)
			this->rawData[(int)11] = oRawData->__get((int)14);
			HX_STACK_LINE(177)
			this->rawData[(int)12] = oRawData->__get((int)3);
			HX_STACK_LINE(177)
			this->rawData[(int)13] = oRawData->__get((int)7);
			HX_STACK_LINE(177)
			this->rawData[(int)14] = oRawData->__get((int)11);
		}
		HX_STACK_LINE(179)
		int l = (vector->length - index);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(180)
		{
			HX_STACK_LINE(180)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(180)
			while((true)){
				HX_STACK_LINE(180)
				if ((!(((_g < l))))){
					HX_STACK_LINE(180)
					break;
				}
				HX_STACK_LINE(180)
				int c = (_g)++;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(181)
				this->rawData[c] = vector->__get((c + index));
			}
		}
		HX_STACK_LINE(183)
		if ((transpose)){
			HX_STACK_LINE(184)
			Array< Float > oRawData = this->rawData->copy();		HX_STACK_VAR(oRawData,"oRawData");
			HX_STACK_LINE(184)
			this->rawData[(int)1] = oRawData->__get((int)4);
			HX_STACK_LINE(184)
			this->rawData[(int)2] = oRawData->__get((int)8);
			HX_STACK_LINE(184)
			this->rawData[(int)3] = oRawData->__get((int)12);
			HX_STACK_LINE(184)
			this->rawData[(int)4] = oRawData->__get((int)1);
			HX_STACK_LINE(184)
			this->rawData[(int)6] = oRawData->__get((int)9);
			HX_STACK_LINE(184)
			this->rawData[(int)7] = oRawData->__get((int)13);
			HX_STACK_LINE(184)
			this->rawData[(int)8] = oRawData->__get((int)2);
			HX_STACK_LINE(184)
			this->rawData[(int)9] = oRawData->__get((int)6);
			HX_STACK_LINE(184)
			this->rawData[(int)11] = oRawData->__get((int)14);
			HX_STACK_LINE(184)
			this->rawData[(int)12] = oRawData->__get((int)3);
			HX_STACK_LINE(184)
			this->rawData[(int)13] = oRawData->__get((int)7);
			HX_STACK_LINE(184)
			this->rawData[(int)14] = oRawData->__get((int)11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,copyRawDataFrom,(void))

Void Matrix3D_obj::copyRawDataTo( Array< Float > vector,hx::Null< int >  __o_index,hx::Null< bool >  __o_transpose){
int index = __o_index.Default(0);
bool transpose = __o_transpose.Default(false);
	HX_STACK_FRAME("openfl.geom.Matrix3D","copyRawDataTo",0xac978150,"openfl.geom.Matrix3D.copyRawDataTo","openfl/geom/Matrix3D.hx",189,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vector,"vector")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(transpose,"transpose")
{
		HX_STACK_LINE(191)
		if ((transpose)){
			HX_STACK_LINE(192)
			Array< Float > oRawData = this->rawData->copy();		HX_STACK_VAR(oRawData,"oRawData");
			HX_STACK_LINE(192)
			this->rawData[(int)1] = oRawData->__get((int)4);
			HX_STACK_LINE(192)
			this->rawData[(int)2] = oRawData->__get((int)8);
			HX_STACK_LINE(192)
			this->rawData[(int)3] = oRawData->__get((int)12);
			HX_STACK_LINE(192)
			this->rawData[(int)4] = oRawData->__get((int)1);
			HX_STACK_LINE(192)
			this->rawData[(int)6] = oRawData->__get((int)9);
			HX_STACK_LINE(192)
			this->rawData[(int)7] = oRawData->__get((int)13);
			HX_STACK_LINE(192)
			this->rawData[(int)8] = oRawData->__get((int)2);
			HX_STACK_LINE(192)
			this->rawData[(int)9] = oRawData->__get((int)6);
			HX_STACK_LINE(192)
			this->rawData[(int)11] = oRawData->__get((int)14);
			HX_STACK_LINE(192)
			this->rawData[(int)12] = oRawData->__get((int)3);
			HX_STACK_LINE(192)
			this->rawData[(int)13] = oRawData->__get((int)7);
			HX_STACK_LINE(192)
			this->rawData[(int)14] = oRawData->__get((int)11);
		}
		HX_STACK_LINE(194)
		int l = this->rawData->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(195)
		{
			HX_STACK_LINE(195)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(195)
			while((true)){
				HX_STACK_LINE(195)
				if ((!(((_g < l))))){
					HX_STACK_LINE(195)
					break;
				}
				HX_STACK_LINE(195)
				int c = (_g)++;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(196)
				vector[(c + index)] = this->rawData->__get(c);
			}
		}
		HX_STACK_LINE(198)
		if ((transpose)){
			HX_STACK_LINE(199)
			Array< Float > oRawData = this->rawData->copy();		HX_STACK_VAR(oRawData,"oRawData");
			HX_STACK_LINE(199)
			this->rawData[(int)1] = oRawData->__get((int)4);
			HX_STACK_LINE(199)
			this->rawData[(int)2] = oRawData->__get((int)8);
			HX_STACK_LINE(199)
			this->rawData[(int)3] = oRawData->__get((int)12);
			HX_STACK_LINE(199)
			this->rawData[(int)4] = oRawData->__get((int)1);
			HX_STACK_LINE(199)
			this->rawData[(int)6] = oRawData->__get((int)9);
			HX_STACK_LINE(199)
			this->rawData[(int)7] = oRawData->__get((int)13);
			HX_STACK_LINE(199)
			this->rawData[(int)8] = oRawData->__get((int)2);
			HX_STACK_LINE(199)
			this->rawData[(int)9] = oRawData->__get((int)6);
			HX_STACK_LINE(199)
			this->rawData[(int)11] = oRawData->__get((int)14);
			HX_STACK_LINE(199)
			this->rawData[(int)12] = oRawData->__get((int)3);
			HX_STACK_LINE(199)
			this->rawData[(int)13] = oRawData->__get((int)7);
			HX_STACK_LINE(199)
			this->rawData[(int)14] = oRawData->__get((int)11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,copyRawDataTo,(void))

Void Matrix3D_obj::copyRowFrom( int row,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","copyRowFrom",0x3d20cce7,"openfl.geom.Matrix3D.copyRowFrom","openfl/geom/Matrix3D.hx",206,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(206)
		switch( (int)(row)){
			case (int)0: {
				HX_STACK_LINE(209)
				this->rawData[(int)0] = vector3D->x;
				HX_STACK_LINE(210)
				this->rawData[(int)4] = vector3D->y;
				HX_STACK_LINE(211)
				this->rawData[(int)8] = vector3D->z;
				HX_STACK_LINE(212)
				this->rawData[(int)12] = vector3D->w;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(215)
				this->rawData[(int)1] = vector3D->x;
				HX_STACK_LINE(216)
				this->rawData[(int)5] = vector3D->y;
				HX_STACK_LINE(217)
				this->rawData[(int)9] = vector3D->z;
				HX_STACK_LINE(218)
				this->rawData[(int)13] = vector3D->w;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(221)
				this->rawData[(int)2] = vector3D->x;
				HX_STACK_LINE(222)
				this->rawData[(int)6] = vector3D->y;
				HX_STACK_LINE(223)
				this->rawData[(int)10] = vector3D->z;
				HX_STACK_LINE(224)
				this->rawData[(int)14] = vector3D->w;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(227)
				this->rawData[(int)3] = vector3D->x;
				HX_STACK_LINE(228)
				this->rawData[(int)7] = vector3D->y;
				HX_STACK_LINE(229)
				this->rawData[(int)11] = vector3D->z;
				HX_STACK_LINE(230)
				this->rawData[(int)15] = vector3D->w;
			}
			;break;
			default: {
				struct _Function_2_1{
					inline static Float Block( int &row){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/geom/Matrix3D.hx",233,0x3acce238)
						{
							HX_STACK_LINE(233)
							int _int = row;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(233)
							return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(233)
				::String _g = ::Std_obj::string(_Function_2_1::Block(row));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(233)
				::String _g1 = (HX_CSTRING("Error, Row ") + _g);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(233)
				::String _g2 = (_g1 + HX_CSTRING(" out of bounds [0, ..., 3]"));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(233)
				HX_STACK_DO_THROW(::openfl::errors::Error_obj::__new(_g2,null()));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,copyRowFrom,(void))

Void Matrix3D_obj::copyRowTo( int row,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","copyRowTo",0x42dcc3b8,"openfl.geom.Matrix3D.copyRowTo","openfl/geom/Matrix3D.hx",285,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(285)
		switch( (int)(row)){
			case (int)0: {
				HX_STACK_LINE(288)
				vector3D->x = this->rawData->__get((int)0);
				HX_STACK_LINE(289)
				vector3D->y = this->rawData->__get((int)4);
				HX_STACK_LINE(290)
				vector3D->z = this->rawData->__get((int)8);
				HX_STACK_LINE(291)
				vector3D->w = this->rawData->__get((int)12);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(294)
				vector3D->x = this->rawData->__get((int)1);
				HX_STACK_LINE(295)
				vector3D->y = this->rawData->__get((int)5);
				HX_STACK_LINE(296)
				vector3D->z = this->rawData->__get((int)9);
				HX_STACK_LINE(297)
				vector3D->w = this->rawData->__get((int)13);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(300)
				vector3D->x = this->rawData->__get((int)2);
				HX_STACK_LINE(301)
				vector3D->y = this->rawData->__get((int)6);
				HX_STACK_LINE(302)
				vector3D->z = this->rawData->__get((int)10);
				HX_STACK_LINE(303)
				vector3D->w = this->rawData->__get((int)14);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(306)
				vector3D->x = this->rawData->__get((int)3);
				HX_STACK_LINE(307)
				vector3D->y = this->rawData->__get((int)7);
				HX_STACK_LINE(308)
				vector3D->z = this->rawData->__get((int)11);
				HX_STACK_LINE(309)
				vector3D->w = this->rawData->__get((int)15);
			}
			;break;
			default: {
				HX_STACK_LINE(312)
				HX_STACK_DO_THROW(::openfl::errors::Error_obj::__new(((HX_CSTRING("Error, Row ") + row) + HX_CSTRING(" out of bounds [0, ..., 3]")),null()));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,copyRowTo,(void))

Void Matrix3D_obj::copyToMatrix3D( ::openfl::geom::Matrix3D other){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","copyToMatrix3D",0x2cc9916a,"openfl.geom.Matrix3D.copyToMatrix3D","openfl/geom/Matrix3D.hx",318,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(320)
		Array< Float > _g = this->rawData->copy();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(320)
		other->rawData = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,copyToMatrix3D,(void))

Array< ::Dynamic > Matrix3D_obj::decompose( ::openfl::geom::Orientation3D orientationStyle){
	HX_STACK_FRAME("openfl.geom.Matrix3D","decompose",0x4a21fd29,"openfl.geom.Matrix3D.decompose","openfl/geom/Matrix3D.hx",328,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_ARG(orientationStyle,"orientationStyle")
	HX_STACK_LINE(330)
	if (((orientationStyle == null()))){
		HX_STACK_LINE(331)
		orientationStyle = ::openfl::geom::Orientation3D_obj::EULER_ANGLES;
	}
	HX_STACK_LINE(333)
	Array< ::Dynamic > vec;		HX_STACK_VAR(vec,"vec");
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/geom/Matrix3D.hx",333,0x3acce238)
			{
				HX_STACK_LINE(333)
				Dynamic this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(333)
				Dynamic _g = Dynamic( Array_obj<Dynamic>::__new() )->__Field(HX_CSTRING("__SetSizeExact"),true)(null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(333)
				this1 = _g;
				HX_STACK_LINE(333)
				return this1;
			}
			return null();
		}
	};
	HX_STACK_LINE(333)
	vec = _Function_1_1::Block();
	HX_STACK_LINE(334)
	Array< Float > _g1 = this->rawData->copy();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(334)
	::openfl::geom::Matrix3D m = ::openfl::geom::Matrix3D_obj::__new(_g1);		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(335)
	Array< Float > mr = m->rawData->copy();		HX_STACK_VAR(mr,"mr");
	HX_STACK_LINE(337)
	::openfl::geom::Vector3D pos = ::openfl::geom::Vector3D_obj::__new(mr->__get((int)12),mr->__get((int)13),mr->__get((int)14),null());		HX_STACK_VAR(pos,"pos");
	HX_STACK_LINE(338)
	mr[(int)12] = (int)0;
	HX_STACK_LINE(339)
	mr[(int)13] = (int)0;
	HX_STACK_LINE(340)
	mr[(int)14] = (int)0;
	HX_STACK_LINE(342)
	::openfl::geom::Vector3D scale = ::openfl::geom::Vector3D_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(scale,"scale");
	HX_STACK_LINE(344)
	Float _g2 = ::Math_obj::sqrt((((mr->__get((int)0) * mr->__get((int)0)) + (mr->__get((int)1) * mr->__get((int)1))) + (mr->__get((int)2) * mr->__get((int)2))));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(344)
	scale->x = _g2;
	HX_STACK_LINE(345)
	Float _g3 = ::Math_obj::sqrt((((mr->__get((int)4) * mr->__get((int)4)) + (mr->__get((int)5) * mr->__get((int)5))) + (mr->__get((int)6) * mr->__get((int)6))));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(345)
	scale->y = _g3;
	HX_STACK_LINE(346)
	Float _g4 = ::Math_obj::sqrt((((mr->__get((int)8) * mr->__get((int)8)) + (mr->__get((int)9) * mr->__get((int)9))) + (mr->__get((int)10) * mr->__get((int)10))));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(346)
	scale->z = _g4;
	HX_STACK_LINE(348)
	if ((((((mr->__get((int)0) * (((mr->__get((int)5) * mr->__get((int)10)) - (mr->__get((int)6) * mr->__get((int)9))))) - (mr->__get((int)1) * (((mr->__get((int)4) * mr->__get((int)10)) - (mr->__get((int)6) * mr->__get((int)8)))))) + (mr->__get((int)2) * (((mr->__get((int)4) * mr->__get((int)9)) - (mr->__get((int)5) * mr->__get((int)8)))))) < (int)0))){
		HX_STACK_LINE(350)
		scale->z = -(scale->z);
	}
	HX_STACK_LINE(354)
	mr[(int)0] = (Float(mr->__get((int)0)) / Float(scale->x));
	HX_STACK_LINE(355)
	mr[(int)1] = (Float(mr->__get((int)1)) / Float(scale->x));
	HX_STACK_LINE(356)
	mr[(int)2] = (Float(mr->__get((int)2)) / Float(scale->x));
	HX_STACK_LINE(357)
	mr[(int)4] = (Float(mr->__get((int)4)) / Float(scale->y));
	HX_STACK_LINE(358)
	mr[(int)5] = (Float(mr->__get((int)5)) / Float(scale->y));
	HX_STACK_LINE(359)
	mr[(int)6] = (Float(mr->__get((int)6)) / Float(scale->y));
	HX_STACK_LINE(360)
	mr[(int)8] = (Float(mr->__get((int)8)) / Float(scale->z));
	HX_STACK_LINE(361)
	mr[(int)9] = (Float(mr->__get((int)9)) / Float(scale->z));
	HX_STACK_LINE(362)
	mr[(int)10] = (Float(mr->__get((int)10)) / Float(scale->z));
	HX_STACK_LINE(364)
	::openfl::geom::Vector3D rot = ::openfl::geom::Vector3D_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(rot,"rot");
	HX_STACK_LINE(365)
	switch( (int)(orientationStyle->__Index())){
		case (int)0: {
			HX_STACK_LINE(368)
			Float _g5 = ::Math_obj::acos((Float(((((mr->__get((int)0) + mr->__get((int)5)) + mr->__get((int)10)) - (int)1))) / Float((int)2)));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(368)
			rot->w = _g5;
			HX_STACK_LINE(370)
			Float len = ::Math_obj::sqrt((((((mr->__get((int)6) - mr->__get((int)9))) * ((mr->__get((int)6) - mr->__get((int)9)))) + (((mr->__get((int)8) - mr->__get((int)2))) * ((mr->__get((int)8) - mr->__get((int)2))))) + (((mr->__get((int)1) - mr->__get((int)4))) * ((mr->__get((int)1) - mr->__get((int)4))))));		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(371)
			rot->x = (Float(((mr->__get((int)6) - mr->__get((int)9)))) / Float(len));
			HX_STACK_LINE(372)
			rot->y = (Float(((mr->__get((int)8) - mr->__get((int)2)))) / Float(len));
			HX_STACK_LINE(373)
			rot->z = (Float(((mr->__get((int)1) - mr->__get((int)4)))) / Float(len));
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(376)
			Float tr = ((mr->__get((int)0) + mr->__get((int)5)) + mr->__get((int)10));		HX_STACK_VAR(tr,"tr");
			HX_STACK_LINE(378)
			if (((tr > (int)0))){
				HX_STACK_LINE(379)
				Float _g6 = ::Math_obj::sqrt(((int)1 + tr));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(379)
				Float _g7 = (Float(_g6) / Float((int)2));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(379)
				rot->w = _g7;
				HX_STACK_LINE(381)
				rot->x = (Float(((mr->__get((int)6) - mr->__get((int)9)))) / Float((((int)4 * rot->w))));
				HX_STACK_LINE(382)
				rot->y = (Float(((mr->__get((int)8) - mr->__get((int)2)))) / Float((((int)4 * rot->w))));
				HX_STACK_LINE(383)
				rot->z = (Float(((mr->__get((int)1) - mr->__get((int)4)))) / Float((((int)4 * rot->w))));
			}
			else{
				HX_STACK_LINE(384)
				if (((bool((mr->__get((int)0) > mr->__get((int)5))) && bool((mr->__get((int)0) > mr->__get((int)10)))))){
					HX_STACK_LINE(385)
					Float _g8 = ::Math_obj::sqrt(((((int)1 + mr->__get((int)0)) - mr->__get((int)5)) - mr->__get((int)10)));		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(385)
					Float _g9 = (Float(_g8) / Float((int)2));		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(385)
					rot->x = _g9;
					HX_STACK_LINE(387)
					rot->w = (Float(((mr->__get((int)6) - mr->__get((int)9)))) / Float((((int)4 * rot->x))));
					HX_STACK_LINE(388)
					rot->y = (Float(((mr->__get((int)1) + mr->__get((int)4)))) / Float((((int)4 * rot->x))));
					HX_STACK_LINE(389)
					rot->z = (Float(((mr->__get((int)8) + mr->__get((int)2)))) / Float((((int)4 * rot->x))));
				}
				else{
					HX_STACK_LINE(390)
					if (((mr->__get((int)5) > mr->__get((int)10)))){
						HX_STACK_LINE(391)
						Float _g10 = ::Math_obj::sqrt(((((int)1 + mr->__get((int)5)) - mr->__get((int)0)) - mr->__get((int)10)));		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(391)
						Float _g11 = (Float(_g10) / Float((int)2));		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(391)
						rot->y = _g11;
						HX_STACK_LINE(393)
						rot->x = (Float(((mr->__get((int)1) + mr->__get((int)4)))) / Float((((int)4 * rot->y))));
						HX_STACK_LINE(394)
						rot->w = (Float(((mr->__get((int)8) - mr->__get((int)2)))) / Float((((int)4 * rot->y))));
						HX_STACK_LINE(395)
						rot->z = (Float(((mr->__get((int)6) + mr->__get((int)9)))) / Float((((int)4 * rot->y))));
					}
					else{
						HX_STACK_LINE(397)
						Float _g12 = ::Math_obj::sqrt(((((int)1 + mr->__get((int)10)) - mr->__get((int)0)) - mr->__get((int)5)));		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(397)
						Float _g13 = (Float(_g12) / Float((int)2));		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(397)
						rot->z = _g13;
						HX_STACK_LINE(399)
						rot->x = (Float(((mr->__get((int)8) + mr->__get((int)2)))) / Float((((int)4 * rot->z))));
						HX_STACK_LINE(400)
						rot->y = (Float(((mr->__get((int)6) + mr->__get((int)9)))) / Float((((int)4 * rot->z))));
						HX_STACK_LINE(401)
						rot->w = (Float(((mr->__get((int)1) - mr->__get((int)4)))) / Float((((int)4 * rot->z))));
					}
				}
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(405)
			Float _g14 = ::Math_obj::asin(-(mr->__get((int)2)));		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(405)
			rot->y = _g14;
			HX_STACK_LINE(407)
			if (((bool((mr->__get((int)2) != (int)1)) && bool((mr->__get((int)2) != (int)-1))))){
				HX_STACK_LINE(408)
				Float _g15 = ::Math_obj::atan2(mr->__get((int)6),mr->__get((int)10));		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(408)
				rot->x = _g15;
				HX_STACK_LINE(409)
				Float _g16 = ::Math_obj::atan2(mr->__get((int)1),mr->__get((int)0));		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(409)
				rot->z = _g16;
			}
			else{
				HX_STACK_LINE(411)
				rot->z = (int)0;
				HX_STACK_LINE(412)
				Float _g17 = ::Math_obj::atan2(mr->__get((int)4),mr->__get((int)5));		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(412)
				rot->x = _g17;
			}
		}
		;break;
	}
	HX_STACK_LINE(416)
	vec->push(pos);
	HX_STACK_LINE(417)
	vec->push(rot);
	HX_STACK_LINE(418)
	vec->push(scale);
	HX_STACK_LINE(420)
	return vec;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,decompose,return )

::openfl::geom::Vector3D Matrix3D_obj::deltaTransformVector( ::openfl::geom::Vector3D v){
	HX_STACK_FRAME("openfl.geom.Matrix3D","deltaTransformVector",0x0285cbbf,"openfl.geom.Matrix3D.deltaTransformVector","openfl/geom/Matrix3D.hx",425,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(427)
	Float x = v->x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(427)
	Float y = v->y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(427)
	Float z = v->z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(429)
	return ::openfl::geom::Vector3D_obj::__new(((((x * this->rawData->__get((int)0)) + (y * this->rawData->__get((int)4))) + (z * this->rawData->__get((int)8))) + this->rawData->__get((int)3)),((((x * this->rawData->__get((int)1)) + (y * this->rawData->__get((int)5))) + (z * this->rawData->__get((int)9))) + this->rawData->__get((int)7)),((((x * this->rawData->__get((int)2)) + (y * this->rawData->__get((int)6))) + (z * this->rawData->__get((int)10))) + this->rawData->__get((int)11)),(int)0);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,deltaTransformVector,return )

Void Matrix3D_obj::identity( ){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","identity",0xd35ee2c6,"openfl.geom.Matrix3D.identity","openfl/geom/Matrix3D.hx",440,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_LINE(440)
		this->rawData = Array_obj< Float >::__new().Add(1.0).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(1.0).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(1.0).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(1.0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,identity,(void))

Void Matrix3D_obj::interpolateTo( ::openfl::geom::Matrix3D toMat,Float percent){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","interpolateTo",0x74c2e614,"openfl.geom.Matrix3D.interpolateTo","openfl/geom/Matrix3D.hx",462,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(toMat,"toMat")
		HX_STACK_ARG(percent,"percent")
		HX_STACK_LINE(462)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(462)
		while((true)){
			HX_STACK_LINE(462)
			if ((!(((_g < (int)16))))){
				HX_STACK_LINE(462)
				break;
			}
			HX_STACK_LINE(462)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(464)
			this->rawData[i] = (this->rawData->__get(i) + (((toMat->rawData->__get(i) - this->rawData->__get(i))) * percent));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,interpolateTo,(void))

bool Matrix3D_obj::invert( ){
	HX_STACK_FRAME("openfl.geom.Matrix3D","invert",0x5820929e,"openfl.geom.Matrix3D.invert","openfl/geom/Matrix3D.hx",471,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_LINE(473)
	Float d = (((((((((this->rawData->__get((int)0) * this->rawData->__get((int)5)) - (this->rawData->__get((int)4) * this->rawData->__get((int)1)))) * (((this->rawData->__get((int)10) * this->rawData->__get((int)15)) - (this->rawData->__get((int)14) * this->rawData->__get((int)11))))) - ((((this->rawData->__get((int)0) * this->rawData->__get((int)9)) - (this->rawData->__get((int)8) * this->rawData->__get((int)1)))) * (((this->rawData->__get((int)6) * this->rawData->__get((int)15)) - (this->rawData->__get((int)14) * this->rawData->__get((int)7)))))) + ((((this->rawData->__get((int)0) * this->rawData->__get((int)13)) - (this->rawData->__get((int)12) * this->rawData->__get((int)1)))) * (((this->rawData->__get((int)6) * this->rawData->__get((int)11)) - (this->rawData->__get((int)10) * this->rawData->__get((int)7)))))) + ((((this->rawData->__get((int)4) * this->rawData->__get((int)9)) - (this->rawData->__get((int)8) * this->rawData->__get((int)5)))) * (((this->rawData->__get((int)2) * this->rawData->__get((int)15)) - (this->rawData->__get((int)14) * this->rawData->__get((int)3)))))) - ((((this->rawData->__get((int)4) * this->rawData->__get((int)13)) - (this->rawData->__get((int)12) * this->rawData->__get((int)5)))) * (((this->rawData->__get((int)2) * this->rawData->__get((int)11)) - (this->rawData->__get((int)10) * this->rawData->__get((int)3)))))) + ((((this->rawData->__get((int)8) * this->rawData->__get((int)13)) - (this->rawData->__get((int)12) * this->rawData->__get((int)9)))) * (((this->rawData->__get((int)2) * this->rawData->__get((int)7)) - (this->rawData->__get((int)6) * this->rawData->__get((int)3))))));		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(474)
	Float _g = ::Math_obj::abs(d);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(474)
	bool invertable = (_g > 0.00000000001);		HX_STACK_VAR(invertable,"invertable");
	HX_STACK_LINE(476)
	if ((invertable)){
		HX_STACK_LINE(478)
		d = (Float((int)1) / Float(d));
		HX_STACK_LINE(480)
		Float m11 = this->rawData->__get((int)0);		HX_STACK_VAR(m11,"m11");
		HX_STACK_LINE(480)
		Float m21 = this->rawData->__get((int)4);		HX_STACK_VAR(m21,"m21");
		HX_STACK_LINE(480)
		Float m31 = this->rawData->__get((int)8);		HX_STACK_VAR(m31,"m31");
		HX_STACK_LINE(480)
		Float m41 = this->rawData->__get((int)12);		HX_STACK_VAR(m41,"m41");
		HX_STACK_LINE(481)
		Float m12 = this->rawData->__get((int)1);		HX_STACK_VAR(m12,"m12");
		HX_STACK_LINE(481)
		Float m22 = this->rawData->__get((int)5);		HX_STACK_VAR(m22,"m22");
		HX_STACK_LINE(481)
		Float m32 = this->rawData->__get((int)9);		HX_STACK_VAR(m32,"m32");
		HX_STACK_LINE(481)
		Float m42 = this->rawData->__get((int)13);		HX_STACK_VAR(m42,"m42");
		HX_STACK_LINE(482)
		Float m13 = this->rawData->__get((int)2);		HX_STACK_VAR(m13,"m13");
		HX_STACK_LINE(482)
		Float m23 = this->rawData->__get((int)6);		HX_STACK_VAR(m23,"m23");
		HX_STACK_LINE(482)
		Float m33 = this->rawData->__get((int)10);		HX_STACK_VAR(m33,"m33");
		HX_STACK_LINE(482)
		Float m43 = this->rawData->__get((int)14);		HX_STACK_VAR(m43,"m43");
		HX_STACK_LINE(483)
		Float m14 = this->rawData->__get((int)3);		HX_STACK_VAR(m14,"m14");
		HX_STACK_LINE(483)
		Float m24 = this->rawData->__get((int)7);		HX_STACK_VAR(m24,"m24");
		HX_STACK_LINE(483)
		Float m34 = this->rawData->__get((int)11);		HX_STACK_VAR(m34,"m34");
		HX_STACK_LINE(483)
		Float m44 = this->rawData->__get((int)15);		HX_STACK_VAR(m44,"m44");
		HX_STACK_LINE(485)
		this->rawData[(int)0] = (d * ((((m22 * (((m33 * m44) - (m43 * m34)))) - (m32 * (((m23 * m44) - (m43 * m24))))) + (m42 * (((m23 * m34) - (m33 * m24)))))));
		HX_STACK_LINE(486)
		this->rawData[(int)1] = (-(d) * ((((m12 * (((m33 * m44) - (m43 * m34)))) - (m32 * (((m13 * m44) - (m43 * m14))))) + (m42 * (((m13 * m34) - (m33 * m14)))))));
		HX_STACK_LINE(487)
		this->rawData[(int)2] = (d * ((((m12 * (((m23 * m44) - (m43 * m24)))) - (m22 * (((m13 * m44) - (m43 * m14))))) + (m42 * (((m13 * m24) - (m23 * m14)))))));
		HX_STACK_LINE(488)
		this->rawData[(int)3] = (-(d) * ((((m12 * (((m23 * m34) - (m33 * m24)))) - (m22 * (((m13 * m34) - (m33 * m14))))) + (m32 * (((m13 * m24) - (m23 * m14)))))));
		HX_STACK_LINE(489)
		this->rawData[(int)4] = (-(d) * ((((m21 * (((m33 * m44) - (m43 * m34)))) - (m31 * (((m23 * m44) - (m43 * m24))))) + (m41 * (((m23 * m34) - (m33 * m24)))))));
		HX_STACK_LINE(490)
		this->rawData[(int)5] = (d * ((((m11 * (((m33 * m44) - (m43 * m34)))) - (m31 * (((m13 * m44) - (m43 * m14))))) + (m41 * (((m13 * m34) - (m33 * m14)))))));
		HX_STACK_LINE(491)
		this->rawData[(int)6] = (-(d) * ((((m11 * (((m23 * m44) - (m43 * m24)))) - (m21 * (((m13 * m44) - (m43 * m14))))) + (m41 * (((m13 * m24) - (m23 * m14)))))));
		HX_STACK_LINE(492)
		this->rawData[(int)7] = (d * ((((m11 * (((m23 * m34) - (m33 * m24)))) - (m21 * (((m13 * m34) - (m33 * m14))))) + (m31 * (((m13 * m24) - (m23 * m14)))))));
		HX_STACK_LINE(493)
		this->rawData[(int)8] = (d * ((((m21 * (((m32 * m44) - (m42 * m34)))) - (m31 * (((m22 * m44) - (m42 * m24))))) + (m41 * (((m22 * m34) - (m32 * m24)))))));
		HX_STACK_LINE(494)
		this->rawData[(int)9] = (-(d) * ((((m11 * (((m32 * m44) - (m42 * m34)))) - (m31 * (((m12 * m44) - (m42 * m14))))) + (m41 * (((m12 * m34) - (m32 * m14)))))));
		HX_STACK_LINE(495)
		this->rawData[(int)10] = (d * ((((m11 * (((m22 * m44) - (m42 * m24)))) - (m21 * (((m12 * m44) - (m42 * m14))))) + (m41 * (((m12 * m24) - (m22 * m14)))))));
		HX_STACK_LINE(496)
		this->rawData[(int)11] = (-(d) * ((((m11 * (((m22 * m34) - (m32 * m24)))) - (m21 * (((m12 * m34) - (m32 * m14))))) + (m31 * (((m12 * m24) - (m22 * m14)))))));
		HX_STACK_LINE(497)
		this->rawData[(int)12] = (-(d) * ((((m21 * (((m32 * m43) - (m42 * m33)))) - (m31 * (((m22 * m43) - (m42 * m23))))) + (m41 * (((m22 * m33) - (m32 * m23)))))));
		HX_STACK_LINE(498)
		this->rawData[(int)13] = (d * ((((m11 * (((m32 * m43) - (m42 * m33)))) - (m31 * (((m12 * m43) - (m42 * m13))))) + (m41 * (((m12 * m33) - (m32 * m13)))))));
		HX_STACK_LINE(499)
		this->rawData[(int)14] = (-(d) * ((((m11 * (((m22 * m43) - (m42 * m23)))) - (m21 * (((m12 * m43) - (m42 * m13))))) + (m41 * (((m12 * m23) - (m22 * m13)))))));
		HX_STACK_LINE(500)
		this->rawData[(int)15] = (d * ((((m11 * (((m22 * m33) - (m32 * m23)))) - (m21 * (((m12 * m33) - (m32 * m13))))) + (m31 * (((m12 * m23) - (m22 * m13)))))));
	}
	HX_STACK_LINE(504)
	return invertable;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,invert,return )

Void Matrix3D_obj::pointAt( ::openfl::geom::Vector3D pos,::openfl::geom::Vector3D at,::openfl::geom::Vector3D up){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","pointAt",0xd7900cdb,"openfl.geom.Matrix3D.pointAt","openfl/geom/Matrix3D.hx",509,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(at,"at")
		HX_STACK_ARG(up,"up")
		HX_STACK_LINE(511)
		if (((at == null()))){
			HX_STACK_LINE(513)
			::openfl::geom::Vector3D _g = ::openfl::geom::Vector3D_obj::__new((int)0,(int)0,(int)-1,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(513)
			at = _g;
		}
		HX_STACK_LINE(517)
		if (((up == null()))){
			HX_STACK_LINE(519)
			::openfl::geom::Vector3D _g1 = ::openfl::geom::Vector3D_obj::__new((int)0,(int)-1,(int)0,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(519)
			up = _g1;
		}
		HX_STACK_LINE(523)
		::openfl::geom::Vector3D dir = ::openfl::geom::Vector3D_obj::__new((at->x - pos->x),(at->y - pos->y),(at->z - pos->z),null());		HX_STACK_VAR(dir,"dir");
		HX_STACK_LINE(524)
		::openfl::geom::Vector3D vup = ::openfl::geom::Vector3D_obj::__new(up->x,up->y,up->z,up->w);		HX_STACK_VAR(vup,"vup");
		HX_STACK_LINE(525)
		::openfl::geom::Vector3D right;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(527)
		{
			HX_STACK_LINE(527)
			Float l = ::Math_obj::sqrt((((dir->x * dir->x) + (dir->y * dir->y)) + (dir->z * dir->z)));		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(527)
			if (((l != (int)0))){
				HX_STACK_LINE(527)
				hx::DivEq(dir->x,l);
				HX_STACK_LINE(527)
				hx::DivEq(dir->y,l);
				HX_STACK_LINE(527)
				hx::DivEq(dir->z,l);
			}
			HX_STACK_LINE(527)
			l;
		}
		HX_STACK_LINE(528)
		{
			HX_STACK_LINE(528)
			Float l = ::Math_obj::sqrt((((vup->x * vup->x) + (vup->y * vup->y)) + (vup->z * vup->z)));		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(528)
			if (((l != (int)0))){
				HX_STACK_LINE(528)
				hx::DivEq(vup->x,l);
				HX_STACK_LINE(528)
				hx::DivEq(vup->y,l);
				HX_STACK_LINE(528)
				hx::DivEq(vup->z,l);
			}
			HX_STACK_LINE(528)
			l;
		}
		HX_STACK_LINE(530)
		::openfl::geom::Vector3D dir2 = ::openfl::geom::Vector3D_obj::__new(dir->x,dir->y,dir->z,dir->w);		HX_STACK_VAR(dir2,"dir2");
		HX_STACK_LINE(531)
		{
			HX_STACK_LINE(531)
			Float s = (((vup->x * dir->x) + (vup->y * dir->y)) + (vup->z * dir->z));		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(531)
			hx::MultEq(dir2->x,s);
			HX_STACK_LINE(531)
			hx::MultEq(dir2->y,s);
			HX_STACK_LINE(531)
			hx::MultEq(dir2->z,s);
		}
		HX_STACK_LINE(533)
		::openfl::geom::Vector3D _g2 = ::openfl::geom::Vector3D_obj::__new((vup->x - dir2->x),(vup->y - dir2->y),(vup->z - dir2->z),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(533)
		vup = _g2;
		HX_STACK_LINE(535)
		Float _g3 = ::Math_obj::sqrt((((vup->x * vup->x) + (vup->y * vup->y)) + (vup->z * vup->z)));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(535)
		if (((_g3 > (int)0))){
			HX_STACK_LINE(537)
			Float l = ::Math_obj::sqrt((((vup->x * vup->x) + (vup->y * vup->y)) + (vup->z * vup->z)));		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(537)
			if (((l != (int)0))){
				HX_STACK_LINE(537)
				hx::DivEq(vup->x,l);
				HX_STACK_LINE(537)
				hx::DivEq(vup->y,l);
				HX_STACK_LINE(537)
				hx::DivEq(vup->z,l);
			}
			HX_STACK_LINE(537)
			l;
		}
		else{
			HX_STACK_LINE(541)
			if (((dir->x != (int)0))){
				HX_STACK_LINE(543)
				::openfl::geom::Vector3D _g4 = ::openfl::geom::Vector3D_obj::__new(-(dir->y),dir->x,(int)0,null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(543)
				vup = _g4;
			}
			else{
				HX_STACK_LINE(547)
				::openfl::geom::Vector3D _g5 = ::openfl::geom::Vector3D_obj::__new((int)1,(int)0,(int)0,null());		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(547)
				vup = _g5;
			}
		}
		HX_STACK_LINE(553)
		::openfl::geom::Vector3D _g6 = ::openfl::geom::Vector3D_obj::__new(((vup->y * dir->z) - (vup->z * dir->y)),((vup->z * dir->x) - (vup->x * dir->z)),((vup->x * dir->y) - (vup->y * dir->x)),(int)1);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(553)
		right = _g6;
		HX_STACK_LINE(554)
		{
			HX_STACK_LINE(554)
			Float l = ::Math_obj::sqrt((((right->x * right->x) + (right->y * right->y)) + (right->z * right->z)));		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(554)
			if (((l != (int)0))){
				HX_STACK_LINE(554)
				hx::DivEq(right->x,l);
				HX_STACK_LINE(554)
				hx::DivEq(right->y,l);
				HX_STACK_LINE(554)
				hx::DivEq(right->z,l);
			}
			HX_STACK_LINE(554)
			l;
		}
		HX_STACK_LINE(556)
		this->rawData[(int)0] = right->x;
		HX_STACK_LINE(557)
		this->rawData[(int)4] = right->y;
		HX_STACK_LINE(558)
		this->rawData[(int)8] = right->z;
		HX_STACK_LINE(559)
		this->rawData[(int)12] = 0.0;
		HX_STACK_LINE(560)
		this->rawData[(int)1] = vup->x;
		HX_STACK_LINE(561)
		this->rawData[(int)5] = vup->y;
		HX_STACK_LINE(562)
		this->rawData[(int)9] = vup->z;
		HX_STACK_LINE(563)
		this->rawData[(int)13] = 0.0;
		HX_STACK_LINE(564)
		this->rawData[(int)2] = dir->x;
		HX_STACK_LINE(565)
		this->rawData[(int)6] = dir->y;
		HX_STACK_LINE(566)
		this->rawData[(int)10] = dir->z;
		HX_STACK_LINE(567)
		this->rawData[(int)14] = 0.0;
		HX_STACK_LINE(568)
		this->rawData[(int)3] = pos->x;
		HX_STACK_LINE(569)
		this->rawData[(int)7] = pos->y;
		HX_STACK_LINE(570)
		this->rawData[(int)11] = pos->z;
		HX_STACK_LINE(571)
		this->rawData[(int)15] = 1.0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,pointAt,(void))

Void Matrix3D_obj::prepend( ::openfl::geom::Matrix3D rhs){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","prepend",0xbe4f0286,"openfl.geom.Matrix3D.prepend","openfl/geom/Matrix3D.hx",576,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rhs,"rhs")
		HX_STACK_LINE(578)
		Float m111 = rhs->rawData->__get((int)0);		HX_STACK_VAR(m111,"m111");
		HX_STACK_LINE(578)
		Float m121 = rhs->rawData->__get((int)4);		HX_STACK_VAR(m121,"m121");
		HX_STACK_LINE(578)
		Float m131 = rhs->rawData->__get((int)8);		HX_STACK_VAR(m131,"m131");
		HX_STACK_LINE(578)
		Float m141 = rhs->rawData->__get((int)12);		HX_STACK_VAR(m141,"m141");
		HX_STACK_LINE(579)
		Float m112 = rhs->rawData->__get((int)1);		HX_STACK_VAR(m112,"m112");
		HX_STACK_LINE(579)
		Float m122 = rhs->rawData->__get((int)5);		HX_STACK_VAR(m122,"m122");
		HX_STACK_LINE(579)
		Float m132 = rhs->rawData->__get((int)9);		HX_STACK_VAR(m132,"m132");
		HX_STACK_LINE(579)
		Float m142 = rhs->rawData->__get((int)13);		HX_STACK_VAR(m142,"m142");
		HX_STACK_LINE(580)
		Float m113 = rhs->rawData->__get((int)2);		HX_STACK_VAR(m113,"m113");
		HX_STACK_LINE(580)
		Float m123 = rhs->rawData->__get((int)6);		HX_STACK_VAR(m123,"m123");
		HX_STACK_LINE(580)
		Float m133 = rhs->rawData->__get((int)10);		HX_STACK_VAR(m133,"m133");
		HX_STACK_LINE(580)
		Float m143 = rhs->rawData->__get((int)14);		HX_STACK_VAR(m143,"m143");
		HX_STACK_LINE(581)
		Float m114 = rhs->rawData->__get((int)3);		HX_STACK_VAR(m114,"m114");
		HX_STACK_LINE(581)
		Float m124 = rhs->rawData->__get((int)7);		HX_STACK_VAR(m124,"m124");
		HX_STACK_LINE(581)
		Float m134 = rhs->rawData->__get((int)11);		HX_STACK_VAR(m134,"m134");
		HX_STACK_LINE(581)
		Float m144 = rhs->rawData->__get((int)15);		HX_STACK_VAR(m144,"m144");
		HX_STACK_LINE(582)
		Float m211 = this->rawData->__get((int)0);		HX_STACK_VAR(m211,"m211");
		HX_STACK_LINE(582)
		Float m221 = this->rawData->__get((int)4);		HX_STACK_VAR(m221,"m221");
		HX_STACK_LINE(582)
		Float m231 = this->rawData->__get((int)8);		HX_STACK_VAR(m231,"m231");
		HX_STACK_LINE(582)
		Float m241 = this->rawData->__get((int)12);		HX_STACK_VAR(m241,"m241");
		HX_STACK_LINE(583)
		Float m212 = this->rawData->__get((int)1);		HX_STACK_VAR(m212,"m212");
		HX_STACK_LINE(583)
		Float m222 = this->rawData->__get((int)5);		HX_STACK_VAR(m222,"m222");
		HX_STACK_LINE(583)
		Float m232 = this->rawData->__get((int)9);		HX_STACK_VAR(m232,"m232");
		HX_STACK_LINE(583)
		Float m242 = this->rawData->__get((int)13);		HX_STACK_VAR(m242,"m242");
		HX_STACK_LINE(584)
		Float m213 = this->rawData->__get((int)2);		HX_STACK_VAR(m213,"m213");
		HX_STACK_LINE(584)
		Float m223 = this->rawData->__get((int)6);		HX_STACK_VAR(m223,"m223");
		HX_STACK_LINE(584)
		Float m233 = this->rawData->__get((int)10);		HX_STACK_VAR(m233,"m233");
		HX_STACK_LINE(584)
		Float m243 = this->rawData->__get((int)14);		HX_STACK_VAR(m243,"m243");
		HX_STACK_LINE(585)
		Float m214 = this->rawData->__get((int)3);		HX_STACK_VAR(m214,"m214");
		HX_STACK_LINE(585)
		Float m224 = this->rawData->__get((int)7);		HX_STACK_VAR(m224,"m224");
		HX_STACK_LINE(585)
		Float m234 = this->rawData->__get((int)11);		HX_STACK_VAR(m234,"m234");
		HX_STACK_LINE(585)
		Float m244 = this->rawData->__get((int)15);		HX_STACK_VAR(m244,"m244");
		HX_STACK_LINE(587)
		this->rawData[(int)0] = ((((m111 * m211) + (m112 * m221)) + (m113 * m231)) + (m114 * m241));
		HX_STACK_LINE(588)
		this->rawData[(int)1] = ((((m111 * m212) + (m112 * m222)) + (m113 * m232)) + (m114 * m242));
		HX_STACK_LINE(589)
		this->rawData[(int)2] = ((((m111 * m213) + (m112 * m223)) + (m113 * m233)) + (m114 * m243));
		HX_STACK_LINE(590)
		this->rawData[(int)3] = ((((m111 * m214) + (m112 * m224)) + (m113 * m234)) + (m114 * m244));
		HX_STACK_LINE(592)
		this->rawData[(int)4] = ((((m121 * m211) + (m122 * m221)) + (m123 * m231)) + (m124 * m241));
		HX_STACK_LINE(593)
		this->rawData[(int)5] = ((((m121 * m212) + (m122 * m222)) + (m123 * m232)) + (m124 * m242));
		HX_STACK_LINE(594)
		this->rawData[(int)6] = ((((m121 * m213) + (m122 * m223)) + (m123 * m233)) + (m124 * m243));
		HX_STACK_LINE(595)
		this->rawData[(int)7] = ((((m121 * m214) + (m122 * m224)) + (m123 * m234)) + (m124 * m244));
		HX_STACK_LINE(597)
		this->rawData[(int)8] = ((((m131 * m211) + (m132 * m221)) + (m133 * m231)) + (m134 * m241));
		HX_STACK_LINE(598)
		this->rawData[(int)9] = ((((m131 * m212) + (m132 * m222)) + (m133 * m232)) + (m134 * m242));
		HX_STACK_LINE(599)
		this->rawData[(int)10] = ((((m131 * m213) + (m132 * m223)) + (m133 * m233)) + (m134 * m243));
		HX_STACK_LINE(600)
		this->rawData[(int)11] = ((((m131 * m214) + (m132 * m224)) + (m133 * m234)) + (m134 * m244));
		HX_STACK_LINE(602)
		this->rawData[(int)12] = ((((m141 * m211) + (m142 * m221)) + (m143 * m231)) + (m144 * m241));
		HX_STACK_LINE(603)
		this->rawData[(int)13] = ((((m141 * m212) + (m142 * m222)) + (m143 * m232)) + (m144 * m242));
		HX_STACK_LINE(604)
		this->rawData[(int)14] = ((((m141 * m213) + (m142 * m223)) + (m143 * m233)) + (m144 * m243));
		HX_STACK_LINE(605)
		this->rawData[(int)15] = ((((m141 * m214) + (m142 * m224)) + (m143 * m234)) + (m144 * m244));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,prepend,(void))

Void Matrix3D_obj::prependRotation( Float degrees,::openfl::geom::Vector3D axis,::openfl::geom::Vector3D pivotPoint){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","prependRotation",0x54b5f1e4,"openfl.geom.Matrix3D.prependRotation","openfl/geom/Matrix3D.hx",610,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(degrees,"degrees")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(pivotPoint,"pivotPoint")
		HX_STACK_LINE(612)
		::openfl::geom::Matrix3D m = ::openfl::geom::Matrix3D_obj::getAxisRotation(axis->x,axis->y,axis->z,degrees);		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(614)
		if (((pivotPoint != null()))){
			HX_STACK_LINE(616)
			::openfl::geom::Vector3D p = pivotPoint;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(617)
			{
				HX_STACK_LINE(617)
				m->rawData[(int)12] = (m->rawData->__get((int)12) + p->x);
				HX_STACK_LINE(617)
				m->rawData[(int)13] = (m->rawData->__get((int)13) + p->y);
				HX_STACK_LINE(617)
				m->rawData[(int)14] = (m->rawData->__get((int)14) + p->z);
			}
		}
		HX_STACK_LINE(621)
		{
			HX_STACK_LINE(621)
			Float m111 = m->rawData->__get((int)0);		HX_STACK_VAR(m111,"m111");
			HX_STACK_LINE(621)
			Float m121 = m->rawData->__get((int)4);		HX_STACK_VAR(m121,"m121");
			HX_STACK_LINE(621)
			Float m131 = m->rawData->__get((int)8);		HX_STACK_VAR(m131,"m131");
			HX_STACK_LINE(621)
			Float m141 = m->rawData->__get((int)12);		HX_STACK_VAR(m141,"m141");
			HX_STACK_LINE(621)
			Float m112 = m->rawData->__get((int)1);		HX_STACK_VAR(m112,"m112");
			HX_STACK_LINE(621)
			Float m122 = m->rawData->__get((int)5);		HX_STACK_VAR(m122,"m122");
			HX_STACK_LINE(621)
			Float m132 = m->rawData->__get((int)9);		HX_STACK_VAR(m132,"m132");
			HX_STACK_LINE(621)
			Float m142 = m->rawData->__get((int)13);		HX_STACK_VAR(m142,"m142");
			HX_STACK_LINE(621)
			Float m113 = m->rawData->__get((int)2);		HX_STACK_VAR(m113,"m113");
			HX_STACK_LINE(621)
			Float m123 = m->rawData->__get((int)6);		HX_STACK_VAR(m123,"m123");
			HX_STACK_LINE(621)
			Float m133 = m->rawData->__get((int)10);		HX_STACK_VAR(m133,"m133");
			HX_STACK_LINE(621)
			Float m143 = m->rawData->__get((int)14);		HX_STACK_VAR(m143,"m143");
			HX_STACK_LINE(621)
			Float m114 = m->rawData->__get((int)3);		HX_STACK_VAR(m114,"m114");
			HX_STACK_LINE(621)
			Float m124 = m->rawData->__get((int)7);		HX_STACK_VAR(m124,"m124");
			HX_STACK_LINE(621)
			Float m134 = m->rawData->__get((int)11);		HX_STACK_VAR(m134,"m134");
			HX_STACK_LINE(621)
			Float m144 = m->rawData->__get((int)15);		HX_STACK_VAR(m144,"m144");
			HX_STACK_LINE(621)
			Float m211 = this->rawData->__get((int)0);		HX_STACK_VAR(m211,"m211");
			HX_STACK_LINE(621)
			Float m221 = this->rawData->__get((int)4);		HX_STACK_VAR(m221,"m221");
			HX_STACK_LINE(621)
			Float m231 = this->rawData->__get((int)8);		HX_STACK_VAR(m231,"m231");
			HX_STACK_LINE(621)
			Float m241 = this->rawData->__get((int)12);		HX_STACK_VAR(m241,"m241");
			HX_STACK_LINE(621)
			Float m212 = this->rawData->__get((int)1);		HX_STACK_VAR(m212,"m212");
			HX_STACK_LINE(621)
			Float m222 = this->rawData->__get((int)5);		HX_STACK_VAR(m222,"m222");
			HX_STACK_LINE(621)
			Float m232 = this->rawData->__get((int)9);		HX_STACK_VAR(m232,"m232");
			HX_STACK_LINE(621)
			Float m242 = this->rawData->__get((int)13);		HX_STACK_VAR(m242,"m242");
			HX_STACK_LINE(621)
			Float m213 = this->rawData->__get((int)2);		HX_STACK_VAR(m213,"m213");
			HX_STACK_LINE(621)
			Float m223 = this->rawData->__get((int)6);		HX_STACK_VAR(m223,"m223");
			HX_STACK_LINE(621)
			Float m233 = this->rawData->__get((int)10);		HX_STACK_VAR(m233,"m233");
			HX_STACK_LINE(621)
			Float m243 = this->rawData->__get((int)14);		HX_STACK_VAR(m243,"m243");
			HX_STACK_LINE(621)
			Float m214 = this->rawData->__get((int)3);		HX_STACK_VAR(m214,"m214");
			HX_STACK_LINE(621)
			Float m224 = this->rawData->__get((int)7);		HX_STACK_VAR(m224,"m224");
			HX_STACK_LINE(621)
			Float m234 = this->rawData->__get((int)11);		HX_STACK_VAR(m234,"m234");
			HX_STACK_LINE(621)
			Float m244 = this->rawData->__get((int)15);		HX_STACK_VAR(m244,"m244");
			HX_STACK_LINE(621)
			this->rawData[(int)0] = ((((m111 * m211) + (m112 * m221)) + (m113 * m231)) + (m114 * m241));
			HX_STACK_LINE(621)
			this->rawData[(int)1] = ((((m111 * m212) + (m112 * m222)) + (m113 * m232)) + (m114 * m242));
			HX_STACK_LINE(621)
			this->rawData[(int)2] = ((((m111 * m213) + (m112 * m223)) + (m113 * m233)) + (m114 * m243));
			HX_STACK_LINE(621)
			this->rawData[(int)3] = ((((m111 * m214) + (m112 * m224)) + (m113 * m234)) + (m114 * m244));
			HX_STACK_LINE(621)
			this->rawData[(int)4] = ((((m121 * m211) + (m122 * m221)) + (m123 * m231)) + (m124 * m241));
			HX_STACK_LINE(621)
			this->rawData[(int)5] = ((((m121 * m212) + (m122 * m222)) + (m123 * m232)) + (m124 * m242));
			HX_STACK_LINE(621)
			this->rawData[(int)6] = ((((m121 * m213) + (m122 * m223)) + (m123 * m233)) + (m124 * m243));
			HX_STACK_LINE(621)
			this->rawData[(int)7] = ((((m121 * m214) + (m122 * m224)) + (m123 * m234)) + (m124 * m244));
			HX_STACK_LINE(621)
			this->rawData[(int)8] = ((((m131 * m211) + (m132 * m221)) + (m133 * m231)) + (m134 * m241));
			HX_STACK_LINE(621)
			this->rawData[(int)9] = ((((m131 * m212) + (m132 * m222)) + (m133 * m232)) + (m134 * m242));
			HX_STACK_LINE(621)
			this->rawData[(int)10] = ((((m131 * m213) + (m132 * m223)) + (m133 * m233)) + (m134 * m243));
			HX_STACK_LINE(621)
			this->rawData[(int)11] = ((((m131 * m214) + (m132 * m224)) + (m133 * m234)) + (m134 * m244));
			HX_STACK_LINE(621)
			this->rawData[(int)12] = ((((m141 * m211) + (m142 * m221)) + (m143 * m231)) + (m144 * m241));
			HX_STACK_LINE(621)
			this->rawData[(int)13] = ((((m141 * m212) + (m142 * m222)) + (m143 * m232)) + (m144 * m242));
			HX_STACK_LINE(621)
			this->rawData[(int)14] = ((((m141 * m213) + (m142 * m223)) + (m143 * m233)) + (m144 * m243));
			HX_STACK_LINE(621)
			this->rawData[(int)15] = ((((m141 * m214) + (m142 * m224)) + (m143 * m234)) + (m144 * m244));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,prependRotation,(void))

Void Matrix3D_obj::prependScale( Float xScale,Float yScale,Float zScale){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","prependScale",0x59d85624,"openfl.geom.Matrix3D.prependScale","openfl/geom/Matrix3D.hx",628,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xScale,"xScale")
		HX_STACK_ARG(yScale,"yScale")
		HX_STACK_ARG(zScale,"zScale")
		HX_STACK_LINE(628)
		::openfl::geom::Matrix3D rhs = ::openfl::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add(xScale).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(yScale).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(zScale).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(1.0));		HX_STACK_VAR(rhs,"rhs");
		HX_STACK_LINE(628)
		Float m111 = rhs->rawData->__get((int)0);		HX_STACK_VAR(m111,"m111");
		HX_STACK_LINE(628)
		Float m121 = rhs->rawData->__get((int)4);		HX_STACK_VAR(m121,"m121");
		HX_STACK_LINE(628)
		Float m131 = rhs->rawData->__get((int)8);		HX_STACK_VAR(m131,"m131");
		HX_STACK_LINE(628)
		Float m141 = rhs->rawData->__get((int)12);		HX_STACK_VAR(m141,"m141");
		HX_STACK_LINE(628)
		Float m112 = rhs->rawData->__get((int)1);		HX_STACK_VAR(m112,"m112");
		HX_STACK_LINE(628)
		Float m122 = rhs->rawData->__get((int)5);		HX_STACK_VAR(m122,"m122");
		HX_STACK_LINE(628)
		Float m132 = rhs->rawData->__get((int)9);		HX_STACK_VAR(m132,"m132");
		HX_STACK_LINE(628)
		Float m142 = rhs->rawData->__get((int)13);		HX_STACK_VAR(m142,"m142");
		HX_STACK_LINE(628)
		Float m113 = rhs->rawData->__get((int)2);		HX_STACK_VAR(m113,"m113");
		HX_STACK_LINE(628)
		Float m123 = rhs->rawData->__get((int)6);		HX_STACK_VAR(m123,"m123");
		HX_STACK_LINE(628)
		Float m133 = rhs->rawData->__get((int)10);		HX_STACK_VAR(m133,"m133");
		HX_STACK_LINE(628)
		Float m143 = rhs->rawData->__get((int)14);		HX_STACK_VAR(m143,"m143");
		HX_STACK_LINE(628)
		Float m114 = rhs->rawData->__get((int)3);		HX_STACK_VAR(m114,"m114");
		HX_STACK_LINE(628)
		Float m124 = rhs->rawData->__get((int)7);		HX_STACK_VAR(m124,"m124");
		HX_STACK_LINE(628)
		Float m134 = rhs->rawData->__get((int)11);		HX_STACK_VAR(m134,"m134");
		HX_STACK_LINE(628)
		Float m144 = rhs->rawData->__get((int)15);		HX_STACK_VAR(m144,"m144");
		HX_STACK_LINE(628)
		Float m211 = this->rawData->__get((int)0);		HX_STACK_VAR(m211,"m211");
		HX_STACK_LINE(628)
		Float m221 = this->rawData->__get((int)4);		HX_STACK_VAR(m221,"m221");
		HX_STACK_LINE(628)
		Float m231 = this->rawData->__get((int)8);		HX_STACK_VAR(m231,"m231");
		HX_STACK_LINE(628)
		Float m241 = this->rawData->__get((int)12);		HX_STACK_VAR(m241,"m241");
		HX_STACK_LINE(628)
		Float m212 = this->rawData->__get((int)1);		HX_STACK_VAR(m212,"m212");
		HX_STACK_LINE(628)
		Float m222 = this->rawData->__get((int)5);		HX_STACK_VAR(m222,"m222");
		HX_STACK_LINE(628)
		Float m232 = this->rawData->__get((int)9);		HX_STACK_VAR(m232,"m232");
		HX_STACK_LINE(628)
		Float m242 = this->rawData->__get((int)13);		HX_STACK_VAR(m242,"m242");
		HX_STACK_LINE(628)
		Float m213 = this->rawData->__get((int)2);		HX_STACK_VAR(m213,"m213");
		HX_STACK_LINE(628)
		Float m223 = this->rawData->__get((int)6);		HX_STACK_VAR(m223,"m223");
		HX_STACK_LINE(628)
		Float m233 = this->rawData->__get((int)10);		HX_STACK_VAR(m233,"m233");
		HX_STACK_LINE(628)
		Float m243 = this->rawData->__get((int)14);		HX_STACK_VAR(m243,"m243");
		HX_STACK_LINE(628)
		Float m214 = this->rawData->__get((int)3);		HX_STACK_VAR(m214,"m214");
		HX_STACK_LINE(628)
		Float m224 = this->rawData->__get((int)7);		HX_STACK_VAR(m224,"m224");
		HX_STACK_LINE(628)
		Float m234 = this->rawData->__get((int)11);		HX_STACK_VAR(m234,"m234");
		HX_STACK_LINE(628)
		Float m244 = this->rawData->__get((int)15);		HX_STACK_VAR(m244,"m244");
		HX_STACK_LINE(628)
		this->rawData[(int)0] = ((((m111 * m211) + (m112 * m221)) + (m113 * m231)) + (m114 * m241));
		HX_STACK_LINE(628)
		this->rawData[(int)1] = ((((m111 * m212) + (m112 * m222)) + (m113 * m232)) + (m114 * m242));
		HX_STACK_LINE(628)
		this->rawData[(int)2] = ((((m111 * m213) + (m112 * m223)) + (m113 * m233)) + (m114 * m243));
		HX_STACK_LINE(628)
		this->rawData[(int)3] = ((((m111 * m214) + (m112 * m224)) + (m113 * m234)) + (m114 * m244));
		HX_STACK_LINE(628)
		this->rawData[(int)4] = ((((m121 * m211) + (m122 * m221)) + (m123 * m231)) + (m124 * m241));
		HX_STACK_LINE(628)
		this->rawData[(int)5] = ((((m121 * m212) + (m122 * m222)) + (m123 * m232)) + (m124 * m242));
		HX_STACK_LINE(628)
		this->rawData[(int)6] = ((((m121 * m213) + (m122 * m223)) + (m123 * m233)) + (m124 * m243));
		HX_STACK_LINE(628)
		this->rawData[(int)7] = ((((m121 * m214) + (m122 * m224)) + (m123 * m234)) + (m124 * m244));
		HX_STACK_LINE(628)
		this->rawData[(int)8] = ((((m131 * m211) + (m132 * m221)) + (m133 * m231)) + (m134 * m241));
		HX_STACK_LINE(628)
		this->rawData[(int)9] = ((((m131 * m212) + (m132 * m222)) + (m133 * m232)) + (m134 * m242));
		HX_STACK_LINE(628)
		this->rawData[(int)10] = ((((m131 * m213) + (m132 * m223)) + (m133 * m233)) + (m134 * m243));
		HX_STACK_LINE(628)
		this->rawData[(int)11] = ((((m131 * m214) + (m132 * m224)) + (m133 * m234)) + (m134 * m244));
		HX_STACK_LINE(628)
		this->rawData[(int)12] = ((((m141 * m211) + (m142 * m221)) + (m143 * m231)) + (m144 * m241));
		HX_STACK_LINE(628)
		this->rawData[(int)13] = ((((m141 * m212) + (m142 * m222)) + (m143 * m232)) + (m144 * m242));
		HX_STACK_LINE(628)
		this->rawData[(int)14] = ((((m141 * m213) + (m142 * m223)) + (m143 * m233)) + (m144 * m243));
		HX_STACK_LINE(628)
		this->rawData[(int)15] = ((((m141 * m214) + (m142 * m224)) + (m143 * m234)) + (m144 * m244));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,prependScale,(void))

Void Matrix3D_obj::prependTranslation( Float x,Float y,Float z){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","prependTranslation",0x2df4680b,"openfl.geom.Matrix3D.prependTranslation","openfl/geom/Matrix3D.hx",633,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(635)
		::openfl::geom::Matrix3D m = ::openfl::geom::Matrix3D_obj::__new(null());		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(636)
		{
			HX_STACK_LINE(636)
			::openfl::geom::Vector3D val = ::openfl::geom::Vector3D_obj::__new(x,y,z,null());		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(636)
			m->rawData[(int)12] = val->x;
			HX_STACK_LINE(636)
			m->rawData[(int)13] = val->y;
			HX_STACK_LINE(636)
			m->rawData[(int)14] = val->z;
			HX_STACK_LINE(636)
			val;
		}
		HX_STACK_LINE(637)
		{
			HX_STACK_LINE(637)
			Float m111 = m->rawData->__get((int)0);		HX_STACK_VAR(m111,"m111");
			HX_STACK_LINE(637)
			Float m121 = m->rawData->__get((int)4);		HX_STACK_VAR(m121,"m121");
			HX_STACK_LINE(637)
			Float m131 = m->rawData->__get((int)8);		HX_STACK_VAR(m131,"m131");
			HX_STACK_LINE(637)
			Float m141 = m->rawData->__get((int)12);		HX_STACK_VAR(m141,"m141");
			HX_STACK_LINE(637)
			Float m112 = m->rawData->__get((int)1);		HX_STACK_VAR(m112,"m112");
			HX_STACK_LINE(637)
			Float m122 = m->rawData->__get((int)5);		HX_STACK_VAR(m122,"m122");
			HX_STACK_LINE(637)
			Float m132 = m->rawData->__get((int)9);		HX_STACK_VAR(m132,"m132");
			HX_STACK_LINE(637)
			Float m142 = m->rawData->__get((int)13);		HX_STACK_VAR(m142,"m142");
			HX_STACK_LINE(637)
			Float m113 = m->rawData->__get((int)2);		HX_STACK_VAR(m113,"m113");
			HX_STACK_LINE(637)
			Float m123 = m->rawData->__get((int)6);		HX_STACK_VAR(m123,"m123");
			HX_STACK_LINE(637)
			Float m133 = m->rawData->__get((int)10);		HX_STACK_VAR(m133,"m133");
			HX_STACK_LINE(637)
			Float m143 = m->rawData->__get((int)14);		HX_STACK_VAR(m143,"m143");
			HX_STACK_LINE(637)
			Float m114 = m->rawData->__get((int)3);		HX_STACK_VAR(m114,"m114");
			HX_STACK_LINE(637)
			Float m124 = m->rawData->__get((int)7);		HX_STACK_VAR(m124,"m124");
			HX_STACK_LINE(637)
			Float m134 = m->rawData->__get((int)11);		HX_STACK_VAR(m134,"m134");
			HX_STACK_LINE(637)
			Float m144 = m->rawData->__get((int)15);		HX_STACK_VAR(m144,"m144");
			HX_STACK_LINE(637)
			Float m211 = this->rawData->__get((int)0);		HX_STACK_VAR(m211,"m211");
			HX_STACK_LINE(637)
			Float m221 = this->rawData->__get((int)4);		HX_STACK_VAR(m221,"m221");
			HX_STACK_LINE(637)
			Float m231 = this->rawData->__get((int)8);		HX_STACK_VAR(m231,"m231");
			HX_STACK_LINE(637)
			Float m241 = this->rawData->__get((int)12);		HX_STACK_VAR(m241,"m241");
			HX_STACK_LINE(637)
			Float m212 = this->rawData->__get((int)1);		HX_STACK_VAR(m212,"m212");
			HX_STACK_LINE(637)
			Float m222 = this->rawData->__get((int)5);		HX_STACK_VAR(m222,"m222");
			HX_STACK_LINE(637)
			Float m232 = this->rawData->__get((int)9);		HX_STACK_VAR(m232,"m232");
			HX_STACK_LINE(637)
			Float m242 = this->rawData->__get((int)13);		HX_STACK_VAR(m242,"m242");
			HX_STACK_LINE(637)
			Float m213 = this->rawData->__get((int)2);		HX_STACK_VAR(m213,"m213");
			HX_STACK_LINE(637)
			Float m223 = this->rawData->__get((int)6);		HX_STACK_VAR(m223,"m223");
			HX_STACK_LINE(637)
			Float m233 = this->rawData->__get((int)10);		HX_STACK_VAR(m233,"m233");
			HX_STACK_LINE(637)
			Float m243 = this->rawData->__get((int)14);		HX_STACK_VAR(m243,"m243");
			HX_STACK_LINE(637)
			Float m214 = this->rawData->__get((int)3);		HX_STACK_VAR(m214,"m214");
			HX_STACK_LINE(637)
			Float m224 = this->rawData->__get((int)7);		HX_STACK_VAR(m224,"m224");
			HX_STACK_LINE(637)
			Float m234 = this->rawData->__get((int)11);		HX_STACK_VAR(m234,"m234");
			HX_STACK_LINE(637)
			Float m244 = this->rawData->__get((int)15);		HX_STACK_VAR(m244,"m244");
			HX_STACK_LINE(637)
			this->rawData[(int)0] = ((((m111 * m211) + (m112 * m221)) + (m113 * m231)) + (m114 * m241));
			HX_STACK_LINE(637)
			this->rawData[(int)1] = ((((m111 * m212) + (m112 * m222)) + (m113 * m232)) + (m114 * m242));
			HX_STACK_LINE(637)
			this->rawData[(int)2] = ((((m111 * m213) + (m112 * m223)) + (m113 * m233)) + (m114 * m243));
			HX_STACK_LINE(637)
			this->rawData[(int)3] = ((((m111 * m214) + (m112 * m224)) + (m113 * m234)) + (m114 * m244));
			HX_STACK_LINE(637)
			this->rawData[(int)4] = ((((m121 * m211) + (m122 * m221)) + (m123 * m231)) + (m124 * m241));
			HX_STACK_LINE(637)
			this->rawData[(int)5] = ((((m121 * m212) + (m122 * m222)) + (m123 * m232)) + (m124 * m242));
			HX_STACK_LINE(637)
			this->rawData[(int)6] = ((((m121 * m213) + (m122 * m223)) + (m123 * m233)) + (m124 * m243));
			HX_STACK_LINE(637)
			this->rawData[(int)7] = ((((m121 * m214) + (m122 * m224)) + (m123 * m234)) + (m124 * m244));
			HX_STACK_LINE(637)
			this->rawData[(int)8] = ((((m131 * m211) + (m132 * m221)) + (m133 * m231)) + (m134 * m241));
			HX_STACK_LINE(637)
			this->rawData[(int)9] = ((((m131 * m212) + (m132 * m222)) + (m133 * m232)) + (m134 * m242));
			HX_STACK_LINE(637)
			this->rawData[(int)10] = ((((m131 * m213) + (m132 * m223)) + (m133 * m233)) + (m134 * m243));
			HX_STACK_LINE(637)
			this->rawData[(int)11] = ((((m131 * m214) + (m132 * m224)) + (m133 * m234)) + (m134 * m244));
			HX_STACK_LINE(637)
			this->rawData[(int)12] = ((((m141 * m211) + (m142 * m221)) + (m143 * m231)) + (m144 * m241));
			HX_STACK_LINE(637)
			this->rawData[(int)13] = ((((m141 * m212) + (m142 * m222)) + (m143 * m232)) + (m144 * m242));
			HX_STACK_LINE(637)
			this->rawData[(int)14] = ((((m141 * m213) + (m142 * m223)) + (m143 * m233)) + (m144 * m243));
			HX_STACK_LINE(637)
			this->rawData[(int)15] = ((((m141 * m214) + (m142 * m224)) + (m143 * m234)) + (m144 * m244));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,prependTranslation,(void))

bool Matrix3D_obj::recompose( Array< ::Dynamic > components,::openfl::geom::Orientation3D orientationStyle){
	HX_STACK_FRAME("openfl.geom.Matrix3D","recompose",0xd355bb37,"openfl.geom.Matrix3D.recompose","openfl/geom/Matrix3D.hx",642,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_ARG(components,"components")
	HX_STACK_ARG(orientationStyle,"orientationStyle")
	HX_STACK_LINE(644)
	if (((bool((bool((bool((components->length < (int)3)) || bool((components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >()->x == (int)0)))) || bool((components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >()->y == (int)0)))) || bool((components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >()->z == (int)0))))){
		HX_STACK_LINE(645)
		return false;
	}
	HX_STACK_LINE(647)
	if (((orientationStyle == null()))){
		HX_STACK_LINE(648)
		orientationStyle = ::openfl::geom::Orientation3D_obj::EULER_ANGLES;
	}
	HX_STACK_LINE(650)
	this->identity();
	HX_STACK_LINE(652)
	Array< Float > scale = Array_obj< Float >::__new();		HX_STACK_VAR(scale,"scale");
	HX_STACK_LINE(653)
	scale[(int)0] = scale[(int)1] = scale[(int)2] = components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >()->x;
	HX_STACK_LINE(654)
	scale[(int)4] = scale[(int)5] = scale[(int)6] = components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >()->y;
	HX_STACK_LINE(655)
	scale[(int)8] = scale[(int)9] = scale[(int)10] = components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >()->z;
	HX_STACK_LINE(657)
	switch( (int)(orientationStyle->__Index())){
		case (int)1: {
			HX_STACK_LINE(660)
			Float cx = ::Math_obj::cos(components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >()->x);		HX_STACK_VAR(cx,"cx");
			HX_STACK_LINE(661)
			Float cy = ::Math_obj::cos(components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >()->y);		HX_STACK_VAR(cy,"cy");
			HX_STACK_LINE(662)
			Float cz = ::Math_obj::cos(components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >()->z);		HX_STACK_VAR(cz,"cz");
			HX_STACK_LINE(663)
			Float sx = ::Math_obj::sin(components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >()->x);		HX_STACK_VAR(sx,"sx");
			HX_STACK_LINE(664)
			Float sy = ::Math_obj::sin(components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >()->y);		HX_STACK_VAR(sy,"sy");
			HX_STACK_LINE(665)
			Float sz = ::Math_obj::sin(components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >()->z);		HX_STACK_VAR(sz,"sz");
			HX_STACK_LINE(667)
			this->rawData[(int)0] = ((cy * cz) * scale->__get((int)0));
			HX_STACK_LINE(668)
			this->rawData[(int)1] = ((cy * sz) * scale->__get((int)1));
			HX_STACK_LINE(669)
			this->rawData[(int)2] = (-(sy) * scale->__get((int)2));
			HX_STACK_LINE(670)
			this->rawData[(int)3] = (int)0;
			HX_STACK_LINE(671)
			this->rawData[(int)4] = (((((sx * sy) * cz) - (cx * sz))) * scale->__get((int)4));
			HX_STACK_LINE(672)
			this->rawData[(int)5] = (((((sx * sy) * sz) + (cx * cz))) * scale->__get((int)5));
			HX_STACK_LINE(673)
			this->rawData[(int)6] = ((sx * cy) * scale->__get((int)6));
			HX_STACK_LINE(674)
			this->rawData[(int)7] = (int)0;
			HX_STACK_LINE(675)
			this->rawData[(int)8] = (((((cx * sy) * cz) + (sx * sz))) * scale->__get((int)8));
			HX_STACK_LINE(676)
			this->rawData[(int)9] = (((((cx * sy) * sz) - (sx * cz))) * scale->__get((int)9));
			HX_STACK_LINE(677)
			this->rawData[(int)10] = ((cx * cy) * scale->__get((int)10));
			HX_STACK_LINE(678)
			this->rawData[(int)11] = (int)0;
			HX_STACK_LINE(679)
			this->rawData[(int)12] = components->__get((int)0).StaticCast< ::openfl::geom::Vector3D >()->x;
			HX_STACK_LINE(680)
			this->rawData[(int)13] = components->__get((int)0).StaticCast< ::openfl::geom::Vector3D >()->y;
			HX_STACK_LINE(681)
			this->rawData[(int)14] = components->__get((int)0).StaticCast< ::openfl::geom::Vector3D >()->z;
			HX_STACK_LINE(682)
			this->rawData[(int)15] = (int)1;
		}
		;break;
		default: {
			HX_STACK_LINE(686)
			Float x = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >()->x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(687)
			Float y = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >()->y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(688)
			Float z = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >()->z;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(689)
			Float w = components->__get((int)1).StaticCast< ::openfl::geom::Vector3D >()->w;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(690)
			if ((::Type_obj::enumEq(orientationStyle,::openfl::geom::Orientation3D_obj::AXIS_ANGLE))){
				HX_STACK_LINE(691)
				Float _g = ::Math_obj::sin((Float(w) / Float((int)2)));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(691)
				hx::MultEq(x,_g);
				HX_STACK_LINE(692)
				Float _g1 = ::Math_obj::sin((Float(w) / Float((int)2)));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(692)
				hx::MultEq(y,_g1);
				HX_STACK_LINE(693)
				Float _g2 = ::Math_obj::sin((Float(w) / Float((int)2)));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(693)
				hx::MultEq(z,_g2);
				HX_STACK_LINE(694)
				Float _g3 = ::Math_obj::cos((Float(w) / Float((int)2)));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(694)
				w = _g3;
			}
			HX_STACK_LINE(697)
			this->rawData[(int)0] = (((((int)1 - (((int)2 * y) * y)) - (((int)2 * z) * z))) * scale->__get((int)0));
			HX_STACK_LINE(698)
			this->rawData[(int)1] = ((((((int)2 * x) * y) + (((int)2 * w) * z))) * scale->__get((int)1));
			HX_STACK_LINE(699)
			this->rawData[(int)2] = ((((((int)2 * x) * z) - (((int)2 * w) * y))) * scale->__get((int)2));
			HX_STACK_LINE(700)
			this->rawData[(int)3] = (int)0;
			HX_STACK_LINE(701)
			this->rawData[(int)4] = ((((((int)2 * x) * y) - (((int)2 * w) * z))) * scale->__get((int)4));
			HX_STACK_LINE(702)
			this->rawData[(int)5] = (((((int)1 - (((int)2 * x) * x)) - (((int)2 * z) * z))) * scale->__get((int)5));
			HX_STACK_LINE(703)
			this->rawData[(int)6] = ((((((int)2 * y) * z) + (((int)2 * w) * x))) * scale->__get((int)6));
			HX_STACK_LINE(704)
			this->rawData[(int)7] = (int)0;
			HX_STACK_LINE(705)
			this->rawData[(int)8] = ((((((int)2 * x) * z) + (((int)2 * w) * y))) * scale->__get((int)8));
			HX_STACK_LINE(706)
			this->rawData[(int)9] = ((((((int)2 * y) * z) - (((int)2 * w) * x))) * scale->__get((int)9));
			HX_STACK_LINE(707)
			this->rawData[(int)10] = (((((int)1 - (((int)2 * x) * x)) - (((int)2 * y) * y))) * scale->__get((int)10));
			HX_STACK_LINE(708)
			this->rawData[(int)11] = (int)0;
			HX_STACK_LINE(709)
			this->rawData[(int)12] = components->__get((int)0).StaticCast< ::openfl::geom::Vector3D >()->x;
			HX_STACK_LINE(710)
			this->rawData[(int)13] = components->__get((int)0).StaticCast< ::openfl::geom::Vector3D >()->y;
			HX_STACK_LINE(711)
			this->rawData[(int)14] = components->__get((int)0).StaticCast< ::openfl::geom::Vector3D >()->z;
			HX_STACK_LINE(712)
			this->rawData[(int)15] = (int)1;
		}
	}
	HX_STACK_LINE(715)
	if (((components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >()->x == (int)0))){
		HX_STACK_LINE(716)
		this->rawData[(int)0] = 1e-15;
	}
	HX_STACK_LINE(717)
	if (((components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >()->y == (int)0))){
		HX_STACK_LINE(718)
		this->rawData[(int)5] = 1e-15;
	}
	HX_STACK_LINE(719)
	if (((components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >()->z == (int)0))){
		HX_STACK_LINE(720)
		this->rawData[(int)10] = 1e-15;
	}
	HX_STACK_LINE(722)
	return !(((bool((bool((components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >()->x == (int)0)) || bool((components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >()->y == (int)0)))) || bool((components->__get((int)2).StaticCast< ::openfl::geom::Vector3D >()->y == (int)0)))));
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,recompose,return )

::openfl::geom::Vector3D Matrix3D_obj::transformVector( ::openfl::geom::Vector3D v){
	HX_STACK_FRAME("openfl.geom.Matrix3D","transformVector",0x3f2dcec7,"openfl.geom.Matrix3D.transformVector","openfl/geom/Matrix3D.hx",726,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(728)
	Float x = v->x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(728)
	Float y = v->y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(728)
	Float z = v->z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(730)
	return ::openfl::geom::Vector3D_obj::__new(((((x * this->rawData->__get((int)0)) + (y * this->rawData->__get((int)4))) + (z * this->rawData->__get((int)8))) + this->rawData->__get((int)12)),((((x * this->rawData->__get((int)1)) + (y * this->rawData->__get((int)5))) + (z * this->rawData->__get((int)9))) + this->rawData->__get((int)13)),((((x * this->rawData->__get((int)2)) + (y * this->rawData->__get((int)6))) + (z * this->rawData->__get((int)10))) + this->rawData->__get((int)14)),((((x * this->rawData->__get((int)3)) + (y * this->rawData->__get((int)7))) + (z * this->rawData->__get((int)11))) + this->rawData->__get((int)15)));
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,transformVector,return )

Void Matrix3D_obj::transformVectors( Array< Float > vin,Array< Float > vout){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","transformVectors",0x08e71fcc,"openfl.geom.Matrix3D.transformVectors","openfl/geom/Matrix3D.hx",739,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vin,"vin")
		HX_STACK_ARG(vout,"vout")
		HX_STACK_LINE(741)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(743)
		while((true)){
			HX_STACK_LINE(743)
			if ((!((((i + (int)3) <= vin->length))))){
				HX_STACK_LINE(743)
				break;
			}
			HX_STACK_LINE(745)
			Float x = vin->__get(i);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(745)
			Float y = vin->__get((i + (int)1));		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(745)
			Float z = vin->__get((i + (int)2));		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(747)
			vout[i] = ((((x * this->rawData->__get((int)0)) + (y * this->rawData->__get((int)4))) + (z * this->rawData->__get((int)8))) + this->rawData->__get((int)12));
			HX_STACK_LINE(748)
			vout[(i + (int)1)] = ((((x * this->rawData->__get((int)1)) + (y * this->rawData->__get((int)5))) + (z * this->rawData->__get((int)9))) + this->rawData->__get((int)13));
			HX_STACK_LINE(749)
			vout[(i + (int)2)] = ((((x * this->rawData->__get((int)2)) + (y * this->rawData->__get((int)6))) + (z * this->rawData->__get((int)10))) + this->rawData->__get((int)14));
			HX_STACK_LINE(751)
			hx::AddEq(i,(int)3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,transformVectors,(void))

Void Matrix3D_obj::transpose( ){
{
		HX_STACK_FRAME("openfl.geom.Matrix3D","transpose",0x1ba989f1,"openfl.geom.Matrix3D.transpose","openfl/geom/Matrix3D.hx",758,0x3acce238)
		HX_STACK_THIS(this)
		HX_STACK_LINE(760)
		Array< Float > oRawData = this->rawData->copy();		HX_STACK_VAR(oRawData,"oRawData");
		HX_STACK_LINE(761)
		this->rawData[(int)1] = oRawData->__get((int)4);
		HX_STACK_LINE(762)
		this->rawData[(int)2] = oRawData->__get((int)8);
		HX_STACK_LINE(763)
		this->rawData[(int)3] = oRawData->__get((int)12);
		HX_STACK_LINE(764)
		this->rawData[(int)4] = oRawData->__get((int)1);
		HX_STACK_LINE(765)
		this->rawData[(int)6] = oRawData->__get((int)9);
		HX_STACK_LINE(766)
		this->rawData[(int)7] = oRawData->__get((int)13);
		HX_STACK_LINE(767)
		this->rawData[(int)8] = oRawData->__get((int)2);
		HX_STACK_LINE(768)
		this->rawData[(int)9] = oRawData->__get((int)6);
		HX_STACK_LINE(769)
		this->rawData[(int)11] = oRawData->__get((int)14);
		HX_STACK_LINE(770)
		this->rawData[(int)12] = oRawData->__get((int)3);
		HX_STACK_LINE(771)
		this->rawData[(int)13] = oRawData->__get((int)7);
		HX_STACK_LINE(772)
		this->rawData[(int)14] = oRawData->__get((int)11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,transpose,(void))

Float Matrix3D_obj::get_determinant( ){
	HX_STACK_FRAME("openfl.geom.Matrix3D","get_determinant",0x5f71b8a4,"openfl.geom.Matrix3D.get_determinant","openfl/geom/Matrix3D.hx",817,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_LINE(817)
	return (((((((((this->rawData->__get((int)0) * this->rawData->__get((int)5)) - (this->rawData->__get((int)4) * this->rawData->__get((int)1)))) * (((this->rawData->__get((int)10) * this->rawData->__get((int)15)) - (this->rawData->__get((int)14) * this->rawData->__get((int)11))))) - ((((this->rawData->__get((int)0) * this->rawData->__get((int)9)) - (this->rawData->__get((int)8) * this->rawData->__get((int)1)))) * (((this->rawData->__get((int)6) * this->rawData->__get((int)15)) - (this->rawData->__get((int)14) * this->rawData->__get((int)7)))))) + ((((this->rawData->__get((int)0) * this->rawData->__get((int)13)) - (this->rawData->__get((int)12) * this->rawData->__get((int)1)))) * (((this->rawData->__get((int)6) * this->rawData->__get((int)11)) - (this->rawData->__get((int)10) * this->rawData->__get((int)7)))))) + ((((this->rawData->__get((int)4) * this->rawData->__get((int)9)) - (this->rawData->__get((int)8) * this->rawData->__get((int)5)))) * (((this->rawData->__get((int)2) * this->rawData->__get((int)15)) - (this->rawData->__get((int)14) * this->rawData->__get((int)3)))))) - ((((this->rawData->__get((int)4) * this->rawData->__get((int)13)) - (this->rawData->__get((int)12) * this->rawData->__get((int)5)))) * (((this->rawData->__get((int)2) * this->rawData->__get((int)11)) - (this->rawData->__get((int)10) * this->rawData->__get((int)3)))))) + ((((this->rawData->__get((int)8) * this->rawData->__get((int)13)) - (this->rawData->__get((int)12) * this->rawData->__get((int)9)))) * (((this->rawData->__get((int)2) * this->rawData->__get((int)7)) - (this->rawData->__get((int)6) * this->rawData->__get((int)3))))));
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,get_determinant,return )

::openfl::geom::Vector3D Matrix3D_obj::get_position( ){
	HX_STACK_FRAME("openfl.geom.Matrix3D","get_position",0x1555563a,"openfl.geom.Matrix3D.get_position","openfl/geom/Matrix3D.hx",829,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_LINE(829)
	return ::openfl::geom::Vector3D_obj::__new(this->rawData->__get((int)12),this->rawData->__get((int)13),this->rawData->__get((int)14),null());
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,get_position,return )

::openfl::geom::Vector3D Matrix3D_obj::set_position( ::openfl::geom::Vector3D val){
	HX_STACK_FRAME("openfl.geom.Matrix3D","set_position",0x2a4e79ae,"openfl.geom.Matrix3D.set_position","openfl/geom/Matrix3D.hx",834,0x3acce238)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(836)
	this->rawData[(int)12] = val->x;
	HX_STACK_LINE(837)
	this->rawData[(int)13] = val->y;
	HX_STACK_LINE(838)
	this->rawData[(int)14] = val->z;
	HX_STACK_LINE(839)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,set_position,return )

::openfl::geom::Matrix3D Matrix3D_obj::create2D( Float x,Float y,hx::Null< Float >  __o_scale,hx::Null< Float >  __o_rotation){
Float scale = __o_scale.Default(1);
Float rotation = __o_rotation.Default(0);
	HX_STACK_FRAME("openfl.geom.Matrix3D","create2D",0x4623e756,"openfl.geom.Matrix3D.create2D","openfl/geom/Matrix3D.hx",239,0x3acce238)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(scale,"scale")
	HX_STACK_ARG(rotation,"rotation")
{
		HX_STACK_LINE(241)
		Float theta = (Float((rotation * ::Math_obj::PI)) / Float(180.0));		HX_STACK_VAR(theta,"theta");
		HX_STACK_LINE(242)
		Float c = ::Math_obj::cos(theta);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(243)
		Float s = ::Math_obj::sin(theta);		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(245)
		return ::openfl::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add((c * scale)).Add((-(s) * scale)).Add((int)0).Add((int)0).Add((s * scale)).Add((c * scale)).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add(x).Add(y).Add((int)0).Add((int)1));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix3D_obj,create2D,return )

::openfl::geom::Matrix3D Matrix3D_obj::createABCD( Float a,Float b,Float c,Float d,Float tx,Float ty){
	HX_STACK_FRAME("openfl.geom.Matrix3D","createABCD",0x0e55d246,"openfl.geom.Matrix3D.createABCD","openfl/geom/Matrix3D.hx",257,0x3acce238)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(tx,"tx")
	HX_STACK_ARG(ty,"ty")
	HX_STACK_LINE(257)
	return ::openfl::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add(a).Add(b).Add((int)0).Add((int)0).Add(c).Add(d).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add(tx).Add(ty).Add((int)0).Add((int)1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Matrix3D_obj,createABCD,return )

::openfl::geom::Matrix3D Matrix3D_obj::createOrtho( Float x0,Float x1,Float y0,Float y1,Float zNear,Float zFar){
	HX_STACK_FRAME("openfl.geom.Matrix3D","createOrtho",0xac3dd614,"openfl.geom.Matrix3D.createOrtho","openfl/geom/Matrix3D.hx",267,0x3acce238)
	HX_STACK_ARG(x0,"x0")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y0,"y0")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(zNear,"zNear")
	HX_STACK_ARG(zFar,"zFar")
	HX_STACK_LINE(269)
	Float sx = (Float(1.0) / Float(((x1 - x0))));		HX_STACK_VAR(sx,"sx");
	HX_STACK_LINE(270)
	Float sy = (Float(1.0) / Float(((y1 - y0))));		HX_STACK_VAR(sy,"sy");
	HX_STACK_LINE(271)
	Float sz = (Float(1.0) / Float(((zFar - zNear))));		HX_STACK_VAR(sz,"sz");
	HX_STACK_LINE(273)
	return ::openfl::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add((2.0 * sx)).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((2.0 * sy)).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((-2. * sz)).Add((int)0).Add((-(((x0 + x1))) * sx)).Add((-(((y0 + y1))) * sy)).Add((-(((zNear + zFar))) * sz)).Add((int)1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Matrix3D_obj,createOrtho,return )

::openfl::geom::Matrix3D Matrix3D_obj::interpolate( ::openfl::geom::Matrix3D thisMat,::openfl::geom::Matrix3D toMat,Float percent){
	HX_STACK_FRAME("openfl.geom.Matrix3D","interpolate",0x6cc85c39,"openfl.geom.Matrix3D.interpolate","openfl/geom/Matrix3D.hx",445,0x3acce238)
	HX_STACK_ARG(thisMat,"thisMat")
	HX_STACK_ARG(toMat,"toMat")
	HX_STACK_ARG(percent,"percent")
	HX_STACK_LINE(447)
	::openfl::geom::Matrix3D m = ::openfl::geom::Matrix3D_obj::__new(null());		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(449)
	{
		HX_STACK_LINE(449)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(449)
		while((true)){
			HX_STACK_LINE(449)
			if ((!(((_g < (int)16))))){
				HX_STACK_LINE(449)
				break;
			}
			HX_STACK_LINE(449)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(451)
			m->rawData[i] = (thisMat->rawData->__get(i) + (((toMat->rawData->__get(i) - thisMat->rawData->__get(i))) * percent));
		}
	}
	HX_STACK_LINE(455)
	return m;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,interpolate,return )

::openfl::geom::Matrix3D Matrix3D_obj::getAxisRotation( Float x,Float y,Float z,Float degrees){
	HX_STACK_FRAME("openfl.geom.Matrix3D","getAxisRotation",0x6465182d,"openfl.geom.Matrix3D.getAxisRotation","openfl/geom/Matrix3D.hx",776,0x3acce238)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_ARG(degrees,"degrees")
	HX_STACK_LINE(778)
	::openfl::geom::Matrix3D m = ::openfl::geom::Matrix3D_obj::__new(null());		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(780)
	::openfl::geom::Vector3D a1 = ::openfl::geom::Vector3D_obj::__new(x,y,z,null());		HX_STACK_VAR(a1,"a1");
	HX_STACK_LINE(781)
	Float rad = (-(degrees) * ((Float(::Math_obj::PI) / Float((int)180))));		HX_STACK_VAR(rad,"rad");
	HX_STACK_LINE(782)
	Float c = ::Math_obj::cos(rad);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(783)
	Float s = ::Math_obj::sin(rad);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(784)
	Float t = (1.0 - c);		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(786)
	m->rawData[(int)0] = (c + ((a1->x * a1->x) * t));
	HX_STACK_LINE(787)
	m->rawData[(int)5] = (c + ((a1->y * a1->y) * t));
	HX_STACK_LINE(788)
	m->rawData[(int)10] = (c + ((a1->z * a1->z) * t));
	HX_STACK_LINE(790)
	Float tmp1 = ((a1->x * a1->y) * t);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(791)
	Float tmp2 = (a1->z * s);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(792)
	m->rawData[(int)4] = (tmp1 + tmp2);
	HX_STACK_LINE(793)
	m->rawData[(int)1] = (tmp1 - tmp2);
	HX_STACK_LINE(794)
	tmp1 = ((a1->x * a1->z) * t);
	HX_STACK_LINE(795)
	tmp2 = (a1->y * s);
	HX_STACK_LINE(796)
	m->rawData[(int)8] = (tmp1 - tmp2);
	HX_STACK_LINE(797)
	m->rawData[(int)2] = (tmp1 + tmp2);
	HX_STACK_LINE(798)
	tmp1 = ((a1->y * a1->z) * t);
	HX_STACK_LINE(799)
	tmp2 = (a1->x * s);
	HX_STACK_LINE(800)
	m->rawData[(int)9] = (tmp1 + tmp2);
	HX_STACK_LINE(801)
	m->rawData[(int)6] = (tmp1 - tmp2);
	HX_STACK_LINE(803)
	return m;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix3D_obj,getAxisRotation,return )


Matrix3D_obj::Matrix3D_obj()
{
}

void Matrix3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Matrix3D);
	HX_MARK_MEMBER_NAME(determinant,"determinant");
	HX_MARK_MEMBER_NAME(rawData,"rawData");
	HX_MARK_END_CLASS();
}

void Matrix3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(determinant,"determinant");
	HX_VISIT_MEMBER_NAME(rawData,"rawData");
}

Dynamic Matrix3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"append") ) { return append_dyn(); }
		if (HX_FIELD_EQ(inName,"invert") ) { return invert_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rawData") ) { return rawData; }
		if (HX_FIELD_EQ(inName,"pointAt") ) { return pointAt_dyn(); }
		if (HX_FIELD_EQ(inName,"prepend") ) { return prepend_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"create2D") ) { return create2D_dyn(); }
		if (HX_FIELD_EQ(inName,"position") ) { return get_position(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"identity") ) { return identity_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyRowTo") ) { return copyRowTo_dyn(); }
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
		if (HX_FIELD_EQ(inName,"recompose") ) { return recompose_dyn(); }
		if (HX_FIELD_EQ(inName,"transpose") ) { return transpose_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createABCD") ) { return createABCD_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createOrtho") ) { return createOrtho_dyn(); }
		if (HX_FIELD_EQ(inName,"interpolate") ) { return interpolate_dyn(); }
		if (HX_FIELD_EQ(inName,"determinant") ) { return inCallProp ? get_determinant() : determinant; }
		if (HX_FIELD_EQ(inName,"appendScale") ) { return appendScale_dyn(); }
		if (HX_FIELD_EQ(inName,"copyRowFrom") ) { return copyRowFrom_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"copyColumnTo") ) { return copyColumnTo_dyn(); }
		if (HX_FIELD_EQ(inName,"prependScale") ) { return prependScale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyRawDataTo") ) { return copyRawDataTo_dyn(); }
		if (HX_FIELD_EQ(inName,"interpolateTo") ) { return interpolateTo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"appendRotation") ) { return appendRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"copyColumnFrom") ) { return copyColumnFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"copyToMatrix3D") ) { return copyToMatrix3D_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getAxisRotation") ) { return getAxisRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"copyRawDataFrom") ) { return copyRawDataFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"prependRotation") ) { return prependRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"transformVector") ) { return transformVector_dyn(); }
		if (HX_FIELD_EQ(inName,"get_determinant") ) { return get_determinant_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"transformVectors") ) { return transformVectors_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"appendTranslation") ) { return appendTranslation_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"prependTranslation") ) { return prependTranslation_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"deltaTransformVector") ) { return deltaTransformVector_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Matrix3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"rawData") ) { rawData=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return set_position(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"determinant") ) { determinant=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Matrix3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("determinant"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("rawData"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create2D"),
	HX_CSTRING("createABCD"),
	HX_CSTRING("createOrtho"),
	HX_CSTRING("interpolate"),
	HX_CSTRING("getAxisRotation"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Matrix3D_obj,determinant),HX_CSTRING("determinant")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Matrix3D_obj,rawData),HX_CSTRING("rawData")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("determinant"),
	HX_CSTRING("rawData"),
	HX_CSTRING("append"),
	HX_CSTRING("appendRotation"),
	HX_CSTRING("appendScale"),
	HX_CSTRING("appendTranslation"),
	HX_CSTRING("clone"),
	HX_CSTRING("copyColumnFrom"),
	HX_CSTRING("copyColumnTo"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("copyRawDataFrom"),
	HX_CSTRING("copyRawDataTo"),
	HX_CSTRING("copyRowFrom"),
	HX_CSTRING("copyRowTo"),
	HX_CSTRING("copyToMatrix3D"),
	HX_CSTRING("decompose"),
	HX_CSTRING("deltaTransformVector"),
	HX_CSTRING("identity"),
	HX_CSTRING("interpolateTo"),
	HX_CSTRING("invert"),
	HX_CSTRING("pointAt"),
	HX_CSTRING("prepend"),
	HX_CSTRING("prependRotation"),
	HX_CSTRING("prependScale"),
	HX_CSTRING("prependTranslation"),
	HX_CSTRING("recompose"),
	HX_CSTRING("transformVector"),
	HX_CSTRING("transformVectors"),
	HX_CSTRING("transpose"),
	HX_CSTRING("get_determinant"),
	HX_CSTRING("get_position"),
	HX_CSTRING("set_position"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix3D_obj::__mClass,"__mClass");
};

#endif

Class Matrix3D_obj::__mClass;

void Matrix3D_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.geom.Matrix3D"), hx::TCanCast< Matrix3D_obj> ,sStaticFields,sMemberFields,
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

void Matrix3D_obj::__boot()
{
}

} // end namespace openfl
} // end namespace geom
