#ifndef __TIE_CATIAMaterialFamilies
#define __TIE_CATIAMaterialFamilies

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAMaterialFamilies.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAMaterialFamilies */
#define declare_TIE_CATIAMaterialFamilies(classe) \
 \
 \
class TIECATIAMaterialFamilies##classe : public CATIAMaterialFamilies \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAMaterialFamilies, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAMaterialFamily *& oMaterialFamily); \
      virtual HRESULT __stdcall Add(CATIAMaterialFamily *& oMaterialFamily); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAMaterialFamilies(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAMaterialFamily *& oMaterialFamily); \
virtual HRESULT __stdcall Add(CATIAMaterialFamily *& oMaterialFamily); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAMaterialFamilies(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAMaterialFamily *& oMaterialFamily) \
{ \
return (ENVTIECALL(CATIAMaterialFamilies,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oMaterialFamily)); \
} \
HRESULT __stdcall  ENVTIEName::Add(CATIAMaterialFamily *& oMaterialFamily) \
{ \
return (ENVTIECALL(CATIAMaterialFamilies,ENVTIETypeLetter,ENVTIELetter)Add(oMaterialFamily)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAMaterialFamilies,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAMaterialFamilies,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAMaterialFamilies,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAMaterialFamilies,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAMaterialFamilies,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAMaterialFamilies,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAMaterialFamilies,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAMaterialFamilies(classe)    TIECATIAMaterialFamilies##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAMaterialFamilies(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAMaterialFamilies, classe) \
 \
 \
CATImplementTIEMethods(CATIAMaterialFamilies, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAMaterialFamilies, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAMaterialFamilies, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAMaterialFamilies, classe) \
 \
HRESULT __stdcall  TIECATIAMaterialFamilies##classe::Item(const CATVariant & iIndex, CATIAMaterialFamily *& oMaterialFamily) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iIndex,&oMaterialFamily); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oMaterialFamily); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iIndex,&oMaterialFamily); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMaterialFamilies##classe::Add(CATIAMaterialFamily *& oMaterialFamily) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oMaterialFamily); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(oMaterialFamily); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oMaterialFamily); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMaterialFamilies##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMaterialFamilies##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMaterialFamilies##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMaterialFamilies##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMaterialFamilies##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMaterialFamilies##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMaterialFamilies##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAMaterialFamilies(classe) \
 \
 \
declare_TIE_CATIAMaterialFamilies(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMaterialFamilies##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMaterialFamilies,"CATIAMaterialFamilies",CATIAMaterialFamilies::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMaterialFamilies(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAMaterialFamilies, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMaterialFamilies##classe(classe::MetaObject(),CATIAMaterialFamilies::MetaObject(),(void *)CreateTIECATIAMaterialFamilies##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAMaterialFamilies(classe) \
 \
 \
declare_TIE_CATIAMaterialFamilies(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMaterialFamilies##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMaterialFamilies,"CATIAMaterialFamilies",CATIAMaterialFamilies::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMaterialFamilies(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAMaterialFamilies, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMaterialFamilies##classe(classe::MetaObject(),CATIAMaterialFamilies::MetaObject(),(void *)CreateTIECATIAMaterialFamilies##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAMaterialFamilies(classe) TIE_CATIAMaterialFamilies(classe)
#else
#define BOA_CATIAMaterialFamilies(classe) CATImplementBOA(CATIAMaterialFamilies, classe)
#endif

#endif
