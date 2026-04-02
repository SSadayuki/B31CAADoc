#ifndef __TIE_CATIATextStream
#define __TIE_CATIATextStream

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIATextStream.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIATextStream */
#define declare_TIE_CATIATextStream(classe) \
 \
 \
class TIECATIATextStream##classe : public CATIATextStream \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIATextStream, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_AtEndOfLine(CAT_VARIANT_BOOL & oAtEndOfLine); \
      virtual HRESULT __stdcall get_AtEndOfStream(CAT_VARIANT_BOOL & oAtEndOfStream); \
      virtual HRESULT __stdcall Close(); \
      virtual HRESULT __stdcall Read(CATLONG iNumOfChar, CATBSTR & oReadString); \
      virtual HRESULT __stdcall ReadLine(CATBSTR & oReadLine); \
      virtual HRESULT __stdcall Write(const CATBSTR & iWrittenString); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIATextStream(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_AtEndOfLine(CAT_VARIANT_BOOL & oAtEndOfLine); \
virtual HRESULT __stdcall get_AtEndOfStream(CAT_VARIANT_BOOL & oAtEndOfStream); \
virtual HRESULT __stdcall Close(); \
virtual HRESULT __stdcall Read(CATLONG iNumOfChar, CATBSTR & oReadString); \
virtual HRESULT __stdcall ReadLine(CATBSTR & oReadLine); \
virtual HRESULT __stdcall Write(const CATBSTR & iWrittenString); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIATextStream(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_AtEndOfLine(CAT_VARIANT_BOOL & oAtEndOfLine) \
{ \
return (ENVTIECALL(CATIATextStream,ENVTIETypeLetter,ENVTIELetter)get_AtEndOfLine(oAtEndOfLine)); \
} \
HRESULT __stdcall  ENVTIEName::get_AtEndOfStream(CAT_VARIANT_BOOL & oAtEndOfStream) \
{ \
return (ENVTIECALL(CATIATextStream,ENVTIETypeLetter,ENVTIELetter)get_AtEndOfStream(oAtEndOfStream)); \
} \
HRESULT __stdcall  ENVTIEName::Close() \
{ \
return (ENVTIECALL(CATIATextStream,ENVTIETypeLetter,ENVTIELetter)Close()); \
} \
HRESULT __stdcall  ENVTIEName::Read(CATLONG iNumOfChar, CATBSTR & oReadString) \
{ \
return (ENVTIECALL(CATIATextStream,ENVTIETypeLetter,ENVTIELetter)Read(iNumOfChar,oReadString)); \
} \
HRESULT __stdcall  ENVTIEName::ReadLine(CATBSTR & oReadLine) \
{ \
return (ENVTIECALL(CATIATextStream,ENVTIETypeLetter,ENVTIELetter)ReadLine(oReadLine)); \
} \
HRESULT __stdcall  ENVTIEName::Write(const CATBSTR & iWrittenString) \
{ \
return (ENVTIECALL(CATIATextStream,ENVTIETypeLetter,ENVTIELetter)Write(iWrittenString)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIATextStream,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIATextStream,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIATextStream,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIATextStream,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIATextStream,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIATextStream(classe)    TIECATIATextStream##classe


/* Common methods inside a TIE */
#define common_TIE_CATIATextStream(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIATextStream, classe) \
 \
 \
CATImplementTIEMethods(CATIATextStream, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIATextStream, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIATextStream, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIATextStream, classe) \
 \
HRESULT __stdcall  TIECATIATextStream##classe::get_AtEndOfLine(CAT_VARIANT_BOOL & oAtEndOfLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oAtEndOfLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AtEndOfLine(oAtEndOfLine); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oAtEndOfLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATextStream##classe::get_AtEndOfStream(CAT_VARIANT_BOOL & oAtEndOfStream) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oAtEndOfStream); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AtEndOfStream(oAtEndOfStream); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oAtEndOfStream); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATextStream##classe::Close() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Close(); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATextStream##classe::Read(CATLONG iNumOfChar, CATBSTR & oReadString) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iNumOfChar,&oReadString); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Read(iNumOfChar,oReadString); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iNumOfChar,&oReadString); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATextStream##classe::ReadLine(CATBSTR & oReadLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oReadLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReadLine(oReadLine); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oReadLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATextStream##classe::Write(const CATBSTR & iWrittenString) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iWrittenString); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Write(iWrittenString); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iWrittenString); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATextStream##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATextStream##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATextStream##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATextStream##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATextStream##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIATextStream(classe) \
 \
 \
declare_TIE_CATIATextStream(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATextStream##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATextStream,"CATIATextStream",CATIATextStream::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATextStream(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIATextStream, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATextStream##classe(classe::MetaObject(),CATIATextStream::MetaObject(),(void *)CreateTIECATIATextStream##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIATextStream(classe) \
 \
 \
declare_TIE_CATIATextStream(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATextStream##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATextStream,"CATIATextStream",CATIATextStream::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATextStream(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIATextStream, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATextStream##classe(classe::MetaObject(),CATIATextStream::MetaObject(),(void *)CreateTIECATIATextStream##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIATextStream(classe) TIE_CATIATextStream(classe)
#else
#define BOA_CATIATextStream(classe) CATImplementBOA(CATIATextStream, classe)
#endif

#endif
