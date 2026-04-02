// COPYRIGHT DASSAULT SYSTEMES  2001
// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiEnumHeaderMacro -- Header
// macros for header of enum classes
// ------------------------------------------------------------------------------------------------

#ifndef SDAI_ENUM_HEADER_MACRO_H
#define SDAI_ENUM_HEADER_MACRO_H


/** @CAA2Required */
/***********************************************************************/
/* HEADER REQUIRED BY THE SDM COMPILER                                 */
/***********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/***********************************************************************/



class SdaiString;
class SdaiLogical;
class SdaiBoolean;
class SdaiEnumerationType;
class SdaiSchema;
// ------------------------------------------------------------------------------------------------
// Macros for declaration of enumerations
// ------------------------------------------------------------------------------------------------
#define SDAI_ENUM_DECL(schema, type, nb)  \
public:		\
	static int InitDico();		\
	static SdaiEnum* Factory();		\
	static	Sdai##schema##type Castdown(SdaiEnum& ) ;                  \
	static	const Sdai##schema##type Castdown(const SdaiEnum& ) ;      \
	int operator== (const Sdai##schema##type&) const;		\
public :                  										\
 static const SdaiString &  LeType() ;             						\
 static const SdaiEnumerationType* GetType() ;             						\
 /* virtual */   const SdaiString&  GetInstanceTypeName()   const ;          			\
 /* virtual */   const SdaiBoolean& IsKindOf( const SdaiString& iTypeName )  const ;		\
private:		\
	static SdaiSchema* _sch;  \
	static SdaiEnumerationType* _typ;

 
#endif
