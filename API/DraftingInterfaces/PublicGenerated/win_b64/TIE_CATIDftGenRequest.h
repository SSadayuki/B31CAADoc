#ifndef __TIE_CATIDftGenRequest
#define __TIE_CATIDftGenRequest

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIDftGenRequest.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIDftGenRequest */
#define declare_TIE_CATIDftGenRequest(classe) \
 \
 \
class TIECATIDftGenRequest##classe : public CATIDftGenRequest \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIDftGenRequest, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetGenRequest (const CATDftGenContext * iGenContext, CATDftGenRequestWithMatrix **  oGenRequests, int * oNbRequest) const ; \
      virtual HRESULT GetResults (const CATDftGenContext * iGenContext,  CATDftGenResult **  oBodies, int * oNbResult) const ; \
      virtual HRESULT GetLightResults(const CATDftGenContext * iGenContext, CATDftGenLightResult **  oReps, int * oNbResult) const ; \
      virtual HRESULT GetTmpGeometry (const CATDftGenContext * iGenContext, CATDftGenResult **  oBodies, int * oNbResult, DftGenTmpGeomOption * oOptions, CATListPtrCATCGMJournals ** oJournals) const ; \
      virtual HRESULT ReleaseTmpGeomety() ; \
      virtual HRESULT GetSymbolicRep (const CATDftGenContext * iGenContext, CATIDftGenSRFactory * iSRFactory, const IID & iIID, CATIUnknownList ** oSR) ; \
};



#define ENVTIEdeclare_CATIDftGenRequest(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetGenRequest (const CATDftGenContext * iGenContext, CATDftGenRequestWithMatrix **  oGenRequests, int * oNbRequest) const ; \
virtual HRESULT GetResults (const CATDftGenContext * iGenContext,  CATDftGenResult **  oBodies, int * oNbResult) const ; \
virtual HRESULT GetLightResults(const CATDftGenContext * iGenContext, CATDftGenLightResult **  oReps, int * oNbResult) const ; \
virtual HRESULT GetTmpGeometry (const CATDftGenContext * iGenContext, CATDftGenResult **  oBodies, int * oNbResult, DftGenTmpGeomOption * oOptions, CATListPtrCATCGMJournals ** oJournals) const ; \
virtual HRESULT ReleaseTmpGeomety() ; \
virtual HRESULT GetSymbolicRep (const CATDftGenContext * iGenContext, CATIDftGenSRFactory * iSRFactory, const IID & iIID, CATIUnknownList ** oSR) ; \


#define ENVTIEdefine_CATIDftGenRequest(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetGenRequest (const CATDftGenContext * iGenContext, CATDftGenRequestWithMatrix **  oGenRequests, int * oNbRequest) const  \
{ \
return (ENVTIECALL(CATIDftGenRequest,ENVTIETypeLetter,ENVTIELetter)GetGenRequest (iGenContext,oGenRequests,oNbRequest)); \
} \
HRESULT  ENVTIEName::GetResults (const CATDftGenContext * iGenContext,  CATDftGenResult **  oBodies, int * oNbResult) const  \
{ \
return (ENVTIECALL(CATIDftGenRequest,ENVTIETypeLetter,ENVTIELetter)GetResults (iGenContext,oBodies,oNbResult)); \
} \
HRESULT  ENVTIEName::GetLightResults(const CATDftGenContext * iGenContext, CATDftGenLightResult **  oReps, int * oNbResult) const  \
{ \
return (ENVTIECALL(CATIDftGenRequest,ENVTIETypeLetter,ENVTIELetter)GetLightResults(iGenContext,oReps,oNbResult)); \
} \
HRESULT  ENVTIEName::GetTmpGeometry (const CATDftGenContext * iGenContext, CATDftGenResult **  oBodies, int * oNbResult, DftGenTmpGeomOption * oOptions, CATListPtrCATCGMJournals ** oJournals) const  \
{ \
return (ENVTIECALL(CATIDftGenRequest,ENVTIETypeLetter,ENVTIELetter)GetTmpGeometry (iGenContext,oBodies,oNbResult,oOptions,oJournals)); \
} \
HRESULT  ENVTIEName::ReleaseTmpGeomety()  \
{ \
return (ENVTIECALL(CATIDftGenRequest,ENVTIETypeLetter,ENVTIELetter)ReleaseTmpGeomety()); \
} \
HRESULT  ENVTIEName::GetSymbolicRep (const CATDftGenContext * iGenContext, CATIDftGenSRFactory * iSRFactory, const IID & iIID, CATIUnknownList ** oSR)  \
{ \
return (ENVTIECALL(CATIDftGenRequest,ENVTIETypeLetter,ENVTIELetter)GetSymbolicRep (iGenContext,iSRFactory,iIID,oSR)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIDftGenRequest(classe)    TIECATIDftGenRequest##classe


/* Common methods inside a TIE */
#define common_TIE_CATIDftGenRequest(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIDftGenRequest, classe) \
 \
 \
CATImplementTIEMethods(CATIDftGenRequest, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIDftGenRequest, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIDftGenRequest, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIDftGenRequest, classe) \
 \
HRESULT  TIECATIDftGenRequest##classe::GetGenRequest (const CATDftGenContext * iGenContext, CATDftGenRequestWithMatrix **  oGenRequests, int * oNbRequest) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGenRequest (iGenContext,oGenRequests,oNbRequest)); \
} \
HRESULT  TIECATIDftGenRequest##classe::GetResults (const CATDftGenContext * iGenContext,  CATDftGenResult **  oBodies, int * oNbResult) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetResults (iGenContext,oBodies,oNbResult)); \
} \
HRESULT  TIECATIDftGenRequest##classe::GetLightResults(const CATDftGenContext * iGenContext, CATDftGenLightResult **  oReps, int * oNbResult) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLightResults(iGenContext,oReps,oNbResult)); \
} \
HRESULT  TIECATIDftGenRequest##classe::GetTmpGeometry (const CATDftGenContext * iGenContext, CATDftGenResult **  oBodies, int * oNbResult, DftGenTmpGeomOption * oOptions, CATListPtrCATCGMJournals ** oJournals) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTmpGeometry (iGenContext,oBodies,oNbResult,oOptions,oJournals)); \
} \
HRESULT  TIECATIDftGenRequest##classe::ReleaseTmpGeomety()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReleaseTmpGeomety()); \
} \
HRESULT  TIECATIDftGenRequest##classe::GetSymbolicRep (const CATDftGenContext * iGenContext, CATIDftGenSRFactory * iSRFactory, const IID & iIID, CATIUnknownList ** oSR)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSymbolicRep (iGenContext,iSRFactory,iIID,oSR)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIDftGenRequest(classe) \
 \
 \
declare_TIE_CATIDftGenRequest(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDftGenRequest##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDftGenRequest,"CATIDftGenRequest",CATIDftGenRequest::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDftGenRequest(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIDftGenRequest, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDftGenRequest##classe(classe::MetaObject(),CATIDftGenRequest::MetaObject(),(void *)CreateTIECATIDftGenRequest##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIDftGenRequest(classe) \
 \
 \
declare_TIE_CATIDftGenRequest(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDftGenRequest##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDftGenRequest,"CATIDftGenRequest",CATIDftGenRequest::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDftGenRequest(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIDftGenRequest, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDftGenRequest##classe(classe::MetaObject(),CATIDftGenRequest::MetaObject(),(void *)CreateTIECATIDftGenRequest##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIDftGenRequest(classe) TIE_CATIDftGenRequest(classe)
#else
#define BOA_CATIDftGenRequest(classe) CATImplementBOA(CATIDftGenRequest, classe)
#endif

#endif
