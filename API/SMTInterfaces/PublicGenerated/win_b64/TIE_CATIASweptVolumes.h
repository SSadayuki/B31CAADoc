#ifndef __TIE_CATIASweptVolumes
#define __TIE_CATIASweptVolumes

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASweptVolumes.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASweptVolumes */
#define declare_TIE_CATIASweptVolumes(classe) \
 \
 \
class TIECATIASweptVolumes##classe : public CATIASweptVolumes \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASweptVolumes, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Add(CATIAReplay * replay, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIASweptVolume *& oSwept); \
      virtual HRESULT __stdcall AddFromSweptAble(CATBaseDispatch * iSweptAble, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIASweptVolume *& oSwept); \
      virtual HRESULT __stdcall ComputeASweptVolume(CATIAReplay * iReplay, CATBaseDispatch * iSweptAble, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, double iWrappingGrain, double iWrappingRatio, double iSimplifAccuracy, CATIADocument *& oSweptVolumeDocument); \
      virtual HRESULT __stdcall ComputeASweptVolumeFromReplay(CATIAReplay * iReplay, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, double iWrappingGrain, double iWrappingRatio, double iSimplifAccuracy, CATIADocument *& oSweptVolumeDocument); \
      virtual HRESULT __stdcall ComputeASweptVolumeFromSweptable(CATBaseDispatch * iSweptAble, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, double iWrappingGrain, double iWrappingRatio, double iSimplifAccuracy, CATIADocument *& oSweptVolumeDocument); \
      virtual HRESULT __stdcall ComputeSweptVolumes(CATIAReplay * iReplay, CATBaseDispatch * iSweptAble, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, CATLONG iPerformWrapping, CATLONG iPerformSimplif, double iWrappingGrain, double iWrappingRatio, double iSimplifAccuracy, CATSafeArrayVariant & oSweptVolumeDocuments); \
      virtual HRESULT __stdcall ComputeSweptVolumesFromReplay(CATIAReplay * iReplay, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, CATLONG iPerformWrapping, CATLONG iPerformSimplif, double iWrappingGrain, double iWrappingRatio, double iSimplifAccuracy, CATSafeArrayVariant & oSweptVolumeDocuments); \
      virtual HRESULT __stdcall ComputeSweptVolumesFromSweptable(CATBaseDispatch * iSweptAble, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, CATLONG iPerformWrapping, CATLONG iPerformSimplif, double iWrappingGrain, double iWrappingRatio, double iSimplifAccuracy, CATSafeArrayVariant & oSweptVolumeDocuments); \
      virtual HRESULT __stdcall SetSilhouette(CATLONG OnOff); \
      virtual HRESULT __stdcall SetSpatialSplit(CATLONG OnOff); \
      virtual HRESULT __stdcall CleanUp(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIASweptVolumes(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Add(CATIAReplay * replay, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIASweptVolume *& oSwept); \
virtual HRESULT __stdcall AddFromSweptAble(CATBaseDispatch * iSweptAble, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIASweptVolume *& oSwept); \
virtual HRESULT __stdcall ComputeASweptVolume(CATIAReplay * iReplay, CATBaseDispatch * iSweptAble, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, double iWrappingGrain, double iWrappingRatio, double iSimplifAccuracy, CATIADocument *& oSweptVolumeDocument); \
virtual HRESULT __stdcall ComputeASweptVolumeFromReplay(CATIAReplay * iReplay, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, double iWrappingGrain, double iWrappingRatio, double iSimplifAccuracy, CATIADocument *& oSweptVolumeDocument); \
virtual HRESULT __stdcall ComputeASweptVolumeFromSweptable(CATBaseDispatch * iSweptAble, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, double iWrappingGrain, double iWrappingRatio, double iSimplifAccuracy, CATIADocument *& oSweptVolumeDocument); \
virtual HRESULT __stdcall ComputeSweptVolumes(CATIAReplay * iReplay, CATBaseDispatch * iSweptAble, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, CATLONG iPerformWrapping, CATLONG iPerformSimplif, double iWrappingGrain, double iWrappingRatio, double iSimplifAccuracy, CATSafeArrayVariant & oSweptVolumeDocuments); \
virtual HRESULT __stdcall ComputeSweptVolumesFromReplay(CATIAReplay * iReplay, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, CATLONG iPerformWrapping, CATLONG iPerformSimplif, double iWrappingGrain, double iWrappingRatio, double iSimplifAccuracy, CATSafeArrayVariant & oSweptVolumeDocuments); \
virtual HRESULT __stdcall ComputeSweptVolumesFromSweptable(CATBaseDispatch * iSweptAble, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, CATLONG iPerformWrapping, CATLONG iPerformSimplif, double iWrappingGrain, double iWrappingRatio, double iSimplifAccuracy, CATSafeArrayVariant & oSweptVolumeDocuments); \
virtual HRESULT __stdcall SetSilhouette(CATLONG OnOff); \
virtual HRESULT __stdcall SetSpatialSplit(CATLONG OnOff); \
virtual HRESULT __stdcall CleanUp(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIASweptVolumes(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Add(CATIAReplay * replay, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIASweptVolume *& oSwept) \
{ \
return (ENVTIECALL(CATIASweptVolumes,ENVTIETypeLetter,ENVTIELetter)Add(replay,iProductsToSwept,iProductReference,iLODMode,iAccuracy,iShapeName,iActivatedShape,iDefaultShape,oSwept)); \
} \
HRESULT __stdcall  ENVTIEName::AddFromSweptAble(CATBaseDispatch * iSweptAble, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIASweptVolume *& oSwept) \
{ \
return (ENVTIECALL(CATIASweptVolumes,ENVTIETypeLetter,ENVTIELetter)AddFromSweptAble(iSweptAble,iProductsToSwept,iProductReference,iLODMode,iAccuracy,iShapeName,iActivatedShape,iDefaultShape,oSwept)); \
} \
HRESULT __stdcall  ENVTIEName::ComputeASweptVolume(CATIAReplay * iReplay, CATBaseDispatch * iSweptAble, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, double iWrappingGrain, double iWrappingRatio, double iSimplifAccuracy, CATIADocument *& oSweptVolumeDocument) \
{ \
return (ENVTIECALL(CATIASweptVolumes,ENVTIETypeLetter,ENVTIELetter)ComputeASweptVolume(iReplay,iSweptAble,iProductsToSwept,iProductReference,iLODMode,iAccuracy,iWrappingGrain,iWrappingRatio,iSimplifAccuracy,oSweptVolumeDocument)); \
} \
HRESULT __stdcall  ENVTIEName::ComputeASweptVolumeFromReplay(CATIAReplay * iReplay, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, double iWrappingGrain, double iWrappingRatio, double iSimplifAccuracy, CATIADocument *& oSweptVolumeDocument) \
{ \
return (ENVTIECALL(CATIASweptVolumes,ENVTIETypeLetter,ENVTIELetter)ComputeASweptVolumeFromReplay(iReplay,iProductsToSwept,iProductReference,iLODMode,iAccuracy,iWrappingGrain,iWrappingRatio,iSimplifAccuracy,oSweptVolumeDocument)); \
} \
HRESULT __stdcall  ENVTIEName::ComputeASweptVolumeFromSweptable(CATBaseDispatch * iSweptAble, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, double iWrappingGrain, double iWrappingRatio, double iSimplifAccuracy, CATIADocument *& oSweptVolumeDocument) \
{ \
return (ENVTIECALL(CATIASweptVolumes,ENVTIETypeLetter,ENVTIELetter)ComputeASweptVolumeFromSweptable(iSweptAble,iProductsToSwept,iProductReference,iLODMode,iAccuracy,iWrappingGrain,iWrappingRatio,iSimplifAccuracy,oSweptVolumeDocument)); \
} \
HRESULT __stdcall  ENVTIEName::ComputeSweptVolumes(CATIAReplay * iReplay, CATBaseDispatch * iSweptAble, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, CATLONG iPerformWrapping, CATLONG iPerformSimplif, double iWrappingGrain, double iWrappingRatio, double iSimplifAccuracy, CATSafeArrayVariant & oSweptVolumeDocuments) \
{ \
return (ENVTIECALL(CATIASweptVolumes,ENVTIETypeLetter,ENVTIELetter)ComputeSweptVolumes(iReplay,iSweptAble,iProductsToSwept,iProductReference,iLODMode,iAccuracy,iPerformWrapping,iPerformSimplif,iWrappingGrain,iWrappingRatio,iSimplifAccuracy,oSweptVolumeDocuments)); \
} \
HRESULT __stdcall  ENVTIEName::ComputeSweptVolumesFromReplay(CATIAReplay * iReplay, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, CATLONG iPerformWrapping, CATLONG iPerformSimplif, double iWrappingGrain, double iWrappingRatio, double iSimplifAccuracy, CATSafeArrayVariant & oSweptVolumeDocuments) \
{ \
return (ENVTIECALL(CATIASweptVolumes,ENVTIETypeLetter,ENVTIELetter)ComputeSweptVolumesFromReplay(iReplay,iProductsToSwept,iProductReference,iLODMode,iAccuracy,iPerformWrapping,iPerformSimplif,iWrappingGrain,iWrappingRatio,iSimplifAccuracy,oSweptVolumeDocuments)); \
} \
HRESULT __stdcall  ENVTIEName::ComputeSweptVolumesFromSweptable(CATBaseDispatch * iSweptAble, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, CATLONG iPerformWrapping, CATLONG iPerformSimplif, double iWrappingGrain, double iWrappingRatio, double iSimplifAccuracy, CATSafeArrayVariant & oSweptVolumeDocuments) \
{ \
return (ENVTIECALL(CATIASweptVolumes,ENVTIETypeLetter,ENVTIELetter)ComputeSweptVolumesFromSweptable(iSweptAble,iProductsToSwept,iProductReference,iLODMode,iAccuracy,iPerformWrapping,iPerformSimplif,iWrappingGrain,iWrappingRatio,iSimplifAccuracy,oSweptVolumeDocuments)); \
} \
HRESULT __stdcall  ENVTIEName::SetSilhouette(CATLONG OnOff) \
{ \
return (ENVTIECALL(CATIASweptVolumes,ENVTIETypeLetter,ENVTIELetter)SetSilhouette(OnOff)); \
} \
HRESULT __stdcall  ENVTIEName::SetSpatialSplit(CATLONG OnOff) \
{ \
return (ENVTIECALL(CATIASweptVolumes,ENVTIETypeLetter,ENVTIELetter)SetSpatialSplit(OnOff)); \
} \
HRESULT __stdcall  ENVTIEName::CleanUp() \
{ \
return (ENVTIECALL(CATIASweptVolumes,ENVTIETypeLetter,ENVTIELetter)CleanUp()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASweptVolumes,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASweptVolumes,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIASweptVolumes,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIASweptVolumes,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIASweptVolumes,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIASweptVolumes,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASweptVolumes(classe)    TIECATIASweptVolumes##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASweptVolumes(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASweptVolumes, classe) \
 \
 \
CATImplementTIEMethods(CATIASweptVolumes, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASweptVolumes, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASweptVolumes, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASweptVolumes, classe) \
 \
HRESULT __stdcall  TIECATIASweptVolumes##classe::Add(CATIAReplay * replay, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIASweptVolume *& oSwept) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&replay,&iProductsToSwept,&iProductReference,&iLODMode,&iAccuracy,&iShapeName,&iActivatedShape,&iDefaultShape,&oSwept); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(replay,iProductsToSwept,iProductReference,iLODMode,iAccuracy,iShapeName,iActivatedShape,iDefaultShape,oSwept); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&replay,&iProductsToSwept,&iProductReference,&iLODMode,&iAccuracy,&iShapeName,&iActivatedShape,&iDefaultShape,&oSwept); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweptVolumes##classe::AddFromSweptAble(CATBaseDispatch * iSweptAble, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIASweptVolume *& oSwept) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSweptAble,&iProductsToSwept,&iProductReference,&iLODMode,&iAccuracy,&iShapeName,&iActivatedShape,&iDefaultShape,&oSwept); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFromSweptAble(iSweptAble,iProductsToSwept,iProductReference,iLODMode,iAccuracy,iShapeName,iActivatedShape,iDefaultShape,oSwept); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSweptAble,&iProductsToSwept,&iProductReference,&iLODMode,&iAccuracy,&iShapeName,&iActivatedShape,&iDefaultShape,&oSwept); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweptVolumes##classe::ComputeASweptVolume(CATIAReplay * iReplay, CATBaseDispatch * iSweptAble, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, double iWrappingGrain, double iWrappingRatio, double iSimplifAccuracy, CATIADocument *& oSweptVolumeDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iReplay,&iSweptAble,&iProductsToSwept,&iProductReference,&iLODMode,&iAccuracy,&iWrappingGrain,&iWrappingRatio,&iSimplifAccuracy,&oSweptVolumeDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeASweptVolume(iReplay,iSweptAble,iProductsToSwept,iProductReference,iLODMode,iAccuracy,iWrappingGrain,iWrappingRatio,iSimplifAccuracy,oSweptVolumeDocument); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iReplay,&iSweptAble,&iProductsToSwept,&iProductReference,&iLODMode,&iAccuracy,&iWrappingGrain,&iWrappingRatio,&iSimplifAccuracy,&oSweptVolumeDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweptVolumes##classe::ComputeASweptVolumeFromReplay(CATIAReplay * iReplay, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, double iWrappingGrain, double iWrappingRatio, double iSimplifAccuracy, CATIADocument *& oSweptVolumeDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iReplay,&iProductsToSwept,&iProductReference,&iLODMode,&iAccuracy,&iWrappingGrain,&iWrappingRatio,&iSimplifAccuracy,&oSweptVolumeDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeASweptVolumeFromReplay(iReplay,iProductsToSwept,iProductReference,iLODMode,iAccuracy,iWrappingGrain,iWrappingRatio,iSimplifAccuracy,oSweptVolumeDocument); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iReplay,&iProductsToSwept,&iProductReference,&iLODMode,&iAccuracy,&iWrappingGrain,&iWrappingRatio,&iSimplifAccuracy,&oSweptVolumeDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweptVolumes##classe::ComputeASweptVolumeFromSweptable(CATBaseDispatch * iSweptAble, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, double iWrappingGrain, double iWrappingRatio, double iSimplifAccuracy, CATIADocument *& oSweptVolumeDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iSweptAble,&iProductsToSwept,&iProductReference,&iLODMode,&iAccuracy,&iWrappingGrain,&iWrappingRatio,&iSimplifAccuracy,&oSweptVolumeDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeASweptVolumeFromSweptable(iSweptAble,iProductsToSwept,iProductReference,iLODMode,iAccuracy,iWrappingGrain,iWrappingRatio,iSimplifAccuracy,oSweptVolumeDocument); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iSweptAble,&iProductsToSwept,&iProductReference,&iLODMode,&iAccuracy,&iWrappingGrain,&iWrappingRatio,&iSimplifAccuracy,&oSweptVolumeDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweptVolumes##classe::ComputeSweptVolumes(CATIAReplay * iReplay, CATBaseDispatch * iSweptAble, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, CATLONG iPerformWrapping, CATLONG iPerformSimplif, double iWrappingGrain, double iWrappingRatio, double iSimplifAccuracy, CATSafeArrayVariant & oSweptVolumeDocuments) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iReplay,&iSweptAble,&iProductsToSwept,&iProductReference,&iLODMode,&iAccuracy,&iPerformWrapping,&iPerformSimplif,&iWrappingGrain,&iWrappingRatio,&iSimplifAccuracy,&oSweptVolumeDocuments); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeSweptVolumes(iReplay,iSweptAble,iProductsToSwept,iProductReference,iLODMode,iAccuracy,iPerformWrapping,iPerformSimplif,iWrappingGrain,iWrappingRatio,iSimplifAccuracy,oSweptVolumeDocuments); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iReplay,&iSweptAble,&iProductsToSwept,&iProductReference,&iLODMode,&iAccuracy,&iPerformWrapping,&iPerformSimplif,&iWrappingGrain,&iWrappingRatio,&iSimplifAccuracy,&oSweptVolumeDocuments); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweptVolumes##classe::ComputeSweptVolumesFromReplay(CATIAReplay * iReplay, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, CATLONG iPerformWrapping, CATLONG iPerformSimplif, double iWrappingGrain, double iWrappingRatio, double iSimplifAccuracy, CATSafeArrayVariant & oSweptVolumeDocuments) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iReplay,&iProductsToSwept,&iProductReference,&iLODMode,&iAccuracy,&iPerformWrapping,&iPerformSimplif,&iWrappingGrain,&iWrappingRatio,&iSimplifAccuracy,&oSweptVolumeDocuments); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeSweptVolumesFromReplay(iReplay,iProductsToSwept,iProductReference,iLODMode,iAccuracy,iPerformWrapping,iPerformSimplif,iWrappingGrain,iWrappingRatio,iSimplifAccuracy,oSweptVolumeDocuments); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iReplay,&iProductsToSwept,&iProductReference,&iLODMode,&iAccuracy,&iPerformWrapping,&iPerformSimplif,&iWrappingGrain,&iWrappingRatio,&iSimplifAccuracy,&oSweptVolumeDocuments); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweptVolumes##classe::ComputeSweptVolumesFromSweptable(CATBaseDispatch * iSweptAble, const CATSafeArrayVariant & iProductsToSwept, CATIAProduct * iProductReference, CATLONG iLODMode, double iAccuracy, CATLONG iPerformWrapping, CATLONG iPerformSimplif, double iWrappingGrain, double iWrappingRatio, double iSimplifAccuracy, CATSafeArrayVariant & oSweptVolumeDocuments) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iSweptAble,&iProductsToSwept,&iProductReference,&iLODMode,&iAccuracy,&iPerformWrapping,&iPerformSimplif,&iWrappingGrain,&iWrappingRatio,&iSimplifAccuracy,&oSweptVolumeDocuments); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeSweptVolumesFromSweptable(iSweptAble,iProductsToSwept,iProductReference,iLODMode,iAccuracy,iPerformWrapping,iPerformSimplif,iWrappingGrain,iWrappingRatio,iSimplifAccuracy,oSweptVolumeDocuments); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iSweptAble,&iProductsToSwept,&iProductReference,&iLODMode,&iAccuracy,&iPerformWrapping,&iPerformSimplif,&iWrappingGrain,&iWrappingRatio,&iSimplifAccuracy,&oSweptVolumeDocuments); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweptVolumes##classe::SetSilhouette(CATLONG OnOff) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&OnOff); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSilhouette(OnOff); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&OnOff); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweptVolumes##classe::SetSpatialSplit(CATLONG OnOff) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&OnOff); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSpatialSplit(OnOff); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&OnOff); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweptVolumes##classe::CleanUp() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CleanUp(); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASweptVolumes##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASweptVolumes##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASweptVolumes##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASweptVolumes##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASweptVolumes##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASweptVolumes##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASweptVolumes(classe) \
 \
 \
declare_TIE_CATIASweptVolumes(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASweptVolumes##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASweptVolumes,"CATIASweptVolumes",CATIASweptVolumes::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASweptVolumes(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASweptVolumes, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASweptVolumes##classe(classe::MetaObject(),CATIASweptVolumes::MetaObject(),(void *)CreateTIECATIASweptVolumes##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASweptVolumes(classe) \
 \
 \
declare_TIE_CATIASweptVolumes(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASweptVolumes##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASweptVolumes,"CATIASweptVolumes",CATIASweptVolumes::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASweptVolumes(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASweptVolumes, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASweptVolumes##classe(classe::MetaObject(),CATIASweptVolumes::MetaObject(),(void *)CreateTIECATIASweptVolumes##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASweptVolumes(classe) TIE_CATIASweptVolumes(classe)
#else
#define BOA_CATIASweptVolumes(classe) CATImplementBOA(CATIASweptVolumes, classe)
#endif

#endif
