#ifndef __TIE_CATIASchAppCntrData
#define __TIE_CATIASchAppCntrData

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchAppCntrData.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchAppCntrData */
#define declare_TIE_CATIASchAppCntrData(classe) \
 \
 \
class TIECATIASchAppCntrData##classe : public CATIASchAppCntrData \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchAppCntrData, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AppSetApplicationData(CATIASchListOfBSTRs * iLAppData); \
      virtual HRESULT __stdcall AppGetApplicationData(CATIASchListOfBSTRs *& iLAppData, CATIASchListOfBSTRs *& iLAppNlsData); \
      virtual HRESULT __stdcall AppListPotentialData(CATIASchListOfBSTRs *& iLAppData, CATIASchListOfBSTRs *& iLAppNlsData); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchAppCntrData(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AppSetApplicationData(CATIASchListOfBSTRs * iLAppData); \
virtual HRESULT __stdcall AppGetApplicationData(CATIASchListOfBSTRs *& iLAppData, CATIASchListOfBSTRs *& iLAppNlsData); \
virtual HRESULT __stdcall AppListPotentialData(CATIASchListOfBSTRs *& iLAppData, CATIASchListOfBSTRs *& iLAppNlsData); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchAppCntrData(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AppSetApplicationData(CATIASchListOfBSTRs * iLAppData) \
{ \
return (ENVTIECALL(CATIASchAppCntrData,ENVTIETypeLetter,ENVTIELetter)AppSetApplicationData(iLAppData)); \
} \
HRESULT __stdcall  ENVTIEName::AppGetApplicationData(CATIASchListOfBSTRs *& iLAppData, CATIASchListOfBSTRs *& iLAppNlsData) \
{ \
return (ENVTIECALL(CATIASchAppCntrData,ENVTIETypeLetter,ENVTIELetter)AppGetApplicationData(iLAppData,iLAppNlsData)); \
} \
HRESULT __stdcall  ENVTIEName::AppListPotentialData(CATIASchListOfBSTRs *& iLAppData, CATIASchListOfBSTRs *& iLAppNlsData) \
{ \
return (ENVTIECALL(CATIASchAppCntrData,ENVTIETypeLetter,ENVTIELetter)AppListPotentialData(iLAppData,iLAppNlsData)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchAppCntrData,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchAppCntrData,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppCntrData,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppCntrData,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchAppCntrData,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchAppCntrData(classe)    TIECATIASchAppCntrData##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchAppCntrData(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchAppCntrData, classe) \
 \
 \
CATImplementTIEMethods(CATIASchAppCntrData, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchAppCntrData, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchAppCntrData, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchAppCntrData, classe) \
 \
HRESULT __stdcall  TIECATIASchAppCntrData##classe::AppSetApplicationData(CATIASchListOfBSTRs * iLAppData) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iLAppData); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppSetApplicationData(iLAppData); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iLAppData); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppCntrData##classe::AppGetApplicationData(CATIASchListOfBSTRs *& iLAppData, CATIASchListOfBSTRs *& iLAppNlsData) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iLAppData,&iLAppNlsData); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetApplicationData(iLAppData,iLAppNlsData); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iLAppData,&iLAppNlsData); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppCntrData##classe::AppListPotentialData(CATIASchListOfBSTRs *& iLAppData, CATIASchListOfBSTRs *& iLAppNlsData) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iLAppData,&iLAppNlsData); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListPotentialData(iLAppData,iLAppNlsData); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iLAppData,&iLAppNlsData); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppCntrData##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppCntrData##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppCntrData##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppCntrData##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppCntrData##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchAppCntrData(classe) \
 \
 \
declare_TIE_CATIASchAppCntrData(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppCntrData##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppCntrData,"CATIASchAppCntrData",CATIASchAppCntrData::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppCntrData(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchAppCntrData, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppCntrData##classe(classe::MetaObject(),CATIASchAppCntrData::MetaObject(),(void *)CreateTIECATIASchAppCntrData##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchAppCntrData(classe) \
 \
 \
declare_TIE_CATIASchAppCntrData(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppCntrData##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppCntrData,"CATIASchAppCntrData",CATIASchAppCntrData::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppCntrData(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchAppCntrData, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppCntrData##classe(classe::MetaObject(),CATIASchAppCntrData::MetaObject(),(void *)CreateTIECATIASchAppCntrData##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchAppCntrData(classe) TIE_CATIASchAppCntrData(classe)
#else
#define BOA_CATIASchAppCntrData(classe) CATImplementBOA(CATIASchAppCntrData, classe)
#endif

#endif
