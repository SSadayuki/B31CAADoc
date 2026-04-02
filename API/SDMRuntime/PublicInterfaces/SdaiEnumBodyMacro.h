/** @CAA2Required */
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/

// ------------------------------------------------------------------------------------------------
// COPYRIGHT DASSAULT SYSTEMES  2001
// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiEnumBodyMacro -- Header
// macros for body of enum classes
// ------------------------------------------------------------------------------------------------

#ifndef SDAI_ENUM_BODY_MACRO_H
#define SDAI_ENUM_BODY_MACRO_H

#include <SdaiEnumerationType.h>
#include <SdaiDictionaryRepo.h>
#include <SdaiSchema.h>
#include <SdaiDefinedType.h>
#include <SdaiUnderlyingTypeH.h>
 
// ------------------------------------------------------------------------------------------------
// Macros for body of enumerations (PYR/BMX)
#define SDAI_ENUM_BODY(schema , type, nb )                      \
 Sdai##schema##type::Sdai##schema##type (): SdaiEnum()   {		\
		SdaiEnum::SetEnumType(_typ);		\
}               \
 Sdai##schema##type::Sdai##schema##type ( const Sdai##schema##type & org) \
		: SdaiEnum() {	\
		SdaiEnum::SetEnumType(_typ);		\
		SdaiEnum::set((sdai##schema##type) org);	\
}                   \
 Sdai##schema##type::Sdai##schema##type(sdai##schema##type org)         \
		: SdaiEnum() {				\
		SdaiEnum::SetEnumType(_typ);		\
		SdaiEnum::set(org);	\
}                                        \
                                                                           \
 Sdai##schema##type::operator sdai##schema##type () const                 \
     { int index = ((const SdaiEnum* const)this)->operator int() /* from SdaiEnum */;                                         \
       if (index >=0 && index < nb)				\
		   return (sdai##schema##type) index;\
       else return (sdai##schema##type)0;                                       \
     }                                                                     \
                                                                           \
Sdai##schema##type& Sdai##schema##type::operator=(const Sdai##schema##type& org) \
     { 											\
		 SdaiEnum::set((sdai##schema##type) org);	\
       return *this;                                                       \
     }                                                                     \
				                                                          \
 /* constructor from int needed only for aggr instantiation*/              \
 /*   (RemoveCurrentMember) */                                             \
/* Sdai##schema##type::Sdai##schema##type ( const int org) :SdaiEnum(org) {}  */ \
 Sdai##schema##type::Sdai##schema##type (const SdaiEnum& org)		\
	 :SdaiEnum(org) {} \
                                                                          \
 Sdai##schema##type Sdai##schema##type::Castdown(SdaiEnum& org)            \
     { return org;}		\
/* 		int index = org;                                             \
       if (index>=0 && index<nb) return (sdai##schema##type)index;\
       else return (sdai##schema##type)0;                                       \
     }*/                                                                     \
                                                                         \
 const Sdai##schema##type Sdai##schema##type::Castdown(const SdaiEnum& org)\
     { return org;}			\
/*     int index =  org;                                             \
       if (index >=0 && index <nb) return (sdai##schema##type) index;\
       return (sdai##schema##type) 0;                                       \
     } */                                                                     \
 int Sdai##schema##type::operator== ( const Sdai##schema##type& org) const \
 { return ( ((sdai##schema##type) *this) == ((sdai##schema##type) org));}  \
				 \
 const SdaiString& Sdai##schema##type::LeType()			        		   \
   {                          										   \
   static const SdaiString theType = "Sdai" #schema#type;                    					   \
   return theType;                       								   \
   }                          										   \
 const SdaiEnumerationType* Sdai##schema##type::GetType()			        		   \
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
   if(SdaiEnum::IsKindOf(iTypeName)) return sdaiTRUE;       						   \
   if (iTypeName == letype) return sdaiTRUE ;      							   \
   return sdaiFALSE ;				      							   \
   }                                                                    \
	SdaiEnum* Sdai##schema##type::Factory() {\
	return new Sdai##schema##type;    \
	}   \
						   \
	int Sdai##schema##type::InitDico() {  \
		/* if (_sch == NULL) */    \
		{		\
			_sch = SdaiDictionaryRepo::TheOne()->GetSchemaDefinition(SdaiString(#schema)); \
			if (_sch == NULL) return 0;		\
			SdaiDefinedTypeH defType = _sch->GetDefinedType(SdaiString(#type));  \
			if (defType == NULL) return 0; 		\
			_typ = (const SdaiEnumerationTypeH) defType->Domain();	\
			if (_typ == NULL) return 0; 		\
		 }	\
		 _typ->InitFactory(Sdai##schema##type::Factory);  \
		  return 1; \
	}    \
SdaiSchemaH Sdai##schema##type::_sch = NULL; \
SdaiEnumerationTypeH Sdai##schema##type::_typ = NULL;


#endif
