#ifndef __TIE_CATIDftGenRequestProvider
#define __TIE_CATIDftGenRequestProvider

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIDftGenRequestProvider.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIDftGenRequestProvider */
#define declare_TIE_CATIDftGenRequestProvider(classe) \
 \
 \
class TIECATIDftGenRequestProvider##classe : public CATIDftGenRequestProvider \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIDftGenRequestProvider, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetGenRequest (const CATBaseUnknown* iObj, const CATDftGenContext*  iGenContext, CATIUnknownList ** oGenReqChildren, CATBoolean* oIsAnOverloadBehavior = 0) const ; \
      virtual HRESULT GetGenRequest (const CATBaseUnknown* iObj, const CATDftGenContext * iGenContext, CATDftGenRequestWithMatrix **  oGenRequests, int * oNbRequest, CATBoolean* oIsAnOverloadBehavior = 0) const ; \
};



#define ENVTIEdeclare_CATIDftGenRequestProvider(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetGenRequest (const CATBaseUnknown* iObj, const CATDftGenContext*  iGenContext, CATIUnknownList ** oGenReqChildren, CATBoolean* oIsAnOverloadBehavior = 0) const ; \
virtual HRESULT GetGenRequest (const CATBaseUnknown* iObj, const CATDftGenContext * iGenContext, CATDftGenRequestWithMatrix **  oGenRequests, int * oNbRequest, CATBoolean* oIsAnOverloadBehavior = 0) const ; \


#define ENVTIEdefine_CATIDftGenRequestProvider(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetGenRequest (const CATBaseUnknown* iObj, const CATDftGenContext*  iGenContext, CATIUnknownList ** oGenReqChildren, CATBoolean* oIsAnOverloadBehavior ) const  \
{ \
return (ENVTIECALL(CATIDftGenRequestProvider,ENVTIETypeLetter,ENVTIELetter)GetGenRequest (iObj,iGenContext,oGenReqChildren,oIsAnOverloadBehavior )); \
} \
HRESULT  ENVTIEName::GetGenRequest (const CATBaseUnknown* iObj, const CATDftGenContext * iGenContext, CATDftGenRequestWithMatrix **  oGenRequests, int * oNbRequest, CATBoolean* oIsAnOverloadBehavior ) const  \
{ \
return (ENVTIECALL(CATIDftGenRequestProvider,ENVTIETypeLetter,ENVTIELetter)GetGenRequest (iObj,iGenContext,oGenRequests,oNbRequest,oIsAnOverloadBehavior )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIDftGenRequestProvider(classe)    TIECATIDftGenRequestProvider##classe


/* Common methods inside a TIE */
#define common_TIE_CATIDftGenRequestProvider(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIDftGenRequestProvider, classe) \
 \
 \
CATImplementTIEMethods(CATIDftGenRequestProvider, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIDftGenRequestProvider, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIDftGenRequestProvider, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIDftGenRequestProvider, classe) \
 \
HRESULT  TIECATIDftGenRequestProvider##classe::GetGenRequest (const CATBaseUnknown* iObj, const CATDftGenContext*  iGenContext, CATIUnknownList ** oGenReqChildren, CATBoolean* oIsAnOverloadBehavior ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGenRequest (iObj,iGenContext,oGenReqChildren,oIsAnOverloadBehavior )); \
} \
HRESULT  TIECATIDftGenRequestProvider##classe::GetGenRequest (const CATBaseUnknown* iObj, const CATDftGenContext * iGenContext, CATDftGenRequestWithMatrix **  oGenRequests, int * oNbRequest, CATBoolean* oIsAnOverloadBehavior ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGenRequest (iObj,iGenContext,oGenRequests,oNbRequest,oIsAnOverloadBehavior )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIDftGenRequestProvider(classe) \
 \
 \
declare_TIE_CATIDftGenRequestProvider(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDftGenRequestProvider##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDftGenRequestProvider,"CATIDftGenRequestProvider",CATIDftGenRequestProvider::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDftGenRequestProvider(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIDftGenRequestProvider, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDftGenRequestProvider##classe(classe::MetaObject(),CATIDftGenRequestProvider::MetaObject(),(void *)CreateTIECATIDftGenRequestProvider##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIDftGenRequestProvider(classe) \
 \
 \
declare_TIE_CATIDftGenRequestProvider(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDftGenRequestProvider##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDftGenRequestProvider,"CATIDftGenRequestProvider",CATIDftGenRequestProvider::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDftGenRequestProvider(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIDftGenRequestProvider, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDftGenRequestProvider##classe(classe::MetaObject(),CATIDftGenRequestProvider::MetaObject(),(void *)CreateTIECATIDftGenRequestProvider##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIDftGenRequestProvider(classe) TIE_CATIDftGenRequestProvider(classe)
#else
#define BOA_CATIDftGenRequestProvider(classe) CATImplementBOA(CATIDftGenRequestProvider, classe)
#endif

#endif
