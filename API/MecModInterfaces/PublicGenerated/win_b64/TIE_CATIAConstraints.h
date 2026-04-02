#ifndef __TIE_CATIAConstraints
#define __TIE_CATIAConstraints

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAConstraints.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAConstraints */
#define declare_TIE_CATIAConstraints(classe) \
 \
 \
class TIECATIAConstraints##classe : public CATIAConstraints \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAConstraints, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_BrokenConstraintsCount(CATLONG & oNbItems); \
      virtual HRESULT __stdcall get_UnUpdatedConstraintsCount(CATLONG & oNbItems); \
      virtual HRESULT __stdcall AddMonoEltCst(CatConstraintType iCstType, CATIAReference * iElem, CATIAConstraint *& oConstraint); \
      virtual HRESULT __stdcall AddBiEltCst(CatConstraintType iCstType, CATIAReference * iFirstElem, CATIAReference * iSecondElem, CATIAConstraint *& oConstraint); \
      virtual HRESULT __stdcall AddTriEltCst(CatConstraintType iCstType, CATIAReference * iFirstElem, CATIAReference * iSecondElem, CATIAReference * iThirdElem, CATIAConstraint *& oConstraint); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAConstraint *& oConstraint); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAConstraints(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_BrokenConstraintsCount(CATLONG & oNbItems); \
virtual HRESULT __stdcall get_UnUpdatedConstraintsCount(CATLONG & oNbItems); \
virtual HRESULT __stdcall AddMonoEltCst(CatConstraintType iCstType, CATIAReference * iElem, CATIAConstraint *& oConstraint); \
virtual HRESULT __stdcall AddBiEltCst(CatConstraintType iCstType, CATIAReference * iFirstElem, CATIAReference * iSecondElem, CATIAConstraint *& oConstraint); \
virtual HRESULT __stdcall AddTriEltCst(CatConstraintType iCstType, CATIAReference * iFirstElem, CATIAReference * iSecondElem, CATIAReference * iThirdElem, CATIAConstraint *& oConstraint); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAConstraint *& oConstraint); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAConstraints(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_BrokenConstraintsCount(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAConstraints,ENVTIETypeLetter,ENVTIELetter)get_BrokenConstraintsCount(oNbItems)); \
} \
HRESULT __stdcall  ENVTIEName::get_UnUpdatedConstraintsCount(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAConstraints,ENVTIETypeLetter,ENVTIELetter)get_UnUpdatedConstraintsCount(oNbItems)); \
} \
HRESULT __stdcall  ENVTIEName::AddMonoEltCst(CatConstraintType iCstType, CATIAReference * iElem, CATIAConstraint *& oConstraint) \
{ \
return (ENVTIECALL(CATIAConstraints,ENVTIETypeLetter,ENVTIELetter)AddMonoEltCst(iCstType,iElem,oConstraint)); \
} \
HRESULT __stdcall  ENVTIEName::AddBiEltCst(CatConstraintType iCstType, CATIAReference * iFirstElem, CATIAReference * iSecondElem, CATIAConstraint *& oConstraint) \
{ \
return (ENVTIECALL(CATIAConstraints,ENVTIETypeLetter,ENVTIELetter)AddBiEltCst(iCstType,iFirstElem,iSecondElem,oConstraint)); \
} \
HRESULT __stdcall  ENVTIEName::AddTriEltCst(CatConstraintType iCstType, CATIAReference * iFirstElem, CATIAReference * iSecondElem, CATIAReference * iThirdElem, CATIAConstraint *& oConstraint) \
{ \
return (ENVTIECALL(CATIAConstraints,ENVTIETypeLetter,ENVTIELetter)AddTriEltCst(iCstType,iFirstElem,iSecondElem,iThirdElem,oConstraint)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAConstraint *& oConstraint) \
{ \
return (ENVTIECALL(CATIAConstraints,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oConstraint)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAConstraints,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAConstraints,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAConstraints,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAConstraints,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAConstraints,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAConstraints,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAConstraints,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAConstraints(classe)    TIECATIAConstraints##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAConstraints(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAConstraints, classe) \
 \
 \
CATImplementTIEMethods(CATIAConstraints, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAConstraints, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAConstraints, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAConstraints, classe) \
 \
HRESULT __stdcall  TIECATIAConstraints##classe::get_BrokenConstraintsCount(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oNbItems); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BrokenConstraintsCount(oNbItems); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraints##classe::get_UnUpdatedConstraintsCount(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oNbItems); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UnUpdatedConstraintsCount(oNbItems); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraints##classe::AddMonoEltCst(CatConstraintType iCstType, CATIAReference * iElem, CATIAConstraint *& oConstraint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iCstType,&iElem,&oConstraint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMonoEltCst(iCstType,iElem,oConstraint); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iCstType,&iElem,&oConstraint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraints##classe::AddBiEltCst(CatConstraintType iCstType, CATIAReference * iFirstElem, CATIAReference * iSecondElem, CATIAConstraint *& oConstraint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iCstType,&iFirstElem,&iSecondElem,&oConstraint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddBiEltCst(iCstType,iFirstElem,iSecondElem,oConstraint); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iCstType,&iFirstElem,&iSecondElem,&oConstraint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraints##classe::AddTriEltCst(CatConstraintType iCstType, CATIAReference * iFirstElem, CATIAReference * iSecondElem, CATIAReference * iThirdElem, CATIAConstraint *& oConstraint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iCstType,&iFirstElem,&iSecondElem,&iThirdElem,&oConstraint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddTriEltCst(iCstType,iFirstElem,iSecondElem,iThirdElem,oConstraint); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iCstType,&iFirstElem,&iSecondElem,&iThirdElem,&oConstraint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraints##classe::Item(const CATVariant & iIndex, CATIAConstraint *& oConstraint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIndex,&oConstraint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oConstraint); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIndex,&oConstraint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraints##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAConstraints##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAConstraints##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAConstraints##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAConstraints##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAConstraints##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAConstraints##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAConstraints(classe) \
 \
 \
declare_TIE_CATIAConstraints(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAConstraints##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAConstraints,"CATIAConstraints",CATIAConstraints::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAConstraints(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAConstraints, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAConstraints##classe(classe::MetaObject(),CATIAConstraints::MetaObject(),(void *)CreateTIECATIAConstraints##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAConstraints(classe) \
 \
 \
declare_TIE_CATIAConstraints(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAConstraints##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAConstraints,"CATIAConstraints",CATIAConstraints::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAConstraints(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAConstraints, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAConstraints##classe(classe::MetaObject(),CATIAConstraints::MetaObject(),(void *)CreateTIECATIAConstraints##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAConstraints(classe) TIE_CATIAConstraints(classe)
#else
#define BOA_CATIAConstraints(classe) CATImplementBOA(CATIAConstraints, classe)
#endif

#endif
