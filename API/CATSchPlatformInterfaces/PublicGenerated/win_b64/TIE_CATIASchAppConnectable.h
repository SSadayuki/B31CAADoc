#ifndef __TIE_CATIASchAppConnectable
#define __TIE_CATIASchAppConnectable

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchAppConnectable.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchAppConnectable */
#define declare_TIE_CATIASchAppConnectable(classe) \
 \
 \
class TIECATIASchAppConnectable##classe : public CATIASchAppConnectable \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchAppConnectable, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AppListConnectors(CATIASchListOfBSTRs * iLCntrClassFilter, CATIASchListOfObjects *& oLCntrs); \
      virtual HRESULT __stdcall AppListConnectables(CATIASchListOfBSTRs * iLCntbleClassFilter, CATIASchListOfObjects *& oLCntbles, CATIASchListOfObjects *& oLCntrsOnThisObj, CATIASchListOfObjects *& oLCntrsOnConnected); \
      virtual HRESULT __stdcall AppAddConnector(const CATBSTR & iClassType, CATIASchAppConnector *& oNewAppCntr); \
      virtual HRESULT __stdcall AppRemoveConnector(CATIASchAppConnector * iCntrToRemove); \
      virtual HRESULT __stdcall AppListValidCntrTypes(CATIASchListOfBSTRs *& oLValidCntrTypes); \
      virtual HRESULT __stdcall AppGetReferenceName(CATBSTR & oReferenceName); \
      virtual HRESULT __stdcall AppSetReferenceName(const CATBSTR & iReferenceName); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchAppConnectable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AppListConnectors(CATIASchListOfBSTRs * iLCntrClassFilter, CATIASchListOfObjects *& oLCntrs); \
virtual HRESULT __stdcall AppListConnectables(CATIASchListOfBSTRs * iLCntbleClassFilter, CATIASchListOfObjects *& oLCntbles, CATIASchListOfObjects *& oLCntrsOnThisObj, CATIASchListOfObjects *& oLCntrsOnConnected); \
virtual HRESULT __stdcall AppAddConnector(const CATBSTR & iClassType, CATIASchAppConnector *& oNewAppCntr); \
virtual HRESULT __stdcall AppRemoveConnector(CATIASchAppConnector * iCntrToRemove); \
virtual HRESULT __stdcall AppListValidCntrTypes(CATIASchListOfBSTRs *& oLValidCntrTypes); \
virtual HRESULT __stdcall AppGetReferenceName(CATBSTR & oReferenceName); \
virtual HRESULT __stdcall AppSetReferenceName(const CATBSTR & iReferenceName); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchAppConnectable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AppListConnectors(CATIASchListOfBSTRs * iLCntrClassFilter, CATIASchListOfObjects *& oLCntrs) \
{ \
return (ENVTIECALL(CATIASchAppConnectable,ENVTIETypeLetter,ENVTIELetter)AppListConnectors(iLCntrClassFilter,oLCntrs)); \
} \
HRESULT __stdcall  ENVTIEName::AppListConnectables(CATIASchListOfBSTRs * iLCntbleClassFilter, CATIASchListOfObjects *& oLCntbles, CATIASchListOfObjects *& oLCntrsOnThisObj, CATIASchListOfObjects *& oLCntrsOnConnected) \
{ \
return (ENVTIECALL(CATIASchAppConnectable,ENVTIETypeLetter,ENVTIELetter)AppListConnectables(iLCntbleClassFilter,oLCntbles,oLCntrsOnThisObj,oLCntrsOnConnected)); \
} \
HRESULT __stdcall  ENVTIEName::AppAddConnector(const CATBSTR & iClassType, CATIASchAppConnector *& oNewAppCntr) \
{ \
return (ENVTIECALL(CATIASchAppConnectable,ENVTIETypeLetter,ENVTIELetter)AppAddConnector(iClassType,oNewAppCntr)); \
} \
HRESULT __stdcall  ENVTIEName::AppRemoveConnector(CATIASchAppConnector * iCntrToRemove) \
{ \
return (ENVTIECALL(CATIASchAppConnectable,ENVTIETypeLetter,ENVTIELetter)AppRemoveConnector(iCntrToRemove)); \
} \
HRESULT __stdcall  ENVTIEName::AppListValidCntrTypes(CATIASchListOfBSTRs *& oLValidCntrTypes) \
{ \
return (ENVTIECALL(CATIASchAppConnectable,ENVTIETypeLetter,ENVTIELetter)AppListValidCntrTypes(oLValidCntrTypes)); \
} \
HRESULT __stdcall  ENVTIEName::AppGetReferenceName(CATBSTR & oReferenceName) \
{ \
return (ENVTIECALL(CATIASchAppConnectable,ENVTIETypeLetter,ENVTIELetter)AppGetReferenceName(oReferenceName)); \
} \
HRESULT __stdcall  ENVTIEName::AppSetReferenceName(const CATBSTR & iReferenceName) \
{ \
return (ENVTIECALL(CATIASchAppConnectable,ENVTIETypeLetter,ENVTIELetter)AppSetReferenceName(iReferenceName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchAppConnectable,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchAppConnectable,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppConnectable,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppConnectable,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchAppConnectable,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchAppConnectable(classe)    TIECATIASchAppConnectable##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchAppConnectable(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchAppConnectable, classe) \
 \
 \
CATImplementTIEMethods(CATIASchAppConnectable, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchAppConnectable, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchAppConnectable, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchAppConnectable, classe) \
 \
HRESULT __stdcall  TIECATIASchAppConnectable##classe::AppListConnectors(CATIASchListOfBSTRs * iLCntrClassFilter, CATIASchListOfObjects *& oLCntrs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iLCntrClassFilter,&oLCntrs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListConnectors(iLCntrClassFilter,oLCntrs); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iLCntrClassFilter,&oLCntrs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppConnectable##classe::AppListConnectables(CATIASchListOfBSTRs * iLCntbleClassFilter, CATIASchListOfObjects *& oLCntbles, CATIASchListOfObjects *& oLCntrsOnThisObj, CATIASchListOfObjects *& oLCntrsOnConnected) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iLCntbleClassFilter,&oLCntbles,&oLCntrsOnThisObj,&oLCntrsOnConnected); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListConnectables(iLCntbleClassFilter,oLCntbles,oLCntrsOnThisObj,oLCntrsOnConnected); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iLCntbleClassFilter,&oLCntbles,&oLCntrsOnThisObj,&oLCntrsOnConnected); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppConnectable##classe::AppAddConnector(const CATBSTR & iClassType, CATIASchAppConnector *& oNewAppCntr) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iClassType,&oNewAppCntr); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppAddConnector(iClassType,oNewAppCntr); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iClassType,&oNewAppCntr); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppConnectable##classe::AppRemoveConnector(CATIASchAppConnector * iCntrToRemove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iCntrToRemove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppRemoveConnector(iCntrToRemove); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iCntrToRemove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppConnectable##classe::AppListValidCntrTypes(CATIASchListOfBSTRs *& oLValidCntrTypes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oLValidCntrTypes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListValidCntrTypes(oLValidCntrTypes); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oLValidCntrTypes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppConnectable##classe::AppGetReferenceName(CATBSTR & oReferenceName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oReferenceName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetReferenceName(oReferenceName); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oReferenceName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppConnectable##classe::AppSetReferenceName(const CATBSTR & iReferenceName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iReferenceName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppSetReferenceName(iReferenceName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iReferenceName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppConnectable##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppConnectable##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppConnectable##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppConnectable##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppConnectable##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchAppConnectable(classe) \
 \
 \
declare_TIE_CATIASchAppConnectable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppConnectable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppConnectable,"CATIASchAppConnectable",CATIASchAppConnectable::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppConnectable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchAppConnectable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppConnectable##classe(classe::MetaObject(),CATIASchAppConnectable::MetaObject(),(void *)CreateTIECATIASchAppConnectable##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchAppConnectable(classe) \
 \
 \
declare_TIE_CATIASchAppConnectable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppConnectable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppConnectable,"CATIASchAppConnectable",CATIASchAppConnectable::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppConnectable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchAppConnectable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppConnectable##classe(classe::MetaObject(),CATIASchAppConnectable::MetaObject(),(void *)CreateTIECATIASchAppConnectable##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchAppConnectable(classe) TIE_CATIASchAppConnectable(classe)
#else
#define BOA_CATIASchAppConnectable(classe) CATImplementBOA(CATIASchAppConnectable, classe)
#endif

#endif
