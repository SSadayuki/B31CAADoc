#ifndef __TIE_CATIASfmSlot
#define __TIE_CATIASfmSlot

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASfmSlot.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASfmSlot */
#define declare_TIE_CATIASfmSlot(classe) \
 \
 \
class TIECATIASfmSlot##classe : public CATIASfmSlot \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASfmSlot, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetMasterObject(CATIAReference *& oPenetratingObject); \
      virtual HRESULT __stdcall GetSlaveObject(CATIAReference *& oPenetratedObject); \
      virtual HRESULT __stdcall SetSlaveObject(CATIAReference * iSlaveObject); \
      virtual HRESULT __stdcall GetCntnDetailName(CATBSTR & oUDFName); \
      virtual HRESULT __stdcall GetCntnDetailParameters(CATIASfmConnectionParameters *& oListOfSlotParameters, CATSafeArrayVariant *& oListOfParameterNames); \
      virtual HRESULT __stdcall GetConnectionCoordinate(CATSafeArrayVariant *& oCoordinate); \
      virtual HRESULT __stdcall UpdateConnectionsSet(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASfmSlot(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetMasterObject(CATIAReference *& oPenetratingObject); \
virtual HRESULT __stdcall GetSlaveObject(CATIAReference *& oPenetratedObject); \
virtual HRESULT __stdcall SetSlaveObject(CATIAReference * iSlaveObject); \
virtual HRESULT __stdcall GetCntnDetailName(CATBSTR & oUDFName); \
virtual HRESULT __stdcall GetCntnDetailParameters(CATIASfmConnectionParameters *& oListOfSlotParameters, CATSafeArrayVariant *& oListOfParameterNames); \
virtual HRESULT __stdcall GetConnectionCoordinate(CATSafeArrayVariant *& oCoordinate); \
virtual HRESULT __stdcall UpdateConnectionsSet(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASfmSlot(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetMasterObject(CATIAReference *& oPenetratingObject) \
{ \
return (ENVTIECALL(CATIASfmSlot,ENVTIETypeLetter,ENVTIELetter)GetMasterObject(oPenetratingObject)); \
} \
HRESULT __stdcall  ENVTIEName::GetSlaveObject(CATIAReference *& oPenetratedObject) \
{ \
return (ENVTIECALL(CATIASfmSlot,ENVTIETypeLetter,ENVTIELetter)GetSlaveObject(oPenetratedObject)); \
} \
HRESULT __stdcall  ENVTIEName::SetSlaveObject(CATIAReference * iSlaveObject) \
{ \
return (ENVTIECALL(CATIASfmSlot,ENVTIETypeLetter,ENVTIELetter)SetSlaveObject(iSlaveObject)); \
} \
HRESULT __stdcall  ENVTIEName::GetCntnDetailName(CATBSTR & oUDFName) \
{ \
return (ENVTIECALL(CATIASfmSlot,ENVTIETypeLetter,ENVTIELetter)GetCntnDetailName(oUDFName)); \
} \
HRESULT __stdcall  ENVTIEName::GetCntnDetailParameters(CATIASfmConnectionParameters *& oListOfSlotParameters, CATSafeArrayVariant *& oListOfParameterNames) \
{ \
return (ENVTIECALL(CATIASfmSlot,ENVTIETypeLetter,ENVTIELetter)GetCntnDetailParameters(oListOfSlotParameters,oListOfParameterNames)); \
} \
HRESULT __stdcall  ENVTIEName::GetConnectionCoordinate(CATSafeArrayVariant *& oCoordinate) \
{ \
return (ENVTIECALL(CATIASfmSlot,ENVTIETypeLetter,ENVTIELetter)GetConnectionCoordinate(oCoordinate)); \
} \
HRESULT __stdcall  ENVTIEName::UpdateConnectionsSet() \
{ \
return (ENVTIECALL(CATIASfmSlot,ENVTIETypeLetter,ENVTIELetter)UpdateConnectionsSet()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASfmSlot,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASfmSlot,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmSlot,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmSlot,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASfmSlot,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASfmSlot(classe)    TIECATIASfmSlot##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASfmSlot(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASfmSlot, classe) \
 \
 \
CATImplementTIEMethods(CATIASfmSlot, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASfmSlot, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASfmSlot, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASfmSlot, classe) \
 \
HRESULT __stdcall  TIECATIASfmSlot##classe::GetMasterObject(CATIAReference *& oPenetratingObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oPenetratingObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMasterObject(oPenetratingObject); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oPenetratingObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSlot##classe::GetSlaveObject(CATIAReference *& oPenetratedObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oPenetratedObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSlaveObject(oPenetratedObject); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oPenetratedObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSlot##classe::SetSlaveObject(CATIAReference * iSlaveObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iSlaveObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSlaveObject(iSlaveObject); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iSlaveObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSlot##classe::GetCntnDetailName(CATBSTR & oUDFName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oUDFName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCntnDetailName(oUDFName); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oUDFName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSlot##classe::GetCntnDetailParameters(CATIASfmConnectionParameters *& oListOfSlotParameters, CATSafeArrayVariant *& oListOfParameterNames) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oListOfSlotParameters,&oListOfParameterNames); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCntnDetailParameters(oListOfSlotParameters,oListOfParameterNames); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oListOfSlotParameters,&oListOfParameterNames); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSlot##classe::GetConnectionCoordinate(CATSafeArrayVariant *& oCoordinate) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oCoordinate); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConnectionCoordinate(oCoordinate); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oCoordinate); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSlot##classe::UpdateConnectionsSet() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UpdateConnectionsSet(); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmSlot##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmSlot##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmSlot##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmSlot##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmSlot##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASfmSlot(classe) \
 \
 \
declare_TIE_CATIASfmSlot(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmSlot##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmSlot,"CATIASfmSlot",CATIASfmSlot::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmSlot(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASfmSlot, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmSlot##classe(classe::MetaObject(),CATIASfmSlot::MetaObject(),(void *)CreateTIECATIASfmSlot##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASfmSlot(classe) \
 \
 \
declare_TIE_CATIASfmSlot(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmSlot##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmSlot,"CATIASfmSlot",CATIASfmSlot::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmSlot(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASfmSlot, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmSlot##classe(classe::MetaObject(),CATIASfmSlot::MetaObject(),(void *)CreateTIECATIASfmSlot##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASfmSlot(classe) TIE_CATIASfmSlot(classe)
#else
#define BOA_CATIASfmSlot(classe) CATImplementBOA(CATIASfmSlot, classe)
#endif

#endif
