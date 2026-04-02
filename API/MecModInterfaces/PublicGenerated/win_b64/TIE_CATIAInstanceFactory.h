#ifndef __TIE_CATIAInstanceFactory
#define __TIE_CATIAInstanceFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAInstanceFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAInstanceFactory */
#define declare_TIE_CATIAInstanceFactory(classe) \
 \
 \
class TIECATIAInstanceFactory##classe : public CATIAInstanceFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAInstanceFactory, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddInstance(CATIABase * iReference, CATIABase *& oInstance); \
      virtual HRESULT __stdcall BeginInstanceFactory(const CATBSTR & iNameOfReference, const CATBSTR & iNameOfDocument); \
      virtual HRESULT __stdcall put_InstantiationMode(const CATBSTR & iInstantiationModeBSTR); \
      virtual HRESULT __stdcall BeginInstantiate(); \
      virtual HRESULT __stdcall PutInputData(const CATBSTR & iName, CATBaseDispatch * iInput); \
      virtual HRESULT __stdcall GetParameter(const CATBSTR & iName, CATIABase *& oParameter); \
      virtual HRESULT __stdcall Instantiate(CATIABase *& oInstance); \
      virtual HRESULT __stdcall EndInstantiate(); \
      virtual HRESULT __stdcall EndInstanceFactory(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAInstanceFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddInstance(CATIABase * iReference, CATIABase *& oInstance); \
virtual HRESULT __stdcall BeginInstanceFactory(const CATBSTR & iNameOfReference, const CATBSTR & iNameOfDocument); \
virtual HRESULT __stdcall put_InstantiationMode(const CATBSTR & iInstantiationModeBSTR); \
virtual HRESULT __stdcall BeginInstantiate(); \
virtual HRESULT __stdcall PutInputData(const CATBSTR & iName, CATBaseDispatch * iInput); \
virtual HRESULT __stdcall GetParameter(const CATBSTR & iName, CATIABase *& oParameter); \
virtual HRESULT __stdcall Instantiate(CATIABase *& oInstance); \
virtual HRESULT __stdcall EndInstantiate(); \
virtual HRESULT __stdcall EndInstanceFactory(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAInstanceFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddInstance(CATIABase * iReference, CATIABase *& oInstance) \
{ \
return (ENVTIECALL(CATIAInstanceFactory,ENVTIETypeLetter,ENVTIELetter)AddInstance(iReference,oInstance)); \
} \
HRESULT __stdcall  ENVTIEName::BeginInstanceFactory(const CATBSTR & iNameOfReference, const CATBSTR & iNameOfDocument) \
{ \
return (ENVTIECALL(CATIAInstanceFactory,ENVTIETypeLetter,ENVTIELetter)BeginInstanceFactory(iNameOfReference,iNameOfDocument)); \
} \
HRESULT __stdcall  ENVTIEName::put_InstantiationMode(const CATBSTR & iInstantiationModeBSTR) \
{ \
return (ENVTIECALL(CATIAInstanceFactory,ENVTIETypeLetter,ENVTIELetter)put_InstantiationMode(iInstantiationModeBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::BeginInstantiate() \
{ \
return (ENVTIECALL(CATIAInstanceFactory,ENVTIETypeLetter,ENVTIELetter)BeginInstantiate()); \
} \
HRESULT __stdcall  ENVTIEName::PutInputData(const CATBSTR & iName, CATBaseDispatch * iInput) \
{ \
return (ENVTIECALL(CATIAInstanceFactory,ENVTIETypeLetter,ENVTIELetter)PutInputData(iName,iInput)); \
} \
HRESULT __stdcall  ENVTIEName::GetParameter(const CATBSTR & iName, CATIABase *& oParameter) \
{ \
return (ENVTIECALL(CATIAInstanceFactory,ENVTIETypeLetter,ENVTIELetter)GetParameter(iName,oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::Instantiate(CATIABase *& oInstance) \
{ \
return (ENVTIECALL(CATIAInstanceFactory,ENVTIETypeLetter,ENVTIELetter)Instantiate(oInstance)); \
} \
HRESULT __stdcall  ENVTIEName::EndInstantiate() \
{ \
return (ENVTIECALL(CATIAInstanceFactory,ENVTIETypeLetter,ENVTIELetter)EndInstantiate()); \
} \
HRESULT __stdcall  ENVTIEName::EndInstanceFactory() \
{ \
return (ENVTIECALL(CATIAInstanceFactory,ENVTIETypeLetter,ENVTIELetter)EndInstanceFactory()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAInstanceFactory,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAInstanceFactory,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAInstanceFactory,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAInstanceFactory,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAInstanceFactory,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAInstanceFactory(classe)    TIECATIAInstanceFactory##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAInstanceFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAInstanceFactory, classe) \
 \
 \
CATImplementTIEMethods(CATIAInstanceFactory, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAInstanceFactory, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAInstanceFactory, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAInstanceFactory, classe) \
 \
HRESULT __stdcall  TIECATIAInstanceFactory##classe::AddInstance(CATIABase * iReference, CATIABase *& oInstance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iReference,&oInstance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddInstance(iReference,oInstance); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iReference,&oInstance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInstanceFactory##classe::BeginInstanceFactory(const CATBSTR & iNameOfReference, const CATBSTR & iNameOfDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iNameOfReference,&iNameOfDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BeginInstanceFactory(iNameOfReference,iNameOfDocument); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iNameOfReference,&iNameOfDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInstanceFactory##classe::put_InstantiationMode(const CATBSTR & iInstantiationModeBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iInstantiationModeBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_InstantiationMode(iInstantiationModeBSTR); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iInstantiationModeBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInstanceFactory##classe::BeginInstantiate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BeginInstantiate(); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInstanceFactory##classe::PutInputData(const CATBSTR & iName, CATBaseDispatch * iInput) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iName,&iInput); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutInputData(iName,iInput); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iName,&iInput); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInstanceFactory##classe::GetParameter(const CATBSTR & iName, CATIABase *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iName,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetParameter(iName,oParameter); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iName,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInstanceFactory##classe::Instantiate(CATIABase *& oInstance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oInstance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Instantiate(oInstance); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oInstance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInstanceFactory##classe::EndInstantiate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EndInstantiate(); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInstanceFactory##classe::EndInstanceFactory() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EndInstanceFactory(); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAInstanceFactory##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAInstanceFactory##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAInstanceFactory##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAInstanceFactory##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAInstanceFactory##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAInstanceFactory(classe) \
 \
 \
declare_TIE_CATIAInstanceFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAInstanceFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAInstanceFactory,"CATIAInstanceFactory",CATIAInstanceFactory::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAInstanceFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAInstanceFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAInstanceFactory##classe(classe::MetaObject(),CATIAInstanceFactory::MetaObject(),(void *)CreateTIECATIAInstanceFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAInstanceFactory(classe) \
 \
 \
declare_TIE_CATIAInstanceFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAInstanceFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAInstanceFactory,"CATIAInstanceFactory",CATIAInstanceFactory::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAInstanceFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAInstanceFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAInstanceFactory##classe(classe::MetaObject(),CATIAInstanceFactory::MetaObject(),(void *)CreateTIECATIAInstanceFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAInstanceFactory(classe) TIE_CATIAInstanceFactory(classe)
#else
#define BOA_CATIAInstanceFactory(classe) CATImplementBOA(CATIAInstanceFactory, classe)
#endif

#endif
