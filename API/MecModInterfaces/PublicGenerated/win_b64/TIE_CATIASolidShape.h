#ifndef __TIE_CATIASolidShape
#define __TIE_CATIASolidShape

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASolidShape.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASolidShape */
#define declare_TIE_CATIASolidShape(classe) \
 \
 \
class TIECATIASolidShape##classe : public CATIASolidShape \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASolidShape, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_SourceElement(CATIABase *& oSourceElement); \
      virtual HRESULT __stdcall get_Move(CATIAMove *& oMove); \
      virtual HRESULT __stdcall get_SourceProduct(CATIABase *& oProduct); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASolidShape(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_SourceElement(CATIABase *& oSourceElement); \
virtual HRESULT __stdcall get_Move(CATIAMove *& oMove); \
virtual HRESULT __stdcall get_SourceProduct(CATIABase *& oProduct); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASolidShape(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_SourceElement(CATIABase *& oSourceElement) \
{ \
return (ENVTIECALL(CATIASolidShape,ENVTIETypeLetter,ENVTIELetter)get_SourceElement(oSourceElement)); \
} \
HRESULT __stdcall  ENVTIEName::get_Move(CATIAMove *& oMove) \
{ \
return (ENVTIECALL(CATIASolidShape,ENVTIETypeLetter,ENVTIELetter)get_Move(oMove)); \
} \
HRESULT __stdcall  ENVTIEName::get_SourceProduct(CATIABase *& oProduct) \
{ \
return (ENVTIECALL(CATIASolidShape,ENVTIETypeLetter,ENVTIELetter)get_SourceProduct(oProduct)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASolidShape,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASolidShape,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASolidShape,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASolidShape,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASolidShape,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASolidShape(classe)    TIECATIASolidShape##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASolidShape(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASolidShape, classe) \
 \
 \
CATImplementTIEMethods(CATIASolidShape, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASolidShape, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASolidShape, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASolidShape, classe) \
 \
HRESULT __stdcall  TIECATIASolidShape##classe::get_SourceElement(CATIABase *& oSourceElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oSourceElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SourceElement(oSourceElement); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oSourceElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASolidShape##classe::get_Move(CATIAMove *& oMove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oMove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Move(oMove); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oMove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASolidShape##classe::get_SourceProduct(CATIABase *& oProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SourceProduct(oProduct); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oProduct); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASolidShape##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASolidShape##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASolidShape##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASolidShape##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASolidShape##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASolidShape(classe) \
 \
 \
declare_TIE_CATIASolidShape(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASolidShape##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASolidShape,"CATIASolidShape",CATIASolidShape::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASolidShape(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASolidShape, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASolidShape##classe(classe::MetaObject(),CATIASolidShape::MetaObject(),(void *)CreateTIECATIASolidShape##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASolidShape(classe) \
 \
 \
declare_TIE_CATIASolidShape(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASolidShape##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASolidShape,"CATIASolidShape",CATIASolidShape::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASolidShape(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASolidShape, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASolidShape##classe(classe::MetaObject(),CATIASolidShape::MetaObject(),(void *)CreateTIECATIASolidShape##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASolidShape(classe) TIE_CATIASolidShape(classe)
#else
#define BOA_CATIASolidShape(classe) CATImplementBOA(CATIASolidShape, classe)
#endif

#endif
