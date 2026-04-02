#ifndef __TIE_CATIADrawingLeader
#define __TIE_CATIADrawingLeader

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADrawingLeader.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADrawingLeader */
#define declare_TIE_CATIADrawingLeader(classe) \
 \
 \
class TIECATIADrawingLeader##classe : public CATIADrawingLeader \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADrawingLeader, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_HeadSymbol(CatSymbolType & oSymbol); \
      virtual HRESULT __stdcall put_HeadSymbol(CatSymbolType iSymbol); \
      virtual HRESULT __stdcall get_AllAround(CAT_VARIANT_BOOL & oAllAround); \
      virtual HRESULT __stdcall put_AllAround(CAT_VARIANT_BOOL iAllAround); \
      virtual HRESULT __stdcall get_NbPoint(CATLONG & oNbPoint); \
      virtual HRESULT __stdcall AddPoint(CATLONG iNum, double iX, double iY); \
      virtual HRESULT __stdcall RemovePoint(CATLONG iNum); \
      virtual HRESULT __stdcall ModifyPoint(CATLONG iNum, double iX, double iY); \
      virtual HRESULT __stdcall GetPoints(CATSafeArrayVariant & oPoints, CATLONG & oNbPoints); \
      virtual HRESULT __stdcall GetPoint(CATLONG iNum, double & oX, double & oY); \
      virtual HRESULT __stdcall get_HeadTarget(CATBaseDispatch *& oTarget); \
      virtual HRESULT __stdcall put_HeadTarget(CATBaseDispatch * iTarget); \
      virtual HRESULT __stdcall AddInterruption(double iFirstPointX, double iFirstPointY, double iSecondPointX, double iSecondPointY); \
      virtual HRESULT __stdcall RemoveInterruption(CATLONG iNum); \
      virtual HRESULT __stdcall get_NbInterruption(CATLONG & oNbInterruption); \
      virtual HRESULT __stdcall GetInterruptions(CATSafeArrayVariant & oInterruptions, CATLONG & oNbInterruptions); \
      virtual HRESULT __stdcall get_AnchorPoint(CATLONG & oAnchorPoint); \
      virtual HRESULT __stdcall put_AnchorPoint(CATLONG iAnchorPoint); \
      virtual HRESULT __stdcall get_AnchorSymbol(CATLONG & oAnchorSymbol); \
      virtual HRESULT __stdcall put_AnchorSymbol(CATLONG iAnchorSymbol); \
      virtual HRESULT __stdcall get_Leaders(CATIADrawingLeaders *& oLeaders); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADrawingLeader(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_HeadSymbol(CatSymbolType & oSymbol); \
virtual HRESULT __stdcall put_HeadSymbol(CatSymbolType iSymbol); \
virtual HRESULT __stdcall get_AllAround(CAT_VARIANT_BOOL & oAllAround); \
virtual HRESULT __stdcall put_AllAround(CAT_VARIANT_BOOL iAllAround); \
virtual HRESULT __stdcall get_NbPoint(CATLONG & oNbPoint); \
virtual HRESULT __stdcall AddPoint(CATLONG iNum, double iX, double iY); \
virtual HRESULT __stdcall RemovePoint(CATLONG iNum); \
virtual HRESULT __stdcall ModifyPoint(CATLONG iNum, double iX, double iY); \
virtual HRESULT __stdcall GetPoints(CATSafeArrayVariant & oPoints, CATLONG & oNbPoints); \
virtual HRESULT __stdcall GetPoint(CATLONG iNum, double & oX, double & oY); \
virtual HRESULT __stdcall get_HeadTarget(CATBaseDispatch *& oTarget); \
virtual HRESULT __stdcall put_HeadTarget(CATBaseDispatch * iTarget); \
virtual HRESULT __stdcall AddInterruption(double iFirstPointX, double iFirstPointY, double iSecondPointX, double iSecondPointY); \
virtual HRESULT __stdcall RemoveInterruption(CATLONG iNum); \
virtual HRESULT __stdcall get_NbInterruption(CATLONG & oNbInterruption); \
virtual HRESULT __stdcall GetInterruptions(CATSafeArrayVariant & oInterruptions, CATLONG & oNbInterruptions); \
virtual HRESULT __stdcall get_AnchorPoint(CATLONG & oAnchorPoint); \
virtual HRESULT __stdcall put_AnchorPoint(CATLONG iAnchorPoint); \
virtual HRESULT __stdcall get_AnchorSymbol(CATLONG & oAnchorSymbol); \
virtual HRESULT __stdcall put_AnchorSymbol(CATLONG iAnchorSymbol); \
virtual HRESULT __stdcall get_Leaders(CATIADrawingLeaders *& oLeaders); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADrawingLeader(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_HeadSymbol(CatSymbolType & oSymbol) \
{ \
return (ENVTIECALL(CATIADrawingLeader,ENVTIETypeLetter,ENVTIELetter)get_HeadSymbol(oSymbol)); \
} \
HRESULT __stdcall  ENVTIEName::put_HeadSymbol(CatSymbolType iSymbol) \
{ \
return (ENVTIECALL(CATIADrawingLeader,ENVTIETypeLetter,ENVTIELetter)put_HeadSymbol(iSymbol)); \
} \
HRESULT __stdcall  ENVTIEName::get_AllAround(CAT_VARIANT_BOOL & oAllAround) \
{ \
return (ENVTIECALL(CATIADrawingLeader,ENVTIETypeLetter,ENVTIELetter)get_AllAround(oAllAround)); \
} \
HRESULT __stdcall  ENVTIEName::put_AllAround(CAT_VARIANT_BOOL iAllAround) \
{ \
return (ENVTIECALL(CATIADrawingLeader,ENVTIETypeLetter,ENVTIELetter)put_AllAround(iAllAround)); \
} \
HRESULT __stdcall  ENVTIEName::get_NbPoint(CATLONG & oNbPoint) \
{ \
return (ENVTIECALL(CATIADrawingLeader,ENVTIETypeLetter,ENVTIELetter)get_NbPoint(oNbPoint)); \
} \
HRESULT __stdcall  ENVTIEName::AddPoint(CATLONG iNum, double iX, double iY) \
{ \
return (ENVTIECALL(CATIADrawingLeader,ENVTIETypeLetter,ENVTIELetter)AddPoint(iNum,iX,iY)); \
} \
HRESULT __stdcall  ENVTIEName::RemovePoint(CATLONG iNum) \
{ \
return (ENVTIECALL(CATIADrawingLeader,ENVTIETypeLetter,ENVTIELetter)RemovePoint(iNum)); \
} \
HRESULT __stdcall  ENVTIEName::ModifyPoint(CATLONG iNum, double iX, double iY) \
{ \
return (ENVTIECALL(CATIADrawingLeader,ENVTIETypeLetter,ENVTIELetter)ModifyPoint(iNum,iX,iY)); \
} \
HRESULT __stdcall  ENVTIEName::GetPoints(CATSafeArrayVariant & oPoints, CATLONG & oNbPoints) \
{ \
return (ENVTIECALL(CATIADrawingLeader,ENVTIETypeLetter,ENVTIELetter)GetPoints(oPoints,oNbPoints)); \
} \
HRESULT __stdcall  ENVTIEName::GetPoint(CATLONG iNum, double & oX, double & oY) \
{ \
return (ENVTIECALL(CATIADrawingLeader,ENVTIETypeLetter,ENVTIELetter)GetPoint(iNum,oX,oY)); \
} \
HRESULT __stdcall  ENVTIEName::get_HeadTarget(CATBaseDispatch *& oTarget) \
{ \
return (ENVTIECALL(CATIADrawingLeader,ENVTIETypeLetter,ENVTIELetter)get_HeadTarget(oTarget)); \
} \
HRESULT __stdcall  ENVTIEName::put_HeadTarget(CATBaseDispatch * iTarget) \
{ \
return (ENVTIECALL(CATIADrawingLeader,ENVTIETypeLetter,ENVTIELetter)put_HeadTarget(iTarget)); \
} \
HRESULT __stdcall  ENVTIEName::AddInterruption(double iFirstPointX, double iFirstPointY, double iSecondPointX, double iSecondPointY) \
{ \
return (ENVTIECALL(CATIADrawingLeader,ENVTIETypeLetter,ENVTIELetter)AddInterruption(iFirstPointX,iFirstPointY,iSecondPointX,iSecondPointY)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveInterruption(CATLONG iNum) \
{ \
return (ENVTIECALL(CATIADrawingLeader,ENVTIETypeLetter,ENVTIELetter)RemoveInterruption(iNum)); \
} \
HRESULT __stdcall  ENVTIEName::get_NbInterruption(CATLONG & oNbInterruption) \
{ \
return (ENVTIECALL(CATIADrawingLeader,ENVTIETypeLetter,ENVTIELetter)get_NbInterruption(oNbInterruption)); \
} \
HRESULT __stdcall  ENVTIEName::GetInterruptions(CATSafeArrayVariant & oInterruptions, CATLONG & oNbInterruptions) \
{ \
return (ENVTIECALL(CATIADrawingLeader,ENVTIETypeLetter,ENVTIELetter)GetInterruptions(oInterruptions,oNbInterruptions)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnchorPoint(CATLONG & oAnchorPoint) \
{ \
return (ENVTIECALL(CATIADrawingLeader,ENVTIETypeLetter,ENVTIELetter)get_AnchorPoint(oAnchorPoint)); \
} \
HRESULT __stdcall  ENVTIEName::put_AnchorPoint(CATLONG iAnchorPoint) \
{ \
return (ENVTIECALL(CATIADrawingLeader,ENVTIETypeLetter,ENVTIELetter)put_AnchorPoint(iAnchorPoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnchorSymbol(CATLONG & oAnchorSymbol) \
{ \
return (ENVTIECALL(CATIADrawingLeader,ENVTIETypeLetter,ENVTIELetter)get_AnchorSymbol(oAnchorSymbol)); \
} \
HRESULT __stdcall  ENVTIEName::put_AnchorSymbol(CATLONG iAnchorSymbol) \
{ \
return (ENVTIECALL(CATIADrawingLeader,ENVTIETypeLetter,ENVTIELetter)put_AnchorSymbol(iAnchorSymbol)); \
} \
HRESULT __stdcall  ENVTIEName::get_Leaders(CATIADrawingLeaders *& oLeaders) \
{ \
return (ENVTIECALL(CATIADrawingLeader,ENVTIETypeLetter,ENVTIELetter)get_Leaders(oLeaders)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADrawingLeader,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADrawingLeader,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingLeader,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingLeader,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADrawingLeader,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADrawingLeader(classe)    TIECATIADrawingLeader##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADrawingLeader(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADrawingLeader, classe) \
 \
 \
CATImplementTIEMethods(CATIADrawingLeader, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADrawingLeader, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADrawingLeader, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADrawingLeader, classe) \
 \
HRESULT __stdcall  TIECATIADrawingLeader##classe::get_HeadSymbol(CatSymbolType & oSymbol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oSymbol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HeadSymbol(oSymbol); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oSymbol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingLeader##classe::put_HeadSymbol(CatSymbolType iSymbol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSymbol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_HeadSymbol(iSymbol); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSymbol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingLeader##classe::get_AllAround(CAT_VARIANT_BOOL & oAllAround) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oAllAround); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AllAround(oAllAround); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oAllAround); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingLeader##classe::put_AllAround(CAT_VARIANT_BOOL iAllAround) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iAllAround); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AllAround(iAllAround); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iAllAround); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingLeader##classe::get_NbPoint(CATLONG & oNbPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNbPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NbPoint(oNbPoint); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNbPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingLeader##classe::AddPoint(CATLONG iNum, double iX, double iY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNum,&iX,&iY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddPoint(iNum,iX,iY); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNum,&iX,&iY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingLeader##classe::RemovePoint(CATLONG iNum) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNum); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemovePoint(iNum); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNum); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingLeader##classe::ModifyPoint(CATLONG iNum, double iX, double iY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNum,&iX,&iY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ModifyPoint(iNum,iX,iY); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNum,&iX,&iY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingLeader##classe::GetPoints(CATSafeArrayVariant & oPoints, CATLONG & oNbPoints) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oPoints,&oNbPoints); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPoints(oPoints,oNbPoints); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oPoints,&oNbPoints); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingLeader##classe::GetPoint(CATLONG iNum, double & oX, double & oY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNum,&oX,&oY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPoint(iNum,oX,oY); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNum,&oX,&oY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingLeader##classe::get_HeadTarget(CATBaseDispatch *& oTarget) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oTarget); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HeadTarget(oTarget); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oTarget); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingLeader##classe::put_HeadTarget(CATBaseDispatch * iTarget) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iTarget); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_HeadTarget(iTarget); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iTarget); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingLeader##classe::AddInterruption(double iFirstPointX, double iFirstPointY, double iSecondPointX, double iSecondPointY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iFirstPointX,&iFirstPointY,&iSecondPointX,&iSecondPointY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddInterruption(iFirstPointX,iFirstPointY,iSecondPointX,iSecondPointY); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iFirstPointX,&iFirstPointY,&iSecondPointX,&iSecondPointY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingLeader##classe::RemoveInterruption(CATLONG iNum) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iNum); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveInterruption(iNum); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iNum); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingLeader##classe::get_NbInterruption(CATLONG & oNbInterruption) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oNbInterruption); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NbInterruption(oNbInterruption); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oNbInterruption); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingLeader##classe::GetInterruptions(CATSafeArrayVariant & oInterruptions, CATLONG & oNbInterruptions) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oInterruptions,&oNbInterruptions); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInterruptions(oInterruptions,oNbInterruptions); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oInterruptions,&oNbInterruptions); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingLeader##classe::get_AnchorPoint(CATLONG & oAnchorPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oAnchorPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnchorPoint(oAnchorPoint); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oAnchorPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingLeader##classe::put_AnchorPoint(CATLONG iAnchorPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iAnchorPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AnchorPoint(iAnchorPoint); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iAnchorPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingLeader##classe::get_AnchorSymbol(CATLONG & oAnchorSymbol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oAnchorSymbol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnchorSymbol(oAnchorSymbol); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oAnchorSymbol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingLeader##classe::put_AnchorSymbol(CATLONG iAnchorSymbol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iAnchorSymbol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AnchorSymbol(iAnchorSymbol); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iAnchorSymbol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingLeader##classe::get_Leaders(CATIADrawingLeaders *& oLeaders) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oLeaders); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Leaders(oLeaders); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oLeaders); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingLeader##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingLeader##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingLeader##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingLeader##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingLeader##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADrawingLeader(classe) \
 \
 \
declare_TIE_CATIADrawingLeader(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingLeader##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingLeader,"CATIADrawingLeader",CATIADrawingLeader::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingLeader(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADrawingLeader, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingLeader##classe(classe::MetaObject(),CATIADrawingLeader::MetaObject(),(void *)CreateTIECATIADrawingLeader##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADrawingLeader(classe) \
 \
 \
declare_TIE_CATIADrawingLeader(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingLeader##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingLeader,"CATIADrawingLeader",CATIADrawingLeader::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingLeader(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADrawingLeader, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingLeader##classe(classe::MetaObject(),CATIADrawingLeader::MetaObject(),(void *)CreateTIECATIADrawingLeader##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADrawingLeader(classe) TIE_CATIADrawingLeader(classe)
#else
#define BOA_CATIADrawingLeader(classe) CATImplementBOA(CATIADrawingLeader, classe)
#endif

#endif
