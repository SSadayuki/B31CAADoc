/** @CAA2Required */
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/

// ------------------------------------------------------------------------------------------------
// COPYRIGHT DASSAULT SYSTEMES  2001
//-*-Mode: C++;-*-
// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiSelAttMacro -- Header
// generate special macros for attributes of entities in select
//
// NOTE : this file should be protected by #ifndef .. #define ..
//        because it redefines macros according to number of entities
//        sharing the attribute
// ------------------------------------------------------------------------------------------------

#undef SDAI_SEL_METHOD
#undef SDAI_SEL_METHOD_VOID
#undef SDAI_SEL_METHOD_ATT


#ifdef SDAI_SEL_ENTITY_1
#ifndef SDAI_SEL_ENTITY_2
#define SDAI_SEL_METHOD(Schema, TypeSel, Method, FullType,constness, AttrType)	\
	SDAI_SEL_METHOD_START(Schema, TypeSel,  Method, FullType,constness)	\
	SDAI_SEL_METHOD_END(Schema, TypeSel,  Method, AttrType)

#define SDAI_SEL_METHOD_VOID(Schema, TypeSel, Method, AttrType)	\
	SDAI_SEL_METHOD_VOID_START(Schema, TypeSel,  Method, AttrType)	\
	SDAI_SEL_METHOD_VOID_END(Schema, TypeSel,  Method, AttrType)
#define SDAI_SEL_METHOD_ATT(Schema, TypeSel, Method, AttrType)	\
	SDAI_SEL_METHOD_ATT_START(Schema, TypeSel,  Method, AttrType)	\
	SDAI_SEL_METHOD_ATT_END(Schema, TypeSel,  Method, AttrType)

#else
#ifndef SDAI_SEL_ENTITY_3
#define SDAI_SEL_METHOD(Schema, TypeSel, Method, FullType, constness, AttrType)	\
	SDAI_SEL_METHOD_START(Schema, TypeSel,  Method, FullType, constness)	\
	SDAI_SEL_METHOD_2(Schema, TypeSel,  Method, FullType)	\
	SDAI_SEL_METHOD_END(Schema, TypeSel, Method, AttrType)

#define SDAI_SEL_METHOD_VOID(Schema, TypeSel, Method, AttrType)	\
	SDAI_SEL_METHOD_VOID_START(Schema, TypeSel,  Method, AttrType)	\
	SDAI_SEL_METHOD_VOID_2(Schema, TypeSel,  Method, AttrType)	\
	SDAI_SEL_METHOD_VOID_END(Schema, TypeSel,  Method, AttrType)

#define SDAI_SEL_METHOD_ATT(Schema, TypeSel, Method, AttrType)	\
	SDAI_SEL_METHOD_ATT_START(Schema, TypeSel,  Method, AttrType)	\
	SDAI_SEL_METHOD_ATT_2(Schema, TypeSel,  Method, AttrType)	\
	SDAI_SEL_METHOD_ATT_END(Schema, TypeSel, Method, AttrType)

#else
#ifndef SDAI_SEL_ENTITY_4
#define SDAI_SEL_METHOD(Schema, TypeSel, Method, FullType, constness, AttrType)	\
	SDAI_SEL_METHOD_START(Schema, TypeSel,  Method, FullType,constness)	\
	SDAI_SEL_METHOD_2(Schema, TypeSel,  Method, FullType)	\
	SDAI_SEL_METHOD_3(Schema, TypeSel,  Method, FullType)	\
	SDAI_SEL_METHOD_END(Schema, TypeSel, Method, AttrType)

#define SDAI_SEL_METHOD_VOID(Schema, TypeSel, Method, AttrType)	\
	SDAI_SEL_METHOD_VOID_START(Schema, TypeSel,  Method, AttrType)	\
	SDAI_SEL_METHOD_VOID_2(Schema, TypeSel,  Method, AttrType)	\
	SDAI_SEL_METHOD_VOID_3(Schema, TypeSel,  Method, AttrType)	\
	SDAI_SEL_METHOD_VOID_END(Schema, TypeSel,  Method, AttrType)

#define SDAI_SEL_METHOD_ATT(Schema, TypeSel, Method, AttrType)	\
	SDAI_SEL_METHOD_ATT_START(Schema, TypeSel,  Method, AttrType)	\
	SDAI_SEL_METHOD_ATT_2(Schema, TypeSel,  Method, AttrType)	\
	SDAI_SEL_METHOD_ATT_3(Schema, TypeSel,  Method, AttrType)	\
	SDAI_SEL_METHOD_ATT_END(Schema, TypeSel, Method, AttrType)

#else
#define SDAI_SEL_METHOD(Schema, TypeSel, Method, FullType, constness, AttrType)	\
	SDAI_SEL_METHOD_START(Schema, TypeSel,  Method, FullType,constness)	\
	SDAI_SEL_METHOD_2(Schema, TypeSel,  Method, FullType)	\
	SDAI_SEL_METHOD_3(Schema, TypeSel,  Method, FullType)	\
	SDAI_SEL_METHOD_4(Schema, TypeSel,  Method, FullType)	\
	SDAI_SEL_METHOD_END(Schema, TypeSel, Method, AttrType)

#define SDAI_SEL_METHOD_VOID(Schema, TypeSel, Method, AttrType)	\
	SDAI_SEL_METHOD_VOID_START(Schema, TypeSel,  Method, AttrType)	\
	SDAI_SEL_METHOD_VOID_2(Schema, TypeSel,  Method, AttrType)	\
	SDAI_SEL_METHOD_VOID_3(Schema, TypeSel,  Method, AttrType)	\
	SDAI_SEL_METHOD_VOID_4(Schema, TypeSel,  Method, AttrType)	\
	SDAI_SEL_METHOD_VOID_END(Schema, TypeSel,  Method, AttrType)

#define SDAI_SEL_METHOD_ATT(Schema, TypeSel, Method, AttrType)	\
	SDAI_SEL_METHOD_ATT_START(Schema, TypeSel,  Method, AttrType)	\
	SDAI_SEL_METHOD_ATT_2(Schema, TypeSel,  Method, AttrType)	\
	SDAI_SEL_METHOD_ATT_3(Schema, TypeSel,  Method, AttrType)	\
	SDAI_SEL_METHOD_ATT_4(Schema, TypeSel,  Method, AttrType)	\
	SDAI_SEL_METHOD_ATT_END(Schema, TypeSel, Method, AttrType)
#endif
#endif
#endif
#endif


