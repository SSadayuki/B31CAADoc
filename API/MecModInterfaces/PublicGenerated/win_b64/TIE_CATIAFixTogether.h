#ifndef __TIE_CATIAFixTogether
#define __TIE_CATIAFixTogether

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFixTogether.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFixTogether */
#define declare_TIE_CATIAFixTogether(classe) \
 \
 \
class TIECATIAFixTogether##classe : public CATIAFixTogether \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFixTogether, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ProductsCount(CATLONG & oNbItems); \
      virtual HRESULT __stdcall get_FixTogethersCount(CATLONG & oNbItems); \
      virtual HRESULT __stdcall AddProduct(CATIAProduct * iProduct); \
      virtual HRESULT __stdcall GetProduct(const CATVariant & iIndex, CATIAProduct *& oProduct); \
      virtual HRESULT __stdcall RemoveProduct(const CATVariant & iIndex); \
      virtual HRESULT __stdcall AddFixTogether(CATIAFixTogether * iFixTogether); \
      virtual HRESULT __stdcall GetFixTogether(const CATVariant & iIndex, CATIAFixTogether *& oFixTogether); \
      virtual HRESULT __stdcall RemoveFixTogether(const CATVariant & iIndex); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAFixTogether(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ProductsCount(CATLONG & oNbItems); \
virtual HRESULT __stdcall get_FixTogethersCount(CATLONG & oNbItems); \
virtual HRESULT __stdcall AddProduct(CATIAProduct * iProduct); \
virtual HRESULT __stdcall GetProduct(const CATVariant & iIndex, CATIAProduct *& oProduct); \
virtual HRESULT __stdcall RemoveProduct(const CATVariant & iIndex); \
virtual HRESULT __stdcall AddFixTogether(CATIAFixTogether * iFixTogether); \
virtual HRESULT __stdcall GetFixTogether(const CATVariant & iIndex, CATIAFixTogether *& oFixTogether); \
virtual HRESULT __stdcall RemoveFixTogether(const CATVariant & iIndex); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAFixTogether(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ProductsCount(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAFixTogether,ENVTIETypeLetter,ENVTIELetter)get_ProductsCount(oNbItems)); \
} \
HRESULT __stdcall  ENVTIEName::get_FixTogethersCount(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAFixTogether,ENVTIETypeLetter,ENVTIELetter)get_FixTogethersCount(oNbItems)); \
} \
HRESULT __stdcall  ENVTIEName::AddProduct(CATIAProduct * iProduct) \
{ \
return (ENVTIECALL(CATIAFixTogether,ENVTIETypeLetter,ENVTIELetter)AddProduct(iProduct)); \
} \
HRESULT __stdcall  ENVTIEName::GetProduct(const CATVariant & iIndex, CATIAProduct *& oProduct) \
{ \
return (ENVTIECALL(CATIAFixTogether,ENVTIETypeLetter,ENVTIELetter)GetProduct(iIndex,oProduct)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveProduct(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAFixTogether,ENVTIETypeLetter,ENVTIELetter)RemoveProduct(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::AddFixTogether(CATIAFixTogether * iFixTogether) \
{ \
return (ENVTIECALL(CATIAFixTogether,ENVTIETypeLetter,ENVTIELetter)AddFixTogether(iFixTogether)); \
} \
HRESULT __stdcall  ENVTIEName::GetFixTogether(const CATVariant & iIndex, CATIAFixTogether *& oFixTogether) \
{ \
return (ENVTIECALL(CATIAFixTogether,ENVTIETypeLetter,ENVTIELetter)GetFixTogether(iIndex,oFixTogether)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveFixTogether(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAFixTogether,ENVTIETypeLetter,ENVTIELetter)RemoveFixTogether(iIndex)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFixTogether,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFixTogether,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAFixTogether,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAFixTogether,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAFixTogether,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFixTogether(classe)    TIECATIAFixTogether##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFixTogether(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFixTogether, classe) \
 \
 \
CATImplementTIEMethods(CATIAFixTogether, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFixTogether, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFixTogether, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFixTogether, classe) \
 \
HRESULT __stdcall  TIECATIAFixTogether##classe::get_ProductsCount(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oNbItems); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ProductsCount(oNbItems); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFixTogether##classe::get_FixTogethersCount(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oNbItems); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FixTogethersCount(oNbItems); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFixTogether##classe::AddProduct(CATIAProduct * iProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddProduct(iProduct); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFixTogether##classe::GetProduct(const CATVariant & iIndex, CATIAProduct *& oProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIndex,&oProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProduct(iIndex,oProduct); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIndex,&oProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFixTogether##classe::RemoveProduct(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveProduct(iIndex); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFixTogether##classe::AddFixTogether(CATIAFixTogether * iFixTogether) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iFixTogether); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFixTogether(iFixTogether); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iFixTogether); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFixTogether##classe::GetFixTogether(const CATVariant & iIndex, CATIAFixTogether *& oFixTogether) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iIndex,&oFixTogether); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFixTogether(iIndex,oFixTogether); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iIndex,&oFixTogether); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFixTogether##classe::RemoveFixTogether(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveFixTogether(iIndex); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFixTogether##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFixTogether##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFixTogether##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFixTogether##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFixTogether##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFixTogether(classe) \
 \
 \
declare_TIE_CATIAFixTogether(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFixTogether##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFixTogether,"CATIAFixTogether",CATIAFixTogether::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFixTogether(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFixTogether, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFixTogether##classe(classe::MetaObject(),CATIAFixTogether::MetaObject(),(void *)CreateTIECATIAFixTogether##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFixTogether(classe) \
 \
 \
declare_TIE_CATIAFixTogether(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFixTogether##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFixTogether,"CATIAFixTogether",CATIAFixTogether::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFixTogether(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFixTogether, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFixTogether##classe(classe::MetaObject(),CATIAFixTogether::MetaObject(),(void *)CreateTIECATIAFixTogether##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFixTogether(classe) TIE_CATIAFixTogether(classe)
#else
#define BOA_CATIAFixTogether(classe) CATImplementBOA(CATIAFixTogether, classe)
#endif

#endif
