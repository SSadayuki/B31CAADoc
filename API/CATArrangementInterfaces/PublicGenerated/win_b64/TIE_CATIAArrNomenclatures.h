#ifndef __TIE_CATIAArrNomenclatures
#define __TIE_CATIAArrNomenclatures

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAArrNomenclatures.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAArrNomenclatures */
#define declare_TIE_CATIAArrNomenclatures(classe) \
 \
 \
class TIECATIAArrNomenclatures##classe : public CATIAArrNomenclatures \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAArrNomenclatures, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddUserNomenclature(const CATBSTR & iName, const CATBSTR & iIconName, const CATBSTR & iClassType, const CATBSTR & iSuperType, CATIAArrNomenclature *& oUserNomenclature); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAArrNomenclature *& oUserNomenclature); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAArrNomenclatures(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddUserNomenclature(const CATBSTR & iName, const CATBSTR & iIconName, const CATBSTR & iClassType, const CATBSTR & iSuperType, CATIAArrNomenclature *& oUserNomenclature); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAArrNomenclature *& oUserNomenclature); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAArrNomenclatures(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddUserNomenclature(const CATBSTR & iName, const CATBSTR & iIconName, const CATBSTR & iClassType, const CATBSTR & iSuperType, CATIAArrNomenclature *& oUserNomenclature) \
{ \
return (ENVTIECALL(CATIAArrNomenclatures,ENVTIETypeLetter,ENVTIELetter)AddUserNomenclature(iName,iIconName,iClassType,iSuperType,oUserNomenclature)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAArrNomenclature *& oUserNomenclature) \
{ \
return (ENVTIECALL(CATIAArrNomenclatures,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oUserNomenclature)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAArrNomenclatures,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAArrNomenclatures,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAArrNomenclatures,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAArrNomenclatures,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAArrNomenclatures,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAArrNomenclatures,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAArrNomenclatures(classe)    TIECATIAArrNomenclatures##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAArrNomenclatures(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAArrNomenclatures, classe) \
 \
 \
CATImplementTIEMethods(CATIAArrNomenclatures, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAArrNomenclatures, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAArrNomenclatures, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAArrNomenclatures, classe) \
 \
HRESULT __stdcall  TIECATIAArrNomenclatures##classe::AddUserNomenclature(const CATBSTR & iName, const CATBSTR & iIconName, const CATBSTR & iClassType, const CATBSTR & iSuperType, CATIAArrNomenclature *& oUserNomenclature) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iName,&iIconName,&iClassType,&iSuperType,&oUserNomenclature); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddUserNomenclature(iName,iIconName,iClassType,iSuperType,oUserNomenclature); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iName,&iIconName,&iClassType,&iSuperType,&oUserNomenclature); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrNomenclatures##classe::Item(const CATVariant & iIndex, CATIAArrNomenclature *& oUserNomenclature) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex,&oUserNomenclature); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oUserNomenclature); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex,&oUserNomenclature); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrNomenclatures##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrNomenclatures##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrNomenclatures##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrNomenclatures##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrNomenclatures##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrNomenclatures##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAArrNomenclatures(classe) \
 \
 \
declare_TIE_CATIAArrNomenclatures(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrNomenclatures##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrNomenclatures,"CATIAArrNomenclatures",CATIAArrNomenclatures::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrNomenclatures(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAArrNomenclatures, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrNomenclatures##classe(classe::MetaObject(),CATIAArrNomenclatures::MetaObject(),(void *)CreateTIECATIAArrNomenclatures##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAArrNomenclatures(classe) \
 \
 \
declare_TIE_CATIAArrNomenclatures(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrNomenclatures##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrNomenclatures,"CATIAArrNomenclatures",CATIAArrNomenclatures::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrNomenclatures(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAArrNomenclatures, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrNomenclatures##classe(classe::MetaObject(),CATIAArrNomenclatures::MetaObject(),(void *)CreateTIECATIAArrNomenclatures##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAArrNomenclatures(classe) TIE_CATIAArrNomenclatures(classe)
#else
#define BOA_CATIAArrNomenclatures(classe) CATImplementBOA(CATIAArrNomenclatures, classe)
#endif

#endif
