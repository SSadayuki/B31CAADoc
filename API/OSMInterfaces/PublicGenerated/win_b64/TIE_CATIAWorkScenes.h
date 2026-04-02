#ifndef __TIE_CATIAWorkScenes
#define __TIE_CATIAWorkScenes

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAWorkScenes.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAWorkScenes */
#define declare_TIE_CATIAWorkScenes(classe) \
 \
 \
class TIECATIAWorkScenes##classe : public CATIAWorkScenes \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAWorkScenes, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddNewScene(const CATBSTR & iName, CATIAProduct * iReferenceProduct, CATIAWorkScene *& oNewScene); \
      virtual HRESULT __stdcall AddCopyScene(const CATBSTR & iName, CATIAWorkScene * iReferenceScene, CATIAWorkScene *& oNewScene); \
      virtual HRESULT __stdcall Remove(CATIAWorkScene * iScene); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAWorkScenes(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddNewScene(const CATBSTR & iName, CATIAProduct * iReferenceProduct, CATIAWorkScene *& oNewScene); \
virtual HRESULT __stdcall AddCopyScene(const CATBSTR & iName, CATIAWorkScene * iReferenceScene, CATIAWorkScene *& oNewScene); \
virtual HRESULT __stdcall Remove(CATIAWorkScene * iScene); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAWorkScenes(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddNewScene(const CATBSTR & iName, CATIAProduct * iReferenceProduct, CATIAWorkScene *& oNewScene) \
{ \
return (ENVTIECALL(CATIAWorkScenes,ENVTIETypeLetter,ENVTIELetter)AddNewScene(iName,iReferenceProduct,oNewScene)); \
} \
HRESULT __stdcall  ENVTIEName::AddCopyScene(const CATBSTR & iName, CATIAWorkScene * iReferenceScene, CATIAWorkScene *& oNewScene) \
{ \
return (ENVTIECALL(CATIAWorkScenes,ENVTIETypeLetter,ENVTIELetter)AddCopyScene(iName,iReferenceScene,oNewScene)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(CATIAWorkScene * iScene) \
{ \
return (ENVTIECALL(CATIAWorkScenes,ENVTIETypeLetter,ENVTIELetter)Remove(iScene)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAWorkScenes,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAWorkScenes,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAWorkScenes,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAWorkScenes,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAWorkScenes,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAWorkScenes,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAWorkScenes(classe)    TIECATIAWorkScenes##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAWorkScenes(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAWorkScenes, classe) \
 \
 \
CATImplementTIEMethods(CATIAWorkScenes, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAWorkScenes, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAWorkScenes, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAWorkScenes, classe) \
 \
HRESULT __stdcall  TIECATIAWorkScenes##classe::AddNewScene(const CATBSTR & iName, CATIAProduct * iReferenceProduct, CATIAWorkScene *& oNewScene) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iName,&iReferenceProduct,&oNewScene); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewScene(iName,iReferenceProduct,oNewScene); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iName,&iReferenceProduct,&oNewScene); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWorkScenes##classe::AddCopyScene(const CATBSTR & iName, CATIAWorkScene * iReferenceScene, CATIAWorkScene *& oNewScene) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iName,&iReferenceScene,&oNewScene); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddCopyScene(iName,iReferenceScene,oNewScene); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iName,&iReferenceScene,&oNewScene); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWorkScenes##classe::Remove(CATIAWorkScene * iScene) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iScene); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iScene); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iScene); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAWorkScenes##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAWorkScenes##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAWorkScenes##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAWorkScenes##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAWorkScenes##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAWorkScenes##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAWorkScenes(classe) \
 \
 \
declare_TIE_CATIAWorkScenes(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAWorkScenes##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAWorkScenes,"CATIAWorkScenes",CATIAWorkScenes::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAWorkScenes(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAWorkScenes, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAWorkScenes##classe(classe::MetaObject(),CATIAWorkScenes::MetaObject(),(void *)CreateTIECATIAWorkScenes##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAWorkScenes(classe) \
 \
 \
declare_TIE_CATIAWorkScenes(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAWorkScenes##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAWorkScenes,"CATIAWorkScenes",CATIAWorkScenes::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAWorkScenes(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAWorkScenes, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAWorkScenes##classe(classe::MetaObject(),CATIAWorkScenes::MetaObject(),(void *)CreateTIECATIAWorkScenes##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAWorkScenes(classe) TIE_CATIAWorkScenes(classe)
#else
#define BOA_CATIAWorkScenes(classe) CATImplementBOA(CATIAWorkScenes, classe)
#endif

#endif
