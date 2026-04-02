#ifndef __TIE_CATIAMarker3D
#define __TIE_CATIAMarker3D

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAMarker3D.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAMarker3D */
#define declare_TIE_CATIAMarker3D(classe) \
 \
 \
class TIECATIAMarker3D##classe : public CATIAMarker3D \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAMarker3D, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Type(CatMarker3DType & oType); \
      virtual HRESULT __stdcall GetTextPositions(CATSafeArrayVariant & oCoordinates); \
      virtual HRESULT __stdcall SetTextPositions(const CATSafeArrayVariant & iCoordinates); \
      virtual HRESULT __stdcall get_Text(CATBSTR & oText); \
      virtual HRESULT __stdcall put_Text(const CATBSTR & iText); \
      virtual HRESULT __stdcall CountObject(CATLONG & oNbItems); \
      virtual HRESULT __stdcall ItemObject(const CATVariant & iIndex, CATBaseDispatch *& oObject); \
      virtual HRESULT __stdcall AddObject(CATIABase * iObject); \
      virtual HRESULT __stdcall RemoveObject(const CATVariant & iIndex); \
      virtual HRESULT __stdcall GetObjectPositions(const CATVariant & iIndex, CATSafeArrayVariant & oCoordinates); \
      virtual HRESULT __stdcall SetObjectPositions(const CATVariant & iIndex, const CATSafeArrayVariant & iCoordinates); \
      virtual HRESULT __stdcall get_Fill(CATLONG & oStatus); \
      virtual HRESULT __stdcall put_Fill(CATLONG iStatus); \
      virtual HRESULT __stdcall get_Frame(CATLONG & oStatus); \
      virtual HRESULT __stdcall put_Frame(CATLONG iStatus); \
      virtual HRESULT __stdcall get_TextFont(CATBSTR & oFont); \
      virtual HRESULT __stdcall put_TextFont(const CATBSTR & iFont); \
      virtual HRESULT __stdcall get_TextSize(double & oSize); \
      virtual HRESULT __stdcall put_TextSize(double iSize); \
      virtual HRESULT __stdcall get_TextOrientation(CatMarkerTextOrientation & oOrientation); \
      virtual HRESULT __stdcall put_TextOrientation(CatMarkerTextOrientation iOrientation); \
      virtual HRESULT __stdcall Update(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAMarker3D(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Type(CatMarker3DType & oType); \
virtual HRESULT __stdcall GetTextPositions(CATSafeArrayVariant & oCoordinates); \
virtual HRESULT __stdcall SetTextPositions(const CATSafeArrayVariant & iCoordinates); \
virtual HRESULT __stdcall get_Text(CATBSTR & oText); \
virtual HRESULT __stdcall put_Text(const CATBSTR & iText); \
virtual HRESULT __stdcall CountObject(CATLONG & oNbItems); \
virtual HRESULT __stdcall ItemObject(const CATVariant & iIndex, CATBaseDispatch *& oObject); \
virtual HRESULT __stdcall AddObject(CATIABase * iObject); \
virtual HRESULT __stdcall RemoveObject(const CATVariant & iIndex); \
virtual HRESULT __stdcall GetObjectPositions(const CATVariant & iIndex, CATSafeArrayVariant & oCoordinates); \
virtual HRESULT __stdcall SetObjectPositions(const CATVariant & iIndex, const CATSafeArrayVariant & iCoordinates); \
virtual HRESULT __stdcall get_Fill(CATLONG & oStatus); \
virtual HRESULT __stdcall put_Fill(CATLONG iStatus); \
virtual HRESULT __stdcall get_Frame(CATLONG & oStatus); \
virtual HRESULT __stdcall put_Frame(CATLONG iStatus); \
virtual HRESULT __stdcall get_TextFont(CATBSTR & oFont); \
virtual HRESULT __stdcall put_TextFont(const CATBSTR & iFont); \
virtual HRESULT __stdcall get_TextSize(double & oSize); \
virtual HRESULT __stdcall put_TextSize(double iSize); \
virtual HRESULT __stdcall get_TextOrientation(CatMarkerTextOrientation & oOrientation); \
virtual HRESULT __stdcall put_TextOrientation(CatMarkerTextOrientation iOrientation); \
virtual HRESULT __stdcall Update(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAMarker3D(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Type(CatMarker3DType & oType) \
{ \
return (ENVTIECALL(CATIAMarker3D,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::GetTextPositions(CATSafeArrayVariant & oCoordinates) \
{ \
return (ENVTIECALL(CATIAMarker3D,ENVTIETypeLetter,ENVTIELetter)GetTextPositions(oCoordinates)); \
} \
HRESULT __stdcall  ENVTIEName::SetTextPositions(const CATSafeArrayVariant & iCoordinates) \
{ \
return (ENVTIECALL(CATIAMarker3D,ENVTIETypeLetter,ENVTIELetter)SetTextPositions(iCoordinates)); \
} \
HRESULT __stdcall  ENVTIEName::get_Text(CATBSTR & oText) \
{ \
return (ENVTIECALL(CATIAMarker3D,ENVTIETypeLetter,ENVTIELetter)get_Text(oText)); \
} \
HRESULT __stdcall  ENVTIEName::put_Text(const CATBSTR & iText) \
{ \
return (ENVTIECALL(CATIAMarker3D,ENVTIETypeLetter,ENVTIELetter)put_Text(iText)); \
} \
HRESULT __stdcall  ENVTIEName::CountObject(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAMarker3D,ENVTIETypeLetter,ENVTIELetter)CountObject(oNbItems)); \
} \
HRESULT __stdcall  ENVTIEName::ItemObject(const CATVariant & iIndex, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAMarker3D,ENVTIETypeLetter,ENVTIELetter)ItemObject(iIndex,oObject)); \
} \
HRESULT __stdcall  ENVTIEName::AddObject(CATIABase * iObject) \
{ \
return (ENVTIECALL(CATIAMarker3D,ENVTIETypeLetter,ENVTIELetter)AddObject(iObject)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveObject(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAMarker3D,ENVTIETypeLetter,ENVTIELetter)RemoveObject(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::GetObjectPositions(const CATVariant & iIndex, CATSafeArrayVariant & oCoordinates) \
{ \
return (ENVTIECALL(CATIAMarker3D,ENVTIETypeLetter,ENVTIELetter)GetObjectPositions(iIndex,oCoordinates)); \
} \
HRESULT __stdcall  ENVTIEName::SetObjectPositions(const CATVariant & iIndex, const CATSafeArrayVariant & iCoordinates) \
{ \
return (ENVTIECALL(CATIAMarker3D,ENVTIETypeLetter,ENVTIELetter)SetObjectPositions(iIndex,iCoordinates)); \
} \
HRESULT __stdcall  ENVTIEName::get_Fill(CATLONG & oStatus) \
{ \
return (ENVTIECALL(CATIAMarker3D,ENVTIETypeLetter,ENVTIELetter)get_Fill(oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_Fill(CATLONG iStatus) \
{ \
return (ENVTIECALL(CATIAMarker3D,ENVTIETypeLetter,ENVTIELetter)put_Fill(iStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_Frame(CATLONG & oStatus) \
{ \
return (ENVTIECALL(CATIAMarker3D,ENVTIETypeLetter,ENVTIELetter)get_Frame(oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_Frame(CATLONG iStatus) \
{ \
return (ENVTIECALL(CATIAMarker3D,ENVTIETypeLetter,ENVTIELetter)put_Frame(iStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_TextFont(CATBSTR & oFont) \
{ \
return (ENVTIECALL(CATIAMarker3D,ENVTIETypeLetter,ENVTIELetter)get_TextFont(oFont)); \
} \
HRESULT __stdcall  ENVTIEName::put_TextFont(const CATBSTR & iFont) \
{ \
return (ENVTIECALL(CATIAMarker3D,ENVTIETypeLetter,ENVTIELetter)put_TextFont(iFont)); \
} \
HRESULT __stdcall  ENVTIEName::get_TextSize(double & oSize) \
{ \
return (ENVTIECALL(CATIAMarker3D,ENVTIETypeLetter,ENVTIELetter)get_TextSize(oSize)); \
} \
HRESULT __stdcall  ENVTIEName::put_TextSize(double iSize) \
{ \
return (ENVTIECALL(CATIAMarker3D,ENVTIETypeLetter,ENVTIELetter)put_TextSize(iSize)); \
} \
HRESULT __stdcall  ENVTIEName::get_TextOrientation(CatMarkerTextOrientation & oOrientation) \
{ \
return (ENVTIECALL(CATIAMarker3D,ENVTIETypeLetter,ENVTIELetter)get_TextOrientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_TextOrientation(CatMarkerTextOrientation iOrientation) \
{ \
return (ENVTIECALL(CATIAMarker3D,ENVTIETypeLetter,ENVTIELetter)put_TextOrientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::Update() \
{ \
return (ENVTIECALL(CATIAMarker3D,ENVTIETypeLetter,ENVTIELetter)Update()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAMarker3D,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAMarker3D,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAMarker3D,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAMarker3D,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAMarker3D,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAMarker3D(classe)    TIECATIAMarker3D##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAMarker3D(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAMarker3D, classe) \
 \
 \
CATImplementTIEMethods(CATIAMarker3D, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAMarker3D, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAMarker3D, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAMarker3D, classe) \
 \
HRESULT __stdcall  TIECATIAMarker3D##classe::get_Type(CatMarker3DType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker3D##classe::GetTextPositions(CATSafeArrayVariant & oCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTextPositions(oCoordinates); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oCoordinates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker3D##classe::SetTextPositions(const CATSafeArrayVariant & iCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTextPositions(iCoordinates); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iCoordinates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker3D##classe::get_Text(CATBSTR & oText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Text(oText); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oText); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker3D##classe::put_Text(const CATBSTR & iText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Text(iText); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iText); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker3D##classe::CountObject(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNbItems); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CountObject(oNbItems); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker3D##classe::ItemObject(const CATVariant & iIndex, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iIndex,&oObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ItemObject(iIndex,oObject); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iIndex,&oObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker3D##classe::AddObject(CATIABase * iObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddObject(iObject); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker3D##classe::RemoveObject(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveObject(iIndex); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker3D##classe::GetObjectPositions(const CATVariant & iIndex, CATSafeArrayVariant & oCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iIndex,&oCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetObjectPositions(iIndex,oCoordinates); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iIndex,&oCoordinates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker3D##classe::SetObjectPositions(const CATVariant & iIndex, const CATSafeArrayVariant & iCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iIndex,&iCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetObjectPositions(iIndex,iCoordinates); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iIndex,&iCoordinates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker3D##classe::get_Fill(CATLONG & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Fill(oStatus); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker3D##classe::put_Fill(CATLONG iStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Fill(iStatus); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker3D##classe::get_Frame(CATLONG & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Frame(oStatus); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker3D##classe::put_Frame(CATLONG iStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Frame(iStatus); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker3D##classe::get_TextFont(CATBSTR & oFont) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oFont); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TextFont(oFont); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oFont); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker3D##classe::put_TextFont(const CATBSTR & iFont) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iFont); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TextFont(iFont); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iFont); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker3D##classe::get_TextSize(double & oSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TextSize(oSize); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker3D##classe::put_TextSize(double iSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TextSize(iSize); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker3D##classe::get_TextOrientation(CatMarkerTextOrientation & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TextOrientation(oOrientation); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker3D##classe::put_TextOrientation(CatMarkerTextOrientation iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TextOrientation(iOrientation); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker3D##classe::Update() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Update(); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMarker3D##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMarker3D##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMarker3D##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMarker3D##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMarker3D##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAMarker3D(classe) \
 \
 \
declare_TIE_CATIAMarker3D(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMarker3D##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMarker3D,"CATIAMarker3D",CATIAMarker3D::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMarker3D(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAMarker3D, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMarker3D##classe(classe::MetaObject(),CATIAMarker3D::MetaObject(),(void *)CreateTIECATIAMarker3D##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAMarker3D(classe) \
 \
 \
declare_TIE_CATIAMarker3D(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMarker3D##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMarker3D,"CATIAMarker3D",CATIAMarker3D::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMarker3D(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAMarker3D, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMarker3D##classe(classe::MetaObject(),CATIAMarker3D::MetaObject(),(void *)CreateTIECATIAMarker3D##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAMarker3D(classe) TIE_CATIAMarker3D(classe)
#else
#define BOA_CATIAMarker3D(classe) CATImplementBOA(CATIAMarker3D, classe)
#endif

#endif
