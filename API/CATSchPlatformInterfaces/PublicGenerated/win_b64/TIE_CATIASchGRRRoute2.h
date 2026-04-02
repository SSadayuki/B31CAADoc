#ifndef __TIE_CATIASchGRRRoute2
#define __TIE_CATIASchGRRRoute2

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchGRRRoute2.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchGRRRoute2 */
#define declare_TIE_CATIASchGRRRoute2(classe) \
 \
 \
class TIECATIASchGRRRoute2##classe : public CATIASchGRRRoute2 \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchGRRRoute2, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall SetReshapeMode(CatSchIDLGRRRouteReshapeMode iReshapeMode); \
      virtual HRESULT __stdcall GetReshapeMode(CatSchIDLGRRRouteReshapeMode & oReshapeMode); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchGRRRoute2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall SetReshapeMode(CatSchIDLGRRRouteReshapeMode iReshapeMode); \
virtual HRESULT __stdcall GetReshapeMode(CatSchIDLGRRRouteReshapeMode & oReshapeMode); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchGRRRoute2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::SetReshapeMode(CatSchIDLGRRRouteReshapeMode iReshapeMode) \
{ \
return (ENVTIECALL(CATIASchGRRRoute2,ENVTIETypeLetter,ENVTIELetter)SetReshapeMode(iReshapeMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetReshapeMode(CatSchIDLGRRRouteReshapeMode & oReshapeMode) \
{ \
return (ENVTIECALL(CATIASchGRRRoute2,ENVTIETypeLetter,ENVTIELetter)GetReshapeMode(oReshapeMode)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchGRRRoute2,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchGRRRoute2,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchGRRRoute2,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchGRRRoute2,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchGRRRoute2,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchGRRRoute2(classe)    TIECATIASchGRRRoute2##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchGRRRoute2(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchGRRRoute2, classe) \
 \
 \
CATImplementTIEMethods(CATIASchGRRRoute2, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchGRRRoute2, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchGRRRoute2, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchGRRRoute2, classe) \
 \
HRESULT __stdcall  TIECATIASchGRRRoute2##classe::SetReshapeMode(CatSchIDLGRRRouteReshapeMode iReshapeMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iReshapeMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetReshapeMode(iReshapeMode); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iReshapeMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRRoute2##classe::GetReshapeMode(CatSchIDLGRRRouteReshapeMode & oReshapeMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oReshapeMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetReshapeMode(oReshapeMode); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oReshapeMode); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRRoute2##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRRoute2##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRRoute2##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRRoute2##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRRoute2##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchGRRRoute2(classe) \
 \
 \
declare_TIE_CATIASchGRRRoute2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchGRRRoute2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchGRRRoute2,"CATIASchGRRRoute2",CATIASchGRRRoute2::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchGRRRoute2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchGRRRoute2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchGRRRoute2##classe(classe::MetaObject(),CATIASchGRRRoute2::MetaObject(),(void *)CreateTIECATIASchGRRRoute2##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchGRRRoute2(classe) \
 \
 \
declare_TIE_CATIASchGRRRoute2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchGRRRoute2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchGRRRoute2,"CATIASchGRRRoute2",CATIASchGRRRoute2::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchGRRRoute2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchGRRRoute2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchGRRRoute2##classe(classe::MetaObject(),CATIASchGRRRoute2::MetaObject(),(void *)CreateTIECATIASchGRRRoute2##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchGRRRoute2(classe) TIE_CATIASchGRRRoute2(classe)
#else
#define BOA_CATIASchGRRRoute2(classe) CATImplementBOA(CATIASchGRRRoute2, classe)
#endif

#endif
