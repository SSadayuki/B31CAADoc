#ifndef __TIE_CATIAPspObject
#define __TIE_CATIAPspObject

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPspObject.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPspObject */
#define declare_TIE_CATIAPspObject(classe) \
 \
 \
class TIECATIAPspObject##classe : public CATIAPspObject \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPspObject, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ApplicationID(CatPspIDLApplicationID & oApplicationID); \
      virtual HRESULT __stdcall get_DomainID(CatPspIDLDomainID & oDomainID); \
      virtual HRESULT __stdcall get_StartupType(CATBSTR & oStartupType); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPspObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ApplicationID(CatPspIDLApplicationID & oApplicationID); \
virtual HRESULT __stdcall get_DomainID(CatPspIDLDomainID & oDomainID); \
virtual HRESULT __stdcall get_StartupType(CATBSTR & oStartupType); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPspObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ApplicationID(CatPspIDLApplicationID & oApplicationID) \
{ \
return (ENVTIECALL(CATIAPspObject,ENVTIETypeLetter,ENVTIELetter)get_ApplicationID(oApplicationID)); \
} \
HRESULT __stdcall  ENVTIEName::get_DomainID(CatPspIDLDomainID & oDomainID) \
{ \
return (ENVTIECALL(CATIAPspObject,ENVTIETypeLetter,ENVTIELetter)get_DomainID(oDomainID)); \
} \
HRESULT __stdcall  ENVTIEName::get_StartupType(CATBSTR & oStartupType) \
{ \
return (ENVTIECALL(CATIAPspObject,ENVTIETypeLetter,ENVTIELetter)get_StartupType(oStartupType)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPspObject,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPspObject,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspObject,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspObject,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPspObject,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPspObject(classe)    TIECATIAPspObject##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPspObject(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPspObject, classe) \
 \
 \
CATImplementTIEMethods(CATIAPspObject, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPspObject, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPspObject, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPspObject, classe) \
 \
HRESULT __stdcall  TIECATIAPspObject##classe::get_ApplicationID(CatPspIDLApplicationID & oApplicationID) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oApplicationID); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ApplicationID(oApplicationID); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oApplicationID); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspObject##classe::get_DomainID(CatPspIDLDomainID & oDomainID) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oDomainID); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DomainID(oDomainID); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oDomainID); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspObject##classe::get_StartupType(CATBSTR & oStartupType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oStartupType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StartupType(oStartupType); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oStartupType); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspObject##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspObject##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspObject##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspObject##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspObject##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPspObject(classe) \
 \
 \
declare_TIE_CATIAPspObject(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspObject,"CATIAPspObject",CATIAPspObject::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPspObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspObject##classe(classe::MetaObject(),CATIAPspObject::MetaObject(),(void *)CreateTIECATIAPspObject##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPspObject(classe) \
 \
 \
declare_TIE_CATIAPspObject(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspObject,"CATIAPspObject",CATIAPspObject::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPspObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspObject##classe(classe::MetaObject(),CATIAPspObject::MetaObject(),(void *)CreateTIECATIAPspObject##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPspObject(classe) TIE_CATIAPspObject(classe)
#else
#define BOA_CATIAPspObject(classe) CATImplementBOA(CATIAPspObject, classe)
#endif

#endif
