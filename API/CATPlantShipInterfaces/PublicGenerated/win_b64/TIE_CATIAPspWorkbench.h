#ifndef __TIE_CATIAPspWorkbench
#define __TIE_CATIAPspWorkbench

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPspWorkbench.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPspWorkbench */
#define declare_TIE_CATIAPspWorkbench(classe) \
 \
 \
class TIECATIAPspWorkbench##classe : public CATIAPspWorkbench \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPspWorkbench, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetApplication(CatPspIDLApplicationID iApplicationID, CATIAPspApplication *& oApplication); \
      virtual HRESULT __stdcall GetInterface(const CATBSTR & iInterfaceName, CATIABase * iObject, CATIABase *& oInterfaceFound); \
      virtual HRESULT __stdcall ExportProperties(CATIADocument * iDocumentToExportFrom, const CATBSTR & iXMLOutputFileName); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPspWorkbench(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetApplication(CatPspIDLApplicationID iApplicationID, CATIAPspApplication *& oApplication); \
virtual HRESULT __stdcall GetInterface(const CATBSTR & iInterfaceName, CATIABase * iObject, CATIABase *& oInterfaceFound); \
virtual HRESULT __stdcall ExportProperties(CATIADocument * iDocumentToExportFrom, const CATBSTR & iXMLOutputFileName); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPspWorkbench(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetApplication(CatPspIDLApplicationID iApplicationID, CATIAPspApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPspWorkbench,ENVTIETypeLetter,ENVTIELetter)GetApplication(iApplicationID,oApplication)); \
} \
HRESULT __stdcall  ENVTIEName::GetInterface(const CATBSTR & iInterfaceName, CATIABase * iObject, CATIABase *& oInterfaceFound) \
{ \
return (ENVTIECALL(CATIAPspWorkbench,ENVTIETypeLetter,ENVTIELetter)GetInterface(iInterfaceName,iObject,oInterfaceFound)); \
} \
HRESULT __stdcall  ENVTIEName::ExportProperties(CATIADocument * iDocumentToExportFrom, const CATBSTR & iXMLOutputFileName) \
{ \
return (ENVTIECALL(CATIAPspWorkbench,ENVTIETypeLetter,ENVTIELetter)ExportProperties(iDocumentToExportFrom,iXMLOutputFileName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPspWorkbench,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPspWorkbench,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspWorkbench,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspWorkbench,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPspWorkbench,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPspWorkbench(classe)    TIECATIAPspWorkbench##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPspWorkbench(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPspWorkbench, classe) \
 \
 \
CATImplementTIEMethods(CATIAPspWorkbench, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPspWorkbench, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPspWorkbench, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPspWorkbench, classe) \
 \
HRESULT __stdcall  TIECATIAPspWorkbench##classe::GetApplication(CatPspIDLApplicationID iApplicationID, CATIAPspApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iApplicationID,&oApplication); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetApplication(iApplicationID,oApplication); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iApplicationID,&oApplication); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspWorkbench##classe::GetInterface(const CATBSTR & iInterfaceName, CATIABase * iObject, CATIABase *& oInterfaceFound) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iInterfaceName,&iObject,&oInterfaceFound); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInterface(iInterfaceName,iObject,oInterfaceFound); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iInterfaceName,&iObject,&oInterfaceFound); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspWorkbench##classe::ExportProperties(CATIADocument * iDocumentToExportFrom, const CATBSTR & iXMLOutputFileName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iDocumentToExportFrom,&iXMLOutputFileName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExportProperties(iDocumentToExportFrom,iXMLOutputFileName); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iDocumentToExportFrom,&iXMLOutputFileName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspWorkbench##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspWorkbench##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspWorkbench##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspWorkbench##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspWorkbench##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPspWorkbench(classe) \
 \
 \
declare_TIE_CATIAPspWorkbench(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspWorkbench##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspWorkbench,"CATIAPspWorkbench",CATIAPspWorkbench::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspWorkbench(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPspWorkbench, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspWorkbench##classe(classe::MetaObject(),CATIAPspWorkbench::MetaObject(),(void *)CreateTIECATIAPspWorkbench##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPspWorkbench(classe) \
 \
 \
declare_TIE_CATIAPspWorkbench(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspWorkbench##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspWorkbench,"CATIAPspWorkbench",CATIAPspWorkbench::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspWorkbench(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPspWorkbench, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspWorkbench##classe(classe::MetaObject(),CATIAPspWorkbench::MetaObject(),(void *)CreateTIECATIAPspWorkbench##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPspWorkbench(classe) TIE_CATIAPspWorkbench(classe)
#else
#define BOA_CATIAPspWorkbench(classe) CATImplementBOA(CATIAPspWorkbench, classe)
#endif

#endif
