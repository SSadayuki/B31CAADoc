#ifndef __TIE_CATIADrawingSheets
#define __TIE_CATIADrawingSheets

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADrawingSheets.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADrawingSheets */
#define declare_TIE_CATIADrawingSheets(classe) \
 \
 \
class TIECATIADrawingSheets##classe : public CATIADrawingSheets \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADrawingSheets, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Add(const CATBSTR & iDrawingSheetName, CATIADrawingSheet *& oNewDrawingSheet); \
      virtual HRESULT __stdcall AddDetail(const CATBSTR & iDrawingSheetName, CATIADrawingSheet *& oNewDrawingSheet); \
      virtual HRESULT __stdcall get_ActiveSheet(CATIADrawingSheet *& oSheet); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIADrawingSheet *& oDrawingSheet); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIADrawingSheets(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Add(const CATBSTR & iDrawingSheetName, CATIADrawingSheet *& oNewDrawingSheet); \
virtual HRESULT __stdcall AddDetail(const CATBSTR & iDrawingSheetName, CATIADrawingSheet *& oNewDrawingSheet); \
virtual HRESULT __stdcall get_ActiveSheet(CATIADrawingSheet *& oSheet); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIADrawingSheet *& oDrawingSheet); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIADrawingSheets(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Add(const CATBSTR & iDrawingSheetName, CATIADrawingSheet *& oNewDrawingSheet) \
{ \
return (ENVTIECALL(CATIADrawingSheets,ENVTIETypeLetter,ENVTIELetter)Add(iDrawingSheetName,oNewDrawingSheet)); \
} \
HRESULT __stdcall  ENVTIEName::AddDetail(const CATBSTR & iDrawingSheetName, CATIADrawingSheet *& oNewDrawingSheet) \
{ \
return (ENVTIECALL(CATIADrawingSheets,ENVTIETypeLetter,ENVTIELetter)AddDetail(iDrawingSheetName,oNewDrawingSheet)); \
} \
HRESULT __stdcall  ENVTIEName::get_ActiveSheet(CATIADrawingSheet *& oSheet) \
{ \
return (ENVTIECALL(CATIADrawingSheets,ENVTIETypeLetter,ENVTIELetter)get_ActiveSheet(oSheet)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIADrawingSheets,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIADrawingSheet *& oDrawingSheet) \
{ \
return (ENVTIECALL(CATIADrawingSheets,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oDrawingSheet)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADrawingSheets,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADrawingSheets,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIADrawingSheets,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIADrawingSheets,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIADrawingSheets,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIADrawingSheets,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADrawingSheets(classe)    TIECATIADrawingSheets##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADrawingSheets(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADrawingSheets, classe) \
 \
 \
CATImplementTIEMethods(CATIADrawingSheets, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADrawingSheets, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADrawingSheets, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADrawingSheets, classe) \
 \
HRESULT __stdcall  TIECATIADrawingSheets##classe::Add(const CATBSTR & iDrawingSheetName, CATIADrawingSheet *& oNewDrawingSheet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iDrawingSheetName,&oNewDrawingSheet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iDrawingSheetName,oNewDrawingSheet); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iDrawingSheetName,&oNewDrawingSheet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheets##classe::AddDetail(const CATBSTR & iDrawingSheetName, CATIADrawingSheet *& oNewDrawingSheet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iDrawingSheetName,&oNewDrawingSheet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddDetail(iDrawingSheetName,oNewDrawingSheet); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iDrawingSheetName,&oNewDrawingSheet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheets##classe::get_ActiveSheet(CATIADrawingSheet *& oSheet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oSheet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ActiveSheet(oSheet); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oSheet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheets##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheets##classe::Item(const CATVariant & iIndex, CATIADrawingSheet *& oDrawingSheet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iIndex,&oDrawingSheet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oDrawingSheet); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iIndex,&oDrawingSheet); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingSheets##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingSheets##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingSheets##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingSheets##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingSheets##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingSheets##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADrawingSheets(classe) \
 \
 \
declare_TIE_CATIADrawingSheets(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingSheets##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingSheets,"CATIADrawingSheets",CATIADrawingSheets::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingSheets(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADrawingSheets, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingSheets##classe(classe::MetaObject(),CATIADrawingSheets::MetaObject(),(void *)CreateTIECATIADrawingSheets##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADrawingSheets(classe) \
 \
 \
declare_TIE_CATIADrawingSheets(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingSheets##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingSheets,"CATIADrawingSheets",CATIADrawingSheets::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingSheets(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADrawingSheets, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingSheets##classe(classe::MetaObject(),CATIADrawingSheets::MetaObject(),(void *)CreateTIECATIADrawingSheets##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADrawingSheets(classe) TIE_CATIADrawingSheets(classe)
#else
#define BOA_CATIADrawingSheets(classe) CATImplementBOA(CATIADrawingSheets, classe)
#endif

#endif
