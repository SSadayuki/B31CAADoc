#ifndef __TIE_CATIASchRouteGraphic
#define __TIE_CATIASchRouteGraphic

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchRouteGraphic.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchRouteGraphic */
#define declare_TIE_CATIASchRouteGraphic(classe) \
 \
 \
class TIECATIASchRouteGraphic##classe : public CATIASchRouteGraphic \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchRouteGraphic, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddGraphicalPrimitive(CATIASchGRRRoute * iGRRToAdd); \
      virtual HRESULT __stdcall RemoveGraphicalPrimitive(CATIASchGRRRoute * iGRRToRemove); \
      virtual HRESULT __stdcall ListGraphicalPrimitives(CATIASchListOfObjects *& oLGRR); \
      virtual HRESULT __stdcall RemoveAllGraphicalPrimitives(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchRouteGraphic(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddGraphicalPrimitive(CATIASchGRRRoute * iGRRToAdd); \
virtual HRESULT __stdcall RemoveGraphicalPrimitive(CATIASchGRRRoute * iGRRToRemove); \
virtual HRESULT __stdcall ListGraphicalPrimitives(CATIASchListOfObjects *& oLGRR); \
virtual HRESULT __stdcall RemoveAllGraphicalPrimitives(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchRouteGraphic(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddGraphicalPrimitive(CATIASchGRRRoute * iGRRToAdd) \
{ \
return (ENVTIECALL(CATIASchRouteGraphic,ENVTIETypeLetter,ENVTIELetter)AddGraphicalPrimitive(iGRRToAdd)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveGraphicalPrimitive(CATIASchGRRRoute * iGRRToRemove) \
{ \
return (ENVTIECALL(CATIASchRouteGraphic,ENVTIETypeLetter,ENVTIELetter)RemoveGraphicalPrimitive(iGRRToRemove)); \
} \
HRESULT __stdcall  ENVTIEName::ListGraphicalPrimitives(CATIASchListOfObjects *& oLGRR) \
{ \
return (ENVTIECALL(CATIASchRouteGraphic,ENVTIETypeLetter,ENVTIELetter)ListGraphicalPrimitives(oLGRR)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllGraphicalPrimitives() \
{ \
return (ENVTIECALL(CATIASchRouteGraphic,ENVTIETypeLetter,ENVTIELetter)RemoveAllGraphicalPrimitives()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchRouteGraphic,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchRouteGraphic,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchRouteGraphic,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchRouteGraphic,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchRouteGraphic,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchRouteGraphic(classe)    TIECATIASchRouteGraphic##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchRouteGraphic(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchRouteGraphic, classe) \
 \
 \
CATImplementTIEMethods(CATIASchRouteGraphic, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchRouteGraphic, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchRouteGraphic, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchRouteGraphic, classe) \
 \
HRESULT __stdcall  TIECATIASchRouteGraphic##classe::AddGraphicalPrimitive(CATIASchGRRRoute * iGRRToAdd) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iGRRToAdd); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddGraphicalPrimitive(iGRRToAdd); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iGRRToAdd); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchRouteGraphic##classe::RemoveGraphicalPrimitive(CATIASchGRRRoute * iGRRToRemove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iGRRToRemove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveGraphicalPrimitive(iGRRToRemove); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iGRRToRemove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchRouteGraphic##classe::ListGraphicalPrimitives(CATIASchListOfObjects *& oLGRR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oLGRR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListGraphicalPrimitives(oLGRR); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oLGRR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchRouteGraphic##classe::RemoveAllGraphicalPrimitives() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllGraphicalPrimitives(); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchRouteGraphic##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchRouteGraphic##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchRouteGraphic##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchRouteGraphic##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchRouteGraphic##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchRouteGraphic(classe) \
 \
 \
declare_TIE_CATIASchRouteGraphic(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchRouteGraphic##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchRouteGraphic,"CATIASchRouteGraphic",CATIASchRouteGraphic::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchRouteGraphic(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchRouteGraphic, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchRouteGraphic##classe(classe::MetaObject(),CATIASchRouteGraphic::MetaObject(),(void *)CreateTIECATIASchRouteGraphic##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchRouteGraphic(classe) \
 \
 \
declare_TIE_CATIASchRouteGraphic(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchRouteGraphic##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchRouteGraphic,"CATIASchRouteGraphic",CATIASchRouteGraphic::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchRouteGraphic(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchRouteGraphic, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchRouteGraphic##classe(classe::MetaObject(),CATIASchRouteGraphic::MetaObject(),(void *)CreateTIECATIASchRouteGraphic##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchRouteGraphic(classe) TIE_CATIASchRouteGraphic(classe)
#else
#define BOA_CATIASchRouteGraphic(classe) CATImplementBOA(CATIASchRouteGraphic, classe)
#endif

#endif
