#ifndef __TIE_CATIAPspBuildPart
#define __TIE_CATIAPspBuildPart

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPspBuildPart.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPspBuildPart */
#define declare_TIE_CATIAPspBuildPart(classe) \
 \
 \
class TIECATIAPspBuildPart##classe : public CATIAPspBuildPart \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPspBuildPart, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall NewPart(const CATBSTR & iuPartType, const CATBSTR & uPartNumber, CATIAProduct *& oNewRefPart); \
      virtual HRESULT __stdcall ChangePartType(CATIAProduct * iRefPart, const CATBSTR & iuPartType, const CATBSTR & uPartNumber, CATIAProduct *& oNewRefPart); \
      virtual HRESULT __stdcall SetPartParametricAttributes(CATIAProduct * iRefPart, CATIAPspListOfBSTRs * iLAttributeNames); \
      virtual HRESULT __stdcall ListPartParametricAttributes(CATIAProduct * iRefPart, CATIAPspListOfBSTRs *& oLAttributeNames); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPspBuildPart(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall NewPart(const CATBSTR & iuPartType, const CATBSTR & uPartNumber, CATIAProduct *& oNewRefPart); \
virtual HRESULT __stdcall ChangePartType(CATIAProduct * iRefPart, const CATBSTR & iuPartType, const CATBSTR & uPartNumber, CATIAProduct *& oNewRefPart); \
virtual HRESULT __stdcall SetPartParametricAttributes(CATIAProduct * iRefPart, CATIAPspListOfBSTRs * iLAttributeNames); \
virtual HRESULT __stdcall ListPartParametricAttributes(CATIAProduct * iRefPart, CATIAPspListOfBSTRs *& oLAttributeNames); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPspBuildPart(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::NewPart(const CATBSTR & iuPartType, const CATBSTR & uPartNumber, CATIAProduct *& oNewRefPart) \
{ \
return (ENVTIECALL(CATIAPspBuildPart,ENVTIETypeLetter,ENVTIELetter)NewPart(iuPartType,uPartNumber,oNewRefPart)); \
} \
HRESULT __stdcall  ENVTIEName::ChangePartType(CATIAProduct * iRefPart, const CATBSTR & iuPartType, const CATBSTR & uPartNumber, CATIAProduct *& oNewRefPart) \
{ \
return (ENVTIECALL(CATIAPspBuildPart,ENVTIETypeLetter,ENVTIELetter)ChangePartType(iRefPart,iuPartType,uPartNumber,oNewRefPart)); \
} \
HRESULT __stdcall  ENVTIEName::SetPartParametricAttributes(CATIAProduct * iRefPart, CATIAPspListOfBSTRs * iLAttributeNames) \
{ \
return (ENVTIECALL(CATIAPspBuildPart,ENVTIETypeLetter,ENVTIELetter)SetPartParametricAttributes(iRefPart,iLAttributeNames)); \
} \
HRESULT __stdcall  ENVTIEName::ListPartParametricAttributes(CATIAProduct * iRefPart, CATIAPspListOfBSTRs *& oLAttributeNames) \
{ \
return (ENVTIECALL(CATIAPspBuildPart,ENVTIETypeLetter,ENVTIELetter)ListPartParametricAttributes(iRefPart,oLAttributeNames)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPspBuildPart,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPspBuildPart,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspBuildPart,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspBuildPart,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPspBuildPart,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPspBuildPart(classe)    TIECATIAPspBuildPart##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPspBuildPart(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPspBuildPart, classe) \
 \
 \
CATImplementTIEMethods(CATIAPspBuildPart, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPspBuildPart, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPspBuildPart, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPspBuildPart, classe) \
 \
HRESULT __stdcall  TIECATIAPspBuildPart##classe::NewPart(const CATBSTR & iuPartType, const CATBSTR & uPartNumber, CATIAProduct *& oNewRefPart) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iuPartType,&uPartNumber,&oNewRefPart); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->NewPart(iuPartType,uPartNumber,oNewRefPart); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iuPartType,&uPartNumber,&oNewRefPart); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspBuildPart##classe::ChangePartType(CATIAProduct * iRefPart, const CATBSTR & iuPartType, const CATBSTR & uPartNumber, CATIAProduct *& oNewRefPart) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iRefPart,&iuPartType,&uPartNumber,&oNewRefPart); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ChangePartType(iRefPart,iuPartType,uPartNumber,oNewRefPart); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iRefPart,&iuPartType,&uPartNumber,&oNewRefPart); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspBuildPart##classe::SetPartParametricAttributes(CATIAProduct * iRefPart, CATIAPspListOfBSTRs * iLAttributeNames) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iRefPart,&iLAttributeNames); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPartParametricAttributes(iRefPart,iLAttributeNames); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iRefPart,&iLAttributeNames); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspBuildPart##classe::ListPartParametricAttributes(CATIAProduct * iRefPart, CATIAPspListOfBSTRs *& oLAttributeNames) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iRefPart,&oLAttributeNames); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListPartParametricAttributes(iRefPart,oLAttributeNames); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iRefPart,&oLAttributeNames); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspBuildPart##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspBuildPart##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspBuildPart##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspBuildPart##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspBuildPart##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPspBuildPart(classe) \
 \
 \
declare_TIE_CATIAPspBuildPart(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspBuildPart##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspBuildPart,"CATIAPspBuildPart",CATIAPspBuildPart::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspBuildPart(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPspBuildPart, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspBuildPart##classe(classe::MetaObject(),CATIAPspBuildPart::MetaObject(),(void *)CreateTIECATIAPspBuildPart##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPspBuildPart(classe) \
 \
 \
declare_TIE_CATIAPspBuildPart(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspBuildPart##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspBuildPart,"CATIAPspBuildPart",CATIAPspBuildPart::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspBuildPart(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPspBuildPart, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspBuildPart##classe(classe::MetaObject(),CATIAPspBuildPart::MetaObject(),(void *)CreateTIECATIAPspBuildPart##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPspBuildPart(classe) TIE_CATIAPspBuildPart(classe)
#else
#define BOA_CATIAPspBuildPart(classe) CATImplementBOA(CATIAPspBuildPart, classe)
#endif

#endif
