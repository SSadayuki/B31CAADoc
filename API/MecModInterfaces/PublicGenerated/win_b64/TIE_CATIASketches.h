#ifndef __TIE_CATIASketches
#define __TIE_CATIASketches

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASketches.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASketches */
#define declare_TIE_CATIASketches(classe) \
 \
 \
class TIECATIASketches##classe : public CATIASketches \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASketches, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Add(CATIAReference * iPlane, CATIASketch *& oNewSketch); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIASketch *& oSketch); \
      virtual HRESULT __stdcall GetBoundary(const CATBSTR & iLabel, CATIABoundary *& oBoundary); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIASketches(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Add(CATIAReference * iPlane, CATIASketch *& oNewSketch); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIASketch *& oSketch); \
virtual HRESULT __stdcall GetBoundary(const CATBSTR & iLabel, CATIABoundary *& oBoundary); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIASketches(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Add(CATIAReference * iPlane, CATIASketch *& oNewSketch) \
{ \
return (ENVTIECALL(CATIASketches,ENVTIETypeLetter,ENVTIELetter)Add(iPlane,oNewSketch)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIASketch *& oSketch) \
{ \
return (ENVTIECALL(CATIASketches,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oSketch)); \
} \
HRESULT __stdcall  ENVTIEName::GetBoundary(const CATBSTR & iLabel, CATIABoundary *& oBoundary) \
{ \
return (ENVTIECALL(CATIASketches,ENVTIETypeLetter,ENVTIELetter)GetBoundary(iLabel,oBoundary)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASketches,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASketches,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIASketches,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIASketches,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIASketches,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIASketches,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASketches(classe)    TIECATIASketches##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASketches(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASketches, classe) \
 \
 \
CATImplementTIEMethods(CATIASketches, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASketches, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASketches, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASketches, classe) \
 \
HRESULT __stdcall  TIECATIASketches##classe::Add(CATIAReference * iPlane, CATIASketch *& oNewSketch) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iPlane,&oNewSketch); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iPlane,oNewSketch); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iPlane,&oNewSketch); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASketches##classe::Item(const CATVariant & iIndex, CATIASketch *& oSketch) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex,&oSketch); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oSketch); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex,&oSketch); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASketches##classe::GetBoundary(const CATBSTR & iLabel, CATIABoundary *& oBoundary) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iLabel,&oBoundary); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBoundary(iLabel,oBoundary); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iLabel,&oBoundary); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASketches##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASketches##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASketches##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASketches##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASketches##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASketches##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASketches(classe) \
 \
 \
declare_TIE_CATIASketches(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASketches##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASketches,"CATIASketches",CATIASketches::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASketches(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASketches, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASketches##classe(classe::MetaObject(),CATIASketches::MetaObject(),(void *)CreateTIECATIASketches##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASketches(classe) \
 \
 \
declare_TIE_CATIASketches(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASketches##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASketches,"CATIASketches",CATIASketches::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASketches(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASketches, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASketches##classe(classe::MetaObject(),CATIASketches::MetaObject(),(void *)CreateTIECATIASketches##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASketches(classe) TIE_CATIASketches(classe)
#else
#define BOA_CATIASketches(classe) CATImplementBOA(CATIASketches, classe)
#endif

#endif
