#ifndef __TIE_CATIAAutoDraft
#define __TIE_CATIAAutoDraft

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAutoDraft.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAutoDraft */
#define declare_TIE_CATIAAutoDraft(classe) \
 \
 \
class TIECATIAAutoDraft##classe : public CATIAAutoDraft \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAutoDraft, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_FunctionalFaces(CATIAReferences *& oFaces); \
      virtual HRESULT __stdcall put_FunctionalFace(CATIAReference * iFace); \
      virtual HRESULT __stdcall get_PartingElement(CATIAReference *& oPartingElement); \
      virtual HRESULT __stdcall put_PartingElement(CATIAReference * iPartingElement); \
      virtual HRESULT __stdcall get_PullingDirection(CATIAReference *& oPullingDirection); \
      virtual HRESULT __stdcall put_PullingDirection(CATIAReference * iPullingDirection); \
      virtual HRESULT __stdcall get_MainDraftAngle(CATIAReference *& oMainDraftAngle); \
      virtual HRESULT __stdcall put_MainDraftAngle(CATIAReference * iMainDraftAngle); \
      virtual HRESULT __stdcall get_Mode(CATIAReference *& oMode); \
      virtual HRESULT __stdcall put_Mode(CATIAReference * iMode); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAutoDraft(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_FunctionalFaces(CATIAReferences *& oFaces); \
virtual HRESULT __stdcall put_FunctionalFace(CATIAReference * iFace); \
virtual HRESULT __stdcall get_PartingElement(CATIAReference *& oPartingElement); \
virtual HRESULT __stdcall put_PartingElement(CATIAReference * iPartingElement); \
virtual HRESULT __stdcall get_PullingDirection(CATIAReference *& oPullingDirection); \
virtual HRESULT __stdcall put_PullingDirection(CATIAReference * iPullingDirection); \
virtual HRESULT __stdcall get_MainDraftAngle(CATIAReference *& oMainDraftAngle); \
virtual HRESULT __stdcall put_MainDraftAngle(CATIAReference * iMainDraftAngle); \
virtual HRESULT __stdcall get_Mode(CATIAReference *& oMode); \
virtual HRESULT __stdcall put_Mode(CATIAReference * iMode); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAutoDraft(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_FunctionalFaces(CATIAReferences *& oFaces) \
{ \
return (ENVTIECALL(CATIAAutoDraft,ENVTIETypeLetter,ENVTIELetter)get_FunctionalFaces(oFaces)); \
} \
HRESULT __stdcall  ENVTIEName::put_FunctionalFace(CATIAReference * iFace) \
{ \
return (ENVTIECALL(CATIAAutoDraft,ENVTIETypeLetter,ENVTIELetter)put_FunctionalFace(iFace)); \
} \
HRESULT __stdcall  ENVTIEName::get_PartingElement(CATIAReference *& oPartingElement) \
{ \
return (ENVTIECALL(CATIAAutoDraft,ENVTIETypeLetter,ENVTIELetter)get_PartingElement(oPartingElement)); \
} \
HRESULT __stdcall  ENVTIEName::put_PartingElement(CATIAReference * iPartingElement) \
{ \
return (ENVTIECALL(CATIAAutoDraft,ENVTIETypeLetter,ENVTIELetter)put_PartingElement(iPartingElement)); \
} \
HRESULT __stdcall  ENVTIEName::get_PullingDirection(CATIAReference *& oPullingDirection) \
{ \
return (ENVTIECALL(CATIAAutoDraft,ENVTIETypeLetter,ENVTIELetter)get_PullingDirection(oPullingDirection)); \
} \
HRESULT __stdcall  ENVTIEName::put_PullingDirection(CATIAReference * iPullingDirection) \
{ \
return (ENVTIECALL(CATIAAutoDraft,ENVTIETypeLetter,ENVTIELetter)put_PullingDirection(iPullingDirection)); \
} \
HRESULT __stdcall  ENVTIEName::get_MainDraftAngle(CATIAReference *& oMainDraftAngle) \
{ \
return (ENVTIECALL(CATIAAutoDraft,ENVTIETypeLetter,ENVTIELetter)get_MainDraftAngle(oMainDraftAngle)); \
} \
HRESULT __stdcall  ENVTIEName::put_MainDraftAngle(CATIAReference * iMainDraftAngle) \
{ \
return (ENVTIECALL(CATIAAutoDraft,ENVTIETypeLetter,ENVTIELetter)put_MainDraftAngle(iMainDraftAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_Mode(CATIAReference *& oMode) \
{ \
return (ENVTIECALL(CATIAAutoDraft,ENVTIETypeLetter,ENVTIELetter)get_Mode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_Mode(CATIAReference * iMode) \
{ \
return (ENVTIECALL(CATIAAutoDraft,ENVTIETypeLetter,ENVTIELetter)put_Mode(iMode)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAutoDraft,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAutoDraft,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAutoDraft,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAutoDraft,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAutoDraft,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAutoDraft(classe)    TIECATIAAutoDraft##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAutoDraft(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAutoDraft, classe) \
 \
 \
CATImplementTIEMethods(CATIAAutoDraft, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAutoDraft, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAutoDraft, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAutoDraft, classe) \
 \
HRESULT __stdcall  TIECATIAAutoDraft##classe::get_FunctionalFaces(CATIAReferences *& oFaces) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oFaces); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FunctionalFaces(oFaces); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oFaces); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAutoDraft##classe::put_FunctionalFace(CATIAReference * iFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FunctionalFace(iFace); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAutoDraft##classe::get_PartingElement(CATIAReference *& oPartingElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oPartingElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PartingElement(oPartingElement); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oPartingElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAutoDraft##classe::put_PartingElement(CATIAReference * iPartingElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iPartingElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PartingElement(iPartingElement); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iPartingElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAutoDraft##classe::get_PullingDirection(CATIAReference *& oPullingDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oPullingDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PullingDirection(oPullingDirection); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oPullingDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAutoDraft##classe::put_PullingDirection(CATIAReference * iPullingDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iPullingDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PullingDirection(iPullingDirection); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iPullingDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAutoDraft##classe::get_MainDraftAngle(CATIAReference *& oMainDraftAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oMainDraftAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MainDraftAngle(oMainDraftAngle); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oMainDraftAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAutoDraft##classe::put_MainDraftAngle(CATIAReference * iMainDraftAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iMainDraftAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MainDraftAngle(iMainDraftAngle); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iMainDraftAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAutoDraft##classe::get_Mode(CATIAReference *& oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Mode(oMode); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAutoDraft##classe::put_Mode(CATIAReference * iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Mode(iMode); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAutoDraft##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAutoDraft##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAutoDraft##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAutoDraft##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAutoDraft##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAutoDraft(classe) \
 \
 \
declare_TIE_CATIAAutoDraft(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAutoDraft##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAutoDraft,"CATIAAutoDraft",CATIAAutoDraft::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAutoDraft(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAutoDraft, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAutoDraft##classe(classe::MetaObject(),CATIAAutoDraft::MetaObject(),(void *)CreateTIECATIAAutoDraft##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAutoDraft(classe) \
 \
 \
declare_TIE_CATIAAutoDraft(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAutoDraft##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAutoDraft,"CATIAAutoDraft",CATIAAutoDraft::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAutoDraft(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAutoDraft, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAutoDraft##classe(classe::MetaObject(),CATIAAutoDraft::MetaObject(),(void *)CreateTIECATIAAutoDraft##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAutoDraft(classe) TIE_CATIAAutoDraft(classe)
#else
#define BOA_CATIAAutoDraft(classe) CATImplementBOA(CATIAAutoDraft, classe)
#endif

#endif
