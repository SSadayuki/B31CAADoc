#ifndef __TIE_CATIAAnalysisImage
#define __TIE_CATIAAnalysisImage

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAnalysisImage.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnalysisImage */
#define declare_TIE_CATIAAnalysisImage(classe) \
 \
 \
class TIECATIAAnalysisImage##classe : public CATIAAnalysisImage \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnalysisImage, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_AnalysisImages(CATIAAnalysisImages *& oAnalysisImages); \
      virtual HRESULT __stdcall get_AnalysisColorMap(CATIAAnalysisColorMap *& oAnalysisColorMap); \
      virtual HRESULT __stdcall ExportData(CATIAFolder * iFolder, const CATBSTR & iFileName, const CATBSTR & iExtensionType); \
      virtual HRESULT __stdcall SetActivationStatus(const CATVariant & iActivationStatus); \
      virtual HRESULT __stdcall SetSelection(CATIAReference * iReference, const CATVariant & iReplaceMode); \
      virtual HRESULT __stdcall ResetSelection(); \
      virtual HRESULT __stdcall SetCurrentOccurrence(const CATVariant & iOccurrenceNumber); \
      virtual HRESULT __stdcall Update(); \
      virtual HRESULT __stdcall ExportDataWithMeshPartId(CATIAFolder * iFolder, const CATBSTR & iFileName, const CATBSTR & iExtensionType); \
      virtual HRESULT __stdcall ExportDataInGlobalAxis(CATIAFolder * iFolder, const CATBSTR & iFileName, const CATBSTR & iExtensionType, CATAxisOrientationType iAxisOrientationType, CAT_VARIANT_BOOL iExportMeshPartID); \
      virtual HRESULT __stdcall ExportDataInUserAxis(CATIAFolder * iFolder, const CATBSTR & iFileName, const CATBSTR & iExtensionType, CATIAAxisSystem * iAxisSystem, CATIAProduct * iProduct, CATAxisOrientationType iAxisOrientationType, CAT_VARIANT_BOOL iExportMeshPartID); \
      virtual HRESULT __stdcall ExportDataInAnyUserAxis(CATIAFolder * iFolder, const CATBSTR & iFileName, const CATBSTR & iExtensionType, CATIABase * iAxisSystem, CATIAProduct * iProduct, CATAxisOrientationType iAxisOrientationType, CAT_VARIANT_BOOL iExportMeshPartID); \
      virtual HRESULT __stdcall ExportDataInManualAxis(CATIAFolder * iFolder, const CATBSTR & iFileName, const CATBSTR & iExtensionType, const CATSafeArrayVariant & iOrigin, const CATSafeArrayVariant & iXDirection, const CATSafeArrayVariant & iYDirection, const CATSafeArrayVariant & iZDirection, CATAxisOrientationType iAxisOrientationType, CAT_VARIANT_BOOL iExportMeshPartID); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAnalysisImage(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_AnalysisImages(CATIAAnalysisImages *& oAnalysisImages); \
virtual HRESULT __stdcall get_AnalysisColorMap(CATIAAnalysisColorMap *& oAnalysisColorMap); \
virtual HRESULT __stdcall ExportData(CATIAFolder * iFolder, const CATBSTR & iFileName, const CATBSTR & iExtensionType); \
virtual HRESULT __stdcall SetActivationStatus(const CATVariant & iActivationStatus); \
virtual HRESULT __stdcall SetSelection(CATIAReference * iReference, const CATVariant & iReplaceMode); \
virtual HRESULT __stdcall ResetSelection(); \
virtual HRESULT __stdcall SetCurrentOccurrence(const CATVariant & iOccurrenceNumber); \
virtual HRESULT __stdcall Update(); \
virtual HRESULT __stdcall ExportDataWithMeshPartId(CATIAFolder * iFolder, const CATBSTR & iFileName, const CATBSTR & iExtensionType); \
virtual HRESULT __stdcall ExportDataInGlobalAxis(CATIAFolder * iFolder, const CATBSTR & iFileName, const CATBSTR & iExtensionType, CATAxisOrientationType iAxisOrientationType, CAT_VARIANT_BOOL iExportMeshPartID); \
virtual HRESULT __stdcall ExportDataInUserAxis(CATIAFolder * iFolder, const CATBSTR & iFileName, const CATBSTR & iExtensionType, CATIAAxisSystem * iAxisSystem, CATIAProduct * iProduct, CATAxisOrientationType iAxisOrientationType, CAT_VARIANT_BOOL iExportMeshPartID); \
virtual HRESULT __stdcall ExportDataInAnyUserAxis(CATIAFolder * iFolder, const CATBSTR & iFileName, const CATBSTR & iExtensionType, CATIABase * iAxisSystem, CATIAProduct * iProduct, CATAxisOrientationType iAxisOrientationType, CAT_VARIANT_BOOL iExportMeshPartID); \
virtual HRESULT __stdcall ExportDataInManualAxis(CATIAFolder * iFolder, const CATBSTR & iFileName, const CATBSTR & iExtensionType, const CATSafeArrayVariant & iOrigin, const CATSafeArrayVariant & iXDirection, const CATSafeArrayVariant & iYDirection, const CATSafeArrayVariant & iZDirection, CATAxisOrientationType iAxisOrientationType, CAT_VARIANT_BOOL iExportMeshPartID); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAnalysisImage(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_AnalysisImages(CATIAAnalysisImages *& oAnalysisImages) \
{ \
return (ENVTIECALL(CATIAAnalysisImage,ENVTIETypeLetter,ENVTIELetter)get_AnalysisImages(oAnalysisImages)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnalysisColorMap(CATIAAnalysisColorMap *& oAnalysisColorMap) \
{ \
return (ENVTIECALL(CATIAAnalysisImage,ENVTIETypeLetter,ENVTIELetter)get_AnalysisColorMap(oAnalysisColorMap)); \
} \
HRESULT __stdcall  ENVTIEName::ExportData(CATIAFolder * iFolder, const CATBSTR & iFileName, const CATBSTR & iExtensionType) \
{ \
return (ENVTIECALL(CATIAAnalysisImage,ENVTIETypeLetter,ENVTIELetter)ExportData(iFolder,iFileName,iExtensionType)); \
} \
HRESULT __stdcall  ENVTIEName::SetActivationStatus(const CATVariant & iActivationStatus) \
{ \
return (ENVTIECALL(CATIAAnalysisImage,ENVTIETypeLetter,ENVTIELetter)SetActivationStatus(iActivationStatus)); \
} \
HRESULT __stdcall  ENVTIEName::SetSelection(CATIAReference * iReference, const CATVariant & iReplaceMode) \
{ \
return (ENVTIECALL(CATIAAnalysisImage,ENVTIETypeLetter,ENVTIELetter)SetSelection(iReference,iReplaceMode)); \
} \
HRESULT __stdcall  ENVTIEName::ResetSelection() \
{ \
return (ENVTIECALL(CATIAAnalysisImage,ENVTIETypeLetter,ENVTIELetter)ResetSelection()); \
} \
HRESULT __stdcall  ENVTIEName::SetCurrentOccurrence(const CATVariant & iOccurrenceNumber) \
{ \
return (ENVTIECALL(CATIAAnalysisImage,ENVTIETypeLetter,ENVTIELetter)SetCurrentOccurrence(iOccurrenceNumber)); \
} \
HRESULT __stdcall  ENVTIEName::Update() \
{ \
return (ENVTIECALL(CATIAAnalysisImage,ENVTIETypeLetter,ENVTIELetter)Update()); \
} \
HRESULT __stdcall  ENVTIEName::ExportDataWithMeshPartId(CATIAFolder * iFolder, const CATBSTR & iFileName, const CATBSTR & iExtensionType) \
{ \
return (ENVTIECALL(CATIAAnalysisImage,ENVTIETypeLetter,ENVTIELetter)ExportDataWithMeshPartId(iFolder,iFileName,iExtensionType)); \
} \
HRESULT __stdcall  ENVTIEName::ExportDataInGlobalAxis(CATIAFolder * iFolder, const CATBSTR & iFileName, const CATBSTR & iExtensionType, CATAxisOrientationType iAxisOrientationType, CAT_VARIANT_BOOL iExportMeshPartID) \
{ \
return (ENVTIECALL(CATIAAnalysisImage,ENVTIETypeLetter,ENVTIELetter)ExportDataInGlobalAxis(iFolder,iFileName,iExtensionType,iAxisOrientationType,iExportMeshPartID)); \
} \
HRESULT __stdcall  ENVTIEName::ExportDataInUserAxis(CATIAFolder * iFolder, const CATBSTR & iFileName, const CATBSTR & iExtensionType, CATIAAxisSystem * iAxisSystem, CATIAProduct * iProduct, CATAxisOrientationType iAxisOrientationType, CAT_VARIANT_BOOL iExportMeshPartID) \
{ \
return (ENVTIECALL(CATIAAnalysisImage,ENVTIETypeLetter,ENVTIELetter)ExportDataInUserAxis(iFolder,iFileName,iExtensionType,iAxisSystem,iProduct,iAxisOrientationType,iExportMeshPartID)); \
} \
HRESULT __stdcall  ENVTIEName::ExportDataInAnyUserAxis(CATIAFolder * iFolder, const CATBSTR & iFileName, const CATBSTR & iExtensionType, CATIABase * iAxisSystem, CATIAProduct * iProduct, CATAxisOrientationType iAxisOrientationType, CAT_VARIANT_BOOL iExportMeshPartID) \
{ \
return (ENVTIECALL(CATIAAnalysisImage,ENVTIETypeLetter,ENVTIELetter)ExportDataInAnyUserAxis(iFolder,iFileName,iExtensionType,iAxisSystem,iProduct,iAxisOrientationType,iExportMeshPartID)); \
} \
HRESULT __stdcall  ENVTIEName::ExportDataInManualAxis(CATIAFolder * iFolder, const CATBSTR & iFileName, const CATBSTR & iExtensionType, const CATSafeArrayVariant & iOrigin, const CATSafeArrayVariant & iXDirection, const CATSafeArrayVariant & iYDirection, const CATSafeArrayVariant & iZDirection, CATAxisOrientationType iAxisOrientationType, CAT_VARIANT_BOOL iExportMeshPartID) \
{ \
return (ENVTIECALL(CATIAAnalysisImage,ENVTIETypeLetter,ENVTIELetter)ExportDataInManualAxis(iFolder,iFileName,iExtensionType,iOrigin,iXDirection,iYDirection,iZDirection,iAxisOrientationType,iExportMeshPartID)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnalysisImage,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnalysisImage,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisImage,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisImage,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAnalysisImage,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnalysisImage(classe)    TIECATIAAnalysisImage##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnalysisImage(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnalysisImage, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnalysisImage, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnalysisImage, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnalysisImage, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnalysisImage, classe) \
 \
HRESULT __stdcall  TIECATIAAnalysisImage##classe::get_AnalysisImages(CATIAAnalysisImages *& oAnalysisImages) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oAnalysisImages); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnalysisImages(oAnalysisImages); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oAnalysisImages); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisImage##classe::get_AnalysisColorMap(CATIAAnalysisColorMap *& oAnalysisColorMap) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oAnalysisColorMap); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnalysisColorMap(oAnalysisColorMap); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oAnalysisColorMap); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisImage##classe::ExportData(CATIAFolder * iFolder, const CATBSTR & iFileName, const CATBSTR & iExtensionType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iFolder,&iFileName,&iExtensionType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExportData(iFolder,iFileName,iExtensionType); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iFolder,&iFileName,&iExtensionType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisImage##classe::SetActivationStatus(const CATVariant & iActivationStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iActivationStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetActivationStatus(iActivationStatus); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iActivationStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisImage##classe::SetSelection(CATIAReference * iReference, const CATVariant & iReplaceMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iReference,&iReplaceMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSelection(iReference,iReplaceMode); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iReference,&iReplaceMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisImage##classe::ResetSelection() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetSelection(); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisImage##classe::SetCurrentOccurrence(const CATVariant & iOccurrenceNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iOccurrenceNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCurrentOccurrence(iOccurrenceNumber); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iOccurrenceNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisImage##classe::Update() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Update(); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisImage##classe::ExportDataWithMeshPartId(CATIAFolder * iFolder, const CATBSTR & iFileName, const CATBSTR & iExtensionType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iFolder,&iFileName,&iExtensionType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExportDataWithMeshPartId(iFolder,iFileName,iExtensionType); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iFolder,&iFileName,&iExtensionType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisImage##classe::ExportDataInGlobalAxis(CATIAFolder * iFolder, const CATBSTR & iFileName, const CATBSTR & iExtensionType, CATAxisOrientationType iAxisOrientationType, CAT_VARIANT_BOOL iExportMeshPartID) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iFolder,&iFileName,&iExtensionType,&iAxisOrientationType,&iExportMeshPartID); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExportDataInGlobalAxis(iFolder,iFileName,iExtensionType,iAxisOrientationType,iExportMeshPartID); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iFolder,&iFileName,&iExtensionType,&iAxisOrientationType,&iExportMeshPartID); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisImage##classe::ExportDataInUserAxis(CATIAFolder * iFolder, const CATBSTR & iFileName, const CATBSTR & iExtensionType, CATIAAxisSystem * iAxisSystem, CATIAProduct * iProduct, CATAxisOrientationType iAxisOrientationType, CAT_VARIANT_BOOL iExportMeshPartID) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iFolder,&iFileName,&iExtensionType,&iAxisSystem,&iProduct,&iAxisOrientationType,&iExportMeshPartID); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExportDataInUserAxis(iFolder,iFileName,iExtensionType,iAxisSystem,iProduct,iAxisOrientationType,iExportMeshPartID); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iFolder,&iFileName,&iExtensionType,&iAxisSystem,&iProduct,&iAxisOrientationType,&iExportMeshPartID); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisImage##classe::ExportDataInAnyUserAxis(CATIAFolder * iFolder, const CATBSTR & iFileName, const CATBSTR & iExtensionType, CATIABase * iAxisSystem, CATIAProduct * iProduct, CATAxisOrientationType iAxisOrientationType, CAT_VARIANT_BOOL iExportMeshPartID) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iFolder,&iFileName,&iExtensionType,&iAxisSystem,&iProduct,&iAxisOrientationType,&iExportMeshPartID); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExportDataInAnyUserAxis(iFolder,iFileName,iExtensionType,iAxisSystem,iProduct,iAxisOrientationType,iExportMeshPartID); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iFolder,&iFileName,&iExtensionType,&iAxisSystem,&iProduct,&iAxisOrientationType,&iExportMeshPartID); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisImage##classe::ExportDataInManualAxis(CATIAFolder * iFolder, const CATBSTR & iFileName, const CATBSTR & iExtensionType, const CATSafeArrayVariant & iOrigin, const CATSafeArrayVariant & iXDirection, const CATSafeArrayVariant & iYDirection, const CATSafeArrayVariant & iZDirection, CATAxisOrientationType iAxisOrientationType, CAT_VARIANT_BOOL iExportMeshPartID) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iFolder,&iFileName,&iExtensionType,&iOrigin,&iXDirection,&iYDirection,&iZDirection,&iAxisOrientationType,&iExportMeshPartID); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExportDataInManualAxis(iFolder,iFileName,iExtensionType,iOrigin,iXDirection,iYDirection,iZDirection,iAxisOrientationType,iExportMeshPartID); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iFolder,&iFileName,&iExtensionType,&iOrigin,&iXDirection,&iYDirection,&iZDirection,&iAxisOrientationType,&iExportMeshPartID); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisImage##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisImage##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisImage##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisImage##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisImage##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnalysisImage(classe) \
 \
 \
declare_TIE_CATIAAnalysisImage(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisImage##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisImage,"CATIAAnalysisImage",CATIAAnalysisImage::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisImage(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnalysisImage, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisImage##classe(classe::MetaObject(),CATIAAnalysisImage::MetaObject(),(void *)CreateTIECATIAAnalysisImage##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnalysisImage(classe) \
 \
 \
declare_TIE_CATIAAnalysisImage(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisImage##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisImage,"CATIAAnalysisImage",CATIAAnalysisImage::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisImage(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnalysisImage, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisImage##classe(classe::MetaObject(),CATIAAnalysisImage::MetaObject(),(void *)CreateTIECATIAAnalysisImage##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnalysisImage(classe) TIE_CATIAAnalysisImage(classe)
#else
#define BOA_CATIAAnalysisImage(classe) CATImplementBOA(CATIAAnalysisImage, classe)
#endif

#endif
