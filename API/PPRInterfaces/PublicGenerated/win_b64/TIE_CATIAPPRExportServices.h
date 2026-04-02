#ifndef __TIE_CATIAPPRExportServices
#define __TIE_CATIAPPRExportServices

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPPRExportServices.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPPRExportServices */
#define declare_TIE_CATIAPPRExportServices(classe) \
 \
 \
class TIECATIAPPRExportServices##classe : public CATIAPPRExportServices \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPPRExportServices, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall ExportAsCGR(const CATSafeArrayVariant & iItems, const CATBSTR & iWhere); \
      virtual HRESULT __stdcall SetAsRollupCGR(CATIABase * iItem, const CATBSTR & iPath); \
      virtual HRESULT __stdcall ExportAsCATProduct(const CATSafeArrayVariant & iItems, CATIAProductDocument *& oTargetProduct); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPPRExportServices(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall ExportAsCGR(const CATSafeArrayVariant & iItems, const CATBSTR & iWhere); \
virtual HRESULT __stdcall SetAsRollupCGR(CATIABase * iItem, const CATBSTR & iPath); \
virtual HRESULT __stdcall ExportAsCATProduct(const CATSafeArrayVariant & iItems, CATIAProductDocument *& oTargetProduct); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPPRExportServices(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::ExportAsCGR(const CATSafeArrayVariant & iItems, const CATBSTR & iWhere) \
{ \
return (ENVTIECALL(CATIAPPRExportServices,ENVTIETypeLetter,ENVTIELetter)ExportAsCGR(iItems,iWhere)); \
} \
HRESULT __stdcall  ENVTIEName::SetAsRollupCGR(CATIABase * iItem, const CATBSTR & iPath) \
{ \
return (ENVTIECALL(CATIAPPRExportServices,ENVTIETypeLetter,ENVTIELetter)SetAsRollupCGR(iItem,iPath)); \
} \
HRESULT __stdcall  ENVTIEName::ExportAsCATProduct(const CATSafeArrayVariant & iItems, CATIAProductDocument *& oTargetProduct) \
{ \
return (ENVTIECALL(CATIAPPRExportServices,ENVTIETypeLetter,ENVTIELetter)ExportAsCATProduct(iItems,oTargetProduct)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPPRExportServices,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPPRExportServices,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPPRExportServices,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPPRExportServices,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPPRExportServices,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPPRExportServices(classe)    TIECATIAPPRExportServices##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPPRExportServices(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPPRExportServices, classe) \
 \
 \
CATImplementTIEMethods(CATIAPPRExportServices, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPPRExportServices, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPPRExportServices, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPPRExportServices, classe) \
 \
HRESULT __stdcall  TIECATIAPPRExportServices##classe::ExportAsCGR(const CATSafeArrayVariant & iItems, const CATBSTR & iWhere) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iItems,&iWhere); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExportAsCGR(iItems,iWhere); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iItems,&iWhere); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPPRExportServices##classe::SetAsRollupCGR(CATIABase * iItem, const CATBSTR & iPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iItem,&iPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAsRollupCGR(iItem,iPath); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iItem,&iPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPPRExportServices##classe::ExportAsCATProduct(const CATSafeArrayVariant & iItems, CATIAProductDocument *& oTargetProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iItems,&oTargetProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExportAsCATProduct(iItems,oTargetProduct); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iItems,&oTargetProduct); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPPRExportServices##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPPRExportServices##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPPRExportServices##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPPRExportServices##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPPRExportServices##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPPRExportServices(classe) \
 \
 \
declare_TIE_CATIAPPRExportServices(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPPRExportServices##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPPRExportServices,"CATIAPPRExportServices",CATIAPPRExportServices::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPPRExportServices(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPPRExportServices, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPPRExportServices##classe(classe::MetaObject(),CATIAPPRExportServices::MetaObject(),(void *)CreateTIECATIAPPRExportServices##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPPRExportServices(classe) \
 \
 \
declare_TIE_CATIAPPRExportServices(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPPRExportServices##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPPRExportServices,"CATIAPPRExportServices",CATIAPPRExportServices::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPPRExportServices(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPPRExportServices, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPPRExportServices##classe(classe::MetaObject(),CATIAPPRExportServices::MetaObject(),(void *)CreateTIECATIAPPRExportServices##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPPRExportServices(classe) TIE_CATIAPPRExportServices(classe)
#else
#define BOA_CATIAPPRExportServices(classe) CATImplementBOA(CATIAPPRExportServices, classe)
#endif

#endif
