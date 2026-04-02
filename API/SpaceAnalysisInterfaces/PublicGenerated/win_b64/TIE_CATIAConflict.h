#ifndef __TIE_CATIAConflict
#define __TIE_CATIAConflict

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAConflict.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAConflict */
#define declare_TIE_CATIAConflict(classe) \
 \
 \
class TIECATIAConflict##classe : public CATIAConflict \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAConflict, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_FirstProduct(CATIAProduct *& oProduct); \
      virtual HRESULT __stdcall GetFirstPointCoordinates(CATSafeArrayVariant & oCoordinates); \
      virtual HRESULT __stdcall get_SecondProduct(CATIAProduct *& oProduct); \
      virtual HRESULT __stdcall GetSecondPointCoordinates(CATSafeArrayVariant & oCoordinates); \
      virtual HRESULT __stdcall get_Type(CatConflictType & oType); \
      virtual HRESULT __stdcall get_Value(double & oValue); \
      virtual HRESULT __stdcall get_Status(CatConflictStatus & oStatus); \
      virtual HRESULT __stdcall put_Status(CatConflictStatus iStatus); \
      virtual HRESULT __stdcall get_ComparisonInfo(CatConflictComparison & oInfo); \
      virtual HRESULT __stdcall get_KeepInDB(CATLONG & oKeep); \
      virtual HRESULT __stdcall put_KeepInDB(CATLONG iKeep); \
      virtual HRESULT __stdcall get_Comment(CATBSTR & oString); \
      virtual HRESULT __stdcall put_Comment(const CATBSTR & iString); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAConflict(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_FirstProduct(CATIAProduct *& oProduct); \
virtual HRESULT __stdcall GetFirstPointCoordinates(CATSafeArrayVariant & oCoordinates); \
virtual HRESULT __stdcall get_SecondProduct(CATIAProduct *& oProduct); \
virtual HRESULT __stdcall GetSecondPointCoordinates(CATSafeArrayVariant & oCoordinates); \
virtual HRESULT __stdcall get_Type(CatConflictType & oType); \
virtual HRESULT __stdcall get_Value(double & oValue); \
virtual HRESULT __stdcall get_Status(CatConflictStatus & oStatus); \
virtual HRESULT __stdcall put_Status(CatConflictStatus iStatus); \
virtual HRESULT __stdcall get_ComparisonInfo(CatConflictComparison & oInfo); \
virtual HRESULT __stdcall get_KeepInDB(CATLONG & oKeep); \
virtual HRESULT __stdcall put_KeepInDB(CATLONG iKeep); \
virtual HRESULT __stdcall get_Comment(CATBSTR & oString); \
virtual HRESULT __stdcall put_Comment(const CATBSTR & iString); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAConflict(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_FirstProduct(CATIAProduct *& oProduct) \
{ \
return (ENVTIECALL(CATIAConflict,ENVTIETypeLetter,ENVTIELetter)get_FirstProduct(oProduct)); \
} \
HRESULT __stdcall  ENVTIEName::GetFirstPointCoordinates(CATSafeArrayVariant & oCoordinates) \
{ \
return (ENVTIECALL(CATIAConflict,ENVTIETypeLetter,ENVTIELetter)GetFirstPointCoordinates(oCoordinates)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondProduct(CATIAProduct *& oProduct) \
{ \
return (ENVTIECALL(CATIAConflict,ENVTIETypeLetter,ENVTIELetter)get_SecondProduct(oProduct)); \
} \
HRESULT __stdcall  ENVTIEName::GetSecondPointCoordinates(CATSafeArrayVariant & oCoordinates) \
{ \
return (ENVTIECALL(CATIAConflict,ENVTIETypeLetter,ENVTIELetter)GetSecondPointCoordinates(oCoordinates)); \
} \
HRESULT __stdcall  ENVTIEName::get_Type(CatConflictType & oType) \
{ \
return (ENVTIECALL(CATIAConflict,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Value(double & oValue) \
{ \
return (ENVTIECALL(CATIAConflict,ENVTIETypeLetter,ENVTIELetter)get_Value(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_Status(CatConflictStatus & oStatus) \
{ \
return (ENVTIECALL(CATIAConflict,ENVTIETypeLetter,ENVTIELetter)get_Status(oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_Status(CatConflictStatus iStatus) \
{ \
return (ENVTIECALL(CATIAConflict,ENVTIETypeLetter,ENVTIELetter)put_Status(iStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_ComparisonInfo(CatConflictComparison & oInfo) \
{ \
return (ENVTIECALL(CATIAConflict,ENVTIETypeLetter,ENVTIELetter)get_ComparisonInfo(oInfo)); \
} \
HRESULT __stdcall  ENVTIEName::get_KeepInDB(CATLONG & oKeep) \
{ \
return (ENVTIECALL(CATIAConflict,ENVTIETypeLetter,ENVTIELetter)get_KeepInDB(oKeep)); \
} \
HRESULT __stdcall  ENVTIEName::put_KeepInDB(CATLONG iKeep) \
{ \
return (ENVTIECALL(CATIAConflict,ENVTIETypeLetter,ENVTIELetter)put_KeepInDB(iKeep)); \
} \
HRESULT __stdcall  ENVTIEName::get_Comment(CATBSTR & oString) \
{ \
return (ENVTIECALL(CATIAConflict,ENVTIETypeLetter,ENVTIELetter)get_Comment(oString)); \
} \
HRESULT __stdcall  ENVTIEName::put_Comment(const CATBSTR & iString) \
{ \
return (ENVTIECALL(CATIAConflict,ENVTIETypeLetter,ENVTIELetter)put_Comment(iString)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAConflict,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAConflict,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAConflict,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAConflict,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAConflict,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAConflict(classe)    TIECATIAConflict##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAConflict(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAConflict, classe) \
 \
 \
CATImplementTIEMethods(CATIAConflict, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAConflict, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAConflict, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAConflict, classe) \
 \
HRESULT __stdcall  TIECATIAConflict##classe::get_FirstProduct(CATIAProduct *& oProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstProduct(oProduct); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConflict##classe::GetFirstPointCoordinates(CATSafeArrayVariant & oCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFirstPointCoordinates(oCoordinates); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oCoordinates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConflict##classe::get_SecondProduct(CATIAProduct *& oProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondProduct(oProduct); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConflict##classe::GetSecondPointCoordinates(CATSafeArrayVariant & oCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSecondPointCoordinates(oCoordinates); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oCoordinates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConflict##classe::get_Type(CatConflictType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConflict##classe::get_Value(double & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Value(oValue); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConflict##classe::get_Status(CatConflictStatus & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Status(oStatus); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConflict##classe::put_Status(CatConflictStatus iStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Status(iStatus); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConflict##classe::get_ComparisonInfo(CatConflictComparison & oInfo) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oInfo); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ComparisonInfo(oInfo); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oInfo); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConflict##classe::get_KeepInDB(CATLONG & oKeep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oKeep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_KeepInDB(oKeep); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oKeep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConflict##classe::put_KeepInDB(CATLONG iKeep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iKeep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_KeepInDB(iKeep); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iKeep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConflict##classe::get_Comment(CATBSTR & oString) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oString); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Comment(oString); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oString); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConflict##classe::put_Comment(const CATBSTR & iString) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iString); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Comment(iString); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iString); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAConflict##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAConflict##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAConflict##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAConflict##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAConflict##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAConflict(classe) \
 \
 \
declare_TIE_CATIAConflict(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAConflict##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAConflict,"CATIAConflict",CATIAConflict::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAConflict(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAConflict, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAConflict##classe(classe::MetaObject(),CATIAConflict::MetaObject(),(void *)CreateTIECATIAConflict##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAConflict(classe) \
 \
 \
declare_TIE_CATIAConflict(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAConflict##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAConflict,"CATIAConflict",CATIAConflict::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAConflict(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAConflict, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAConflict##classe(classe::MetaObject(),CATIAConflict::MetaObject(),(void *)CreateTIECATIAConflict##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAConflict(classe) TIE_CATIAConflict(classe)
#else
#define BOA_CATIAConflict(classe) CATImplementBOA(CATIAConflict, classe)
#endif

#endif
