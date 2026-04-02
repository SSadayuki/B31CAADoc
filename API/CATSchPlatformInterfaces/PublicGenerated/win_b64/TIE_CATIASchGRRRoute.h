#ifndef __TIE_CATIASchGRRRoute
#define __TIE_CATIASchGRRRoute

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchGRRRoute.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchGRRRoute */
#define declare_TIE_CATIASchGRRRoute(classe) \
 \
 \
class TIECATIASchGRRRoute##classe : public CATIASchGRRRoute \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchGRRRoute, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Compress(); \
      virtual HRESULT __stdcall Compress2(CatSchIDLRouteUnsetGapsMode iUnsetGaps); \
      virtual HRESULT __stdcall AddPoints(const CATSafeArrayVariant & iLDb2PtPathToAdd, CATLONG iAfterWhichPtNum); \
      virtual HRESULT __stdcall RemovePoints(CATLONG iNumOfPtsToRemove, CATLONG iAfterWhichPtNum); \
      virtual HRESULT __stdcall GetPath(CATIASchListOfDoubles *& oLDb2PtPath); \
      virtual HRESULT __stdcall SetPath(const CATSafeArrayVariant & iLDb2PtPath, CatSchIDLRouteCompressMode iCompress); \
      virtual HRESULT __stdcall SetPath2(const CATSafeArrayVariant & iLDb2PtPath, CatSchIDLRouteCompressMode iCompress, CatSchIDLRouteUnsetGapsMode iUnsetGaps); \
      virtual HRESULT __stdcall Break(const CATSafeArrayVariant & iDb2Pt1, const CATSafeArrayVariant & iDb2Pt2, CATIASchGRRRoute *& oNewGRRRoute); \
      virtual HRESULT __stdcall Concatenate(CATLONG iWhichEnd1, CATIASchGRRRoute * iGRRRoute2, CATLONG iWhichEnd2); \
      virtual HRESULT __stdcall ConcatenateKeepGRR2(CATLONG iWhichEnd1, CATIASchGRRRoute * iGRRRoute2, CATLONG iWhichEnd2); \
      virtual HRESULT __stdcall GetStartPoint(CATIASchListOfDoubles *& oDb2StartPt); \
      virtual HRESULT __stdcall SetStartPoint(const CATSafeArrayVariant & iDb2StartPt); \
      virtual HRESULT __stdcall GetEndPoint(CATIASchListOfDoubles *& oDb2EndPt); \
      virtual HRESULT __stdcall SetEndPoint(const CATSafeArrayVariant & iDb2EndPt); \
      virtual HRESULT __stdcall CreateRouteSymbol(CATLONG iSegNum, double iSegParm, CATIASchGRR * iGRRSymbol, CATIASchRouteSymbol *& oRouteSymbol); \
      virtual HRESULT __stdcall ListRouteSymbols(CATIASchListOfObjects *& oLRouteSymbol); \
      virtual HRESULT __stdcall SetPath3(const CATSafeArrayVariant & iLDb2PtPath, CatSchIDLRouteCompressMode iCompress, CatSchIDLRouteUnsetGapsMode iUnsetGaps, CatSchIDLRouteSymbolUpdateMode iRouteUpdateSymbols); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchGRRRoute(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Compress(); \
virtual HRESULT __stdcall Compress2(CatSchIDLRouteUnsetGapsMode iUnsetGaps); \
virtual HRESULT __stdcall AddPoints(const CATSafeArrayVariant & iLDb2PtPathToAdd, CATLONG iAfterWhichPtNum); \
virtual HRESULT __stdcall RemovePoints(CATLONG iNumOfPtsToRemove, CATLONG iAfterWhichPtNum); \
virtual HRESULT __stdcall GetPath(CATIASchListOfDoubles *& oLDb2PtPath); \
virtual HRESULT __stdcall SetPath(const CATSafeArrayVariant & iLDb2PtPath, CatSchIDLRouteCompressMode iCompress); \
virtual HRESULT __stdcall SetPath2(const CATSafeArrayVariant & iLDb2PtPath, CatSchIDLRouteCompressMode iCompress, CatSchIDLRouteUnsetGapsMode iUnsetGaps); \
virtual HRESULT __stdcall Break(const CATSafeArrayVariant & iDb2Pt1, const CATSafeArrayVariant & iDb2Pt2, CATIASchGRRRoute *& oNewGRRRoute); \
virtual HRESULT __stdcall Concatenate(CATLONG iWhichEnd1, CATIASchGRRRoute * iGRRRoute2, CATLONG iWhichEnd2); \
virtual HRESULT __stdcall ConcatenateKeepGRR2(CATLONG iWhichEnd1, CATIASchGRRRoute * iGRRRoute2, CATLONG iWhichEnd2); \
virtual HRESULT __stdcall GetStartPoint(CATIASchListOfDoubles *& oDb2StartPt); \
virtual HRESULT __stdcall SetStartPoint(const CATSafeArrayVariant & iDb2StartPt); \
virtual HRESULT __stdcall GetEndPoint(CATIASchListOfDoubles *& oDb2EndPt); \
virtual HRESULT __stdcall SetEndPoint(const CATSafeArrayVariant & iDb2EndPt); \
virtual HRESULT __stdcall CreateRouteSymbol(CATLONG iSegNum, double iSegParm, CATIASchGRR * iGRRSymbol, CATIASchRouteSymbol *& oRouteSymbol); \
virtual HRESULT __stdcall ListRouteSymbols(CATIASchListOfObjects *& oLRouteSymbol); \
virtual HRESULT __stdcall SetPath3(const CATSafeArrayVariant & iLDb2PtPath, CatSchIDLRouteCompressMode iCompress, CatSchIDLRouteUnsetGapsMode iUnsetGaps, CatSchIDLRouteSymbolUpdateMode iRouteUpdateSymbols); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchGRRRoute(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Compress() \
{ \
return (ENVTIECALL(CATIASchGRRRoute,ENVTIETypeLetter,ENVTIELetter)Compress()); \
} \
HRESULT __stdcall  ENVTIEName::Compress2(CatSchIDLRouteUnsetGapsMode iUnsetGaps) \
{ \
return (ENVTIECALL(CATIASchGRRRoute,ENVTIETypeLetter,ENVTIELetter)Compress2(iUnsetGaps)); \
} \
HRESULT __stdcall  ENVTIEName::AddPoints(const CATSafeArrayVariant & iLDb2PtPathToAdd, CATLONG iAfterWhichPtNum) \
{ \
return (ENVTIECALL(CATIASchGRRRoute,ENVTIETypeLetter,ENVTIELetter)AddPoints(iLDb2PtPathToAdd,iAfterWhichPtNum)); \
} \
HRESULT __stdcall  ENVTIEName::RemovePoints(CATLONG iNumOfPtsToRemove, CATLONG iAfterWhichPtNum) \
{ \
return (ENVTIECALL(CATIASchGRRRoute,ENVTIETypeLetter,ENVTIELetter)RemovePoints(iNumOfPtsToRemove,iAfterWhichPtNum)); \
} \
HRESULT __stdcall  ENVTIEName::GetPath(CATIASchListOfDoubles *& oLDb2PtPath) \
{ \
return (ENVTIECALL(CATIASchGRRRoute,ENVTIETypeLetter,ENVTIELetter)GetPath(oLDb2PtPath)); \
} \
HRESULT __stdcall  ENVTIEName::SetPath(const CATSafeArrayVariant & iLDb2PtPath, CatSchIDLRouteCompressMode iCompress) \
{ \
return (ENVTIECALL(CATIASchGRRRoute,ENVTIETypeLetter,ENVTIELetter)SetPath(iLDb2PtPath,iCompress)); \
} \
HRESULT __stdcall  ENVTIEName::SetPath2(const CATSafeArrayVariant & iLDb2PtPath, CatSchIDLRouteCompressMode iCompress, CatSchIDLRouteUnsetGapsMode iUnsetGaps) \
{ \
return (ENVTIECALL(CATIASchGRRRoute,ENVTIETypeLetter,ENVTIELetter)SetPath2(iLDb2PtPath,iCompress,iUnsetGaps)); \
} \
HRESULT __stdcall  ENVTIEName::Break(const CATSafeArrayVariant & iDb2Pt1, const CATSafeArrayVariant & iDb2Pt2, CATIASchGRRRoute *& oNewGRRRoute) \
{ \
return (ENVTIECALL(CATIASchGRRRoute,ENVTIETypeLetter,ENVTIELetter)Break(iDb2Pt1,iDb2Pt2,oNewGRRRoute)); \
} \
HRESULT __stdcall  ENVTIEName::Concatenate(CATLONG iWhichEnd1, CATIASchGRRRoute * iGRRRoute2, CATLONG iWhichEnd2) \
{ \
return (ENVTIECALL(CATIASchGRRRoute,ENVTIETypeLetter,ENVTIELetter)Concatenate(iWhichEnd1,iGRRRoute2,iWhichEnd2)); \
} \
HRESULT __stdcall  ENVTIEName::ConcatenateKeepGRR2(CATLONG iWhichEnd1, CATIASchGRRRoute * iGRRRoute2, CATLONG iWhichEnd2) \
{ \
return (ENVTIECALL(CATIASchGRRRoute,ENVTIETypeLetter,ENVTIELetter)ConcatenateKeepGRR2(iWhichEnd1,iGRRRoute2,iWhichEnd2)); \
} \
HRESULT __stdcall  ENVTIEName::GetStartPoint(CATIASchListOfDoubles *& oDb2StartPt) \
{ \
return (ENVTIECALL(CATIASchGRRRoute,ENVTIETypeLetter,ENVTIELetter)GetStartPoint(oDb2StartPt)); \
} \
HRESULT __stdcall  ENVTIEName::SetStartPoint(const CATSafeArrayVariant & iDb2StartPt) \
{ \
return (ENVTIECALL(CATIASchGRRRoute,ENVTIETypeLetter,ENVTIELetter)SetStartPoint(iDb2StartPt)); \
} \
HRESULT __stdcall  ENVTIEName::GetEndPoint(CATIASchListOfDoubles *& oDb2EndPt) \
{ \
return (ENVTIECALL(CATIASchGRRRoute,ENVTIETypeLetter,ENVTIELetter)GetEndPoint(oDb2EndPt)); \
} \
HRESULT __stdcall  ENVTIEName::SetEndPoint(const CATSafeArrayVariant & iDb2EndPt) \
{ \
return (ENVTIECALL(CATIASchGRRRoute,ENVTIETypeLetter,ENVTIELetter)SetEndPoint(iDb2EndPt)); \
} \
HRESULT __stdcall  ENVTIEName::CreateRouteSymbol(CATLONG iSegNum, double iSegParm, CATIASchGRR * iGRRSymbol, CATIASchRouteSymbol *& oRouteSymbol) \
{ \
return (ENVTIECALL(CATIASchGRRRoute,ENVTIETypeLetter,ENVTIELetter)CreateRouteSymbol(iSegNum,iSegParm,iGRRSymbol,oRouteSymbol)); \
} \
HRESULT __stdcall  ENVTIEName::ListRouteSymbols(CATIASchListOfObjects *& oLRouteSymbol) \
{ \
return (ENVTIECALL(CATIASchGRRRoute,ENVTIETypeLetter,ENVTIELetter)ListRouteSymbols(oLRouteSymbol)); \
} \
HRESULT __stdcall  ENVTIEName::SetPath3(const CATSafeArrayVariant & iLDb2PtPath, CatSchIDLRouteCompressMode iCompress, CatSchIDLRouteUnsetGapsMode iUnsetGaps, CatSchIDLRouteSymbolUpdateMode iRouteUpdateSymbols) \
{ \
return (ENVTIECALL(CATIASchGRRRoute,ENVTIETypeLetter,ENVTIELetter)SetPath3(iLDb2PtPath,iCompress,iUnsetGaps,iRouteUpdateSymbols)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchGRRRoute,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchGRRRoute,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchGRRRoute,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchGRRRoute,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchGRRRoute,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchGRRRoute(classe)    TIECATIASchGRRRoute##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchGRRRoute(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchGRRRoute, classe) \
 \
 \
CATImplementTIEMethods(CATIASchGRRRoute, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchGRRRoute, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchGRRRoute, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchGRRRoute, classe) \
 \
HRESULT __stdcall  TIECATIASchGRRRoute##classe::Compress() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compress(); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRRoute##classe::Compress2(CatSchIDLRouteUnsetGapsMode iUnsetGaps) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iUnsetGaps); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compress2(iUnsetGaps); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iUnsetGaps); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRRoute##classe::AddPoints(const CATSafeArrayVariant & iLDb2PtPathToAdd, CATLONG iAfterWhichPtNum) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iLDb2PtPathToAdd,&iAfterWhichPtNum); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddPoints(iLDb2PtPathToAdd,iAfterWhichPtNum); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iLDb2PtPathToAdd,&iAfterWhichPtNum); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRRoute##classe::RemovePoints(CATLONG iNumOfPtsToRemove, CATLONG iAfterWhichPtNum) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iNumOfPtsToRemove,&iAfterWhichPtNum); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemovePoints(iNumOfPtsToRemove,iAfterWhichPtNum); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iNumOfPtsToRemove,&iAfterWhichPtNum); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRRoute##classe::GetPath(CATIASchListOfDoubles *& oLDb2PtPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oLDb2PtPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPath(oLDb2PtPath); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oLDb2PtPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRRoute##classe::SetPath(const CATSafeArrayVariant & iLDb2PtPath, CatSchIDLRouteCompressMode iCompress) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iLDb2PtPath,&iCompress); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPath(iLDb2PtPath,iCompress); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iLDb2PtPath,&iCompress); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRRoute##classe::SetPath2(const CATSafeArrayVariant & iLDb2PtPath, CatSchIDLRouteCompressMode iCompress, CatSchIDLRouteUnsetGapsMode iUnsetGaps) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iLDb2PtPath,&iCompress,&iUnsetGaps); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPath2(iLDb2PtPath,iCompress,iUnsetGaps); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iLDb2PtPath,&iCompress,&iUnsetGaps); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRRoute##classe::Break(const CATSafeArrayVariant & iDb2Pt1, const CATSafeArrayVariant & iDb2Pt2, CATIASchGRRRoute *& oNewGRRRoute) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iDb2Pt1,&iDb2Pt2,&oNewGRRRoute); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Break(iDb2Pt1,iDb2Pt2,oNewGRRRoute); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iDb2Pt1,&iDb2Pt2,&oNewGRRRoute); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRRoute##classe::Concatenate(CATLONG iWhichEnd1, CATIASchGRRRoute * iGRRRoute2, CATLONG iWhichEnd2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iWhichEnd1,&iGRRRoute2,&iWhichEnd2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Concatenate(iWhichEnd1,iGRRRoute2,iWhichEnd2); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iWhichEnd1,&iGRRRoute2,&iWhichEnd2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRRoute##classe::ConcatenateKeepGRR2(CATLONG iWhichEnd1, CATIASchGRRRoute * iGRRRoute2, CATLONG iWhichEnd2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iWhichEnd1,&iGRRRoute2,&iWhichEnd2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ConcatenateKeepGRR2(iWhichEnd1,iGRRRoute2,iWhichEnd2); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iWhichEnd1,&iGRRRoute2,&iWhichEnd2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRRoute##classe::GetStartPoint(CATIASchListOfDoubles *& oDb2StartPt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oDb2StartPt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStartPoint(oDb2StartPt); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oDb2StartPt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRRoute##classe::SetStartPoint(const CATSafeArrayVariant & iDb2StartPt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iDb2StartPt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetStartPoint(iDb2StartPt); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iDb2StartPt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRRoute##classe::GetEndPoint(CATIASchListOfDoubles *& oDb2EndPt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oDb2EndPt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEndPoint(oDb2EndPt); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oDb2EndPt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRRoute##classe::SetEndPoint(const CATSafeArrayVariant & iDb2EndPt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iDb2EndPt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetEndPoint(iDb2EndPt); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iDb2EndPt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRRoute##classe::CreateRouteSymbol(CATLONG iSegNum, double iSegParm, CATIASchGRR * iGRRSymbol, CATIASchRouteSymbol *& oRouteSymbol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iSegNum,&iSegParm,&iGRRSymbol,&oRouteSymbol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateRouteSymbol(iSegNum,iSegParm,iGRRSymbol,oRouteSymbol); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iSegNum,&iSegParm,&iGRRSymbol,&oRouteSymbol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRRoute##classe::ListRouteSymbols(CATIASchListOfObjects *& oLRouteSymbol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oLRouteSymbol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListRouteSymbols(oLRouteSymbol); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oLRouteSymbol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRRoute##classe::SetPath3(const CATSafeArrayVariant & iLDb2PtPath, CatSchIDLRouteCompressMode iCompress, CatSchIDLRouteUnsetGapsMode iUnsetGaps, CatSchIDLRouteSymbolUpdateMode iRouteUpdateSymbols) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iLDb2PtPath,&iCompress,&iUnsetGaps,&iRouteUpdateSymbols); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPath3(iLDb2PtPath,iCompress,iUnsetGaps,iRouteUpdateSymbols); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iLDb2PtPath,&iCompress,&iUnsetGaps,&iRouteUpdateSymbols); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRRoute##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRRoute##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRRoute##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRRoute##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRRoute##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchGRRRoute(classe) \
 \
 \
declare_TIE_CATIASchGRRRoute(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchGRRRoute##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchGRRRoute,"CATIASchGRRRoute",CATIASchGRRRoute::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchGRRRoute(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchGRRRoute, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchGRRRoute##classe(classe::MetaObject(),CATIASchGRRRoute::MetaObject(),(void *)CreateTIECATIASchGRRRoute##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchGRRRoute(classe) \
 \
 \
declare_TIE_CATIASchGRRRoute(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchGRRRoute##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchGRRRoute,"CATIASchGRRRoute",CATIASchGRRRoute::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchGRRRoute(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchGRRRoute, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchGRRRoute##classe(classe::MetaObject(),CATIASchGRRRoute::MetaObject(),(void *)CreateTIECATIASchGRRRoute##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchGRRRoute(classe) TIE_CATIASchGRRRoute(classe)
#else
#define BOA_CATIASchGRRRoute(classe) CATImplementBOA(CATIASchGRRRoute, classe)
#endif

#endif
