#ifndef __TIE_CATIASchRoute
#define __TIE_CATIASchRoute

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchRoute.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchRoute */
#define declare_TIE_CATIASchRoute(classe) \
 \
 \
class TIECATIASchRoute##classe : public CATIASchRoute \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchRoute, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Compress(); \
      virtual HRESULT __stdcall AddPoints(CATIASchGRRRoute * iGRR, const CATSafeArrayVariant & iLDb2PtPathToAdd, CATLONG iAfterWhichPtNum); \
      virtual HRESULT __stdcall RemovePoints(CATIASchGRRRoute * iGRR, CATLONG iNumOfPtsToRemove, CATLONG iAfterWhichPtNum); \
      virtual HRESULT __stdcall ReshapeExtremity(CATIASchGRRRoute * iGRR, CATIASchAppConnector * iRouteCntr, const CATSafeArrayVariant & iDb2DeltaXY); \
      virtual HRESULT __stdcall ReshapeExtremity2(CatSchIDLRouteMode iERouteMode, CATIASchGRRRoute * iGRR, CATIASchAppConnector * iRouteCntr, const CATSafeArrayVariant & iDb2PtToMoveCntrTo); \
      virtual HRESULT __stdcall GetPath(CATIASchGRRRoute * iGRR, CATIASchListOfDoubles *& oLDb2PtPath); \
      virtual HRESULT __stdcall SetPath(CATIASchGRRRoute * iGRR, const CATSafeArrayVariant & iLDb2PtPath); \
      virtual HRESULT __stdcall Break(CATIASchGRRRoute * iGRR, const CATSafeArrayVariant & iDb2Pt1, const CATSafeArrayVariant & iDb2Pt2, CATIASchRoute *& oNewSchRoute); \
      virtual HRESULT __stdcall Concatenate(CATIASchAppConnector * iSchRoute1Cntr, CATIASchRoute * iSchRoute2, CATIASchAppConnector * iSchRoute2Cntr); \
      virtual HRESULT __stdcall ConcatenateKeepRoute2(CATIASchAppConnector * iSchRoute1Cntr, CATIASchRoute * iSchRoute2, CATIASchAppConnector * iSchRoute2Cntr); \
      virtual HRESULT __stdcall Branch(CATIASchGRRRoute * iGRRMain, CATIASchRoute * iSchBranchRoute, CATIASchAppConnector * iSchBranchRouteCntr, CATIASchAppConnection *& oBranchCntn, CATIASchAppConnector *& oNewBranchCntr); \
      virtual HRESULT __stdcall OKToModifyPoints(CATIASchGRRRoute * iGRR, CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall OKToBreak(CATIASchGRRRoute * iGRR, CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall OKToConcatenate(CATIASchGRRRoute * iGRR, CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall OKToBranch(CATIASchGRRRoute * iGRR, const CATBSTR & iBranchClassType, CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall GetExtremityCntrs(CATIASchGRRRoute * iGRR, CATIASchAppConnector *& oRouteCntr1, CATIASchAppConnector *& oRouteCntr2); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchRoute(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Compress(); \
virtual HRESULT __stdcall AddPoints(CATIASchGRRRoute * iGRR, const CATSafeArrayVariant & iLDb2PtPathToAdd, CATLONG iAfterWhichPtNum); \
virtual HRESULT __stdcall RemovePoints(CATIASchGRRRoute * iGRR, CATLONG iNumOfPtsToRemove, CATLONG iAfterWhichPtNum); \
virtual HRESULT __stdcall ReshapeExtremity(CATIASchGRRRoute * iGRR, CATIASchAppConnector * iRouteCntr, const CATSafeArrayVariant & iDb2DeltaXY); \
virtual HRESULT __stdcall ReshapeExtremity2(CatSchIDLRouteMode iERouteMode, CATIASchGRRRoute * iGRR, CATIASchAppConnector * iRouteCntr, const CATSafeArrayVariant & iDb2PtToMoveCntrTo); \
virtual HRESULT __stdcall GetPath(CATIASchGRRRoute * iGRR, CATIASchListOfDoubles *& oLDb2PtPath); \
virtual HRESULT __stdcall SetPath(CATIASchGRRRoute * iGRR, const CATSafeArrayVariant & iLDb2PtPath); \
virtual HRESULT __stdcall Break(CATIASchGRRRoute * iGRR, const CATSafeArrayVariant & iDb2Pt1, const CATSafeArrayVariant & iDb2Pt2, CATIASchRoute *& oNewSchRoute); \
virtual HRESULT __stdcall Concatenate(CATIASchAppConnector * iSchRoute1Cntr, CATIASchRoute * iSchRoute2, CATIASchAppConnector * iSchRoute2Cntr); \
virtual HRESULT __stdcall ConcatenateKeepRoute2(CATIASchAppConnector * iSchRoute1Cntr, CATIASchRoute * iSchRoute2, CATIASchAppConnector * iSchRoute2Cntr); \
virtual HRESULT __stdcall Branch(CATIASchGRRRoute * iGRRMain, CATIASchRoute * iSchBranchRoute, CATIASchAppConnector * iSchBranchRouteCntr, CATIASchAppConnection *& oBranchCntn, CATIASchAppConnector *& oNewBranchCntr); \
virtual HRESULT __stdcall OKToModifyPoints(CATIASchGRRRoute * iGRR, CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall OKToBreak(CATIASchGRRRoute * iGRR, CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall OKToConcatenate(CATIASchGRRRoute * iGRR, CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall OKToBranch(CATIASchGRRRoute * iGRR, const CATBSTR & iBranchClassType, CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall GetExtremityCntrs(CATIASchGRRRoute * iGRR, CATIASchAppConnector *& oRouteCntr1, CATIASchAppConnector *& oRouteCntr2); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchRoute(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Compress() \
{ \
return (ENVTIECALL(CATIASchRoute,ENVTIETypeLetter,ENVTIELetter)Compress()); \
} \
HRESULT __stdcall  ENVTIEName::AddPoints(CATIASchGRRRoute * iGRR, const CATSafeArrayVariant & iLDb2PtPathToAdd, CATLONG iAfterWhichPtNum) \
{ \
return (ENVTIECALL(CATIASchRoute,ENVTIETypeLetter,ENVTIELetter)AddPoints(iGRR,iLDb2PtPathToAdd,iAfterWhichPtNum)); \
} \
HRESULT __stdcall  ENVTIEName::RemovePoints(CATIASchGRRRoute * iGRR, CATLONG iNumOfPtsToRemove, CATLONG iAfterWhichPtNum) \
{ \
return (ENVTIECALL(CATIASchRoute,ENVTIETypeLetter,ENVTIELetter)RemovePoints(iGRR,iNumOfPtsToRemove,iAfterWhichPtNum)); \
} \
HRESULT __stdcall  ENVTIEName::ReshapeExtremity(CATIASchGRRRoute * iGRR, CATIASchAppConnector * iRouteCntr, const CATSafeArrayVariant & iDb2DeltaXY) \
{ \
return (ENVTIECALL(CATIASchRoute,ENVTIETypeLetter,ENVTIELetter)ReshapeExtremity(iGRR,iRouteCntr,iDb2DeltaXY)); \
} \
HRESULT __stdcall  ENVTIEName::ReshapeExtremity2(CatSchIDLRouteMode iERouteMode, CATIASchGRRRoute * iGRR, CATIASchAppConnector * iRouteCntr, const CATSafeArrayVariant & iDb2PtToMoveCntrTo) \
{ \
return (ENVTIECALL(CATIASchRoute,ENVTIETypeLetter,ENVTIELetter)ReshapeExtremity2(iERouteMode,iGRR,iRouteCntr,iDb2PtToMoveCntrTo)); \
} \
HRESULT __stdcall  ENVTIEName::GetPath(CATIASchGRRRoute * iGRR, CATIASchListOfDoubles *& oLDb2PtPath) \
{ \
return (ENVTIECALL(CATIASchRoute,ENVTIETypeLetter,ENVTIELetter)GetPath(iGRR,oLDb2PtPath)); \
} \
HRESULT __stdcall  ENVTIEName::SetPath(CATIASchGRRRoute * iGRR, const CATSafeArrayVariant & iLDb2PtPath) \
{ \
return (ENVTIECALL(CATIASchRoute,ENVTIETypeLetter,ENVTIELetter)SetPath(iGRR,iLDb2PtPath)); \
} \
HRESULT __stdcall  ENVTIEName::Break(CATIASchGRRRoute * iGRR, const CATSafeArrayVariant & iDb2Pt1, const CATSafeArrayVariant & iDb2Pt2, CATIASchRoute *& oNewSchRoute) \
{ \
return (ENVTIECALL(CATIASchRoute,ENVTIETypeLetter,ENVTIELetter)Break(iGRR,iDb2Pt1,iDb2Pt2,oNewSchRoute)); \
} \
HRESULT __stdcall  ENVTIEName::Concatenate(CATIASchAppConnector * iSchRoute1Cntr, CATIASchRoute * iSchRoute2, CATIASchAppConnector * iSchRoute2Cntr) \
{ \
return (ENVTIECALL(CATIASchRoute,ENVTIETypeLetter,ENVTIELetter)Concatenate(iSchRoute1Cntr,iSchRoute2,iSchRoute2Cntr)); \
} \
HRESULT __stdcall  ENVTIEName::ConcatenateKeepRoute2(CATIASchAppConnector * iSchRoute1Cntr, CATIASchRoute * iSchRoute2, CATIASchAppConnector * iSchRoute2Cntr) \
{ \
return (ENVTIECALL(CATIASchRoute,ENVTIETypeLetter,ENVTIELetter)ConcatenateKeepRoute2(iSchRoute1Cntr,iSchRoute2,iSchRoute2Cntr)); \
} \
HRESULT __stdcall  ENVTIEName::Branch(CATIASchGRRRoute * iGRRMain, CATIASchRoute * iSchBranchRoute, CATIASchAppConnector * iSchBranchRouteCntr, CATIASchAppConnection *& oBranchCntn, CATIASchAppConnector *& oNewBranchCntr) \
{ \
return (ENVTIECALL(CATIASchRoute,ENVTIETypeLetter,ENVTIELetter)Branch(iGRRMain,iSchBranchRoute,iSchBranchRouteCntr,oBranchCntn,oNewBranchCntr)); \
} \
HRESULT __stdcall  ENVTIEName::OKToModifyPoints(CATIASchGRRRoute * iGRR, CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchRoute,ENVTIETypeLetter,ENVTIELetter)OKToModifyPoints(iGRR,oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::OKToBreak(CATIASchGRRRoute * iGRR, CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchRoute,ENVTIETypeLetter,ENVTIELetter)OKToBreak(iGRR,oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::OKToConcatenate(CATIASchGRRRoute * iGRR, CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchRoute,ENVTIETypeLetter,ENVTIELetter)OKToConcatenate(iGRR,oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::OKToBranch(CATIASchGRRRoute * iGRR, const CATBSTR & iBranchClassType, CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchRoute,ENVTIETypeLetter,ENVTIELetter)OKToBranch(iGRR,iBranchClassType,oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::GetExtremityCntrs(CATIASchGRRRoute * iGRR, CATIASchAppConnector *& oRouteCntr1, CATIASchAppConnector *& oRouteCntr2) \
{ \
return (ENVTIECALL(CATIASchRoute,ENVTIETypeLetter,ENVTIELetter)GetExtremityCntrs(iGRR,oRouteCntr1,oRouteCntr2)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchRoute,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchRoute,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchRoute,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchRoute,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchRoute,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchRoute(classe)    TIECATIASchRoute##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchRoute(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchRoute, classe) \
 \
 \
CATImplementTIEMethods(CATIASchRoute, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchRoute, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchRoute, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchRoute, classe) \
 \
HRESULT __stdcall  TIECATIASchRoute##classe::Compress() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compress(); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchRoute##classe::AddPoints(CATIASchGRRRoute * iGRR, const CATSafeArrayVariant & iLDb2PtPathToAdd, CATLONG iAfterWhichPtNum) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iGRR,&iLDb2PtPathToAdd,&iAfterWhichPtNum); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddPoints(iGRR,iLDb2PtPathToAdd,iAfterWhichPtNum); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iGRR,&iLDb2PtPathToAdd,&iAfterWhichPtNum); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchRoute##classe::RemovePoints(CATIASchGRRRoute * iGRR, CATLONG iNumOfPtsToRemove, CATLONG iAfterWhichPtNum) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iGRR,&iNumOfPtsToRemove,&iAfterWhichPtNum); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemovePoints(iGRR,iNumOfPtsToRemove,iAfterWhichPtNum); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iGRR,&iNumOfPtsToRemove,&iAfterWhichPtNum); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchRoute##classe::ReshapeExtremity(CATIASchGRRRoute * iGRR, CATIASchAppConnector * iRouteCntr, const CATSafeArrayVariant & iDb2DeltaXY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iGRR,&iRouteCntr,&iDb2DeltaXY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReshapeExtremity(iGRR,iRouteCntr,iDb2DeltaXY); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iGRR,&iRouteCntr,&iDb2DeltaXY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchRoute##classe::ReshapeExtremity2(CatSchIDLRouteMode iERouteMode, CATIASchGRRRoute * iGRR, CATIASchAppConnector * iRouteCntr, const CATSafeArrayVariant & iDb2PtToMoveCntrTo) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iERouteMode,&iGRR,&iRouteCntr,&iDb2PtToMoveCntrTo); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReshapeExtremity2(iERouteMode,iGRR,iRouteCntr,iDb2PtToMoveCntrTo); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iERouteMode,&iGRR,&iRouteCntr,&iDb2PtToMoveCntrTo); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchRoute##classe::GetPath(CATIASchGRRRoute * iGRR, CATIASchListOfDoubles *& oLDb2PtPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iGRR,&oLDb2PtPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPath(iGRR,oLDb2PtPath); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iGRR,&oLDb2PtPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchRoute##classe::SetPath(CATIASchGRRRoute * iGRR, const CATSafeArrayVariant & iLDb2PtPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iGRR,&iLDb2PtPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPath(iGRR,iLDb2PtPath); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iGRR,&iLDb2PtPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchRoute##classe::Break(CATIASchGRRRoute * iGRR, const CATSafeArrayVariant & iDb2Pt1, const CATSafeArrayVariant & iDb2Pt2, CATIASchRoute *& oNewSchRoute) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iGRR,&iDb2Pt1,&iDb2Pt2,&oNewSchRoute); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Break(iGRR,iDb2Pt1,iDb2Pt2,oNewSchRoute); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iGRR,&iDb2Pt1,&iDb2Pt2,&oNewSchRoute); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchRoute##classe::Concatenate(CATIASchAppConnector * iSchRoute1Cntr, CATIASchRoute * iSchRoute2, CATIASchAppConnector * iSchRoute2Cntr) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iSchRoute1Cntr,&iSchRoute2,&iSchRoute2Cntr); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Concatenate(iSchRoute1Cntr,iSchRoute2,iSchRoute2Cntr); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iSchRoute1Cntr,&iSchRoute2,&iSchRoute2Cntr); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchRoute##classe::ConcatenateKeepRoute2(CATIASchAppConnector * iSchRoute1Cntr, CATIASchRoute * iSchRoute2, CATIASchAppConnector * iSchRoute2Cntr) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iSchRoute1Cntr,&iSchRoute2,&iSchRoute2Cntr); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ConcatenateKeepRoute2(iSchRoute1Cntr,iSchRoute2,iSchRoute2Cntr); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iSchRoute1Cntr,&iSchRoute2,&iSchRoute2Cntr); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchRoute##classe::Branch(CATIASchGRRRoute * iGRRMain, CATIASchRoute * iSchBranchRoute, CATIASchAppConnector * iSchBranchRouteCntr, CATIASchAppConnection *& oBranchCntn, CATIASchAppConnector *& oNewBranchCntr) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iGRRMain,&iSchBranchRoute,&iSchBranchRouteCntr,&oBranchCntn,&oNewBranchCntr); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Branch(iGRRMain,iSchBranchRoute,iSchBranchRouteCntr,oBranchCntn,oNewBranchCntr); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iGRRMain,&iSchBranchRoute,&iSchBranchRouteCntr,&oBranchCntn,&oNewBranchCntr); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchRoute##classe::OKToModifyPoints(CATIASchGRRRoute * iGRR, CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iGRR,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OKToModifyPoints(iGRR,oBYes); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iGRR,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchRoute##classe::OKToBreak(CATIASchGRRRoute * iGRR, CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iGRR,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OKToBreak(iGRR,oBYes); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iGRR,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchRoute##classe::OKToConcatenate(CATIASchGRRRoute * iGRR, CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iGRR,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OKToConcatenate(iGRR,oBYes); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iGRR,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchRoute##classe::OKToBranch(CATIASchGRRRoute * iGRR, const CATBSTR & iBranchClassType, CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iGRR,&iBranchClassType,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OKToBranch(iGRR,iBranchClassType,oBYes); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iGRR,&iBranchClassType,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchRoute##classe::GetExtremityCntrs(CATIASchGRRRoute * iGRR, CATIASchAppConnector *& oRouteCntr1, CATIASchAppConnector *& oRouteCntr2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iGRR,&oRouteCntr1,&oRouteCntr2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExtremityCntrs(iGRR,oRouteCntr1,oRouteCntr2); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iGRR,&oRouteCntr1,&oRouteCntr2); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchRoute##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchRoute##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchRoute##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchRoute##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchRoute##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchRoute(classe) \
 \
 \
declare_TIE_CATIASchRoute(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchRoute##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchRoute,"CATIASchRoute",CATIASchRoute::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchRoute(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchRoute, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchRoute##classe(classe::MetaObject(),CATIASchRoute::MetaObject(),(void *)CreateTIECATIASchRoute##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchRoute(classe) \
 \
 \
declare_TIE_CATIASchRoute(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchRoute##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchRoute,"CATIASchRoute",CATIASchRoute::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchRoute(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchRoute, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchRoute##classe(classe::MetaObject(),CATIASchRoute::MetaObject(),(void *)CreateTIECATIASchRoute##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchRoute(classe) TIE_CATIASchRoute(classe)
#else
#define BOA_CATIASchRoute(classe) CATImplementBOA(CATIASchRoute, classe)
#endif

#endif
