#ifndef __TIE_CATIAHybridShapePositionTransfo
#define __TIE_CATIAHybridShapePositionTransfo

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapePositionTransfo.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapePositionTransfo */
#define declare_TIE_CATIAHybridShapePositionTransfo(classe) \
 \
 \
class TIECATIAHybridShapePositionTransfo##classe : public CATIAHybridShapePositionTransfo \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapePositionTransfo, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Mode(CATLONG & Elem); \
      virtual HRESULT __stdcall put_Mode(CATLONG Elem); \
      virtual HRESULT __stdcall get_Profile(CATIAReference *& Elem); \
      virtual HRESULT __stdcall put_Profile(CATIAReference * Elem); \
      virtual HRESULT __stdcall GetPosCoord(CATLONG ii, CATIALength *& oCoordinate); \
      virtual HRESULT __stdcall GetPosAngle(CATLONG iI, CATIAAngle *& oAngle); \
      virtual HRESULT __stdcall SetPosCoord(CATLONG iI, CATIALength * iCoordinate); \
      virtual HRESULT __stdcall SetPosAngle(CATLONG iI, CATIAAngle * iAngle); \
      virtual HRESULT __stdcall GetPosSwapAxes(CATLONG ii, CATLONG & oInversion); \
      virtual HRESULT __stdcall SetPosSwapAxes(CATLONG ii, CATLONG iInversion); \
      virtual HRESULT __stdcall GetPosPoint(CATLONG ii, CATIAReference *& oElem); \
      virtual HRESULT __stdcall SetPosPoint(CATLONG iI, CATIAReference * iElem); \
      virtual HRESULT __stdcall GetPositionDirection(CATLONG iI, CATIAHybridShapeDirection *& oElem); \
      virtual HRESULT __stdcall SetPositionDirection(CATLONG iI, CATIAHybridShapeDirection * iElem); \
      virtual HRESULT __stdcall GetNbPosAngle(CATLONG & oI); \
      virtual HRESULT __stdcall GetNbPosCoord(CATLONG & oI); \
      virtual HRESULT __stdcall RemoveAllPosAngle(); \
      virtual HRESULT __stdcall RemoveAllPosCoord(); \
      virtual HRESULT __stdcall get_InitialDirectionComputationMode(CATLONG & oDirCompMode); \
      virtual HRESULT __stdcall put_InitialDirectionComputationMode(CATLONG iDirCompMode); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapePositionTransfo(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Mode(CATLONG & Elem); \
virtual HRESULT __stdcall put_Mode(CATLONG Elem); \
virtual HRESULT __stdcall get_Profile(CATIAReference *& Elem); \
virtual HRESULT __stdcall put_Profile(CATIAReference * Elem); \
virtual HRESULT __stdcall GetPosCoord(CATLONG ii, CATIALength *& oCoordinate); \
virtual HRESULT __stdcall GetPosAngle(CATLONG iI, CATIAAngle *& oAngle); \
virtual HRESULT __stdcall SetPosCoord(CATLONG iI, CATIALength * iCoordinate); \
virtual HRESULT __stdcall SetPosAngle(CATLONG iI, CATIAAngle * iAngle); \
virtual HRESULT __stdcall GetPosSwapAxes(CATLONG ii, CATLONG & oInversion); \
virtual HRESULT __stdcall SetPosSwapAxes(CATLONG ii, CATLONG iInversion); \
virtual HRESULT __stdcall GetPosPoint(CATLONG ii, CATIAReference *& oElem); \
virtual HRESULT __stdcall SetPosPoint(CATLONG iI, CATIAReference * iElem); \
virtual HRESULT __stdcall GetPositionDirection(CATLONG iI, CATIAHybridShapeDirection *& oElem); \
virtual HRESULT __stdcall SetPositionDirection(CATLONG iI, CATIAHybridShapeDirection * iElem); \
virtual HRESULT __stdcall GetNbPosAngle(CATLONG & oI); \
virtual HRESULT __stdcall GetNbPosCoord(CATLONG & oI); \
virtual HRESULT __stdcall RemoveAllPosAngle(); \
virtual HRESULT __stdcall RemoveAllPosCoord(); \
virtual HRESULT __stdcall get_InitialDirectionComputationMode(CATLONG & oDirCompMode); \
virtual HRESULT __stdcall put_InitialDirectionComputationMode(CATLONG iDirCompMode); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapePositionTransfo(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Mode(CATLONG & Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapePositionTransfo,ENVTIETypeLetter,ENVTIELetter)get_Mode(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Mode(CATLONG Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapePositionTransfo,ENVTIETypeLetter,ENVTIELetter)put_Mode(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Profile(CATIAReference *& Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapePositionTransfo,ENVTIETypeLetter,ENVTIELetter)get_Profile(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Profile(CATIAReference * Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapePositionTransfo,ENVTIETypeLetter,ENVTIELetter)put_Profile(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::GetPosCoord(CATLONG ii, CATIALength *& oCoordinate) \
{ \
return (ENVTIECALL(CATIAHybridShapePositionTransfo,ENVTIETypeLetter,ENVTIELetter)GetPosCoord(ii,oCoordinate)); \
} \
HRESULT __stdcall  ENVTIEName::GetPosAngle(CATLONG iI, CATIAAngle *& oAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapePositionTransfo,ENVTIETypeLetter,ENVTIELetter)GetPosAngle(iI,oAngle)); \
} \
HRESULT __stdcall  ENVTIEName::SetPosCoord(CATLONG iI, CATIALength * iCoordinate) \
{ \
return (ENVTIECALL(CATIAHybridShapePositionTransfo,ENVTIETypeLetter,ENVTIELetter)SetPosCoord(iI,iCoordinate)); \
} \
HRESULT __stdcall  ENVTIEName::SetPosAngle(CATLONG iI, CATIAAngle * iAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapePositionTransfo,ENVTIETypeLetter,ENVTIELetter)SetPosAngle(iI,iAngle)); \
} \
HRESULT __stdcall  ENVTIEName::GetPosSwapAxes(CATLONG ii, CATLONG & oInversion) \
{ \
return (ENVTIECALL(CATIAHybridShapePositionTransfo,ENVTIETypeLetter,ENVTIELetter)GetPosSwapAxes(ii,oInversion)); \
} \
HRESULT __stdcall  ENVTIEName::SetPosSwapAxes(CATLONG ii, CATLONG iInversion) \
{ \
return (ENVTIECALL(CATIAHybridShapePositionTransfo,ENVTIETypeLetter,ENVTIELetter)SetPosSwapAxes(ii,iInversion)); \
} \
HRESULT __stdcall  ENVTIEName::GetPosPoint(CATLONG ii, CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapePositionTransfo,ENVTIETypeLetter,ENVTIELetter)GetPosPoint(ii,oElem)); \
} \
HRESULT __stdcall  ENVTIEName::SetPosPoint(CATLONG iI, CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapePositionTransfo,ENVTIETypeLetter,ENVTIELetter)SetPosPoint(iI,iElem)); \
} \
HRESULT __stdcall  ENVTIEName::GetPositionDirection(CATLONG iI, CATIAHybridShapeDirection *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapePositionTransfo,ENVTIETypeLetter,ENVTIELetter)GetPositionDirection(iI,oElem)); \
} \
HRESULT __stdcall  ENVTIEName::SetPositionDirection(CATLONG iI, CATIAHybridShapeDirection * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapePositionTransfo,ENVTIETypeLetter,ENVTIELetter)SetPositionDirection(iI,iElem)); \
} \
HRESULT __stdcall  ENVTIEName::GetNbPosAngle(CATLONG & oI) \
{ \
return (ENVTIECALL(CATIAHybridShapePositionTransfo,ENVTIETypeLetter,ENVTIELetter)GetNbPosAngle(oI)); \
} \
HRESULT __stdcall  ENVTIEName::GetNbPosCoord(CATLONG & oI) \
{ \
return (ENVTIECALL(CATIAHybridShapePositionTransfo,ENVTIETypeLetter,ENVTIELetter)GetNbPosCoord(oI)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllPosAngle() \
{ \
return (ENVTIECALL(CATIAHybridShapePositionTransfo,ENVTIETypeLetter,ENVTIELetter)RemoveAllPosAngle()); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllPosCoord() \
{ \
return (ENVTIECALL(CATIAHybridShapePositionTransfo,ENVTIETypeLetter,ENVTIELetter)RemoveAllPosCoord()); \
} \
HRESULT __stdcall  ENVTIEName::get_InitialDirectionComputationMode(CATLONG & oDirCompMode) \
{ \
return (ENVTIECALL(CATIAHybridShapePositionTransfo,ENVTIETypeLetter,ENVTIELetter)get_InitialDirectionComputationMode(oDirCompMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_InitialDirectionComputationMode(CATLONG iDirCompMode) \
{ \
return (ENVTIECALL(CATIAHybridShapePositionTransfo,ENVTIETypeLetter,ENVTIELetter)put_InitialDirectionComputationMode(iDirCompMode)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapePositionTransfo,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapePositionTransfo,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapePositionTransfo,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapePositionTransfo,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapePositionTransfo,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapePositionTransfo,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapePositionTransfo,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapePositionTransfo,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapePositionTransfo(classe)    TIECATIAHybridShapePositionTransfo##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapePositionTransfo(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapePositionTransfo, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapePositionTransfo, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapePositionTransfo, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapePositionTransfo, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapePositionTransfo, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapePositionTransfo##classe::get_Mode(CATLONG & Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Mode(Elem); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePositionTransfo##classe::put_Mode(CATLONG Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Mode(Elem); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePositionTransfo##classe::get_Profile(CATIAReference *& Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Profile(Elem); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePositionTransfo##classe::put_Profile(CATIAReference * Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Profile(Elem); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePositionTransfo##classe::GetPosCoord(CATLONG ii, CATIALength *& oCoordinate) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&ii,&oCoordinate); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPosCoord(ii,oCoordinate); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&ii,&oCoordinate); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePositionTransfo##classe::GetPosAngle(CATLONG iI, CATIAAngle *& oAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iI,&oAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPosAngle(iI,oAngle); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iI,&oAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePositionTransfo##classe::SetPosCoord(CATLONG iI, CATIALength * iCoordinate) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iI,&iCoordinate); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPosCoord(iI,iCoordinate); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iI,&iCoordinate); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePositionTransfo##classe::SetPosAngle(CATLONG iI, CATIAAngle * iAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iI,&iAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPosAngle(iI,iAngle); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iI,&iAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePositionTransfo##classe::GetPosSwapAxes(CATLONG ii, CATLONG & oInversion) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&ii,&oInversion); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPosSwapAxes(ii,oInversion); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&ii,&oInversion); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePositionTransfo##classe::SetPosSwapAxes(CATLONG ii, CATLONG iInversion) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&ii,&iInversion); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPosSwapAxes(ii,iInversion); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&ii,&iInversion); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePositionTransfo##classe::GetPosPoint(CATLONG ii, CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ii,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPosPoint(ii,oElem); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ii,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePositionTransfo##classe::SetPosPoint(CATLONG iI, CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iI,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPosPoint(iI,iElem); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iI,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePositionTransfo##classe::GetPositionDirection(CATLONG iI, CATIAHybridShapeDirection *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iI,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPositionDirection(iI,oElem); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iI,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePositionTransfo##classe::SetPositionDirection(CATLONG iI, CATIAHybridShapeDirection * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iI,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPositionDirection(iI,iElem); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iI,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePositionTransfo##classe::GetNbPosAngle(CATLONG & oI) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oI); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbPosAngle(oI); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oI); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePositionTransfo##classe::GetNbPosCoord(CATLONG & oI) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oI); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbPosCoord(oI); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oI); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePositionTransfo##classe::RemoveAllPosAngle() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllPosAngle(); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePositionTransfo##classe::RemoveAllPosCoord() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllPosCoord(); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePositionTransfo##classe::get_InitialDirectionComputationMode(CATLONG & oDirCompMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oDirCompMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InitialDirectionComputationMode(oDirCompMode); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oDirCompMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePositionTransfo##classe::put_InitialDirectionComputationMode(CATLONG iDirCompMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iDirCompMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_InitialDirectionComputationMode(iDirCompMode); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iDirCompMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePositionTransfo##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePositionTransfo##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePositionTransfo##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePositionTransfo##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePositionTransfo##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePositionTransfo##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePositionTransfo##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePositionTransfo##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapePositionTransfo(classe) \
 \
 \
declare_TIE_CATIAHybridShapePositionTransfo(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapePositionTransfo##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapePositionTransfo,"CATIAHybridShapePositionTransfo",CATIAHybridShapePositionTransfo::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapePositionTransfo(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapePositionTransfo, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapePositionTransfo##classe(classe::MetaObject(),CATIAHybridShapePositionTransfo::MetaObject(),(void *)CreateTIECATIAHybridShapePositionTransfo##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapePositionTransfo(classe) \
 \
 \
declare_TIE_CATIAHybridShapePositionTransfo(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapePositionTransfo##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapePositionTransfo,"CATIAHybridShapePositionTransfo",CATIAHybridShapePositionTransfo::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapePositionTransfo(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapePositionTransfo, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapePositionTransfo##classe(classe::MetaObject(),CATIAHybridShapePositionTransfo::MetaObject(),(void *)CreateTIECATIAHybridShapePositionTransfo##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapePositionTransfo(classe) TIE_CATIAHybridShapePositionTransfo(classe)
#else
#define BOA_CATIAHybridShapePositionTransfo(classe) CATImplementBOA(CATIAHybridShapePositionTransfo, classe)
#endif

#endif
