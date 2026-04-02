#ifndef __TIE_CATIASchAppConnection
#define __TIE_CATIASchAppConnection

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchAppConnection.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchAppConnection */
#define declare_TIE_CATIASchAppConnection(classe) \
 \
 \
class TIECATIASchAppConnection##classe : public CATIASchAppConnection \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchAppConnection, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AppListConnectors(CATIASchListOfBSTRs * iLCntrClassFilter, CATIASchListOfObjects *& oLCntrs); \
      virtual HRESULT __stdcall AppListConnectables(CATIASchListOfBSTRs * iLCntbleClassFilter, CATIASchListOfObjects *& oLCntbles, CATIASchListOfObjects *& oLCntrs); \
      virtual HRESULT __stdcall AppAddConnector(CATIASchAppConnector * iCntrToAdd); \
      virtual HRESULT __stdcall AppRemoveConnector(CATIASchAppConnector * iCntrToRemove); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchAppConnection(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AppListConnectors(CATIASchListOfBSTRs * iLCntrClassFilter, CATIASchListOfObjects *& oLCntrs); \
virtual HRESULT __stdcall AppListConnectables(CATIASchListOfBSTRs * iLCntbleClassFilter, CATIASchListOfObjects *& oLCntbles, CATIASchListOfObjects *& oLCntrs); \
virtual HRESULT __stdcall AppAddConnector(CATIASchAppConnector * iCntrToAdd); \
virtual HRESULT __stdcall AppRemoveConnector(CATIASchAppConnector * iCntrToRemove); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchAppConnection(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AppListConnectors(CATIASchListOfBSTRs * iLCntrClassFilter, CATIASchListOfObjects *& oLCntrs) \
{ \
return (ENVTIECALL(CATIASchAppConnection,ENVTIETypeLetter,ENVTIELetter)AppListConnectors(iLCntrClassFilter,oLCntrs)); \
} \
HRESULT __stdcall  ENVTIEName::AppListConnectables(CATIASchListOfBSTRs * iLCntbleClassFilter, CATIASchListOfObjects *& oLCntbles, CATIASchListOfObjects *& oLCntrs) \
{ \
return (ENVTIECALL(CATIASchAppConnection,ENVTIETypeLetter,ENVTIELetter)AppListConnectables(iLCntbleClassFilter,oLCntbles,oLCntrs)); \
} \
HRESULT __stdcall  ENVTIEName::AppAddConnector(CATIASchAppConnector * iCntrToAdd) \
{ \
return (ENVTIECALL(CATIASchAppConnection,ENVTIETypeLetter,ENVTIELetter)AppAddConnector(iCntrToAdd)); \
} \
HRESULT __stdcall  ENVTIEName::AppRemoveConnector(CATIASchAppConnector * iCntrToRemove) \
{ \
return (ENVTIECALL(CATIASchAppConnection,ENVTIETypeLetter,ENVTIELetter)AppRemoveConnector(iCntrToRemove)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchAppConnection,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchAppConnection,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppConnection,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppConnection,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchAppConnection,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchAppConnection(classe)    TIECATIASchAppConnection##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchAppConnection(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchAppConnection, classe) \
 \
 \
CATImplementTIEMethods(CATIASchAppConnection, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchAppConnection, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchAppConnection, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchAppConnection, classe) \
 \
HRESULT __stdcall  TIECATIASchAppConnection##classe::AppListConnectors(CATIASchListOfBSTRs * iLCntrClassFilter, CATIASchListOfObjects *& oLCntrs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iLCntrClassFilter,&oLCntrs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListConnectors(iLCntrClassFilter,oLCntrs); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iLCntrClassFilter,&oLCntrs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppConnection##classe::AppListConnectables(CATIASchListOfBSTRs * iLCntbleClassFilter, CATIASchListOfObjects *& oLCntbles, CATIASchListOfObjects *& oLCntrs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iLCntbleClassFilter,&oLCntbles,&oLCntrs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListConnectables(iLCntbleClassFilter,oLCntbles,oLCntrs); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iLCntbleClassFilter,&oLCntbles,&oLCntrs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppConnection##classe::AppAddConnector(CATIASchAppConnector * iCntrToAdd) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iCntrToAdd); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppAddConnector(iCntrToAdd); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iCntrToAdd); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppConnection##classe::AppRemoveConnector(CATIASchAppConnector * iCntrToRemove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iCntrToRemove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppRemoveConnector(iCntrToRemove); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iCntrToRemove); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppConnection##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppConnection##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppConnection##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppConnection##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppConnection##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchAppConnection(classe) \
 \
 \
declare_TIE_CATIASchAppConnection(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppConnection##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppConnection,"CATIASchAppConnection",CATIASchAppConnection::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppConnection(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchAppConnection, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppConnection##classe(classe::MetaObject(),CATIASchAppConnection::MetaObject(),(void *)CreateTIECATIASchAppConnection##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchAppConnection(classe) \
 \
 \
declare_TIE_CATIASchAppConnection(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppConnection##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppConnection,"CATIASchAppConnection",CATIASchAppConnection::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppConnection(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchAppConnection, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppConnection##classe(classe::MetaObject(),CATIASchAppConnection::MetaObject(),(void *)CreateTIECATIASchAppConnection##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchAppConnection(classe) TIE_CATIASchAppConnection(classe)
#else
#define BOA_CATIASchAppConnection(classe) CATImplementBOA(CATIASchAppConnection, classe)
#endif

#endif
