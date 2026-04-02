#ifndef __TIE_CATIAArrWorkbench
#define __TIE_CATIAArrWorkbench

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAArrWorkbench.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAArrWorkbench */
#define declare_TIE_CATIAArrWorkbench(classe) \
 \
 \
class TIECATIAArrWorkbench##classe : public CATIAArrWorkbench \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAArrWorkbench, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ArrNomenclatureTree(CATIAArrNomenclatureTree *& oArrNomenclatureTree); \
      virtual HRESULT __stdcall AddNomenclatureTree(CATIAArrNomenclatureTree *& oArrNomenclatureTree); \
      virtual HRESULT __stdcall CreateFeatDocument(const CATBSTR & iDocType, CATIADocument *& oFeatDoc); \
      virtual HRESULT __stdcall SaveFeatDocument(const CATBSTR & iSaveAsFileName, CATIADocument * iFeatDoc); \
      virtual HRESULT __stdcall CalculateFootprint(CATIAProduct * iArrProduct, double & oDblSize); \
      virtual HRESULT __stdcall CalculateRunLength(CATIAProduct * iArrRun, double & oDblLength); \
      virtual HRESULT __stdcall GetCurrentUnits(const CATBSTR & iUnitName, CATBSTR & oValueString); \
      virtual HRESULT __stdcall ConvertProductToArrangementProduct(CATIAProduct * iProduct, CATIAArrangementProduct *& oArrProduct); \
      virtual HRESULT __stdcall ConvertArrangementProductToProduct(CATIAArrangementProduct * iArrProduct, CATIAProduct *& oProduct); \
      virtual HRESULT __stdcall FindInterface(const CATBSTR & iInterfaceName, CATBaseDispatch * iObject, CATBaseDispatch *& oInterfaceFound); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAArrWorkbench(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ArrNomenclatureTree(CATIAArrNomenclatureTree *& oArrNomenclatureTree); \
virtual HRESULT __stdcall AddNomenclatureTree(CATIAArrNomenclatureTree *& oArrNomenclatureTree); \
virtual HRESULT __stdcall CreateFeatDocument(const CATBSTR & iDocType, CATIADocument *& oFeatDoc); \
virtual HRESULT __stdcall SaveFeatDocument(const CATBSTR & iSaveAsFileName, CATIADocument * iFeatDoc); \
virtual HRESULT __stdcall CalculateFootprint(CATIAProduct * iArrProduct, double & oDblSize); \
virtual HRESULT __stdcall CalculateRunLength(CATIAProduct * iArrRun, double & oDblLength); \
virtual HRESULT __stdcall GetCurrentUnits(const CATBSTR & iUnitName, CATBSTR & oValueString); \
virtual HRESULT __stdcall ConvertProductToArrangementProduct(CATIAProduct * iProduct, CATIAArrangementProduct *& oArrProduct); \
virtual HRESULT __stdcall ConvertArrangementProductToProduct(CATIAArrangementProduct * iArrProduct, CATIAProduct *& oProduct); \
virtual HRESULT __stdcall FindInterface(const CATBSTR & iInterfaceName, CATBaseDispatch * iObject, CATBaseDispatch *& oInterfaceFound); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAArrWorkbench(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ArrNomenclatureTree(CATIAArrNomenclatureTree *& oArrNomenclatureTree) \
{ \
return (ENVTIECALL(CATIAArrWorkbench,ENVTIETypeLetter,ENVTIELetter)get_ArrNomenclatureTree(oArrNomenclatureTree)); \
} \
HRESULT __stdcall  ENVTIEName::AddNomenclatureTree(CATIAArrNomenclatureTree *& oArrNomenclatureTree) \
{ \
return (ENVTIECALL(CATIAArrWorkbench,ENVTIETypeLetter,ENVTIELetter)AddNomenclatureTree(oArrNomenclatureTree)); \
} \
HRESULT __stdcall  ENVTIEName::CreateFeatDocument(const CATBSTR & iDocType, CATIADocument *& oFeatDoc) \
{ \
return (ENVTIECALL(CATIAArrWorkbench,ENVTIETypeLetter,ENVTIELetter)CreateFeatDocument(iDocType,oFeatDoc)); \
} \
HRESULT __stdcall  ENVTIEName::SaveFeatDocument(const CATBSTR & iSaveAsFileName, CATIADocument * iFeatDoc) \
{ \
return (ENVTIECALL(CATIAArrWorkbench,ENVTIETypeLetter,ENVTIELetter)SaveFeatDocument(iSaveAsFileName,iFeatDoc)); \
} \
HRESULT __stdcall  ENVTIEName::CalculateFootprint(CATIAProduct * iArrProduct, double & oDblSize) \
{ \
return (ENVTIECALL(CATIAArrWorkbench,ENVTIETypeLetter,ENVTIELetter)CalculateFootprint(iArrProduct,oDblSize)); \
} \
HRESULT __stdcall  ENVTIEName::CalculateRunLength(CATIAProduct * iArrRun, double & oDblLength) \
{ \
return (ENVTIECALL(CATIAArrWorkbench,ENVTIETypeLetter,ENVTIELetter)CalculateRunLength(iArrRun,oDblLength)); \
} \
HRESULT __stdcall  ENVTIEName::GetCurrentUnits(const CATBSTR & iUnitName, CATBSTR & oValueString) \
{ \
return (ENVTIECALL(CATIAArrWorkbench,ENVTIETypeLetter,ENVTIELetter)GetCurrentUnits(iUnitName,oValueString)); \
} \
HRESULT __stdcall  ENVTIEName::ConvertProductToArrangementProduct(CATIAProduct * iProduct, CATIAArrangementProduct *& oArrProduct) \
{ \
return (ENVTIECALL(CATIAArrWorkbench,ENVTIETypeLetter,ENVTIELetter)ConvertProductToArrangementProduct(iProduct,oArrProduct)); \
} \
HRESULT __stdcall  ENVTIEName::ConvertArrangementProductToProduct(CATIAArrangementProduct * iArrProduct, CATIAProduct *& oProduct) \
{ \
return (ENVTIECALL(CATIAArrWorkbench,ENVTIETypeLetter,ENVTIELetter)ConvertArrangementProductToProduct(iArrProduct,oProduct)); \
} \
HRESULT __stdcall  ENVTIEName::FindInterface(const CATBSTR & iInterfaceName, CATBaseDispatch * iObject, CATBaseDispatch *& oInterfaceFound) \
{ \
return (ENVTIECALL(CATIAArrWorkbench,ENVTIETypeLetter,ENVTIELetter)FindInterface(iInterfaceName,iObject,oInterfaceFound)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAArrWorkbench,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAArrWorkbench,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAArrWorkbench,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAArrWorkbench,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAArrWorkbench,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAArrWorkbench(classe)    TIECATIAArrWorkbench##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAArrWorkbench(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAArrWorkbench, classe) \
 \
 \
CATImplementTIEMethods(CATIAArrWorkbench, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAArrWorkbench, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAArrWorkbench, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAArrWorkbench, classe) \
 \
HRESULT __stdcall  TIECATIAArrWorkbench##classe::get_ArrNomenclatureTree(CATIAArrNomenclatureTree *& oArrNomenclatureTree) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oArrNomenclatureTree); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ArrNomenclatureTree(oArrNomenclatureTree); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oArrNomenclatureTree); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrWorkbench##classe::AddNomenclatureTree(CATIAArrNomenclatureTree *& oArrNomenclatureTree) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oArrNomenclatureTree); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNomenclatureTree(oArrNomenclatureTree); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oArrNomenclatureTree); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrWorkbench##classe::CreateFeatDocument(const CATBSTR & iDocType, CATIADocument *& oFeatDoc) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iDocType,&oFeatDoc); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateFeatDocument(iDocType,oFeatDoc); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iDocType,&oFeatDoc); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrWorkbench##classe::SaveFeatDocument(const CATBSTR & iSaveAsFileName, CATIADocument * iFeatDoc) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iSaveAsFileName,&iFeatDoc); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveFeatDocument(iSaveAsFileName,iFeatDoc); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iSaveAsFileName,&iFeatDoc); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrWorkbench##classe::CalculateFootprint(CATIAProduct * iArrProduct, double & oDblSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iArrProduct,&oDblSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CalculateFootprint(iArrProduct,oDblSize); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iArrProduct,&oDblSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrWorkbench##classe::CalculateRunLength(CATIAProduct * iArrRun, double & oDblLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iArrRun,&oDblLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CalculateRunLength(iArrRun,oDblLength); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iArrRun,&oDblLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrWorkbench##classe::GetCurrentUnits(const CATBSTR & iUnitName, CATBSTR & oValueString) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iUnitName,&oValueString); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCurrentUnits(iUnitName,oValueString); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iUnitName,&oValueString); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrWorkbench##classe::ConvertProductToArrangementProduct(CATIAProduct * iProduct, CATIAArrangementProduct *& oArrProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iProduct,&oArrProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ConvertProductToArrangementProduct(iProduct,oArrProduct); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iProduct,&oArrProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrWorkbench##classe::ConvertArrangementProductToProduct(CATIAArrangementProduct * iArrProduct, CATIAProduct *& oProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iArrProduct,&oProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ConvertArrangementProductToProduct(iArrProduct,oProduct); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iArrProduct,&oProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrWorkbench##classe::FindInterface(const CATBSTR & iInterfaceName, CATBaseDispatch * iObject, CATBaseDispatch *& oInterfaceFound) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iInterfaceName,&iObject,&oInterfaceFound); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FindInterface(iInterfaceName,iObject,oInterfaceFound); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iInterfaceName,&iObject,&oInterfaceFound); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrWorkbench##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrWorkbench##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrWorkbench##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrWorkbench##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrWorkbench##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAArrWorkbench(classe) \
 \
 \
declare_TIE_CATIAArrWorkbench(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrWorkbench##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrWorkbench,"CATIAArrWorkbench",CATIAArrWorkbench::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrWorkbench(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAArrWorkbench, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrWorkbench##classe(classe::MetaObject(),CATIAArrWorkbench::MetaObject(),(void *)CreateTIECATIAArrWorkbench##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAArrWorkbench(classe) \
 \
 \
declare_TIE_CATIAArrWorkbench(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrWorkbench##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrWorkbench,"CATIAArrWorkbench",CATIAArrWorkbench::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrWorkbench(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAArrWorkbench, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrWorkbench##classe(classe::MetaObject(),CATIAArrWorkbench::MetaObject(),(void *)CreateTIECATIAArrWorkbench##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAArrWorkbench(classe) TIE_CATIAArrWorkbench(classe)
#else
#define BOA_CATIAArrWorkbench(classe) CATImplementBOA(CATIAArrWorkbench, classe)
#endif

#endif
