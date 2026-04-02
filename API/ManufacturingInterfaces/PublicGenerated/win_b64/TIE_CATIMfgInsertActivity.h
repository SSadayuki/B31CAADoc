#ifndef __TIE_CATIMfgInsertActivity
#define __TIE_CATIMfgInsertActivity

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgInsertActivity.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgInsertActivity */
#define declare_TIE_CATIMfgInsertActivity(classe) \
 \
 \
class TIECATIMfgInsertActivity##classe : public CATIMfgInsertActivity \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgInsertActivity, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT   GetAuthorizedInsertList (CATListOfCATUnicodeString &oInsertTypeList) ; \
};



#define ENVTIEdeclare_CATIMfgInsertActivity(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT   GetAuthorizedInsertList (CATListOfCATUnicodeString &oInsertTypeList) ; \


#define ENVTIEdefine_CATIMfgInsertActivity(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT    ENVTIEName::GetAuthorizedInsertList (CATListOfCATUnicodeString &oInsertTypeList)  \
{ \
return (ENVTIECALL(CATIMfgInsertActivity,ENVTIETypeLetter,ENVTIELetter)GetAuthorizedInsertList (oInsertTypeList)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgInsertActivity(classe)    TIECATIMfgInsertActivity##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgInsertActivity(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgInsertActivity, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgInsertActivity, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgInsertActivity, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgInsertActivity, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgInsertActivity, classe) \
 \
HRESULT    TIECATIMfgInsertActivity##classe::GetAuthorizedInsertList (CATListOfCATUnicodeString &oInsertTypeList)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAuthorizedInsertList (oInsertTypeList)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgInsertActivity(classe) \
 \
 \
declare_TIE_CATIMfgInsertActivity(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgInsertActivity##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgInsertActivity,"CATIMfgInsertActivity",CATIMfgInsertActivity::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgInsertActivity(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgInsertActivity, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgInsertActivity##classe(classe::MetaObject(),CATIMfgInsertActivity::MetaObject(),(void *)CreateTIECATIMfgInsertActivity##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgInsertActivity(classe) \
 \
 \
declare_TIE_CATIMfgInsertActivity(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgInsertActivity##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgInsertActivity,"CATIMfgInsertActivity",CATIMfgInsertActivity::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgInsertActivity(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgInsertActivity, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgInsertActivity##classe(classe::MetaObject(),CATIMfgInsertActivity::MetaObject(),(void *)CreateTIECATIMfgInsertActivity##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgInsertActivity(classe) TIE_CATIMfgInsertActivity(classe)
#else
#define BOA_CATIMfgInsertActivity(classe) CATImplementBOA(CATIMfgInsertActivity, classe)
#endif

#endif
