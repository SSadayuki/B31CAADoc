#ifndef __TIE_CATIADrawingArrow
#define __TIE_CATIADrawingArrow

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADrawingArrow.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADrawingArrow */
#define declare_TIE_CATIADrawingArrow(classe) \
 \
 \
class TIECATIADrawingArrow##classe : public CATIADrawingArrow \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADrawingArrow, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_HeadSymbol(CatSymbolType & oSymbol); \
      virtual HRESULT __stdcall put_HeadSymbol(CatSymbolType iSymbol); \
      virtual HRESULT __stdcall get_TailSymbol(CatSymbolType & oSymbol); \
      virtual HRESULT __stdcall put_TailSymbol(CatSymbolType iSymbol); \
      virtual HRESULT __stdcall get_NbPoint(CATLONG & oNbPoint); \
      virtual HRESULT __stdcall AddPoint(CATLONG iNum, double iX, double iY); \
      virtual HRESULT __stdcall RemovePoint(CATLONG iNum); \
      virtual HRESULT __stdcall ModifyPoint(CATLONG iNum, double iX, double iY); \
      virtual HRESULT __stdcall GetPoints(CATSafeArrayVariant & oPoints, CATLONG & oNbPoints); \
      virtual HRESULT __stdcall GetPoint(CATLONG iNum, double & oX, double & oY); \
      virtual HRESULT __stdcall get_HeadTarget(CATBaseDispatch *& oTarget); \
      virtual HRESULT __stdcall put_HeadTarget(CATBaseDispatch * iTarget); \
      virtual HRESULT __stdcall get_TailTarget(CATBaseDispatch *& oTarget); \
      virtual HRESULT __stdcall put_TailTarget(CATBaseDispatch * iTarget); \
      virtual HRESULT __stdcall AddInterruption(double iFirstPointX, double iFirstPointY, double iSecondPointX, double iSecondPointY); \
      virtual HRESULT __stdcall RemoveInterruption(CATLONG iNum); \
      virtual HRESULT __stdcall get_NbInterruption(CATLONG & oNbInterruption); \
      virtual HRESULT __stdcall GetInterruptions(CATSafeArrayVariant & oInterruptions, CATLONG & oNbInterruptions); \
      virtual HRESULT __stdcall get_ScaleOnExtremities(CAT_VARIANT_BOOL & oScaleOnExtremities); \
      virtual HRESULT __stdcall put_ScaleOnExtremities(CAT_VARIANT_BOOL iScaleOnExtremities); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADrawingArrow(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_HeadSymbol(CatSymbolType & oSymbol); \
virtual HRESULT __stdcall put_HeadSymbol(CatSymbolType iSymbol); \
virtual HRESULT __stdcall get_TailSymbol(CatSymbolType & oSymbol); \
virtual HRESULT __stdcall put_TailSymbol(CatSymbolType iSymbol); \
virtual HRESULT __stdcall get_NbPoint(CATLONG & oNbPoint); \
virtual HRESULT __stdcall AddPoint(CATLONG iNum, double iX, double iY); \
virtual HRESULT __stdcall RemovePoint(CATLONG iNum); \
virtual HRESULT __stdcall ModifyPoint(CATLONG iNum, double iX, double iY); \
virtual HRESULT __stdcall GetPoints(CATSafeArrayVariant & oPoints, CATLONG & oNbPoints); \
virtual HRESULT __stdcall GetPoint(CATLONG iNum, double & oX, double & oY); \
virtual HRESULT __stdcall get_HeadTarget(CATBaseDispatch *& oTarget); \
virtual HRESULT __stdcall put_HeadTarget(CATBaseDispatch * iTarget); \
virtual HRESULT __stdcall get_TailTarget(CATBaseDispatch *& oTarget); \
virtual HRESULT __stdcall put_TailTarget(CATBaseDispatch * iTarget); \
virtual HRESULT __stdcall AddInterruption(double iFirstPointX, double iFirstPointY, double iSecondPointX, double iSecondPointY); \
virtual HRESULT __stdcall RemoveInterruption(CATLONG iNum); \
virtual HRESULT __stdcall get_NbInterruption(CATLONG & oNbInterruption); \
virtual HRESULT __stdcall GetInterruptions(CATSafeArrayVariant & oInterruptions, CATLONG & oNbInterruptions); \
virtual HRESULT __stdcall get_ScaleOnExtremities(CAT_VARIANT_BOOL & oScaleOnExtremities); \
virtual HRESULT __stdcall put_ScaleOnExtremities(CAT_VARIANT_BOOL iScaleOnExtremities); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADrawingArrow(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_HeadSymbol(CatSymbolType & oSymbol) \
{ \
return (ENVTIECALL(CATIADrawingArrow,ENVTIETypeLetter,ENVTIELetter)get_HeadSymbol(oSymbol)); \
} \
HRESULT __stdcall  ENVTIEName::put_HeadSymbol(CatSymbolType iSymbol) \
{ \
return (ENVTIECALL(CATIADrawingArrow,ENVTIETypeLetter,ENVTIELetter)put_HeadSymbol(iSymbol)); \
} \
HRESULT __stdcall  ENVTIEName::get_TailSymbol(CatSymbolType & oSymbol) \
{ \
return (ENVTIECALL(CATIADrawingArrow,ENVTIETypeLetter,ENVTIELetter)get_TailSymbol(oSymbol)); \
} \
HRESULT __stdcall  ENVTIEName::put_TailSymbol(CatSymbolType iSymbol) \
{ \
return (ENVTIECALL(CATIADrawingArrow,ENVTIETypeLetter,ENVTIELetter)put_TailSymbol(iSymbol)); \
} \
HRESULT __stdcall  ENVTIEName::get_NbPoint(CATLONG & oNbPoint) \
{ \
return (ENVTIECALL(CATIADrawingArrow,ENVTIETypeLetter,ENVTIELetter)get_NbPoint(oNbPoint)); \
} \
HRESULT __stdcall  ENVTIEName::AddPoint(CATLONG iNum, double iX, double iY) \
{ \
return (ENVTIECALL(CATIADrawingArrow,ENVTIETypeLetter,ENVTIELetter)AddPoint(iNum,iX,iY)); \
} \
HRESULT __stdcall  ENVTIEName::RemovePoint(CATLONG iNum) \
{ \
return (ENVTIECALL(CATIADrawingArrow,ENVTIETypeLetter,ENVTIELetter)RemovePoint(iNum)); \
} \
HRESULT __stdcall  ENVTIEName::ModifyPoint(CATLONG iNum, double iX, double iY) \
{ \
return (ENVTIECALL(CATIADrawingArrow,ENVTIETypeLetter,ENVTIELetter)ModifyPoint(iNum,iX,iY)); \
} \
HRESULT __stdcall  ENVTIEName::GetPoints(CATSafeArrayVariant & oPoints, CATLONG & oNbPoints) \
{ \
return (ENVTIECALL(CATIADrawingArrow,ENVTIETypeLetter,ENVTIELetter)GetPoints(oPoints,oNbPoints)); \
} \
HRESULT __stdcall  ENVTIEName::GetPoint(CATLONG iNum, double & oX, double & oY) \
{ \
return (ENVTIECALL(CATIADrawingArrow,ENVTIETypeLetter,ENVTIELetter)GetPoint(iNum,oX,oY)); \
} \
HRESULT __stdcall  ENVTIEName::get_HeadTarget(CATBaseDispatch *& oTarget) \
{ \
return (ENVTIECALL(CATIADrawingArrow,ENVTIETypeLetter,ENVTIELetter)get_HeadTarget(oTarget)); \
} \
HRESULT __stdcall  ENVTIEName::put_HeadTarget(CATBaseDispatch * iTarget) \
{ \
return (ENVTIECALL(CATIADrawingArrow,ENVTIETypeLetter,ENVTIELetter)put_HeadTarget(iTarget)); \
} \
HRESULT __stdcall  ENVTIEName::get_TailTarget(CATBaseDispatch *& oTarget) \
{ \
return (ENVTIECALL(CATIADrawingArrow,ENVTIETypeLetter,ENVTIELetter)get_TailTarget(oTarget)); \
} \
HRESULT __stdcall  ENVTIEName::put_TailTarget(CATBaseDispatch * iTarget) \
{ \
return (ENVTIECALL(CATIADrawingArrow,ENVTIETypeLetter,ENVTIELetter)put_TailTarget(iTarget)); \
} \
HRESULT __stdcall  ENVTIEName::AddInterruption(double iFirstPointX, double iFirstPointY, double iSecondPointX, double iSecondPointY) \
{ \
return (ENVTIECALL(CATIADrawingArrow,ENVTIETypeLetter,ENVTIELetter)AddInterruption(iFirstPointX,iFirstPointY,iSecondPointX,iSecondPointY)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveInterruption(CATLONG iNum) \
{ \
return (ENVTIECALL(CATIADrawingArrow,ENVTIETypeLetter,ENVTIELetter)RemoveInterruption(iNum)); \
} \
HRESULT __stdcall  ENVTIEName::get_NbInterruption(CATLONG & oNbInterruption) \
{ \
return (ENVTIECALL(CATIADrawingArrow,ENVTIETypeLetter,ENVTIELetter)get_NbInterruption(oNbInterruption)); \
} \
HRESULT __stdcall  ENVTIEName::GetInterruptions(CATSafeArrayVariant & oInterruptions, CATLONG & oNbInterruptions) \
{ \
return (ENVTIECALL(CATIADrawingArrow,ENVTIETypeLetter,ENVTIELetter)GetInterruptions(oInterruptions,oNbInterruptions)); \
} \
HRESULT __stdcall  ENVTIEName::get_ScaleOnExtremities(CAT_VARIANT_BOOL & oScaleOnExtremities) \
{ \
return (ENVTIECALL(CATIADrawingArrow,ENVTIETypeLetter,ENVTIELetter)get_ScaleOnExtremities(oScaleOnExtremities)); \
} \
HRESULT __stdcall  ENVTIEName::put_ScaleOnExtremities(CAT_VARIANT_BOOL iScaleOnExtremities) \
{ \
return (ENVTIECALL(CATIADrawingArrow,ENVTIETypeLetter,ENVTIELetter)put_ScaleOnExtremities(iScaleOnExtremities)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADrawingArrow,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADrawingArrow,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingArrow,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingArrow,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADrawingArrow,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADrawingArrow(classe)    TIECATIADrawingArrow##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADrawingArrow(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADrawingArrow, classe) \
 \
 \
CATImplementTIEMethods(CATIADrawingArrow, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADrawingArrow, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADrawingArrow, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADrawingArrow, classe) \
 \
HRESULT __stdcall  TIECATIADrawingArrow##classe::get_HeadSymbol(CatSymbolType & oSymbol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oSymbol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HeadSymbol(oSymbol); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oSymbol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingArrow##classe::put_HeadSymbol(CatSymbolType iSymbol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSymbol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_HeadSymbol(iSymbol); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSymbol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingArrow##classe::get_TailSymbol(CatSymbolType & oSymbol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oSymbol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TailSymbol(oSymbol); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oSymbol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingArrow##classe::put_TailSymbol(CatSymbolType iSymbol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iSymbol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TailSymbol(iSymbol); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iSymbol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingArrow##classe::get_NbPoint(CATLONG & oNbPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNbPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NbPoint(oNbPoint); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNbPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingArrow##classe::AddPoint(CATLONG iNum, double iX, double iY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNum,&iX,&iY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddPoint(iNum,iX,iY); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNum,&iX,&iY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingArrow##classe::RemovePoint(CATLONG iNum) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNum); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemovePoint(iNum); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNum); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingArrow##classe::ModifyPoint(CATLONG iNum, double iX, double iY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNum,&iX,&iY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ModifyPoint(iNum,iX,iY); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNum,&iX,&iY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingArrow##classe::GetPoints(CATSafeArrayVariant & oPoints, CATLONG & oNbPoints) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oPoints,&oNbPoints); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPoints(oPoints,oNbPoints); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oPoints,&oNbPoints); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingArrow##classe::GetPoint(CATLONG iNum, double & oX, double & oY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNum,&oX,&oY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPoint(iNum,oX,oY); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNum,&oX,&oY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingArrow##classe::get_HeadTarget(CATBaseDispatch *& oTarget) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oTarget); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HeadTarget(oTarget); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oTarget); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingArrow##classe::put_HeadTarget(CATBaseDispatch * iTarget) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iTarget); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_HeadTarget(iTarget); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iTarget); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingArrow##classe::get_TailTarget(CATBaseDispatch *& oTarget) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oTarget); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TailTarget(oTarget); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oTarget); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingArrow##classe::put_TailTarget(CATBaseDispatch * iTarget) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iTarget); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TailTarget(iTarget); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iTarget); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingArrow##classe::AddInterruption(double iFirstPointX, double iFirstPointY, double iSecondPointX, double iSecondPointY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iFirstPointX,&iFirstPointY,&iSecondPointX,&iSecondPointY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddInterruption(iFirstPointX,iFirstPointY,iSecondPointX,iSecondPointY); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iFirstPointX,&iFirstPointY,&iSecondPointX,&iSecondPointY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingArrow##classe::RemoveInterruption(CATLONG iNum) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iNum); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveInterruption(iNum); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iNum); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingArrow##classe::get_NbInterruption(CATLONG & oNbInterruption) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oNbInterruption); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NbInterruption(oNbInterruption); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oNbInterruption); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingArrow##classe::GetInterruptions(CATSafeArrayVariant & oInterruptions, CATLONG & oNbInterruptions) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oInterruptions,&oNbInterruptions); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInterruptions(oInterruptions,oNbInterruptions); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oInterruptions,&oNbInterruptions); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingArrow##classe::get_ScaleOnExtremities(CAT_VARIANT_BOOL & oScaleOnExtremities) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oScaleOnExtremities); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ScaleOnExtremities(oScaleOnExtremities); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oScaleOnExtremities); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingArrow##classe::put_ScaleOnExtremities(CAT_VARIANT_BOOL iScaleOnExtremities) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iScaleOnExtremities); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ScaleOnExtremities(iScaleOnExtremities); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iScaleOnExtremities); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingArrow##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingArrow##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingArrow##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingArrow##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingArrow##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADrawingArrow(classe) \
 \
 \
declare_TIE_CATIADrawingArrow(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingArrow##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingArrow,"CATIADrawingArrow",CATIADrawingArrow::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingArrow(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADrawingArrow, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingArrow##classe(classe::MetaObject(),CATIADrawingArrow::MetaObject(),(void *)CreateTIECATIADrawingArrow##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADrawingArrow(classe) \
 \
 \
declare_TIE_CATIADrawingArrow(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingArrow##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingArrow,"CATIADrawingArrow",CATIADrawingArrow::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingArrow(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADrawingArrow, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingArrow##classe(classe::MetaObject(),CATIADrawingArrow::MetaObject(),(void *)CreateTIECATIADrawingArrow##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADrawingArrow(classe) TIE_CATIADrawingArrow(classe)
#else
#define BOA_CATIADrawingArrow(classe) CATImplementBOA(CATIADrawingArrow, classe)
#endif

#endif
