#ifndef __TIE_CATIASelection
#define __TIE_CATIASelection

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASelection.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASelection */
#define declare_TIE_CATIASelection(classe) \
 \
 \
class TIECATIASelection##classe : public CATIASelection \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASelection, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Add(CATIABase * iObject); \
      virtual HRESULT __stdcall Clear(); \
      virtual HRESULT __stdcall Cut(); \
      virtual HRESULT __stdcall Copy(); \
      virtual HRESULT __stdcall Paste(); \
      virtual HRESULT __stdcall PasteSpecial(const CATBSTR & iFormat); \
      virtual HRESULT __stdcall PasteLink(); \
      virtual HRESULT __stdcall Delete(); \
      virtual HRESULT __stdcall Remove(CATLONG iIndex); \
      virtual HRESULT __stdcall Remove2(CATLONG iIndex); \
      virtual HRESULT __stdcall FindObject(const CATBSTR & iObjectType, CATIABase *& oObject); \
      virtual HRESULT __stdcall Search(const CATBSTR & iStringBSTR); \
      virtual HRESULT __stdcall get_Selection(CATIASelection *& oSelection); \
      virtual HRESULT __stdcall get_VisProperties(CATIAVisPropertySet *& oVisProperties); \
      virtual HRESULT __stdcall get_Count(CATLONG & oCount); \
      virtual HRESULT __stdcall get_Count2(CATLONG & oCount); \
      virtual HRESULT __stdcall Item(CATLONG iIndex, CATIASelectedElement *& oElement); \
      virtual HRESULT __stdcall Item2(CATLONG iIndex, CATIASelectedElement *& oElement); \
      virtual HRESULT __stdcall FilterCorrespondence(const CATSafeArrayVariant & iFilterType, CAT_VARIANT_BOOL & oAllFit); \
      virtual HRESULT __stdcall SelectElement2(const CATSafeArrayVariant & iFilterType, const CATBSTR & iMessage, CAT_VARIANT_BOOL iObjectSelectionBeforeCommandUsePossibility, CATBSTR & oOutputState); \
      virtual HRESULT __stdcall SelectElement3(const CATSafeArrayVariant & iFilterType, const CATBSTR & iMessage, CAT_VARIANT_BOOL iObjectSelectionBeforeCommandUsePossibility, CATMultiSelectionMode iMultiSelectionMode, CAT_VARIANT_BOOL iTooltip, CATBSTR & oOutputState); \
      virtual HRESULT __stdcall SelectElement4(const CATSafeArrayVariant & iFilterType, const CATBSTR & iActiveDocumentMessage, const CATBSTR & iNonActiveDocumentMessage, CAT_VARIANT_BOOL iTooltip, CATIADocument *& oDocument, CATBSTR & oOutputState); \
      virtual HRESULT __stdcall IndicateOrSelectElement2D(const CATBSTR & iMessage, const CATSafeArrayVariant & iFilterType, CAT_VARIANT_BOOL iObjectSelectionBeforeCommandUsePossibility, CAT_VARIANT_BOOL iTooltip, CAT_VARIANT_BOOL iTriggeringOnMouseMove, CAT_VARIANT_BOOL & oObjectSelected, CATSafeArrayVariant & oDocumentWindowLocation, CATBSTR & oOutputState); \
      virtual HRESULT __stdcall IndicateOrSelectElement3D(CATIABase * iPlanarGeometricObject, const CATBSTR & iMessage, const CATSafeArrayVariant & iFilterType, CAT_VARIANT_BOOL iObjectSelectionBeforeCommandUsePossibility, CAT_VARIANT_BOOL iTooltip, CAT_VARIANT_BOOL iTriggeringOnMouseMove, CAT_VARIANT_BOOL & oObjectSelected, CATSafeArrayVariant & oWindowLocation2D, CATSafeArrayVariant & oWindowLocation3D, CATBSTR & oOutputState); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASelection(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Add(CATIABase * iObject); \
virtual HRESULT __stdcall Clear(); \
virtual HRESULT __stdcall Cut(); \
virtual HRESULT __stdcall Copy(); \
virtual HRESULT __stdcall Paste(); \
virtual HRESULT __stdcall PasteSpecial(const CATBSTR & iFormat); \
virtual HRESULT __stdcall PasteLink(); \
virtual HRESULT __stdcall Delete(); \
virtual HRESULT __stdcall Remove(CATLONG iIndex); \
virtual HRESULT __stdcall Remove2(CATLONG iIndex); \
virtual HRESULT __stdcall FindObject(const CATBSTR & iObjectType, CATIABase *& oObject); \
virtual HRESULT __stdcall Search(const CATBSTR & iStringBSTR); \
virtual HRESULT __stdcall get_Selection(CATIASelection *& oSelection); \
virtual HRESULT __stdcall get_VisProperties(CATIAVisPropertySet *& oVisProperties); \
virtual HRESULT __stdcall get_Count(CATLONG & oCount); \
virtual HRESULT __stdcall get_Count2(CATLONG & oCount); \
virtual HRESULT __stdcall Item(CATLONG iIndex, CATIASelectedElement *& oElement); \
virtual HRESULT __stdcall Item2(CATLONG iIndex, CATIASelectedElement *& oElement); \
virtual HRESULT __stdcall FilterCorrespondence(const CATSafeArrayVariant & iFilterType, CAT_VARIANT_BOOL & oAllFit); \
virtual HRESULT __stdcall SelectElement2(const CATSafeArrayVariant & iFilterType, const CATBSTR & iMessage, CAT_VARIANT_BOOL iObjectSelectionBeforeCommandUsePossibility, CATBSTR & oOutputState); \
virtual HRESULT __stdcall SelectElement3(const CATSafeArrayVariant & iFilterType, const CATBSTR & iMessage, CAT_VARIANT_BOOL iObjectSelectionBeforeCommandUsePossibility, CATMultiSelectionMode iMultiSelectionMode, CAT_VARIANT_BOOL iTooltip, CATBSTR & oOutputState); \
virtual HRESULT __stdcall SelectElement4(const CATSafeArrayVariant & iFilterType, const CATBSTR & iActiveDocumentMessage, const CATBSTR & iNonActiveDocumentMessage, CAT_VARIANT_BOOL iTooltip, CATIADocument *& oDocument, CATBSTR & oOutputState); \
virtual HRESULT __stdcall IndicateOrSelectElement2D(const CATBSTR & iMessage, const CATSafeArrayVariant & iFilterType, CAT_VARIANT_BOOL iObjectSelectionBeforeCommandUsePossibility, CAT_VARIANT_BOOL iTooltip, CAT_VARIANT_BOOL iTriggeringOnMouseMove, CAT_VARIANT_BOOL & oObjectSelected, CATSafeArrayVariant & oDocumentWindowLocation, CATBSTR & oOutputState); \
virtual HRESULT __stdcall IndicateOrSelectElement3D(CATIABase * iPlanarGeometricObject, const CATBSTR & iMessage, const CATSafeArrayVariant & iFilterType, CAT_VARIANT_BOOL iObjectSelectionBeforeCommandUsePossibility, CAT_VARIANT_BOOL iTooltip, CAT_VARIANT_BOOL iTriggeringOnMouseMove, CAT_VARIANT_BOOL & oObjectSelected, CATSafeArrayVariant & oWindowLocation2D, CATSafeArrayVariant & oWindowLocation3D, CATBSTR & oOutputState); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASelection(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Add(CATIABase * iObject) \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)Add(iObject)); \
} \
HRESULT __stdcall  ENVTIEName::Clear() \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)Clear()); \
} \
HRESULT __stdcall  ENVTIEName::Cut() \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)Cut()); \
} \
HRESULT __stdcall  ENVTIEName::Copy() \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)Copy()); \
} \
HRESULT __stdcall  ENVTIEName::Paste() \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)Paste()); \
} \
HRESULT __stdcall  ENVTIEName::PasteSpecial(const CATBSTR & iFormat) \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)PasteSpecial(iFormat)); \
} \
HRESULT __stdcall  ENVTIEName::PasteLink() \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)PasteLink()); \
} \
HRESULT __stdcall  ENVTIEName::Delete() \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)Delete()); \
} \
HRESULT __stdcall  ENVTIEName::Remove(CATLONG iIndex) \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::Remove2(CATLONG iIndex) \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)Remove2(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::FindObject(const CATBSTR & iObjectType, CATIABase *& oObject) \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)FindObject(iObjectType,oObject)); \
} \
HRESULT __stdcall  ENVTIEName::Search(const CATBSTR & iStringBSTR) \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)Search(iStringBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::get_Selection(CATIASelection *& oSelection) \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)get_Selection(oSelection)); \
} \
HRESULT __stdcall  ENVTIEName::get_VisProperties(CATIAVisPropertySet *& oVisProperties) \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)get_VisProperties(oVisProperties)); \
} \
HRESULT __stdcall  ENVTIEName::get_Count(CATLONG & oCount) \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)get_Count(oCount)); \
} \
HRESULT __stdcall  ENVTIEName::get_Count2(CATLONG & oCount) \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)get_Count2(oCount)); \
} \
HRESULT __stdcall  ENVTIEName::Item(CATLONG iIndex, CATIASelectedElement *& oElement) \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oElement)); \
} \
HRESULT __stdcall  ENVTIEName::Item2(CATLONG iIndex, CATIASelectedElement *& oElement) \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)Item2(iIndex,oElement)); \
} \
HRESULT __stdcall  ENVTIEName::FilterCorrespondence(const CATSafeArrayVariant & iFilterType, CAT_VARIANT_BOOL & oAllFit) \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)FilterCorrespondence(iFilterType,oAllFit)); \
} \
HRESULT __stdcall  ENVTIEName::SelectElement2(const CATSafeArrayVariant & iFilterType, const CATBSTR & iMessage, CAT_VARIANT_BOOL iObjectSelectionBeforeCommandUsePossibility, CATBSTR & oOutputState) \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)SelectElement2(iFilterType,iMessage,iObjectSelectionBeforeCommandUsePossibility,oOutputState)); \
} \
HRESULT __stdcall  ENVTIEName::SelectElement3(const CATSafeArrayVariant & iFilterType, const CATBSTR & iMessage, CAT_VARIANT_BOOL iObjectSelectionBeforeCommandUsePossibility, CATMultiSelectionMode iMultiSelectionMode, CAT_VARIANT_BOOL iTooltip, CATBSTR & oOutputState) \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)SelectElement3(iFilterType,iMessage,iObjectSelectionBeforeCommandUsePossibility,iMultiSelectionMode,iTooltip,oOutputState)); \
} \
HRESULT __stdcall  ENVTIEName::SelectElement4(const CATSafeArrayVariant & iFilterType, const CATBSTR & iActiveDocumentMessage, const CATBSTR & iNonActiveDocumentMessage, CAT_VARIANT_BOOL iTooltip, CATIADocument *& oDocument, CATBSTR & oOutputState) \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)SelectElement4(iFilterType,iActiveDocumentMessage,iNonActiveDocumentMessage,iTooltip,oDocument,oOutputState)); \
} \
HRESULT __stdcall  ENVTIEName::IndicateOrSelectElement2D(const CATBSTR & iMessage, const CATSafeArrayVariant & iFilterType, CAT_VARIANT_BOOL iObjectSelectionBeforeCommandUsePossibility, CAT_VARIANT_BOOL iTooltip, CAT_VARIANT_BOOL iTriggeringOnMouseMove, CAT_VARIANT_BOOL & oObjectSelected, CATSafeArrayVariant & oDocumentWindowLocation, CATBSTR & oOutputState) \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)IndicateOrSelectElement2D(iMessage,iFilterType,iObjectSelectionBeforeCommandUsePossibility,iTooltip,iTriggeringOnMouseMove,oObjectSelected,oDocumentWindowLocation,oOutputState)); \
} \
HRESULT __stdcall  ENVTIEName::IndicateOrSelectElement3D(CATIABase * iPlanarGeometricObject, const CATBSTR & iMessage, const CATSafeArrayVariant & iFilterType, CAT_VARIANT_BOOL iObjectSelectionBeforeCommandUsePossibility, CAT_VARIANT_BOOL iTooltip, CAT_VARIANT_BOOL iTriggeringOnMouseMove, CAT_VARIANT_BOOL & oObjectSelected, CATSafeArrayVariant & oWindowLocation2D, CATSafeArrayVariant & oWindowLocation3D, CATBSTR & oOutputState) \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)IndicateOrSelectElement3D(iPlanarGeometricObject,iMessage,iFilterType,iObjectSelectionBeforeCommandUsePossibility,iTooltip,iTriggeringOnMouseMove,oObjectSelected,oWindowLocation2D,oWindowLocation3D,oOutputState)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASelection,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASelection(classe)    TIECATIASelection##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASelection(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASelection, classe) \
 \
 \
CATImplementTIEMethods(CATIASelection, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASelection, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASelection, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASelection, classe) \
 \
HRESULT __stdcall  TIECATIASelection##classe::Add(CATIABase * iObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iObject); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelection##classe::Clear() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Clear(); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelection##classe::Cut() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Cut(); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelection##classe::Copy() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Copy(); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelection##classe::Paste() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Paste(); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelection##classe::PasteSpecial(const CATBSTR & iFormat) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iFormat); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PasteSpecial(iFormat); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iFormat); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelection##classe::PasteLink() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PasteLink(); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelection##classe::Delete() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Delete(); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelection##classe::Remove(CATLONG iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelection##classe::Remove2(CATLONG iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove2(iIndex); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelection##classe::FindObject(const CATBSTR & iObjectType, CATIABase *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iObjectType,&oObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FindObject(iObjectType,oObject); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iObjectType,&oObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelection##classe::Search(const CATBSTR & iStringBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iStringBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Search(iStringBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iStringBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelection##classe::get_Selection(CATIASelection *& oSelection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oSelection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Selection(oSelection); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oSelection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelection##classe::get_VisProperties(CATIAVisPropertySet *& oVisProperties) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oVisProperties); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_VisProperties(oVisProperties); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oVisProperties); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelection##classe::get_Count(CATLONG & oCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oCount); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oCount); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelection##classe::get_Count2(CATLONG & oCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count2(oCount); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oCount); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelection##classe::Item(CATLONG iIndex, CATIASelectedElement *& oElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iIndex,&oElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oElement); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iIndex,&oElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelection##classe::Item2(CATLONG iIndex, CATIASelectedElement *& oElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iIndex,&oElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item2(iIndex,oElement); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iIndex,&oElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelection##classe::FilterCorrespondence(const CATSafeArrayVariant & iFilterType, CAT_VARIANT_BOOL & oAllFit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iFilterType,&oAllFit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FilterCorrespondence(iFilterType,oAllFit); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iFilterType,&oAllFit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelection##classe::SelectElement2(const CATSafeArrayVariant & iFilterType, const CATBSTR & iMessage, CAT_VARIANT_BOOL iObjectSelectionBeforeCommandUsePossibility, CATBSTR & oOutputState) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iFilterType,&iMessage,&iObjectSelectionBeforeCommandUsePossibility,&oOutputState); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SelectElement2(iFilterType,iMessage,iObjectSelectionBeforeCommandUsePossibility,oOutputState); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iFilterType,&iMessage,&iObjectSelectionBeforeCommandUsePossibility,&oOutputState); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelection##classe::SelectElement3(const CATSafeArrayVariant & iFilterType, const CATBSTR & iMessage, CAT_VARIANT_BOOL iObjectSelectionBeforeCommandUsePossibility, CATMultiSelectionMode iMultiSelectionMode, CAT_VARIANT_BOOL iTooltip, CATBSTR & oOutputState) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iFilterType,&iMessage,&iObjectSelectionBeforeCommandUsePossibility,&iMultiSelectionMode,&iTooltip,&oOutputState); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SelectElement3(iFilterType,iMessage,iObjectSelectionBeforeCommandUsePossibility,iMultiSelectionMode,iTooltip,oOutputState); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iFilterType,&iMessage,&iObjectSelectionBeforeCommandUsePossibility,&iMultiSelectionMode,&iTooltip,&oOutputState); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelection##classe::SelectElement4(const CATSafeArrayVariant & iFilterType, const CATBSTR & iActiveDocumentMessage, const CATBSTR & iNonActiveDocumentMessage, CAT_VARIANT_BOOL iTooltip, CATIADocument *& oDocument, CATBSTR & oOutputState) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iFilterType,&iActiveDocumentMessage,&iNonActiveDocumentMessage,&iTooltip,&oDocument,&oOutputState); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SelectElement4(iFilterType,iActiveDocumentMessage,iNonActiveDocumentMessage,iTooltip,oDocument,oOutputState); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iFilterType,&iActiveDocumentMessage,&iNonActiveDocumentMessage,&iTooltip,&oDocument,&oOutputState); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelection##classe::IndicateOrSelectElement2D(const CATBSTR & iMessage, const CATSafeArrayVariant & iFilterType, CAT_VARIANT_BOOL iObjectSelectionBeforeCommandUsePossibility, CAT_VARIANT_BOOL iTooltip, CAT_VARIANT_BOOL iTriggeringOnMouseMove, CAT_VARIANT_BOOL & oObjectSelected, CATSafeArrayVariant & oDocumentWindowLocation, CATBSTR & oOutputState) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iMessage,&iFilterType,&iObjectSelectionBeforeCommandUsePossibility,&iTooltip,&iTriggeringOnMouseMove,&oObjectSelected,&oDocumentWindowLocation,&oOutputState); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IndicateOrSelectElement2D(iMessage,iFilterType,iObjectSelectionBeforeCommandUsePossibility,iTooltip,iTriggeringOnMouseMove,oObjectSelected,oDocumentWindowLocation,oOutputState); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iMessage,&iFilterType,&iObjectSelectionBeforeCommandUsePossibility,&iTooltip,&iTriggeringOnMouseMove,&oObjectSelected,&oDocumentWindowLocation,&oOutputState); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelection##classe::IndicateOrSelectElement3D(CATIABase * iPlanarGeometricObject, const CATBSTR & iMessage, const CATSafeArrayVariant & iFilterType, CAT_VARIANT_BOOL iObjectSelectionBeforeCommandUsePossibility, CAT_VARIANT_BOOL iTooltip, CAT_VARIANT_BOOL iTriggeringOnMouseMove, CAT_VARIANT_BOOL & oObjectSelected, CATSafeArrayVariant & oWindowLocation2D, CATSafeArrayVariant & oWindowLocation3D, CATBSTR & oOutputState) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iPlanarGeometricObject,&iMessage,&iFilterType,&iObjectSelectionBeforeCommandUsePossibility,&iTooltip,&iTriggeringOnMouseMove,&oObjectSelected,&oWindowLocation2D,&oWindowLocation3D,&oOutputState); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IndicateOrSelectElement3D(iPlanarGeometricObject,iMessage,iFilterType,iObjectSelectionBeforeCommandUsePossibility,iTooltip,iTriggeringOnMouseMove,oObjectSelected,oWindowLocation2D,oWindowLocation3D,oOutputState); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iPlanarGeometricObject,&iMessage,&iFilterType,&iObjectSelectionBeforeCommandUsePossibility,&iTooltip,&iTriggeringOnMouseMove,&oObjectSelected,&oWindowLocation2D,&oWindowLocation3D,&oOutputState); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASelection##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASelection##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASelection##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASelection##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASelection##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASelection(classe) \
 \
 \
declare_TIE_CATIASelection(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASelection##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASelection,"CATIASelection",CATIASelection::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASelection(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASelection, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASelection##classe(classe::MetaObject(),CATIASelection::MetaObject(),(void *)CreateTIECATIASelection##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASelection(classe) \
 \
 \
declare_TIE_CATIASelection(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASelection##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASelection,"CATIASelection",CATIASelection::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASelection(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASelection, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASelection##classe(classe::MetaObject(),CATIASelection::MetaObject(),(void *)CreateTIECATIASelection##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASelection(classe) TIE_CATIASelection(classe)
#else
#define BOA_CATIASelection(classe) CATImplementBOA(CATIASelection, classe)
#endif

#endif
