#ifndef __TIE_CATIAOptimizerWorkBench
#define __TIE_CATIAOptimizerWorkBench

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAOptimizerWorkBench.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAOptimizerWorkBench */
#define declare_TIE_CATIAOptimizerWorkBench(classe) \
 \
 \
class TIECATIAOptimizerWorkBench##classe : public CATIAOptimizerWorkBench \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAOptimizerWorkBench, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall QueryNeighbours(double iAccuracy, double iClearance, const CATSafeArrayVariant & iReferenceSelection, CATLONG iTypeQuery, CATLONG & iNumberOfSelectedEntities); \
      virtual HRESULT __stdcall Check(const CATBSTR & iContext, const CATBSTR & iInstanceID, const CATBSTR & iLatestShape, CATLONG & oNumberOfInterferingEntities); \
      virtual HRESULT __stdcall get_Silhouettes(CATIASilhouettes *& oSilhouettes); \
      virtual HRESULT __stdcall get_Wrappings(CATIADMOWrappings *& oWrappings); \
      virtual HRESULT __stdcall get_Thicknesses(CATIADMOThicknesses *& oThicknesses); \
      virtual HRESULT __stdcall get_Offsets(CATIADMOOffsets *& oOffsets); \
      virtual HRESULT __stdcall get_PartComps(CATIAPartComps *& oPartComps); \
      virtual HRESULT __stdcall get_SweptVolumes(CATIASweptVolumes *& oSweptVolumes); \
      virtual HRESULT __stdcall get_FreeSpaces(CATIAFreeSpaces *& oFreeSpaces); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAOptimizerWorkBench(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall QueryNeighbours(double iAccuracy, double iClearance, const CATSafeArrayVariant & iReferenceSelection, CATLONG iTypeQuery, CATLONG & iNumberOfSelectedEntities); \
virtual HRESULT __stdcall Check(const CATBSTR & iContext, const CATBSTR & iInstanceID, const CATBSTR & iLatestShape, CATLONG & oNumberOfInterferingEntities); \
virtual HRESULT __stdcall get_Silhouettes(CATIASilhouettes *& oSilhouettes); \
virtual HRESULT __stdcall get_Wrappings(CATIADMOWrappings *& oWrappings); \
virtual HRESULT __stdcall get_Thicknesses(CATIADMOThicknesses *& oThicknesses); \
virtual HRESULT __stdcall get_Offsets(CATIADMOOffsets *& oOffsets); \
virtual HRESULT __stdcall get_PartComps(CATIAPartComps *& oPartComps); \
virtual HRESULT __stdcall get_SweptVolumes(CATIASweptVolumes *& oSweptVolumes); \
virtual HRESULT __stdcall get_FreeSpaces(CATIAFreeSpaces *& oFreeSpaces); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAOptimizerWorkBench(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::QueryNeighbours(double iAccuracy, double iClearance, const CATSafeArrayVariant & iReferenceSelection, CATLONG iTypeQuery, CATLONG & iNumberOfSelectedEntities) \
{ \
return (ENVTIECALL(CATIAOptimizerWorkBench,ENVTIETypeLetter,ENVTIELetter)QueryNeighbours(iAccuracy,iClearance,iReferenceSelection,iTypeQuery,iNumberOfSelectedEntities)); \
} \
HRESULT __stdcall  ENVTIEName::Check(const CATBSTR & iContext, const CATBSTR & iInstanceID, const CATBSTR & iLatestShape, CATLONG & oNumberOfInterferingEntities) \
{ \
return (ENVTIECALL(CATIAOptimizerWorkBench,ENVTIETypeLetter,ENVTIELetter)Check(iContext,iInstanceID,iLatestShape,oNumberOfInterferingEntities)); \
} \
HRESULT __stdcall  ENVTIEName::get_Silhouettes(CATIASilhouettes *& oSilhouettes) \
{ \
return (ENVTIECALL(CATIAOptimizerWorkBench,ENVTIETypeLetter,ENVTIELetter)get_Silhouettes(oSilhouettes)); \
} \
HRESULT __stdcall  ENVTIEName::get_Wrappings(CATIADMOWrappings *& oWrappings) \
{ \
return (ENVTIECALL(CATIAOptimizerWorkBench,ENVTIETypeLetter,ENVTIELetter)get_Wrappings(oWrappings)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thicknesses(CATIADMOThicknesses *& oThicknesses) \
{ \
return (ENVTIECALL(CATIAOptimizerWorkBench,ENVTIETypeLetter,ENVTIELetter)get_Thicknesses(oThicknesses)); \
} \
HRESULT __stdcall  ENVTIEName::get_Offsets(CATIADMOOffsets *& oOffsets) \
{ \
return (ENVTIECALL(CATIAOptimizerWorkBench,ENVTIETypeLetter,ENVTIELetter)get_Offsets(oOffsets)); \
} \
HRESULT __stdcall  ENVTIEName::get_PartComps(CATIAPartComps *& oPartComps) \
{ \
return (ENVTIECALL(CATIAOptimizerWorkBench,ENVTIETypeLetter,ENVTIELetter)get_PartComps(oPartComps)); \
} \
HRESULT __stdcall  ENVTIEName::get_SweptVolumes(CATIASweptVolumes *& oSweptVolumes) \
{ \
return (ENVTIECALL(CATIAOptimizerWorkBench,ENVTIETypeLetter,ENVTIELetter)get_SweptVolumes(oSweptVolumes)); \
} \
HRESULT __stdcall  ENVTIEName::get_FreeSpaces(CATIAFreeSpaces *& oFreeSpaces) \
{ \
return (ENVTIECALL(CATIAOptimizerWorkBench,ENVTIETypeLetter,ENVTIELetter)get_FreeSpaces(oFreeSpaces)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAOptimizerWorkBench,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAOptimizerWorkBench,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAOptimizerWorkBench,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAOptimizerWorkBench,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAOptimizerWorkBench,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAOptimizerWorkBench(classe)    TIECATIAOptimizerWorkBench##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAOptimizerWorkBench(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAOptimizerWorkBench, classe) \
 \
 \
CATImplementTIEMethods(CATIAOptimizerWorkBench, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAOptimizerWorkBench, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAOptimizerWorkBench, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAOptimizerWorkBench, classe) \
 \
HRESULT __stdcall  TIECATIAOptimizerWorkBench##classe::QueryNeighbours(double iAccuracy, double iClearance, const CATSafeArrayVariant & iReferenceSelection, CATLONG iTypeQuery, CATLONG & iNumberOfSelectedEntities) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iAccuracy,&iClearance,&iReferenceSelection,&iTypeQuery,&iNumberOfSelectedEntities); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->QueryNeighbours(iAccuracy,iClearance,iReferenceSelection,iTypeQuery,iNumberOfSelectedEntities); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iAccuracy,&iClearance,&iReferenceSelection,&iTypeQuery,&iNumberOfSelectedEntities); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizerWorkBench##classe::Check(const CATBSTR & iContext, const CATBSTR & iInstanceID, const CATBSTR & iLatestShape, CATLONG & oNumberOfInterferingEntities) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iContext,&iInstanceID,&iLatestShape,&oNumberOfInterferingEntities); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Check(iContext,iInstanceID,iLatestShape,oNumberOfInterferingEntities); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iContext,&iInstanceID,&iLatestShape,&oNumberOfInterferingEntities); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizerWorkBench##classe::get_Silhouettes(CATIASilhouettes *& oSilhouettes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oSilhouettes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Silhouettes(oSilhouettes); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oSilhouettes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizerWorkBench##classe::get_Wrappings(CATIADMOWrappings *& oWrappings) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oWrappings); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Wrappings(oWrappings); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oWrappings); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizerWorkBench##classe::get_Thicknesses(CATIADMOThicknesses *& oThicknesses) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oThicknesses); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thicknesses(oThicknesses); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oThicknesses); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizerWorkBench##classe::get_Offsets(CATIADMOOffsets *& oOffsets) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oOffsets); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Offsets(oOffsets); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oOffsets); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizerWorkBench##classe::get_PartComps(CATIAPartComps *& oPartComps) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oPartComps); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PartComps(oPartComps); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oPartComps); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizerWorkBench##classe::get_SweptVolumes(CATIASweptVolumes *& oSweptVolumes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oSweptVolumes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SweptVolumes(oSweptVolumes); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oSweptVolumes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizerWorkBench##classe::get_FreeSpaces(CATIAFreeSpaces *& oFreeSpaces) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oFreeSpaces); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FreeSpaces(oFreeSpaces); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oFreeSpaces); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOptimizerWorkBench##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOptimizerWorkBench##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOptimizerWorkBench##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOptimizerWorkBench##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOptimizerWorkBench##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAOptimizerWorkBench(classe) \
 \
 \
declare_TIE_CATIAOptimizerWorkBench(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAOptimizerWorkBench##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAOptimizerWorkBench,"CATIAOptimizerWorkBench",CATIAOptimizerWorkBench::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAOptimizerWorkBench(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAOptimizerWorkBench, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAOptimizerWorkBench##classe(classe::MetaObject(),CATIAOptimizerWorkBench::MetaObject(),(void *)CreateTIECATIAOptimizerWorkBench##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAOptimizerWorkBench(classe) \
 \
 \
declare_TIE_CATIAOptimizerWorkBench(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAOptimizerWorkBench##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAOptimizerWorkBench,"CATIAOptimizerWorkBench",CATIAOptimizerWorkBench::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAOptimizerWorkBench(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAOptimizerWorkBench, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAOptimizerWorkBench##classe(classe::MetaObject(),CATIAOptimizerWorkBench::MetaObject(),(void *)CreateTIECATIAOptimizerWorkBench##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAOptimizerWorkBench(classe) TIE_CATIAOptimizerWorkBench(classe)
#else
#define BOA_CATIAOptimizerWorkBench(classe) CATImplementBOA(CATIAOptimizerWorkBench, classe)
#endif

#endif
