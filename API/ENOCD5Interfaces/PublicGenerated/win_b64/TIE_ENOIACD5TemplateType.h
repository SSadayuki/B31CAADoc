#ifndef __TIE_ENOIACD5TemplateType
#define __TIE_ENOIACD5TemplateType

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "ENOIACD5TemplateType.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOIACD5TemplateType */
#define declare_TIE_ENOIACD5TemplateType(classe) \
 \
 \
class TIEENOIACD5TemplateType##classe : public ENOIACD5TemplateType \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOIACD5TemplateType, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_TemplateTypeName(CATBSTR & oName); \
      virtual HRESULT __stdcall get_Templates(ENOIACD5Templates *& oValue); \
      virtual HRESULT __stdcall get_PossibleTypes(CATSafeArrayVariant *& oPossibleTypes); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_ENOIACD5TemplateType(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_TemplateTypeName(CATBSTR & oName); \
virtual HRESULT __stdcall get_Templates(ENOIACD5Templates *& oValue); \
virtual HRESULT __stdcall get_PossibleTypes(CATSafeArrayVariant *& oPossibleTypes); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_ENOIACD5TemplateType(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_TemplateTypeName(CATBSTR & oName) \
{ \
return (ENVTIECALL(ENOIACD5TemplateType,ENVTIETypeLetter,ENVTIELetter)get_TemplateTypeName(oName)); \
} \
HRESULT __stdcall  ENVTIEName::get_Templates(ENOIACD5Templates *& oValue) \
{ \
return (ENVTIECALL(ENOIACD5TemplateType,ENVTIETypeLetter,ENVTIELetter)get_Templates(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_PossibleTypes(CATSafeArrayVariant *& oPossibleTypes) \
{ \
return (ENVTIECALL(ENOIACD5TemplateType,ENVTIETypeLetter,ENVTIELetter)get_PossibleTypes(oPossibleTypes)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(ENOIACD5TemplateType,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(ENOIACD5TemplateType,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(ENOIACD5TemplateType,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(ENOIACD5TemplateType,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(ENOIACD5TemplateType,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOIACD5TemplateType(classe)    TIEENOIACD5TemplateType##classe


/* Common methods inside a TIE */
#define common_TIE_ENOIACD5TemplateType(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOIACD5TemplateType, classe) \
 \
 \
CATImplementTIEMethods(ENOIACD5TemplateType, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOIACD5TemplateType, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOIACD5TemplateType, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOIACD5TemplateType, classe) \
 \
HRESULT __stdcall  TIEENOIACD5TemplateType##classe::get_TemplateTypeName(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TemplateTypeName(oName); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5TemplateType##classe::get_Templates(ENOIACD5Templates *& oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Templates(oValue); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5TemplateType##classe::get_PossibleTypes(CATSafeArrayVariant *& oPossibleTypes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oPossibleTypes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PossibleTypes(oPossibleTypes); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oPossibleTypes); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5TemplateType##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5TemplateType##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5TemplateType##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5TemplateType##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5TemplateType##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOIACD5TemplateType(classe) \
 \
 \
declare_TIE_ENOIACD5TemplateType(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOIACD5TemplateType##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOIACD5TemplateType,"ENOIACD5TemplateType",ENOIACD5TemplateType::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOIACD5TemplateType(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOIACD5TemplateType, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOIACD5TemplateType##classe(classe::MetaObject(),ENOIACD5TemplateType::MetaObject(),(void *)CreateTIEENOIACD5TemplateType##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOIACD5TemplateType(classe) \
 \
 \
declare_TIE_ENOIACD5TemplateType(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOIACD5TemplateType##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOIACD5TemplateType,"ENOIACD5TemplateType",ENOIACD5TemplateType::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOIACD5TemplateType(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOIACD5TemplateType, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOIACD5TemplateType##classe(classe::MetaObject(),ENOIACD5TemplateType::MetaObject(),(void *)CreateTIEENOIACD5TemplateType##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOIACD5TemplateType(classe) TIE_ENOIACD5TemplateType(classe)
#else
#define BOA_ENOIACD5TemplateType(classe) CATImplementBOA(ENOIACD5TemplateType, classe)
#endif

#endif
