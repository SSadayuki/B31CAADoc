#ifndef __TIE_CATIACaptures
#define __TIE_CATIACaptures

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIACaptures.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIACaptures */
#define declare_TIE_CATIACaptures(classe) \
 \
 \
class TIECATIACaptures##classe : public CATIACaptures \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIACaptures, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIABase *& oCapture); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIACaptures(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIABase *& oCapture); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIACaptures(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIABase *& oCapture) \
{ \
return (ENVTIECALL(CATIACaptures,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oCapture)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIACaptures,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIACaptures,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIACaptures,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIACaptures,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIACaptures,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIACaptures,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIACaptures(classe)    TIECATIACaptures##classe


/* Common methods inside a TIE */
#define common_TIE_CATIACaptures(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIACaptures, classe) \
 \
 \
CATImplementTIEMethods(CATIACaptures, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIACaptures, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIACaptures, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIACaptures, classe) \
 \
HRESULT __stdcall  TIECATIACaptures##classe::Item(const CATVariant & iIndex, CATIABase *& oCapture) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oCapture)); \
} \
HRESULT  __stdcall  TIECATIACaptures##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIACaptures##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIACaptures##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  TIECATIACaptures##classe::get_Name(CATBSTR & oName) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName)); \
} \
HRESULT  __stdcall  TIECATIACaptures##classe::get_Count(CATLONG & oNbItems) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems)); \
} \
HRESULT  __stdcall  TIECATIACaptures##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIACaptures(classe) \
 \
 \
declare_TIE_CATIACaptures(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIACaptures##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIACaptures,"CATIACaptures",CATIACaptures::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIACaptures(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIACaptures, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIACaptures##classe(classe::MetaObject(),CATIACaptures::MetaObject(),(void *)CreateTIECATIACaptures##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIACaptures(classe) \
 \
 \
declare_TIE_CATIACaptures(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIACaptures##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIACaptures,"CATIACaptures",CATIACaptures::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIACaptures(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIACaptures, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIACaptures##classe(classe::MetaObject(),CATIACaptures::MetaObject(),(void *)CreateTIECATIACaptures##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIACaptures(classe) TIE_CATIACaptures(classe)
#else
#define BOA_CATIACaptures(classe) CATImplementBOA(CATIACaptures, classe)
#endif

#endif
