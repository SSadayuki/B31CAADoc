#ifndef __TIE_CATIASchAppConnector
#define __TIE_CATIASchAppConnector

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchAppConnector.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchAppConnector */
#define declare_TIE_CATIASchAppConnector(classe) \
 \
 \
class TIECATIASchAppConnector##classe : public CATIASchAppConnector \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchAppConnector, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AppGetAssociatedConnectable(CATIASchAppConnectable *& oConnectable); \
      virtual HRESULT __stdcall AppListCompatibleTypes(CATIASchListOfBSTRs *& oLCntrCompatClassTypes); \
      virtual HRESULT __stdcall AppListConnections(CATIASchListOfBSTRs * iLCntnClassFilter, CATIASchListOfObjects *& oLConnections); \
      virtual HRESULT __stdcall AppConnect(CATIASchAppConnector * iCntrToConnect, CATIASchAppConnection *& oConnection); \
      virtual HRESULT __stdcall AppConnectBranch(CATIASchAppConnector * iCntrToConnect, CATIASchAppConnection *& oConnection); \
      virtual HRESULT __stdcall AppDisconnect(CATIASchAppConnector * iCntrToDisConnect); \
      virtual HRESULT __stdcall AppOKToNoShowConnectedCntr(CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall AppIsCntrConnected(CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchAppConnector(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AppGetAssociatedConnectable(CATIASchAppConnectable *& oConnectable); \
virtual HRESULT __stdcall AppListCompatibleTypes(CATIASchListOfBSTRs *& oLCntrCompatClassTypes); \
virtual HRESULT __stdcall AppListConnections(CATIASchListOfBSTRs * iLCntnClassFilter, CATIASchListOfObjects *& oLConnections); \
virtual HRESULT __stdcall AppConnect(CATIASchAppConnector * iCntrToConnect, CATIASchAppConnection *& oConnection); \
virtual HRESULT __stdcall AppConnectBranch(CATIASchAppConnector * iCntrToConnect, CATIASchAppConnection *& oConnection); \
virtual HRESULT __stdcall AppDisconnect(CATIASchAppConnector * iCntrToDisConnect); \
virtual HRESULT __stdcall AppOKToNoShowConnectedCntr(CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall AppIsCntrConnected(CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchAppConnector(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AppGetAssociatedConnectable(CATIASchAppConnectable *& oConnectable) \
{ \
return (ENVTIECALL(CATIASchAppConnector,ENVTIETypeLetter,ENVTIELetter)AppGetAssociatedConnectable(oConnectable)); \
} \
HRESULT __stdcall  ENVTIEName::AppListCompatibleTypes(CATIASchListOfBSTRs *& oLCntrCompatClassTypes) \
{ \
return (ENVTIECALL(CATIASchAppConnector,ENVTIETypeLetter,ENVTIELetter)AppListCompatibleTypes(oLCntrCompatClassTypes)); \
} \
HRESULT __stdcall  ENVTIEName::AppListConnections(CATIASchListOfBSTRs * iLCntnClassFilter, CATIASchListOfObjects *& oLConnections) \
{ \
return (ENVTIECALL(CATIASchAppConnector,ENVTIETypeLetter,ENVTIELetter)AppListConnections(iLCntnClassFilter,oLConnections)); \
} \
HRESULT __stdcall  ENVTIEName::AppConnect(CATIASchAppConnector * iCntrToConnect, CATIASchAppConnection *& oConnection) \
{ \
return (ENVTIECALL(CATIASchAppConnector,ENVTIETypeLetter,ENVTIELetter)AppConnect(iCntrToConnect,oConnection)); \
} \
HRESULT __stdcall  ENVTIEName::AppConnectBranch(CATIASchAppConnector * iCntrToConnect, CATIASchAppConnection *& oConnection) \
{ \
return (ENVTIECALL(CATIASchAppConnector,ENVTIETypeLetter,ENVTIELetter)AppConnectBranch(iCntrToConnect,oConnection)); \
} \
HRESULT __stdcall  ENVTIEName::AppDisconnect(CATIASchAppConnector * iCntrToDisConnect) \
{ \
return (ENVTIECALL(CATIASchAppConnector,ENVTIETypeLetter,ENVTIELetter)AppDisconnect(iCntrToDisConnect)); \
} \
HRESULT __stdcall  ENVTIEName::AppOKToNoShowConnectedCntr(CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchAppConnector,ENVTIETypeLetter,ENVTIELetter)AppOKToNoShowConnectedCntr(oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::AppIsCntrConnected(CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchAppConnector,ENVTIETypeLetter,ENVTIELetter)AppIsCntrConnected(oBYes)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchAppConnector,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchAppConnector,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppConnector,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppConnector,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchAppConnector,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchAppConnector(classe)    TIECATIASchAppConnector##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchAppConnector(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchAppConnector, classe) \
 \
 \
CATImplementTIEMethods(CATIASchAppConnector, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchAppConnector, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchAppConnector, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchAppConnector, classe) \
 \
HRESULT __stdcall  TIECATIASchAppConnector##classe::AppGetAssociatedConnectable(CATIASchAppConnectable *& oConnectable) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oConnectable); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetAssociatedConnectable(oConnectable); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oConnectable); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppConnector##classe::AppListCompatibleTypes(CATIASchListOfBSTRs *& oLCntrCompatClassTypes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oLCntrCompatClassTypes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListCompatibleTypes(oLCntrCompatClassTypes); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oLCntrCompatClassTypes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppConnector##classe::AppListConnections(CATIASchListOfBSTRs * iLCntnClassFilter, CATIASchListOfObjects *& oLConnections) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iLCntnClassFilter,&oLConnections); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListConnections(iLCntnClassFilter,oLConnections); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iLCntnClassFilter,&oLConnections); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppConnector##classe::AppConnect(CATIASchAppConnector * iCntrToConnect, CATIASchAppConnection *& oConnection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iCntrToConnect,&oConnection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppConnect(iCntrToConnect,oConnection); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iCntrToConnect,&oConnection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppConnector##classe::AppConnectBranch(CATIASchAppConnector * iCntrToConnect, CATIASchAppConnection *& oConnection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iCntrToConnect,&oConnection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppConnectBranch(iCntrToConnect,oConnection); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iCntrToConnect,&oConnection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppConnector##classe::AppDisconnect(CATIASchAppConnector * iCntrToDisConnect) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iCntrToDisConnect); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppDisconnect(iCntrToDisConnect); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iCntrToDisConnect); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppConnector##classe::AppOKToNoShowConnectedCntr(CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOKToNoShowConnectedCntr(oBYes); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppConnector##classe::AppIsCntrConnected(CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppIsCntrConnected(oBYes); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oBYes); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppConnector##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppConnector##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppConnector##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppConnector##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppConnector##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchAppConnector(classe) \
 \
 \
declare_TIE_CATIASchAppConnector(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppConnector##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppConnector,"CATIASchAppConnector",CATIASchAppConnector::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppConnector(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchAppConnector, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppConnector##classe(classe::MetaObject(),CATIASchAppConnector::MetaObject(),(void *)CreateTIECATIASchAppConnector##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchAppConnector(classe) \
 \
 \
declare_TIE_CATIASchAppConnector(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppConnector##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppConnector,"CATIASchAppConnector",CATIASchAppConnector::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppConnector(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchAppConnector, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppConnector##classe(classe::MetaObject(),CATIASchAppConnector::MetaObject(),(void *)CreateTIECATIASchAppConnector##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchAppConnector(classe) TIE_CATIASchAppConnector(classe)
#else
#define BOA_CATIASchAppConnector(classe) CATImplementBOA(CATIASchAppConnector, classe)
#endif

#endif
