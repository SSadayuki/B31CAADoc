#ifndef __TIE_CATIAManufacturingMachineServices
#define __TIE_CATIAManufacturingMachineServices

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAManufacturingMachineServices.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAManufacturingMachineServices */
#define declare_TIE_CATIAManufacturingMachineServices(classe) \
 \
 \
class TIECATIAManufacturingMachineServices##classe : public CATIAManufacturingMachineServices \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAManufacturingMachineServices, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetMachineFromProduct(CATIAManufacturingSetup * iSetup, CATIAManufacturingMachine *& oMachine); \
      virtual HRESULT __stdcall AutoMountWorkpiece(CATIAProduct * iProduct, CATIAManufacturingMachiningAxis * iMAS, const CATBSTR & iSpindleIndx); \
      virtual HRESULT __stdcall GetNamesOfSpindles(CATSafeArrayVariant & oListOfSpindleNames); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAManufacturingMachineServices(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetMachineFromProduct(CATIAManufacturingSetup * iSetup, CATIAManufacturingMachine *& oMachine); \
virtual HRESULT __stdcall AutoMountWorkpiece(CATIAProduct * iProduct, CATIAManufacturingMachiningAxis * iMAS, const CATBSTR & iSpindleIndx); \
virtual HRESULT __stdcall GetNamesOfSpindles(CATSafeArrayVariant & oListOfSpindleNames); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAManufacturingMachineServices(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetMachineFromProduct(CATIAManufacturingSetup * iSetup, CATIAManufacturingMachine *& oMachine) \
{ \
return (ENVTIECALL(CATIAManufacturingMachineServices,ENVTIETypeLetter,ENVTIELetter)GetMachineFromProduct(iSetup,oMachine)); \
} \
HRESULT __stdcall  ENVTIEName::AutoMountWorkpiece(CATIAProduct * iProduct, CATIAManufacturingMachiningAxis * iMAS, const CATBSTR & iSpindleIndx) \
{ \
return (ENVTIECALL(CATIAManufacturingMachineServices,ENVTIETypeLetter,ENVTIELetter)AutoMountWorkpiece(iProduct,iMAS,iSpindleIndx)); \
} \
HRESULT __stdcall  ENVTIEName::GetNamesOfSpindles(CATSafeArrayVariant & oListOfSpindleNames) \
{ \
return (ENVTIECALL(CATIAManufacturingMachineServices,ENVTIETypeLetter,ENVTIELetter)GetNamesOfSpindles(oListOfSpindleNames)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAManufacturingMachineServices,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAManufacturingMachineServices,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingMachineServices,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingMachineServices,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAManufacturingMachineServices,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAManufacturingMachineServices(classe)    TIECATIAManufacturingMachineServices##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAManufacturingMachineServices(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAManufacturingMachineServices, classe) \
 \
 \
CATImplementTIEMethods(CATIAManufacturingMachineServices, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAManufacturingMachineServices, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAManufacturingMachineServices, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAManufacturingMachineServices, classe) \
 \
HRESULT __stdcall  TIECATIAManufacturingMachineServices##classe::GetMachineFromProduct(CATIAManufacturingSetup * iSetup, CATIAManufacturingMachine *& oMachine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iSetup,&oMachine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMachineFromProduct(iSetup,oMachine); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iSetup,&oMachine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachineServices##classe::AutoMountWorkpiece(CATIAProduct * iProduct, CATIAManufacturingMachiningAxis * iMAS, const CATBSTR & iSpindleIndx) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iProduct,&iMAS,&iSpindleIndx); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AutoMountWorkpiece(iProduct,iMAS,iSpindleIndx); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iProduct,&iMAS,&iSpindleIndx); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachineServices##classe::GetNamesOfSpindles(CATSafeArrayVariant & oListOfSpindleNames) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oListOfSpindleNames); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNamesOfSpindles(oListOfSpindleNames); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oListOfSpindleNames); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingMachineServices##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingMachineServices##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingMachineServices##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingMachineServices##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingMachineServices##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAManufacturingMachineServices(classe) \
 \
 \
declare_TIE_CATIAManufacturingMachineServices(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingMachineServices##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingMachineServices,"CATIAManufacturingMachineServices",CATIAManufacturingMachineServices::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingMachineServices(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAManufacturingMachineServices, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingMachineServices##classe(classe::MetaObject(),CATIAManufacturingMachineServices::MetaObject(),(void *)CreateTIECATIAManufacturingMachineServices##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAManufacturingMachineServices(classe) \
 \
 \
declare_TIE_CATIAManufacturingMachineServices(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingMachineServices##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingMachineServices,"CATIAManufacturingMachineServices",CATIAManufacturingMachineServices::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingMachineServices(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAManufacturingMachineServices, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingMachineServices##classe(classe::MetaObject(),CATIAManufacturingMachineServices::MetaObject(),(void *)CreateTIECATIAManufacturingMachineServices##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAManufacturingMachineServices(classe) TIE_CATIAManufacturingMachineServices(classe)
#else
#define BOA_CATIAManufacturingMachineServices(classe) CATImplementBOA(CATIAManufacturingMachineServices, classe)
#endif

#endif
