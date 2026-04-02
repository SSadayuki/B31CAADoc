#ifndef __TIE_CATIAPartComps
#define __TIE_CATIAPartComps

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPartComps.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPartComps */
#define declare_TIE_CATIAPartComps(classe) \
 \
 \
class TIECATIAPartComps##classe : public CATIAPartComps \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPartComps, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_AddedMaterialPercentage(double & oPercentAdded); \
      virtual HRESULT __stdcall get_AddedMaterialVolume(double & oVolumeAdded); \
      virtual HRESULT __stdcall get_RemovedMaterialPercentage(double & oPercentRemoved); \
      virtual HRESULT __stdcall get_RemovedMaterialVolume(double & oVolumeRemoved); \
      virtual HRESULT __stdcall Add(CATIAProduct * iProduct1, CATIAProduct * iProduct2, double iCompAccuracy, double iDispAccuracy, CATLONG iComputationType, CATIAPartComp *& oPartComp); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAPartComps(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_AddedMaterialPercentage(double & oPercentAdded); \
virtual HRESULT __stdcall get_AddedMaterialVolume(double & oVolumeAdded); \
virtual HRESULT __stdcall get_RemovedMaterialPercentage(double & oPercentRemoved); \
virtual HRESULT __stdcall get_RemovedMaterialVolume(double & oVolumeRemoved); \
virtual HRESULT __stdcall Add(CATIAProduct * iProduct1, CATIAProduct * iProduct2, double iCompAccuracy, double iDispAccuracy, CATLONG iComputationType, CATIAPartComp *& oPartComp); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAPartComps(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_AddedMaterialPercentage(double & oPercentAdded) \
{ \
return (ENVTIECALL(CATIAPartComps,ENVTIETypeLetter,ENVTIELetter)get_AddedMaterialPercentage(oPercentAdded)); \
} \
HRESULT __stdcall  ENVTIEName::get_AddedMaterialVolume(double & oVolumeAdded) \
{ \
return (ENVTIECALL(CATIAPartComps,ENVTIETypeLetter,ENVTIELetter)get_AddedMaterialVolume(oVolumeAdded)); \
} \
HRESULT __stdcall  ENVTIEName::get_RemovedMaterialPercentage(double & oPercentRemoved) \
{ \
return (ENVTIECALL(CATIAPartComps,ENVTIETypeLetter,ENVTIELetter)get_RemovedMaterialPercentage(oPercentRemoved)); \
} \
HRESULT __stdcall  ENVTIEName::get_RemovedMaterialVolume(double & oVolumeRemoved) \
{ \
return (ENVTIECALL(CATIAPartComps,ENVTIETypeLetter,ENVTIELetter)get_RemovedMaterialVolume(oVolumeRemoved)); \
} \
HRESULT __stdcall  ENVTIEName::Add(CATIAProduct * iProduct1, CATIAProduct * iProduct2, double iCompAccuracy, double iDispAccuracy, CATLONG iComputationType, CATIAPartComp *& oPartComp) \
{ \
return (ENVTIECALL(CATIAPartComps,ENVTIETypeLetter,ENVTIELetter)Add(iProduct1,iProduct2,iCompAccuracy,iDispAccuracy,iComputationType,oPartComp)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPartComps,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPartComps,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAPartComps,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAPartComps,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAPartComps,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAPartComps,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPartComps(classe)    TIECATIAPartComps##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPartComps(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPartComps, classe) \
 \
 \
CATImplementTIEMethods(CATIAPartComps, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPartComps, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPartComps, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPartComps, classe) \
 \
HRESULT __stdcall  TIECATIAPartComps##classe::get_AddedMaterialPercentage(double & oPercentAdded) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oPercentAdded); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AddedMaterialPercentage(oPercentAdded); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oPercentAdded); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartComps##classe::get_AddedMaterialVolume(double & oVolumeAdded) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oVolumeAdded); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AddedMaterialVolume(oVolumeAdded); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oVolumeAdded); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartComps##classe::get_RemovedMaterialPercentage(double & oPercentRemoved) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oPercentRemoved); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RemovedMaterialPercentage(oPercentRemoved); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oPercentRemoved); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartComps##classe::get_RemovedMaterialVolume(double & oVolumeRemoved) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oVolumeRemoved); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RemovedMaterialVolume(oVolumeRemoved); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oVolumeRemoved); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartComps##classe::Add(CATIAProduct * iProduct1, CATIAProduct * iProduct2, double iCompAccuracy, double iDispAccuracy, CATLONG iComputationType, CATIAPartComp *& oPartComp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iProduct1,&iProduct2,&iCompAccuracy,&iDispAccuracy,&iComputationType,&oPartComp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iProduct1,iProduct2,iCompAccuracy,iDispAccuracy,iComputationType,oPartComp); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iProduct1,&iProduct2,&iCompAccuracy,&iDispAccuracy,&iComputationType,&oPartComp); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPartComps##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPartComps##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPartComps##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPartComps##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPartComps##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPartComps##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPartComps(classe) \
 \
 \
declare_TIE_CATIAPartComps(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPartComps##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPartComps,"CATIAPartComps",CATIAPartComps::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPartComps(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPartComps, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPartComps##classe(classe::MetaObject(),CATIAPartComps::MetaObject(),(void *)CreateTIECATIAPartComps##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPartComps(classe) \
 \
 \
declare_TIE_CATIAPartComps(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPartComps##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPartComps,"CATIAPartComps",CATIAPartComps::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPartComps(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPartComps, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPartComps##classe(classe::MetaObject(),CATIAPartComps::MetaObject(),(void *)CreateTIECATIAPartComps##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPartComps(classe) TIE_CATIAPartComps(classe)
#else
#define BOA_CATIAPartComps(classe) CATImplementBOA(CATIAPartComps, classe)
#endif

#endif
