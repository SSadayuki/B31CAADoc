#ifndef __TIE_CATIADrawingPicture
#define __TIE_CATIADrawingPicture

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADrawingPicture.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADrawingPicture */
#define declare_TIE_CATIADrawingPicture(classe) \
 \
 \
class TIECATIADrawingPicture##classe : public CATIADrawingPicture \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADrawingPicture, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_x(double & oXPosition); \
      virtual HRESULT __stdcall put_x(double iXPosition); \
      virtual HRESULT __stdcall get_y(double & oYPosition); \
      virtual HRESULT __stdcall put_y(double iYPosition); \
      virtual HRESULT __stdcall get_height(double & oHeight); \
      virtual HRESULT __stdcall put_height(double iHeight); \
      virtual HRESULT __stdcall get_width(double & oWidth); \
      virtual HRESULT __stdcall put_width(double iWidth); \
      virtual HRESULT __stdcall get_cropTop(double & oCropTop); \
      virtual HRESULT __stdcall put_cropTop(double iCropTop); \
      virtual HRESULT __stdcall get_cropBottom(double & oCropBottom); \
      virtual HRESULT __stdcall put_cropBottom(double iCropBottom); \
      virtual HRESULT __stdcall get_cropLeft(double & oCropLeft); \
      virtual HRESULT __stdcall put_cropLeft(double iCropLeft); \
      virtual HRESULT __stdcall get_cropRight(double & oCropRight); \
      virtual HRESULT __stdcall put_cropRight(double iCropRight); \
      virtual HRESULT __stdcall get_ratioLock(CAT_VARIANT_BOOL & oRatioLock); \
      virtual HRESULT __stdcall put_ratioLock(CAT_VARIANT_BOOL iRatioLock); \
      virtual HRESULT __stdcall GetOriginalHeight(double & oHeight); \
      virtual HRESULT __stdcall GetOriginalWidth(double & oWidth); \
      virtual HRESULT __stdcall get_format(CatPictureFormat & oPictureFormat); \
      virtual HRESULT __stdcall put_format(CatPictureFormat iPictureFormat); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADrawingPicture(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_x(double & oXPosition); \
virtual HRESULT __stdcall put_x(double iXPosition); \
virtual HRESULT __stdcall get_y(double & oYPosition); \
virtual HRESULT __stdcall put_y(double iYPosition); \
virtual HRESULT __stdcall get_height(double & oHeight); \
virtual HRESULT __stdcall put_height(double iHeight); \
virtual HRESULT __stdcall get_width(double & oWidth); \
virtual HRESULT __stdcall put_width(double iWidth); \
virtual HRESULT __stdcall get_cropTop(double & oCropTop); \
virtual HRESULT __stdcall put_cropTop(double iCropTop); \
virtual HRESULT __stdcall get_cropBottom(double & oCropBottom); \
virtual HRESULT __stdcall put_cropBottom(double iCropBottom); \
virtual HRESULT __stdcall get_cropLeft(double & oCropLeft); \
virtual HRESULT __stdcall put_cropLeft(double iCropLeft); \
virtual HRESULT __stdcall get_cropRight(double & oCropRight); \
virtual HRESULT __stdcall put_cropRight(double iCropRight); \
virtual HRESULT __stdcall get_ratioLock(CAT_VARIANT_BOOL & oRatioLock); \
virtual HRESULT __stdcall put_ratioLock(CAT_VARIANT_BOOL iRatioLock); \
virtual HRESULT __stdcall GetOriginalHeight(double & oHeight); \
virtual HRESULT __stdcall GetOriginalWidth(double & oWidth); \
virtual HRESULT __stdcall get_format(CatPictureFormat & oPictureFormat); \
virtual HRESULT __stdcall put_format(CatPictureFormat iPictureFormat); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADrawingPicture(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_x(double & oXPosition) \
{ \
return (ENVTIECALL(CATIADrawingPicture,ENVTIETypeLetter,ENVTIELetter)get_x(oXPosition)); \
} \
HRESULT __stdcall  ENVTIEName::put_x(double iXPosition) \
{ \
return (ENVTIECALL(CATIADrawingPicture,ENVTIETypeLetter,ENVTIELetter)put_x(iXPosition)); \
} \
HRESULT __stdcall  ENVTIEName::get_y(double & oYPosition) \
{ \
return (ENVTIECALL(CATIADrawingPicture,ENVTIETypeLetter,ENVTIELetter)get_y(oYPosition)); \
} \
HRESULT __stdcall  ENVTIEName::put_y(double iYPosition) \
{ \
return (ENVTIECALL(CATIADrawingPicture,ENVTIETypeLetter,ENVTIELetter)put_y(iYPosition)); \
} \
HRESULT __stdcall  ENVTIEName::get_height(double & oHeight) \
{ \
return (ENVTIECALL(CATIADrawingPicture,ENVTIETypeLetter,ENVTIELetter)get_height(oHeight)); \
} \
HRESULT __stdcall  ENVTIEName::put_height(double iHeight) \
{ \
return (ENVTIECALL(CATIADrawingPicture,ENVTIETypeLetter,ENVTIELetter)put_height(iHeight)); \
} \
HRESULT __stdcall  ENVTIEName::get_width(double & oWidth) \
{ \
return (ENVTIECALL(CATIADrawingPicture,ENVTIETypeLetter,ENVTIELetter)get_width(oWidth)); \
} \
HRESULT __stdcall  ENVTIEName::put_width(double iWidth) \
{ \
return (ENVTIECALL(CATIADrawingPicture,ENVTIETypeLetter,ENVTIELetter)put_width(iWidth)); \
} \
HRESULT __stdcall  ENVTIEName::get_cropTop(double & oCropTop) \
{ \
return (ENVTIECALL(CATIADrawingPicture,ENVTIETypeLetter,ENVTIELetter)get_cropTop(oCropTop)); \
} \
HRESULT __stdcall  ENVTIEName::put_cropTop(double iCropTop) \
{ \
return (ENVTIECALL(CATIADrawingPicture,ENVTIETypeLetter,ENVTIELetter)put_cropTop(iCropTop)); \
} \
HRESULT __stdcall  ENVTIEName::get_cropBottom(double & oCropBottom) \
{ \
return (ENVTIECALL(CATIADrawingPicture,ENVTIETypeLetter,ENVTIELetter)get_cropBottom(oCropBottom)); \
} \
HRESULT __stdcall  ENVTIEName::put_cropBottom(double iCropBottom) \
{ \
return (ENVTIECALL(CATIADrawingPicture,ENVTIETypeLetter,ENVTIELetter)put_cropBottom(iCropBottom)); \
} \
HRESULT __stdcall  ENVTIEName::get_cropLeft(double & oCropLeft) \
{ \
return (ENVTIECALL(CATIADrawingPicture,ENVTIETypeLetter,ENVTIELetter)get_cropLeft(oCropLeft)); \
} \
HRESULT __stdcall  ENVTIEName::put_cropLeft(double iCropLeft) \
{ \
return (ENVTIECALL(CATIADrawingPicture,ENVTIETypeLetter,ENVTIELetter)put_cropLeft(iCropLeft)); \
} \
HRESULT __stdcall  ENVTIEName::get_cropRight(double & oCropRight) \
{ \
return (ENVTIECALL(CATIADrawingPicture,ENVTIETypeLetter,ENVTIELetter)get_cropRight(oCropRight)); \
} \
HRESULT __stdcall  ENVTIEName::put_cropRight(double iCropRight) \
{ \
return (ENVTIECALL(CATIADrawingPicture,ENVTIETypeLetter,ENVTIELetter)put_cropRight(iCropRight)); \
} \
HRESULT __stdcall  ENVTIEName::get_ratioLock(CAT_VARIANT_BOOL & oRatioLock) \
{ \
return (ENVTIECALL(CATIADrawingPicture,ENVTIETypeLetter,ENVTIELetter)get_ratioLock(oRatioLock)); \
} \
HRESULT __stdcall  ENVTIEName::put_ratioLock(CAT_VARIANT_BOOL iRatioLock) \
{ \
return (ENVTIECALL(CATIADrawingPicture,ENVTIETypeLetter,ENVTIELetter)put_ratioLock(iRatioLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetOriginalHeight(double & oHeight) \
{ \
return (ENVTIECALL(CATIADrawingPicture,ENVTIETypeLetter,ENVTIELetter)GetOriginalHeight(oHeight)); \
} \
HRESULT __stdcall  ENVTIEName::GetOriginalWidth(double & oWidth) \
{ \
return (ENVTIECALL(CATIADrawingPicture,ENVTIETypeLetter,ENVTIELetter)GetOriginalWidth(oWidth)); \
} \
HRESULT __stdcall  ENVTIEName::get_format(CatPictureFormat & oPictureFormat) \
{ \
return (ENVTIECALL(CATIADrawingPicture,ENVTIETypeLetter,ENVTIELetter)get_format(oPictureFormat)); \
} \
HRESULT __stdcall  ENVTIEName::put_format(CatPictureFormat iPictureFormat) \
{ \
return (ENVTIECALL(CATIADrawingPicture,ENVTIETypeLetter,ENVTIELetter)put_format(iPictureFormat)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADrawingPicture,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADrawingPicture,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingPicture,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingPicture,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADrawingPicture,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADrawingPicture(classe)    TIECATIADrawingPicture##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADrawingPicture(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADrawingPicture, classe) \
 \
 \
CATImplementTIEMethods(CATIADrawingPicture, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADrawingPicture, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADrawingPicture, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADrawingPicture, classe) \
 \
HRESULT __stdcall  TIECATIADrawingPicture##classe::get_x(double & oXPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oXPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_x(oXPosition); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oXPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingPicture##classe::put_x(double iXPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iXPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_x(iXPosition); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iXPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingPicture##classe::get_y(double & oYPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oYPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_y(oYPosition); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oYPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingPicture##classe::put_y(double iYPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iYPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_y(iYPosition); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iYPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingPicture##classe::get_height(double & oHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_height(oHeight); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingPicture##classe::put_height(double iHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_height(iHeight); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingPicture##classe::get_width(double & oWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_width(oWidth); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingPicture##classe::put_width(double iWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_width(iWidth); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingPicture##classe::get_cropTop(double & oCropTop) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oCropTop); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_cropTop(oCropTop); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oCropTop); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingPicture##classe::put_cropTop(double iCropTop) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iCropTop); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_cropTop(iCropTop); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iCropTop); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingPicture##classe::get_cropBottom(double & oCropBottom) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oCropBottom); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_cropBottom(oCropBottom); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oCropBottom); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingPicture##classe::put_cropBottom(double iCropBottom) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iCropBottom); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_cropBottom(iCropBottom); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iCropBottom); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingPicture##classe::get_cropLeft(double & oCropLeft) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oCropLeft); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_cropLeft(oCropLeft); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oCropLeft); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingPicture##classe::put_cropLeft(double iCropLeft) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iCropLeft); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_cropLeft(iCropLeft); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iCropLeft); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingPicture##classe::get_cropRight(double & oCropRight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oCropRight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_cropRight(oCropRight); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oCropRight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingPicture##classe::put_cropRight(double iCropRight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iCropRight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_cropRight(iCropRight); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iCropRight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingPicture##classe::get_ratioLock(CAT_VARIANT_BOOL & oRatioLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oRatioLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ratioLock(oRatioLock); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oRatioLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingPicture##classe::put_ratioLock(CAT_VARIANT_BOOL iRatioLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iRatioLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ratioLock(iRatioLock); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iRatioLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingPicture##classe::GetOriginalHeight(double & oHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOriginalHeight(oHeight); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingPicture##classe::GetOriginalWidth(double & oWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOriginalWidth(oWidth); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingPicture##classe::get_format(CatPictureFormat & oPictureFormat) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oPictureFormat); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_format(oPictureFormat); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oPictureFormat); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingPicture##classe::put_format(CatPictureFormat iPictureFormat) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iPictureFormat); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_format(iPictureFormat); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iPictureFormat); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingPicture##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingPicture##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingPicture##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingPicture##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingPicture##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADrawingPicture(classe) \
 \
 \
declare_TIE_CATIADrawingPicture(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingPicture##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingPicture,"CATIADrawingPicture",CATIADrawingPicture::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingPicture(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADrawingPicture, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingPicture##classe(classe::MetaObject(),CATIADrawingPicture::MetaObject(),(void *)CreateTIECATIADrawingPicture##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADrawingPicture(classe) \
 \
 \
declare_TIE_CATIADrawingPicture(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingPicture##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingPicture,"CATIADrawingPicture",CATIADrawingPicture::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingPicture(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADrawingPicture, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingPicture##classe(classe::MetaObject(),CATIADrawingPicture::MetaObject(),(void *)CreateTIECATIADrawingPicture##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADrawingPicture(classe) TIE_CATIADrawingPicture(classe)
#else
#define BOA_CATIADrawingPicture(classe) CATImplementBOA(CATIADrawingPicture, classe)
#endif

#endif
