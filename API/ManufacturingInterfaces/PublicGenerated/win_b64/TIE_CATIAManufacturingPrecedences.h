#ifndef __TIE_CATIAManufacturingPrecedences
#define __TIE_CATIAManufacturingPrecedences

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAManufacturingPrecedences.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAManufacturingPrecedences */
#define declare_TIE_CATIAManufacturingPrecedences(classe) \
 \
 \
class TIECATIAManufacturingPrecedences##classe : public CATIAManufacturingPrecedences \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAManufacturingPrecedences, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddOperation(CATIAManufacturingActivity * iObject, CatManufacturingPrecedenceType iType); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAManufacturingPrecedence *& oPrecedence); \
      virtual HRESULT __stdcall Remove(CATLONG iIndex); \
      virtual HRESULT __stdcall RemoveAll(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAManufacturingPrecedences(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddOperation(CATIAManufacturingActivity * iObject, CatManufacturingPrecedenceType iType); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAManufacturingPrecedence *& oPrecedence); \
virtual HRESULT __stdcall Remove(CATLONG iIndex); \
virtual HRESULT __stdcall RemoveAll(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAManufacturingPrecedences(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddOperation(CATIAManufacturingActivity * iObject, CatManufacturingPrecedenceType iType) \
{ \
return (ENVTIECALL(CATIAManufacturingPrecedences,ENVTIETypeLetter,ENVTIELetter)AddOperation(iObject,iType)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAManufacturingPrecedence *& oPrecedence) \
{ \
return (ENVTIECALL(CATIAManufacturingPrecedences,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oPrecedence)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(CATLONG iIndex) \
{ \
return (ENVTIECALL(CATIAManufacturingPrecedences,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAll() \
{ \
return (ENVTIECALL(CATIAManufacturingPrecedences,ENVTIETypeLetter,ENVTIELetter)RemoveAll()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAManufacturingPrecedences,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAManufacturingPrecedences,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAManufacturingPrecedences,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAManufacturingPrecedences,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAManufacturingPrecedences,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAManufacturingPrecedences,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAManufacturingPrecedences(classe)    TIECATIAManufacturingPrecedences##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAManufacturingPrecedences(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAManufacturingPrecedences, classe) \
 \
 \
CATImplementTIEMethods(CATIAManufacturingPrecedences, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAManufacturingPrecedences, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAManufacturingPrecedences, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAManufacturingPrecedences, classe) \
 \
HRESULT __stdcall  TIECATIAManufacturingPrecedences##classe::AddOperation(CATIAManufacturingActivity * iObject, CatManufacturingPrecedenceType iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iObject,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddOperation(iObject,iType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iObject,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrecedences##classe::Item(const CATVariant & iIndex, CATIAManufacturingPrecedence *& oPrecedence) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex,&oPrecedence); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oPrecedence); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex,&oPrecedence); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrecedences##classe::Remove(CATLONG iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrecedences##classe::RemoveAll() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAll(); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingPrecedences##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingPrecedences##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingPrecedences##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingPrecedences##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingPrecedences##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingPrecedences##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAManufacturingPrecedences(classe) \
 \
 \
declare_TIE_CATIAManufacturingPrecedences(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingPrecedences##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingPrecedences,"CATIAManufacturingPrecedences",CATIAManufacturingPrecedences::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingPrecedences(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAManufacturingPrecedences, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingPrecedences##classe(classe::MetaObject(),CATIAManufacturingPrecedences::MetaObject(),(void *)CreateTIECATIAManufacturingPrecedences##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAManufacturingPrecedences(classe) \
 \
 \
declare_TIE_CATIAManufacturingPrecedences(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingPrecedences##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingPrecedences,"CATIAManufacturingPrecedences",CATIAManufacturingPrecedences::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingPrecedences(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAManufacturingPrecedences, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingPrecedences##classe(classe::MetaObject(),CATIAManufacturingPrecedences::MetaObject(),(void *)CreateTIECATIAManufacturingPrecedences##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAManufacturingPrecedences(classe) TIE_CATIAManufacturingPrecedences(classe)
#else
#define BOA_CATIAManufacturingPrecedences(classe) CATImplementBOA(CATIAManufacturingPrecedences, classe)
#endif

#endif
