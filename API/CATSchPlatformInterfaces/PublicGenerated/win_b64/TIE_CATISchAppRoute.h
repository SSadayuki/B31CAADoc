#ifndef __TIE_CATISchAppRoute
#define __TIE_CATISchAppRoute

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppRoute.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppRoute */
#define declare_TIE_CATISchAppRoute(classe) \
 \
 \
class TIECATISchAppRoute##classe : public CATISchAppRoute \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppRoute, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppCreateLocalReference (CATDocument *iDocumentToPutCopyIn, CATISchAppRoute **oSchAppRoute) ; \
      virtual HRESULT AppPostBreakProcess (CATISchRoute *iOldAppRoute, CATISchRoute *iNewAppRoute) ; \
      virtual HRESULT AppPostConcatenateProcess (CATISchRoute *iSchRoute2) ; \
      virtual HRESULT AppOKToModifyPoints (CATBoolean *oBYes) ; \
      virtual HRESULT AppOKToBreak (CATBoolean *oBYes) ; \
      virtual HRESULT AppOKToConcatenate (CATBoolean *oBYes) ; \
      virtual HRESULT AppOKToBranch (const char* iBranchClassType, CATBoolean *oBYes) ; \
      virtual HRESULT AppBreak (IUnknown **oNewAppRoute) ; \
};



#define ENVTIEdeclare_CATISchAppRoute(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppCreateLocalReference (CATDocument *iDocumentToPutCopyIn, CATISchAppRoute **oSchAppRoute) ; \
virtual HRESULT AppPostBreakProcess (CATISchRoute *iOldAppRoute, CATISchRoute *iNewAppRoute) ; \
virtual HRESULT AppPostConcatenateProcess (CATISchRoute *iSchRoute2) ; \
virtual HRESULT AppOKToModifyPoints (CATBoolean *oBYes) ; \
virtual HRESULT AppOKToBreak (CATBoolean *oBYes) ; \
virtual HRESULT AppOKToConcatenate (CATBoolean *oBYes) ; \
virtual HRESULT AppOKToBranch (const char* iBranchClassType, CATBoolean *oBYes) ; \
virtual HRESULT AppBreak (IUnknown **oNewAppRoute) ; \


#define ENVTIEdefine_CATISchAppRoute(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppCreateLocalReference (CATDocument *iDocumentToPutCopyIn, CATISchAppRoute **oSchAppRoute)  \
{ \
return (ENVTIECALL(CATISchAppRoute,ENVTIETypeLetter,ENVTIELetter)AppCreateLocalReference (iDocumentToPutCopyIn,oSchAppRoute)); \
} \
HRESULT  ENVTIEName::AppPostBreakProcess (CATISchRoute *iOldAppRoute, CATISchRoute *iNewAppRoute)  \
{ \
return (ENVTIECALL(CATISchAppRoute,ENVTIETypeLetter,ENVTIELetter)AppPostBreakProcess (iOldAppRoute,iNewAppRoute)); \
} \
HRESULT  ENVTIEName::AppPostConcatenateProcess (CATISchRoute *iSchRoute2)  \
{ \
return (ENVTIECALL(CATISchAppRoute,ENVTIETypeLetter,ENVTIELetter)AppPostConcatenateProcess (iSchRoute2)); \
} \
HRESULT  ENVTIEName::AppOKToModifyPoints (CATBoolean *oBYes)  \
{ \
return (ENVTIECALL(CATISchAppRoute,ENVTIETypeLetter,ENVTIELetter)AppOKToModifyPoints (oBYes)); \
} \
HRESULT  ENVTIEName::AppOKToBreak (CATBoolean *oBYes)  \
{ \
return (ENVTIECALL(CATISchAppRoute,ENVTIETypeLetter,ENVTIELetter)AppOKToBreak (oBYes)); \
} \
HRESULT  ENVTIEName::AppOKToConcatenate (CATBoolean *oBYes)  \
{ \
return (ENVTIECALL(CATISchAppRoute,ENVTIETypeLetter,ENVTIELetter)AppOKToConcatenate (oBYes)); \
} \
HRESULT  ENVTIEName::AppOKToBranch (const char* iBranchClassType, CATBoolean *oBYes)  \
{ \
return (ENVTIECALL(CATISchAppRoute,ENVTIETypeLetter,ENVTIELetter)AppOKToBranch (iBranchClassType,oBYes)); \
} \
HRESULT  ENVTIEName::AppBreak (IUnknown **oNewAppRoute)  \
{ \
return (ENVTIECALL(CATISchAppRoute,ENVTIETypeLetter,ENVTIELetter)AppBreak (oNewAppRoute)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppRoute(classe)    TIECATISchAppRoute##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppRoute(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppRoute, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppRoute, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppRoute, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppRoute, classe) \
 \
HRESULT  TIECATISchAppRoute##classe::AppCreateLocalReference (CATDocument *iDocumentToPutCopyIn, CATISchAppRoute **oSchAppRoute)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateLocalReference (iDocumentToPutCopyIn,oSchAppRoute)); \
} \
HRESULT  TIECATISchAppRoute##classe::AppPostBreakProcess (CATISchRoute *iOldAppRoute, CATISchRoute *iNewAppRoute)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppPostBreakProcess (iOldAppRoute,iNewAppRoute)); \
} \
HRESULT  TIECATISchAppRoute##classe::AppPostConcatenateProcess (CATISchRoute *iSchRoute2)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppPostConcatenateProcess (iSchRoute2)); \
} \
HRESULT  TIECATISchAppRoute##classe::AppOKToModifyPoints (CATBoolean *oBYes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOKToModifyPoints (oBYes)); \
} \
HRESULT  TIECATISchAppRoute##classe::AppOKToBreak (CATBoolean *oBYes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOKToBreak (oBYes)); \
} \
HRESULT  TIECATISchAppRoute##classe::AppOKToConcatenate (CATBoolean *oBYes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOKToConcatenate (oBYes)); \
} \
HRESULT  TIECATISchAppRoute##classe::AppOKToBranch (const char* iBranchClassType, CATBoolean *oBYes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOKToBranch (iBranchClassType,oBYes)); \
} \
HRESULT  TIECATISchAppRoute##classe::AppBreak (IUnknown **oNewAppRoute)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppBreak (oNewAppRoute)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppRoute(classe) \
 \
 \
declare_TIE_CATISchAppRoute(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppRoute##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppRoute,"CATISchAppRoute",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppRoute(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppRoute, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppRoute##classe(classe::MetaObject(),TIECATISchAppRoute##classe::MetaObject(),(void *)CreateTIECATISchAppRoute##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppRoute(classe) \
 \
 \
declare_TIE_CATISchAppRoute(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppRoute##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppRoute,"CATISchAppRoute",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppRoute(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppRoute, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppRoute##classe(classe::MetaObject(),TIECATISchAppRoute##classe::MetaObject(),(void *)CreateTIECATISchAppRoute##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppRoute(classe) TIE_CATISchAppRoute(classe)
#else
#define BOA_CATISchAppRoute(classe) CATImplementBOA(CATISchAppRoute, classe)
#endif

#endif
