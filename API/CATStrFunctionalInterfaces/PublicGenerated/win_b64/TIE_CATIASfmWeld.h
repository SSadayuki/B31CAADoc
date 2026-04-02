#ifndef __TIE_CATIASfmWeld
#define __TIE_CATIASfmWeld

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASfmWeld.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASfmWeld */
#define declare_TIE_CATIASfmWeld(classe) \
 \
 \
class TIECATIASfmWeld##classe : public CATIASfmWeld \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASfmWeld, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_WeldType(CATBSTR & oWeldType); \
      virtual HRESULT __stdcall get_AddedMaterial(CATBSTR & oAddedMaterial); \
      virtual HRESULT __stdcall get_FitUp(CATBSTR & oFitUp); \
      virtual HRESULT __stdcall get_EdgePreparation(CATBSTR & oEdgePreparation); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASfmWeld(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_WeldType(CATBSTR & oWeldType); \
virtual HRESULT __stdcall get_AddedMaterial(CATBSTR & oAddedMaterial); \
virtual HRESULT __stdcall get_FitUp(CATBSTR & oFitUp); \
virtual HRESULT __stdcall get_EdgePreparation(CATBSTR & oEdgePreparation); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASfmWeld(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_WeldType(CATBSTR & oWeldType) \
{ \
return (ENVTIECALL(CATIASfmWeld,ENVTIETypeLetter,ENVTIELetter)get_WeldType(oWeldType)); \
} \
HRESULT __stdcall  ENVTIEName::get_AddedMaterial(CATBSTR & oAddedMaterial) \
{ \
return (ENVTIECALL(CATIASfmWeld,ENVTIETypeLetter,ENVTIELetter)get_AddedMaterial(oAddedMaterial)); \
} \
HRESULT __stdcall  ENVTIEName::get_FitUp(CATBSTR & oFitUp) \
{ \
return (ENVTIECALL(CATIASfmWeld,ENVTIETypeLetter,ENVTIELetter)get_FitUp(oFitUp)); \
} \
HRESULT __stdcall  ENVTIEName::get_EdgePreparation(CATBSTR & oEdgePreparation) \
{ \
return (ENVTIECALL(CATIASfmWeld,ENVTIETypeLetter,ENVTIELetter)get_EdgePreparation(oEdgePreparation)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASfmWeld,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASfmWeld,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmWeld,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmWeld,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASfmWeld,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASfmWeld(classe)    TIECATIASfmWeld##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASfmWeld(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASfmWeld, classe) \
 \
 \
CATImplementTIEMethods(CATIASfmWeld, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASfmWeld, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASfmWeld, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASfmWeld, classe) \
 \
HRESULT __stdcall  TIECATIASfmWeld##classe::get_WeldType(CATBSTR & oWeldType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oWeldType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_WeldType(oWeldType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oWeldType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmWeld##classe::get_AddedMaterial(CATBSTR & oAddedMaterial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oAddedMaterial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AddedMaterial(oAddedMaterial); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oAddedMaterial); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmWeld##classe::get_FitUp(CATBSTR & oFitUp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oFitUp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FitUp(oFitUp); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oFitUp); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmWeld##classe::get_EdgePreparation(CATBSTR & oEdgePreparation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oEdgePreparation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EdgePreparation(oEdgePreparation); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oEdgePreparation); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmWeld##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmWeld##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmWeld##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmWeld##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmWeld##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASfmWeld(classe) \
 \
 \
declare_TIE_CATIASfmWeld(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmWeld##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmWeld,"CATIASfmWeld",CATIASfmWeld::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmWeld(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASfmWeld, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmWeld##classe(classe::MetaObject(),CATIASfmWeld::MetaObject(),(void *)CreateTIECATIASfmWeld##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASfmWeld(classe) \
 \
 \
declare_TIE_CATIASfmWeld(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmWeld##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmWeld,"CATIASfmWeld",CATIASfmWeld::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmWeld(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASfmWeld, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmWeld##classe(classe::MetaObject(),CATIASfmWeld::MetaObject(),(void *)CreateTIECATIASfmWeld##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASfmWeld(classe) TIE_CATIASfmWeld(classe)
#else
#define BOA_CATIASfmWeld(classe) CATImplementBOA(CATIASfmWeld, classe)
#endif

#endif
