#ifndef __TIE_CATIASchAppObjectFactory2
#define __TIE_CATIASchAppObjectFactory2

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchAppObjectFactory2.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchAppObjectFactory2 */
#define declare_TIE_CATIASchAppObjectFactory2(classe) \
 \
 \
class TIECATIASchAppObjectFactory2##classe : public CATIASchAppObjectFactory2 \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchAppObjectFactory2, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AppCreateRouteWithInfo(const CATBSTR & iAppRouteClassType, CATIABase * iAppInfo, CATIABase *& oAppRoute); \
      virtual HRESULT __stdcall AppCreateCompRef(const CATBSTR & iAppCompClassType, CATIADocument * iDoc, CATIABase *& oAppComp); \
      virtual HRESULT __stdcall AppCreateRoute(const CATBSTR & iAppRouteClassType, CATIADocument * iDoc, const CATBSTR & iLogLineID, CATIABase *& oAppRoute); \
      virtual HRESULT __stdcall AppCreateRouteFromRef(CATIASchAppRoute * iRouteReference, CATIADocument * iDoc, const CATBSTR & iLogLineID, CATIABase *& oAppRoute); \
      virtual HRESULT __stdcall AppCreateGroup(const CATBSTR & iAppGroupClassType, CATIADocument * iDoc, CATIABase *& oAppGroup); \
      virtual HRESULT __stdcall AppCreateZone(const CATBSTR & iAppZoneClassType, CATIADocument * iDoc, CATIABase *& oAppZone); \
      virtual HRESULT __stdcall AppCreateConnection(const CATBSTR & iAppCntnClassType, CATIADocument * iDoc, CATIABase *& oAppConnection); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchAppObjectFactory2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AppCreateRouteWithInfo(const CATBSTR & iAppRouteClassType, CATIABase * iAppInfo, CATIABase *& oAppRoute); \
virtual HRESULT __stdcall AppCreateCompRef(const CATBSTR & iAppCompClassType, CATIADocument * iDoc, CATIABase *& oAppComp); \
virtual HRESULT __stdcall AppCreateRoute(const CATBSTR & iAppRouteClassType, CATIADocument * iDoc, const CATBSTR & iLogLineID, CATIABase *& oAppRoute); \
virtual HRESULT __stdcall AppCreateRouteFromRef(CATIASchAppRoute * iRouteReference, CATIADocument * iDoc, const CATBSTR & iLogLineID, CATIABase *& oAppRoute); \
virtual HRESULT __stdcall AppCreateGroup(const CATBSTR & iAppGroupClassType, CATIADocument * iDoc, CATIABase *& oAppGroup); \
virtual HRESULT __stdcall AppCreateZone(const CATBSTR & iAppZoneClassType, CATIADocument * iDoc, CATIABase *& oAppZone); \
virtual HRESULT __stdcall AppCreateConnection(const CATBSTR & iAppCntnClassType, CATIADocument * iDoc, CATIABase *& oAppConnection); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchAppObjectFactory2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AppCreateRouteWithInfo(const CATBSTR & iAppRouteClassType, CATIABase * iAppInfo, CATIABase *& oAppRoute) \
{ \
return (ENVTIECALL(CATIASchAppObjectFactory2,ENVTIETypeLetter,ENVTIELetter)AppCreateRouteWithInfo(iAppRouteClassType,iAppInfo,oAppRoute)); \
} \
HRESULT __stdcall  ENVTIEName::AppCreateCompRef(const CATBSTR & iAppCompClassType, CATIADocument * iDoc, CATIABase *& oAppComp) \
{ \
return (ENVTIECALL(CATIASchAppObjectFactory2,ENVTIETypeLetter,ENVTIELetter)AppCreateCompRef(iAppCompClassType,iDoc,oAppComp)); \
} \
HRESULT __stdcall  ENVTIEName::AppCreateRoute(const CATBSTR & iAppRouteClassType, CATIADocument * iDoc, const CATBSTR & iLogLineID, CATIABase *& oAppRoute) \
{ \
return (ENVTIECALL(CATIASchAppObjectFactory2,ENVTIETypeLetter,ENVTIELetter)AppCreateRoute(iAppRouteClassType,iDoc,iLogLineID,oAppRoute)); \
} \
HRESULT __stdcall  ENVTIEName::AppCreateRouteFromRef(CATIASchAppRoute * iRouteReference, CATIADocument * iDoc, const CATBSTR & iLogLineID, CATIABase *& oAppRoute) \
{ \
return (ENVTIECALL(CATIASchAppObjectFactory2,ENVTIETypeLetter,ENVTIELetter)AppCreateRouteFromRef(iRouteReference,iDoc,iLogLineID,oAppRoute)); \
} \
HRESULT __stdcall  ENVTIEName::AppCreateGroup(const CATBSTR & iAppGroupClassType, CATIADocument * iDoc, CATIABase *& oAppGroup) \
{ \
return (ENVTIECALL(CATIASchAppObjectFactory2,ENVTIETypeLetter,ENVTIELetter)AppCreateGroup(iAppGroupClassType,iDoc,oAppGroup)); \
} \
HRESULT __stdcall  ENVTIEName::AppCreateZone(const CATBSTR & iAppZoneClassType, CATIADocument * iDoc, CATIABase *& oAppZone) \
{ \
return (ENVTIECALL(CATIASchAppObjectFactory2,ENVTIETypeLetter,ENVTIELetter)AppCreateZone(iAppZoneClassType,iDoc,oAppZone)); \
} \
HRESULT __stdcall  ENVTIEName::AppCreateConnection(const CATBSTR & iAppCntnClassType, CATIADocument * iDoc, CATIABase *& oAppConnection) \
{ \
return (ENVTIECALL(CATIASchAppObjectFactory2,ENVTIETypeLetter,ENVTIELetter)AppCreateConnection(iAppCntnClassType,iDoc,oAppConnection)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchAppObjectFactory2,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchAppObjectFactory2,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppObjectFactory2,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppObjectFactory2,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchAppObjectFactory2,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchAppObjectFactory2(classe)    TIECATIASchAppObjectFactory2##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchAppObjectFactory2(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchAppObjectFactory2, classe) \
 \
 \
CATImplementTIEMethods(CATIASchAppObjectFactory2, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchAppObjectFactory2, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchAppObjectFactory2, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchAppObjectFactory2, classe) \
 \
HRESULT __stdcall  TIECATIASchAppObjectFactory2##classe::AppCreateRouteWithInfo(const CATBSTR & iAppRouteClassType, CATIABase * iAppInfo, CATIABase *& oAppRoute) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iAppRouteClassType,&iAppInfo,&oAppRoute); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateRouteWithInfo(iAppRouteClassType,iAppInfo,oAppRoute); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iAppRouteClassType,&iAppInfo,&oAppRoute); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppObjectFactory2##classe::AppCreateCompRef(const CATBSTR & iAppCompClassType, CATIADocument * iDoc, CATIABase *& oAppComp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iAppCompClassType,&iDoc,&oAppComp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateCompRef(iAppCompClassType,iDoc,oAppComp); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iAppCompClassType,&iDoc,&oAppComp); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppObjectFactory2##classe::AppCreateRoute(const CATBSTR & iAppRouteClassType, CATIADocument * iDoc, const CATBSTR & iLogLineID, CATIABase *& oAppRoute) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iAppRouteClassType,&iDoc,&iLogLineID,&oAppRoute); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateRoute(iAppRouteClassType,iDoc,iLogLineID,oAppRoute); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iAppRouteClassType,&iDoc,&iLogLineID,&oAppRoute); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppObjectFactory2##classe::AppCreateRouteFromRef(CATIASchAppRoute * iRouteReference, CATIADocument * iDoc, const CATBSTR & iLogLineID, CATIABase *& oAppRoute) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iRouteReference,&iDoc,&iLogLineID,&oAppRoute); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateRouteFromRef(iRouteReference,iDoc,iLogLineID,oAppRoute); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iRouteReference,&iDoc,&iLogLineID,&oAppRoute); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppObjectFactory2##classe::AppCreateGroup(const CATBSTR & iAppGroupClassType, CATIADocument * iDoc, CATIABase *& oAppGroup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iAppGroupClassType,&iDoc,&oAppGroup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateGroup(iAppGroupClassType,iDoc,oAppGroup); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iAppGroupClassType,&iDoc,&oAppGroup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppObjectFactory2##classe::AppCreateZone(const CATBSTR & iAppZoneClassType, CATIADocument * iDoc, CATIABase *& oAppZone) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iAppZoneClassType,&iDoc,&oAppZone); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateZone(iAppZoneClassType,iDoc,oAppZone); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iAppZoneClassType,&iDoc,&oAppZone); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppObjectFactory2##classe::AppCreateConnection(const CATBSTR & iAppCntnClassType, CATIADocument * iDoc, CATIABase *& oAppConnection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iAppCntnClassType,&iDoc,&oAppConnection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateConnection(iAppCntnClassType,iDoc,oAppConnection); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iAppCntnClassType,&iDoc,&oAppConnection); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppObjectFactory2##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppObjectFactory2##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppObjectFactory2##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppObjectFactory2##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppObjectFactory2##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchAppObjectFactory2(classe) \
 \
 \
declare_TIE_CATIASchAppObjectFactory2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppObjectFactory2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppObjectFactory2,"CATIASchAppObjectFactory2",CATIASchAppObjectFactory2::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppObjectFactory2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchAppObjectFactory2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppObjectFactory2##classe(classe::MetaObject(),CATIASchAppObjectFactory2::MetaObject(),(void *)CreateTIECATIASchAppObjectFactory2##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchAppObjectFactory2(classe) \
 \
 \
declare_TIE_CATIASchAppObjectFactory2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppObjectFactory2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppObjectFactory2,"CATIASchAppObjectFactory2",CATIASchAppObjectFactory2::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppObjectFactory2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchAppObjectFactory2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppObjectFactory2##classe(classe::MetaObject(),CATIASchAppObjectFactory2::MetaObject(),(void *)CreateTIECATIASchAppObjectFactory2##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchAppObjectFactory2(classe) TIE_CATIASchAppObjectFactory2(classe)
#else
#define BOA_CATIASchAppObjectFactory2(classe) CATImplementBOA(CATIASchAppObjectFactory2, classe)
#endif

#endif
