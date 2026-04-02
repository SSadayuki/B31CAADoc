#ifndef __TIE_CATIASfmOpeningContoursMgr
#define __TIE_CATIASfmOpeningContoursMgr

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASfmOpeningContoursMgr.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASfmOpeningContoursMgr */
#define declare_TIE_CATIASfmOpeningContoursMgr(classe) \
 \
 \
class TIECATIASfmOpeningContoursMgr##classe : public CATIASfmOpeningContoursMgr \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASfmOpeningContoursMgr, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetAvailableStdOpeningContours(CATSafeArrayVariant *& oListContourNames); \
      virtual HRESULT __stdcall GetStdOpeningContourParams(const CATBSTR & iContourName, CATIASfmStandardContourParameters *& oListCkeParms); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASfmOpeningContoursMgr(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetAvailableStdOpeningContours(CATSafeArrayVariant *& oListContourNames); \
virtual HRESULT __stdcall GetStdOpeningContourParams(const CATBSTR & iContourName, CATIASfmStandardContourParameters *& oListCkeParms); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASfmOpeningContoursMgr(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetAvailableStdOpeningContours(CATSafeArrayVariant *& oListContourNames) \
{ \
return (ENVTIECALL(CATIASfmOpeningContoursMgr,ENVTIETypeLetter,ENVTIELetter)GetAvailableStdOpeningContours(oListContourNames)); \
} \
HRESULT __stdcall  ENVTIEName::GetStdOpeningContourParams(const CATBSTR & iContourName, CATIASfmStandardContourParameters *& oListCkeParms) \
{ \
return (ENVTIECALL(CATIASfmOpeningContoursMgr,ENVTIETypeLetter,ENVTIELetter)GetStdOpeningContourParams(iContourName,oListCkeParms)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASfmOpeningContoursMgr,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASfmOpeningContoursMgr,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmOpeningContoursMgr,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmOpeningContoursMgr,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASfmOpeningContoursMgr,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASfmOpeningContoursMgr(classe)    TIECATIASfmOpeningContoursMgr##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASfmOpeningContoursMgr(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASfmOpeningContoursMgr, classe) \
 \
 \
CATImplementTIEMethods(CATIASfmOpeningContoursMgr, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASfmOpeningContoursMgr, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASfmOpeningContoursMgr, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASfmOpeningContoursMgr, classe) \
 \
HRESULT __stdcall  TIECATIASfmOpeningContoursMgr##classe::GetAvailableStdOpeningContours(CATSafeArrayVariant *& oListContourNames) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oListContourNames); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAvailableStdOpeningContours(oListContourNames); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oListContourNames); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmOpeningContoursMgr##classe::GetStdOpeningContourParams(const CATBSTR & iContourName, CATIASfmStandardContourParameters *& oListCkeParms) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iContourName,&oListCkeParms); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStdOpeningContourParams(iContourName,oListCkeParms); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iContourName,&oListCkeParms); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmOpeningContoursMgr##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmOpeningContoursMgr##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmOpeningContoursMgr##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmOpeningContoursMgr##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmOpeningContoursMgr##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASfmOpeningContoursMgr(classe) \
 \
 \
declare_TIE_CATIASfmOpeningContoursMgr(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmOpeningContoursMgr##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmOpeningContoursMgr,"CATIASfmOpeningContoursMgr",CATIASfmOpeningContoursMgr::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmOpeningContoursMgr(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASfmOpeningContoursMgr, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmOpeningContoursMgr##classe(classe::MetaObject(),CATIASfmOpeningContoursMgr::MetaObject(),(void *)CreateTIECATIASfmOpeningContoursMgr##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASfmOpeningContoursMgr(classe) \
 \
 \
declare_TIE_CATIASfmOpeningContoursMgr(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmOpeningContoursMgr##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmOpeningContoursMgr,"CATIASfmOpeningContoursMgr",CATIASfmOpeningContoursMgr::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmOpeningContoursMgr(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASfmOpeningContoursMgr, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmOpeningContoursMgr##classe(classe::MetaObject(),CATIASfmOpeningContoursMgr::MetaObject(),(void *)CreateTIECATIASfmOpeningContoursMgr##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASfmOpeningContoursMgr(classe) TIE_CATIASfmOpeningContoursMgr(classe)
#else
#define BOA_CATIASfmOpeningContoursMgr(classe) CATImplementBOA(CATIASfmOpeningContoursMgr, classe)
#endif

#endif
