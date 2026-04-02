#ifndef __TIE_CATIASolidCombine
#define __TIE_CATIASolidCombine

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASolidCombine.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASolidCombine */
#define declare_TIE_CATIASolidCombine(classe) \
 \
 \
class TIECATIASolidCombine##classe : public CATIASolidCombine \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASolidCombine, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_FirstComponentProfile(CATIAReference *& oFirstComponentProfile); \
      virtual HRESULT __stdcall put_FirstComponentProfile(CATIAReference * iFirstComponentProfile); \
      virtual HRESULT __stdcall get_SecondComponentProfile(CATIAReference *& oSecondComponentProfile); \
      virtual HRESULT __stdcall put_SecondComponentProfile(CATIAReference * iSecondComponentProfile); \
      virtual HRESULT __stdcall get_FirstComponentDirection(CATIAReference *& oFirstComponentDirection); \
      virtual HRESULT __stdcall put_FirstComponentDirection(CATIAReference * iFirstComponentDirection); \
      virtual HRESULT __stdcall get_SecondComponentDirection(CATIAReference *& oSecondComponentDirection); \
      virtual HRESULT __stdcall put_SecondComponentDirection(CATIAReference * iSecondComponentDirection); \
      virtual HRESULT __stdcall get_Sketch(CATIASketch *& oSketch); \
      virtual HRESULT __stdcall SetProfileElement(CATIAReference * iProfileElement); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASolidCombine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_FirstComponentProfile(CATIAReference *& oFirstComponentProfile); \
virtual HRESULT __stdcall put_FirstComponentProfile(CATIAReference * iFirstComponentProfile); \
virtual HRESULT __stdcall get_SecondComponentProfile(CATIAReference *& oSecondComponentProfile); \
virtual HRESULT __stdcall put_SecondComponentProfile(CATIAReference * iSecondComponentProfile); \
virtual HRESULT __stdcall get_FirstComponentDirection(CATIAReference *& oFirstComponentDirection); \
virtual HRESULT __stdcall put_FirstComponentDirection(CATIAReference * iFirstComponentDirection); \
virtual HRESULT __stdcall get_SecondComponentDirection(CATIAReference *& oSecondComponentDirection); \
virtual HRESULT __stdcall put_SecondComponentDirection(CATIAReference * iSecondComponentDirection); \
virtual HRESULT __stdcall get_Sketch(CATIASketch *& oSketch); \
virtual HRESULT __stdcall SetProfileElement(CATIAReference * iProfileElement); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASolidCombine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_FirstComponentProfile(CATIAReference *& oFirstComponentProfile) \
{ \
return (ENVTIECALL(CATIASolidCombine,ENVTIETypeLetter,ENVTIELetter)get_FirstComponentProfile(oFirstComponentProfile)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstComponentProfile(CATIAReference * iFirstComponentProfile) \
{ \
return (ENVTIECALL(CATIASolidCombine,ENVTIETypeLetter,ENVTIELetter)put_FirstComponentProfile(iFirstComponentProfile)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondComponentProfile(CATIAReference *& oSecondComponentProfile) \
{ \
return (ENVTIECALL(CATIASolidCombine,ENVTIETypeLetter,ENVTIELetter)get_SecondComponentProfile(oSecondComponentProfile)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondComponentProfile(CATIAReference * iSecondComponentProfile) \
{ \
return (ENVTIECALL(CATIASolidCombine,ENVTIETypeLetter,ENVTIELetter)put_SecondComponentProfile(iSecondComponentProfile)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstComponentDirection(CATIAReference *& oFirstComponentDirection) \
{ \
return (ENVTIECALL(CATIASolidCombine,ENVTIETypeLetter,ENVTIELetter)get_FirstComponentDirection(oFirstComponentDirection)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstComponentDirection(CATIAReference * iFirstComponentDirection) \
{ \
return (ENVTIECALL(CATIASolidCombine,ENVTIETypeLetter,ENVTIELetter)put_FirstComponentDirection(iFirstComponentDirection)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondComponentDirection(CATIAReference *& oSecondComponentDirection) \
{ \
return (ENVTIECALL(CATIASolidCombine,ENVTIETypeLetter,ENVTIELetter)get_SecondComponentDirection(oSecondComponentDirection)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondComponentDirection(CATIAReference * iSecondComponentDirection) \
{ \
return (ENVTIECALL(CATIASolidCombine,ENVTIETypeLetter,ENVTIELetter)put_SecondComponentDirection(iSecondComponentDirection)); \
} \
HRESULT __stdcall  ENVTIEName::get_Sketch(CATIASketch *& oSketch) \
{ \
return (ENVTIECALL(CATIASolidCombine,ENVTIETypeLetter,ENVTIELetter)get_Sketch(oSketch)); \
} \
HRESULT __stdcall  ENVTIEName::SetProfileElement(CATIAReference * iProfileElement) \
{ \
return (ENVTIECALL(CATIASolidCombine,ENVTIETypeLetter,ENVTIELetter)SetProfileElement(iProfileElement)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASolidCombine,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASolidCombine,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASolidCombine,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASolidCombine,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASolidCombine,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASolidCombine(classe)    TIECATIASolidCombine##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASolidCombine(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASolidCombine, classe) \
 \
 \
CATImplementTIEMethods(CATIASolidCombine, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASolidCombine, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASolidCombine, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASolidCombine, classe) \
 \
HRESULT __stdcall  TIECATIASolidCombine##classe::get_FirstComponentProfile(CATIAReference *& oFirstComponentProfile) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oFirstComponentProfile); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstComponentProfile(oFirstComponentProfile); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oFirstComponentProfile); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASolidCombine##classe::put_FirstComponentProfile(CATIAReference * iFirstComponentProfile) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iFirstComponentProfile); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstComponentProfile(iFirstComponentProfile); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iFirstComponentProfile); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASolidCombine##classe::get_SecondComponentProfile(CATIAReference *& oSecondComponentProfile) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oSecondComponentProfile); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondComponentProfile(oSecondComponentProfile); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oSecondComponentProfile); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASolidCombine##classe::put_SecondComponentProfile(CATIAReference * iSecondComponentProfile) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iSecondComponentProfile); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondComponentProfile(iSecondComponentProfile); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iSecondComponentProfile); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASolidCombine##classe::get_FirstComponentDirection(CATIAReference *& oFirstComponentDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oFirstComponentDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstComponentDirection(oFirstComponentDirection); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oFirstComponentDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASolidCombine##classe::put_FirstComponentDirection(CATIAReference * iFirstComponentDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iFirstComponentDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstComponentDirection(iFirstComponentDirection); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iFirstComponentDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASolidCombine##classe::get_SecondComponentDirection(CATIAReference *& oSecondComponentDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oSecondComponentDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondComponentDirection(oSecondComponentDirection); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oSecondComponentDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASolidCombine##classe::put_SecondComponentDirection(CATIAReference * iSecondComponentDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iSecondComponentDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondComponentDirection(iSecondComponentDirection); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iSecondComponentDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASolidCombine##classe::get_Sketch(CATIASketch *& oSketch) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oSketch); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Sketch(oSketch); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oSketch); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASolidCombine##classe::SetProfileElement(CATIAReference * iProfileElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iProfileElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetProfileElement(iProfileElement); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iProfileElement); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASolidCombine##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASolidCombine##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASolidCombine##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASolidCombine##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASolidCombine##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASolidCombine(classe) \
 \
 \
declare_TIE_CATIASolidCombine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASolidCombine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASolidCombine,"CATIASolidCombine",CATIASolidCombine::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASolidCombine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASolidCombine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASolidCombine##classe(classe::MetaObject(),CATIASolidCombine::MetaObject(),(void *)CreateTIECATIASolidCombine##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASolidCombine(classe) \
 \
 \
declare_TIE_CATIASolidCombine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASolidCombine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASolidCombine,"CATIASolidCombine",CATIASolidCombine::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASolidCombine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASolidCombine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASolidCombine##classe(classe::MetaObject(),CATIASolidCombine::MetaObject(),(void *)CreateTIECATIASolidCombine##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASolidCombine(classe) TIE_CATIASolidCombine(classe)
#else
#define BOA_CATIASolidCombine(classe) CATImplementBOA(CATIASolidCombine, classe)
#endif

#endif
