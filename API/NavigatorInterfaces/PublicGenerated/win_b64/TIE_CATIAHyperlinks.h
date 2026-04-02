#ifndef __TIE_CATIAHyperlinks
#define __TIE_CATIAHyperlinks

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHyperlinks.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHyperlinks */
#define declare_TIE_CATIAHyperlinks(classe) \
 \
 \
class TIECATIAHyperlinks##classe : public CATIAHyperlinks \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHyperlinks, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetHyperlink(CATIABase * iObject, CATIAHyperlink *& oURL); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAHyperlink *& oHyperlink); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT __stdcall Add(CATIABase * iObject, CATIAHyperlink *& oURL); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAHyperlinks(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetHyperlink(CATIABase * iObject, CATIAHyperlink *& oURL); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAHyperlink *& oHyperlink); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT __stdcall Add(CATIABase * iObject, CATIAHyperlink *& oURL); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAHyperlinks(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetHyperlink(CATIABase * iObject, CATIAHyperlink *& oURL) \
{ \
return (ENVTIECALL(CATIAHyperlinks,ENVTIETypeLetter,ENVTIELetter)GetHyperlink(iObject,oURL)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAHyperlink *& oHyperlink) \
{ \
return (ENVTIECALL(CATIAHyperlinks,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oHyperlink)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAHyperlinks,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::Add(CATIABase * iObject, CATIAHyperlink *& oURL) \
{ \
return (ENVTIECALL(CATIAHyperlinks,ENVTIETypeLetter,ENVTIELetter)Add(iObject,oURL)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHyperlinks,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHyperlinks,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAHyperlinks,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAHyperlinks,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAHyperlinks,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAHyperlinks,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHyperlinks(classe)    TIECATIAHyperlinks##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHyperlinks(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHyperlinks, classe) \
 \
 \
CATImplementTIEMethods(CATIAHyperlinks, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHyperlinks, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHyperlinks, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHyperlinks, classe) \
 \
HRESULT __stdcall  TIECATIAHyperlinks##classe::GetHyperlink(CATIABase * iObject, CATIAHyperlink *& oURL) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iObject,&oURL); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetHyperlink(iObject,oURL); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iObject,&oURL); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHyperlinks##classe::Item(const CATVariant & iIndex, CATIAHyperlink *& oHyperlink) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex,&oHyperlink); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oHyperlink); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex,&oHyperlink); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHyperlinks##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHyperlinks##classe::Add(CATIABase * iObject, CATIAHyperlink *& oURL) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iObject,&oURL); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iObject,oURL); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iObject,&oURL); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHyperlinks##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHyperlinks##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHyperlinks##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHyperlinks##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHyperlinks##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHyperlinks##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHyperlinks(classe) \
 \
 \
declare_TIE_CATIAHyperlinks(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHyperlinks##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHyperlinks,"CATIAHyperlinks",CATIAHyperlinks::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHyperlinks(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHyperlinks, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHyperlinks##classe(classe::MetaObject(),CATIAHyperlinks::MetaObject(),(void *)CreateTIECATIAHyperlinks##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHyperlinks(classe) \
 \
 \
declare_TIE_CATIAHyperlinks(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHyperlinks##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHyperlinks,"CATIAHyperlinks",CATIAHyperlinks::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHyperlinks(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHyperlinks, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHyperlinks##classe(classe::MetaObject(),CATIAHyperlinks::MetaObject(),(void *)CreateTIECATIAHyperlinks##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHyperlinks(classe) TIE_CATIAHyperlinks(classe)
#else
#define BOA_CATIAHyperlinks(classe) CATImplementBOA(CATIAHyperlinks, classe)
#endif

#endif
