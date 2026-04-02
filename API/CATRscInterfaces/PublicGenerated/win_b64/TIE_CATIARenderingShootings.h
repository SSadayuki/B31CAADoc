#ifndef __TIE_CATIARenderingShootings
#define __TIE_CATIARenderingShootings

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIARenderingShootings.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIARenderingShootings */
#define declare_TIE_CATIARenderingShootings(classe) \
 \
 \
class TIECATIARenderingShootings##classe : public CATIARenderingShootings \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIARenderingShootings, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIARenderingShooting *& oShooting); \
      virtual HRESULT __stdcall Add(CATIARenderingShooting *& oShooting); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT __stdcall RemoveAll(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIARenderingShootings(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIARenderingShooting *& oShooting); \
virtual HRESULT __stdcall Add(CATIARenderingShooting *& oShooting); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT __stdcall RemoveAll(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIARenderingShootings(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIARenderingShooting *& oShooting) \
{ \
return (ENVTIECALL(CATIARenderingShootings,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oShooting)); \
} \
HRESULT __stdcall  ENVTIEName::Add(CATIARenderingShooting *& oShooting) \
{ \
return (ENVTIECALL(CATIARenderingShootings,ENVTIETypeLetter,ENVTIELetter)Add(oShooting)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIARenderingShootings,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAll() \
{ \
return (ENVTIECALL(CATIARenderingShootings,ENVTIETypeLetter,ENVTIELetter)RemoveAll()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIARenderingShootings,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIARenderingShootings,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIARenderingShootings,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIARenderingShootings,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIARenderingShootings,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIARenderingShootings,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIARenderingShootings(classe)    TIECATIARenderingShootings##classe


/* Common methods inside a TIE */
#define common_TIE_CATIARenderingShootings(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIARenderingShootings, classe) \
 \
 \
CATImplementTIEMethods(CATIARenderingShootings, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIARenderingShootings, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIARenderingShootings, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIARenderingShootings, classe) \
 \
HRESULT __stdcall  TIECATIARenderingShootings##classe::Item(const CATVariant & iIndex, CATIARenderingShooting *& oShooting) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iIndex,&oShooting); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oShooting); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iIndex,&oShooting); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShootings##classe::Add(CATIARenderingShooting *& oShooting) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oShooting); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(oShooting); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oShooting); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShootings##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShootings##classe::RemoveAll() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAll(); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingShootings##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingShootings##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingShootings##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingShootings##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingShootings##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingShootings##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIARenderingShootings(classe) \
 \
 \
declare_TIE_CATIARenderingShootings(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARenderingShootings##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARenderingShootings,"CATIARenderingShootings",CATIARenderingShootings::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARenderingShootings(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIARenderingShootings, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARenderingShootings##classe(classe::MetaObject(),CATIARenderingShootings::MetaObject(),(void *)CreateTIECATIARenderingShootings##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIARenderingShootings(classe) \
 \
 \
declare_TIE_CATIARenderingShootings(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARenderingShootings##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARenderingShootings,"CATIARenderingShootings",CATIARenderingShootings::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARenderingShootings(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIARenderingShootings, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARenderingShootings##classe(classe::MetaObject(),CATIARenderingShootings::MetaObject(),(void *)CreateTIECATIARenderingShootings##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIARenderingShootings(classe) TIE_CATIARenderingShootings(classe)
#else
#define BOA_CATIARenderingShootings(classe) CATImplementBOA(CATIARenderingShootings, classe)
#endif

#endif
