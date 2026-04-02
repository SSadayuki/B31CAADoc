#ifndef __TIE_CATIAScenes
#define __TIE_CATIAScenes

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAScenes.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAScenes */
#define declare_TIE_CATIAScenes(classe) \
 \
 \
class TIECATIAScenes##classe : public CATIAScenes \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAScenes, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddProductScenePartial(const CATBSTR & iName, const CATSafeArrayVariant & iReferenceProducts, CATIAScene *& oProductScene); \
      virtual HRESULT __stdcall AddProductSceneFull(const CATBSTR & iName, const CATSafeArrayVariant & iReferenceProducts, CATIAScene *& oProductScene); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAScene *& oProductScene); \
      virtual HRESULT __stdcall Remove(CATIAScene * iProductScene); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAScenes(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddProductScenePartial(const CATBSTR & iName, const CATSafeArrayVariant & iReferenceProducts, CATIAScene *& oProductScene); \
virtual HRESULT __stdcall AddProductSceneFull(const CATBSTR & iName, const CATSafeArrayVariant & iReferenceProducts, CATIAScene *& oProductScene); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAScene *& oProductScene); \
virtual HRESULT __stdcall Remove(CATIAScene * iProductScene); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAScenes(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddProductScenePartial(const CATBSTR & iName, const CATSafeArrayVariant & iReferenceProducts, CATIAScene *& oProductScene) \
{ \
return (ENVTIECALL(CATIAScenes,ENVTIETypeLetter,ENVTIELetter)AddProductScenePartial(iName,iReferenceProducts,oProductScene)); \
} \
HRESULT __stdcall  ENVTIEName::AddProductSceneFull(const CATBSTR & iName, const CATSafeArrayVariant & iReferenceProducts, CATIAScene *& oProductScene) \
{ \
return (ENVTIECALL(CATIAScenes,ENVTIETypeLetter,ENVTIELetter)AddProductSceneFull(iName,iReferenceProducts,oProductScene)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAScene *& oProductScene) \
{ \
return (ENVTIECALL(CATIAScenes,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oProductScene)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(CATIAScene * iProductScene) \
{ \
return (ENVTIECALL(CATIAScenes,ENVTIETypeLetter,ENVTIELetter)Remove(iProductScene)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAScenes,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAScenes,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAScenes,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAScenes,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAScenes,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAScenes,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAScenes(classe)    TIECATIAScenes##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAScenes(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAScenes, classe) \
 \
 \
CATImplementTIEMethods(CATIAScenes, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAScenes, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAScenes, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAScenes, classe) \
 \
HRESULT __stdcall  TIECATIAScenes##classe::AddProductScenePartial(const CATBSTR & iName, const CATSafeArrayVariant & iReferenceProducts, CATIAScene *& oProductScene) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iName,&iReferenceProducts,&oProductScene); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddProductScenePartial(iName,iReferenceProducts,oProductScene); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iName,&iReferenceProducts,&oProductScene); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAScenes##classe::AddProductSceneFull(const CATBSTR & iName, const CATSafeArrayVariant & iReferenceProducts, CATIAScene *& oProductScene) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iName,&iReferenceProducts,&oProductScene); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddProductSceneFull(iName,iReferenceProducts,oProductScene); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iName,&iReferenceProducts,&oProductScene); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAScenes##classe::Item(const CATVariant & iIndex, CATIAScene *& oProductScene) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex,&oProductScene); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oProductScene); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex,&oProductScene); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAScenes##classe::Remove(CATIAScene * iProductScene) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iProductScene); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iProductScene); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iProductScene); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAScenes##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAScenes##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAScenes##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAScenes##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAScenes##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAScenes##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAScenes(classe) \
 \
 \
declare_TIE_CATIAScenes(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAScenes##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAScenes,"CATIAScenes",CATIAScenes::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAScenes(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAScenes, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAScenes##classe(classe::MetaObject(),CATIAScenes::MetaObject(),(void *)CreateTIECATIAScenes##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAScenes(classe) \
 \
 \
declare_TIE_CATIAScenes(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAScenes##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAScenes,"CATIAScenes",CATIAScenes::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAScenes(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAScenes, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAScenes##classe(classe::MetaObject(),CATIAScenes::MetaObject(),(void *)CreateTIECATIAScenes##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAScenes(classe) TIE_CATIAScenes(classe)
#else
#define BOA_CATIAScenes(classe) CATImplementBOA(CATIAScenes, classe)
#endif

#endif
