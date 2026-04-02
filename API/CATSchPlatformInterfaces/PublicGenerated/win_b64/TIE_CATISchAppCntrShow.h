#ifndef __TIE_CATISchAppCntrShow
#define __TIE_CATISchAppCntrShow

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppCntrShow.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppCntrShow */
#define declare_TIE_CATISchAppCntrShow(classe) \
 \
 \
class TIECATISchAppCntrShow##classe : public CATISchAppCntrShow \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppCntrShow, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppShowCntr (CATBoolean *oBShow) ; \
      virtual HRESULT AppShowBranchCntr (CATBoolean *oBShow) ; \
};



#define ENVTIEdeclare_CATISchAppCntrShow(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppShowCntr (CATBoolean *oBShow) ; \
virtual HRESULT AppShowBranchCntr (CATBoolean *oBShow) ; \


#define ENVTIEdefine_CATISchAppCntrShow(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppShowCntr (CATBoolean *oBShow)  \
{ \
return (ENVTIECALL(CATISchAppCntrShow,ENVTIETypeLetter,ENVTIELetter)AppShowCntr (oBShow)); \
} \
HRESULT  ENVTIEName::AppShowBranchCntr (CATBoolean *oBShow)  \
{ \
return (ENVTIECALL(CATISchAppCntrShow,ENVTIETypeLetter,ENVTIELetter)AppShowBranchCntr (oBShow)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppCntrShow(classe)    TIECATISchAppCntrShow##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppCntrShow(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppCntrShow, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppCntrShow, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppCntrShow, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppCntrShow, classe) \
 \
HRESULT  TIECATISchAppCntrShow##classe::AppShowCntr (CATBoolean *oBShow)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppShowCntr (oBShow)); \
} \
HRESULT  TIECATISchAppCntrShow##classe::AppShowBranchCntr (CATBoolean *oBShow)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppShowBranchCntr (oBShow)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppCntrShow(classe) \
 \
 \
declare_TIE_CATISchAppCntrShow(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppCntrShow##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppCntrShow,"CATISchAppCntrShow",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppCntrShow(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppCntrShow, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppCntrShow##classe(classe::MetaObject(),TIECATISchAppCntrShow##classe::MetaObject(),(void *)CreateTIECATISchAppCntrShow##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppCntrShow(classe) \
 \
 \
declare_TIE_CATISchAppCntrShow(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppCntrShow##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppCntrShow,"CATISchAppCntrShow",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppCntrShow(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppCntrShow, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppCntrShow##classe(classe::MetaObject(),TIECATISchAppCntrShow##classe::MetaObject(),(void *)CreateTIECATISchAppCntrShow##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppCntrShow(classe) TIE_CATISchAppCntrShow(classe)
#else
#define BOA_CATISchAppCntrShow(classe) CATImplementBOA(CATISchAppCntrShow, classe)
#endif

#endif
