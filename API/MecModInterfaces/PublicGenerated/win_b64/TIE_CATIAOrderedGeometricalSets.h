#ifndef __TIE_CATIAOrderedGeometricalSets
#define __TIE_CATIAOrderedGeometricalSets

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAOrderedGeometricalSets.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAOrderedGeometricalSets */
#define declare_TIE_CATIAOrderedGeometricalSets(classe) \
 \
 \
class TIECATIAOrderedGeometricalSets##classe : public CATIAOrderedGeometricalSets \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAOrderedGeometricalSets, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Add(CATIAOrderedGeometricalSet *& oOrderedGeometricalSet); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAOrderedGeometricalSet *& oOrderedGeometricalSet); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAOrderedGeometricalSets(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Add(CATIAOrderedGeometricalSet *& oOrderedGeometricalSet); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAOrderedGeometricalSet *& oOrderedGeometricalSet); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAOrderedGeometricalSets(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Add(CATIAOrderedGeometricalSet *& oOrderedGeometricalSet) \
{ \
return (ENVTIECALL(CATIAOrderedGeometricalSets,ENVTIETypeLetter,ENVTIELetter)Add(oOrderedGeometricalSet)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAOrderedGeometricalSet *& oOrderedGeometricalSet) \
{ \
return (ENVTIECALL(CATIAOrderedGeometricalSets,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oOrderedGeometricalSet)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAOrderedGeometricalSets,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAOrderedGeometricalSets,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAOrderedGeometricalSets,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAOrderedGeometricalSets,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAOrderedGeometricalSets,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAOrderedGeometricalSets,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAOrderedGeometricalSets(classe)    TIECATIAOrderedGeometricalSets##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAOrderedGeometricalSets(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAOrderedGeometricalSets, classe) \
 \
 \
CATImplementTIEMethods(CATIAOrderedGeometricalSets, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAOrderedGeometricalSets, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAOrderedGeometricalSets, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAOrderedGeometricalSets, classe) \
 \
HRESULT __stdcall  TIECATIAOrderedGeometricalSets##classe::Add(CATIAOrderedGeometricalSet *& oOrderedGeometricalSet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oOrderedGeometricalSet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(oOrderedGeometricalSet); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oOrderedGeometricalSet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOrderedGeometricalSets##classe::Item(const CATVariant & iIndex, CATIAOrderedGeometricalSet *& oOrderedGeometricalSet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex,&oOrderedGeometricalSet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oOrderedGeometricalSet); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex,&oOrderedGeometricalSet); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOrderedGeometricalSets##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOrderedGeometricalSets##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOrderedGeometricalSets##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOrderedGeometricalSets##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOrderedGeometricalSets##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOrderedGeometricalSets##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAOrderedGeometricalSets(classe) \
 \
 \
declare_TIE_CATIAOrderedGeometricalSets(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAOrderedGeometricalSets##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAOrderedGeometricalSets,"CATIAOrderedGeometricalSets",CATIAOrderedGeometricalSets::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAOrderedGeometricalSets(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAOrderedGeometricalSets, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAOrderedGeometricalSets##classe(classe::MetaObject(),CATIAOrderedGeometricalSets::MetaObject(),(void *)CreateTIECATIAOrderedGeometricalSets##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAOrderedGeometricalSets(classe) \
 \
 \
declare_TIE_CATIAOrderedGeometricalSets(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAOrderedGeometricalSets##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAOrderedGeometricalSets,"CATIAOrderedGeometricalSets",CATIAOrderedGeometricalSets::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAOrderedGeometricalSets(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAOrderedGeometricalSets, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAOrderedGeometricalSets##classe(classe::MetaObject(),CATIAOrderedGeometricalSets::MetaObject(),(void *)CreateTIECATIAOrderedGeometricalSets##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAOrderedGeometricalSets(classe) TIE_CATIAOrderedGeometricalSets(classe)
#else
#define BOA_CATIAOrderedGeometricalSets(classe) CATImplementBOA(CATIAOrderedGeometricalSets, classe)
#endif

#endif
