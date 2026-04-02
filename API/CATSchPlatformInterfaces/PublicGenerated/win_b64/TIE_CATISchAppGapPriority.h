#ifndef __TIE_CATISchAppGapPriority
#define __TIE_CATISchAppGapPriority

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppGapPriority.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppGapPriority */
#define declare_TIE_CATISchAppGapPriority(classe) \
 \
 \
class TIECATISchAppGapPriority##classe : public CATISchAppGapPriority \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppGapPriority, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppChooseGapPriority (CATISchRoute *iTheOtherRoute, CATSchGapPriority *oPriority) ; \
};



#define ENVTIEdeclare_CATISchAppGapPriority(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppChooseGapPriority (CATISchRoute *iTheOtherRoute, CATSchGapPriority *oPriority) ; \


#define ENVTIEdefine_CATISchAppGapPriority(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppChooseGapPriority (CATISchRoute *iTheOtherRoute, CATSchGapPriority *oPriority)  \
{ \
return (ENVTIECALL(CATISchAppGapPriority,ENVTIETypeLetter,ENVTIELetter)AppChooseGapPriority (iTheOtherRoute,oPriority)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppGapPriority(classe)    TIECATISchAppGapPriority##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppGapPriority(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppGapPriority, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppGapPriority, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppGapPriority, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppGapPriority, classe) \
 \
HRESULT  TIECATISchAppGapPriority##classe::AppChooseGapPriority (CATISchRoute *iTheOtherRoute, CATSchGapPriority *oPriority)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppChooseGapPriority (iTheOtherRoute,oPriority)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppGapPriority(classe) \
 \
 \
declare_TIE_CATISchAppGapPriority(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppGapPriority##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppGapPriority,"CATISchAppGapPriority",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppGapPriority(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppGapPriority, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppGapPriority##classe(classe::MetaObject(),TIECATISchAppGapPriority##classe::MetaObject(),(void *)CreateTIECATISchAppGapPriority##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppGapPriority(classe) \
 \
 \
declare_TIE_CATISchAppGapPriority(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppGapPriority##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppGapPriority,"CATISchAppGapPriority",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppGapPriority(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppGapPriority, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppGapPriority##classe(classe::MetaObject(),TIECATISchAppGapPriority##classe::MetaObject(),(void *)CreateTIECATISchAppGapPriority##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppGapPriority(classe) TIE_CATISchAppGapPriority(classe)
#else
#define BOA_CATISchAppGapPriority(classe) CATImplementBOA(CATISchAppGapPriority, classe)
#endif

#endif
