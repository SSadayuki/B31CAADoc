#ifndef __TIE_CATIADrawingDimensions
#define __TIE_CATIADrawingDimensions

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADrawingDimensions.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADrawingDimensions */
#define declare_TIE_CATIADrawingDimensions(classe) \
 \
 \
class TIECATIADrawingDimensions##classe : public CATIADrawingDimensions \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADrawingDimensions, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Add(CatDimType iTypeDim, const CATSafeArrayVariant & iGeomElem, const CATSafeArrayVariant & iPtCoordElem, CatDimLineRep iLineRep, CATIADrawingDimension *& oNewDrawingDimension); \
      virtual HRESULT __stdcall Add2(CatDimType iTypeDim, const CATSafeArrayVariant & iGeomElem, const CATSafeArrayVariant & iPtCoordElem, const CATVariant & iLDCRefElem, CATLONG iLDCRefAngle, CATIADrawingDimension *& oNewDrawingDimension); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIADrawingDimension *& oItem); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIADrawingDimensions(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Add(CatDimType iTypeDim, const CATSafeArrayVariant & iGeomElem, const CATSafeArrayVariant & iPtCoordElem, CatDimLineRep iLineRep, CATIADrawingDimension *& oNewDrawingDimension); \
virtual HRESULT __stdcall Add2(CatDimType iTypeDim, const CATSafeArrayVariant & iGeomElem, const CATSafeArrayVariant & iPtCoordElem, const CATVariant & iLDCRefElem, CATLONG iLDCRefAngle, CATIADrawingDimension *& oNewDrawingDimension); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIADrawingDimension *& oItem); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIADrawingDimensions(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Add(CatDimType iTypeDim, const CATSafeArrayVariant & iGeomElem, const CATSafeArrayVariant & iPtCoordElem, CatDimLineRep iLineRep, CATIADrawingDimension *& oNewDrawingDimension) \
{ \
return (ENVTIECALL(CATIADrawingDimensions,ENVTIETypeLetter,ENVTIELetter)Add(iTypeDim,iGeomElem,iPtCoordElem,iLineRep,oNewDrawingDimension)); \
} \
HRESULT __stdcall  ENVTIEName::Add2(CatDimType iTypeDim, const CATSafeArrayVariant & iGeomElem, const CATSafeArrayVariant & iPtCoordElem, const CATVariant & iLDCRefElem, CATLONG iLDCRefAngle, CATIADrawingDimension *& oNewDrawingDimension) \
{ \
return (ENVTIECALL(CATIADrawingDimensions,ENVTIETypeLetter,ENVTIELetter)Add2(iTypeDim,iGeomElem,iPtCoordElem,iLDCRefElem,iLDCRefAngle,oNewDrawingDimension)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIADrawingDimensions,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIADrawingDimension *& oItem) \
{ \
return (ENVTIECALL(CATIADrawingDimensions,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oItem)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADrawingDimensions,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADrawingDimensions,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIADrawingDimensions,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIADrawingDimensions,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIADrawingDimensions,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIADrawingDimensions,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADrawingDimensions(classe)    TIECATIADrawingDimensions##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADrawingDimensions(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADrawingDimensions, classe) \
 \
 \
CATImplementTIEMethods(CATIADrawingDimensions, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADrawingDimensions, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADrawingDimensions, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADrawingDimensions, classe) \
 \
HRESULT __stdcall  TIECATIADrawingDimensions##classe::Add(CatDimType iTypeDim, const CATSafeArrayVariant & iGeomElem, const CATSafeArrayVariant & iPtCoordElem, CatDimLineRep iLineRep, CATIADrawingDimension *& oNewDrawingDimension) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iTypeDim,&iGeomElem,&iPtCoordElem,&iLineRep,&oNewDrawingDimension); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iTypeDim,iGeomElem,iPtCoordElem,iLineRep,oNewDrawingDimension); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iTypeDim,&iGeomElem,&iPtCoordElem,&iLineRep,&oNewDrawingDimension); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimensions##classe::Add2(CatDimType iTypeDim, const CATSafeArrayVariant & iGeomElem, const CATSafeArrayVariant & iPtCoordElem, const CATVariant & iLDCRefElem, CATLONG iLDCRefAngle, CATIADrawingDimension *& oNewDrawingDimension) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iTypeDim,&iGeomElem,&iPtCoordElem,&iLDCRefElem,&iLDCRefAngle,&oNewDrawingDimension); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add2(iTypeDim,iGeomElem,iPtCoordElem,iLDCRefElem,iLDCRefAngle,oNewDrawingDimension); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iTypeDim,&iGeomElem,&iPtCoordElem,&iLDCRefElem,&iLDCRefAngle,&oNewDrawingDimension); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimensions##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimensions##classe::Item(const CATVariant & iIndex, CATIADrawingDimension *& oItem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIndex,&oItem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oItem); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIndex,&oItem); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDimensions##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDimensions##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDimensions##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDimensions##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDimensions##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDimensions##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADrawingDimensions(classe) \
 \
 \
declare_TIE_CATIADrawingDimensions(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingDimensions##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingDimensions,"CATIADrawingDimensions",CATIADrawingDimensions::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingDimensions(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADrawingDimensions, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingDimensions##classe(classe::MetaObject(),CATIADrawingDimensions::MetaObject(),(void *)CreateTIECATIADrawingDimensions##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADrawingDimensions(classe) \
 \
 \
declare_TIE_CATIADrawingDimensions(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingDimensions##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingDimensions,"CATIADrawingDimensions",CATIADrawingDimensions::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingDimensions(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADrawingDimensions, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingDimensions##classe(classe::MetaObject(),CATIADrawingDimensions::MetaObject(),(void *)CreateTIECATIADrawingDimensions##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADrawingDimensions(classe) TIE_CATIADrawingDimensions(classe)
#else
#define BOA_CATIADrawingDimensions(classe) CATImplementBOA(CATIADrawingDimensions, classe)
#endif

#endif
