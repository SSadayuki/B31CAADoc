#ifndef __TIE_CATIAAnnotatedViews
#define __TIE_CATIAAnnotatedViews

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAnnotatedViews.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnnotatedViews */
#define declare_TIE_CATIAAnnotatedViews(classe) \
 \
 \
class TIECATIAAnnotatedViews##classe : public CATIAAnnotatedViews \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnnotatedViews, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Add(CATIAAnnotatedView *& oAnnotatedView); \
      virtual HRESULT __stdcall AddFromViewpoint(CATIAViewpoint3D * iViewpoint, CATIAAnnotatedView *& oAnnotatedView); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAAnnotatedView *& oAnnotatedView); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAAnnotatedViews(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Add(CATIAAnnotatedView *& oAnnotatedView); \
virtual HRESULT __stdcall AddFromViewpoint(CATIAViewpoint3D * iViewpoint, CATIAAnnotatedView *& oAnnotatedView); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAAnnotatedView *& oAnnotatedView); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAAnnotatedViews(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Add(CATIAAnnotatedView *& oAnnotatedView) \
{ \
return (ENVTIECALL(CATIAAnnotatedViews,ENVTIETypeLetter,ENVTIELetter)Add(oAnnotatedView)); \
} \
HRESULT __stdcall  ENVTIEName::AddFromViewpoint(CATIAViewpoint3D * iViewpoint, CATIAAnnotatedView *& oAnnotatedView) \
{ \
return (ENVTIECALL(CATIAAnnotatedViews,ENVTIETypeLetter,ENVTIELetter)AddFromViewpoint(iViewpoint,oAnnotatedView)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAAnnotatedView *& oAnnotatedView) \
{ \
return (ENVTIECALL(CATIAAnnotatedViews,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oAnnotatedView)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAAnnotatedViews,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnnotatedViews,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnnotatedViews,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAAnnotatedViews,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAAnnotatedViews,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAAnnotatedViews,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAAnnotatedViews,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnnotatedViews(classe)    TIECATIAAnnotatedViews##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnnotatedViews(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnnotatedViews, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnnotatedViews, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnnotatedViews, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnnotatedViews, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnnotatedViews, classe) \
 \
HRESULT __stdcall  TIECATIAAnnotatedViews##classe::Add(CATIAAnnotatedView *& oAnnotatedView) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oAnnotatedView); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(oAnnotatedView); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oAnnotatedView); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnnotatedViews##classe::AddFromViewpoint(CATIAViewpoint3D * iViewpoint, CATIAAnnotatedView *& oAnnotatedView) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iViewpoint,&oAnnotatedView); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFromViewpoint(iViewpoint,oAnnotatedView); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iViewpoint,&oAnnotatedView); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnnotatedViews##classe::Item(const CATVariant & iIndex, CATIAAnnotatedView *& oAnnotatedView) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex,&oAnnotatedView); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oAnnotatedView); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex,&oAnnotatedView); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnnotatedViews##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnnotatedViews##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnnotatedViews##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnnotatedViews##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnnotatedViews##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnnotatedViews##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnnotatedViews##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnnotatedViews(classe) \
 \
 \
declare_TIE_CATIAAnnotatedViews(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnnotatedViews##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnnotatedViews,"CATIAAnnotatedViews",CATIAAnnotatedViews::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnnotatedViews(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnnotatedViews, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnnotatedViews##classe(classe::MetaObject(),CATIAAnnotatedViews::MetaObject(),(void *)CreateTIECATIAAnnotatedViews##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnnotatedViews(classe) \
 \
 \
declare_TIE_CATIAAnnotatedViews(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnnotatedViews##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnnotatedViews,"CATIAAnnotatedViews",CATIAAnnotatedViews::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnnotatedViews(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnnotatedViews, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnnotatedViews##classe(classe::MetaObject(),CATIAAnnotatedViews::MetaObject(),(void *)CreateTIECATIAAnnotatedViews##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnnotatedViews(classe) TIE_CATIAAnnotatedViews(classe)
#else
#define BOA_CATIAAnnotatedViews(classe) CATImplementBOA(CATIAAnnotatedViews, classe)
#endif

#endif
