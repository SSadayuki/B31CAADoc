#ifndef __TIE_CATIADrawingThread
#define __TIE_CATIADrawingThread

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADrawingThread.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADrawingThread */
#define declare_TIE_CATIADrawingThread(classe) \
 \
 \
class TIECATIADrawingThread##classe : public CATIADrawingThread \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADrawingThread, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall IsLinkedTo(CatThreadLinkedTo & oLinkedType); \
      virtual HRESULT __stdcall get_Type(CatThreadType & oThreadType); \
      virtual HRESULT __stdcall put_Type(CatThreadType iThreadType); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADrawingThread(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall IsLinkedTo(CatThreadLinkedTo & oLinkedType); \
virtual HRESULT __stdcall get_Type(CatThreadType & oThreadType); \
virtual HRESULT __stdcall put_Type(CatThreadType iThreadType); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADrawingThread(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::IsLinkedTo(CatThreadLinkedTo & oLinkedType) \
{ \
return (ENVTIECALL(CATIADrawingThread,ENVTIETypeLetter,ENVTIELetter)IsLinkedTo(oLinkedType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Type(CatThreadType & oThreadType) \
{ \
return (ENVTIECALL(CATIADrawingThread,ENVTIETypeLetter,ENVTIELetter)get_Type(oThreadType)); \
} \
HRESULT __stdcall  ENVTIEName::put_Type(CatThreadType iThreadType) \
{ \
return (ENVTIECALL(CATIADrawingThread,ENVTIETypeLetter,ENVTIELetter)put_Type(iThreadType)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADrawingThread,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADrawingThread,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingThread,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingThread,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADrawingThread,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADrawingThread(classe)    TIECATIADrawingThread##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADrawingThread(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADrawingThread, classe) \
 \
 \
CATImplementTIEMethods(CATIADrawingThread, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADrawingThread, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADrawingThread, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADrawingThread, classe) \
 \
HRESULT __stdcall  TIECATIADrawingThread##classe::IsLinkedTo(CatThreadLinkedTo & oLinkedType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oLinkedType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsLinkedTo(oLinkedType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oLinkedType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingThread##classe::get_Type(CatThreadType & oThreadType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oThreadType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oThreadType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oThreadType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingThread##classe::put_Type(CatThreadType iThreadType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iThreadType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Type(iThreadType); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iThreadType); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingThread##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingThread##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingThread##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingThread##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingThread##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADrawingThread(classe) \
 \
 \
declare_TIE_CATIADrawingThread(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingThread##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingThread,"CATIADrawingThread",CATIADrawingThread::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingThread(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADrawingThread, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingThread##classe(classe::MetaObject(),CATIADrawingThread::MetaObject(),(void *)CreateTIECATIADrawingThread##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADrawingThread(classe) \
 \
 \
declare_TIE_CATIADrawingThread(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingThread##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingThread,"CATIADrawingThread",CATIADrawingThread::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingThread(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADrawingThread, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingThread##classe(classe::MetaObject(),CATIADrawingThread::MetaObject(),(void *)CreateTIECATIADrawingThread##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADrawingThread(classe) TIE_CATIADrawingThread(classe)
#else
#define BOA_CATIADrawingThread(classe) CATImplementBOA(CATIADrawingThread, classe)
#endif

#endif
