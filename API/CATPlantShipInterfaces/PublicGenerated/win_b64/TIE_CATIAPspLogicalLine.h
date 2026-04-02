#ifndef __TIE_CATIAPspLogicalLine
#define __TIE_CATIAPspLogicalLine

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPspLogicalLine.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPspLogicalLine */
#define declare_TIE_CATIAPspLogicalLine(classe) \
 \
 \
class TIECATIAPspLogicalLine##classe : public CATIAPspLogicalLine \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPspLogicalLine, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetFromTo(CATIAPspListOfObjects *& oListFromMajor, CATIAPspListOfObjects *& oListFromMinor, CATIAPspListOfObjects *& oListToMajor, CATIAPspListOfObjects *& oListToMinor); \
      virtual HRESULT __stdcall GetFromToInfoArrayMaxSize(CATLONG & oMaxSizeOfValues); \
      virtual HRESULT __stdcall GetFromToInformation(CATSafeArrayVariant & oFromToLabel, CATSafeArrayVariant & oFTMajor, CATSafeArrayVariant & oFTMinor, CATLONG & oSizeOfOutput); \
      virtual HRESULT __stdcall get_Members(CATIAPspListOfObjects *& oLMembers); \
      virtual HRESULT __stdcall AddMember(CATIAPspGroupable * iGroupable); \
      virtual HRESULT __stdcall RemoveMember(CATIAPspGroupable * iGroupable); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPspLogicalLine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetFromTo(CATIAPspListOfObjects *& oListFromMajor, CATIAPspListOfObjects *& oListFromMinor, CATIAPspListOfObjects *& oListToMajor, CATIAPspListOfObjects *& oListToMinor); \
virtual HRESULT __stdcall GetFromToInfoArrayMaxSize(CATLONG & oMaxSizeOfValues); \
virtual HRESULT __stdcall GetFromToInformation(CATSafeArrayVariant & oFromToLabel, CATSafeArrayVariant & oFTMajor, CATSafeArrayVariant & oFTMinor, CATLONG & oSizeOfOutput); \
virtual HRESULT __stdcall get_Members(CATIAPspListOfObjects *& oLMembers); \
virtual HRESULT __stdcall AddMember(CATIAPspGroupable * iGroupable); \
virtual HRESULT __stdcall RemoveMember(CATIAPspGroupable * iGroupable); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPspLogicalLine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetFromTo(CATIAPspListOfObjects *& oListFromMajor, CATIAPspListOfObjects *& oListFromMinor, CATIAPspListOfObjects *& oListToMajor, CATIAPspListOfObjects *& oListToMinor) \
{ \
return (ENVTIECALL(CATIAPspLogicalLine,ENVTIETypeLetter,ENVTIELetter)GetFromTo(oListFromMajor,oListFromMinor,oListToMajor,oListToMinor)); \
} \
HRESULT __stdcall  ENVTIEName::GetFromToInfoArrayMaxSize(CATLONG & oMaxSizeOfValues) \
{ \
return (ENVTIECALL(CATIAPspLogicalLine,ENVTIETypeLetter,ENVTIELetter)GetFromToInfoArrayMaxSize(oMaxSizeOfValues)); \
} \
HRESULT __stdcall  ENVTIEName::GetFromToInformation(CATSafeArrayVariant & oFromToLabel, CATSafeArrayVariant & oFTMajor, CATSafeArrayVariant & oFTMinor, CATLONG & oSizeOfOutput) \
{ \
return (ENVTIECALL(CATIAPspLogicalLine,ENVTIETypeLetter,ENVTIELetter)GetFromToInformation(oFromToLabel,oFTMajor,oFTMinor,oSizeOfOutput)); \
} \
HRESULT __stdcall  ENVTIEName::get_Members(CATIAPspListOfObjects *& oLMembers) \
{ \
return (ENVTIECALL(CATIAPspLogicalLine,ENVTIETypeLetter,ENVTIELetter)get_Members(oLMembers)); \
} \
HRESULT __stdcall  ENVTIEName::AddMember(CATIAPspGroupable * iGroupable) \
{ \
return (ENVTIECALL(CATIAPspLogicalLine,ENVTIETypeLetter,ENVTIELetter)AddMember(iGroupable)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveMember(CATIAPspGroupable * iGroupable) \
{ \
return (ENVTIECALL(CATIAPspLogicalLine,ENVTIETypeLetter,ENVTIELetter)RemoveMember(iGroupable)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPspLogicalLine,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPspLogicalLine,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspLogicalLine,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspLogicalLine,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPspLogicalLine,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPspLogicalLine(classe)    TIECATIAPspLogicalLine##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPspLogicalLine(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPspLogicalLine, classe) \
 \
 \
CATImplementTIEMethods(CATIAPspLogicalLine, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPspLogicalLine, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPspLogicalLine, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPspLogicalLine, classe) \
 \
HRESULT __stdcall  TIECATIAPspLogicalLine##classe::GetFromTo(CATIAPspListOfObjects *& oListFromMajor, CATIAPspListOfObjects *& oListFromMinor, CATIAPspListOfObjects *& oListToMajor, CATIAPspListOfObjects *& oListToMinor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oListFromMajor,&oListFromMinor,&oListToMajor,&oListToMinor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFromTo(oListFromMajor,oListFromMinor,oListToMajor,oListToMinor); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oListFromMajor,&oListFromMinor,&oListToMajor,&oListToMinor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspLogicalLine##classe::GetFromToInfoArrayMaxSize(CATLONG & oMaxSizeOfValues) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oMaxSizeOfValues); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFromToInfoArrayMaxSize(oMaxSizeOfValues); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oMaxSizeOfValues); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspLogicalLine##classe::GetFromToInformation(CATSafeArrayVariant & oFromToLabel, CATSafeArrayVariant & oFTMajor, CATSafeArrayVariant & oFTMinor, CATLONG & oSizeOfOutput) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oFromToLabel,&oFTMajor,&oFTMinor,&oSizeOfOutput); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFromToInformation(oFromToLabel,oFTMajor,oFTMinor,oSizeOfOutput); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oFromToLabel,&oFTMajor,&oFTMinor,&oSizeOfOutput); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspLogicalLine##classe::get_Members(CATIAPspListOfObjects *& oLMembers) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oLMembers); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Members(oLMembers); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oLMembers); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspLogicalLine##classe::AddMember(CATIAPspGroupable * iGroupable) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iGroupable); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMember(iGroupable); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iGroupable); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspLogicalLine##classe::RemoveMember(CATIAPspGroupable * iGroupable) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iGroupable); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveMember(iGroupable); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iGroupable); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspLogicalLine##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspLogicalLine##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspLogicalLine##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspLogicalLine##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspLogicalLine##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPspLogicalLine(classe) \
 \
 \
declare_TIE_CATIAPspLogicalLine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspLogicalLine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspLogicalLine,"CATIAPspLogicalLine",CATIAPspLogicalLine::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspLogicalLine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPspLogicalLine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspLogicalLine##classe(classe::MetaObject(),CATIAPspLogicalLine::MetaObject(),(void *)CreateTIECATIAPspLogicalLine##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPspLogicalLine(classe) \
 \
 \
declare_TIE_CATIAPspLogicalLine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspLogicalLine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspLogicalLine,"CATIAPspLogicalLine",CATIAPspLogicalLine::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspLogicalLine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPspLogicalLine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspLogicalLine##classe(classe::MetaObject(),CATIAPspLogicalLine::MetaObject(),(void *)CreateTIECATIAPspLogicalLine##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPspLogicalLine(classe) TIE_CATIAPspLogicalLine(classe)
#else
#define BOA_CATIAPspLogicalLine(classe) CATImplementBOA(CATIAPspLogicalLine, classe)
#endif

#endif
