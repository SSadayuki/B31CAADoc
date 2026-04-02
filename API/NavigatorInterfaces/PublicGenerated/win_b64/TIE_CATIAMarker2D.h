#ifndef __TIE_CATIAMarker2D
#define __TIE_CATIAMarker2D

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAMarker2D.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAMarker2D */
#define declare_TIE_CATIAMarker2D(classe) \
 \
 \
class TIECATIAMarker2D##classe : public CATIAMarker2D \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAMarker2D, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Type(CatMarker2DType & oType); \
      virtual HRESULT __stdcall GetPositions(CATSafeArrayVariant & oCoordinates); \
      virtual HRESULT __stdcall SetPositions(const CATSafeArrayVariant & iCoordinates); \
      virtual HRESULT __stdcall get_Fill(CATLONG & oStatus); \
      virtual HRESULT __stdcall put_Fill(CATLONG iStatus); \
      virtual HRESULT __stdcall get_Frame(CATLONG & oStatus); \
      virtual HRESULT __stdcall put_Frame(CATLONG iStatus); \
      virtual HRESULT __stdcall get_Text(CATBSTR & oText); \
      virtual HRESULT __stdcall put_Text(const CATBSTR & iText); \
      virtual HRESULT __stdcall get_TextFont(CATBSTR & oFont); \
      virtual HRESULT __stdcall put_TextFont(const CATBSTR & iFont); \
      virtual HRESULT __stdcall get_TextSize(double & oSize); \
      virtual HRESULT __stdcall put_TextSize(double iSize); \
      virtual HRESULT __stdcall get_TextOrientation(CatMarkerTextOrientation & oOrientation); \
      virtual HRESULT __stdcall put_TextOrientation(CatMarkerTextOrientation iOrientation); \
      virtual HRESULT __stdcall get_Picture(CATBSTR & oPath); \
      virtual HRESULT __stdcall put_Picture(const CATBSTR & iPath); \
      virtual HRESULT __stdcall get_TextAngle(double & oAngle); \
      virtual HRESULT __stdcall put_TextAngle(double iAngle); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAMarker2D(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Type(CatMarker2DType & oType); \
virtual HRESULT __stdcall GetPositions(CATSafeArrayVariant & oCoordinates); \
virtual HRESULT __stdcall SetPositions(const CATSafeArrayVariant & iCoordinates); \
virtual HRESULT __stdcall get_Fill(CATLONG & oStatus); \
virtual HRESULT __stdcall put_Fill(CATLONG iStatus); \
virtual HRESULT __stdcall get_Frame(CATLONG & oStatus); \
virtual HRESULT __stdcall put_Frame(CATLONG iStatus); \
virtual HRESULT __stdcall get_Text(CATBSTR & oText); \
virtual HRESULT __stdcall put_Text(const CATBSTR & iText); \
virtual HRESULT __stdcall get_TextFont(CATBSTR & oFont); \
virtual HRESULT __stdcall put_TextFont(const CATBSTR & iFont); \
virtual HRESULT __stdcall get_TextSize(double & oSize); \
virtual HRESULT __stdcall put_TextSize(double iSize); \
virtual HRESULT __stdcall get_TextOrientation(CatMarkerTextOrientation & oOrientation); \
virtual HRESULT __stdcall put_TextOrientation(CatMarkerTextOrientation iOrientation); \
virtual HRESULT __stdcall get_Picture(CATBSTR & oPath); \
virtual HRESULT __stdcall put_Picture(const CATBSTR & iPath); \
virtual HRESULT __stdcall get_TextAngle(double & oAngle); \
virtual HRESULT __stdcall put_TextAngle(double iAngle); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAMarker2D(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Type(CatMarker2DType & oType) \
{ \
return (ENVTIECALL(CATIAMarker2D,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::GetPositions(CATSafeArrayVariant & oCoordinates) \
{ \
return (ENVTIECALL(CATIAMarker2D,ENVTIETypeLetter,ENVTIELetter)GetPositions(oCoordinates)); \
} \
HRESULT __stdcall  ENVTIEName::SetPositions(const CATSafeArrayVariant & iCoordinates) \
{ \
return (ENVTIECALL(CATIAMarker2D,ENVTIETypeLetter,ENVTIELetter)SetPositions(iCoordinates)); \
} \
HRESULT __stdcall  ENVTIEName::get_Fill(CATLONG & oStatus) \
{ \
return (ENVTIECALL(CATIAMarker2D,ENVTIETypeLetter,ENVTIELetter)get_Fill(oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_Fill(CATLONG iStatus) \
{ \
return (ENVTIECALL(CATIAMarker2D,ENVTIETypeLetter,ENVTIELetter)put_Fill(iStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_Frame(CATLONG & oStatus) \
{ \
return (ENVTIECALL(CATIAMarker2D,ENVTIETypeLetter,ENVTIELetter)get_Frame(oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_Frame(CATLONG iStatus) \
{ \
return (ENVTIECALL(CATIAMarker2D,ENVTIETypeLetter,ENVTIELetter)put_Frame(iStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_Text(CATBSTR & oText) \
{ \
return (ENVTIECALL(CATIAMarker2D,ENVTIETypeLetter,ENVTIELetter)get_Text(oText)); \
} \
HRESULT __stdcall  ENVTIEName::put_Text(const CATBSTR & iText) \
{ \
return (ENVTIECALL(CATIAMarker2D,ENVTIETypeLetter,ENVTIELetter)put_Text(iText)); \
} \
HRESULT __stdcall  ENVTIEName::get_TextFont(CATBSTR & oFont) \
{ \
return (ENVTIECALL(CATIAMarker2D,ENVTIETypeLetter,ENVTIELetter)get_TextFont(oFont)); \
} \
HRESULT __stdcall  ENVTIEName::put_TextFont(const CATBSTR & iFont) \
{ \
return (ENVTIECALL(CATIAMarker2D,ENVTIETypeLetter,ENVTIELetter)put_TextFont(iFont)); \
} \
HRESULT __stdcall  ENVTIEName::get_TextSize(double & oSize) \
{ \
return (ENVTIECALL(CATIAMarker2D,ENVTIETypeLetter,ENVTIELetter)get_TextSize(oSize)); \
} \
HRESULT __stdcall  ENVTIEName::put_TextSize(double iSize) \
{ \
return (ENVTIECALL(CATIAMarker2D,ENVTIETypeLetter,ENVTIELetter)put_TextSize(iSize)); \
} \
HRESULT __stdcall  ENVTIEName::get_TextOrientation(CatMarkerTextOrientation & oOrientation) \
{ \
return (ENVTIECALL(CATIAMarker2D,ENVTIETypeLetter,ENVTIELetter)get_TextOrientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_TextOrientation(CatMarkerTextOrientation iOrientation) \
{ \
return (ENVTIECALL(CATIAMarker2D,ENVTIETypeLetter,ENVTIELetter)put_TextOrientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_Picture(CATBSTR & oPath) \
{ \
return (ENVTIECALL(CATIAMarker2D,ENVTIETypeLetter,ENVTIELetter)get_Picture(oPath)); \
} \
HRESULT __stdcall  ENVTIEName::put_Picture(const CATBSTR & iPath) \
{ \
return (ENVTIECALL(CATIAMarker2D,ENVTIETypeLetter,ENVTIELetter)put_Picture(iPath)); \
} \
HRESULT __stdcall  ENVTIEName::get_TextAngle(double & oAngle) \
{ \
return (ENVTIECALL(CATIAMarker2D,ENVTIETypeLetter,ENVTIELetter)get_TextAngle(oAngle)); \
} \
HRESULT __stdcall  ENVTIEName::put_TextAngle(double iAngle) \
{ \
return (ENVTIECALL(CATIAMarker2D,ENVTIETypeLetter,ENVTIELetter)put_TextAngle(iAngle)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAMarker2D,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAMarker2D,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAMarker2D,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAMarker2D,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAMarker2D,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAMarker2D(classe)    TIECATIAMarker2D##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAMarker2D(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAMarker2D, classe) \
 \
 \
CATImplementTIEMethods(CATIAMarker2D, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAMarker2D, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAMarker2D, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAMarker2D, classe) \
 \
HRESULT __stdcall  TIECATIAMarker2D##classe::get_Type(CatMarker2DType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker2D##classe::GetPositions(CATSafeArrayVariant & oCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPositions(oCoordinates); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oCoordinates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker2D##classe::SetPositions(const CATSafeArrayVariant & iCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPositions(iCoordinates); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iCoordinates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker2D##classe::get_Fill(CATLONG & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Fill(oStatus); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker2D##classe::put_Fill(CATLONG iStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Fill(iStatus); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker2D##classe::get_Frame(CATLONG & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Frame(oStatus); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker2D##classe::put_Frame(CATLONG iStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Frame(iStatus); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker2D##classe::get_Text(CATBSTR & oText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Text(oText); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oText); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker2D##classe::put_Text(const CATBSTR & iText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Text(iText); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iText); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker2D##classe::get_TextFont(CATBSTR & oFont) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oFont); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TextFont(oFont); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oFont); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker2D##classe::put_TextFont(const CATBSTR & iFont) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iFont); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TextFont(iFont); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iFont); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker2D##classe::get_TextSize(double & oSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TextSize(oSize); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker2D##classe::put_TextSize(double iSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TextSize(iSize); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker2D##classe::get_TextOrientation(CatMarkerTextOrientation & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TextOrientation(oOrientation); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker2D##classe::put_TextOrientation(CatMarkerTextOrientation iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TextOrientation(iOrientation); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker2D##classe::get_Picture(CATBSTR & oPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Picture(oPath); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker2D##classe::put_Picture(const CATBSTR & iPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Picture(iPath); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker2D##classe::get_TextAngle(double & oAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TextAngle(oAngle); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker2D##classe::put_TextAngle(double iAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TextAngle(iAngle); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iAngle); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMarker2D##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMarker2D##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMarker2D##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMarker2D##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMarker2D##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAMarker2D(classe) \
 \
 \
declare_TIE_CATIAMarker2D(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMarker2D##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMarker2D,"CATIAMarker2D",CATIAMarker2D::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMarker2D(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAMarker2D, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMarker2D##classe(classe::MetaObject(),CATIAMarker2D::MetaObject(),(void *)CreateTIECATIAMarker2D##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAMarker2D(classe) \
 \
 \
declare_TIE_CATIAMarker2D(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMarker2D##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMarker2D,"CATIAMarker2D",CATIAMarker2D::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMarker2D(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAMarker2D, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMarker2D##classe(classe::MetaObject(),CATIAMarker2D::MetaObject(),(void *)CreateTIECATIAMarker2D##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAMarker2D(classe) TIE_CATIAMarker2D(classe)
#else
#define BOA_CATIAMarker2D(classe) CATImplementBOA(CATIAMarker2D, classe)
#endif

#endif
