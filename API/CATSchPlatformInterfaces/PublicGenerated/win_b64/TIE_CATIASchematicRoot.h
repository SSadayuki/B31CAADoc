#ifndef __TIE_CATIASchematicRoot
#define __TIE_CATIASchematicRoot

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchematicRoot.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchematicRoot */
#define declare_TIE_CATIASchematicRoot(classe) \
 \
 \
class TIECATIASchematicRoot##classe : public CATIASchematicRoot \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchematicRoot, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetCompSymbolFromCatalog(const CATBSTR & iCatalogEntryName, CATIADocument * iCtlgDoc, CATIASchGRR *& oGRR); \
      virtual HRESULT __stdcall GetCompGroupFromCatalog(const CATBSTR & iCatalogEntryName, CATIADocument * iCtlgDoc, CATIASchComponent *& oSchComp); \
      virtual HRESULT __stdcall GetSchematicSession(CATIASchSession *& oSchSession); \
      virtual HRESULT __stdcall GetTemporaryListFactory(CATIASchTempListFactory *& oListFactory); \
      virtual HRESULT __stdcall GetComponents(CATIASchListOfObjects *& oListComps); \
      virtual HRESULT __stdcall GetRefComponents(CATIASchListOfObjects *& oListComps); \
      virtual HRESULT __stdcall GetRoutes(CATIASchListOfObjects *& oListRoutes); \
      virtual HRESULT __stdcall GetApplObjFactFromVirtualType(const CATBSTR & iApplicationID, CATIASchAppObjectFactory *& oAppObjFact); \
      virtual HRESULT __stdcall GetApplicationObjectFactory(CatSchIDLApplicationID iApplicationID, CATIASchAppObjectFactory *& oAppObjFact); \
      virtual HRESULT __stdcall GetInterface(const CATBSTR & iInterfaceName, CATIABase * iObject, CATIABase *& oObject); \
      virtual HRESULT __stdcall GetSchBaseFactory(CATIASchBaseFactory *& oBaseFact); \
      virtual HRESULT __stdcall GetUnassociatedSymbols(CATIASchListOfObjects *& oListSymbols); \
      virtual HRESULT __stdcall GetDrawingStandard(CatDrawingStandard & oDrwStd); \
      virtual HRESULT __stdcall SetDrawingStandard(CatDrawingStandard iDrwStd); \
      virtual HRESULT __stdcall GetDrawing(CATIADrawingDrawing *& oDrawing); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchematicRoot(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetCompSymbolFromCatalog(const CATBSTR & iCatalogEntryName, CATIADocument * iCtlgDoc, CATIASchGRR *& oGRR); \
virtual HRESULT __stdcall GetCompGroupFromCatalog(const CATBSTR & iCatalogEntryName, CATIADocument * iCtlgDoc, CATIASchComponent *& oSchComp); \
virtual HRESULT __stdcall GetSchematicSession(CATIASchSession *& oSchSession); \
virtual HRESULT __stdcall GetTemporaryListFactory(CATIASchTempListFactory *& oListFactory); \
virtual HRESULT __stdcall GetComponents(CATIASchListOfObjects *& oListComps); \
virtual HRESULT __stdcall GetRefComponents(CATIASchListOfObjects *& oListComps); \
virtual HRESULT __stdcall GetRoutes(CATIASchListOfObjects *& oListRoutes); \
virtual HRESULT __stdcall GetApplObjFactFromVirtualType(const CATBSTR & iApplicationID, CATIASchAppObjectFactory *& oAppObjFact); \
virtual HRESULT __stdcall GetApplicationObjectFactory(CatSchIDLApplicationID iApplicationID, CATIASchAppObjectFactory *& oAppObjFact); \
virtual HRESULT __stdcall GetInterface(const CATBSTR & iInterfaceName, CATIABase * iObject, CATIABase *& oObject); \
virtual HRESULT __stdcall GetSchBaseFactory(CATIASchBaseFactory *& oBaseFact); \
virtual HRESULT __stdcall GetUnassociatedSymbols(CATIASchListOfObjects *& oListSymbols); \
virtual HRESULT __stdcall GetDrawingStandard(CatDrawingStandard & oDrwStd); \
virtual HRESULT __stdcall SetDrawingStandard(CatDrawingStandard iDrwStd); \
virtual HRESULT __stdcall GetDrawing(CATIADrawingDrawing *& oDrawing); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchematicRoot(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetCompSymbolFromCatalog(const CATBSTR & iCatalogEntryName, CATIADocument * iCtlgDoc, CATIASchGRR *& oGRR) \
{ \
return (ENVTIECALL(CATIASchematicRoot,ENVTIETypeLetter,ENVTIELetter)GetCompSymbolFromCatalog(iCatalogEntryName,iCtlgDoc,oGRR)); \
} \
HRESULT __stdcall  ENVTIEName::GetCompGroupFromCatalog(const CATBSTR & iCatalogEntryName, CATIADocument * iCtlgDoc, CATIASchComponent *& oSchComp) \
{ \
return (ENVTIECALL(CATIASchematicRoot,ENVTIETypeLetter,ENVTIELetter)GetCompGroupFromCatalog(iCatalogEntryName,iCtlgDoc,oSchComp)); \
} \
HRESULT __stdcall  ENVTIEName::GetSchematicSession(CATIASchSession *& oSchSession) \
{ \
return (ENVTIECALL(CATIASchematicRoot,ENVTIETypeLetter,ENVTIELetter)GetSchematicSession(oSchSession)); \
} \
HRESULT __stdcall  ENVTIEName::GetTemporaryListFactory(CATIASchTempListFactory *& oListFactory) \
{ \
return (ENVTIECALL(CATIASchematicRoot,ENVTIETypeLetter,ENVTIELetter)GetTemporaryListFactory(oListFactory)); \
} \
HRESULT __stdcall  ENVTIEName::GetComponents(CATIASchListOfObjects *& oListComps) \
{ \
return (ENVTIECALL(CATIASchematicRoot,ENVTIETypeLetter,ENVTIELetter)GetComponents(oListComps)); \
} \
HRESULT __stdcall  ENVTIEName::GetRefComponents(CATIASchListOfObjects *& oListComps) \
{ \
return (ENVTIECALL(CATIASchematicRoot,ENVTIETypeLetter,ENVTIELetter)GetRefComponents(oListComps)); \
} \
HRESULT __stdcall  ENVTIEName::GetRoutes(CATIASchListOfObjects *& oListRoutes) \
{ \
return (ENVTIECALL(CATIASchematicRoot,ENVTIETypeLetter,ENVTIELetter)GetRoutes(oListRoutes)); \
} \
HRESULT __stdcall  ENVTIEName::GetApplObjFactFromVirtualType(const CATBSTR & iApplicationID, CATIASchAppObjectFactory *& oAppObjFact) \
{ \
return (ENVTIECALL(CATIASchematicRoot,ENVTIETypeLetter,ENVTIELetter)GetApplObjFactFromVirtualType(iApplicationID,oAppObjFact)); \
} \
HRESULT __stdcall  ENVTIEName::GetApplicationObjectFactory(CatSchIDLApplicationID iApplicationID, CATIASchAppObjectFactory *& oAppObjFact) \
{ \
return (ENVTIECALL(CATIASchematicRoot,ENVTIETypeLetter,ENVTIELetter)GetApplicationObjectFactory(iApplicationID,oAppObjFact)); \
} \
HRESULT __stdcall  ENVTIEName::GetInterface(const CATBSTR & iInterfaceName, CATIABase * iObject, CATIABase *& oObject) \
{ \
return (ENVTIECALL(CATIASchematicRoot,ENVTIETypeLetter,ENVTIELetter)GetInterface(iInterfaceName,iObject,oObject)); \
} \
HRESULT __stdcall  ENVTIEName::GetSchBaseFactory(CATIASchBaseFactory *& oBaseFact) \
{ \
return (ENVTIECALL(CATIASchematicRoot,ENVTIETypeLetter,ENVTIELetter)GetSchBaseFactory(oBaseFact)); \
} \
HRESULT __stdcall  ENVTIEName::GetUnassociatedSymbols(CATIASchListOfObjects *& oListSymbols) \
{ \
return (ENVTIECALL(CATIASchematicRoot,ENVTIETypeLetter,ENVTIELetter)GetUnassociatedSymbols(oListSymbols)); \
} \
HRESULT __stdcall  ENVTIEName::GetDrawingStandard(CatDrawingStandard & oDrwStd) \
{ \
return (ENVTIECALL(CATIASchematicRoot,ENVTIETypeLetter,ENVTIELetter)GetDrawingStandard(oDrwStd)); \
} \
HRESULT __stdcall  ENVTIEName::SetDrawingStandard(CatDrawingStandard iDrwStd) \
{ \
return (ENVTIECALL(CATIASchematicRoot,ENVTIETypeLetter,ENVTIELetter)SetDrawingStandard(iDrwStd)); \
} \
HRESULT __stdcall  ENVTIEName::GetDrawing(CATIADrawingDrawing *& oDrawing) \
{ \
return (ENVTIECALL(CATIASchematicRoot,ENVTIETypeLetter,ENVTIELetter)GetDrawing(oDrawing)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchematicRoot,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchematicRoot,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchematicRoot,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchematicRoot,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchematicRoot,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchematicRoot(classe)    TIECATIASchematicRoot##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchematicRoot(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchematicRoot, classe) \
 \
 \
CATImplementTIEMethods(CATIASchematicRoot, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchematicRoot, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchematicRoot, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchematicRoot, classe) \
 \
HRESULT __stdcall  TIECATIASchematicRoot##classe::GetCompSymbolFromCatalog(const CATBSTR & iCatalogEntryName, CATIADocument * iCtlgDoc, CATIASchGRR *& oGRR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iCatalogEntryName,&iCtlgDoc,&oGRR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCompSymbolFromCatalog(iCatalogEntryName,iCtlgDoc,oGRR); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iCatalogEntryName,&iCtlgDoc,&oGRR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchematicRoot##classe::GetCompGroupFromCatalog(const CATBSTR & iCatalogEntryName, CATIADocument * iCtlgDoc, CATIASchComponent *& oSchComp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iCatalogEntryName,&iCtlgDoc,&oSchComp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCompGroupFromCatalog(iCatalogEntryName,iCtlgDoc,oSchComp); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iCatalogEntryName,&iCtlgDoc,&oSchComp); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchematicRoot##classe::GetSchematicSession(CATIASchSession *& oSchSession) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oSchSession); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSchematicSession(oSchSession); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oSchSession); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchematicRoot##classe::GetTemporaryListFactory(CATIASchTempListFactory *& oListFactory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oListFactory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTemporaryListFactory(oListFactory); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oListFactory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchematicRoot##classe::GetComponents(CATIASchListOfObjects *& oListComps) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oListComps); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetComponents(oListComps); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oListComps); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchematicRoot##classe::GetRefComponents(CATIASchListOfObjects *& oListComps) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oListComps); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRefComponents(oListComps); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oListComps); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchematicRoot##classe::GetRoutes(CATIASchListOfObjects *& oListRoutes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oListRoutes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRoutes(oListRoutes); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oListRoutes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchematicRoot##classe::GetApplObjFactFromVirtualType(const CATBSTR & iApplicationID, CATIASchAppObjectFactory *& oAppObjFact) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iApplicationID,&oAppObjFact); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetApplObjFactFromVirtualType(iApplicationID,oAppObjFact); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iApplicationID,&oAppObjFact); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchematicRoot##classe::GetApplicationObjectFactory(CatSchIDLApplicationID iApplicationID, CATIASchAppObjectFactory *& oAppObjFact) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iApplicationID,&oAppObjFact); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetApplicationObjectFactory(iApplicationID,oAppObjFact); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iApplicationID,&oAppObjFact); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchematicRoot##classe::GetInterface(const CATBSTR & iInterfaceName, CATIABase * iObject, CATIABase *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iInterfaceName,&iObject,&oObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInterface(iInterfaceName,iObject,oObject); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iInterfaceName,&iObject,&oObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchematicRoot##classe::GetSchBaseFactory(CATIASchBaseFactory *& oBaseFact) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oBaseFact); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSchBaseFactory(oBaseFact); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oBaseFact); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchematicRoot##classe::GetUnassociatedSymbols(CATIASchListOfObjects *& oListSymbols) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oListSymbols); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUnassociatedSymbols(oListSymbols); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oListSymbols); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchematicRoot##classe::GetDrawingStandard(CatDrawingStandard & oDrwStd) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oDrwStd); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDrawingStandard(oDrwStd); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oDrwStd); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchematicRoot##classe::SetDrawingStandard(CatDrawingStandard iDrwStd) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iDrwStd); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDrawingStandard(iDrwStd); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iDrwStd); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchematicRoot##classe::GetDrawing(CATIADrawingDrawing *& oDrawing) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oDrawing); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDrawing(oDrawing); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oDrawing); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchematicRoot##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchematicRoot##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchematicRoot##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchematicRoot##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchematicRoot##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchematicRoot(classe) \
 \
 \
declare_TIE_CATIASchematicRoot(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchematicRoot##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchematicRoot,"CATIASchematicRoot",CATIASchematicRoot::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchematicRoot(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchematicRoot, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchematicRoot##classe(classe::MetaObject(),CATIASchematicRoot::MetaObject(),(void *)CreateTIECATIASchematicRoot##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchematicRoot(classe) \
 \
 \
declare_TIE_CATIASchematicRoot(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchematicRoot##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchematicRoot,"CATIASchematicRoot",CATIASchematicRoot::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchematicRoot(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchematicRoot, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchematicRoot##classe(classe::MetaObject(),CATIASchematicRoot::MetaObject(),(void *)CreateTIECATIASchematicRoot##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchematicRoot(classe) TIE_CATIASchematicRoot(classe)
#else
#define BOA_CATIASchematicRoot(classe) CATImplementBOA(CATIASchematicRoot, classe)
#endif

#endif
