#ifndef __TIE_CATIASections
#define __TIE_CATIASections

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASections.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASections */
#define declare_TIE_CATIASections(classe) \
 \
 \
class TIECATIASections##classe : public CATIASections \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASections, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Add(CATIASection *& oSection); \
      virtual HRESULT __stdcall AddFromSel(CATIASection *& oSection); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIASection *& oSection); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIASections(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Add(CATIASection *& oSection); \
virtual HRESULT __stdcall AddFromSel(CATIASection *& oSection); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIASection *& oSection); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIASections(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Add(CATIASection *& oSection) \
{ \
return (ENVTIECALL(CATIASections,ENVTIETypeLetter,ENVTIELetter)Add(oSection)); \
} \
HRESULT __stdcall  ENVTIEName::AddFromSel(CATIASection *& oSection) \
{ \
return (ENVTIECALL(CATIASections,ENVTIETypeLetter,ENVTIELetter)AddFromSel(oSection)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIASection *& oSection) \
{ \
return (ENVTIECALL(CATIASections,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oSection)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIASections,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASections,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASections,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIASections,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIASections,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIASections,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIASections,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASections(classe)    TIECATIASections##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASections(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASections, classe) \
 \
 \
CATImplementTIEMethods(CATIASections, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASections, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASections, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASections, classe) \
 \
HRESULT __stdcall  TIECATIASections##classe::Add(CATIASection *& oSection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oSection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(oSection); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oSection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASections##classe::AddFromSel(CATIASection *& oSection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oSection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFromSel(oSection); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oSection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASections##classe::Item(const CATVariant & iIndex, CATIASection *& oSection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex,&oSection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oSection); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex,&oSection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASections##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASections##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASections##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASections##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASections##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASections##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASections##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASections(classe) \
 \
 \
declare_TIE_CATIASections(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASections##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASections,"CATIASections",CATIASections::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASections(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASections, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASections##classe(classe::MetaObject(),CATIASections::MetaObject(),(void *)CreateTIECATIASections##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASections(classe) \
 \
 \
declare_TIE_CATIASections(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASections##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASections,"CATIASections",CATIASections::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASections(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASections, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASections##classe(classe::MetaObject(),CATIASections::MetaObject(),(void *)CreateTIECATIASections##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASections(classe) TIE_CATIASections(classe)
#else
#define BOA_CATIASections(classe) CATImplementBOA(CATIASections, classe)
#endif

#endif
