#ifndef __TIE_CATIASchGRR
#define __TIE_CATIASchGRR

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchGRR.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchGRR */
#define declare_TIE_CATIASchGRR(classe) \
 \
 \
class TIECATIASchGRR##classe : public CATIASchGRR \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchGRR, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetSchObjOwner(CATIASchAppConnectable *& oGRROwner); \
      virtual HRESULT __stdcall GetGRRName(CATBSTR & oGRRName); \
      virtual HRESULT __stdcall SetGRRName(const CATBSTR & iGRRName); \
      virtual HRESULT __stdcall GetSchCntrOwners(CATIASchAppConnector *& oCntrOwner, CATIASchGRR *& oGRROwner); \
      virtual HRESULT __stdcall ListConnectedGRRs(CATIASchAppConnectable * iGRROwner, CATIASchListOfBSTRs * iLCntbleClassFilter, CATIASchListOfObjects *& oLCntbleGRRs, CATIASchListOfObjects *& oLCntbles, CATIASchListOfObjects *& oLCntrsOnThisObj, CATIASchListOfObjects *& oLCntrsOnConnected); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchGRR(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetSchObjOwner(CATIASchAppConnectable *& oGRROwner); \
virtual HRESULT __stdcall GetGRRName(CATBSTR & oGRRName); \
virtual HRESULT __stdcall SetGRRName(const CATBSTR & iGRRName); \
virtual HRESULT __stdcall GetSchCntrOwners(CATIASchAppConnector *& oCntrOwner, CATIASchGRR *& oGRROwner); \
virtual HRESULT __stdcall ListConnectedGRRs(CATIASchAppConnectable * iGRROwner, CATIASchListOfBSTRs * iLCntbleClassFilter, CATIASchListOfObjects *& oLCntbleGRRs, CATIASchListOfObjects *& oLCntbles, CATIASchListOfObjects *& oLCntrsOnThisObj, CATIASchListOfObjects *& oLCntrsOnConnected); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchGRR(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetSchObjOwner(CATIASchAppConnectable *& oGRROwner) \
{ \
return (ENVTIECALL(CATIASchGRR,ENVTIETypeLetter,ENVTIELetter)GetSchObjOwner(oGRROwner)); \
} \
HRESULT __stdcall  ENVTIEName::GetGRRName(CATBSTR & oGRRName) \
{ \
return (ENVTIECALL(CATIASchGRR,ENVTIETypeLetter,ENVTIELetter)GetGRRName(oGRRName)); \
} \
HRESULT __stdcall  ENVTIEName::SetGRRName(const CATBSTR & iGRRName) \
{ \
return (ENVTIECALL(CATIASchGRR,ENVTIETypeLetter,ENVTIELetter)SetGRRName(iGRRName)); \
} \
HRESULT __stdcall  ENVTIEName::GetSchCntrOwners(CATIASchAppConnector *& oCntrOwner, CATIASchGRR *& oGRROwner) \
{ \
return (ENVTIECALL(CATIASchGRR,ENVTIETypeLetter,ENVTIELetter)GetSchCntrOwners(oCntrOwner,oGRROwner)); \
} \
HRESULT __stdcall  ENVTIEName::ListConnectedGRRs(CATIASchAppConnectable * iGRROwner, CATIASchListOfBSTRs * iLCntbleClassFilter, CATIASchListOfObjects *& oLCntbleGRRs, CATIASchListOfObjects *& oLCntbles, CATIASchListOfObjects *& oLCntrsOnThisObj, CATIASchListOfObjects *& oLCntrsOnConnected) \
{ \
return (ENVTIECALL(CATIASchGRR,ENVTIETypeLetter,ENVTIELetter)ListConnectedGRRs(iGRROwner,iLCntbleClassFilter,oLCntbleGRRs,oLCntbles,oLCntrsOnThisObj,oLCntrsOnConnected)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchGRR,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchGRR,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchGRR,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchGRR,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchGRR,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchGRR(classe)    TIECATIASchGRR##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchGRR(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchGRR, classe) \
 \
 \
CATImplementTIEMethods(CATIASchGRR, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchGRR, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchGRR, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchGRR, classe) \
 \
HRESULT __stdcall  TIECATIASchGRR##classe::GetSchObjOwner(CATIASchAppConnectable *& oGRROwner) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oGRROwner); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSchObjOwner(oGRROwner); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oGRROwner); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRR##classe::GetGRRName(CATBSTR & oGRRName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oGRRName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGRRName(oGRRName); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oGRRName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRR##classe::SetGRRName(const CATBSTR & iGRRName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iGRRName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGRRName(iGRRName); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iGRRName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRR##classe::GetSchCntrOwners(CATIASchAppConnector *& oCntrOwner, CATIASchGRR *& oGRROwner) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oCntrOwner,&oGRROwner); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSchCntrOwners(oCntrOwner,oGRROwner); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oCntrOwner,&oGRROwner); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRR##classe::ListConnectedGRRs(CATIASchAppConnectable * iGRROwner, CATIASchListOfBSTRs * iLCntbleClassFilter, CATIASchListOfObjects *& oLCntbleGRRs, CATIASchListOfObjects *& oLCntbles, CATIASchListOfObjects *& oLCntrsOnThisObj, CATIASchListOfObjects *& oLCntrsOnConnected) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iGRROwner,&iLCntbleClassFilter,&oLCntbleGRRs,&oLCntbles,&oLCntrsOnThisObj,&oLCntrsOnConnected); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListConnectedGRRs(iGRROwner,iLCntbleClassFilter,oLCntbleGRRs,oLCntbles,oLCntrsOnThisObj,oLCntrsOnConnected); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iGRROwner,&iLCntbleClassFilter,&oLCntbleGRRs,&oLCntbles,&oLCntrsOnThisObj,&oLCntrsOnConnected); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRR##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRR##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRR##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRR##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRR##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchGRR(classe) \
 \
 \
declare_TIE_CATIASchGRR(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchGRR##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchGRR,"CATIASchGRR",CATIASchGRR::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchGRR(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchGRR, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchGRR##classe(classe::MetaObject(),CATIASchGRR::MetaObject(),(void *)CreateTIECATIASchGRR##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchGRR(classe) \
 \
 \
declare_TIE_CATIASchGRR(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchGRR##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchGRR,"CATIASchGRR",CATIASchGRR::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchGRR(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchGRR, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchGRR##classe(classe::MetaObject(),CATIASchGRR::MetaObject(),(void *)CreateTIECATIASchGRR##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchGRR(classe) TIE_CATIASchGRR(classe)
#else
#define BOA_CATIASchGRR(classe) CATImplementBOA(CATIASchGRR, classe)
#endif

#endif
