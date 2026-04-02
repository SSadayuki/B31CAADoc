#ifndef __TIE_CATIAPublications
#define __TIE_CATIAPublications

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPublications.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPublications */
#define declare_TIE_CATIAPublications(classe) \
 \
 \
class TIECATIAPublications##classe : public CATIAPublications \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPublications, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Item(const CATVariant & iIdentifier, CATIAPublication *& oPub); \
      virtual HRESULT __stdcall Add(const CATBSTR & iPublicName, CATIAPublication *& oPub); \
      virtual HRESULT __stdcall Remove(const CATBSTR & iIdentifier); \
      virtual HRESULT __stdcall SetRelay(const CATVariant & iIdentifier, CATIAPublications * iRelayer, const CATVariant & iNameInRelay); \
      virtual HRESULT __stdcall SetDirect(const CATVariant & iIdentifier, CATIAReference * iPointed); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAPublications(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Item(const CATVariant & iIdentifier, CATIAPublication *& oPub); \
virtual HRESULT __stdcall Add(const CATBSTR & iPublicName, CATIAPublication *& oPub); \
virtual HRESULT __stdcall Remove(const CATBSTR & iIdentifier); \
virtual HRESULT __stdcall SetRelay(const CATVariant & iIdentifier, CATIAPublications * iRelayer, const CATVariant & iNameInRelay); \
virtual HRESULT __stdcall SetDirect(const CATVariant & iIdentifier, CATIAReference * iPointed); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAPublications(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIdentifier, CATIAPublication *& oPub) \
{ \
return (ENVTIECALL(CATIAPublications,ENVTIETypeLetter,ENVTIELetter)Item(iIdentifier,oPub)); \
} \
HRESULT __stdcall  ENVTIEName::Add(const CATBSTR & iPublicName, CATIAPublication *& oPub) \
{ \
return (ENVTIECALL(CATIAPublications,ENVTIETypeLetter,ENVTIELetter)Add(iPublicName,oPub)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATBSTR & iIdentifier) \
{ \
return (ENVTIECALL(CATIAPublications,ENVTIETypeLetter,ENVTIELetter)Remove(iIdentifier)); \
} \
HRESULT __stdcall  ENVTIEName::SetRelay(const CATVariant & iIdentifier, CATIAPublications * iRelayer, const CATVariant & iNameInRelay) \
{ \
return (ENVTIECALL(CATIAPublications,ENVTIETypeLetter,ENVTIELetter)SetRelay(iIdentifier,iRelayer,iNameInRelay)); \
} \
HRESULT __stdcall  ENVTIEName::SetDirect(const CATVariant & iIdentifier, CATIAReference * iPointed) \
{ \
return (ENVTIECALL(CATIAPublications,ENVTIETypeLetter,ENVTIELetter)SetDirect(iIdentifier,iPointed)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPublications,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPublications,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAPublications,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAPublications,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAPublications,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAPublications,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPublications(classe)    TIECATIAPublications##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPublications(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPublications, classe) \
 \
 \
CATImplementTIEMethods(CATIAPublications, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPublications, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPublications, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPublications, classe) \
 \
HRESULT __stdcall  TIECATIAPublications##classe::Item(const CATVariant & iIdentifier, CATIAPublication *& oPub) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iIdentifier,&oPub); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIdentifier,oPub); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iIdentifier,&oPub); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPublications##classe::Add(const CATBSTR & iPublicName, CATIAPublication *& oPub) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iPublicName,&oPub); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iPublicName,oPub); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iPublicName,&oPub); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPublications##classe::Remove(const CATBSTR & iIdentifier) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIdentifier); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIdentifier); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIdentifier); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPublications##classe::SetRelay(const CATVariant & iIdentifier, CATIAPublications * iRelayer, const CATVariant & iNameInRelay) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIdentifier,&iRelayer,&iNameInRelay); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRelay(iIdentifier,iRelayer,iNameInRelay); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIdentifier,&iRelayer,&iNameInRelay); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPublications##classe::SetDirect(const CATVariant & iIdentifier, CATIAReference * iPointed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iIdentifier,&iPointed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDirect(iIdentifier,iPointed); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iIdentifier,&iPointed); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPublications##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPublications##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPublications##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPublications##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPublications##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPublications##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPublications(classe) \
 \
 \
declare_TIE_CATIAPublications(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPublications##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPublications,"CATIAPublications",CATIAPublications::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPublications(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPublications, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPublications##classe(classe::MetaObject(),CATIAPublications::MetaObject(),(void *)CreateTIECATIAPublications##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPublications(classe) \
 \
 \
declare_TIE_CATIAPublications(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPublications##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPublications,"CATIAPublications",CATIAPublications::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPublications(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPublications, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPublications##classe(classe::MetaObject(),CATIAPublications::MetaObject(),(void *)CreateTIECATIAPublications##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPublications(classe) TIE_CATIAPublications(classe)
#else
#define BOA_CATIAPublications(classe) CATImplementBOA(CATIAPublications, classe)
#endif

#endif
