#ifndef __TIE_CATISchAppConnectable
#define __TIE_CATISchAppConnectable

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppConnectable.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppConnectable */
#define declare_TIE_CATISchAppConnectable(classe) \
 \
 \
class TIECATISchAppConnectable##classe : public CATISchAppConnectable \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppConnectable, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppListConnectors (CATICStringList *iLCntrClassFilter, CATIUnknownList **oLCntrs) ; \
      virtual HRESULT AppListConnectables (CATICStringList *iLCntbleClassFilter, CATIUnknownList **oLCntbles, CATIUnknownList **oLCntrsOnThisObj, CATIUnknownList **oLCntrsOnConnected) ; \
      virtual HRESULT AppAddConnector (const char *iClassType, CATISchAppConnector **oNewAppCntr) ; \
      virtual HRESULT AppRemoveConnector (CATISchAppConnector *iCntrToRemove) ; \
      virtual HRESULT AppListValidCntrTypes (CATICStringList **oLValidCntrTypes) ; \
      virtual HRESULT AppGetReferenceName (char **oReferenceName) ; \
      virtual HRESULT AppSetReferenceName (const char *iReferenceName) ; \
};



#define ENVTIEdeclare_CATISchAppConnectable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppListConnectors (CATICStringList *iLCntrClassFilter, CATIUnknownList **oLCntrs) ; \
virtual HRESULT AppListConnectables (CATICStringList *iLCntbleClassFilter, CATIUnknownList **oLCntbles, CATIUnknownList **oLCntrsOnThisObj, CATIUnknownList **oLCntrsOnConnected) ; \
virtual HRESULT AppAddConnector (const char *iClassType, CATISchAppConnector **oNewAppCntr) ; \
virtual HRESULT AppRemoveConnector (CATISchAppConnector *iCntrToRemove) ; \
virtual HRESULT AppListValidCntrTypes (CATICStringList **oLValidCntrTypes) ; \
virtual HRESULT AppGetReferenceName (char **oReferenceName) ; \
virtual HRESULT AppSetReferenceName (const char *iReferenceName) ; \


#define ENVTIEdefine_CATISchAppConnectable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppListConnectors (CATICStringList *iLCntrClassFilter, CATIUnknownList **oLCntrs)  \
{ \
return (ENVTIECALL(CATISchAppConnectable,ENVTIETypeLetter,ENVTIELetter)AppListConnectors (iLCntrClassFilter,oLCntrs)); \
} \
HRESULT  ENVTIEName::AppListConnectables (CATICStringList *iLCntbleClassFilter, CATIUnknownList **oLCntbles, CATIUnknownList **oLCntrsOnThisObj, CATIUnknownList **oLCntrsOnConnected)  \
{ \
return (ENVTIECALL(CATISchAppConnectable,ENVTIETypeLetter,ENVTIELetter)AppListConnectables (iLCntbleClassFilter,oLCntbles,oLCntrsOnThisObj,oLCntrsOnConnected)); \
} \
HRESULT  ENVTIEName::AppAddConnector (const char *iClassType, CATISchAppConnector **oNewAppCntr)  \
{ \
return (ENVTIECALL(CATISchAppConnectable,ENVTIETypeLetter,ENVTIELetter)AppAddConnector (iClassType,oNewAppCntr)); \
} \
HRESULT  ENVTIEName::AppRemoveConnector (CATISchAppConnector *iCntrToRemove)  \
{ \
return (ENVTIECALL(CATISchAppConnectable,ENVTIETypeLetter,ENVTIELetter)AppRemoveConnector (iCntrToRemove)); \
} \
HRESULT  ENVTIEName::AppListValidCntrTypes (CATICStringList **oLValidCntrTypes)  \
{ \
return (ENVTIECALL(CATISchAppConnectable,ENVTIETypeLetter,ENVTIELetter)AppListValidCntrTypes (oLValidCntrTypes)); \
} \
HRESULT  ENVTIEName::AppGetReferenceName (char **oReferenceName)  \
{ \
return (ENVTIECALL(CATISchAppConnectable,ENVTIETypeLetter,ENVTIELetter)AppGetReferenceName (oReferenceName)); \
} \
HRESULT  ENVTIEName::AppSetReferenceName (const char *iReferenceName)  \
{ \
return (ENVTIECALL(CATISchAppConnectable,ENVTIETypeLetter,ENVTIELetter)AppSetReferenceName (iReferenceName)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppConnectable(classe)    TIECATISchAppConnectable##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppConnectable(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppConnectable, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppConnectable, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppConnectable, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppConnectable, classe) \
 \
HRESULT  TIECATISchAppConnectable##classe::AppListConnectors (CATICStringList *iLCntrClassFilter, CATIUnknownList **oLCntrs)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListConnectors (iLCntrClassFilter,oLCntrs)); \
} \
HRESULT  TIECATISchAppConnectable##classe::AppListConnectables (CATICStringList *iLCntbleClassFilter, CATIUnknownList **oLCntbles, CATIUnknownList **oLCntrsOnThisObj, CATIUnknownList **oLCntrsOnConnected)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListConnectables (iLCntbleClassFilter,oLCntbles,oLCntrsOnThisObj,oLCntrsOnConnected)); \
} \
HRESULT  TIECATISchAppConnectable##classe::AppAddConnector (const char *iClassType, CATISchAppConnector **oNewAppCntr)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppAddConnector (iClassType,oNewAppCntr)); \
} \
HRESULT  TIECATISchAppConnectable##classe::AppRemoveConnector (CATISchAppConnector *iCntrToRemove)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppRemoveConnector (iCntrToRemove)); \
} \
HRESULT  TIECATISchAppConnectable##classe::AppListValidCntrTypes (CATICStringList **oLValidCntrTypes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListValidCntrTypes (oLValidCntrTypes)); \
} \
HRESULT  TIECATISchAppConnectable##classe::AppGetReferenceName (char **oReferenceName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetReferenceName (oReferenceName)); \
} \
HRESULT  TIECATISchAppConnectable##classe::AppSetReferenceName (const char *iReferenceName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppSetReferenceName (iReferenceName)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppConnectable(classe) \
 \
 \
declare_TIE_CATISchAppConnectable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppConnectable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppConnectable,"CATISchAppConnectable",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppConnectable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppConnectable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppConnectable##classe(classe::MetaObject(),TIECATISchAppConnectable##classe::MetaObject(),(void *)CreateTIECATISchAppConnectable##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppConnectable(classe) \
 \
 \
declare_TIE_CATISchAppConnectable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppConnectable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppConnectable,"CATISchAppConnectable",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppConnectable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppConnectable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppConnectable##classe(classe::MetaObject(),TIECATISchAppConnectable##classe::MetaObject(),(void *)CreateTIECATISchAppConnectable##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppConnectable(classe) TIE_CATISchAppConnectable(classe)
#else
#define BOA_CATISchAppConnectable(classe) CATImplementBOA(CATISchAppConnectable, classe)
#endif

#endif
