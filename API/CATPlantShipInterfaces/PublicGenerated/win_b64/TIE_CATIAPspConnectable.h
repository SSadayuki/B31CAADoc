#ifndef __TIE_CATIAPspConnectable
#define __TIE_CATIAPspConnectable

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPspConnectable.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPspConnectable */
#define declare_TIE_CATIAPspConnectable(classe) \
 \
 \
class TIECATIAPspConnectable##classe : public CATIAPspConnectable \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPspConnectable, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Connectors(CATIAPspListOfObjects *& oLConnectors); \
      virtual HRESULT __stdcall ListConnectables(CATIAPspListOfBSTRs * iuClassFilter, CATIAPspListOfObjects *& oLCntbles, CATIAPspListOfObjects *& oLCntrsOnThisObj, CATIAPspListOfObjects *& oLCntrsOnConnected); \
      virtual HRESULT __stdcall get_ValidConnectorTypes(CATIAPspListOfBSTRs *& oLValidConnectorTypes); \
      virtual HRESULT __stdcall GetConnectorByName(const CATBSTR & iuConnectorName, CATIAPspConnector *& oCntr); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPspConnectable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Connectors(CATIAPspListOfObjects *& oLConnectors); \
virtual HRESULT __stdcall ListConnectables(CATIAPspListOfBSTRs * iuClassFilter, CATIAPspListOfObjects *& oLCntbles, CATIAPspListOfObjects *& oLCntrsOnThisObj, CATIAPspListOfObjects *& oLCntrsOnConnected); \
virtual HRESULT __stdcall get_ValidConnectorTypes(CATIAPspListOfBSTRs *& oLValidConnectorTypes); \
virtual HRESULT __stdcall GetConnectorByName(const CATBSTR & iuConnectorName, CATIAPspConnector *& oCntr); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPspConnectable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Connectors(CATIAPspListOfObjects *& oLConnectors) \
{ \
return (ENVTIECALL(CATIAPspConnectable,ENVTIETypeLetter,ENVTIELetter)get_Connectors(oLConnectors)); \
} \
HRESULT __stdcall  ENVTIEName::ListConnectables(CATIAPspListOfBSTRs * iuClassFilter, CATIAPspListOfObjects *& oLCntbles, CATIAPspListOfObjects *& oLCntrsOnThisObj, CATIAPspListOfObjects *& oLCntrsOnConnected) \
{ \
return (ENVTIECALL(CATIAPspConnectable,ENVTIETypeLetter,ENVTIELetter)ListConnectables(iuClassFilter,oLCntbles,oLCntrsOnThisObj,oLCntrsOnConnected)); \
} \
HRESULT __stdcall  ENVTIEName::get_ValidConnectorTypes(CATIAPspListOfBSTRs *& oLValidConnectorTypes) \
{ \
return (ENVTIECALL(CATIAPspConnectable,ENVTIETypeLetter,ENVTIELetter)get_ValidConnectorTypes(oLValidConnectorTypes)); \
} \
HRESULT __stdcall  ENVTIEName::GetConnectorByName(const CATBSTR & iuConnectorName, CATIAPspConnector *& oCntr) \
{ \
return (ENVTIECALL(CATIAPspConnectable,ENVTIETypeLetter,ENVTIELetter)GetConnectorByName(iuConnectorName,oCntr)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPspConnectable,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPspConnectable,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspConnectable,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspConnectable,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPspConnectable,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPspConnectable(classe)    TIECATIAPspConnectable##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPspConnectable(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPspConnectable, classe) \
 \
 \
CATImplementTIEMethods(CATIAPspConnectable, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPspConnectable, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPspConnectable, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPspConnectable, classe) \
 \
HRESULT __stdcall  TIECATIAPspConnectable##classe::get_Connectors(CATIAPspListOfObjects *& oLConnectors) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oLConnectors); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Connectors(oLConnectors); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oLConnectors); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspConnectable##classe::ListConnectables(CATIAPspListOfBSTRs * iuClassFilter, CATIAPspListOfObjects *& oLCntbles, CATIAPspListOfObjects *& oLCntrsOnThisObj, CATIAPspListOfObjects *& oLCntrsOnConnected) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iuClassFilter,&oLCntbles,&oLCntrsOnThisObj,&oLCntrsOnConnected); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListConnectables(iuClassFilter,oLCntbles,oLCntrsOnThisObj,oLCntrsOnConnected); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iuClassFilter,&oLCntbles,&oLCntrsOnThisObj,&oLCntrsOnConnected); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspConnectable##classe::get_ValidConnectorTypes(CATIAPspListOfBSTRs *& oLValidConnectorTypes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oLValidConnectorTypes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ValidConnectorTypes(oLValidConnectorTypes); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oLValidConnectorTypes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspConnectable##classe::GetConnectorByName(const CATBSTR & iuConnectorName, CATIAPspConnector *& oCntr) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iuConnectorName,&oCntr); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConnectorByName(iuConnectorName,oCntr); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iuConnectorName,&oCntr); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspConnectable##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspConnectable##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspConnectable##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspConnectable##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspConnectable##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPspConnectable(classe) \
 \
 \
declare_TIE_CATIAPspConnectable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspConnectable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspConnectable,"CATIAPspConnectable",CATIAPspConnectable::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspConnectable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPspConnectable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspConnectable##classe(classe::MetaObject(),CATIAPspConnectable::MetaObject(),(void *)CreateTIECATIAPspConnectable##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPspConnectable(classe) \
 \
 \
declare_TIE_CATIAPspConnectable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspConnectable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspConnectable,"CATIAPspConnectable",CATIAPspConnectable::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspConnectable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPspConnectable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspConnectable##classe(classe::MetaObject(),CATIAPspConnectable::MetaObject(),(void *)CreateTIECATIAPspConnectable##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPspConnectable(classe) TIE_CATIAPspConnectable(classe)
#else
#define BOA_CATIAPspConnectable(classe) CATImplementBOA(CATIAPspConnectable, classe)
#endif

#endif
