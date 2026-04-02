#ifndef __TIE_CATIAAssemblyConvertor
#define __TIE_CATIAAssemblyConvertor

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAssemblyConvertor.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAssemblyConvertor */
#define declare_TIE_CATIAAssemblyConvertor(classe) \
 \
 \
class TIECATIAAssemblyConvertor##classe : public CATIAAssemblyConvertor \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAssemblyConvertor, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Print(const CATBSTR & iFileType, const CATBSTR & iFile, CATIAProduct * iProduct); \
      virtual HRESULT __stdcall SetCurrentFormat(const CATSafeArrayVariant & ilistProps); \
      virtual HRESULT __stdcall SetSecondaryFormat(const CATSafeArrayVariant & ilistProps); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAssemblyConvertor(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Print(const CATBSTR & iFileType, const CATBSTR & iFile, CATIAProduct * iProduct); \
virtual HRESULT __stdcall SetCurrentFormat(const CATSafeArrayVariant & ilistProps); \
virtual HRESULT __stdcall SetSecondaryFormat(const CATSafeArrayVariant & ilistProps); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAssemblyConvertor(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Print(const CATBSTR & iFileType, const CATBSTR & iFile, CATIAProduct * iProduct) \
{ \
return (ENVTIECALL(CATIAAssemblyConvertor,ENVTIETypeLetter,ENVTIELetter)Print(iFileType,iFile,iProduct)); \
} \
HRESULT __stdcall  ENVTIEName::SetCurrentFormat(const CATSafeArrayVariant & ilistProps) \
{ \
return (ENVTIECALL(CATIAAssemblyConvertor,ENVTIETypeLetter,ENVTIELetter)SetCurrentFormat(ilistProps)); \
} \
HRESULT __stdcall  ENVTIEName::SetSecondaryFormat(const CATSafeArrayVariant & ilistProps) \
{ \
return (ENVTIECALL(CATIAAssemblyConvertor,ENVTIETypeLetter,ENVTIELetter)SetSecondaryFormat(ilistProps)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAssemblyConvertor,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAssemblyConvertor,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAssemblyConvertor,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAssemblyConvertor,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAssemblyConvertor,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAssemblyConvertor(classe)    TIECATIAAssemblyConvertor##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAssemblyConvertor(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAssemblyConvertor, classe) \
 \
 \
CATImplementTIEMethods(CATIAAssemblyConvertor, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAssemblyConvertor, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAssemblyConvertor, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAssemblyConvertor, classe) \
 \
HRESULT __stdcall  TIECATIAAssemblyConvertor##classe::Print(const CATBSTR & iFileType, const CATBSTR & iFile, CATIAProduct * iProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iFileType,&iFile,&iProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Print(iFileType,iFile,iProduct); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iFileType,&iFile,&iProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyConvertor##classe::SetCurrentFormat(const CATSafeArrayVariant & ilistProps) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&ilistProps); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCurrentFormat(ilistProps); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&ilistProps); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyConvertor##classe::SetSecondaryFormat(const CATSafeArrayVariant & ilistProps) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ilistProps); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSecondaryFormat(ilistProps); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ilistProps); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblyConvertor##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblyConvertor##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblyConvertor##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblyConvertor##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblyConvertor##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAssemblyConvertor(classe) \
 \
 \
declare_TIE_CATIAAssemblyConvertor(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAssemblyConvertor##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAssemblyConvertor,"CATIAAssemblyConvertor",CATIAAssemblyConvertor::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAssemblyConvertor(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAssemblyConvertor, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAssemblyConvertor##classe(classe::MetaObject(),CATIAAssemblyConvertor::MetaObject(),(void *)CreateTIECATIAAssemblyConvertor##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAssemblyConvertor(classe) \
 \
 \
declare_TIE_CATIAAssemblyConvertor(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAssemblyConvertor##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAssemblyConvertor,"CATIAAssemblyConvertor",CATIAAssemblyConvertor::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAssemblyConvertor(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAssemblyConvertor, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAssemblyConvertor##classe(classe::MetaObject(),CATIAAssemblyConvertor::MetaObject(),(void *)CreateTIECATIAAssemblyConvertor##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAssemblyConvertor(classe) TIE_CATIAAssemblyConvertor(classe)
#else
#define BOA_CATIAAssemblyConvertor(classe) CATImplementBOA(CATIAAssemblyConvertor, classe)
#endif

#endif
