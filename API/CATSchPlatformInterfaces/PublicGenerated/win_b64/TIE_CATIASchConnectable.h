#ifndef __TIE_CATIASchConnectable
#define __TIE_CATIASchConnectable

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchConnectable.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchConnectable */
#define declare_TIE_CATIASchConnectable(classe) \
 \
 \
class TIECATIASchConnectable##classe : public CATIASchConnectable \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchConnectable, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall ListConnectors(CATIASchListOfBSTRs * iLCntrClassFilter, CATIASchGRR * iGRR, CATIASchListOfObjects *& oLCntrs); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchConnectable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall ListConnectors(CATIASchListOfBSTRs * iLCntrClassFilter, CATIASchGRR * iGRR, CATIASchListOfObjects *& oLCntrs); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchConnectable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::ListConnectors(CATIASchListOfBSTRs * iLCntrClassFilter, CATIASchGRR * iGRR, CATIASchListOfObjects *& oLCntrs) \
{ \
return (ENVTIECALL(CATIASchConnectable,ENVTIETypeLetter,ENVTIELetter)ListConnectors(iLCntrClassFilter,iGRR,oLCntrs)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchConnectable,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchConnectable,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchConnectable,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchConnectable,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchConnectable,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchConnectable(classe)    TIECATIASchConnectable##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchConnectable(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchConnectable, classe) \
 \
 \
CATImplementTIEMethods(CATIASchConnectable, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchConnectable, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchConnectable, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchConnectable, classe) \
 \
HRESULT __stdcall  TIECATIASchConnectable##classe::ListConnectors(CATIASchListOfBSTRs * iLCntrClassFilter, CATIASchGRR * iGRR, CATIASchListOfObjects *& oLCntrs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iLCntrClassFilter,&iGRR,&oLCntrs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListConnectors(iLCntrClassFilter,iGRR,oLCntrs); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iLCntrClassFilter,&iGRR,&oLCntrs); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchConnectable##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchConnectable##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchConnectable##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchConnectable##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchConnectable##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchConnectable(classe) \
 \
 \
declare_TIE_CATIASchConnectable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchConnectable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchConnectable,"CATIASchConnectable",CATIASchConnectable::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchConnectable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchConnectable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchConnectable##classe(classe::MetaObject(),CATIASchConnectable::MetaObject(),(void *)CreateTIECATIASchConnectable##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchConnectable(classe) \
 \
 \
declare_TIE_CATIASchConnectable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchConnectable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchConnectable,"CATIASchConnectable",CATIASchConnectable::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchConnectable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchConnectable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchConnectable##classe(classe::MetaObject(),CATIASchConnectable::MetaObject(),(void *)CreateTIECATIASchConnectable##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchConnectable(classe) TIE_CATIASchConnectable(classe)
#else
#define BOA_CATIASchConnectable(classe) CATImplementBOA(CATIASchConnectable, classe)
#endif

#endif
