#ifndef __TIE_CATIASchAppZone
#define __TIE_CATIASchAppZone

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchAppZone.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchAppZone */
#define declare_TIE_CATIASchAppZone(classe) \
 \
 \
class TIECATIASchAppZone##classe : public CATIASchAppZone \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchAppZone, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AppAddZoneMember(CATIASchAppConnectable * iAppCntblToAdd); \
      virtual HRESULT __stdcall AppRemoveZoneMember(CATIASchAppConnectable * iAppCntblToRemove); \
      virtual HRESULT __stdcall AppListZoneMembers(CATIASchListOfObjects *& oLAppCntbl); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchAppZone(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AppAddZoneMember(CATIASchAppConnectable * iAppCntblToAdd); \
virtual HRESULT __stdcall AppRemoveZoneMember(CATIASchAppConnectable * iAppCntblToRemove); \
virtual HRESULT __stdcall AppListZoneMembers(CATIASchListOfObjects *& oLAppCntbl); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchAppZone(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AppAddZoneMember(CATIASchAppConnectable * iAppCntblToAdd) \
{ \
return (ENVTIECALL(CATIASchAppZone,ENVTIETypeLetter,ENVTIELetter)AppAddZoneMember(iAppCntblToAdd)); \
} \
HRESULT __stdcall  ENVTIEName::AppRemoveZoneMember(CATIASchAppConnectable * iAppCntblToRemove) \
{ \
return (ENVTIECALL(CATIASchAppZone,ENVTIETypeLetter,ENVTIELetter)AppRemoveZoneMember(iAppCntblToRemove)); \
} \
HRESULT __stdcall  ENVTIEName::AppListZoneMembers(CATIASchListOfObjects *& oLAppCntbl) \
{ \
return (ENVTIECALL(CATIASchAppZone,ENVTIETypeLetter,ENVTIELetter)AppListZoneMembers(oLAppCntbl)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchAppZone,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchAppZone,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppZone,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppZone,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchAppZone,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchAppZone(classe)    TIECATIASchAppZone##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchAppZone(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchAppZone, classe) \
 \
 \
CATImplementTIEMethods(CATIASchAppZone, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchAppZone, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchAppZone, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchAppZone, classe) \
 \
HRESULT __stdcall  TIECATIASchAppZone##classe::AppAddZoneMember(CATIASchAppConnectable * iAppCntblToAdd) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iAppCntblToAdd); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppAddZoneMember(iAppCntblToAdd); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iAppCntblToAdd); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppZone##classe::AppRemoveZoneMember(CATIASchAppConnectable * iAppCntblToRemove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iAppCntblToRemove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppRemoveZoneMember(iAppCntblToRemove); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iAppCntblToRemove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppZone##classe::AppListZoneMembers(CATIASchListOfObjects *& oLAppCntbl) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oLAppCntbl); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListZoneMembers(oLAppCntbl); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oLAppCntbl); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppZone##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppZone##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppZone##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppZone##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppZone##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchAppZone(classe) \
 \
 \
declare_TIE_CATIASchAppZone(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppZone##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppZone,"CATIASchAppZone",CATIASchAppZone::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppZone(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchAppZone, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppZone##classe(classe::MetaObject(),CATIASchAppZone::MetaObject(),(void *)CreateTIECATIASchAppZone##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchAppZone(classe) \
 \
 \
declare_TIE_CATIASchAppZone(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppZone##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppZone,"CATIASchAppZone",CATIASchAppZone::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppZone(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchAppZone, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppZone##classe(classe::MetaObject(),CATIASchAppZone::MetaObject(),(void *)CreateTIECATIASchAppZone##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchAppZone(classe) TIE_CATIASchAppZone(classe)
#else
#define BOA_CATIASchAppZone(classe) CATImplementBOA(CATIASchAppZone, classe)
#endif

#endif
