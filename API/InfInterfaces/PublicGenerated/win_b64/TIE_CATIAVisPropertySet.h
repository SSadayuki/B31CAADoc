#ifndef __TIE_CATIAVisPropertySet
#define __TIE_CATIAVisPropertySet

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAVisPropertySet.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAVisPropertySet */
#define declare_TIE_CATIAVisPropertySet(classe) \
 \
 \
class TIECATIAVisPropertySet##classe : public CATIAVisPropertySet \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAVisPropertySet, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall SetRealColor(CATLONG iRed, CATLONG iGreen, CATLONG iBlue, CATLONG iInheritance); \
      virtual HRESULT __stdcall SetRealOpacity(CATLONG iOpacity, CATLONG iInheritance); \
      virtual HRESULT __stdcall SetRealWidth(CATLONG iLineWidth, CATLONG iInheritance); \
      virtual HRESULT __stdcall SetRealLineType(CATLONG iLineType, CATLONG iInheritance); \
      virtual HRESULT __stdcall SetSymbolType(CATLONG iSymbolType); \
      virtual HRESULT __stdcall GetRealColor(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue, CatVisPropertyStatus & oStatus); \
      virtual HRESULT __stdcall GetRealOpacity(CATLONG & oOpacity, CatVisPropertyStatus & oStatus); \
      virtual HRESULT __stdcall GetRealWidth(CATLONG & oLineWidth, CatVisPropertyStatus & oStatus); \
      virtual HRESULT __stdcall GetRealLineType(CATLONG & oLineType, CatVisPropertyStatus & oStatus); \
      virtual HRESULT __stdcall GetSymbolType(CATLONG & oSymbolType, CatVisPropertyStatus & oStatus); \
      virtual HRESULT __stdcall GetRealInheritance(CatVisPropertyType iPropertyType, CATLONG & oInheritance, CatVisPropertyStatus & oStatus); \
      virtual HRESULT __stdcall SetVisibleColor(CATLONG iRed, CATLONG iGreen, CATLONG iBlue, CATLONG iInheritance); \
      virtual HRESULT __stdcall SetVisibleOpacity(CATLONG iOpacity, CATLONG iInheritance); \
      virtual HRESULT __stdcall SetVisibleWidth(CATLONG iWidth, CATLONG iInheritance); \
      virtual HRESULT __stdcall SetVisibleLineType(CATLONG iLineType, CATLONG iInheritance); \
      virtual HRESULT __stdcall GetVisibleColor(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue, CatVisPropertyStatus & oStatus); \
      virtual HRESULT __stdcall GetVisibleOpacity(CATLONG & oOpacity, CatVisPropertyStatus & oStatus); \
      virtual HRESULT __stdcall GetVisibleWidth(CATLONG & oLineWidth, CatVisPropertyStatus & oStatus); \
      virtual HRESULT __stdcall GetVisibleLineType(CATLONG & oLineType, CatVisPropertyStatus & oStatus); \
      virtual HRESULT __stdcall GetVisibleInheritance(CatVisPropertyType iPropertyType, CATLONG & oInheritance, CatVisPropertyStatus & oStatus); \
      virtual HRESULT __stdcall SetShow(CatVisPropertyShow iShow); \
      virtual HRESULT __stdcall GetShow(CatVisPropertyShow & oShow, CatVisPropertyStatus & oStatus); \
      virtual HRESULT __stdcall SetPick(CatVisPropertyPick iPick); \
      virtual HRESULT __stdcall GetPick(CatVisPropertyPick & oPick, CatVisPropertyStatus & oStatus); \
      virtual HRESULT __stdcall SetLayer(CatVisLayerType iLayerType, CATLONG iLayerValue); \
      virtual HRESULT __stdcall GetLayer(CatVisLayerType & oLayerType, CATLONG & oLayerValue, CatVisPropertyStatus & oStatus); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAVisPropertySet(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall SetRealColor(CATLONG iRed, CATLONG iGreen, CATLONG iBlue, CATLONG iInheritance); \
virtual HRESULT __stdcall SetRealOpacity(CATLONG iOpacity, CATLONG iInheritance); \
virtual HRESULT __stdcall SetRealWidth(CATLONG iLineWidth, CATLONG iInheritance); \
virtual HRESULT __stdcall SetRealLineType(CATLONG iLineType, CATLONG iInheritance); \
virtual HRESULT __stdcall SetSymbolType(CATLONG iSymbolType); \
virtual HRESULT __stdcall GetRealColor(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue, CatVisPropertyStatus & oStatus); \
virtual HRESULT __stdcall GetRealOpacity(CATLONG & oOpacity, CatVisPropertyStatus & oStatus); \
virtual HRESULT __stdcall GetRealWidth(CATLONG & oLineWidth, CatVisPropertyStatus & oStatus); \
virtual HRESULT __stdcall GetRealLineType(CATLONG & oLineType, CatVisPropertyStatus & oStatus); \
virtual HRESULT __stdcall GetSymbolType(CATLONG & oSymbolType, CatVisPropertyStatus & oStatus); \
virtual HRESULT __stdcall GetRealInheritance(CatVisPropertyType iPropertyType, CATLONG & oInheritance, CatVisPropertyStatus & oStatus); \
virtual HRESULT __stdcall SetVisibleColor(CATLONG iRed, CATLONG iGreen, CATLONG iBlue, CATLONG iInheritance); \
virtual HRESULT __stdcall SetVisibleOpacity(CATLONG iOpacity, CATLONG iInheritance); \
virtual HRESULT __stdcall SetVisibleWidth(CATLONG iWidth, CATLONG iInheritance); \
virtual HRESULT __stdcall SetVisibleLineType(CATLONG iLineType, CATLONG iInheritance); \
virtual HRESULT __stdcall GetVisibleColor(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue, CatVisPropertyStatus & oStatus); \
virtual HRESULT __stdcall GetVisibleOpacity(CATLONG & oOpacity, CatVisPropertyStatus & oStatus); \
virtual HRESULT __stdcall GetVisibleWidth(CATLONG & oLineWidth, CatVisPropertyStatus & oStatus); \
virtual HRESULT __stdcall GetVisibleLineType(CATLONG & oLineType, CatVisPropertyStatus & oStatus); \
virtual HRESULT __stdcall GetVisibleInheritance(CatVisPropertyType iPropertyType, CATLONG & oInheritance, CatVisPropertyStatus & oStatus); \
virtual HRESULT __stdcall SetShow(CatVisPropertyShow iShow); \
virtual HRESULT __stdcall GetShow(CatVisPropertyShow & oShow, CatVisPropertyStatus & oStatus); \
virtual HRESULT __stdcall SetPick(CatVisPropertyPick iPick); \
virtual HRESULT __stdcall GetPick(CatVisPropertyPick & oPick, CatVisPropertyStatus & oStatus); \
virtual HRESULT __stdcall SetLayer(CatVisLayerType iLayerType, CATLONG iLayerValue); \
virtual HRESULT __stdcall GetLayer(CatVisLayerType & oLayerType, CATLONG & oLayerValue, CatVisPropertyStatus & oStatus); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAVisPropertySet(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::SetRealColor(CATLONG iRed, CATLONG iGreen, CATLONG iBlue, CATLONG iInheritance) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)SetRealColor(iRed,iGreen,iBlue,iInheritance)); \
} \
HRESULT __stdcall  ENVTIEName::SetRealOpacity(CATLONG iOpacity, CATLONG iInheritance) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)SetRealOpacity(iOpacity,iInheritance)); \
} \
HRESULT __stdcall  ENVTIEName::SetRealWidth(CATLONG iLineWidth, CATLONG iInheritance) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)SetRealWidth(iLineWidth,iInheritance)); \
} \
HRESULT __stdcall  ENVTIEName::SetRealLineType(CATLONG iLineType, CATLONG iInheritance) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)SetRealLineType(iLineType,iInheritance)); \
} \
HRESULT __stdcall  ENVTIEName::SetSymbolType(CATLONG iSymbolType) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)SetSymbolType(iSymbolType)); \
} \
HRESULT __stdcall  ENVTIEName::GetRealColor(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue, CatVisPropertyStatus & oStatus) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)GetRealColor(oRed,oGreen,oBlue,oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::GetRealOpacity(CATLONG & oOpacity, CatVisPropertyStatus & oStatus) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)GetRealOpacity(oOpacity,oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::GetRealWidth(CATLONG & oLineWidth, CatVisPropertyStatus & oStatus) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)GetRealWidth(oLineWidth,oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::GetRealLineType(CATLONG & oLineType, CatVisPropertyStatus & oStatus) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)GetRealLineType(oLineType,oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::GetSymbolType(CATLONG & oSymbolType, CatVisPropertyStatus & oStatus) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)GetSymbolType(oSymbolType,oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::GetRealInheritance(CatVisPropertyType iPropertyType, CATLONG & oInheritance, CatVisPropertyStatus & oStatus) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)GetRealInheritance(iPropertyType,oInheritance,oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::SetVisibleColor(CATLONG iRed, CATLONG iGreen, CATLONG iBlue, CATLONG iInheritance) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)SetVisibleColor(iRed,iGreen,iBlue,iInheritance)); \
} \
HRESULT __stdcall  ENVTIEName::SetVisibleOpacity(CATLONG iOpacity, CATLONG iInheritance) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)SetVisibleOpacity(iOpacity,iInheritance)); \
} \
HRESULT __stdcall  ENVTIEName::SetVisibleWidth(CATLONG iWidth, CATLONG iInheritance) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)SetVisibleWidth(iWidth,iInheritance)); \
} \
HRESULT __stdcall  ENVTIEName::SetVisibleLineType(CATLONG iLineType, CATLONG iInheritance) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)SetVisibleLineType(iLineType,iInheritance)); \
} \
HRESULT __stdcall  ENVTIEName::GetVisibleColor(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue, CatVisPropertyStatus & oStatus) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)GetVisibleColor(oRed,oGreen,oBlue,oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::GetVisibleOpacity(CATLONG & oOpacity, CatVisPropertyStatus & oStatus) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)GetVisibleOpacity(oOpacity,oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::GetVisibleWidth(CATLONG & oLineWidth, CatVisPropertyStatus & oStatus) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)GetVisibleWidth(oLineWidth,oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::GetVisibleLineType(CATLONG & oLineType, CatVisPropertyStatus & oStatus) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)GetVisibleLineType(oLineType,oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::GetVisibleInheritance(CatVisPropertyType iPropertyType, CATLONG & oInheritance, CatVisPropertyStatus & oStatus) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)GetVisibleInheritance(iPropertyType,oInheritance,oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::SetShow(CatVisPropertyShow iShow) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)SetShow(iShow)); \
} \
HRESULT __stdcall  ENVTIEName::GetShow(CatVisPropertyShow & oShow, CatVisPropertyStatus & oStatus) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)GetShow(oShow,oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::SetPick(CatVisPropertyPick iPick) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)SetPick(iPick)); \
} \
HRESULT __stdcall  ENVTIEName::GetPick(CatVisPropertyPick & oPick, CatVisPropertyStatus & oStatus) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)GetPick(oPick,oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::SetLayer(CatVisLayerType iLayerType, CATLONG iLayerValue) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)SetLayer(iLayerType,iLayerValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetLayer(CatVisLayerType & oLayerType, CATLONG & oLayerValue, CatVisPropertyStatus & oStatus) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)GetLayer(oLayerType,oLayerValue,oStatus)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAVisPropertySet,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAVisPropertySet(classe)    TIECATIAVisPropertySet##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAVisPropertySet(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAVisPropertySet, classe) \
 \
 \
CATImplementTIEMethods(CATIAVisPropertySet, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAVisPropertySet, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAVisPropertySet, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAVisPropertySet, classe) \
 \
HRESULT __stdcall  TIECATIAVisPropertySet##classe::SetRealColor(CATLONG iRed, CATLONG iGreen, CATLONG iBlue, CATLONG iInheritance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iRed,&iGreen,&iBlue,&iInheritance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRealColor(iRed,iGreen,iBlue,iInheritance); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iRed,&iGreen,&iBlue,&iInheritance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisPropertySet##classe::SetRealOpacity(CATLONG iOpacity, CATLONG iInheritance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iOpacity,&iInheritance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRealOpacity(iOpacity,iInheritance); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iOpacity,&iInheritance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisPropertySet##classe::SetRealWidth(CATLONG iLineWidth, CATLONG iInheritance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iLineWidth,&iInheritance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRealWidth(iLineWidth,iInheritance); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iLineWidth,&iInheritance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisPropertySet##classe::SetRealLineType(CATLONG iLineType, CATLONG iInheritance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLineType,&iInheritance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRealLineType(iLineType,iInheritance); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLineType,&iInheritance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisPropertySet##classe::SetSymbolType(CATLONG iSymbolType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iSymbolType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSymbolType(iSymbolType); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iSymbolType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisPropertySet##classe::GetRealColor(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue, CatVisPropertyStatus & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oRed,&oGreen,&oBlue,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRealColor(oRed,oGreen,oBlue,oStatus); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oRed,&oGreen,&oBlue,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisPropertySet##classe::GetRealOpacity(CATLONG & oOpacity, CatVisPropertyStatus & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oOpacity,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRealOpacity(oOpacity,oStatus); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oOpacity,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisPropertySet##classe::GetRealWidth(CATLONG & oLineWidth, CatVisPropertyStatus & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oLineWidth,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRealWidth(oLineWidth,oStatus); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oLineWidth,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisPropertySet##classe::GetRealLineType(CATLONG & oLineType, CatVisPropertyStatus & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oLineType,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRealLineType(oLineType,oStatus); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oLineType,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisPropertySet##classe::GetSymbolType(CATLONG & oSymbolType, CatVisPropertyStatus & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oSymbolType,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSymbolType(oSymbolType,oStatus); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oSymbolType,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisPropertySet##classe::GetRealInheritance(CatVisPropertyType iPropertyType, CATLONG & oInheritance, CatVisPropertyStatus & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iPropertyType,&oInheritance,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRealInheritance(iPropertyType,oInheritance,oStatus); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iPropertyType,&oInheritance,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisPropertySet##classe::SetVisibleColor(CATLONG iRed, CATLONG iGreen, CATLONG iBlue, CATLONG iInheritance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iRed,&iGreen,&iBlue,&iInheritance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetVisibleColor(iRed,iGreen,iBlue,iInheritance); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iRed,&iGreen,&iBlue,&iInheritance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisPropertySet##classe::SetVisibleOpacity(CATLONG iOpacity, CATLONG iInheritance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iOpacity,&iInheritance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetVisibleOpacity(iOpacity,iInheritance); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iOpacity,&iInheritance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisPropertySet##classe::SetVisibleWidth(CATLONG iWidth, CATLONG iInheritance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iWidth,&iInheritance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetVisibleWidth(iWidth,iInheritance); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iWidth,&iInheritance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisPropertySet##classe::SetVisibleLineType(CATLONG iLineType, CATLONG iInheritance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iLineType,&iInheritance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetVisibleLineType(iLineType,iInheritance); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iLineType,&iInheritance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisPropertySet##classe::GetVisibleColor(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue, CatVisPropertyStatus & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oRed,&oGreen,&oBlue,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetVisibleColor(oRed,oGreen,oBlue,oStatus); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oRed,&oGreen,&oBlue,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisPropertySet##classe::GetVisibleOpacity(CATLONG & oOpacity, CatVisPropertyStatus & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oOpacity,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetVisibleOpacity(oOpacity,oStatus); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oOpacity,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisPropertySet##classe::GetVisibleWidth(CATLONG & oLineWidth, CatVisPropertyStatus & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oLineWidth,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetVisibleWidth(oLineWidth,oStatus); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oLineWidth,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisPropertySet##classe::GetVisibleLineType(CATLONG & oLineType, CatVisPropertyStatus & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oLineType,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetVisibleLineType(oLineType,oStatus); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oLineType,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisPropertySet##classe::GetVisibleInheritance(CatVisPropertyType iPropertyType, CATLONG & oInheritance, CatVisPropertyStatus & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iPropertyType,&oInheritance,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetVisibleInheritance(iPropertyType,oInheritance,oStatus); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iPropertyType,&oInheritance,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisPropertySet##classe::SetShow(CatVisPropertyShow iShow) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iShow); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetShow(iShow); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iShow); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisPropertySet##classe::GetShow(CatVisPropertyShow & oShow, CatVisPropertyStatus & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oShow,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetShow(oShow,oStatus); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oShow,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisPropertySet##classe::SetPick(CatVisPropertyPick iPick) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iPick); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPick(iPick); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iPick); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisPropertySet##classe::GetPick(CatVisPropertyPick & oPick, CatVisPropertyStatus & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oPick,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPick(oPick,oStatus); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oPick,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisPropertySet##classe::SetLayer(CatVisLayerType iLayerType, CATLONG iLayerValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iLayerType,&iLayerValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLayer(iLayerType,iLayerValue); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iLayerType,&iLayerValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVisPropertySet##classe::GetLayer(CatVisLayerType & oLayerType, CATLONG & oLayerValue, CatVisPropertyStatus & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oLayerType,&oLayerValue,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLayer(oLayerType,oLayerValue,oStatus); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oLayerType,&oLayerValue,&oStatus); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVisPropertySet##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVisPropertySet##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVisPropertySet##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVisPropertySet##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVisPropertySet##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAVisPropertySet(classe) \
 \
 \
declare_TIE_CATIAVisPropertySet(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAVisPropertySet##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAVisPropertySet,"CATIAVisPropertySet",CATIAVisPropertySet::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAVisPropertySet(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAVisPropertySet, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAVisPropertySet##classe(classe::MetaObject(),CATIAVisPropertySet::MetaObject(),(void *)CreateTIECATIAVisPropertySet##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAVisPropertySet(classe) \
 \
 \
declare_TIE_CATIAVisPropertySet(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAVisPropertySet##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAVisPropertySet,"CATIAVisPropertySet",CATIAVisPropertySet::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAVisPropertySet(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAVisPropertySet, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAVisPropertySet##classe(classe::MetaObject(),CATIAVisPropertySet::MetaObject(),(void *)CreateTIECATIAVisPropertySet##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAVisPropertySet(classe) TIE_CATIAVisPropertySet(classe)
#else
#define BOA_CATIAVisPropertySet(classe) CATImplementBOA(CATIAVisPropertySet, classe)
#endif

#endif
