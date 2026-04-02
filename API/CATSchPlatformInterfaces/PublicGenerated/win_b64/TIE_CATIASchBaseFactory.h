#ifndef __TIE_CATIASchBaseFactory
#define __TIE_CATIASchBaseFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchBaseFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchBaseFactory */
#define declare_TIE_CATIASchBaseFactory(classe) \
 \
 \
class TIECATIASchBaseFactory##classe : public CATIASchBaseFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchBaseFactory, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall CreateSchComponent(CATIABase * iAppComponentRef, CATIASchListOfObjects * iLGRR, CATIASchComponent *& oSchComp); \
      virtual HRESULT __stdcall CreateSchRouteByPrim(CATIABase * iAppRoute, CATIASchListOfObjects * iLGRR, CATIASchRoute *& oSchRoute); \
      virtual HRESULT __stdcall CreateSchRouteByPoints(CATIABase * iAppRoute, const CATSafeArrayVariant & iLDbPt, CATIASchRoute *& oSchRoute); \
      virtual HRESULT __stdcall CreateRouteAndConnectToObjects(CATIABase * iAppRoute, CATIASchAppConnector * iCntrCompFrom, CATIASchAppConnector * iCntrCompTo, CATIASchGRRComp * iGRRCompFrom, CATIASchGRRComp * iGRRCompTo, const CATSafeArrayVariant & iLDb2PtPath, CatSchIDLRouteMode iERouteMode, CATIASchRoute *& oSchRoute); \
      virtual HRESULT __stdcall CreateSchCompGroup(CATIABase * iAppGroup, CATIASchListOfObjects * iLGRR, CATIASchListOfObjects * iLMember, CATIASchCompGroupExt *& oSchGroup); \
      virtual HRESULT __stdcall CreateSchZone(CATIABase * iAppZone, CATIASchListOfObjects * iLGRR, CATIASchZone *& oSchZone); \
      virtual HRESULT __stdcall CreateNetwork(CATIASchListOfObjects * iLCntbls, CATIASchListOfObjects * iLGRRs, CATIASchListOfObjects *& oLNetAnalysis); \
      virtual HRESULT __stdcall DeleteObject(CATIABase * iObject); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchBaseFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall CreateSchComponent(CATIABase * iAppComponentRef, CATIASchListOfObjects * iLGRR, CATIASchComponent *& oSchComp); \
virtual HRESULT __stdcall CreateSchRouteByPrim(CATIABase * iAppRoute, CATIASchListOfObjects * iLGRR, CATIASchRoute *& oSchRoute); \
virtual HRESULT __stdcall CreateSchRouteByPoints(CATIABase * iAppRoute, const CATSafeArrayVariant & iLDbPt, CATIASchRoute *& oSchRoute); \
virtual HRESULT __stdcall CreateRouteAndConnectToObjects(CATIABase * iAppRoute, CATIASchAppConnector * iCntrCompFrom, CATIASchAppConnector * iCntrCompTo, CATIASchGRRComp * iGRRCompFrom, CATIASchGRRComp * iGRRCompTo, const CATSafeArrayVariant & iLDb2PtPath, CatSchIDLRouteMode iERouteMode, CATIASchRoute *& oSchRoute); \
virtual HRESULT __stdcall CreateSchCompGroup(CATIABase * iAppGroup, CATIASchListOfObjects * iLGRR, CATIASchListOfObjects * iLMember, CATIASchCompGroupExt *& oSchGroup); \
virtual HRESULT __stdcall CreateSchZone(CATIABase * iAppZone, CATIASchListOfObjects * iLGRR, CATIASchZone *& oSchZone); \
virtual HRESULT __stdcall CreateNetwork(CATIASchListOfObjects * iLCntbls, CATIASchListOfObjects * iLGRRs, CATIASchListOfObjects *& oLNetAnalysis); \
virtual HRESULT __stdcall DeleteObject(CATIABase * iObject); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchBaseFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::CreateSchComponent(CATIABase * iAppComponentRef, CATIASchListOfObjects * iLGRR, CATIASchComponent *& oSchComp) \
{ \
return (ENVTIECALL(CATIASchBaseFactory,ENVTIETypeLetter,ENVTIELetter)CreateSchComponent(iAppComponentRef,iLGRR,oSchComp)); \
} \
HRESULT __stdcall  ENVTIEName::CreateSchRouteByPrim(CATIABase * iAppRoute, CATIASchListOfObjects * iLGRR, CATIASchRoute *& oSchRoute) \
{ \
return (ENVTIECALL(CATIASchBaseFactory,ENVTIETypeLetter,ENVTIELetter)CreateSchRouteByPrim(iAppRoute,iLGRR,oSchRoute)); \
} \
HRESULT __stdcall  ENVTIEName::CreateSchRouteByPoints(CATIABase * iAppRoute, const CATSafeArrayVariant & iLDbPt, CATIASchRoute *& oSchRoute) \
{ \
return (ENVTIECALL(CATIASchBaseFactory,ENVTIETypeLetter,ENVTIELetter)CreateSchRouteByPoints(iAppRoute,iLDbPt,oSchRoute)); \
} \
HRESULT __stdcall  ENVTIEName::CreateRouteAndConnectToObjects(CATIABase * iAppRoute, CATIASchAppConnector * iCntrCompFrom, CATIASchAppConnector * iCntrCompTo, CATIASchGRRComp * iGRRCompFrom, CATIASchGRRComp * iGRRCompTo, const CATSafeArrayVariant & iLDb2PtPath, CatSchIDLRouteMode iERouteMode, CATIASchRoute *& oSchRoute) \
{ \
return (ENVTIECALL(CATIASchBaseFactory,ENVTIETypeLetter,ENVTIELetter)CreateRouteAndConnectToObjects(iAppRoute,iCntrCompFrom,iCntrCompTo,iGRRCompFrom,iGRRCompTo,iLDb2PtPath,iERouteMode,oSchRoute)); \
} \
HRESULT __stdcall  ENVTIEName::CreateSchCompGroup(CATIABase * iAppGroup, CATIASchListOfObjects * iLGRR, CATIASchListOfObjects * iLMember, CATIASchCompGroupExt *& oSchGroup) \
{ \
return (ENVTIECALL(CATIASchBaseFactory,ENVTIETypeLetter,ENVTIELetter)CreateSchCompGroup(iAppGroup,iLGRR,iLMember,oSchGroup)); \
} \
HRESULT __stdcall  ENVTIEName::CreateSchZone(CATIABase * iAppZone, CATIASchListOfObjects * iLGRR, CATIASchZone *& oSchZone) \
{ \
return (ENVTIECALL(CATIASchBaseFactory,ENVTIETypeLetter,ENVTIELetter)CreateSchZone(iAppZone,iLGRR,oSchZone)); \
} \
HRESULT __stdcall  ENVTIEName::CreateNetwork(CATIASchListOfObjects * iLCntbls, CATIASchListOfObjects * iLGRRs, CATIASchListOfObjects *& oLNetAnalysis) \
{ \
return (ENVTIECALL(CATIASchBaseFactory,ENVTIETypeLetter,ENVTIELetter)CreateNetwork(iLCntbls,iLGRRs,oLNetAnalysis)); \
} \
HRESULT __stdcall  ENVTIEName::DeleteObject(CATIABase * iObject) \
{ \
return (ENVTIECALL(CATIASchBaseFactory,ENVTIETypeLetter,ENVTIELetter)DeleteObject(iObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchBaseFactory,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchBaseFactory,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchBaseFactory,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchBaseFactory,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchBaseFactory,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchBaseFactory(classe)    TIECATIASchBaseFactory##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchBaseFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchBaseFactory, classe) \
 \
 \
CATImplementTIEMethods(CATIASchBaseFactory, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchBaseFactory, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchBaseFactory, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchBaseFactory, classe) \
 \
HRESULT __stdcall  TIECATIASchBaseFactory##classe::CreateSchComponent(CATIABase * iAppComponentRef, CATIASchListOfObjects * iLGRR, CATIASchComponent *& oSchComp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iAppComponentRef,&iLGRR,&oSchComp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateSchComponent(iAppComponentRef,iLGRR,oSchComp); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iAppComponentRef,&iLGRR,&oSchComp); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchBaseFactory##classe::CreateSchRouteByPrim(CATIABase * iAppRoute, CATIASchListOfObjects * iLGRR, CATIASchRoute *& oSchRoute) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iAppRoute,&iLGRR,&oSchRoute); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateSchRouteByPrim(iAppRoute,iLGRR,oSchRoute); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iAppRoute,&iLGRR,&oSchRoute); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchBaseFactory##classe::CreateSchRouteByPoints(CATIABase * iAppRoute, const CATSafeArrayVariant & iLDbPt, CATIASchRoute *& oSchRoute) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iAppRoute,&iLDbPt,&oSchRoute); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateSchRouteByPoints(iAppRoute,iLDbPt,oSchRoute); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iAppRoute,&iLDbPt,&oSchRoute); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchBaseFactory##classe::CreateRouteAndConnectToObjects(CATIABase * iAppRoute, CATIASchAppConnector * iCntrCompFrom, CATIASchAppConnector * iCntrCompTo, CATIASchGRRComp * iGRRCompFrom, CATIASchGRRComp * iGRRCompTo, const CATSafeArrayVariant & iLDb2PtPath, CatSchIDLRouteMode iERouteMode, CATIASchRoute *& oSchRoute) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iAppRoute,&iCntrCompFrom,&iCntrCompTo,&iGRRCompFrom,&iGRRCompTo,&iLDb2PtPath,&iERouteMode,&oSchRoute); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateRouteAndConnectToObjects(iAppRoute,iCntrCompFrom,iCntrCompTo,iGRRCompFrom,iGRRCompTo,iLDb2PtPath,iERouteMode,oSchRoute); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iAppRoute,&iCntrCompFrom,&iCntrCompTo,&iGRRCompFrom,&iGRRCompTo,&iLDb2PtPath,&iERouteMode,&oSchRoute); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchBaseFactory##classe::CreateSchCompGroup(CATIABase * iAppGroup, CATIASchListOfObjects * iLGRR, CATIASchListOfObjects * iLMember, CATIASchCompGroupExt *& oSchGroup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iAppGroup,&iLGRR,&iLMember,&oSchGroup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateSchCompGroup(iAppGroup,iLGRR,iLMember,oSchGroup); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iAppGroup,&iLGRR,&iLMember,&oSchGroup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchBaseFactory##classe::CreateSchZone(CATIABase * iAppZone, CATIASchListOfObjects * iLGRR, CATIASchZone *& oSchZone) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iAppZone,&iLGRR,&oSchZone); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateSchZone(iAppZone,iLGRR,oSchZone); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iAppZone,&iLGRR,&oSchZone); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchBaseFactory##classe::CreateNetwork(CATIASchListOfObjects * iLCntbls, CATIASchListOfObjects * iLGRRs, CATIASchListOfObjects *& oLNetAnalysis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iLCntbls,&iLGRRs,&oLNetAnalysis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateNetwork(iLCntbls,iLGRRs,oLNetAnalysis); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iLCntbls,&iLGRRs,&oLNetAnalysis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchBaseFactory##classe::DeleteObject(CATIABase * iObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DeleteObject(iObject); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchBaseFactory##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchBaseFactory##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchBaseFactory##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchBaseFactory##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchBaseFactory##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchBaseFactory(classe) \
 \
 \
declare_TIE_CATIASchBaseFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchBaseFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchBaseFactory,"CATIASchBaseFactory",CATIASchBaseFactory::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchBaseFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchBaseFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchBaseFactory##classe(classe::MetaObject(),CATIASchBaseFactory::MetaObject(),(void *)CreateTIECATIASchBaseFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchBaseFactory(classe) \
 \
 \
declare_TIE_CATIASchBaseFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchBaseFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchBaseFactory,"CATIASchBaseFactory",CATIASchBaseFactory::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchBaseFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchBaseFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchBaseFactory##classe(classe::MetaObject(),CATIASchBaseFactory::MetaObject(),(void *)CreateTIECATIASchBaseFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchBaseFactory(classe) TIE_CATIASchBaseFactory(classe)
#else
#define BOA_CATIASchBaseFactory(classe) CATImplementBOA(CATIASchBaseFactory, classe)
#endif

#endif
