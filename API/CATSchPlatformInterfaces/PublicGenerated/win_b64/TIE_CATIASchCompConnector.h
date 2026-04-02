#ifndef __TIE_CATIASchCompConnector
#define __TIE_CATIASchCompConnector

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchCompConnector.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchCompConnector */
#define declare_TIE_CATIASchCompConnector(classe) \
 \
 \
class TIECATIASchCompConnector##classe : public CATIASchCompConnector \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchCompConnector, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddConnector(const CATBSTR & iClassType, CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb2CntrPosition, CATIASchAppConnector *& oNewSchCntr); \
      virtual HRESULT __stdcall AddDynamicConnector(const CATBSTR & iClassType, CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb2CntrPosition, CATIASchAppConnector *& oNewSchCntr); \
      virtual HRESULT __stdcall RemoveConnector(CATIASchGRRComp * iGRR, CATIASchAppConnector * iCntrToRemove); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchCompConnector(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddConnector(const CATBSTR & iClassType, CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb2CntrPosition, CATIASchAppConnector *& oNewSchCntr); \
virtual HRESULT __stdcall AddDynamicConnector(const CATBSTR & iClassType, CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb2CntrPosition, CATIASchAppConnector *& oNewSchCntr); \
virtual HRESULT __stdcall RemoveConnector(CATIASchGRRComp * iGRR, CATIASchAppConnector * iCntrToRemove); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchCompConnector(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddConnector(const CATBSTR & iClassType, CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb2CntrPosition, CATIASchAppConnector *& oNewSchCntr) \
{ \
return (ENVTIECALL(CATIASchCompConnector,ENVTIETypeLetter,ENVTIELetter)AddConnector(iClassType,iGRR,iDb2CntrPosition,oNewSchCntr)); \
} \
HRESULT __stdcall  ENVTIEName::AddDynamicConnector(const CATBSTR & iClassType, CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb2CntrPosition, CATIASchAppConnector *& oNewSchCntr) \
{ \
return (ENVTIECALL(CATIASchCompConnector,ENVTIETypeLetter,ENVTIELetter)AddDynamicConnector(iClassType,iGRR,iDb2CntrPosition,oNewSchCntr)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveConnector(CATIASchGRRComp * iGRR, CATIASchAppConnector * iCntrToRemove) \
{ \
return (ENVTIECALL(CATIASchCompConnector,ENVTIETypeLetter,ENVTIELetter)RemoveConnector(iGRR,iCntrToRemove)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchCompConnector,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchCompConnector,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchCompConnector,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchCompConnector,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchCompConnector,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchCompConnector(classe)    TIECATIASchCompConnector##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchCompConnector(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchCompConnector, classe) \
 \
 \
CATImplementTIEMethods(CATIASchCompConnector, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchCompConnector, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchCompConnector, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchCompConnector, classe) \
 \
HRESULT __stdcall  TIECATIASchCompConnector##classe::AddConnector(const CATBSTR & iClassType, CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb2CntrPosition, CATIASchAppConnector *& oNewSchCntr) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iClassType,&iGRR,&iDb2CntrPosition,&oNewSchCntr); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddConnector(iClassType,iGRR,iDb2CntrPosition,oNewSchCntr); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iClassType,&iGRR,&iDb2CntrPosition,&oNewSchCntr); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCompConnector##classe::AddDynamicConnector(const CATBSTR & iClassType, CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb2CntrPosition, CATIASchAppConnector *& oNewSchCntr) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iClassType,&iGRR,&iDb2CntrPosition,&oNewSchCntr); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddDynamicConnector(iClassType,iGRR,iDb2CntrPosition,oNewSchCntr); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iClassType,&iGRR,&iDb2CntrPosition,&oNewSchCntr); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCompConnector##classe::RemoveConnector(CATIASchGRRComp * iGRR, CATIASchAppConnector * iCntrToRemove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iGRR,&iCntrToRemove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveConnector(iGRR,iCntrToRemove); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iGRR,&iCntrToRemove); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCompConnector##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCompConnector##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCompConnector##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCompConnector##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCompConnector##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchCompConnector(classe) \
 \
 \
declare_TIE_CATIASchCompConnector(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchCompConnector##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchCompConnector,"CATIASchCompConnector",CATIASchCompConnector::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchCompConnector(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchCompConnector, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchCompConnector##classe(classe::MetaObject(),CATIASchCompConnector::MetaObject(),(void *)CreateTIECATIASchCompConnector##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchCompConnector(classe) \
 \
 \
declare_TIE_CATIASchCompConnector(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchCompConnector##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchCompConnector,"CATIASchCompConnector",CATIASchCompConnector::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchCompConnector(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchCompConnector, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchCompConnector##classe(classe::MetaObject(),CATIASchCompConnector::MetaObject(),(void *)CreateTIECATIASchCompConnector##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchCompConnector(classe) TIE_CATIASchCompConnector(classe)
#else
#define BOA_CATIASchCompConnector(classe) CATImplementBOA(CATIASchCompConnector, classe)
#endif

#endif
