#ifndef __TIE_CATIADMUReviews
#define __TIE_CATIADMUReviews

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADMUReviews.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADMUReviews */
#define declare_TIE_CATIADMUReviews(classe) \
 \
 \
class TIECATIADMUReviews##classe : public CATIADMUReviews \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADMUReviews, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Add(CATIADMUReview *& oDMUReview); \
      virtual HRESULT __stdcall ImportFrom(CATIAProduct * iProduct, CATIADMUReview *& oDMUReview); \
      virtual HRESULT __stdcall get_Current(CATBaseDispatch *& oDMUReview); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIADMUReview *& oDMUReview); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIADMUReviews(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Add(CATIADMUReview *& oDMUReview); \
virtual HRESULT __stdcall ImportFrom(CATIAProduct * iProduct, CATIADMUReview *& oDMUReview); \
virtual HRESULT __stdcall get_Current(CATBaseDispatch *& oDMUReview); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIADMUReview *& oDMUReview); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIADMUReviews(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Add(CATIADMUReview *& oDMUReview) \
{ \
return (ENVTIECALL(CATIADMUReviews,ENVTIETypeLetter,ENVTIELetter)Add(oDMUReview)); \
} \
HRESULT __stdcall  ENVTIEName::ImportFrom(CATIAProduct * iProduct, CATIADMUReview *& oDMUReview) \
{ \
return (ENVTIECALL(CATIADMUReviews,ENVTIETypeLetter,ENVTIELetter)ImportFrom(iProduct,oDMUReview)); \
} \
HRESULT __stdcall  ENVTIEName::get_Current(CATBaseDispatch *& oDMUReview) \
{ \
return (ENVTIECALL(CATIADMUReviews,ENVTIETypeLetter,ENVTIELetter)get_Current(oDMUReview)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIADMUReview *& oDMUReview) \
{ \
return (ENVTIECALL(CATIADMUReviews,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oDMUReview)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIADMUReviews,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADMUReviews,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADMUReviews,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIADMUReviews,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIADMUReviews,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIADMUReviews,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIADMUReviews,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADMUReviews(classe)    TIECATIADMUReviews##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADMUReviews(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADMUReviews, classe) \
 \
 \
CATImplementTIEMethods(CATIADMUReviews, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADMUReviews, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADMUReviews, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADMUReviews, classe) \
 \
HRESULT __stdcall  TIECATIADMUReviews##classe::Add(CATIADMUReview *& oDMUReview) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oDMUReview); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(oDMUReview); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oDMUReview); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUReviews##classe::ImportFrom(CATIAProduct * iProduct, CATIADMUReview *& oDMUReview) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iProduct,&oDMUReview); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ImportFrom(iProduct,oDMUReview); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iProduct,&oDMUReview); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUReviews##classe::get_Current(CATBaseDispatch *& oDMUReview) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oDMUReview); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Current(oDMUReview); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oDMUReview); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUReviews##classe::Item(const CATVariant & iIndex, CATIADMUReview *& oDMUReview) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIndex,&oDMUReview); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oDMUReview); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIndex,&oDMUReview); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUReviews##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMUReviews##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMUReviews##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMUReviews##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMUReviews##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMUReviews##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMUReviews##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADMUReviews(classe) \
 \
 \
declare_TIE_CATIADMUReviews(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADMUReviews##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADMUReviews,"CATIADMUReviews",CATIADMUReviews::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADMUReviews(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADMUReviews, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADMUReviews##classe(classe::MetaObject(),CATIADMUReviews::MetaObject(),(void *)CreateTIECATIADMUReviews##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADMUReviews(classe) \
 \
 \
declare_TIE_CATIADMUReviews(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADMUReviews##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADMUReviews,"CATIADMUReviews",CATIADMUReviews::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADMUReviews(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADMUReviews, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADMUReviews##classe(classe::MetaObject(),CATIADMUReviews::MetaObject(),(void *)CreateTIECATIADMUReviews##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADMUReviews(classe) TIE_CATIADMUReviews(classe)
#else
#define BOA_CATIADMUReviews(classe) CATImplementBOA(CATIADMUReviews, classe)
#endif

#endif
