#ifndef __TIE_CATIASchListOfObjects
#define __TIE_CATIASchListOfObjects

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchListOfObjects.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchListOfObjects */
#define declare_TIE_CATIASchListOfObjects(classe) \
 \
 \
class TIECATIASchListOfObjects##classe : public CATIASchListOfObjects \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchListOfObjects, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT __stdcall Item(CATLONG iIndex, const CATBSTR & iInterfaceName, CATIABase *& oObject); \
      virtual HRESULT __stdcall Append(CATIABase * iObject); \
      virtual HRESULT __stdcall RemoveByIndex(CATLONG iIndex); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchListOfObjects(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT __stdcall Item(CATLONG iIndex, const CATBSTR & iInterfaceName, CATIABase *& oObject); \
virtual HRESULT __stdcall Append(CATIABase * iObject); \
virtual HRESULT __stdcall RemoveByIndex(CATLONG iIndex); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchListOfObjects(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIASchListOfObjects,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT __stdcall  ENVTIEName::Item(CATLONG iIndex, const CATBSTR & iInterfaceName, CATIABase *& oObject) \
{ \
return (ENVTIECALL(CATIASchListOfObjects,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,iInterfaceName,oObject)); \
} \
HRESULT __stdcall  ENVTIEName::Append(CATIABase * iObject) \
{ \
return (ENVTIECALL(CATIASchListOfObjects,ENVTIETypeLetter,ENVTIELetter)Append(iObject)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveByIndex(CATLONG iIndex) \
{ \
return (ENVTIECALL(CATIASchListOfObjects,ENVTIETypeLetter,ENVTIELetter)RemoveByIndex(iIndex)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchListOfObjects,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchListOfObjects,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchListOfObjects,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchListOfObjects,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchListOfObjects,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchListOfObjects(classe)    TIECATIASchListOfObjects##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchListOfObjects(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchListOfObjects, classe) \
 \
 \
CATImplementTIEMethods(CATIASchListOfObjects, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchListOfObjects, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchListOfObjects, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchListOfObjects, classe) \
 \
HRESULT __stdcall  TIECATIASchListOfObjects##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oNbItems); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchListOfObjects##classe::Item(CATLONG iIndex, const CATBSTR & iInterfaceName, CATIABase *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex,&iInterfaceName,&oObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,iInterfaceName,oObject); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex,&iInterfaceName,&oObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchListOfObjects##classe::Append(CATIABase * iObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Append(iObject); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchListOfObjects##classe::RemoveByIndex(CATLONG iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveByIndex(iIndex); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchListOfObjects##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchListOfObjects##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchListOfObjects##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchListOfObjects##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchListOfObjects##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchListOfObjects(classe) \
 \
 \
declare_TIE_CATIASchListOfObjects(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchListOfObjects##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchListOfObjects,"CATIASchListOfObjects",CATIASchListOfObjects::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchListOfObjects(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchListOfObjects, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchListOfObjects##classe(classe::MetaObject(),CATIASchListOfObjects::MetaObject(),(void *)CreateTIECATIASchListOfObjects##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchListOfObjects(classe) \
 \
 \
declare_TIE_CATIASchListOfObjects(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchListOfObjects##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchListOfObjects,"CATIASchListOfObjects",CATIASchListOfObjects::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchListOfObjects(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchListOfObjects, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchListOfObjects##classe(classe::MetaObject(),CATIASchListOfObjects::MetaObject(),(void *)CreateTIECATIASchListOfObjects##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchListOfObjects(classe) TIE_CATIASchListOfObjects(classe)
#else
#define BOA_CATIASchListOfObjects(classe) CATImplementBOA(CATIASchListOfObjects, classe)
#endif

#endif
