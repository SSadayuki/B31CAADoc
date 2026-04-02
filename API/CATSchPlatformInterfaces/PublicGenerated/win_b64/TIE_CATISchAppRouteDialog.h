#ifndef __TIE_CATISchAppRouteDialog
#define __TIE_CATISchAppRouteDialog

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppRouteDialog.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppRouteDialog */
#define declare_TIE_CATISchAppRouteDialog(classe) \
 \
 \
class TIECATISchAppRouteDialog##classe : public CATISchAppRouteDialog \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppRouteDialog, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppGetApplicationDialog (CATDialog *iParentDialog, const char *iAppRouteType, CATISchAppRouteCATDlgFrame **oAppCATDlgFrame) ; \
};



#define ENVTIEdeclare_CATISchAppRouteDialog(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppGetApplicationDialog (CATDialog *iParentDialog, const char *iAppRouteType, CATISchAppRouteCATDlgFrame **oAppCATDlgFrame) ; \


#define ENVTIEdefine_CATISchAppRouteDialog(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppGetApplicationDialog (CATDialog *iParentDialog, const char *iAppRouteType, CATISchAppRouteCATDlgFrame **oAppCATDlgFrame)  \
{ \
return (ENVTIECALL(CATISchAppRouteDialog,ENVTIETypeLetter,ENVTIELetter)AppGetApplicationDialog (iParentDialog,iAppRouteType,oAppCATDlgFrame)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppRouteDialog(classe)    TIECATISchAppRouteDialog##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppRouteDialog(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppRouteDialog, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppRouteDialog, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppRouteDialog, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppRouteDialog, classe) \
 \
HRESULT  TIECATISchAppRouteDialog##classe::AppGetApplicationDialog (CATDialog *iParentDialog, const char *iAppRouteType, CATISchAppRouteCATDlgFrame **oAppCATDlgFrame)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetApplicationDialog (iParentDialog,iAppRouteType,oAppCATDlgFrame)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppRouteDialog(classe) \
 \
 \
declare_TIE_CATISchAppRouteDialog(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppRouteDialog##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppRouteDialog,"CATISchAppRouteDialog",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppRouteDialog(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppRouteDialog, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppRouteDialog##classe(classe::MetaObject(),TIECATISchAppRouteDialog##classe::MetaObject(),(void *)CreateTIECATISchAppRouteDialog##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppRouteDialog(classe) \
 \
 \
declare_TIE_CATISchAppRouteDialog(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppRouteDialog##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppRouteDialog,"CATISchAppRouteDialog",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppRouteDialog(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppRouteDialog, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppRouteDialog##classe(classe::MetaObject(),TIECATISchAppRouteDialog##classe::MetaObject(),(void *)CreateTIECATISchAppRouteDialog##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppRouteDialog(classe) TIE_CATISchAppRouteDialog(classe)
#else
#define BOA_CATISchAppRouteDialog(classe) CATImplementBOA(CATISchAppRouteDialog, classe)
#endif

#endif
