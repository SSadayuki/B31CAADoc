/** @CAA2Required */
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/

// ------------------------------------------------------------------------------------------------
// COPYRIGHT DASSAULT SYSTEMES  2001
// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiSelHeaderMacro -- Header
// macros for header of select classes
// ------------------------------------------------------------------------------------------------

#ifndef SDAI_SEL_HEADER_MACRO_H
#define SDAI_SEL_HEADER_MACRO_H

class SdaiString;
class SdaiLogical;
class SdaiBoolean;
class SdaiSelectType;
class SdaiSchema;
class SdaiBinary;

////////////////////////////////////////
// Macros for header of a select class /
////////////////////////////////////////

#define SDAI_SELECT_DECL(schema, type, nb)	\
public:		\
     Sdai##schema##type &  operator= ( const Sdai##schema##type & ) ;  \
     static  const SdaiString &  LeType() ;             						\
     static  const SdaiSelectType*  GetType() ;             						\
 /* virtual */   const SdaiString&  GetInstanceTypeName()   const ;          			\
 /* virtual */   const SdaiBoolean& IsKindOf( const SdaiString& iTypeName )  const ;		\
 	static int InitDico();		\
	static SdaiSelectH* Factory();		\
private:		\
	static SdaiSchema* _sch;  \
	static SdaiSelectType* _typ;	\



#endif
