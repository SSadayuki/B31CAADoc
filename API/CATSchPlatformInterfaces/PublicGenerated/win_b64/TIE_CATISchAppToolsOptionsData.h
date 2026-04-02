#ifndef __TIE_CATISchAppToolsOptionsData
#define __TIE_CATISchAppToolsOptionsData

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppToolsOptionsData.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppToolsOptionsData */
#define declare_TIE_CATISchAppToolsOptionsData(classe) \
 \
 \
class TIECATISchAppToolsOptionsData##classe : public CATISchAppToolsOptionsData \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppToolsOptionsData, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ShowBranchCtrs (CATBoolean *oBShow) ; \
};



#define ENVTIEdeclare_CATISchAppToolsOptionsData(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ShowBranchCtrs (CATBoolean *oBShow) ; \


#define ENVTIEdefine_CATISchAppToolsOptionsData(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ShowBranchCtrs (CATBoolean *oBShow)  \
{ \
return (ENVTIECALL(CATISchAppToolsOptionsData,ENVTIETypeLetter,ENVTIELetter)ShowBranchCtrs (oBShow)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppToolsOptionsData(classe)    TIECATISchAppToolsOptionsData##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppToolsOptionsData(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppToolsOptionsData, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppToolsOptionsData, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppToolsOptionsData, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppToolsOptionsData, classe) \
 \
HRESULT  TIECATISchAppToolsOptionsData##classe::ShowBranchCtrs (CATBoolean *oBShow)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ShowBranchCtrs (oBShow)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppToolsOptionsData(classe) \
 \
 \
declare_TIE_CATISchAppToolsOptionsData(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppToolsOptionsData##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppToolsOptionsData,"CATISchAppToolsOptionsData",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppToolsOptionsData(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppToolsOptionsData, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppToolsOptionsData##classe(classe::MetaObject(),TIECATISchAppToolsOptionsData##classe::MetaObject(),(void *)CreateTIECATISchAppToolsOptionsData##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppToolsOptionsData(classe) \
 \
 \
declare_TIE_CATISchAppToolsOptionsData(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppToolsOptionsData##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppToolsOptionsData,"CATISchAppToolsOptionsData",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppToolsOptionsData(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppToolsOptionsData, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppToolsOptionsData##classe(classe::MetaObject(),TIECATISchAppToolsOptionsData##classe::MetaObject(),(void *)CreateTIECATISchAppToolsOptionsData##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppToolsOptionsData(classe) TIE_CATISchAppToolsOptionsData(classe)
#else
#define BOA_CATISchAppToolsOptionsData(classe) CATImplementBOA(CATISchAppToolsOptionsData, classe)
#endif

#endif
