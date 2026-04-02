#ifndef __TIE_CATIASchAppObjectFactory
#define __TIE_CATIASchAppObjectFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchAppObjectFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchAppObjectFactory */
#define declare_TIE_CATIASchAppObjectFactory(classe) \
 \
 \
class TIECATIASchAppObjectFactory##classe : public CATIASchAppObjectFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchAppObjectFactory, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AppCreateCompRef(const CATBSTR & iAppCompClassType, CATIABase *& oAppComp); \
      virtual HRESULT __stdcall AppCreateRoute(const CATBSTR & iAppRouteClassType, CATIABase *& oAppRoute, const CATBSTR & iLogLineID); \
      virtual HRESULT __stdcall AppCreateRouteFromRef(CATIASchAppRoute * iRouteReference, CATIABase *& oAppRoute, const CATBSTR & iLogLineID); \
      virtual HRESULT __stdcall AppCreateGroup(const CATBSTR & iAppGroupClassType, CATIABase *& oAppGroup); \
      virtual HRESULT __stdcall AppCreateZone(const CATBSTR & iAppZoneClassType, CATIABase *& oAppZone); \
      virtual HRESULT __stdcall AppCreateConnection(const CATBSTR & iAppCntnClassType, CATIABase *& oAppConnection); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchAppObjectFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AppCreateCompRef(const CATBSTR & iAppCompClassType, CATIABase *& oAppComp); \
virtual HRESULT __stdcall AppCreateRoute(const CATBSTR & iAppRouteClassType, CATIABase *& oAppRoute, const CATBSTR & iLogLineID); \
virtual HRESULT __stdcall AppCreateRouteFromRef(CATIASchAppRoute * iRouteReference, CATIABase *& oAppRoute, const CATBSTR & iLogLineID); \
virtual HRESULT __stdcall AppCreateGroup(const CATBSTR & iAppGroupClassType, CATIABase *& oAppGroup); \
virtual HRESULT __stdcall AppCreateZone(const CATBSTR & iAppZoneClassType, CATIABase *& oAppZone); \
virtual HRESULT __stdcall AppCreateConnection(const CATBSTR & iAppCntnClassType, CATIABase *& oAppConnection); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchAppObjectFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AppCreateCompRef(const CATBSTR & iAppCompClassType, CATIABase *& oAppComp) \
{ \
return (ENVTIECALL(CATIASchAppObjectFactory,ENVTIETypeLetter,ENVTIELetter)AppCreateCompRef(iAppCompClassType,oAppComp)); \
} \
HRESULT __stdcall  ENVTIEName::AppCreateRoute(const CATBSTR & iAppRouteClassType, CATIABase *& oAppRoute, const CATBSTR & iLogLineID) \
{ \
return (ENVTIECALL(CATIASchAppObjectFactory,ENVTIETypeLetter,ENVTIELetter)AppCreateRoute(iAppRouteClassType,oAppRoute,iLogLineID)); \
} \
HRESULT __stdcall  ENVTIEName::AppCreateRouteFromRef(CATIASchAppRoute * iRouteReference, CATIABase *& oAppRoute, const CATBSTR & iLogLineID) \
{ \
return (ENVTIECALL(CATIASchAppObjectFactory,ENVTIETypeLetter,ENVTIELetter)AppCreateRouteFromRef(iRouteReference,oAppRoute,iLogLineID)); \
} \
HRESULT __stdcall  ENVTIEName::AppCreateGroup(const CATBSTR & iAppGroupClassType, CATIABase *& oAppGroup) \
{ \
return (ENVTIECALL(CATIASchAppObjectFactory,ENVTIETypeLetter,ENVTIELetter)AppCreateGroup(iAppGroupClassType,oAppGroup)); \
} \
HRESULT __stdcall  ENVTIEName::AppCreateZone(const CATBSTR & iAppZoneClassType, CATIABase *& oAppZone) \
{ \
return (ENVTIECALL(CATIASchAppObjectFactory,ENVTIETypeLetter,ENVTIELetter)AppCreateZone(iAppZoneClassType,oAppZone)); \
} \
HRESULT __stdcall  ENVTIEName::AppCreateConnection(const CATBSTR & iAppCntnClassType, CATIABase *& oAppConnection) \
{ \
return (ENVTIECALL(CATIASchAppObjectFactory,ENVTIETypeLetter,ENVTIELetter)AppCreateConnection(iAppCntnClassType,oAppConnection)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchAppObjectFactory,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchAppObjectFactory,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppObjectFactory,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppObjectFactory,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchAppObjectFactory,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchAppObjectFactory(classe)    TIECATIASchAppObjectFactory##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchAppObjectFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchAppObjectFactory, classe) \
 \
 \
CATImplementTIEMethods(CATIASchAppObjectFactory, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchAppObjectFactory, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchAppObjectFactory, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchAppObjectFactory, classe) \
 \
HRESULT __stdcall  TIECATIASchAppObjectFactory##classe::AppCreateCompRef(const CATBSTR & iAppCompClassType, CATIABase *& oAppComp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iAppCompClassType,&oAppComp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateCompRef(iAppCompClassType,oAppComp); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iAppCompClassType,&oAppComp); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppObjectFactory##classe::AppCreateRoute(const CATBSTR & iAppRouteClassType, CATIABase *& oAppRoute, const CATBSTR & iLogLineID) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iAppRouteClassType,&oAppRoute,&iLogLineID); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateRoute(iAppRouteClassType,oAppRoute,iLogLineID); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iAppRouteClassType,&oAppRoute,&iLogLineID); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppObjectFactory##classe::AppCreateRouteFromRef(CATIASchAppRoute * iRouteReference, CATIABase *& oAppRoute, const CATBSTR & iLogLineID) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iRouteReference,&oAppRoute,&iLogLineID); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateRouteFromRef(iRouteReference,oAppRoute,iLogLineID); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iRouteReference,&oAppRoute,&iLogLineID); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppObjectFactory##classe::AppCreateGroup(const CATBSTR & iAppGroupClassType, CATIABase *& oAppGroup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iAppGroupClassType,&oAppGroup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateGroup(iAppGroupClassType,oAppGroup); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iAppGroupClassType,&oAppGroup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppObjectFactory##classe::AppCreateZone(const CATBSTR & iAppZoneClassType, CATIABase *& oAppZone) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iAppZoneClassType,&oAppZone); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateZone(iAppZoneClassType,oAppZone); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iAppZoneClassType,&oAppZone); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppObjectFactory##classe::AppCreateConnection(const CATBSTR & iAppCntnClassType, CATIABase *& oAppConnection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iAppCntnClassType,&oAppConnection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateConnection(iAppCntnClassType,oAppConnection); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iAppCntnClassType,&oAppConnection); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppObjectFactory##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppObjectFactory##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppObjectFactory##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppObjectFactory##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppObjectFactory##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchAppObjectFactory(classe) \
 \
 \
declare_TIE_CATIASchAppObjectFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppObjectFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppObjectFactory,"CATIASchAppObjectFactory",CATIASchAppObjectFactory::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppObjectFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchAppObjectFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppObjectFactory##classe(classe::MetaObject(),CATIASchAppObjectFactory::MetaObject(),(void *)CreateTIECATIASchAppObjectFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchAppObjectFactory(classe) \
 \
 \
declare_TIE_CATIASchAppObjectFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppObjectFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppObjectFactory,"CATIASchAppObjectFactory",CATIASchAppObjectFactory::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppObjectFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchAppObjectFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppObjectFactory##classe(classe::MetaObject(),CATIASchAppObjectFactory::MetaObject(),(void *)CreateTIECATIASchAppObjectFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchAppObjectFactory(classe) TIE_CATIASchAppObjectFactory(classe)
#else
#define BOA_CATIASchAppObjectFactory(classe) CATImplementBOA(CATIASchAppObjectFactory, classe)
#endif

#endif
