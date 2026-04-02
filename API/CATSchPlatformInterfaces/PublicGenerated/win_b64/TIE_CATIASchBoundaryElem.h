#ifndef __TIE_CATIASchBoundaryElem
#define __TIE_CATIASchBoundaryElem

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchBoundaryElem.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchBoundaryElem */
#define declare_TIE_CATIASchBoundaryElem(classe) \
 \
 \
class TIECATIASchBoundaryElem##classe : public CATIASchBoundaryElem \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchBoundaryElem, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetBoundaryPoints(CATIASchListOfDoubles *& oLDbPts); \
      virtual HRESULT __stdcall GetEndPoints(CATIASchListOfDoubles *& oLDb4Pts); \
      virtual HRESULT __stdcall ListGRRZoneOwners(CATIASchListOfObjects *& oLGRRZoneOwners); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchBoundaryElem(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetBoundaryPoints(CATIASchListOfDoubles *& oLDbPts); \
virtual HRESULT __stdcall GetEndPoints(CATIASchListOfDoubles *& oLDb4Pts); \
virtual HRESULT __stdcall ListGRRZoneOwners(CATIASchListOfObjects *& oLGRRZoneOwners); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchBoundaryElem(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetBoundaryPoints(CATIASchListOfDoubles *& oLDbPts) \
{ \
return (ENVTIECALL(CATIASchBoundaryElem,ENVTIETypeLetter,ENVTIELetter)GetBoundaryPoints(oLDbPts)); \
} \
HRESULT __stdcall  ENVTIEName::GetEndPoints(CATIASchListOfDoubles *& oLDb4Pts) \
{ \
return (ENVTIECALL(CATIASchBoundaryElem,ENVTIETypeLetter,ENVTIELetter)GetEndPoints(oLDb4Pts)); \
} \
HRESULT __stdcall  ENVTIEName::ListGRRZoneOwners(CATIASchListOfObjects *& oLGRRZoneOwners) \
{ \
return (ENVTIECALL(CATIASchBoundaryElem,ENVTIETypeLetter,ENVTIELetter)ListGRRZoneOwners(oLGRRZoneOwners)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchBoundaryElem,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchBoundaryElem,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchBoundaryElem,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchBoundaryElem,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchBoundaryElem,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchBoundaryElem(classe)    TIECATIASchBoundaryElem##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchBoundaryElem(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchBoundaryElem, classe) \
 \
 \
CATImplementTIEMethods(CATIASchBoundaryElem, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchBoundaryElem, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchBoundaryElem, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchBoundaryElem, classe) \
 \
HRESULT __stdcall  TIECATIASchBoundaryElem##classe::GetBoundaryPoints(CATIASchListOfDoubles *& oLDbPts) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oLDbPts); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBoundaryPoints(oLDbPts); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oLDbPts); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchBoundaryElem##classe::GetEndPoints(CATIASchListOfDoubles *& oLDb4Pts) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oLDb4Pts); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEndPoints(oLDb4Pts); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oLDb4Pts); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchBoundaryElem##classe::ListGRRZoneOwners(CATIASchListOfObjects *& oLGRRZoneOwners) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oLGRRZoneOwners); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListGRRZoneOwners(oLGRRZoneOwners); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oLGRRZoneOwners); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchBoundaryElem##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchBoundaryElem##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchBoundaryElem##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchBoundaryElem##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchBoundaryElem##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchBoundaryElem(classe) \
 \
 \
declare_TIE_CATIASchBoundaryElem(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchBoundaryElem##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchBoundaryElem,"CATIASchBoundaryElem",CATIASchBoundaryElem::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchBoundaryElem(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchBoundaryElem, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchBoundaryElem##classe(classe::MetaObject(),CATIASchBoundaryElem::MetaObject(),(void *)CreateTIECATIASchBoundaryElem##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchBoundaryElem(classe) \
 \
 \
declare_TIE_CATIASchBoundaryElem(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchBoundaryElem##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchBoundaryElem,"CATIASchBoundaryElem",CATIASchBoundaryElem::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchBoundaryElem(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchBoundaryElem, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchBoundaryElem##classe(classe::MetaObject(),CATIASchBoundaryElem::MetaObject(),(void *)CreateTIECATIASchBoundaryElem##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchBoundaryElem(classe) TIE_CATIASchBoundaryElem(classe)
#else
#define BOA_CATIASchBoundaryElem(classe) CATImplementBOA(CATIASchBoundaryElem, classe)
#endif

#endif
