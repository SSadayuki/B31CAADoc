#ifndef __TIE_CATIAPspTempListFactory
#define __TIE_CATIAPspTempListFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPspTempListFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPspTempListFactory */
#define declare_TIE_CATIAPspTempListFactory(classe) \
 \
 \
class TIECATIAPspTempListFactory##classe : public CATIAPspTempListFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPspTempListFactory, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall CreateListOfObjects(CATIAPspListOfObjects *& oLObject); \
      virtual HRESULT __stdcall CreateListOfBSTRs(CATIAPspListOfBSTRs *& oLBSTR); \
      virtual HRESULT __stdcall CreateListOfDoubles(CATIAPspListOfDoubles *& oLDb); \
      virtual HRESULT __stdcall CreateListOfLongs(CATIAPspListOfLongs *& oLLong); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPspTempListFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall CreateListOfObjects(CATIAPspListOfObjects *& oLObject); \
virtual HRESULT __stdcall CreateListOfBSTRs(CATIAPspListOfBSTRs *& oLBSTR); \
virtual HRESULT __stdcall CreateListOfDoubles(CATIAPspListOfDoubles *& oLDb); \
virtual HRESULT __stdcall CreateListOfLongs(CATIAPspListOfLongs *& oLLong); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPspTempListFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::CreateListOfObjects(CATIAPspListOfObjects *& oLObject) \
{ \
return (ENVTIECALL(CATIAPspTempListFactory,ENVTIETypeLetter,ENVTIELetter)CreateListOfObjects(oLObject)); \
} \
HRESULT __stdcall  ENVTIEName::CreateListOfBSTRs(CATIAPspListOfBSTRs *& oLBSTR) \
{ \
return (ENVTIECALL(CATIAPspTempListFactory,ENVTIETypeLetter,ENVTIELetter)CreateListOfBSTRs(oLBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::CreateListOfDoubles(CATIAPspListOfDoubles *& oLDb) \
{ \
return (ENVTIECALL(CATIAPspTempListFactory,ENVTIETypeLetter,ENVTIELetter)CreateListOfDoubles(oLDb)); \
} \
HRESULT __stdcall  ENVTIEName::CreateListOfLongs(CATIAPspListOfLongs *& oLLong) \
{ \
return (ENVTIECALL(CATIAPspTempListFactory,ENVTIETypeLetter,ENVTIELetter)CreateListOfLongs(oLLong)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPspTempListFactory,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPspTempListFactory,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspTempListFactory,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspTempListFactory,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPspTempListFactory,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPspTempListFactory(classe)    TIECATIAPspTempListFactory##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPspTempListFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPspTempListFactory, classe) \
 \
 \
CATImplementTIEMethods(CATIAPspTempListFactory, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPspTempListFactory, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPspTempListFactory, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPspTempListFactory, classe) \
 \
HRESULT __stdcall  TIECATIAPspTempListFactory##classe::CreateListOfObjects(CATIAPspListOfObjects *& oLObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oLObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateListOfObjects(oLObject); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oLObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspTempListFactory##classe::CreateListOfBSTRs(CATIAPspListOfBSTRs *& oLBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oLBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateListOfBSTRs(oLBSTR); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oLBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspTempListFactory##classe::CreateListOfDoubles(CATIAPspListOfDoubles *& oLDb) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oLDb); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateListOfDoubles(oLDb); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oLDb); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspTempListFactory##classe::CreateListOfLongs(CATIAPspListOfLongs *& oLLong) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oLLong); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateListOfLongs(oLLong); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oLLong); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspTempListFactory##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspTempListFactory##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspTempListFactory##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspTempListFactory##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspTempListFactory##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPspTempListFactory(classe) \
 \
 \
declare_TIE_CATIAPspTempListFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspTempListFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspTempListFactory,"CATIAPspTempListFactory",CATIAPspTempListFactory::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspTempListFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPspTempListFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspTempListFactory##classe(classe::MetaObject(),CATIAPspTempListFactory::MetaObject(),(void *)CreateTIECATIAPspTempListFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPspTempListFactory(classe) \
 \
 \
declare_TIE_CATIAPspTempListFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspTempListFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspTempListFactory,"CATIAPspTempListFactory",CATIAPspTempListFactory::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspTempListFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPspTempListFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspTempListFactory##classe(classe::MetaObject(),CATIAPspTempListFactory::MetaObject(),(void *)CreateTIECATIAPspTempListFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPspTempListFactory(classe) TIE_CATIAPspTempListFactory(classe)
#else
#define BOA_CATIAPspTempListFactory(classe) CATImplementBOA(CATIAPspTempListFactory, classe)
#endif

#endif
