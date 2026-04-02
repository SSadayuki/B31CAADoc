#ifndef __TIE_CATIASchCompatible
#define __TIE_CATIASchCompatible

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchCompatible.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchCompatible */
#define declare_TIE_CATIASchCompatible(classe) \
 \
 \
class TIECATIASchCompatible##classe : public CATIASchCompatible \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchCompatible, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall IsTargetOKForRoute(const CATBSTR & iRouteCntrClassType, CATIASchGRR * iGRRTarget, CATIASchListOfObjects *& oLOKCntrs, CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall IsTargetOKForPlace(CATIASchGRRComp * iGRRTarget, CATIABase * iCompInfo, CATIABase *& oPlaceCompatInfo, CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall IsTargetOKForInsert(CATIABase * iCompInfo, CATIABase *& oInsertCompatInfo, CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall GetBestFitPlaceInfo(const CATSafeArrayVariant & iDb2PlacementPt, CATIABase * iPlaceCompatInfo, CATIABase *& ioPlaceInfo, CAT_VARIANT_BOOL iBYesCycleAllSolns); \
      virtual HRESULT __stdcall GetBestFitInsertInfo(const CATSafeArrayVariant & iDb2PlacementPt, CATIABase * iInsertCompatInfo, CATIABase *& ioInsertInfo, CAT_VARIANT_BOOL iBYesCycleAllSolns); \
      virtual HRESULT __stdcall GetBestCntrForRoute(const CATSafeArrayVariant & iDb2PlacementPt, CATIASchGRR * iGRR, CATIASchListOfObjects * iLOKCntrs, CATIASchListOfDoubles *& oDb2CntrPt, CATIASchAppConnector *& oBestCntr); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchCompatible(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall IsTargetOKForRoute(const CATBSTR & iRouteCntrClassType, CATIASchGRR * iGRRTarget, CATIASchListOfObjects *& oLOKCntrs, CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall IsTargetOKForPlace(CATIASchGRRComp * iGRRTarget, CATIABase * iCompInfo, CATIABase *& oPlaceCompatInfo, CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall IsTargetOKForInsert(CATIABase * iCompInfo, CATIABase *& oInsertCompatInfo, CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall GetBestFitPlaceInfo(const CATSafeArrayVariant & iDb2PlacementPt, CATIABase * iPlaceCompatInfo, CATIABase *& ioPlaceInfo, CAT_VARIANT_BOOL iBYesCycleAllSolns); \
virtual HRESULT __stdcall GetBestFitInsertInfo(const CATSafeArrayVariant & iDb2PlacementPt, CATIABase * iInsertCompatInfo, CATIABase *& ioInsertInfo, CAT_VARIANT_BOOL iBYesCycleAllSolns); \
virtual HRESULT __stdcall GetBestCntrForRoute(const CATSafeArrayVariant & iDb2PlacementPt, CATIASchGRR * iGRR, CATIASchListOfObjects * iLOKCntrs, CATIASchListOfDoubles *& oDb2CntrPt, CATIASchAppConnector *& oBestCntr); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchCompatible(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::IsTargetOKForRoute(const CATBSTR & iRouteCntrClassType, CATIASchGRR * iGRRTarget, CATIASchListOfObjects *& oLOKCntrs, CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchCompatible,ENVTIETypeLetter,ENVTIELetter)IsTargetOKForRoute(iRouteCntrClassType,iGRRTarget,oLOKCntrs,oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::IsTargetOKForPlace(CATIASchGRRComp * iGRRTarget, CATIABase * iCompInfo, CATIABase *& oPlaceCompatInfo, CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchCompatible,ENVTIETypeLetter,ENVTIELetter)IsTargetOKForPlace(iGRRTarget,iCompInfo,oPlaceCompatInfo,oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::IsTargetOKForInsert(CATIABase * iCompInfo, CATIABase *& oInsertCompatInfo, CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchCompatible,ENVTIETypeLetter,ENVTIELetter)IsTargetOKForInsert(iCompInfo,oInsertCompatInfo,oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::GetBestFitPlaceInfo(const CATSafeArrayVariant & iDb2PlacementPt, CATIABase * iPlaceCompatInfo, CATIABase *& ioPlaceInfo, CAT_VARIANT_BOOL iBYesCycleAllSolns) \
{ \
return (ENVTIECALL(CATIASchCompatible,ENVTIETypeLetter,ENVTIELetter)GetBestFitPlaceInfo(iDb2PlacementPt,iPlaceCompatInfo,ioPlaceInfo,iBYesCycleAllSolns)); \
} \
HRESULT __stdcall  ENVTIEName::GetBestFitInsertInfo(const CATSafeArrayVariant & iDb2PlacementPt, CATIABase * iInsertCompatInfo, CATIABase *& ioInsertInfo, CAT_VARIANT_BOOL iBYesCycleAllSolns) \
{ \
return (ENVTIECALL(CATIASchCompatible,ENVTIETypeLetter,ENVTIELetter)GetBestFitInsertInfo(iDb2PlacementPt,iInsertCompatInfo,ioInsertInfo,iBYesCycleAllSolns)); \
} \
HRESULT __stdcall  ENVTIEName::GetBestCntrForRoute(const CATSafeArrayVariant & iDb2PlacementPt, CATIASchGRR * iGRR, CATIASchListOfObjects * iLOKCntrs, CATIASchListOfDoubles *& oDb2CntrPt, CATIASchAppConnector *& oBestCntr) \
{ \
return (ENVTIECALL(CATIASchCompatible,ENVTIETypeLetter,ENVTIELetter)GetBestCntrForRoute(iDb2PlacementPt,iGRR,iLOKCntrs,oDb2CntrPt,oBestCntr)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchCompatible,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchCompatible,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchCompatible,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchCompatible,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchCompatible,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchCompatible(classe)    TIECATIASchCompatible##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchCompatible(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchCompatible, classe) \
 \
 \
CATImplementTIEMethods(CATIASchCompatible, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchCompatible, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchCompatible, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchCompatible, classe) \
 \
HRESULT __stdcall  TIECATIASchCompatible##classe::IsTargetOKForRoute(const CATBSTR & iRouteCntrClassType, CATIASchGRR * iGRRTarget, CATIASchListOfObjects *& oLOKCntrs, CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iRouteCntrClassType,&iGRRTarget,&oLOKCntrs,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsTargetOKForRoute(iRouteCntrClassType,iGRRTarget,oLOKCntrs,oBYes); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iRouteCntrClassType,&iGRRTarget,&oLOKCntrs,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCompatible##classe::IsTargetOKForPlace(CATIASchGRRComp * iGRRTarget, CATIABase * iCompInfo, CATIABase *& oPlaceCompatInfo, CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iGRRTarget,&iCompInfo,&oPlaceCompatInfo,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsTargetOKForPlace(iGRRTarget,iCompInfo,oPlaceCompatInfo,oBYes); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iGRRTarget,&iCompInfo,&oPlaceCompatInfo,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCompatible##classe::IsTargetOKForInsert(CATIABase * iCompInfo, CATIABase *& oInsertCompatInfo, CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iCompInfo,&oInsertCompatInfo,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsTargetOKForInsert(iCompInfo,oInsertCompatInfo,oBYes); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iCompInfo,&oInsertCompatInfo,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCompatible##classe::GetBestFitPlaceInfo(const CATSafeArrayVariant & iDb2PlacementPt, CATIABase * iPlaceCompatInfo, CATIABase *& ioPlaceInfo, CAT_VARIANT_BOOL iBYesCycleAllSolns) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iDb2PlacementPt,&iPlaceCompatInfo,&ioPlaceInfo,&iBYesCycleAllSolns); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBestFitPlaceInfo(iDb2PlacementPt,iPlaceCompatInfo,ioPlaceInfo,iBYesCycleAllSolns); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iDb2PlacementPt,&iPlaceCompatInfo,&ioPlaceInfo,&iBYesCycleAllSolns); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCompatible##classe::GetBestFitInsertInfo(const CATSafeArrayVariant & iDb2PlacementPt, CATIABase * iInsertCompatInfo, CATIABase *& ioInsertInfo, CAT_VARIANT_BOOL iBYesCycleAllSolns) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iDb2PlacementPt,&iInsertCompatInfo,&ioInsertInfo,&iBYesCycleAllSolns); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBestFitInsertInfo(iDb2PlacementPt,iInsertCompatInfo,ioInsertInfo,iBYesCycleAllSolns); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iDb2PlacementPt,&iInsertCompatInfo,&ioInsertInfo,&iBYesCycleAllSolns); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCompatible##classe::GetBestCntrForRoute(const CATSafeArrayVariant & iDb2PlacementPt, CATIASchGRR * iGRR, CATIASchListOfObjects * iLOKCntrs, CATIASchListOfDoubles *& oDb2CntrPt, CATIASchAppConnector *& oBestCntr) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iDb2PlacementPt,&iGRR,&iLOKCntrs,&oDb2CntrPt,&oBestCntr); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBestCntrForRoute(iDb2PlacementPt,iGRR,iLOKCntrs,oDb2CntrPt,oBestCntr); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iDb2PlacementPt,&iGRR,&iLOKCntrs,&oDb2CntrPt,&oBestCntr); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCompatible##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCompatible##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCompatible##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCompatible##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCompatible##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchCompatible(classe) \
 \
 \
declare_TIE_CATIASchCompatible(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchCompatible##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchCompatible,"CATIASchCompatible",CATIASchCompatible::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchCompatible(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchCompatible, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchCompatible##classe(classe::MetaObject(),CATIASchCompatible::MetaObject(),(void *)CreateTIECATIASchCompatible##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchCompatible(classe) \
 \
 \
declare_TIE_CATIASchCompatible(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchCompatible##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchCompatible,"CATIASchCompatible",CATIASchCompatible::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchCompatible(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchCompatible, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchCompatible##classe(classe::MetaObject(),CATIASchCompatible::MetaObject(),(void *)CreateTIECATIASchCompatible##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchCompatible(classe) TIE_CATIASchCompatible(classe)
#else
#define BOA_CATIASchCompatible(classe) CATImplementBOA(CATIASchCompatible, classe)
#endif

#endif
