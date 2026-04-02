#ifndef __TIE_CATISPPItem
#define __TIE_CATISPPItem

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISPPItem.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISPPItem */
#define declare_TIE_CATISPPItem(classe) \
 \
 \
class TIECATISPPItem##classe : public CATISPPItem \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISPPItem, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATUnicodeString		GetType() const ; \
      virtual CATBoolean			IsSubTypeOf(const CATUnicodeString& iTypeName) ; \
      virtual CATUnicodeString 		GetLabel() const ; \
      virtual CATBoolean			IsAssigned(const CATISPPActivityRoot_var iProcess) const ; \
};



#define ENVTIEdeclare_CATISPPItem(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATUnicodeString		GetType() const ; \
virtual CATBoolean			IsSubTypeOf(const CATUnicodeString& iTypeName) ; \
virtual CATUnicodeString 		GetLabel() const ; \
virtual CATBoolean			IsAssigned(const CATISPPActivityRoot_var iProcess) const ; \


#define ENVTIEdefine_CATISPPItem(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATUnicodeString		 ENVTIEName::GetType() const  \
{ \
return (ENVTIECALL(CATISPPItem,ENVTIETypeLetter,ENVTIELetter)GetType()); \
} \
CATBoolean			 ENVTIEName::IsSubTypeOf(const CATUnicodeString& iTypeName)  \
{ \
return (ENVTIECALL(CATISPPItem,ENVTIETypeLetter,ENVTIELetter)IsSubTypeOf(iTypeName)); \
} \
CATUnicodeString 		 ENVTIEName::GetLabel() const  \
{ \
return (ENVTIECALL(CATISPPItem,ENVTIETypeLetter,ENVTIELetter)GetLabel()); \
} \
CATBoolean			 ENVTIEName::IsAssigned(const CATISPPActivityRoot_var iProcess) const  \
{ \
return (ENVTIECALL(CATISPPItem,ENVTIETypeLetter,ENVTIELetter)IsAssigned(iProcess)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISPPItem(classe)    TIECATISPPItem##classe


/* Common methods inside a TIE */
#define common_TIE_CATISPPItem(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISPPItem, classe) \
 \
 \
CATImplementTIEMethods(CATISPPItem, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISPPItem, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISPPItem, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISPPItem, classe) \
 \
CATUnicodeString		 TIECATISPPItem##classe::GetType() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetType()); \
} \
CATBoolean			 TIECATISPPItem##classe::IsSubTypeOf(const CATUnicodeString& iTypeName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsSubTypeOf(iTypeName)); \
} \
CATUnicodeString 		 TIECATISPPItem##classe::GetLabel() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLabel()); \
} \
CATBoolean			 TIECATISPPItem##classe::IsAssigned(const CATISPPActivityRoot_var iProcess) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAssigned(iProcess)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISPPItem(classe) \
 \
 \
declare_TIE_CATISPPItem(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISPPItem##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISPPItem,"CATISPPItem",CATISPPItem::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISPPItem(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISPPItem, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISPPItem##classe(classe::MetaObject(),CATISPPItem::MetaObject(),(void *)CreateTIECATISPPItem##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISPPItem(classe) \
 \
 \
declare_TIE_CATISPPItem(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISPPItem##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISPPItem,"CATISPPItem",CATISPPItem::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISPPItem(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISPPItem, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISPPItem##classe(classe::MetaObject(),CATISPPItem::MetaObject(),(void *)CreateTIECATISPPItem##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISPPItem(classe) TIE_CATISPPItem(classe)
#else
#define BOA_CATISPPItem(classe) CATImplementBOA(CATISPPItem, classe)
#endif

#endif
