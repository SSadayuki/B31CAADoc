#ifndef __TIE_CATIAPrinter
#define __TIE_CATIAPrinter

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPrinter.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPrinter */
#define declare_TIE_CATIAPrinter(classe) \
 \
 \
class TIECATIAPrinter##classe : public CATIAPrinter \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPrinter, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_DeviceName(CATBSTR & oDeviceName); \
      virtual HRESULT __stdcall get_PaperSize(CatPaperSize & oPaperSize); \
      virtual HRESULT __stdcall get_Orientation(CatPaperOrientation & orientation); \
      virtual HRESULT __stdcall get_PaperWidth(float & oPaperWidth); \
      virtual HRESULT __stdcall get_PaperHeight(float & oPaperHeight); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPrinter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_DeviceName(CATBSTR & oDeviceName); \
virtual HRESULT __stdcall get_PaperSize(CatPaperSize & oPaperSize); \
virtual HRESULT __stdcall get_Orientation(CatPaperOrientation & orientation); \
virtual HRESULT __stdcall get_PaperWidth(float & oPaperWidth); \
virtual HRESULT __stdcall get_PaperHeight(float & oPaperHeight); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPrinter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_DeviceName(CATBSTR & oDeviceName) \
{ \
return (ENVTIECALL(CATIAPrinter,ENVTIETypeLetter,ENVTIELetter)get_DeviceName(oDeviceName)); \
} \
HRESULT __stdcall  ENVTIEName::get_PaperSize(CatPaperSize & oPaperSize) \
{ \
return (ENVTIECALL(CATIAPrinter,ENVTIETypeLetter,ENVTIELetter)get_PaperSize(oPaperSize)); \
} \
HRESULT __stdcall  ENVTIEName::get_Orientation(CatPaperOrientation & orientation) \
{ \
return (ENVTIECALL(CATIAPrinter,ENVTIETypeLetter,ENVTIELetter)get_Orientation(orientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_PaperWidth(float & oPaperWidth) \
{ \
return (ENVTIECALL(CATIAPrinter,ENVTIETypeLetter,ENVTIELetter)get_PaperWidth(oPaperWidth)); \
} \
HRESULT __stdcall  ENVTIEName::get_PaperHeight(float & oPaperHeight) \
{ \
return (ENVTIECALL(CATIAPrinter,ENVTIETypeLetter,ENVTIELetter)get_PaperHeight(oPaperHeight)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPrinter,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPrinter,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPrinter,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPrinter,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPrinter,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPrinter(classe)    TIECATIAPrinter##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPrinter(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPrinter, classe) \
 \
 \
CATImplementTIEMethods(CATIAPrinter, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPrinter, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPrinter, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPrinter, classe) \
 \
HRESULT __stdcall  TIECATIAPrinter##classe::get_DeviceName(CATBSTR & oDeviceName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oDeviceName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DeviceName(oDeviceName); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oDeviceName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrinter##classe::get_PaperSize(CatPaperSize & oPaperSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oPaperSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PaperSize(oPaperSize); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oPaperSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrinter##classe::get_Orientation(CatPaperOrientation & orientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&orientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Orientation(orientation); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&orientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrinter##classe::get_PaperWidth(float & oPaperWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oPaperWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PaperWidth(oPaperWidth); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oPaperWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrinter##classe::get_PaperHeight(float & oPaperHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oPaperHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PaperHeight(oPaperHeight); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oPaperHeight); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPrinter##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPrinter##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPrinter##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPrinter##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPrinter##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPrinter(classe) \
 \
 \
declare_TIE_CATIAPrinter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPrinter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPrinter,"CATIAPrinter",CATIAPrinter::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPrinter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPrinter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPrinter##classe(classe::MetaObject(),CATIAPrinter::MetaObject(),(void *)CreateTIECATIAPrinter##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPrinter(classe) \
 \
 \
declare_TIE_CATIAPrinter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPrinter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPrinter,"CATIAPrinter",CATIAPrinter::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPrinter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPrinter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPrinter##classe(classe::MetaObject(),CATIAPrinter::MetaObject(),(void *)CreateTIECATIAPrinter##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPrinter(classe) TIE_CATIAPrinter(classe)
#else
#define BOA_CATIAPrinter(classe) CATImplementBOA(CATIAPrinter, classe)
#endif

#endif
