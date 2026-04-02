#ifndef __TIE_CATIASchGRRZone
#define __TIE_CATIASchGRRZone

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchGRRZone.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchGRRZone */
#define declare_TIE_CATIASchGRRZone(classe) \
 \
 \
class TIECATIASchGRRZone##classe : public CATIASchGRRZone \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchGRRZone, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddBoundaryElement(CATIASchBoundaryElem * iZoneBndyToAdd); \
      virtual HRESULT __stdcall RemoveBoundaryElement(CATIASchBoundaryElem * iZoneBndyToRemove); \
      virtual HRESULT __stdcall ListBoundaryElements(CATIASchListOfObjects *& oLZoneBndy); \
      virtual HRESULT __stdcall IsBoundaryValid(CAT_VARIANT_BOOL & BIsValid); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchGRRZone(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddBoundaryElement(CATIASchBoundaryElem * iZoneBndyToAdd); \
virtual HRESULT __stdcall RemoveBoundaryElement(CATIASchBoundaryElem * iZoneBndyToRemove); \
virtual HRESULT __stdcall ListBoundaryElements(CATIASchListOfObjects *& oLZoneBndy); \
virtual HRESULT __stdcall IsBoundaryValid(CAT_VARIANT_BOOL & BIsValid); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchGRRZone(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddBoundaryElement(CATIASchBoundaryElem * iZoneBndyToAdd) \
{ \
return (ENVTIECALL(CATIASchGRRZone,ENVTIETypeLetter,ENVTIELetter)AddBoundaryElement(iZoneBndyToAdd)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveBoundaryElement(CATIASchBoundaryElem * iZoneBndyToRemove) \
{ \
return (ENVTIECALL(CATIASchGRRZone,ENVTIETypeLetter,ENVTIELetter)RemoveBoundaryElement(iZoneBndyToRemove)); \
} \
HRESULT __stdcall  ENVTIEName::ListBoundaryElements(CATIASchListOfObjects *& oLZoneBndy) \
{ \
return (ENVTIECALL(CATIASchGRRZone,ENVTIETypeLetter,ENVTIELetter)ListBoundaryElements(oLZoneBndy)); \
} \
HRESULT __stdcall  ENVTIEName::IsBoundaryValid(CAT_VARIANT_BOOL & BIsValid) \
{ \
return (ENVTIECALL(CATIASchGRRZone,ENVTIETypeLetter,ENVTIELetter)IsBoundaryValid(BIsValid)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchGRRZone,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchGRRZone,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchGRRZone,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchGRRZone,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchGRRZone,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchGRRZone(classe)    TIECATIASchGRRZone##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchGRRZone(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchGRRZone, classe) \
 \
 \
CATImplementTIEMethods(CATIASchGRRZone, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchGRRZone, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchGRRZone, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchGRRZone, classe) \
 \
HRESULT __stdcall  TIECATIASchGRRZone##classe::AddBoundaryElement(CATIASchBoundaryElem * iZoneBndyToAdd) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iZoneBndyToAdd); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddBoundaryElement(iZoneBndyToAdd); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iZoneBndyToAdd); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRZone##classe::RemoveBoundaryElement(CATIASchBoundaryElem * iZoneBndyToRemove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iZoneBndyToRemove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveBoundaryElement(iZoneBndyToRemove); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iZoneBndyToRemove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRZone##classe::ListBoundaryElements(CATIASchListOfObjects *& oLZoneBndy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oLZoneBndy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListBoundaryElements(oLZoneBndy); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oLZoneBndy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRZone##classe::IsBoundaryValid(CAT_VARIANT_BOOL & BIsValid) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&BIsValid); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsBoundaryValid(BIsValid); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&BIsValid); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRZone##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRZone##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRZone##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRZone##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRZone##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchGRRZone(classe) \
 \
 \
declare_TIE_CATIASchGRRZone(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchGRRZone##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchGRRZone,"CATIASchGRRZone",CATIASchGRRZone::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchGRRZone(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchGRRZone, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchGRRZone##classe(classe::MetaObject(),CATIASchGRRZone::MetaObject(),(void *)CreateTIECATIASchGRRZone##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchGRRZone(classe) \
 \
 \
declare_TIE_CATIASchGRRZone(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchGRRZone##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchGRRZone,"CATIASchGRRZone",CATIASchGRRZone::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchGRRZone(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchGRRZone, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchGRRZone##classe(classe::MetaObject(),CATIASchGRRZone::MetaObject(),(void *)CreateTIECATIASchGRRZone##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchGRRZone(classe) TIE_CATIASchGRRZone(classe)
#else
#define BOA_CATIASchGRRZone(classe) CATImplementBOA(CATIASchGRRZone, classe)
#endif

#endif
