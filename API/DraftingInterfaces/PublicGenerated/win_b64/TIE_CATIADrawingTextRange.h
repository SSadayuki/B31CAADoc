#ifndef __TIE_CATIADrawingTextRange
#define __TIE_CATIADrawingTextRange

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADrawingTextRange.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADrawingTextRange */
#define declare_TIE_CATIADrawingTextRange(classe) \
 \
 \
class TIECATIADrawingTextRange##classe : public CATIADrawingTextRange \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADrawingTextRange, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Start(CATLONG & oStart); \
      virtual HRESULT __stdcall get_Length(CATLONG & oLength); \
      virtual HRESULT __stdcall get_Text(CATBSTR & oString); \
      virtual HRESULT __stdcall put_Text(const CATBSTR & iString); \
      virtual HRESULT __stdcall InsertBefore(const CATBSTR & iString); \
      virtual HRESULT __stdcall InsertAfter(const CATBSTR & iString); \
      virtual HRESULT __stdcall get_TextProperties(CATIADrawingTextProperties *& oTextProp); \
      virtual HRESULT __stdcall GetTextRange(CATLONG iStart, CATLONG iEnd, CATIADrawingTextRange *& oTextRange); \
};



#define ENVTIEdeclare_CATIADrawingTextRange(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Start(CATLONG & oStart); \
virtual HRESULT __stdcall get_Length(CATLONG & oLength); \
virtual HRESULT __stdcall get_Text(CATBSTR & oString); \
virtual HRESULT __stdcall put_Text(const CATBSTR & iString); \
virtual HRESULT __stdcall InsertBefore(const CATBSTR & iString); \
virtual HRESULT __stdcall InsertAfter(const CATBSTR & iString); \
virtual HRESULT __stdcall get_TextProperties(CATIADrawingTextProperties *& oTextProp); \
virtual HRESULT __stdcall GetTextRange(CATLONG iStart, CATLONG iEnd, CATIADrawingTextRange *& oTextRange); \


#define ENVTIEdefine_CATIADrawingTextRange(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Start(CATLONG & oStart) \
{ \
return (ENVTIECALL(CATIADrawingTextRange,ENVTIETypeLetter,ENVTIELetter)get_Start(oStart)); \
} \
HRESULT __stdcall  ENVTIEName::get_Length(CATLONG & oLength) \
{ \
return (ENVTIECALL(CATIADrawingTextRange,ENVTIETypeLetter,ENVTIELetter)get_Length(oLength)); \
} \
HRESULT __stdcall  ENVTIEName::get_Text(CATBSTR & oString) \
{ \
return (ENVTIECALL(CATIADrawingTextRange,ENVTIETypeLetter,ENVTIELetter)get_Text(oString)); \
} \
HRESULT __stdcall  ENVTIEName::put_Text(const CATBSTR & iString) \
{ \
return (ENVTIECALL(CATIADrawingTextRange,ENVTIETypeLetter,ENVTIELetter)put_Text(iString)); \
} \
HRESULT __stdcall  ENVTIEName::InsertBefore(const CATBSTR & iString) \
{ \
return (ENVTIECALL(CATIADrawingTextRange,ENVTIETypeLetter,ENVTIELetter)InsertBefore(iString)); \
} \
HRESULT __stdcall  ENVTIEName::InsertAfter(const CATBSTR & iString) \
{ \
return (ENVTIECALL(CATIADrawingTextRange,ENVTIETypeLetter,ENVTIELetter)InsertAfter(iString)); \
} \
HRESULT __stdcall  ENVTIEName::get_TextProperties(CATIADrawingTextProperties *& oTextProp) \
{ \
return (ENVTIECALL(CATIADrawingTextRange,ENVTIETypeLetter,ENVTIELetter)get_TextProperties(oTextProp)); \
} \
HRESULT __stdcall  ENVTIEName::GetTextRange(CATLONG iStart, CATLONG iEnd, CATIADrawingTextRange *& oTextRange) \
{ \
return (ENVTIECALL(CATIADrawingTextRange,ENVTIETypeLetter,ENVTIELetter)GetTextRange(iStart,iEnd,oTextRange)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADrawingTextRange(classe)    TIECATIADrawingTextRange##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADrawingTextRange(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADrawingTextRange, classe) \
 \
 \
CATImplementTIEMethods(CATIADrawingTextRange, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADrawingTextRange, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADrawingTextRange, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADrawingTextRange, classe) \
 \
HRESULT __stdcall  TIECATIADrawingTextRange##classe::get_Start(CATLONG & oStart) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oStart); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Start(oStart); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oStart); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextRange##classe::get_Length(CATLONG & oLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Length(oLength); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextRange##classe::get_Text(CATBSTR & oString) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oString); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Text(oString); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oString); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextRange##classe::put_Text(const CATBSTR & iString) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iString); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Text(iString); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iString); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextRange##classe::InsertBefore(const CATBSTR & iString) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iString); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InsertBefore(iString); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iString); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextRange##classe::InsertAfter(const CATBSTR & iString) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iString); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InsertAfter(iString); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iString); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextRange##classe::get_TextProperties(CATIADrawingTextProperties *& oTextProp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oTextProp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TextProperties(oTextProp); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oTextProp); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextRange##classe::GetTextRange(CATLONG iStart, CATLONG iEnd, CATIADrawingTextRange *& oTextRange) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iStart,&iEnd,&oTextRange); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTextRange(iStart,iEnd,oTextRange); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iStart,&iEnd,&oTextRange); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADrawingTextRange(classe) \
 \
 \
declare_TIE_CATIADrawingTextRange(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingTextRange##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingTextRange,"CATIADrawingTextRange",CATIADrawingTextRange::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingTextRange(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADrawingTextRange, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingTextRange##classe(classe::MetaObject(),CATIADrawingTextRange::MetaObject(),(void *)CreateTIECATIADrawingTextRange##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADrawingTextRange(classe) \
 \
 \
declare_TIE_CATIADrawingTextRange(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingTextRange##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingTextRange,"CATIADrawingTextRange",CATIADrawingTextRange::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingTextRange(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADrawingTextRange, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingTextRange##classe(classe::MetaObject(),CATIADrawingTextRange::MetaObject(),(void *)CreateTIECATIADrawingTextRange##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADrawingTextRange(classe) TIE_CATIADrawingTextRange(classe)
#else
#define BOA_CATIADrawingTextRange(classe) CATImplementBOA(CATIADrawingTextRange, classe)
#endif

#endif
