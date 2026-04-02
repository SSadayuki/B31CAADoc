#ifndef __TIE_CATIASchCntrGraphic
#define __TIE_CATIASchCntrGraphic

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchCntrGraphic.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchCntrGraphic */
#define declare_TIE_CATIASchCntrGraphic(classe) \
 \
 \
class TIECATIASchCntrGraphic##classe : public CATIASchCntrGraphic \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchCntrGraphic, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddGraphicalPrimitive(CATIASchGRR * iGRRToAdd, CATIASchGRR * iGRR); \
      virtual HRESULT __stdcall RemoveGraphicalPrimitive(CATIASchGRR * iGRRToRemove); \
      virtual HRESULT __stdcall ListGraphicalPrimitives(CATIASchListOfObjects *& oLGRR); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchCntrGraphic(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddGraphicalPrimitive(CATIASchGRR * iGRRToAdd, CATIASchGRR * iGRR); \
virtual HRESULT __stdcall RemoveGraphicalPrimitive(CATIASchGRR * iGRRToRemove); \
virtual HRESULT __stdcall ListGraphicalPrimitives(CATIASchListOfObjects *& oLGRR); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchCntrGraphic(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddGraphicalPrimitive(CATIASchGRR * iGRRToAdd, CATIASchGRR * iGRR) \
{ \
return (ENVTIECALL(CATIASchCntrGraphic,ENVTIETypeLetter,ENVTIELetter)AddGraphicalPrimitive(iGRRToAdd,iGRR)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveGraphicalPrimitive(CATIASchGRR * iGRRToRemove) \
{ \
return (ENVTIECALL(CATIASchCntrGraphic,ENVTIETypeLetter,ENVTIELetter)RemoveGraphicalPrimitive(iGRRToRemove)); \
} \
HRESULT __stdcall  ENVTIEName::ListGraphicalPrimitives(CATIASchListOfObjects *& oLGRR) \
{ \
return (ENVTIECALL(CATIASchCntrGraphic,ENVTIETypeLetter,ENVTIELetter)ListGraphicalPrimitives(oLGRR)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchCntrGraphic,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchCntrGraphic,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchCntrGraphic,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchCntrGraphic,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchCntrGraphic,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchCntrGraphic(classe)    TIECATIASchCntrGraphic##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchCntrGraphic(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchCntrGraphic, classe) \
 \
 \
CATImplementTIEMethods(CATIASchCntrGraphic, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchCntrGraphic, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchCntrGraphic, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchCntrGraphic, classe) \
 \
HRESULT __stdcall  TIECATIASchCntrGraphic##classe::AddGraphicalPrimitive(CATIASchGRR * iGRRToAdd, CATIASchGRR * iGRR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iGRRToAdd,&iGRR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddGraphicalPrimitive(iGRRToAdd,iGRR); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iGRRToAdd,&iGRR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCntrGraphic##classe::RemoveGraphicalPrimitive(CATIASchGRR * iGRRToRemove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iGRRToRemove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveGraphicalPrimitive(iGRRToRemove); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iGRRToRemove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCntrGraphic##classe::ListGraphicalPrimitives(CATIASchListOfObjects *& oLGRR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oLGRR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListGraphicalPrimitives(oLGRR); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oLGRR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCntrGraphic##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCntrGraphic##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCntrGraphic##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCntrGraphic##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCntrGraphic##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchCntrGraphic(classe) \
 \
 \
declare_TIE_CATIASchCntrGraphic(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchCntrGraphic##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchCntrGraphic,"CATIASchCntrGraphic",CATIASchCntrGraphic::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchCntrGraphic(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchCntrGraphic, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchCntrGraphic##classe(classe::MetaObject(),CATIASchCntrGraphic::MetaObject(),(void *)CreateTIECATIASchCntrGraphic##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchCntrGraphic(classe) \
 \
 \
declare_TIE_CATIASchCntrGraphic(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchCntrGraphic##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchCntrGraphic,"CATIASchCntrGraphic",CATIASchCntrGraphic::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchCntrGraphic(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchCntrGraphic, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchCntrGraphic##classe(classe::MetaObject(),CATIASchCntrGraphic::MetaObject(),(void *)CreateTIECATIASchCntrGraphic##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchCntrGraphic(classe) TIE_CATIASchCntrGraphic(classe)
#else
#define BOA_CATIASchCntrGraphic(classe) CATImplementBOA(CATIASchCntrGraphic, classe)
#endif

#endif
