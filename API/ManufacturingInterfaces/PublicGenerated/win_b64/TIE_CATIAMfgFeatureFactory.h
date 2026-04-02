#ifndef __TIE_CATIAMfgFeatureFactory
#define __TIE_CATIAMfgFeatureFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAMfgFeatureFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAMfgFeatureFactory */
#define declare_TIE_CATIAMfgFeatureFactory(classe) \
 \
 \
class TIECATIAMfgFeatureFactory##classe : public CATIAMfgFeatureFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAMfgFeatureFactory, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall CreateMachiningFeature(const CATBSTR & iType, CATIABase *& oFeature); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAMfgFeatureFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall CreateMachiningFeature(const CATBSTR & iType, CATIABase *& oFeature); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAMfgFeatureFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::CreateMachiningFeature(const CATBSTR & iType, CATIABase *& oFeature) \
{ \
return (ENVTIECALL(CATIAMfgFeatureFactory,ENVTIETypeLetter,ENVTIELetter)CreateMachiningFeature(iType,oFeature)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAMfgFeatureFactory,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAMfgFeatureFactory,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAMfgFeatureFactory,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAMfgFeatureFactory,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAMfgFeatureFactory,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAMfgFeatureFactory(classe)    TIECATIAMfgFeatureFactory##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAMfgFeatureFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAMfgFeatureFactory, classe) \
 \
 \
CATImplementTIEMethods(CATIAMfgFeatureFactory, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAMfgFeatureFactory, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAMfgFeatureFactory, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAMfgFeatureFactory, classe) \
 \
HRESULT __stdcall  TIECATIAMfgFeatureFactory##classe::CreateMachiningFeature(const CATBSTR & iType, CATIABase *& oFeature) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iType,&oFeature); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateMachiningFeature(iType,oFeature); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iType,&oFeature); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMfgFeatureFactory##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMfgFeatureFactory##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMfgFeatureFactory##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMfgFeatureFactory##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMfgFeatureFactory##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAMfgFeatureFactory(classe) \
 \
 \
declare_TIE_CATIAMfgFeatureFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMfgFeatureFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMfgFeatureFactory,"CATIAMfgFeatureFactory",CATIAMfgFeatureFactory::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMfgFeatureFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAMfgFeatureFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMfgFeatureFactory##classe(classe::MetaObject(),CATIAMfgFeatureFactory::MetaObject(),(void *)CreateTIECATIAMfgFeatureFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAMfgFeatureFactory(classe) \
 \
 \
declare_TIE_CATIAMfgFeatureFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMfgFeatureFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMfgFeatureFactory,"CATIAMfgFeatureFactory",CATIAMfgFeatureFactory::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMfgFeatureFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAMfgFeatureFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMfgFeatureFactory##classe(classe::MetaObject(),CATIAMfgFeatureFactory::MetaObject(),(void *)CreateTIECATIAMfgFeatureFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAMfgFeatureFactory(classe) TIE_CATIAMfgFeatureFactory(classe)
#else
#define BOA_CATIAMfgFeatureFactory(classe) CATImplementBOA(CATIAMfgFeatureFactory, classe)
#endif

#endif
