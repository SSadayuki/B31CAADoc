#ifndef __TIE_CATIAMarker2Ds
#define __TIE_CATIAMarker2Ds

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAMarker2Ds.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAMarker2Ds */
#define declare_TIE_CATIAMarker2Ds(classe) \
 \
 \
class TIECATIAMarker2Ds##classe : public CATIAMarker2Ds \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAMarker2Ds, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Add2DLine(const CATSafeArrayVariant & iCoordinates, CATIAMarker2D *& oMarker2D); \
      virtual HRESULT __stdcall Add2DArrow(const CATSafeArrayVariant & iCoordinates, CATIAMarker2D *& oMarker2D); \
      virtual HRESULT __stdcall Add2DRectangle(const CATSafeArrayVariant & iCoordinates, CATLONG iFillStatus, CATIAMarker2D *& oMarker2D); \
      virtual HRESULT __stdcall Add2DCircle(const CATSafeArrayVariant & iCoordinates, CATLONG iFillStatus, CATIAMarker2D *& oMarker2D); \
      virtual HRESULT __stdcall Add2DFreeHand(const CATSafeArrayVariant & iCoordinates, CATIAMarker2D *& oMarker2D); \
      virtual HRESULT __stdcall Add2DText(const CATSafeArrayVariant & iCoordinates, const CATBSTR & iText, CATIAMarker2D *& oMarker2D); \
      virtual HRESULT __stdcall Add2DPicture(const CATSafeArrayVariant & iCoordinates, const CATBSTR & iPath, CATIAMarker2D *& oMarker2D); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAMarker2D *& oMarker2D); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAMarker2Ds(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Add2DLine(const CATSafeArrayVariant & iCoordinates, CATIAMarker2D *& oMarker2D); \
virtual HRESULT __stdcall Add2DArrow(const CATSafeArrayVariant & iCoordinates, CATIAMarker2D *& oMarker2D); \
virtual HRESULT __stdcall Add2DRectangle(const CATSafeArrayVariant & iCoordinates, CATLONG iFillStatus, CATIAMarker2D *& oMarker2D); \
virtual HRESULT __stdcall Add2DCircle(const CATSafeArrayVariant & iCoordinates, CATLONG iFillStatus, CATIAMarker2D *& oMarker2D); \
virtual HRESULT __stdcall Add2DFreeHand(const CATSafeArrayVariant & iCoordinates, CATIAMarker2D *& oMarker2D); \
virtual HRESULT __stdcall Add2DText(const CATSafeArrayVariant & iCoordinates, const CATBSTR & iText, CATIAMarker2D *& oMarker2D); \
virtual HRESULT __stdcall Add2DPicture(const CATSafeArrayVariant & iCoordinates, const CATBSTR & iPath, CATIAMarker2D *& oMarker2D); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAMarker2D *& oMarker2D); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAMarker2Ds(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Add2DLine(const CATSafeArrayVariant & iCoordinates, CATIAMarker2D *& oMarker2D) \
{ \
return (ENVTIECALL(CATIAMarker2Ds,ENVTIETypeLetter,ENVTIELetter)Add2DLine(iCoordinates,oMarker2D)); \
} \
HRESULT __stdcall  ENVTIEName::Add2DArrow(const CATSafeArrayVariant & iCoordinates, CATIAMarker2D *& oMarker2D) \
{ \
return (ENVTIECALL(CATIAMarker2Ds,ENVTIETypeLetter,ENVTIELetter)Add2DArrow(iCoordinates,oMarker2D)); \
} \
HRESULT __stdcall  ENVTIEName::Add2DRectangle(const CATSafeArrayVariant & iCoordinates, CATLONG iFillStatus, CATIAMarker2D *& oMarker2D) \
{ \
return (ENVTIECALL(CATIAMarker2Ds,ENVTIETypeLetter,ENVTIELetter)Add2DRectangle(iCoordinates,iFillStatus,oMarker2D)); \
} \
HRESULT __stdcall  ENVTIEName::Add2DCircle(const CATSafeArrayVariant & iCoordinates, CATLONG iFillStatus, CATIAMarker2D *& oMarker2D) \
{ \
return (ENVTIECALL(CATIAMarker2Ds,ENVTIETypeLetter,ENVTIELetter)Add2DCircle(iCoordinates,iFillStatus,oMarker2D)); \
} \
HRESULT __stdcall  ENVTIEName::Add2DFreeHand(const CATSafeArrayVariant & iCoordinates, CATIAMarker2D *& oMarker2D) \
{ \
return (ENVTIECALL(CATIAMarker2Ds,ENVTIETypeLetter,ENVTIELetter)Add2DFreeHand(iCoordinates,oMarker2D)); \
} \
HRESULT __stdcall  ENVTIEName::Add2DText(const CATSafeArrayVariant & iCoordinates, const CATBSTR & iText, CATIAMarker2D *& oMarker2D) \
{ \
return (ENVTIECALL(CATIAMarker2Ds,ENVTIETypeLetter,ENVTIELetter)Add2DText(iCoordinates,iText,oMarker2D)); \
} \
HRESULT __stdcall  ENVTIEName::Add2DPicture(const CATSafeArrayVariant & iCoordinates, const CATBSTR & iPath, CATIAMarker2D *& oMarker2D) \
{ \
return (ENVTIECALL(CATIAMarker2Ds,ENVTIETypeLetter,ENVTIELetter)Add2DPicture(iCoordinates,iPath,oMarker2D)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAMarker2D *& oMarker2D) \
{ \
return (ENVTIECALL(CATIAMarker2Ds,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oMarker2D)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAMarker2Ds,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAMarker2Ds,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAMarker2Ds,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAMarker2Ds,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAMarker2Ds,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAMarker2Ds,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAMarker2Ds,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAMarker2Ds(classe)    TIECATIAMarker2Ds##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAMarker2Ds(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAMarker2Ds, classe) \
 \
 \
CATImplementTIEMethods(CATIAMarker2Ds, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAMarker2Ds, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAMarker2Ds, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAMarker2Ds, classe) \
 \
HRESULT __stdcall  TIECATIAMarker2Ds##classe::Add2DLine(const CATSafeArrayVariant & iCoordinates, CATIAMarker2D *& oMarker2D) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iCoordinates,&oMarker2D); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add2DLine(iCoordinates,oMarker2D); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iCoordinates,&oMarker2D); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker2Ds##classe::Add2DArrow(const CATSafeArrayVariant & iCoordinates, CATIAMarker2D *& oMarker2D) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iCoordinates,&oMarker2D); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add2DArrow(iCoordinates,oMarker2D); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iCoordinates,&oMarker2D); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker2Ds##classe::Add2DRectangle(const CATSafeArrayVariant & iCoordinates, CATLONG iFillStatus, CATIAMarker2D *& oMarker2D) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iCoordinates,&iFillStatus,&oMarker2D); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add2DRectangle(iCoordinates,iFillStatus,oMarker2D); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iCoordinates,&iFillStatus,&oMarker2D); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker2Ds##classe::Add2DCircle(const CATSafeArrayVariant & iCoordinates, CATLONG iFillStatus, CATIAMarker2D *& oMarker2D) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iCoordinates,&iFillStatus,&oMarker2D); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add2DCircle(iCoordinates,iFillStatus,oMarker2D); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iCoordinates,&iFillStatus,&oMarker2D); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker2Ds##classe::Add2DFreeHand(const CATSafeArrayVariant & iCoordinates, CATIAMarker2D *& oMarker2D) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iCoordinates,&oMarker2D); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add2DFreeHand(iCoordinates,oMarker2D); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iCoordinates,&oMarker2D); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker2Ds##classe::Add2DText(const CATSafeArrayVariant & iCoordinates, const CATBSTR & iText, CATIAMarker2D *& oMarker2D) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iCoordinates,&iText,&oMarker2D); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add2DText(iCoordinates,iText,oMarker2D); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iCoordinates,&iText,&oMarker2D); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker2Ds##classe::Add2DPicture(const CATSafeArrayVariant & iCoordinates, const CATBSTR & iPath, CATIAMarker2D *& oMarker2D) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iCoordinates,&iPath,&oMarker2D); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add2DPicture(iCoordinates,iPath,oMarker2D); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iCoordinates,&iPath,&oMarker2D); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker2Ds##classe::Item(const CATVariant & iIndex, CATIAMarker2D *& oMarker2D) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iIndex,&oMarker2D); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oMarker2D); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iIndex,&oMarker2D); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker2Ds##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMarker2Ds##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMarker2Ds##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMarker2Ds##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMarker2Ds##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMarker2Ds##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMarker2Ds##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAMarker2Ds(classe) \
 \
 \
declare_TIE_CATIAMarker2Ds(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMarker2Ds##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMarker2Ds,"CATIAMarker2Ds",CATIAMarker2Ds::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMarker2Ds(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAMarker2Ds, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMarker2Ds##classe(classe::MetaObject(),CATIAMarker2Ds::MetaObject(),(void *)CreateTIECATIAMarker2Ds##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAMarker2Ds(classe) \
 \
 \
declare_TIE_CATIAMarker2Ds(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMarker2Ds##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMarker2Ds,"CATIAMarker2Ds",CATIAMarker2Ds::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMarker2Ds(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAMarker2Ds, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMarker2Ds##classe(classe::MetaObject(),CATIAMarker2Ds::MetaObject(),(void *)CreateTIECATIAMarker2Ds##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAMarker2Ds(classe) TIE_CATIAMarker2Ds(classe)
#else
#define BOA_CATIAMarker2Ds(classe) CATImplementBOA(CATIAMarker2Ds, classe)
#endif

#endif
