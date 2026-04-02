#ifndef __TIE_CATIAPspConnector
#define __TIE_CATIAPspConnector

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPspConnector.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPspConnector */
#define declare_TIE_CATIAPspConnector(classe) \
 \
 \
class TIECATIAPspConnector##classe : public CATIAPspConnector \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPspConnector, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetAssociatedConnectable(CATIAPspConnectable *& oConnectable); \
      virtual HRESULT __stdcall Connect(CATIAPspConnector * iCntrToConnect); \
      virtual HRESULT __stdcall Disconnect(CATIAPspConnector * iCntrToDisconnect); \
      virtual HRESULT __stdcall IsCntrConnected(CAT_VARIANT_BOOL & obConnected); \
      virtual HRESULT __stdcall get_ConnectorName(CATBSTR & ouCntrName); \
      virtual HRESULT __stdcall put_ConnectorName(const CATBSTR & iuCntrName); \
      virtual HRESULT __stdcall get_AttrNames(CATIAPspListOfBSTRs *& oLAttributeNames); \
      virtual HRESULT __stdcall put_AttrNames(CATIAPspListOfBSTRs * iLAttributeNames); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPspConnector(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetAssociatedConnectable(CATIAPspConnectable *& oConnectable); \
virtual HRESULT __stdcall Connect(CATIAPspConnector * iCntrToConnect); \
virtual HRESULT __stdcall Disconnect(CATIAPspConnector * iCntrToDisconnect); \
virtual HRESULT __stdcall IsCntrConnected(CAT_VARIANT_BOOL & obConnected); \
virtual HRESULT __stdcall get_ConnectorName(CATBSTR & ouCntrName); \
virtual HRESULT __stdcall put_ConnectorName(const CATBSTR & iuCntrName); \
virtual HRESULT __stdcall get_AttrNames(CATIAPspListOfBSTRs *& oLAttributeNames); \
virtual HRESULT __stdcall put_AttrNames(CATIAPspListOfBSTRs * iLAttributeNames); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPspConnector(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetAssociatedConnectable(CATIAPspConnectable *& oConnectable) \
{ \
return (ENVTIECALL(CATIAPspConnector,ENVTIETypeLetter,ENVTIELetter)GetAssociatedConnectable(oConnectable)); \
} \
HRESULT __stdcall  ENVTIEName::Connect(CATIAPspConnector * iCntrToConnect) \
{ \
return (ENVTIECALL(CATIAPspConnector,ENVTIETypeLetter,ENVTIELetter)Connect(iCntrToConnect)); \
} \
HRESULT __stdcall  ENVTIEName::Disconnect(CATIAPspConnector * iCntrToDisconnect) \
{ \
return (ENVTIECALL(CATIAPspConnector,ENVTIETypeLetter,ENVTIELetter)Disconnect(iCntrToDisconnect)); \
} \
HRESULT __stdcall  ENVTIEName::IsCntrConnected(CAT_VARIANT_BOOL & obConnected) \
{ \
return (ENVTIECALL(CATIAPspConnector,ENVTIETypeLetter,ENVTIELetter)IsCntrConnected(obConnected)); \
} \
HRESULT __stdcall  ENVTIEName::get_ConnectorName(CATBSTR & ouCntrName) \
{ \
return (ENVTIECALL(CATIAPspConnector,ENVTIETypeLetter,ENVTIELetter)get_ConnectorName(ouCntrName)); \
} \
HRESULT __stdcall  ENVTIEName::put_ConnectorName(const CATBSTR & iuCntrName) \
{ \
return (ENVTIECALL(CATIAPspConnector,ENVTIETypeLetter,ENVTIELetter)put_ConnectorName(iuCntrName)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttrNames(CATIAPspListOfBSTRs *& oLAttributeNames) \
{ \
return (ENVTIECALL(CATIAPspConnector,ENVTIETypeLetter,ENVTIELetter)get_AttrNames(oLAttributeNames)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttrNames(CATIAPspListOfBSTRs * iLAttributeNames) \
{ \
return (ENVTIECALL(CATIAPspConnector,ENVTIETypeLetter,ENVTIELetter)put_AttrNames(iLAttributeNames)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPspConnector,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPspConnector,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspConnector,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspConnector,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPspConnector,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPspConnector(classe)    TIECATIAPspConnector##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPspConnector(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPspConnector, classe) \
 \
 \
CATImplementTIEMethods(CATIAPspConnector, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPspConnector, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPspConnector, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPspConnector, classe) \
 \
HRESULT __stdcall  TIECATIAPspConnector##classe::GetAssociatedConnectable(CATIAPspConnectable *& oConnectable) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oConnectable); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAssociatedConnectable(oConnectable); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oConnectable); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspConnector##classe::Connect(CATIAPspConnector * iCntrToConnect) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iCntrToConnect); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Connect(iCntrToConnect); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iCntrToConnect); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspConnector##classe::Disconnect(CATIAPspConnector * iCntrToDisconnect) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iCntrToDisconnect); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Disconnect(iCntrToDisconnect); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iCntrToDisconnect); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspConnector##classe::IsCntrConnected(CAT_VARIANT_BOOL & obConnected) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&obConnected); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsCntrConnected(obConnected); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&obConnected); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspConnector##classe::get_ConnectorName(CATBSTR & ouCntrName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&ouCntrName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ConnectorName(ouCntrName); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&ouCntrName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspConnector##classe::put_ConnectorName(const CATBSTR & iuCntrName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iuCntrName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ConnectorName(iuCntrName); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iuCntrName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspConnector##classe::get_AttrNames(CATIAPspListOfBSTRs *& oLAttributeNames) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oLAttributeNames); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttrNames(oLAttributeNames); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oLAttributeNames); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspConnector##classe::put_AttrNames(CATIAPspListOfBSTRs * iLAttributeNames) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLAttributeNames); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttrNames(iLAttributeNames); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLAttributeNames); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspConnector##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspConnector##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspConnector##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspConnector##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspConnector##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPspConnector(classe) \
 \
 \
declare_TIE_CATIAPspConnector(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspConnector##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspConnector,"CATIAPspConnector",CATIAPspConnector::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspConnector(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPspConnector, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspConnector##classe(classe::MetaObject(),CATIAPspConnector::MetaObject(),(void *)CreateTIECATIAPspConnector##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPspConnector(classe) \
 \
 \
declare_TIE_CATIAPspConnector(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspConnector##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspConnector,"CATIAPspConnector",CATIAPspConnector::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspConnector(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPspConnector, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspConnector##classe(classe::MetaObject(),CATIAPspConnector::MetaObject(),(void *)CreateTIECATIAPspConnector##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPspConnector(classe) TIE_CATIAPspConnector(classe)
#else
#define BOA_CATIAPspConnector(classe) CATImplementBOA(CATIAPspConnector, classe)
#endif

#endif
