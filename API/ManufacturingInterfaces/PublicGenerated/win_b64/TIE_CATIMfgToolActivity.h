#ifndef __TIE_CATIMfgToolActivity
#define __TIE_CATIMfgToolActivity

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgToolActivity.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgToolActivity */
#define declare_TIE_CATIMfgToolActivity(classe) \
 \
 \
class TIECATIMfgToolActivity##classe : public CATIMfgToolActivity \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgToolActivity, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT   GetAuthorizedToolTypeList (CATListOfCATUnicodeString &oToolTypeList) ; \
      virtual HRESULT   CreateDefaultTool (CATBaseUnknown_var &oTool) ; \
      virtual HRESULT GetFirstToolCompensation(int &oFirstNumber); \
      virtual HRESULT GetSecondToolCompensation(int &oSecondNumber); \
};



#define ENVTIEdeclare_CATIMfgToolActivity(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT   GetAuthorizedToolTypeList (CATListOfCATUnicodeString &oToolTypeList) ; \
virtual HRESULT   CreateDefaultTool (CATBaseUnknown_var &oTool) ; \
virtual HRESULT GetFirstToolCompensation(int &oFirstNumber); \
virtual HRESULT GetSecondToolCompensation(int &oSecondNumber); \


#define ENVTIEdefine_CATIMfgToolActivity(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT    ENVTIEName::GetAuthorizedToolTypeList (CATListOfCATUnicodeString &oToolTypeList)  \
{ \
return (ENVTIECALL(CATIMfgToolActivity,ENVTIETypeLetter,ENVTIELetter)GetAuthorizedToolTypeList (oToolTypeList)); \
} \
HRESULT    ENVTIEName::CreateDefaultTool (CATBaseUnknown_var &oTool)  \
{ \
return (ENVTIECALL(CATIMfgToolActivity,ENVTIETypeLetter,ENVTIELetter)CreateDefaultTool (oTool)); \
} \
HRESULT  ENVTIEName::GetFirstToolCompensation(int &oFirstNumber) \
{ \
return (ENVTIECALL(CATIMfgToolActivity,ENVTIETypeLetter,ENVTIELetter)GetFirstToolCompensation(oFirstNumber)); \
} \
HRESULT  ENVTIEName::GetSecondToolCompensation(int &oSecondNumber) \
{ \
return (ENVTIECALL(CATIMfgToolActivity,ENVTIETypeLetter,ENVTIELetter)GetSecondToolCompensation(oSecondNumber)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgToolActivity(classe)    TIECATIMfgToolActivity##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgToolActivity(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgToolActivity, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgToolActivity, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgToolActivity, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgToolActivity, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgToolActivity, classe) \
 \
HRESULT    TIECATIMfgToolActivity##classe::GetAuthorizedToolTypeList (CATListOfCATUnicodeString &oToolTypeList)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAuthorizedToolTypeList (oToolTypeList)); \
} \
HRESULT    TIECATIMfgToolActivity##classe::CreateDefaultTool (CATBaseUnknown_var &oTool)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateDefaultTool (oTool)); \
} \
HRESULT  TIECATIMfgToolActivity##classe::GetFirstToolCompensation(int &oFirstNumber) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFirstToolCompensation(oFirstNumber)); \
} \
HRESULT  TIECATIMfgToolActivity##classe::GetSecondToolCompensation(int &oSecondNumber) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSecondToolCompensation(oSecondNumber)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgToolActivity(classe) \
 \
 \
declare_TIE_CATIMfgToolActivity(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgToolActivity##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgToolActivity,"CATIMfgToolActivity",CATIMfgToolActivity::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgToolActivity(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgToolActivity, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgToolActivity##classe(classe::MetaObject(),CATIMfgToolActivity::MetaObject(),(void *)CreateTIECATIMfgToolActivity##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgToolActivity(classe) \
 \
 \
declare_TIE_CATIMfgToolActivity(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgToolActivity##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgToolActivity,"CATIMfgToolActivity",CATIMfgToolActivity::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgToolActivity(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgToolActivity, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgToolActivity##classe(classe::MetaObject(),CATIMfgToolActivity::MetaObject(),(void *)CreateTIECATIMfgToolActivity##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgToolActivity(classe) TIE_CATIMfgToolActivity(classe)
#else
#define BOA_CATIMfgToolActivity(classe) CATImplementBOA(CATIMfgToolActivity, classe)
#endif

#endif
