#ifndef __TIE_CATIAScene
#define __TIE_CATIAScene

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAScene.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAScene */
#define declare_TIE_CATIAScene(classe) \
 \
 \
class TIECATIAScene##classe : public CATIAScene \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAScene, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Type(CatSceneType & oType); \
      virtual HRESULT __stdcall ExistsInScene(CATIAProduct * iProduct, CAT_VARIANT_BOOL & oExistsInScene); \
      virtual HRESULT __stdcall GetSceneProductData(CATIAProduct * iProduct, CATIASceneProduct *& oSceneProductData); \
      virtual HRESULT __stdcall Copy(CatSceneType iType, CATIAScene *& oProductScene); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAScene(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Type(CatSceneType & oType); \
virtual HRESULT __stdcall ExistsInScene(CATIAProduct * iProduct, CAT_VARIANT_BOOL & oExistsInScene); \
virtual HRESULT __stdcall GetSceneProductData(CATIAProduct * iProduct, CATIASceneProduct *& oSceneProductData); \
virtual HRESULT __stdcall Copy(CatSceneType iType, CATIAScene *& oProductScene); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAScene(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Type(CatSceneType & oType) \
{ \
return (ENVTIECALL(CATIAScene,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::ExistsInScene(CATIAProduct * iProduct, CAT_VARIANT_BOOL & oExistsInScene) \
{ \
return (ENVTIECALL(CATIAScene,ENVTIETypeLetter,ENVTIELetter)ExistsInScene(iProduct,oExistsInScene)); \
} \
HRESULT __stdcall  ENVTIEName::GetSceneProductData(CATIAProduct * iProduct, CATIASceneProduct *& oSceneProductData) \
{ \
return (ENVTIECALL(CATIAScene,ENVTIETypeLetter,ENVTIELetter)GetSceneProductData(iProduct,oSceneProductData)); \
} \
HRESULT __stdcall  ENVTIEName::Copy(CatSceneType iType, CATIAScene *& oProductScene) \
{ \
return (ENVTIECALL(CATIAScene,ENVTIETypeLetter,ENVTIELetter)Copy(iType,oProductScene)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAScene,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAScene,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAScene,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAScene,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAScene,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAScene(classe)    TIECATIAScene##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAScene(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAScene, classe) \
 \
 \
CATImplementTIEMethods(CATIAScene, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAScene, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAScene, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAScene, classe) \
 \
HRESULT __stdcall  TIECATIAScene##classe::get_Type(CatSceneType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAScene##classe::ExistsInScene(CATIAProduct * iProduct, CAT_VARIANT_BOOL & oExistsInScene) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iProduct,&oExistsInScene); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExistsInScene(iProduct,oExistsInScene); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iProduct,&oExistsInScene); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAScene##classe::GetSceneProductData(CATIAProduct * iProduct, CATIASceneProduct *& oSceneProductData) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iProduct,&oSceneProductData); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSceneProductData(iProduct,oSceneProductData); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iProduct,&oSceneProductData); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAScene##classe::Copy(CatSceneType iType, CATIAScene *& oProductScene) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iType,&oProductScene); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Copy(iType,oProductScene); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iType,&oProductScene); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAScene##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAScene##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAScene##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAScene##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAScene##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAScene(classe) \
 \
 \
declare_TIE_CATIAScene(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAScene##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAScene,"CATIAScene",CATIAScene::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAScene(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAScene, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAScene##classe(classe::MetaObject(),CATIAScene::MetaObject(),(void *)CreateTIECATIAScene##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAScene(classe) \
 \
 \
declare_TIE_CATIAScene(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAScene##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAScene,"CATIAScene",CATIAScene::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAScene(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAScene, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAScene##classe(classe::MetaObject(),CATIAScene::MetaObject(),(void *)CreateTIECATIAScene##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAScene(classe) TIE_CATIAScene(classe)
#else
#define BOA_CATIAScene(classe) CATImplementBOA(CATIAScene, classe)
#endif

#endif
