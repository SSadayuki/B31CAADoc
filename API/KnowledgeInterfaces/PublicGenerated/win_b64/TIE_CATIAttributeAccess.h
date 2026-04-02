#ifndef __TIE_CATIAttributeAccess
#define __TIE_CATIAttributeAccess

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAttributeAccess.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAttributeAccess */
#define declare_TIE_CATIAttributeAccess(classe) \
 \
 \
class TIECATIAttributeAccess##classe : public CATIAttributeAccess \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAttributeAccess, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATIValue* GetValue( CATIInstance* iObject, const CATUnicodeString& iKey) ; \
      virtual HRESULT SetValue( CATIInstance* iObject, const CATUnicodeString& iKey, const CATIValue_var& iValue) ; \
};



#define ENVTIEdeclare_CATIAttributeAccess(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATIValue* GetValue( CATIInstance* iObject, const CATUnicodeString& iKey) ; \
virtual HRESULT SetValue( CATIInstance* iObject, const CATUnicodeString& iKey, const CATIValue_var& iValue) ; \


#define ENVTIEdefine_CATIAttributeAccess(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATIValue*  ENVTIEName::GetValue( CATIInstance* iObject, const CATUnicodeString& iKey)  \
{ \
return (ENVTIECALL(CATIAttributeAccess,ENVTIETypeLetter,ENVTIELetter)GetValue(iObject,iKey)); \
} \
HRESULT  ENVTIEName::SetValue( CATIInstance* iObject, const CATUnicodeString& iKey, const CATIValue_var& iValue)  \
{ \
return (ENVTIECALL(CATIAttributeAccess,ENVTIETypeLetter,ENVTIELetter)SetValue(iObject,iKey,iValue)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAttributeAccess(classe)    TIECATIAttributeAccess##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAttributeAccess(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAttributeAccess, classe) \
 \
 \
CATImplementTIEMethods(CATIAttributeAccess, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAttributeAccess, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAttributeAccess, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAttributeAccess, classe) \
 \
CATIValue*  TIECATIAttributeAccess##classe::GetValue( CATIInstance* iObject, const CATUnicodeString& iKey)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetValue(iObject,iKey)); \
} \
HRESULT  TIECATIAttributeAccess##classe::SetValue( CATIInstance* iObject, const CATUnicodeString& iKey, const CATIValue_var& iValue)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetValue(iObject,iKey,iValue)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAttributeAccess(classe) \
 \
 \
declare_TIE_CATIAttributeAccess(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAttributeAccess##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAttributeAccess,"CATIAttributeAccess",CATIAttributeAccess::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAttributeAccess(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAttributeAccess, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAttributeAccess##classe(classe::MetaObject(),CATIAttributeAccess::MetaObject(),(void *)CreateTIECATIAttributeAccess##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAttributeAccess(classe) \
 \
 \
declare_TIE_CATIAttributeAccess(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAttributeAccess##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAttributeAccess,"CATIAttributeAccess",CATIAttributeAccess::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAttributeAccess(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAttributeAccess, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAttributeAccess##classe(classe::MetaObject(),CATIAttributeAccess::MetaObject(),(void *)CreateTIECATIAttributeAccess##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAttributeAccess(classe) TIE_CATIAttributeAccess(classe)
#else
#define BOA_CATIAttributeAccess(classe) CATImplementBOA(CATIAttributeAccess, classe)
#endif

#endif
