#ifndef __TIE_CATIALayout2DSheets
#define __TIE_CATIALayout2DSheets

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIALayout2DSheets.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIALayout2DSheets */
#define declare_TIE_CATIALayout2DSheets(classe) \
 \
 \
class TIECATIALayout2DSheets##classe : public CATIALayout2DSheets \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIALayout2DSheets, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Add(const CATBSTR & iLayoutSheetName, CATIALayout2DSheet *& oNewLayoutSheet); \
      virtual HRESULT __stdcall AddDetail(const CATBSTR & iLayoutSheetName, CATIALayout2DSheet *& oSheet); \
      virtual HRESULT __stdcall get_ActiveSheet(CATIALayout2DSheet *& oSheet); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIALayout2DSheet *& oLayoutSheet); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIALayout2DSheets(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Add(const CATBSTR & iLayoutSheetName, CATIALayout2DSheet *& oNewLayoutSheet); \
virtual HRESULT __stdcall AddDetail(const CATBSTR & iLayoutSheetName, CATIALayout2DSheet *& oSheet); \
virtual HRESULT __stdcall get_ActiveSheet(CATIALayout2DSheet *& oSheet); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIALayout2DSheet *& oLayoutSheet); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIALayout2DSheets(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Add(const CATBSTR & iLayoutSheetName, CATIALayout2DSheet *& oNewLayoutSheet) \
{ \
return (ENVTIECALL(CATIALayout2DSheets,ENVTIETypeLetter,ENVTIELetter)Add(iLayoutSheetName,oNewLayoutSheet)); \
} \
HRESULT __stdcall  ENVTIEName::AddDetail(const CATBSTR & iLayoutSheetName, CATIALayout2DSheet *& oSheet) \
{ \
return (ENVTIECALL(CATIALayout2DSheets,ENVTIETypeLetter,ENVTIELetter)AddDetail(iLayoutSheetName,oSheet)); \
} \
HRESULT __stdcall  ENVTIEName::get_ActiveSheet(CATIALayout2DSheet *& oSheet) \
{ \
return (ENVTIECALL(CATIALayout2DSheets,ENVTIETypeLetter,ENVTIELetter)get_ActiveSheet(oSheet)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIALayout2DSheets,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIALayout2DSheet *& oLayoutSheet) \
{ \
return (ENVTIECALL(CATIALayout2DSheets,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oLayoutSheet)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIALayout2DSheets,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIALayout2DSheets,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIALayout2DSheets,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIALayout2DSheets,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIALayout2DSheets,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIALayout2DSheets,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIALayout2DSheets(classe)    TIECATIALayout2DSheets##classe


/* Common methods inside a TIE */
#define common_TIE_CATIALayout2DSheets(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIALayout2DSheets, classe) \
 \
 \
CATImplementTIEMethods(CATIALayout2DSheets, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIALayout2DSheets, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIALayout2DSheets, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIALayout2DSheets, classe) \
 \
HRESULT __stdcall  TIECATIALayout2DSheets##classe::Add(const CATBSTR & iLayoutSheetName, CATIALayout2DSheet *& oNewLayoutSheet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iLayoutSheetName,&oNewLayoutSheet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iLayoutSheetName,oNewLayoutSheet); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iLayoutSheetName,&oNewLayoutSheet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheets##classe::AddDetail(const CATBSTR & iLayoutSheetName, CATIALayout2DSheet *& oSheet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iLayoutSheetName,&oSheet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddDetail(iLayoutSheetName,oSheet); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iLayoutSheetName,&oSheet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheets##classe::get_ActiveSheet(CATIALayout2DSheet *& oSheet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oSheet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ActiveSheet(oSheet); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oSheet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheets##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheets##classe::Item(const CATVariant & iIndex, CATIALayout2DSheet *& oLayoutSheet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iIndex,&oLayoutSheet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oLayoutSheet); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iIndex,&oLayoutSheet); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALayout2DSheets##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALayout2DSheets##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALayout2DSheets##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALayout2DSheets##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALayout2DSheets##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALayout2DSheets##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIALayout2DSheets(classe) \
 \
 \
declare_TIE_CATIALayout2DSheets(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIALayout2DSheets##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIALayout2DSheets,"CATIALayout2DSheets",CATIALayout2DSheets::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIALayout2DSheets(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIALayout2DSheets, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIALayout2DSheets##classe(classe::MetaObject(),CATIALayout2DSheets::MetaObject(),(void *)CreateTIECATIALayout2DSheets##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIALayout2DSheets(classe) \
 \
 \
declare_TIE_CATIALayout2DSheets(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIALayout2DSheets##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIALayout2DSheets,"CATIALayout2DSheets",CATIALayout2DSheets::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIALayout2DSheets(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIALayout2DSheets, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIALayout2DSheets##classe(classe::MetaObject(),CATIALayout2DSheets::MetaObject(),(void *)CreateTIECATIALayout2DSheets##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIALayout2DSheets(classe) TIE_CATIALayout2DSheets(classe)
#else
#define BOA_CATIALayout2DSheets(classe) CATImplementBOA(CATIALayout2DSheets, classe)
#endif

#endif
