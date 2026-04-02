#ifndef __TIE_CATIAResource
#define __TIE_CATIAResource

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAResource.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAResource */
#define declare_TIE_CATIAResource(classe) \
 \
 \
class TIECATIAResource##classe : public CATIAResource \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAResource, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetObject(const CATBSTR & iInterfaceName, CATIABase *& oObject); \
      virtual HRESULT __stdcall get_ChildrenTSAs(CATIAActivities *& oChildren); \
      virtual HRESULT __stdcall get_InputProducts(CATIAItems *& oInputProducts); \
      virtual HRESULT __stdcall get_OutputProducts(CATIAOutputs *& oOutputProducts); \
      virtual HRESULT __stdcall get_NextResources(CATIAResourceCollection *& oNextPRF); \
      virtual HRESULT __stdcall get_PreviousResources(CATIAResourceCollection *& oPreviousPRF); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAResource(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetObject(const CATBSTR & iInterfaceName, CATIABase *& oObject); \
virtual HRESULT __stdcall get_ChildrenTSAs(CATIAActivities *& oChildren); \
virtual HRESULT __stdcall get_InputProducts(CATIAItems *& oInputProducts); \
virtual HRESULT __stdcall get_OutputProducts(CATIAOutputs *& oOutputProducts); \
virtual HRESULT __stdcall get_NextResources(CATIAResourceCollection *& oNextPRF); \
virtual HRESULT __stdcall get_PreviousResources(CATIAResourceCollection *& oPreviousPRF); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAResource(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetObject(const CATBSTR & iInterfaceName, CATIABase *& oObject) \
{ \
return (ENVTIECALL(CATIAResource,ENVTIETypeLetter,ENVTIELetter)GetObject(iInterfaceName,oObject)); \
} \
HRESULT __stdcall  ENVTIEName::get_ChildrenTSAs(CATIAActivities *& oChildren) \
{ \
return (ENVTIECALL(CATIAResource,ENVTIETypeLetter,ENVTIELetter)get_ChildrenTSAs(oChildren)); \
} \
HRESULT __stdcall  ENVTIEName::get_InputProducts(CATIAItems *& oInputProducts) \
{ \
return (ENVTIECALL(CATIAResource,ENVTIETypeLetter,ENVTIELetter)get_InputProducts(oInputProducts)); \
} \
HRESULT __stdcall  ENVTIEName::get_OutputProducts(CATIAOutputs *& oOutputProducts) \
{ \
return (ENVTIECALL(CATIAResource,ENVTIETypeLetter,ENVTIELetter)get_OutputProducts(oOutputProducts)); \
} \
HRESULT __stdcall  ENVTIEName::get_NextResources(CATIAResourceCollection *& oNextPRF) \
{ \
return (ENVTIECALL(CATIAResource,ENVTIETypeLetter,ENVTIELetter)get_NextResources(oNextPRF)); \
} \
HRESULT __stdcall  ENVTIEName::get_PreviousResources(CATIAResourceCollection *& oPreviousPRF) \
{ \
return (ENVTIECALL(CATIAResource,ENVTIETypeLetter,ENVTIELetter)get_PreviousResources(oPreviousPRF)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAResource,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAResource,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAResource,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAResource,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAResource,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAResource(classe)    TIECATIAResource##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAResource(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAResource, classe) \
 \
 \
CATImplementTIEMethods(CATIAResource, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAResource, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAResource, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAResource, classe) \
 \
HRESULT __stdcall  TIECATIAResource##classe::GetObject(const CATBSTR & iInterfaceName, CATIABase *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iInterfaceName,&oObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetObject(iInterfaceName,oObject); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iInterfaceName,&oObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAResource##classe::get_ChildrenTSAs(CATIAActivities *& oChildren) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oChildren); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ChildrenTSAs(oChildren); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oChildren); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAResource##classe::get_InputProducts(CATIAItems *& oInputProducts) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oInputProducts); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InputProducts(oInputProducts); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oInputProducts); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAResource##classe::get_OutputProducts(CATIAOutputs *& oOutputProducts) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oOutputProducts); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OutputProducts(oOutputProducts); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oOutputProducts); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAResource##classe::get_NextResources(CATIAResourceCollection *& oNextPRF) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNextPRF); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NextResources(oNextPRF); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNextPRF); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAResource##classe::get_PreviousResources(CATIAResourceCollection *& oPreviousPRF) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oPreviousPRF); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PreviousResources(oPreviousPRF); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oPreviousPRF); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAResource##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAResource##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAResource##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAResource##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAResource##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAResource(classe) \
 \
 \
declare_TIE_CATIAResource(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAResource##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAResource,"CATIAResource",CATIAResource::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAResource(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAResource, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAResource##classe(classe::MetaObject(),CATIAResource::MetaObject(),(void *)CreateTIECATIAResource##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAResource(classe) \
 \
 \
declare_TIE_CATIAResource(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAResource##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAResource,"CATIAResource",CATIAResource::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAResource(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAResource, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAResource##classe(classe::MetaObject(),CATIAResource::MetaObject(),(void *)CreateTIECATIAResource##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAResource(classe) TIE_CATIAResource(classe)
#else
#define BOA_CATIAResource(classe) CATImplementBOA(CATIAResource, classe)
#endif

#endif
