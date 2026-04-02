#ifndef __TIE_CATIAManufacturingView
#define __TIE_CATIAManufacturingView

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAManufacturingView.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAManufacturingView */
#define declare_TIE_CATIAManufacturingView(classe) \
 \
 \
class TIECATIAManufacturingView##classe : public CATIAManufacturingView \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAManufacturingView, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ManufacturingFeatures(CATIAManufacturingFeatures *& oManufacturingFeatures); \
      virtual HRESULT __stdcall get_Relations(CATIARelations *& oRelations); \
      virtual HRESULT __stdcall CreateAllMachinableAreaFeatures(CATIAProduct * iFinishPartProduct, CATIAProduct * iMachFeaturesProduct); \
      virtual HRESULT __stdcall CreateAllMachinableAreaFeaturesFromTechResultsOfUDF(CATIAProduct * iFinishPartProduct); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAManufacturingView(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ManufacturingFeatures(CATIAManufacturingFeatures *& oManufacturingFeatures); \
virtual HRESULT __stdcall get_Relations(CATIARelations *& oRelations); \
virtual HRESULT __stdcall CreateAllMachinableAreaFeatures(CATIAProduct * iFinishPartProduct, CATIAProduct * iMachFeaturesProduct); \
virtual HRESULT __stdcall CreateAllMachinableAreaFeaturesFromTechResultsOfUDF(CATIAProduct * iFinishPartProduct); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAManufacturingView(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ManufacturingFeatures(CATIAManufacturingFeatures *& oManufacturingFeatures) \
{ \
return (ENVTIECALL(CATIAManufacturingView,ENVTIETypeLetter,ENVTIELetter)get_ManufacturingFeatures(oManufacturingFeatures)); \
} \
HRESULT __stdcall  ENVTIEName::get_Relations(CATIARelations *& oRelations) \
{ \
return (ENVTIECALL(CATIAManufacturingView,ENVTIETypeLetter,ENVTIELetter)get_Relations(oRelations)); \
} \
HRESULT __stdcall  ENVTIEName::CreateAllMachinableAreaFeatures(CATIAProduct * iFinishPartProduct, CATIAProduct * iMachFeaturesProduct) \
{ \
return (ENVTIECALL(CATIAManufacturingView,ENVTIETypeLetter,ENVTIELetter)CreateAllMachinableAreaFeatures(iFinishPartProduct,iMachFeaturesProduct)); \
} \
HRESULT __stdcall  ENVTIEName::CreateAllMachinableAreaFeaturesFromTechResultsOfUDF(CATIAProduct * iFinishPartProduct) \
{ \
return (ENVTIECALL(CATIAManufacturingView,ENVTIETypeLetter,ENVTIELetter)CreateAllMachinableAreaFeaturesFromTechResultsOfUDF(iFinishPartProduct)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAManufacturingView,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAManufacturingView,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingView,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingView,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAManufacturingView,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAManufacturingView(classe)    TIECATIAManufacturingView##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAManufacturingView(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAManufacturingView, classe) \
 \
 \
CATImplementTIEMethods(CATIAManufacturingView, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAManufacturingView, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAManufacturingView, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAManufacturingView, classe) \
 \
HRESULT __stdcall  TIECATIAManufacturingView##classe::get_ManufacturingFeatures(CATIAManufacturingFeatures *& oManufacturingFeatures) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oManufacturingFeatures); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ManufacturingFeatures(oManufacturingFeatures); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oManufacturingFeatures); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingView##classe::get_Relations(CATIARelations *& oRelations) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oRelations); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Relations(oRelations); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oRelations); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingView##classe::CreateAllMachinableAreaFeatures(CATIAProduct * iFinishPartProduct, CATIAProduct * iMachFeaturesProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iFinishPartProduct,&iMachFeaturesProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateAllMachinableAreaFeatures(iFinishPartProduct,iMachFeaturesProduct); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iFinishPartProduct,&iMachFeaturesProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingView##classe::CreateAllMachinableAreaFeaturesFromTechResultsOfUDF(CATIAProduct * iFinishPartProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iFinishPartProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateAllMachinableAreaFeaturesFromTechResultsOfUDF(iFinishPartProduct); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iFinishPartProduct); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingView##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingView##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingView##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingView##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingView##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAManufacturingView(classe) \
 \
 \
declare_TIE_CATIAManufacturingView(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingView##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingView,"CATIAManufacturingView",CATIAManufacturingView::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingView(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAManufacturingView, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingView##classe(classe::MetaObject(),CATIAManufacturingView::MetaObject(),(void *)CreateTIECATIAManufacturingView##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAManufacturingView(classe) \
 \
 \
declare_TIE_CATIAManufacturingView(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingView##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingView,"CATIAManufacturingView",CATIAManufacturingView::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingView(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAManufacturingView, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingView##classe(classe::MetaObject(),CATIAManufacturingView::MetaObject(),(void *)CreateTIECATIAManufacturingView##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAManufacturingView(classe) TIE_CATIAManufacturingView(classe)
#else
#define BOA_CATIAManufacturingView(classe) CATImplementBOA(CATIAManufacturingView, classe)
#endif

#endif
