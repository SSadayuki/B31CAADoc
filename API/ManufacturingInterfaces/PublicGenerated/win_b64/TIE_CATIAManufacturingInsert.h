#ifndef __TIE_CATIAManufacturingInsert
#define __TIE_CATIAManufacturingInsert

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAManufacturingInsert.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAManufacturingInsert */
#define declare_TIE_CATIAManufacturingInsert(classe) \
 \
 \
class TIECATIAManufacturingInsert##classe : public CATIAManufacturingInsert \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAManufacturingInsert, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_InsertType(CATBSTR & oInsertType); \
      virtual HRESULT __stdcall GetAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke); \
      virtual HRESULT __stdcall get_NumberOfAttributes(short & oNumber); \
      virtual HRESULT __stdcall GetListOfAttributes(CATSafeArrayVariant & oListOfAttributes); \
      virtual HRESULT __stdcall GetListOfAttributeUnits(CATSafeArrayVariant & oListOfAttributeUnits); \
      virtual HRESULT __stdcall GetAttributeNLSName(const CATBSTR & iAttributName, CATBSTR & oNLSName); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAManufacturingInsert(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_InsertType(CATBSTR & oInsertType); \
virtual HRESULT __stdcall GetAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke); \
virtual HRESULT __stdcall get_NumberOfAttributes(short & oNumber); \
virtual HRESULT __stdcall GetListOfAttributes(CATSafeArrayVariant & oListOfAttributes); \
virtual HRESULT __stdcall GetListOfAttributeUnits(CATSafeArrayVariant & oListOfAttributeUnits); \
virtual HRESULT __stdcall GetAttributeNLSName(const CATBSTR & iAttributName, CATBSTR & oNLSName); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAManufacturingInsert(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_InsertType(CATBSTR & oInsertType) \
{ \
return (ENVTIECALL(CATIAManufacturingInsert,ENVTIETypeLetter,ENVTIELetter)get_InsertType(oInsertType)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
return (ENVTIECALL(CATIAManufacturingInsert,ENVTIETypeLetter,ENVTIELetter)GetAttribute(iAttribut,oAttributCke)); \
} \
HRESULT __stdcall  ENVTIEName::get_NumberOfAttributes(short & oNumber) \
{ \
return (ENVTIECALL(CATIAManufacturingInsert,ENVTIETypeLetter,ENVTIELetter)get_NumberOfAttributes(oNumber)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
return (ENVTIECALL(CATIAManufacturingInsert,ENVTIETypeLetter,ENVTIELetter)GetListOfAttributes(oListOfAttributes)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfAttributeUnits(CATSafeArrayVariant & oListOfAttributeUnits) \
{ \
return (ENVTIECALL(CATIAManufacturingInsert,ENVTIETypeLetter,ENVTIELetter)GetListOfAttributeUnits(oListOfAttributeUnits)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttributeNLSName(const CATBSTR & iAttributName, CATBSTR & oNLSName) \
{ \
return (ENVTIECALL(CATIAManufacturingInsert,ENVTIETypeLetter,ENVTIELetter)GetAttributeNLSName(iAttributName,oNLSName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAManufacturingInsert,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAManufacturingInsert,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingInsert,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingInsert,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAManufacturingInsert,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAManufacturingInsert(classe)    TIECATIAManufacturingInsert##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAManufacturingInsert(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAManufacturingInsert, classe) \
 \
 \
CATImplementTIEMethods(CATIAManufacturingInsert, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAManufacturingInsert, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAManufacturingInsert, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAManufacturingInsert, classe) \
 \
HRESULT __stdcall  TIECATIAManufacturingInsert##classe::get_InsertType(CATBSTR & oInsertType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oInsertType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InsertType(oInsertType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oInsertType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingInsert##classe::GetAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iAttribut,&oAttributCke); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttribute(iAttribut,oAttributCke); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iAttribut,&oAttributCke); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingInsert##classe::get_NumberOfAttributes(short & oNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NumberOfAttributes(oNumber); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingInsert##classe::GetListOfAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oListOfAttributes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfAttributes(oListOfAttributes); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oListOfAttributes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingInsert##classe::GetListOfAttributeUnits(CATSafeArrayVariant & oListOfAttributeUnits) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oListOfAttributeUnits); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfAttributeUnits(oListOfAttributeUnits); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oListOfAttributeUnits); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingInsert##classe::GetAttributeNLSName(const CATBSTR & iAttributName, CATBSTR & oNLSName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iAttributName,&oNLSName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttributeNLSName(iAttributName,oNLSName); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iAttributName,&oNLSName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingInsert##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingInsert##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingInsert##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingInsert##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingInsert##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAManufacturingInsert(classe) \
 \
 \
declare_TIE_CATIAManufacturingInsert(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingInsert##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingInsert,"CATIAManufacturingInsert",CATIAManufacturingInsert::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingInsert(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAManufacturingInsert, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingInsert##classe(classe::MetaObject(),CATIAManufacturingInsert::MetaObject(),(void *)CreateTIECATIAManufacturingInsert##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAManufacturingInsert(classe) \
 \
 \
declare_TIE_CATIAManufacturingInsert(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingInsert##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingInsert,"CATIAManufacturingInsert",CATIAManufacturingInsert::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingInsert(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAManufacturingInsert, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingInsert##classe(classe::MetaObject(),CATIAManufacturingInsert::MetaObject(),(void *)CreateTIECATIAManufacturingInsert##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAManufacturingInsert(classe) TIE_CATIAManufacturingInsert(classe)
#else
#define BOA_CATIAManufacturingInsert(classe) CATImplementBOA(CATIAManufacturingInsert, classe)
#endif

#endif
