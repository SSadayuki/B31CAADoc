#ifndef __TIE_CATIAArrNomenclature
#define __TIE_CATIAArrNomenclature

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAArrNomenclature.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAArrNomenclature */
#define declare_TIE_CATIAArrNomenclature(classe) \
 \
 \
class TIECATIAArrNomenclature##classe : public CATIAArrNomenclature \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAArrNomenclature, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_IconName(CATBSTR & oIconName); \
      virtual HRESULT __stdcall put_IconName(const CATBSTR & iIconName); \
      virtual HRESULT __stdcall get_IntSysClassName(CATBSTR & oNomenclatureType); \
      virtual HRESULT __stdcall put_IntSysClassName(const CATBSTR & iNomenclatureType); \
      virtual HRESULT __stdcall get_NLSInstanceName(CATBSTR & oName); \
      virtual HRESULT __stdcall put_NLSInstanceName(const CATBSTR & iName); \
      virtual HRESULT __stdcall get_SuperTypeName(CATBSTR & oSuperTypeName); \
      virtual HRESULT __stdcall put_SuperTypeName(const CATBSTR & iSuperTypeName); \
      virtual HRESULT __stdcall get_SubTypes(CATIAArrNomenclatures *& oSubTypeNomenclatures); \
      virtual HRESULT __stdcall IsSystemNomenclature(CAT_VARIANT_BOOL & oIsSystem); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAArrNomenclature(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_IconName(CATBSTR & oIconName); \
virtual HRESULT __stdcall put_IconName(const CATBSTR & iIconName); \
virtual HRESULT __stdcall get_IntSysClassName(CATBSTR & oNomenclatureType); \
virtual HRESULT __stdcall put_IntSysClassName(const CATBSTR & iNomenclatureType); \
virtual HRESULT __stdcall get_NLSInstanceName(CATBSTR & oName); \
virtual HRESULT __stdcall put_NLSInstanceName(const CATBSTR & iName); \
virtual HRESULT __stdcall get_SuperTypeName(CATBSTR & oSuperTypeName); \
virtual HRESULT __stdcall put_SuperTypeName(const CATBSTR & iSuperTypeName); \
virtual HRESULT __stdcall get_SubTypes(CATIAArrNomenclatures *& oSubTypeNomenclatures); \
virtual HRESULT __stdcall IsSystemNomenclature(CAT_VARIANT_BOOL & oIsSystem); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAArrNomenclature(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_IconName(CATBSTR & oIconName) \
{ \
return (ENVTIECALL(CATIAArrNomenclature,ENVTIETypeLetter,ENVTIELetter)get_IconName(oIconName)); \
} \
HRESULT __stdcall  ENVTIEName::put_IconName(const CATBSTR & iIconName) \
{ \
return (ENVTIECALL(CATIAArrNomenclature,ENVTIETypeLetter,ENVTIELetter)put_IconName(iIconName)); \
} \
HRESULT __stdcall  ENVTIEName::get_IntSysClassName(CATBSTR & oNomenclatureType) \
{ \
return (ENVTIECALL(CATIAArrNomenclature,ENVTIETypeLetter,ENVTIELetter)get_IntSysClassName(oNomenclatureType)); \
} \
HRESULT __stdcall  ENVTIEName::put_IntSysClassName(const CATBSTR & iNomenclatureType) \
{ \
return (ENVTIECALL(CATIAArrNomenclature,ENVTIETypeLetter,ENVTIELetter)put_IntSysClassName(iNomenclatureType)); \
} \
HRESULT __stdcall  ENVTIEName::get_NLSInstanceName(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAArrNomenclature,ENVTIETypeLetter,ENVTIELetter)get_NLSInstanceName(oName)); \
} \
HRESULT __stdcall  ENVTIEName::put_NLSInstanceName(const CATBSTR & iName) \
{ \
return (ENVTIECALL(CATIAArrNomenclature,ENVTIETypeLetter,ENVTIELetter)put_NLSInstanceName(iName)); \
} \
HRESULT __stdcall  ENVTIEName::get_SuperTypeName(CATBSTR & oSuperTypeName) \
{ \
return (ENVTIECALL(CATIAArrNomenclature,ENVTIETypeLetter,ENVTIELetter)get_SuperTypeName(oSuperTypeName)); \
} \
HRESULT __stdcall  ENVTIEName::put_SuperTypeName(const CATBSTR & iSuperTypeName) \
{ \
return (ENVTIECALL(CATIAArrNomenclature,ENVTIETypeLetter,ENVTIELetter)put_SuperTypeName(iSuperTypeName)); \
} \
HRESULT __stdcall  ENVTIEName::get_SubTypes(CATIAArrNomenclatures *& oSubTypeNomenclatures) \
{ \
return (ENVTIECALL(CATIAArrNomenclature,ENVTIETypeLetter,ENVTIELetter)get_SubTypes(oSubTypeNomenclatures)); \
} \
HRESULT __stdcall  ENVTIEName::IsSystemNomenclature(CAT_VARIANT_BOOL & oIsSystem) \
{ \
return (ENVTIECALL(CATIAArrNomenclature,ENVTIETypeLetter,ENVTIELetter)IsSystemNomenclature(oIsSystem)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAArrNomenclature,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAArrNomenclature,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAArrNomenclature,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAArrNomenclature,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAArrNomenclature,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAArrNomenclature(classe)    TIECATIAArrNomenclature##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAArrNomenclature(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAArrNomenclature, classe) \
 \
 \
CATImplementTIEMethods(CATIAArrNomenclature, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAArrNomenclature, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAArrNomenclature, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAArrNomenclature, classe) \
 \
HRESULT __stdcall  TIECATIAArrNomenclature##classe::get_IconName(CATBSTR & oIconName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oIconName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IconName(oIconName); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oIconName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrNomenclature##classe::put_IconName(const CATBSTR & iIconName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIconName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_IconName(iIconName); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIconName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrNomenclature##classe::get_IntSysClassName(CATBSTR & oNomenclatureType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oNomenclatureType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IntSysClassName(oNomenclatureType); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oNomenclatureType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrNomenclature##classe::put_IntSysClassName(const CATBSTR & iNomenclatureType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iNomenclatureType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_IntSysClassName(iNomenclatureType); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iNomenclatureType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrNomenclature##classe::get_NLSInstanceName(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NLSInstanceName(oName); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrNomenclature##classe::put_NLSInstanceName(const CATBSTR & iName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_NLSInstanceName(iName); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrNomenclature##classe::get_SuperTypeName(CATBSTR & oSuperTypeName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oSuperTypeName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SuperTypeName(oSuperTypeName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oSuperTypeName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrNomenclature##classe::put_SuperTypeName(const CATBSTR & iSuperTypeName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iSuperTypeName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SuperTypeName(iSuperTypeName); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iSuperTypeName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrNomenclature##classe::get_SubTypes(CATIAArrNomenclatures *& oSubTypeNomenclatures) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oSubTypeNomenclatures); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SubTypes(oSubTypeNomenclatures); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oSubTypeNomenclatures); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrNomenclature##classe::IsSystemNomenclature(CAT_VARIANT_BOOL & oIsSystem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oIsSystem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsSystemNomenclature(oIsSystem); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oIsSystem); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrNomenclature##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrNomenclature##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrNomenclature##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrNomenclature##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrNomenclature##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAArrNomenclature(classe) \
 \
 \
declare_TIE_CATIAArrNomenclature(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrNomenclature##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrNomenclature,"CATIAArrNomenclature",CATIAArrNomenclature::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrNomenclature(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAArrNomenclature, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrNomenclature##classe(classe::MetaObject(),CATIAArrNomenclature::MetaObject(),(void *)CreateTIECATIAArrNomenclature##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAArrNomenclature(classe) \
 \
 \
declare_TIE_CATIAArrNomenclature(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrNomenclature##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrNomenclature,"CATIAArrNomenclature",CATIAArrNomenclature::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrNomenclature(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAArrNomenclature, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrNomenclature##classe(classe::MetaObject(),CATIAArrNomenclature::MetaObject(),(void *)CreateTIECATIAArrNomenclature##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAArrNomenclature(classe) TIE_CATIAArrNomenclature(classe)
#else
#define BOA_CATIAArrNomenclature(classe) CATImplementBOA(CATIAArrNomenclature, classe)
#endif

#endif
