#ifndef __TIE_CATIPspKweUserAttr
#define __TIE_CATIPspKweUserAttr

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPspKweUserAttr.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPspKweUserAttr */
#define declare_TIE_CATIPspKweUserAttr(classe) \
 \
 \
class TIECATIPspKweUserAttr##classe : public CATIPspKweUserAttr \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPspKweUserAttr, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT DefineKweUserAttr(const CATString &isTypeName, CATListValCATAttributeInfos &olAttrInfos) ; \
      virtual  CATIValue* GetValue (CATIInstance*  ipiObject, const CATUnicodeString& iKey) ; \
};



#define ENVTIEdeclare_CATIPspKweUserAttr(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT DefineKweUserAttr(const CATString &isTypeName, CATListValCATAttributeInfos &olAttrInfos) ; \
virtual  CATIValue* GetValue (CATIInstance*  ipiObject, const CATUnicodeString& iKey) ; \


#define ENVTIEdefine_CATIPspKweUserAttr(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::DefineKweUserAttr(const CATString &isTypeName, CATListValCATAttributeInfos &olAttrInfos)  \
{ \
return (ENVTIECALL(CATIPspKweUserAttr,ENVTIETypeLetter,ENVTIELetter)DefineKweUserAttr(isTypeName,olAttrInfos)); \
} \
CATIValue*  ENVTIEName::GetValue (CATIInstance*  ipiObject, const CATUnicodeString& iKey)  \
{ \
return (ENVTIECALL(CATIPspKweUserAttr,ENVTIETypeLetter,ENVTIELetter)GetValue (ipiObject,iKey)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPspKweUserAttr(classe)    TIECATIPspKweUserAttr##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPspKweUserAttr(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPspKweUserAttr, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATIPspKweUserAttr, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATIPspKweUserAttr, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPspKweUserAttr, classe) \
 \
HRESULT  TIECATIPspKweUserAttr##classe::DefineKweUserAttr(const CATString &isTypeName, CATListValCATAttributeInfos &olAttrInfos)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DefineKweUserAttr(isTypeName,olAttrInfos)); \
} \
CATIValue*  TIECATIPspKweUserAttr##classe::GetValue (CATIInstance*  ipiObject, const CATUnicodeString& iKey)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetValue (ipiObject,iKey)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPspKweUserAttr(classe) \
 \
 \
declare_TIE_CATIPspKweUserAttr(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPspKweUserAttr##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPspKweUserAttr,"CATIPspKweUserAttr",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPspKweUserAttr(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPspKweUserAttr, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPspKweUserAttr##classe(classe::MetaObject(),TIECATIPspKweUserAttr##classe::MetaObject(),(void *)CreateTIECATIPspKweUserAttr##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPspKweUserAttr(classe) \
 \
 \
declare_TIE_CATIPspKweUserAttr(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPspKweUserAttr##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPspKweUserAttr,"CATIPspKweUserAttr",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPspKweUserAttr(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPspKweUserAttr, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPspKweUserAttr##classe(classe::MetaObject(),TIECATIPspKweUserAttr##classe::MetaObject(),(void *)CreateTIECATIPspKweUserAttr##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPspKweUserAttr(classe) TIE_CATIPspKweUserAttr(classe)
#else
#define BOA_CATIPspKweUserAttr(classe) CATImplementBOA(CATIPspKweUserAttr, classe)
#endif

#endif
