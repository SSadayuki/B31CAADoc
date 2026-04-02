#ifndef __TIE_CATIAPlantReviewWorkBench
#define __TIE_CATIAPlantReviewWorkBench

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPlantReviewWorkBench.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPlantReviewWorkBench */
#define declare_TIE_CATIAPlantReviewWorkBench(classe) \
 \
 \
class TIECATIAPlantReviewWorkBench##classe : public CATIAPlantReviewWorkBench \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPlantReviewWorkBench, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall SelectByName(const CATBSTR & iObjectName); \
      virtual HRESULT __stdcall SelectByType(const CATBSTR & iObjectType); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPlantReviewWorkBench(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall SelectByName(const CATBSTR & iObjectName); \
virtual HRESULT __stdcall SelectByType(const CATBSTR & iObjectType); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPlantReviewWorkBench(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::SelectByName(const CATBSTR & iObjectName) \
{ \
return (ENVTIECALL(CATIAPlantReviewWorkBench,ENVTIETypeLetter,ENVTIELetter)SelectByName(iObjectName)); \
} \
HRESULT __stdcall  ENVTIEName::SelectByType(const CATBSTR & iObjectType) \
{ \
return (ENVTIECALL(CATIAPlantReviewWorkBench,ENVTIETypeLetter,ENVTIELetter)SelectByType(iObjectType)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPlantReviewWorkBench,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPlantReviewWorkBench,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPlantReviewWorkBench,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPlantReviewWorkBench,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPlantReviewWorkBench,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPlantReviewWorkBench(classe)    TIECATIAPlantReviewWorkBench##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPlantReviewWorkBench(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPlantReviewWorkBench, classe) \
 \
 \
CATImplementTIEMethods(CATIAPlantReviewWorkBench, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPlantReviewWorkBench, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPlantReviewWorkBench, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPlantReviewWorkBench, classe) \
 \
HRESULT __stdcall  TIECATIAPlantReviewWorkBench##classe::SelectByName(const CATBSTR & iObjectName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iObjectName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SelectByName(iObjectName); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iObjectName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPlantReviewWorkBench##classe::SelectByType(const CATBSTR & iObjectType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iObjectType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SelectByType(iObjectType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iObjectType); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPlantReviewWorkBench##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPlantReviewWorkBench##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPlantReviewWorkBench##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPlantReviewWorkBench##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPlantReviewWorkBench##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPlantReviewWorkBench(classe) \
 \
 \
declare_TIE_CATIAPlantReviewWorkBench(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPlantReviewWorkBench##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPlantReviewWorkBench,"CATIAPlantReviewWorkBench",CATIAPlantReviewWorkBench::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPlantReviewWorkBench(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPlantReviewWorkBench, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPlantReviewWorkBench##classe(classe::MetaObject(),CATIAPlantReviewWorkBench::MetaObject(),(void *)CreateTIECATIAPlantReviewWorkBench##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPlantReviewWorkBench(classe) \
 \
 \
declare_TIE_CATIAPlantReviewWorkBench(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPlantReviewWorkBench##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPlantReviewWorkBench,"CATIAPlantReviewWorkBench",CATIAPlantReviewWorkBench::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPlantReviewWorkBench(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPlantReviewWorkBench, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPlantReviewWorkBench##classe(classe::MetaObject(),CATIAPlantReviewWorkBench::MetaObject(),(void *)CreateTIECATIAPlantReviewWorkBench##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPlantReviewWorkBench(classe) TIE_CATIAPlantReviewWorkBench(classe)
#else
#define BOA_CATIAPlantReviewWorkBench(classe) CATImplementBOA(CATIAPlantReviewWorkBench, classe)
#endif

#endif
