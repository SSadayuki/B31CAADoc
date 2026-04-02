#ifndef __TIE_CATIASchGRRFactory
#define __TIE_CATIASchGRRFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchGRRFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchGRRFactory */
#define declare_TIE_CATIASchGRRFactory(classe) \
 \
 \
class TIECATIASchGRRFactory##classe : public CATIASchGRRFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchGRRFactory, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall CreateGRRRoute(const CATSafeArrayVariant & iLDbLinePath, CATIASchGRRRoute *& oGRRRoute); \
      virtual HRESULT __stdcall CreateGRRCntr(CATIASchGRRCntr *& oGRRCntr); \
      virtual HRESULT __stdcall CreateGRRGroup(CATIASchListOfObjects * iLPrimitive, CATIABase *& oGRRGroup); \
      virtual HRESULT __stdcall CreateGRRZone(CATIASchListOfObjects * iLPrimitive, CATIASchGRRZone *& oGRRZone); \
      virtual HRESULT __stdcall CreateGRRRouteEllipse(const CATSafeArrayVariant & iDbXYSeedPt, CATIASchGRRRouteEllipse *& oGRRRouteEllipse); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchGRRFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall CreateGRRRoute(const CATSafeArrayVariant & iLDbLinePath, CATIASchGRRRoute *& oGRRRoute); \
virtual HRESULT __stdcall CreateGRRCntr(CATIASchGRRCntr *& oGRRCntr); \
virtual HRESULT __stdcall CreateGRRGroup(CATIASchListOfObjects * iLPrimitive, CATIABase *& oGRRGroup); \
virtual HRESULT __stdcall CreateGRRZone(CATIASchListOfObjects * iLPrimitive, CATIASchGRRZone *& oGRRZone); \
virtual HRESULT __stdcall CreateGRRRouteEllipse(const CATSafeArrayVariant & iDbXYSeedPt, CATIASchGRRRouteEllipse *& oGRRRouteEllipse); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchGRRFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::CreateGRRRoute(const CATSafeArrayVariant & iLDbLinePath, CATIASchGRRRoute *& oGRRRoute) \
{ \
return (ENVTIECALL(CATIASchGRRFactory,ENVTIETypeLetter,ENVTIELetter)CreateGRRRoute(iLDbLinePath,oGRRRoute)); \
} \
HRESULT __stdcall  ENVTIEName::CreateGRRCntr(CATIASchGRRCntr *& oGRRCntr) \
{ \
return (ENVTIECALL(CATIASchGRRFactory,ENVTIETypeLetter,ENVTIELetter)CreateGRRCntr(oGRRCntr)); \
} \
HRESULT __stdcall  ENVTIEName::CreateGRRGroup(CATIASchListOfObjects * iLPrimitive, CATIABase *& oGRRGroup) \
{ \
return (ENVTIECALL(CATIASchGRRFactory,ENVTIETypeLetter,ENVTIELetter)CreateGRRGroup(iLPrimitive,oGRRGroup)); \
} \
HRESULT __stdcall  ENVTIEName::CreateGRRZone(CATIASchListOfObjects * iLPrimitive, CATIASchGRRZone *& oGRRZone) \
{ \
return (ENVTIECALL(CATIASchGRRFactory,ENVTIETypeLetter,ENVTIELetter)CreateGRRZone(iLPrimitive,oGRRZone)); \
} \
HRESULT __stdcall  ENVTIEName::CreateGRRRouteEllipse(const CATSafeArrayVariant & iDbXYSeedPt, CATIASchGRRRouteEllipse *& oGRRRouteEllipse) \
{ \
return (ENVTIECALL(CATIASchGRRFactory,ENVTIETypeLetter,ENVTIELetter)CreateGRRRouteEllipse(iDbXYSeedPt,oGRRRouteEllipse)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchGRRFactory,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchGRRFactory,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchGRRFactory,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchGRRFactory,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchGRRFactory,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchGRRFactory(classe)    TIECATIASchGRRFactory##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchGRRFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchGRRFactory, classe) \
 \
 \
CATImplementTIEMethods(CATIASchGRRFactory, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchGRRFactory, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchGRRFactory, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchGRRFactory, classe) \
 \
HRESULT __stdcall  TIECATIASchGRRFactory##classe::CreateGRRRoute(const CATSafeArrayVariant & iLDbLinePath, CATIASchGRRRoute *& oGRRRoute) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iLDbLinePath,&oGRRRoute); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateGRRRoute(iLDbLinePath,oGRRRoute); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iLDbLinePath,&oGRRRoute); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRFactory##classe::CreateGRRCntr(CATIASchGRRCntr *& oGRRCntr) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oGRRCntr); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateGRRCntr(oGRRCntr); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oGRRCntr); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRFactory##classe::CreateGRRGroup(CATIASchListOfObjects * iLPrimitive, CATIABase *& oGRRGroup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iLPrimitive,&oGRRGroup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateGRRGroup(iLPrimitive,oGRRGroup); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iLPrimitive,&oGRRGroup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRFactory##classe::CreateGRRZone(CATIASchListOfObjects * iLPrimitive, CATIASchGRRZone *& oGRRZone) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLPrimitive,&oGRRZone); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateGRRZone(iLPrimitive,oGRRZone); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLPrimitive,&oGRRZone); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRFactory##classe::CreateGRRRouteEllipse(const CATSafeArrayVariant & iDbXYSeedPt, CATIASchGRRRouteEllipse *& oGRRRouteEllipse) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iDbXYSeedPt,&oGRRRouteEllipse); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateGRRRouteEllipse(iDbXYSeedPt,oGRRRouteEllipse); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iDbXYSeedPt,&oGRRRouteEllipse); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRFactory##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRFactory##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRFactory##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRFactory##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRFactory##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchGRRFactory(classe) \
 \
 \
declare_TIE_CATIASchGRRFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchGRRFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchGRRFactory,"CATIASchGRRFactory",CATIASchGRRFactory::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchGRRFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchGRRFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchGRRFactory##classe(classe::MetaObject(),CATIASchGRRFactory::MetaObject(),(void *)CreateTIECATIASchGRRFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchGRRFactory(classe) \
 \
 \
declare_TIE_CATIASchGRRFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchGRRFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchGRRFactory,"CATIASchGRRFactory",CATIASchGRRFactory::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchGRRFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchGRRFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchGRRFactory##classe(classe::MetaObject(),CATIASchGRRFactory::MetaObject(),(void *)CreateTIECATIASchGRRFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchGRRFactory(classe) TIE_CATIASchGRRFactory(classe)
#else
#define BOA_CATIASchGRRFactory(classe) CATImplementBOA(CATIASchGRRFactory, classe)
#endif

#endif
