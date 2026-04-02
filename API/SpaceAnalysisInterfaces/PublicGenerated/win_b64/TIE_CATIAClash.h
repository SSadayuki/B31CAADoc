#ifndef __TIE_CATIAClash
#define __TIE_CATIAClash

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAClash.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAClash */
#define declare_TIE_CATIAClash(classe) \
 \
 \
class TIECATIAClash##classe : public CATIAClash \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAClash, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ComputationType(CatClashComputationType & oType); \
      virtual HRESULT __stdcall put_ComputationType(CatClashComputationType iType); \
      virtual HRESULT __stdcall get_InterferenceType(CatClashInterferenceType & oType); \
      virtual HRESULT __stdcall put_InterferenceType(CatClashInterferenceType iType); \
      virtual HRESULT __stdcall get_Clearance(double & oClearance); \
      virtual HRESULT __stdcall put_Clearance(double iClearance); \
      virtual HRESULT __stdcall get_FirstGroup(CATIAGroup *& oGroup); \
      virtual HRESULT __stdcall put_FirstGroup(CATIAGroup * iGroup); \
      virtual HRESULT __stdcall get_SecondGroup(CATIAGroup *& oGroup); \
      virtual HRESULT __stdcall put_SecondGroup(CATIAGroup * iGroup); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall get_Conflicts(CATIAConflicts *& oConflicts); \
      virtual HRESULT __stdcall get_AnnotatedViews(CATIAAnnotatedViews *& oAnnotatedViews); \
      virtual HRESULT __stdcall get_Marker3Ds(CATIAMarker3Ds *& oMarker3Ds); \
      virtual HRESULT __stdcall Export(CatClashExportType iType, const CATBSTR & iPath); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAClash(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ComputationType(CatClashComputationType & oType); \
virtual HRESULT __stdcall put_ComputationType(CatClashComputationType iType); \
virtual HRESULT __stdcall get_InterferenceType(CatClashInterferenceType & oType); \
virtual HRESULT __stdcall put_InterferenceType(CatClashInterferenceType iType); \
virtual HRESULT __stdcall get_Clearance(double & oClearance); \
virtual HRESULT __stdcall put_Clearance(double iClearance); \
virtual HRESULT __stdcall get_FirstGroup(CATIAGroup *& oGroup); \
virtual HRESULT __stdcall put_FirstGroup(CATIAGroup * iGroup); \
virtual HRESULT __stdcall get_SecondGroup(CATIAGroup *& oGroup); \
virtual HRESULT __stdcall put_SecondGroup(CATIAGroup * iGroup); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall get_Conflicts(CATIAConflicts *& oConflicts); \
virtual HRESULT __stdcall get_AnnotatedViews(CATIAAnnotatedViews *& oAnnotatedViews); \
virtual HRESULT __stdcall get_Marker3Ds(CATIAMarker3Ds *& oMarker3Ds); \
virtual HRESULT __stdcall Export(CatClashExportType iType, const CATBSTR & iPath); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAClash(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ComputationType(CatClashComputationType & oType) \
{ \
return (ENVTIECALL(CATIAClash,ENVTIETypeLetter,ENVTIELetter)get_ComputationType(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_ComputationType(CatClashComputationType iType) \
{ \
return (ENVTIECALL(CATIAClash,ENVTIETypeLetter,ENVTIELetter)put_ComputationType(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_InterferenceType(CatClashInterferenceType & oType) \
{ \
return (ENVTIECALL(CATIAClash,ENVTIETypeLetter,ENVTIELetter)get_InterferenceType(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_InterferenceType(CatClashInterferenceType iType) \
{ \
return (ENVTIECALL(CATIAClash,ENVTIETypeLetter,ENVTIELetter)put_InterferenceType(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Clearance(double & oClearance) \
{ \
return (ENVTIECALL(CATIAClash,ENVTIETypeLetter,ENVTIELetter)get_Clearance(oClearance)); \
} \
HRESULT __stdcall  ENVTIEName::put_Clearance(double iClearance) \
{ \
return (ENVTIECALL(CATIAClash,ENVTIETypeLetter,ENVTIELetter)put_Clearance(iClearance)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstGroup(CATIAGroup *& oGroup) \
{ \
return (ENVTIECALL(CATIAClash,ENVTIETypeLetter,ENVTIELetter)get_FirstGroup(oGroup)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstGroup(CATIAGroup * iGroup) \
{ \
return (ENVTIECALL(CATIAClash,ENVTIETypeLetter,ENVTIELetter)put_FirstGroup(iGroup)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondGroup(CATIAGroup *& oGroup) \
{ \
return (ENVTIECALL(CATIAClash,ENVTIETypeLetter,ENVTIELetter)get_SecondGroup(oGroup)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondGroup(CATIAGroup * iGroup) \
{ \
return (ENVTIECALL(CATIAClash,ENVTIETypeLetter,ENVTIELetter)put_SecondGroup(iGroup)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAClash,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::get_Conflicts(CATIAConflicts *& oConflicts) \
{ \
return (ENVTIECALL(CATIAClash,ENVTIETypeLetter,ENVTIELetter)get_Conflicts(oConflicts)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnnotatedViews(CATIAAnnotatedViews *& oAnnotatedViews) \
{ \
return (ENVTIECALL(CATIAClash,ENVTIETypeLetter,ENVTIELetter)get_AnnotatedViews(oAnnotatedViews)); \
} \
HRESULT __stdcall  ENVTIEName::get_Marker3Ds(CATIAMarker3Ds *& oMarker3Ds) \
{ \
return (ENVTIECALL(CATIAClash,ENVTIETypeLetter,ENVTIELetter)get_Marker3Ds(oMarker3Ds)); \
} \
HRESULT __stdcall  ENVTIEName::Export(CatClashExportType iType, const CATBSTR & iPath) \
{ \
return (ENVTIECALL(CATIAClash,ENVTIETypeLetter,ENVTIELetter)Export(iType,iPath)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAClash,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAClash,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAClash,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAClash,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAClash,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAClash(classe)    TIECATIAClash##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAClash(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAClash, classe) \
 \
 \
CATImplementTIEMethods(CATIAClash, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAClash, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAClash, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAClash, classe) \
 \
HRESULT __stdcall  TIECATIAClash##classe::get_ComputationType(CatClashComputationType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ComputationType(oType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAClash##classe::put_ComputationType(CatClashComputationType iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ComputationType(iType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAClash##classe::get_InterferenceType(CatClashInterferenceType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InterferenceType(oType); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAClash##classe::put_InterferenceType(CatClashInterferenceType iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_InterferenceType(iType); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAClash##classe::get_Clearance(double & oClearance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oClearance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Clearance(oClearance); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oClearance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAClash##classe::put_Clearance(double iClearance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iClearance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Clearance(iClearance); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iClearance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAClash##classe::get_FirstGroup(CATIAGroup *& oGroup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oGroup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstGroup(oGroup); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oGroup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAClash##classe::put_FirstGroup(CATIAGroup * iGroup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iGroup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstGroup(iGroup); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iGroup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAClash##classe::get_SecondGroup(CATIAGroup *& oGroup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oGroup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondGroup(oGroup); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oGroup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAClash##classe::put_SecondGroup(CATIAGroup * iGroup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iGroup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondGroup(iGroup); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iGroup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAClash##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAClash##classe::get_Conflicts(CATIAConflicts *& oConflicts) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oConflicts); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Conflicts(oConflicts); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oConflicts); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAClash##classe::get_AnnotatedViews(CATIAAnnotatedViews *& oAnnotatedViews) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oAnnotatedViews); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnnotatedViews(oAnnotatedViews); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oAnnotatedViews); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAClash##classe::get_Marker3Ds(CATIAMarker3Ds *& oMarker3Ds) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oMarker3Ds); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Marker3Ds(oMarker3Ds); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oMarker3Ds); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAClash##classe::Export(CatClashExportType iType, const CATBSTR & iPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iType,&iPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Export(iType,iPath); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iType,&iPath); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAClash##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAClash##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAClash##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAClash##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAClash##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAClash(classe) \
 \
 \
declare_TIE_CATIAClash(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAClash##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAClash,"CATIAClash",CATIAClash::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAClash(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAClash, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAClash##classe(classe::MetaObject(),CATIAClash::MetaObject(),(void *)CreateTIECATIAClash##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAClash(classe) \
 \
 \
declare_TIE_CATIAClash(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAClash##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAClash,"CATIAClash",CATIAClash::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAClash(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAClash, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAClash##classe(classe::MetaObject(),CATIAClash::MetaObject(),(void *)CreateTIECATIAClash##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAClash(classe) TIE_CATIAClash(classe)
#else
#define BOA_CATIAClash(classe) CATImplementBOA(CATIAClash, classe)
#endif

#endif
