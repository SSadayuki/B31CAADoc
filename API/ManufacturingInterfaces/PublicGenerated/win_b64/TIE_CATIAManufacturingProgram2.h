#ifndef __TIE_CATIAManufacturingProgram2
#define __TIE_CATIAManufacturingProgram2

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAManufacturingProgram2.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAManufacturingProgram2 */
#define declare_TIE_CATIAManufacturingProgram2(classe) \
 \
 \
class TIECATIAManufacturingProgram2##classe : public CATIAManufacturingProgram2 \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAManufacturingProgram2, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AppendOperationBefore(CATIAManufacturingOperation * iManufacturingOperation, const CATBSTR & type, short AutoSequence, CATIAManufacturingOperation *& oManufacturingOperation); \
      virtual HRESULT __stdcall AppendOperationAfter(CATIAManufacturingOperation * iManufacturingOperation, const CATBSTR & type, short AutoSequence, CATIAManufacturingOperation *& oManufacturingOperation); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAManufacturingProgram2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AppendOperationBefore(CATIAManufacturingOperation * iManufacturingOperation, const CATBSTR & type, short AutoSequence, CATIAManufacturingOperation *& oManufacturingOperation); \
virtual HRESULT __stdcall AppendOperationAfter(CATIAManufacturingOperation * iManufacturingOperation, const CATBSTR & type, short AutoSequence, CATIAManufacturingOperation *& oManufacturingOperation); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAManufacturingProgram2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AppendOperationBefore(CATIAManufacturingOperation * iManufacturingOperation, const CATBSTR & type, short AutoSequence, CATIAManufacturingOperation *& oManufacturingOperation) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram2,ENVTIETypeLetter,ENVTIELetter)AppendOperationBefore(iManufacturingOperation,type,AutoSequence,oManufacturingOperation)); \
} \
HRESULT __stdcall  ENVTIEName::AppendOperationAfter(CATIAManufacturingOperation * iManufacturingOperation, const CATBSTR & type, short AutoSequence, CATIAManufacturingOperation *& oManufacturingOperation) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram2,ENVTIETypeLetter,ENVTIELetter)AppendOperationAfter(iManufacturingOperation,type,AutoSequence,oManufacturingOperation)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram2,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram2,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram2,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram2,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram2,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAManufacturingProgram2(classe)    TIECATIAManufacturingProgram2##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAManufacturingProgram2(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAManufacturingProgram2, classe) \
 \
 \
CATImplementTIEMethods(CATIAManufacturingProgram2, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAManufacturingProgram2, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAManufacturingProgram2, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAManufacturingProgram2, classe) \
 \
HRESULT __stdcall  TIECATIAManufacturingProgram2##classe::AppendOperationBefore(CATIAManufacturingOperation * iManufacturingOperation, const CATBSTR & type, short AutoSequence, CATIAManufacturingOperation *& oManufacturingOperation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iManufacturingOperation,&type,&AutoSequence,&oManufacturingOperation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendOperationBefore(iManufacturingOperation,type,AutoSequence,oManufacturingOperation); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iManufacturingOperation,&type,&AutoSequence,&oManufacturingOperation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram2##classe::AppendOperationAfter(CATIAManufacturingOperation * iManufacturingOperation, const CATBSTR & type, short AutoSequence, CATIAManufacturingOperation *& oManufacturingOperation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iManufacturingOperation,&type,&AutoSequence,&oManufacturingOperation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendOperationAfter(iManufacturingOperation,type,AutoSequence,oManufacturingOperation); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iManufacturingOperation,&type,&AutoSequence,&oManufacturingOperation); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingProgram2##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingProgram2##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingProgram2##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingProgram2##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingProgram2##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAManufacturingProgram2(classe) \
 \
 \
declare_TIE_CATIAManufacturingProgram2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingProgram2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingProgram2,"CATIAManufacturingProgram2",CATIAManufacturingProgram2::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingProgram2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAManufacturingProgram2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingProgram2##classe(classe::MetaObject(),CATIAManufacturingProgram2::MetaObject(),(void *)CreateTIECATIAManufacturingProgram2##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAManufacturingProgram2(classe) \
 \
 \
declare_TIE_CATIAManufacturingProgram2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingProgram2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingProgram2,"CATIAManufacturingProgram2",CATIAManufacturingProgram2::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingProgram2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAManufacturingProgram2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingProgram2##classe(classe::MetaObject(),CATIAManufacturingProgram2::MetaObject(),(void *)CreateTIECATIAManufacturingProgram2##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAManufacturingProgram2(classe) TIE_CATIAManufacturingProgram2(classe)
#else
#define BOA_CATIAManufacturingProgram2(classe) CATImplementBOA(CATIAManufacturingProgram2, classe)
#endif

#endif
