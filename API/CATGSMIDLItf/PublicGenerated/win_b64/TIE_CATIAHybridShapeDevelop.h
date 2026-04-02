#ifndef __TIE_CATIAHybridShapeDevelop
#define __TIE_CATIAHybridShapeDevelop

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeDevelop.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeDevelop */
#define declare_TIE_CATIAHybridShapeDevelop(classe) \
 \
 \
class TIECATIAHybridShapeDevelop##classe : public CATIAHybridShapeDevelop \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeDevelop, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Mode(CATLONG & oElem); \
      virtual HRESULT __stdcall put_Mode(CATLONG iElem); \
      virtual HRESULT __stdcall get_ModePos(CATLONG & oElem); \
      virtual HRESULT __stdcall put_ModePos(CATLONG iElem); \
      virtual HRESULT __stdcall get_WireToDevelop(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_WireToDevelop(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_PositionedWire(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_PositionedWire(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_Support(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_Support(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_PlaneAxisOrigin(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_PlaneAxisOrigin(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_PlaneAxisDirection(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_PlaneAxisDirection(CATIAReference * iElem); \
      virtual HRESULT __stdcall GetPlaneAxisCoord(CATLONG iCoorIdx, CATIALength *& oCoordValue); \
      virtual HRESULT __stdcall SetPlaneAxisCoord(CATLONG iCoorIdx, double iCoordValue); \
      virtual HRESULT __stdcall GetPlaneAxisAngle(CATIAAngle *& oAngle); \
      virtual HRESULT __stdcall SetPlaneAxisAngle(double iAngle); \
      virtual HRESULT __stdcall GetPlaneAxisSwapAxes(CATLONG ii, CATLONG & oInversionValue); \
      virtual HRESULT __stdcall SetPlaneAxisSwapAxes(CATLONG iIdx, CATLONG iInversionValue); \
      virtual HRESULT __stdcall get_PointOnSupport(CATIAReference *& oOrigin); \
      virtual HRESULT __stdcall put_PointOnSupport(CATIAReference * iOrigin); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeDevelop(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Mode(CATLONG & oElem); \
virtual HRESULT __stdcall put_Mode(CATLONG iElem); \
virtual HRESULT __stdcall get_ModePos(CATLONG & oElem); \
virtual HRESULT __stdcall put_ModePos(CATLONG iElem); \
virtual HRESULT __stdcall get_WireToDevelop(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_WireToDevelop(CATIAReference * iElem); \
virtual HRESULT __stdcall get_PositionedWire(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_PositionedWire(CATIAReference * iElem); \
virtual HRESULT __stdcall get_Support(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_Support(CATIAReference * iElem); \
virtual HRESULT __stdcall get_PlaneAxisOrigin(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_PlaneAxisOrigin(CATIAReference * iElem); \
virtual HRESULT __stdcall get_PlaneAxisDirection(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_PlaneAxisDirection(CATIAReference * iElem); \
virtual HRESULT __stdcall GetPlaneAxisCoord(CATLONG iCoorIdx, CATIALength *& oCoordValue); \
virtual HRESULT __stdcall SetPlaneAxisCoord(CATLONG iCoorIdx, double iCoordValue); \
virtual HRESULT __stdcall GetPlaneAxisAngle(CATIAAngle *& oAngle); \
virtual HRESULT __stdcall SetPlaneAxisAngle(double iAngle); \
virtual HRESULT __stdcall GetPlaneAxisSwapAxes(CATLONG ii, CATLONG & oInversionValue); \
virtual HRESULT __stdcall SetPlaneAxisSwapAxes(CATLONG iIdx, CATLONG iInversionValue); \
virtual HRESULT __stdcall get_PointOnSupport(CATIAReference *& oOrigin); \
virtual HRESULT __stdcall put_PointOnSupport(CATIAReference * iOrigin); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeDevelop(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Mode(CATLONG & oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)get_Mode(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Mode(CATLONG iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)put_Mode(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_ModePos(CATLONG & oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)get_ModePos(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_ModePos(CATLONG iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)put_ModePos(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_WireToDevelop(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)get_WireToDevelop(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_WireToDevelop(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)put_WireToDevelop(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_PositionedWire(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)get_PositionedWire(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_PositionedWire(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)put_PositionedWire(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Support(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)get_Support(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Support(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)put_Support(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_PlaneAxisOrigin(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)get_PlaneAxisOrigin(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_PlaneAxisOrigin(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)put_PlaneAxisOrigin(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_PlaneAxisDirection(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)get_PlaneAxisDirection(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_PlaneAxisDirection(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)put_PlaneAxisDirection(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::GetPlaneAxisCoord(CATLONG iCoorIdx, CATIALength *& oCoordValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)GetPlaneAxisCoord(iCoorIdx,oCoordValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetPlaneAxisCoord(CATLONG iCoorIdx, double iCoordValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)SetPlaneAxisCoord(iCoorIdx,iCoordValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetPlaneAxisAngle(CATIAAngle *& oAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)GetPlaneAxisAngle(oAngle)); \
} \
HRESULT __stdcall  ENVTIEName::SetPlaneAxisAngle(double iAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)SetPlaneAxisAngle(iAngle)); \
} \
HRESULT __stdcall  ENVTIEName::GetPlaneAxisSwapAxes(CATLONG ii, CATLONG & oInversionValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)GetPlaneAxisSwapAxes(ii,oInversionValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetPlaneAxisSwapAxes(CATLONG iIdx, CATLONG iInversionValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)SetPlaneAxisSwapAxes(iIdx,iInversionValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_PointOnSupport(CATIAReference *& oOrigin) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)get_PointOnSupport(oOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::put_PointOnSupport(CATIAReference * iOrigin) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)put_PointOnSupport(iOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeDevelop,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeDevelop(classe)    TIECATIAHybridShapeDevelop##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeDevelop(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeDevelop, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeDevelop, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeDevelop, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeDevelop, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeDevelop, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeDevelop##classe::get_Mode(CATLONG & oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Mode(oElem); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDevelop##classe::put_Mode(CATLONG iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Mode(iElem); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDevelop##classe::get_ModePos(CATLONG & oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ModePos(oElem); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDevelop##classe::put_ModePos(CATLONG iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ModePos(iElem); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDevelop##classe::get_WireToDevelop(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_WireToDevelop(oElem); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDevelop##classe::put_WireToDevelop(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_WireToDevelop(iElem); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDevelop##classe::get_PositionedWire(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PositionedWire(oElem); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDevelop##classe::put_PositionedWire(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PositionedWire(iElem); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDevelop##classe::get_Support(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Support(oElem); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDevelop##classe::put_Support(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Support(iElem); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDevelop##classe::get_PlaneAxisOrigin(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PlaneAxisOrigin(oElem); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDevelop##classe::put_PlaneAxisOrigin(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PlaneAxisOrigin(iElem); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDevelop##classe::get_PlaneAxisDirection(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PlaneAxisDirection(oElem); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDevelop##classe::put_PlaneAxisDirection(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PlaneAxisDirection(iElem); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDevelop##classe::GetPlaneAxisCoord(CATLONG iCoorIdx, CATIALength *& oCoordValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iCoorIdx,&oCoordValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPlaneAxisCoord(iCoorIdx,oCoordValue); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iCoorIdx,&oCoordValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDevelop##classe::SetPlaneAxisCoord(CATLONG iCoorIdx, double iCoordValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iCoorIdx,&iCoordValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPlaneAxisCoord(iCoorIdx,iCoordValue); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iCoorIdx,&iCoordValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDevelop##classe::GetPlaneAxisAngle(CATIAAngle *& oAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPlaneAxisAngle(oAngle); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDevelop##classe::SetPlaneAxisAngle(double iAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPlaneAxisAngle(iAngle); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDevelop##classe::GetPlaneAxisSwapAxes(CATLONG ii, CATLONG & oInversionValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&ii,&oInversionValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPlaneAxisSwapAxes(ii,oInversionValue); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&ii,&oInversionValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDevelop##classe::SetPlaneAxisSwapAxes(CATLONG iIdx, CATLONG iInversionValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iIdx,&iInversionValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPlaneAxisSwapAxes(iIdx,iInversionValue); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iIdx,&iInversionValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDevelop##classe::get_PointOnSupport(CATIAReference *& oOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PointOnSupport(oOrigin); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDevelop##classe::put_PointOnSupport(CATIAReference * iOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PointOnSupport(iOrigin); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDevelop##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDevelop##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDevelop##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeDevelop##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeDevelop##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeDevelop##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeDevelop##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeDevelop##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeDevelop(classe) \
 \
 \
declare_TIE_CATIAHybridShapeDevelop(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeDevelop##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeDevelop,"CATIAHybridShapeDevelop",CATIAHybridShapeDevelop::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeDevelop(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeDevelop, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeDevelop##classe(classe::MetaObject(),CATIAHybridShapeDevelop::MetaObject(),(void *)CreateTIECATIAHybridShapeDevelop##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeDevelop(classe) \
 \
 \
declare_TIE_CATIAHybridShapeDevelop(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeDevelop##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeDevelop,"CATIAHybridShapeDevelop",CATIAHybridShapeDevelop::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeDevelop(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeDevelop, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeDevelop##classe(classe::MetaObject(),CATIAHybridShapeDevelop::MetaObject(),(void *)CreateTIECATIAHybridShapeDevelop##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeDevelop(classe) TIE_CATIAHybridShapeDevelop(classe)
#else
#define BOA_CATIAHybridShapeDevelop(classe) CATImplementBOA(CATIAHybridShapeDevelop, classe)
#endif

#endif
