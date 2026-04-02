#ifndef __TIE_CATIAMarker3Ds
#define __TIE_CATIAMarker3Ds

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAMarker3Ds.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAMarker3Ds */
#define declare_TIE_CATIAMarker3Ds(classe) \
 \
 \
class TIECATIAMarker3Ds##classe : public CATIAMarker3Ds \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAMarker3Ds, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Add3DText(const CATSafeArrayVariant & iTextCoordinates, const CATBSTR & iText, const CATSafeArrayVariant & iObjectCoordinates, CATIABase * iObject, CATIAMarker3D *& oMarker3D); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAMarker3D *& oMarker3D); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAMarker3Ds(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Add3DText(const CATSafeArrayVariant & iTextCoordinates, const CATBSTR & iText, const CATSafeArrayVariant & iObjectCoordinates, CATIABase * iObject, CATIAMarker3D *& oMarker3D); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAMarker3D *& oMarker3D); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAMarker3Ds(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Add3DText(const CATSafeArrayVariant & iTextCoordinates, const CATBSTR & iText, const CATSafeArrayVariant & iObjectCoordinates, CATIABase * iObject, CATIAMarker3D *& oMarker3D) \
{ \
return (ENVTIECALL(CATIAMarker3Ds,ENVTIETypeLetter,ENVTIELetter)Add3DText(iTextCoordinates,iText,iObjectCoordinates,iObject,oMarker3D)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAMarker3D *& oMarker3D) \
{ \
return (ENVTIECALL(CATIAMarker3Ds,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oMarker3D)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAMarker3Ds,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAMarker3Ds,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAMarker3Ds,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAMarker3Ds,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAMarker3Ds,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAMarker3Ds,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAMarker3Ds,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAMarker3Ds(classe)    TIECATIAMarker3Ds##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAMarker3Ds(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAMarker3Ds, classe) \
 \
 \
CATImplementTIEMethods(CATIAMarker3Ds, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAMarker3Ds, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAMarker3Ds, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAMarker3Ds, classe) \
 \
HRESULT __stdcall  TIECATIAMarker3Ds##classe::Add3DText(const CATSafeArrayVariant & iTextCoordinates, const CATBSTR & iText, const CATSafeArrayVariant & iObjectCoordinates, CATIABase * iObject, CATIAMarker3D *& oMarker3D) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iTextCoordinates,&iText,&iObjectCoordinates,&iObject,&oMarker3D); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add3DText(iTextCoordinates,iText,iObjectCoordinates,iObject,oMarker3D); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iTextCoordinates,&iText,&iObjectCoordinates,&iObject,&oMarker3D); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker3Ds##classe::Item(const CATVariant & iIndex, CATIAMarker3D *& oMarker3D) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex,&oMarker3D); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oMarker3D); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex,&oMarker3D); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarker3Ds##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMarker3Ds##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMarker3Ds##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMarker3Ds##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMarker3Ds##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMarker3Ds##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMarker3Ds##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAMarker3Ds(classe) \
 \
 \
declare_TIE_CATIAMarker3Ds(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMarker3Ds##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMarker3Ds,"CATIAMarker3Ds",CATIAMarker3Ds::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMarker3Ds(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAMarker3Ds, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMarker3Ds##classe(classe::MetaObject(),CATIAMarker3Ds::MetaObject(),(void *)CreateTIECATIAMarker3Ds##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAMarker3Ds(classe) \
 \
 \
declare_TIE_CATIAMarker3Ds(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMarker3Ds##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMarker3Ds,"CATIAMarker3Ds",CATIAMarker3Ds::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMarker3Ds(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAMarker3Ds, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMarker3Ds##classe(classe::MetaObject(),CATIAMarker3Ds::MetaObject(),(void *)CreateTIECATIAMarker3Ds##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAMarker3Ds(classe) TIE_CATIAMarker3Ds(classe)
#else
#define BOA_CATIAMarker3Ds(classe) CATImplementBOA(CATIAMarker3Ds, classe)
#endif

#endif
