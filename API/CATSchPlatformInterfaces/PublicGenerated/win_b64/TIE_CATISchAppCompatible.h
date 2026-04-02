#ifndef __TIE_CATISchAppCompatible
#define __TIE_CATISchAppCompatible

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppCompatible.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppCompatible */
#define declare_TIE_CATISchAppCompatible(classe) \
 \
 \
class TIECATISchAppCompatible##classe : public CATISchAppCompatible \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppCompatible, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppIsTargetOKForRoute (const char *iRouteCntrClassType, CATIUnknownList **oLOKCntrs, CATBoolean *oBYes) ; \
      virtual HRESULT AppIsTargetOKForPlace (CATIUnknownList *iLCompSourceCntrs, CATIUnknownList **oLTargetCntrs, CATBoolean *oBYes) ; \
      virtual HRESULT AppIsTargetOKForInsert (CATIUnknownList *iLCompSourceCntrs, CATIUnknownList **oLSourceCntrs, CATBoolean *oBYes) ; \
};



#define ENVTIEdeclare_CATISchAppCompatible(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppIsTargetOKForRoute (const char *iRouteCntrClassType, CATIUnknownList **oLOKCntrs, CATBoolean *oBYes) ; \
virtual HRESULT AppIsTargetOKForPlace (CATIUnknownList *iLCompSourceCntrs, CATIUnknownList **oLTargetCntrs, CATBoolean *oBYes) ; \
virtual HRESULT AppIsTargetOKForInsert (CATIUnknownList *iLCompSourceCntrs, CATIUnknownList **oLSourceCntrs, CATBoolean *oBYes) ; \


#define ENVTIEdefine_CATISchAppCompatible(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppIsTargetOKForRoute (const char *iRouteCntrClassType, CATIUnknownList **oLOKCntrs, CATBoolean *oBYes)  \
{ \
return (ENVTIECALL(CATISchAppCompatible,ENVTIETypeLetter,ENVTIELetter)AppIsTargetOKForRoute (iRouteCntrClassType,oLOKCntrs,oBYes)); \
} \
HRESULT  ENVTIEName::AppIsTargetOKForPlace (CATIUnknownList *iLCompSourceCntrs, CATIUnknownList **oLTargetCntrs, CATBoolean *oBYes)  \
{ \
return (ENVTIECALL(CATISchAppCompatible,ENVTIETypeLetter,ENVTIELetter)AppIsTargetOKForPlace (iLCompSourceCntrs,oLTargetCntrs,oBYes)); \
} \
HRESULT  ENVTIEName::AppIsTargetOKForInsert (CATIUnknownList *iLCompSourceCntrs, CATIUnknownList **oLSourceCntrs, CATBoolean *oBYes)  \
{ \
return (ENVTIECALL(CATISchAppCompatible,ENVTIETypeLetter,ENVTIELetter)AppIsTargetOKForInsert (iLCompSourceCntrs,oLSourceCntrs,oBYes)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppCompatible(classe)    TIECATISchAppCompatible##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppCompatible(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppCompatible, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppCompatible, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppCompatible, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppCompatible, classe) \
 \
HRESULT  TIECATISchAppCompatible##classe::AppIsTargetOKForRoute (const char *iRouteCntrClassType, CATIUnknownList **oLOKCntrs, CATBoolean *oBYes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppIsTargetOKForRoute (iRouteCntrClassType,oLOKCntrs,oBYes)); \
} \
HRESULT  TIECATISchAppCompatible##classe::AppIsTargetOKForPlace (CATIUnknownList *iLCompSourceCntrs, CATIUnknownList **oLTargetCntrs, CATBoolean *oBYes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppIsTargetOKForPlace (iLCompSourceCntrs,oLTargetCntrs,oBYes)); \
} \
HRESULT  TIECATISchAppCompatible##classe::AppIsTargetOKForInsert (CATIUnknownList *iLCompSourceCntrs, CATIUnknownList **oLSourceCntrs, CATBoolean *oBYes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppIsTargetOKForInsert (iLCompSourceCntrs,oLSourceCntrs,oBYes)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppCompatible(classe) \
 \
 \
declare_TIE_CATISchAppCompatible(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppCompatible##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppCompatible,"CATISchAppCompatible",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppCompatible(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppCompatible, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppCompatible##classe(classe::MetaObject(),TIECATISchAppCompatible##classe::MetaObject(),(void *)CreateTIECATISchAppCompatible##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppCompatible(classe) \
 \
 \
declare_TIE_CATISchAppCompatible(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppCompatible##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppCompatible,"CATISchAppCompatible",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppCompatible(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppCompatible, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppCompatible##classe(classe::MetaObject(),TIECATISchAppCompatible##classe::MetaObject(),(void *)CreateTIECATISchAppCompatible##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppCompatible(classe) TIE_CATISchAppCompatible(classe)
#else
#define BOA_CATISchAppCompatible(classe) CATImplementBOA(CATISchAppCompatible, classe)
#endif

#endif
