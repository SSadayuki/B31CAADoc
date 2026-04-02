#ifndef __TIE_CATIADocument
#define __TIE_CATIADocument

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADocument.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADocument */
#define declare_TIE_CATIADocument(classe) \
 \
 \
class TIECATIADocument##classe : public CATIADocument \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADocument, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_FullName(CATBSTR & oFullNameBSTR); \
      virtual HRESULT __stdcall get_Path(CATBSTR & oPathBSTR); \
      virtual HRESULT __stdcall get_ReadOnly(CAT_VARIANT_BOOL & oReadOnly); \
      virtual HRESULT __stdcall get_Saved(CAT_VARIANT_BOOL & oSaved); \
      virtual HRESULT __stdcall get_SeeHiddenElements(CAT_VARIANT_BOOL & oSeeHiddenElements); \
      virtual HRESULT __stdcall put_SeeHiddenElements(CAT_VARIANT_BOOL iSeeHiddenElements); \
      virtual HRESULT __stdcall get_Cameras(CATIACameras *& oCameras); \
      virtual HRESULT __stdcall get_Selection(CATIASelection *& oSelection); \
      virtual HRESULT __stdcall get_CurrentLayer(CATBSTR & oCurrentLayer); \
      virtual HRESULT __stdcall put_CurrentLayer(const CATBSTR & iCurrentLayer); \
      virtual HRESULT __stdcall get_CurrentFilter(CATBSTR & oCurrentFilter); \
      virtual HRESULT __stdcall put_CurrentFilter(const CATBSTR & iCurrentFilter); \
      virtual HRESULT __stdcall CreateFilter(const CATBSTR & iFilterName, const CATBSTR & iFilterDefinition); \
      virtual HRESULT __stdcall RemoveFilter(const CATBSTR & iFilterName); \
      virtual HRESULT __stdcall Indicate2D(const CATBSTR & iMessage, CATSafeArrayVariant & ioDocumentWindowLocation, CATBSTR & oOutputState); \
      virtual HRESULT __stdcall Indicate3D(CATIABase * iPlanarGeometricObject, const CATBSTR & iMessage, CATSafeArrayVariant & ioWindowLocation2D, CATSafeArrayVariant & ioWindowLocation3D, CATBSTR & oOutputState); \
      virtual HRESULT __stdcall CreateReferenceFromName(const CATBSTR & iLabel, CATIAReference *& oRef); \
      virtual HRESULT __stdcall NewWindow(CATIAWindow *& oWindow); \
      virtual HRESULT __stdcall Activate(); \
      virtual HRESULT __stdcall Save(); \
      virtual HRESULT __stdcall SaveAs(const CATBSTR & fileName); \
      virtual HRESULT __stdcall ExportData(const CATBSTR & fileName, const CATBSTR & format); \
      virtual HRESULT __stdcall Close(); \
      virtual HRESULT __stdcall GetWorkbench(const CATBSTR & workbenchName, CATIAWorkbench *& workbench); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADocument(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_FullName(CATBSTR & oFullNameBSTR); \
virtual HRESULT __stdcall get_Path(CATBSTR & oPathBSTR); \
virtual HRESULT __stdcall get_ReadOnly(CAT_VARIANT_BOOL & oReadOnly); \
virtual HRESULT __stdcall get_Saved(CAT_VARIANT_BOOL & oSaved); \
virtual HRESULT __stdcall get_SeeHiddenElements(CAT_VARIANT_BOOL & oSeeHiddenElements); \
virtual HRESULT __stdcall put_SeeHiddenElements(CAT_VARIANT_BOOL iSeeHiddenElements); \
virtual HRESULT __stdcall get_Cameras(CATIACameras *& oCameras); \
virtual HRESULT __stdcall get_Selection(CATIASelection *& oSelection); \
virtual HRESULT __stdcall get_CurrentLayer(CATBSTR & oCurrentLayer); \
virtual HRESULT __stdcall put_CurrentLayer(const CATBSTR & iCurrentLayer); \
virtual HRESULT __stdcall get_CurrentFilter(CATBSTR & oCurrentFilter); \
virtual HRESULT __stdcall put_CurrentFilter(const CATBSTR & iCurrentFilter); \
virtual HRESULT __stdcall CreateFilter(const CATBSTR & iFilterName, const CATBSTR & iFilterDefinition); \
virtual HRESULT __stdcall RemoveFilter(const CATBSTR & iFilterName); \
virtual HRESULT __stdcall Indicate2D(const CATBSTR & iMessage, CATSafeArrayVariant & ioDocumentWindowLocation, CATBSTR & oOutputState); \
virtual HRESULT __stdcall Indicate3D(CATIABase * iPlanarGeometricObject, const CATBSTR & iMessage, CATSafeArrayVariant & ioWindowLocation2D, CATSafeArrayVariant & ioWindowLocation3D, CATBSTR & oOutputState); \
virtual HRESULT __stdcall CreateReferenceFromName(const CATBSTR & iLabel, CATIAReference *& oRef); \
virtual HRESULT __stdcall NewWindow(CATIAWindow *& oWindow); \
virtual HRESULT __stdcall Activate(); \
virtual HRESULT __stdcall Save(); \
virtual HRESULT __stdcall SaveAs(const CATBSTR & fileName); \
virtual HRESULT __stdcall ExportData(const CATBSTR & fileName, const CATBSTR & format); \
virtual HRESULT __stdcall Close(); \
virtual HRESULT __stdcall GetWorkbench(const CATBSTR & workbenchName, CATIAWorkbench *& workbench); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADocument(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_FullName(CATBSTR & oFullNameBSTR) \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)get_FullName(oFullNameBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::get_Path(CATBSTR & oPathBSTR) \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)get_Path(oPathBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReadOnly(CAT_VARIANT_BOOL & oReadOnly) \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)get_ReadOnly(oReadOnly)); \
} \
HRESULT __stdcall  ENVTIEName::get_Saved(CAT_VARIANT_BOOL & oSaved) \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)get_Saved(oSaved)); \
} \
HRESULT __stdcall  ENVTIEName::get_SeeHiddenElements(CAT_VARIANT_BOOL & oSeeHiddenElements) \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)get_SeeHiddenElements(oSeeHiddenElements)); \
} \
HRESULT __stdcall  ENVTIEName::put_SeeHiddenElements(CAT_VARIANT_BOOL iSeeHiddenElements) \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)put_SeeHiddenElements(iSeeHiddenElements)); \
} \
HRESULT __stdcall  ENVTIEName::get_Cameras(CATIACameras *& oCameras) \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)get_Cameras(oCameras)); \
} \
HRESULT __stdcall  ENVTIEName::get_Selection(CATIASelection *& oSelection) \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)get_Selection(oSelection)); \
} \
HRESULT __stdcall  ENVTIEName::get_CurrentLayer(CATBSTR & oCurrentLayer) \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)get_CurrentLayer(oCurrentLayer)); \
} \
HRESULT __stdcall  ENVTIEName::put_CurrentLayer(const CATBSTR & iCurrentLayer) \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)put_CurrentLayer(iCurrentLayer)); \
} \
HRESULT __stdcall  ENVTIEName::get_CurrentFilter(CATBSTR & oCurrentFilter) \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)get_CurrentFilter(oCurrentFilter)); \
} \
HRESULT __stdcall  ENVTIEName::put_CurrentFilter(const CATBSTR & iCurrentFilter) \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)put_CurrentFilter(iCurrentFilter)); \
} \
HRESULT __stdcall  ENVTIEName::CreateFilter(const CATBSTR & iFilterName, const CATBSTR & iFilterDefinition) \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)CreateFilter(iFilterName,iFilterDefinition)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveFilter(const CATBSTR & iFilterName) \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)RemoveFilter(iFilterName)); \
} \
HRESULT __stdcall  ENVTIEName::Indicate2D(const CATBSTR & iMessage, CATSafeArrayVariant & ioDocumentWindowLocation, CATBSTR & oOutputState) \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)Indicate2D(iMessage,ioDocumentWindowLocation,oOutputState)); \
} \
HRESULT __stdcall  ENVTIEName::Indicate3D(CATIABase * iPlanarGeometricObject, const CATBSTR & iMessage, CATSafeArrayVariant & ioWindowLocation2D, CATSafeArrayVariant & ioWindowLocation3D, CATBSTR & oOutputState) \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)Indicate3D(iPlanarGeometricObject,iMessage,ioWindowLocation2D,ioWindowLocation3D,oOutputState)); \
} \
HRESULT __stdcall  ENVTIEName::CreateReferenceFromName(const CATBSTR & iLabel, CATIAReference *& oRef) \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)CreateReferenceFromName(iLabel,oRef)); \
} \
HRESULT __stdcall  ENVTIEName::NewWindow(CATIAWindow *& oWindow) \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)NewWindow(oWindow)); \
} \
HRESULT __stdcall  ENVTIEName::Activate() \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)Activate()); \
} \
HRESULT __stdcall  ENVTIEName::Save() \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)Save()); \
} \
HRESULT __stdcall  ENVTIEName::SaveAs(const CATBSTR & fileName) \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)SaveAs(fileName)); \
} \
HRESULT __stdcall  ENVTIEName::ExportData(const CATBSTR & fileName, const CATBSTR & format) \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)ExportData(fileName,format)); \
} \
HRESULT __stdcall  ENVTIEName::Close() \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)Close()); \
} \
HRESULT __stdcall  ENVTIEName::GetWorkbench(const CATBSTR & workbenchName, CATIAWorkbench *& workbench) \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)GetWorkbench(workbenchName,workbench)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADocument,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADocument(classe)    TIECATIADocument##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADocument(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADocument, classe) \
 \
 \
CATImplementTIEMethods(CATIADocument, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADocument, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADocument, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADocument, classe) \
 \
HRESULT __stdcall  TIECATIADocument##classe::get_FullName(CATBSTR & oFullNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oFullNameBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FullName(oFullNameBSTR); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oFullNameBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocument##classe::get_Path(CATBSTR & oPathBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oPathBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Path(oPathBSTR); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oPathBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocument##classe::get_ReadOnly(CAT_VARIANT_BOOL & oReadOnly) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oReadOnly); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReadOnly(oReadOnly); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oReadOnly); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocument##classe::get_Saved(CAT_VARIANT_BOOL & oSaved) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oSaved); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Saved(oSaved); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oSaved); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocument##classe::get_SeeHiddenElements(CAT_VARIANT_BOOL & oSeeHiddenElements) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oSeeHiddenElements); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SeeHiddenElements(oSeeHiddenElements); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oSeeHiddenElements); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocument##classe::put_SeeHiddenElements(CAT_VARIANT_BOOL iSeeHiddenElements) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iSeeHiddenElements); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SeeHiddenElements(iSeeHiddenElements); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iSeeHiddenElements); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocument##classe::get_Cameras(CATIACameras *& oCameras) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oCameras); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Cameras(oCameras); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oCameras); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocument##classe::get_Selection(CATIASelection *& oSelection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oSelection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Selection(oSelection); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oSelection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocument##classe::get_CurrentLayer(CATBSTR & oCurrentLayer) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oCurrentLayer); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CurrentLayer(oCurrentLayer); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oCurrentLayer); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocument##classe::put_CurrentLayer(const CATBSTR & iCurrentLayer) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iCurrentLayer); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CurrentLayer(iCurrentLayer); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iCurrentLayer); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocument##classe::get_CurrentFilter(CATBSTR & oCurrentFilter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oCurrentFilter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CurrentFilter(oCurrentFilter); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oCurrentFilter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocument##classe::put_CurrentFilter(const CATBSTR & iCurrentFilter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iCurrentFilter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CurrentFilter(iCurrentFilter); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iCurrentFilter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocument##classe::CreateFilter(const CATBSTR & iFilterName, const CATBSTR & iFilterDefinition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iFilterName,&iFilterDefinition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateFilter(iFilterName,iFilterDefinition); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iFilterName,&iFilterDefinition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocument##classe::RemoveFilter(const CATBSTR & iFilterName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iFilterName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveFilter(iFilterName); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iFilterName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocument##classe::Indicate2D(const CATBSTR & iMessage, CATSafeArrayVariant & ioDocumentWindowLocation, CATBSTR & oOutputState) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iMessage,&ioDocumentWindowLocation,&oOutputState); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Indicate2D(iMessage,ioDocumentWindowLocation,oOutputState); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iMessage,&ioDocumentWindowLocation,&oOutputState); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocument##classe::Indicate3D(CATIABase * iPlanarGeometricObject, const CATBSTR & iMessage, CATSafeArrayVariant & ioWindowLocation2D, CATSafeArrayVariant & ioWindowLocation3D, CATBSTR & oOutputState) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iPlanarGeometricObject,&iMessage,&ioWindowLocation2D,&ioWindowLocation3D,&oOutputState); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Indicate3D(iPlanarGeometricObject,iMessage,ioWindowLocation2D,ioWindowLocation3D,oOutputState); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iPlanarGeometricObject,&iMessage,&ioWindowLocation2D,&ioWindowLocation3D,&oOutputState); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocument##classe::CreateReferenceFromName(const CATBSTR & iLabel, CATIAReference *& oRef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iLabel,&oRef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateReferenceFromName(iLabel,oRef); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iLabel,&oRef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocument##classe::NewWindow(CATIAWindow *& oWindow) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oWindow); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->NewWindow(oWindow); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oWindow); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocument##classe::Activate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate(); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocument##classe::Save() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Save(); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocument##classe::SaveAs(const CATBSTR & fileName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&fileName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveAs(fileName); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&fileName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocument##classe::ExportData(const CATBSTR & fileName, const CATBSTR & format) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&fileName,&format); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExportData(fileName,format); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&fileName,&format); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocument##classe::Close() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Close(); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocument##classe::GetWorkbench(const CATBSTR & workbenchName, CATIAWorkbench *& workbench) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&workbenchName,&workbench); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetWorkbench(workbenchName,workbench); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&workbenchName,&workbench); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADocument##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADocument##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADocument##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADocument##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADocument##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADocument(classe) \
 \
 \
declare_TIE_CATIADocument(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADocument##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADocument,"CATIADocument",CATIADocument::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADocument(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADocument, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADocument##classe(classe::MetaObject(),CATIADocument::MetaObject(),(void *)CreateTIECATIADocument##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADocument(classe) \
 \
 \
declare_TIE_CATIADocument(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADocument##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADocument,"CATIADocument",CATIADocument::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADocument(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADocument, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADocument##classe(classe::MetaObject(),CATIADocument::MetaObject(),(void *)CreateTIECATIADocument##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADocument(classe) TIE_CATIADocument(classe)
#else
#define BOA_CATIADocument(classe) CATImplementBOA(CATIADocument, classe)
#endif

#endif
