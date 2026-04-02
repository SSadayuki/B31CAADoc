#ifndef __TIE_CATIAVibrationVolumes
#define __TIE_CATIAVibrationVolumes

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAVibrationVolumes.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAVibrationVolumes */
#define declare_TIE_CATIAVibrationVolumes(classe) \
 \
 \
class TIECATIAVibrationVolumes##classe : public CATIAVibrationVolumes \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAVibrationVolumes, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall ComputeVibrationVolume(CATIAGroup * GroupOfSelectedProducts, const CATBSTR & PositionsFilePath, double iAccuracy, double iSimplifAccuracy, CATIADocument *& VibrationVolumeDocument); \
      virtual HRESULT __stdcall ComputeVibrationVolumeFromTrack(CATIAGroup * GroupOfSelectedProducts, CATBaseDispatch * iSweptAble, double iAccuracy, double iSimplifAccuracy, CATIADocument *& VibrationVolumeDocument); \
      virtual HRESULT __stdcall ComputeVibrationVolumeWithAReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, const CATBSTR & PositionsFilePath, double iAccuracy, double iSimplifAccuracy, CATIADocument *& VibrationVolumeDocument); \
      virtual HRESULT __stdcall ComputeVibrationVolumeFromTrackWithAReference(CATIAGroup * GroupOfSelectedProducts, CATIAProduct * iReferenceProduct, CATBaseDispatch * iSweptAble, double iAccuracy, double iSimplifAccuracy, CATIADocument *& VibrationVolumeDocument); \
      virtual HRESULT __stdcall VibrationVolumeShapeName(CATBSTR *& Name); \
      virtual HRESULT __stdcall CleanUp(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAVibrationVolumes(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall ComputeVibrationVolume(CATIAGroup * GroupOfSelectedProducts, const CATBSTR & PositionsFilePath, double iAccuracy, double iSimplifAccuracy, CATIADocument *& VibrationVolumeDocument); \
virtual HRESULT __stdcall ComputeVibrationVolumeFromTrack(CATIAGroup * GroupOfSelectedProducts, CATBaseDispatch * iSweptAble, double iAccuracy, double iSimplifAccuracy, CATIADocument *& VibrationVolumeDocument); \
virtual HRESULT __stdcall ComputeVibrationVolumeWithAReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, const CATBSTR & PositionsFilePath, double iAccuracy, double iSimplifAccuracy, CATIADocument *& VibrationVolumeDocument); \
virtual HRESULT __stdcall ComputeVibrationVolumeFromTrackWithAReference(CATIAGroup * GroupOfSelectedProducts, CATIAProduct * iReferenceProduct, CATBaseDispatch * iSweptAble, double iAccuracy, double iSimplifAccuracy, CATIADocument *& VibrationVolumeDocument); \
virtual HRESULT __stdcall VibrationVolumeShapeName(CATBSTR *& Name); \
virtual HRESULT __stdcall CleanUp(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAVibrationVolumes(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::ComputeVibrationVolume(CATIAGroup * GroupOfSelectedProducts, const CATBSTR & PositionsFilePath, double iAccuracy, double iSimplifAccuracy, CATIADocument *& VibrationVolumeDocument) \
{ \
return (ENVTIECALL(CATIAVibrationVolumes,ENVTIETypeLetter,ENVTIELetter)ComputeVibrationVolume(GroupOfSelectedProducts,PositionsFilePath,iAccuracy,iSimplifAccuracy,VibrationVolumeDocument)); \
} \
HRESULT __stdcall  ENVTIEName::ComputeVibrationVolumeFromTrack(CATIAGroup * GroupOfSelectedProducts, CATBaseDispatch * iSweptAble, double iAccuracy, double iSimplifAccuracy, CATIADocument *& VibrationVolumeDocument) \
{ \
return (ENVTIECALL(CATIAVibrationVolumes,ENVTIETypeLetter,ENVTIELetter)ComputeVibrationVolumeFromTrack(GroupOfSelectedProducts,iSweptAble,iAccuracy,iSimplifAccuracy,VibrationVolumeDocument)); \
} \
HRESULT __stdcall  ENVTIEName::ComputeVibrationVolumeWithAReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, const CATBSTR & PositionsFilePath, double iAccuracy, double iSimplifAccuracy, CATIADocument *& VibrationVolumeDocument) \
{ \
return (ENVTIECALL(CATIAVibrationVolumes,ENVTIETypeLetter,ENVTIELetter)ComputeVibrationVolumeWithAReference(iGroupOfSelectedProducts,iReferenceProduct,PositionsFilePath,iAccuracy,iSimplifAccuracy,VibrationVolumeDocument)); \
} \
HRESULT __stdcall  ENVTIEName::ComputeVibrationVolumeFromTrackWithAReference(CATIAGroup * GroupOfSelectedProducts, CATIAProduct * iReferenceProduct, CATBaseDispatch * iSweptAble, double iAccuracy, double iSimplifAccuracy, CATIADocument *& VibrationVolumeDocument) \
{ \
return (ENVTIECALL(CATIAVibrationVolumes,ENVTIETypeLetter,ENVTIELetter)ComputeVibrationVolumeFromTrackWithAReference(GroupOfSelectedProducts,iReferenceProduct,iSweptAble,iAccuracy,iSimplifAccuracy,VibrationVolumeDocument)); \
} \
HRESULT __stdcall  ENVTIEName::VibrationVolumeShapeName(CATBSTR *& Name) \
{ \
return (ENVTIECALL(CATIAVibrationVolumes,ENVTIETypeLetter,ENVTIELetter)VibrationVolumeShapeName(Name)); \
} \
HRESULT __stdcall  ENVTIEName::CleanUp() \
{ \
return (ENVTIECALL(CATIAVibrationVolumes,ENVTIETypeLetter,ENVTIELetter)CleanUp()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAVibrationVolumes,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAVibrationVolumes,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAVibrationVolumes,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAVibrationVolumes,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAVibrationVolumes,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAVibrationVolumes,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAVibrationVolumes(classe)    TIECATIAVibrationVolumes##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAVibrationVolumes(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAVibrationVolumes, classe) \
 \
 \
CATImplementTIEMethods(CATIAVibrationVolumes, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAVibrationVolumes, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAVibrationVolumes, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAVibrationVolumes, classe) \
 \
HRESULT __stdcall  TIECATIAVibrationVolumes##classe::ComputeVibrationVolume(CATIAGroup * GroupOfSelectedProducts, const CATBSTR & PositionsFilePath, double iAccuracy, double iSimplifAccuracy, CATIADocument *& VibrationVolumeDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&GroupOfSelectedProducts,&PositionsFilePath,&iAccuracy,&iSimplifAccuracy,&VibrationVolumeDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeVibrationVolume(GroupOfSelectedProducts,PositionsFilePath,iAccuracy,iSimplifAccuracy,VibrationVolumeDocument); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&GroupOfSelectedProducts,&PositionsFilePath,&iAccuracy,&iSimplifAccuracy,&VibrationVolumeDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVibrationVolumes##classe::ComputeVibrationVolumeFromTrack(CATIAGroup * GroupOfSelectedProducts, CATBaseDispatch * iSweptAble, double iAccuracy, double iSimplifAccuracy, CATIADocument *& VibrationVolumeDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&GroupOfSelectedProducts,&iSweptAble,&iAccuracy,&iSimplifAccuracy,&VibrationVolumeDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeVibrationVolumeFromTrack(GroupOfSelectedProducts,iSweptAble,iAccuracy,iSimplifAccuracy,VibrationVolumeDocument); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&GroupOfSelectedProducts,&iSweptAble,&iAccuracy,&iSimplifAccuracy,&VibrationVolumeDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVibrationVolumes##classe::ComputeVibrationVolumeWithAReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, const CATBSTR & PositionsFilePath, double iAccuracy, double iSimplifAccuracy, CATIADocument *& VibrationVolumeDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iGroupOfSelectedProducts,&iReferenceProduct,&PositionsFilePath,&iAccuracy,&iSimplifAccuracy,&VibrationVolumeDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeVibrationVolumeWithAReference(iGroupOfSelectedProducts,iReferenceProduct,PositionsFilePath,iAccuracy,iSimplifAccuracy,VibrationVolumeDocument); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iGroupOfSelectedProducts,&iReferenceProduct,&PositionsFilePath,&iAccuracy,&iSimplifAccuracy,&VibrationVolumeDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVibrationVolumes##classe::ComputeVibrationVolumeFromTrackWithAReference(CATIAGroup * GroupOfSelectedProducts, CATIAProduct * iReferenceProduct, CATBaseDispatch * iSweptAble, double iAccuracy, double iSimplifAccuracy, CATIADocument *& VibrationVolumeDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&GroupOfSelectedProducts,&iReferenceProduct,&iSweptAble,&iAccuracy,&iSimplifAccuracy,&VibrationVolumeDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeVibrationVolumeFromTrackWithAReference(GroupOfSelectedProducts,iReferenceProduct,iSweptAble,iAccuracy,iSimplifAccuracy,VibrationVolumeDocument); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&GroupOfSelectedProducts,&iReferenceProduct,&iSweptAble,&iAccuracy,&iSimplifAccuracy,&VibrationVolumeDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVibrationVolumes##classe::VibrationVolumeShapeName(CATBSTR *& Name) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&Name); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->VibrationVolumeShapeName(Name); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&Name); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVibrationVolumes##classe::CleanUp() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CleanUp(); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVibrationVolumes##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVibrationVolumes##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVibrationVolumes##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVibrationVolumes##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVibrationVolumes##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVibrationVolumes##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAVibrationVolumes(classe) \
 \
 \
declare_TIE_CATIAVibrationVolumes(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAVibrationVolumes##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAVibrationVolumes,"CATIAVibrationVolumes",CATIAVibrationVolumes::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAVibrationVolumes(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAVibrationVolumes, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAVibrationVolumes##classe(classe::MetaObject(),CATIAVibrationVolumes::MetaObject(),(void *)CreateTIECATIAVibrationVolumes##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAVibrationVolumes(classe) \
 \
 \
declare_TIE_CATIAVibrationVolumes(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAVibrationVolumes##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAVibrationVolumes,"CATIAVibrationVolumes",CATIAVibrationVolumes::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAVibrationVolumes(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAVibrationVolumes, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAVibrationVolumes##classe(classe::MetaObject(),CATIAVibrationVolumes::MetaObject(),(void *)CreateTIECATIAVibrationVolumes##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAVibrationVolumes(classe) TIE_CATIAVibrationVolumes(classe)
#else
#define BOA_CATIAVibrationVolumes(classe) CATImplementBOA(CATIAVibrationVolumes, classe)
#endif

#endif
