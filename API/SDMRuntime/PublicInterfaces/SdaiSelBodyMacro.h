/** @CAA2Required */
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/

// ------------------------------------------------------------------------------------------------
// COPYRIGHT DASSAULT SYSTEMES  2001
// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiSelBodyMacro -- Header
// macros for body of select class
// ------------------------------------------------------------------------------------------------

#ifndef SDAI_SEL_BODY_MACRO_H
#define SDAI_SEL_BODY_MACRO_H

#include <SdaiSelectType.h>
#include <SdaiSchema.h>
#include <SdaiDefinedType.h>
#include <SdaiUnderlyingTypeH.h>
#include <SdaiLogical.h>
#include <SdaiBoolean.h>
// fix binary
#include <SdaiBinary.h> 
#undef CONST
//==========================================================================================================
// Sequence used to convert a primitiveH to a type
//
#if defined( _WINDOWS_SOURCE) || defined( _IRIX_SOURCE )  || (defined(_AIX_SOURCE) && (__xlC__ >= 0x0500))
// modif bmx0898 from vbd for CXR2
// modif JNI 11/04/2002 for compiler upgrade on AIX.
#define SDAI_SEL_CONV_SIMPLE(schema,value) (const Sdai##schema##value&)
#else
#define SDAI_SEL_CONV_SIMPLE(schema,value)  (Sdai##schema##value)
#endif	
#define SDAI_SEL_CONV_ENUM(schema,value)		(Sdai##schema##value) (SdaiEnum)
#define SDAI_SEL_CONV_SELECT(schema,value)	(Sdai##schema##value) (SdaiSelectH)
#define SDAI_SEL_CONV_AGGR(schema,value)	(Sdai##schema##value) (SdaiAggrInstanceH)
#define SDAI_SEL_CONV_INSTANCE(schema,value)	(Sdai##schema##value) (SdaiEntityInstanceH)

#define SDAI_SEL_GEN_METH( schema, type, nb)	\
 Sdai##schema##type::Sdai##schema##type (): SdaiSelectH()   {		\
		SdaiSelectH::SetSelectType(_typ);		\
}               \
 Sdai##schema##type::Sdai##schema##type ( const Sdai##schema##type & org) \
		: SdaiSelectH(org) {	\
}                   \
					\
 Sdai##schema##type::Sdai##schema##type ( const SdaiSelectH & org) \
		: SdaiSelectH(org) {	\
}                   \
					\
Sdai##schema##type &  Sdai##schema##type::operator= ( const Sdai##schema##type & sel)   \
{											\
	SdaiSelectH::operator= (sel);		\
	return *this;							\
}											\
const SdaiString& Sdai##schema##type::LeType()			        		   \
   {                          										   \
   static const SdaiString theType = #type;                    					   \
   return theType;                       								   \
   }                          											\
const SdaiSelectType* Sdai##schema##type::GetType()							\
   {                          										   \
   return _typ;                       								   \
   }                          										   \
 /* virtual */   const SdaiString& Sdai##schema##type::GetInstanceTypeName()   const   	   \
   {                           										   \
   static const SdaiString & theType = Sdai##schema##type::LeType();           			   \
   return theType;											   \
   }            											   \
 /* virtual */   const SdaiBoolean& Sdai##schema##type::IsKindOf( const SdaiString& iTypeName )  const \
   {            											   \
   static const SdaiString &  letype = Sdai##schema##type::LeType();           			   \
   if (&iTypeName == &letype) return sdaiTRUE ;      							   \
   if(SdaiSelectH::IsKindOf(iTypeName)) return sdaiTRUE;       						   \
   if (iTypeName == letype) return sdaiTRUE ;      							   \
   return sdaiFALSE ;				      							   \
   }                                                                    \
		   \
	SdaiSelectH* Sdai##schema##type::Factory() {\
	return new Sdai##schema##type;    \
	}   \
	int Sdai##schema##type::InitDico() {  \
		/* if (_sch == NULL)*/    \
		{		\
			_sch = SdaiDictionaryRepo::TheOne()->GetSchemaDefinition(SdaiString(#schema)); \
			if (_sch == NULL) return 0;		\
			SdaiDefinedTypeH defType = _sch->GetDefinedType(SdaiString(#type));  \
			if (defType == NULL) return 0; 		\
			_typ = (const SdaiSelectTypeH) defType->Domain();	\
			if (_typ == NULL) return 0; 		\
		 }	\
		 _typ->InitFactory(Sdai##schema##type::Factory);  \
		 return 1; \
	}    \
SdaiSchemaH Sdai##schema##type::_sch = NULL; \
SdaiSelectTypeH Sdai##schema##type::_typ = NULL;

#define SDAI_SEL_SPEC_METH(schema,type, value, name, Generic)	\
Sdai##schema##type::Sdai##schema##type(const Sdai##schema##value & val)	\
: SdaiSelectH()	\
{		\
		if (_sch == NULL)		\
 		{		\
 		   InitDico();		\
 		}		\
		SdaiSelectH::SetSelectType(_typ);		\
		SdaiPrimitiveH prim = val;		\
		SdaiSelectH::set(prim);				\
}			\
Sdai##schema##type::operator const Sdai##schema##value & () const	\
  {                                                                       \
	static Sdai##schema##value tempo;		\
	if ( _Sdai##schema##value()== sdaiLTRUE )                   \
	{											\
		  tempo =   SDAI_SEL_CONV_##Generic(schema,value) SdaiSelectH::getValue() ;                             \
		  return tempo;					\
	}									\
	else											\
	{                                                                   \
		SDAI_RAISE_ERROR(sdaiEVALTYPER,  			           \
		"Invalid conversion to underlying type " #value " in select " #type) ; \
	}                                                                   \
		return tempo ;                                 \
}                                                                       \
																		\
Sdai##schema##type& Sdai##schema##type::operator=(const Sdai##schema##value &val )	\
{											\
	SdaiPrimitiveH prim = (Sdai##schema##value) val;	/* non const for SUN */			\
	SdaiSelectH::set(prim);					\
	return *this;							\
}											\
											\
const SdaiLogical& Sdai##schema##type::_Sdai##schema##value() const 				\
{						\
      if ( !exists() ) return sdaiUNKNOWN;                 \
	if (SdaiSelectH::UnderlyingTypeName() == #name) return sdaiLTRUE;	\
	else return sdaiLFALSE;					\
}

#define SDAI_SEL_TEST_METH(schema,type, value, name, Generic)	\
const SdaiLogical& Sdai##schema##type::_Sdai##schema##value() const 				\
{						\
      if ( !exists() ) return sdaiUNKNOWN;                 \
	if (SdaiSelectH::UnderlyingTypeName() == #name) return sdaiLTRUE;	\
	else return sdaiLFALSE;					\
}

#define SDAI_SEL_ATTR_BODY_SIMPLE(Schema, TypeSel,  AttrName, AttrType, FullType)	\
SDAI_SEL_METHOD(Schema,TypeSel,  AttrName, FullType, CONST, AttrType)		\
SDAI_SEL_METHOD(Schema,TypeSel,  Test##AttrName, const SdaiBoolean&, CONST, SdaiBoolean)		\
SDAI_SEL_METHOD_ATT(Schema,TypeSel, AttrName, FullType )	\
SDAI_SEL_METHOD_VOID(Schema,TypeSel, Unset##AttrName, void )

#define SDAI_SEL_ATTR_BODY_ENUM(Schema, TypeSel, AttrName, AttrType, FullType)	\
	SDAI_SEL_ATTR_BODY_SIMPLE(Schema, TypeSel , AttrName, AttrType, FullType)

#define SDAI_SEL_ATTR_BODY_SEL(Schema, TypeSel , AttrName, AttrType, FullType)	\
	SDAI_SEL_ATTR_BODY_SIMPLE(Schema, TypeSel , AttrName, AttrType, FullType)

#define SDAI_SEL_ATTR_BODY_INST(Schema, TypeSel , AttrName, AttrType, FullType)	\
	SDAI_SEL_ATTR_BODY_SIMPLE(Schema, TypeSel , AttrName, AttrType, FullType)		\
	SDAI_SEL_METHOD_ATT(Schema,TypeSel, AttrName, SdaiEntityInstanceH )


#define SDAI_SEL_ATTR_BODY_AGGR(Schema, TypeSel , AttrName, AttrType, FullType)	\
	SDAI_SEL_ATTR_BODY_SIMPLE(Schema, TypeSel,  AttrName, AttrType, FullType)	\
	SDAI_SEL_METHOD(Schema,TypeSel,  CreateAggr##AttrName, FullType,NOCONST, AttrType)

#define SDAI_SEL_ATTR_BODY_INV(Schema, TypeSel,  AttrName, AttrType, FullType)	\
	SDAI_SEL_METHOD(Schema,TypeSel, AttrName, FullType, CONST, AttrType)		\
	SDAI_SEL_METHOD(Schema,TypeSel, Test##AttrName, const SdaiBoolean&, CONST, SdaiBoolean)

#define SDAI_SEL_ATTR_BODY_INVAGGR(Schema, TypeSel,  AttrName, AttrType, FullType)	\
	SDAI_SEL_ATTR_BODY_INV(Schema, TypeSel,  AttrName, AttrType, FullType)

#define SDAI_SEL_METHOD_VOID_START(Schema, TypeSel, Method, AttrType)	\
void Sdai##Schema##TypeSel::Method() {		\
	if(_SDAI_SEL_ENTITY_1())	\
		((SDAI_SEL_ENTITY_1)(SdaiEntityInstanceH) getValue())->Method();
#define SDAI_SEL_METHOD_VOID_2(Schema, TypeSel,  Method, AttrType)	\
	else if(_SDAI_SEL_ENTITY_2())	\
		((SDAI_SEL_ENTITY_2)(SdaiEntityInstanceH) getValue())->Method();
#define SDAI_SEL_METHOD_VOID_3(Schema, TypeSel,  Method, AttrType)	\
	else if(_SDAI_SEL_ENTITY_3())	\
		((SDAI_SEL_ENTITY_3)(SdaiEntityInstanceH) getValue())->Method();
#define SDAI_SEL_METHOD_VOID_4(Schema, TypeSel,  Method, AttrType)	\
	else if(_SDAI_SEL_ENTITY_4())	\
		((SDAI_SEL_ENTITY_4)(SdaiEntityInstanceH) getValue())->Method();
#define SDAI_SEL_METHOD_VOID_END(Schema, TypeSel,  Method, AttrType)	\
	else	\
		SDAI_RAISE_ERROR(sdaiEVALTYPER,									\
		  "Wrong underlying type in select " #TypeSel " for method " #Method);	\
}
#define SDAI_CONST const
//#define SDAI_const const
#define SDAI_NOCONST

#define SDAI_SEL_METHOD_START(Schema, TypeSel, Method, AttrType, IsConst)	\
AttrType Sdai##Schema##TypeSel::Method()	SDAI_##IsConst {		\
	if(_SDAI_SEL_ENTITY_1())	\
		return ((SDAI_SEL_ENTITY_1)(SdaiEntityInstanceH) getValue())->Method();
#define SDAI_SEL_METHOD_2(Schema, TypeSel,  Method, AttrType)	\
	else if(_SDAI_SEL_ENTITY_2())	\
		return ((SDAI_SEL_ENTITY_2)(SdaiEntityInstanceH) getValue())->Method();
#define SDAI_SEL_METHOD_3(Schema, TypeSel,  Method, AttrType)	\
	else if(_SDAI_SEL_ENTITY_3())	\
		return ((SDAI_SEL_ENTITY_3)(SdaiEntityInstanceH) getValue())->Method();
#define SDAI_SEL_METHOD_4(Schema, TypeSel,  Method, AttrType)	\
	else if(_SDAI_SEL_ENTITY_4())	\
		return ((SDAI_SEL_ENTITY_4)(SdaiEntityInstanceH) getValue())->Method();

#define SDAI_SEL_METHOD_END(Schema, TypeSel, Method, AttrType)	\
	else	\
		SDAI_RAISE_ERROR(sdaiEVALTYPER,									\
		  "Wrong underlying type in select " #TypeSel " for method " #Method);	\
	static AttrType def_val;												\
	return def_val;	\
}

#define SDAI_SEL_METHOD_ATT_START(Schema, TypeSel, Method, AttrType)	\
void Sdai##Schema##TypeSel::Method(AttrType val) {		\
	if(_SDAI_SEL_ENTITY_1())	\
		((SDAI_SEL_ENTITY_1) (SdaiEntityInstanceH) getValue())->Method(val);

#define SDAI_SEL_METHOD_ATT_2(Schema, TypeSel, Method, AttrType)	\
	else if(_SDAI_SEL_ENTITY_2())	\
		((SDAI_SEL_ENTITY_2) (SdaiEntityInstanceH) getValue())->Method(val);

#define SDAI_SEL_METHOD_ATT_3(Schema, TypeSel, Method, AttrType)	\
	else if(_SDAI_SEL_ENTITY_2())	\
		((SDAI_SEL_ENTITY_2) (SdaiEntityInstanceH) getValue())->Method(val);

#define SDAI_SEL_METHOD_ATT_4(Schema, TypeSel, Method, AttrType)	\
	else if(_SDAI_SEL_ENTITY_2())	\
		((SDAI_SEL_ENTITY_2) (SdaiEntityInstanceH) getValue())->Method(val);

#define SDAI_SEL_METHOD_ATT_END(Schema, TypeSel,  Method, AttrType)	\
	else	\
		SDAI_RAISE_ERROR(sdaiEVALTYPER,									\
		  "Wrong underlying type in select " #TypeSel " for method " #Method);	\
}



#endif
