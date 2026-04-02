#ifndef __TIE_CATIAPositionedMaterial
#define __TIE_CATIAPositionedMaterial

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPositionedMaterial.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPositionedMaterial */
#define declare_TIE_CATIAPositionedMaterial(classe) \
 \
 \
class TIECATIAPositionedMaterial##classe : public CATIAPositionedMaterial \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPositionedMaterial, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Material(CATIAMaterial *& oMaterial); \
      virtual HRESULT __stdcall get_ApplicationMode(short & oApplicationMode); \
      virtual HRESULT __stdcall get_InheritanceMode(short & oInheritanceMode); \
      virtual HRESULT __stdcall put_InheritanceMode(short iInheritanceMode); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPositionedMaterial(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Material(CATIAMaterial *& oMaterial); \
virtual HRESULT __stdcall get_ApplicationMode(short & oApplicationMode); \
virtual HRESULT __stdcall get_InheritanceMode(short & oInheritanceMode); \
virtual HRESULT __stdcall put_InheritanceMode(short iInheritanceMode); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPositionedMaterial(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Material(CATIAMaterial *& oMaterial) \
{ \
return (ENVTIECALL(CATIAPositionedMaterial,ENVTIETypeLetter,ENVTIELetter)get_Material(oMaterial)); \
} \
HRESULT __stdcall  ENVTIEName::get_ApplicationMode(short & oApplicationMode) \
{ \
return (ENVTIECALL(CATIAPositionedMaterial,ENVTIETypeLetter,ENVTIELetter)get_ApplicationMode(oApplicationMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_InheritanceMode(short & oInheritanceMode) \
{ \
return (ENVTIECALL(CATIAPositionedMaterial,ENVTIETypeLetter,ENVTIELetter)get_InheritanceMode(oInheritanceMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_InheritanceMode(short iInheritanceMode) \
{ \
return (ENVTIECALL(CATIAPositionedMaterial,ENVTIETypeLetter,ENVTIELetter)put_InheritanceMode(iInheritanceMode)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPositionedMaterial,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPositionedMaterial,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPositionedMaterial,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPositionedMaterial,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPositionedMaterial,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPositionedMaterial(classe)    TIECATIAPositionedMaterial##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPositionedMaterial(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPositionedMaterial, classe) \
 \
 \
CATImplementTIEMethods(CATIAPositionedMaterial, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPositionedMaterial, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPositionedMaterial, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPositionedMaterial, classe) \
 \
HRESULT __stdcall  TIECATIAPositionedMaterial##classe::get_Material(CATIAMaterial *& oMaterial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oMaterial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Material(oMaterial); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oMaterial); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPositionedMaterial##classe::get_ApplicationMode(short & oApplicationMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oApplicationMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ApplicationMode(oApplicationMode); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oApplicationMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPositionedMaterial##classe::get_InheritanceMode(short & oInheritanceMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oInheritanceMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InheritanceMode(oInheritanceMode); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oInheritanceMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPositionedMaterial##classe::put_InheritanceMode(short iInheritanceMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iInheritanceMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_InheritanceMode(iInheritanceMode); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iInheritanceMode); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPositionedMaterial##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPositionedMaterial##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPositionedMaterial##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPositionedMaterial##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPositionedMaterial##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPositionedMaterial(classe) \
 \
 \
declare_TIE_CATIAPositionedMaterial(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPositionedMaterial##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPositionedMaterial,"CATIAPositionedMaterial",CATIAPositionedMaterial::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPositionedMaterial(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPositionedMaterial, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPositionedMaterial##classe(classe::MetaObject(),CATIAPositionedMaterial::MetaObject(),(void *)CreateTIECATIAPositionedMaterial##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPositionedMaterial(classe) \
 \
 \
declare_TIE_CATIAPositionedMaterial(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPositionedMaterial##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPositionedMaterial,"CATIAPositionedMaterial",CATIAPositionedMaterial::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPositionedMaterial(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPositionedMaterial, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPositionedMaterial##classe(classe::MetaObject(),CATIAPositionedMaterial::MetaObject(),(void *)CreateTIECATIAPositionedMaterial##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPositionedMaterial(classe) TIE_CATIAPositionedMaterial(classe)
#else
#define BOA_CATIAPositionedMaterial(classe) CATImplementBOA(CATIAPositionedMaterial, classe)
#endif

#endif
