#ifndef __TIE_CATIASchAppGapPriority
#define __TIE_CATIASchAppGapPriority

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchAppGapPriority.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchAppGapPriority */
#define declare_TIE_CATIASchAppGapPriority(classe) \
 \
 \
class TIECATIASchAppGapPriority##classe : public CATIASchAppGapPriority \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchAppGapPriority, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AppChooseGapPriority(CATIASchRoute * iTheOtherRoute, CatSchIDLGapPriority & oPriority); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchAppGapPriority(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AppChooseGapPriority(CATIASchRoute * iTheOtherRoute, CatSchIDLGapPriority & oPriority); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchAppGapPriority(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AppChooseGapPriority(CATIASchRoute * iTheOtherRoute, CatSchIDLGapPriority & oPriority) \
{ \
return (ENVTIECALL(CATIASchAppGapPriority,ENVTIETypeLetter,ENVTIELetter)AppChooseGapPriority(iTheOtherRoute,oPriority)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchAppGapPriority,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchAppGapPriority,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppGapPriority,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppGapPriority,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchAppGapPriority,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchAppGapPriority(classe)    TIECATIASchAppGapPriority##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchAppGapPriority(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchAppGapPriority, classe) \
 \
 \
CATImplementTIEMethods(CATIASchAppGapPriority, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchAppGapPriority, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchAppGapPriority, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchAppGapPriority, classe) \
 \
HRESULT __stdcall  TIECATIASchAppGapPriority##classe::AppChooseGapPriority(CATIASchRoute * iTheOtherRoute, CatSchIDLGapPriority & oPriority) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iTheOtherRoute,&oPriority); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppChooseGapPriority(iTheOtherRoute,oPriority); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iTheOtherRoute,&oPriority); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppGapPriority##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppGapPriority##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppGapPriority##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppGapPriority##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppGapPriority##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchAppGapPriority(classe) \
 \
 \
declare_TIE_CATIASchAppGapPriority(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppGapPriority##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppGapPriority,"CATIASchAppGapPriority",CATIASchAppGapPriority::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppGapPriority(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchAppGapPriority, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppGapPriority##classe(classe::MetaObject(),CATIASchAppGapPriority::MetaObject(),(void *)CreateTIECATIASchAppGapPriority##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchAppGapPriority(classe) \
 \
 \
declare_TIE_CATIASchAppGapPriority(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppGapPriority##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppGapPriority,"CATIASchAppGapPriority",CATIASchAppGapPriority::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppGapPriority(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchAppGapPriority, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppGapPriority##classe(classe::MetaObject(),CATIASchAppGapPriority::MetaObject(),(void *)CreateTIECATIASchAppGapPriority##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchAppGapPriority(classe) TIE_CATIASchAppGapPriority(classe)
#else
#define BOA_CATIASchAppGapPriority(classe) CATImplementBOA(CATIASchAppGapPriority, classe)
#endif

#endif
