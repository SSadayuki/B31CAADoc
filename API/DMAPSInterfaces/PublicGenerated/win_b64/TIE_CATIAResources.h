#ifndef __TIE_CATIAResources
#define __TIE_CATIAResources

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAResources.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAResources */
#define declare_TIE_CATIAResources(classe) \
 \
 \
class TIECATIAResources##classe : public CATIAResources \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAResources, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAResource *& oResource); \
      virtual HRESULT __stdcall Add(CATIAResource * iResource, CATIAResource *& oResource); \
      virtual HRESULT __stdcall AddByAssignmentType(CATIAResource * iResource, DNBResourceAssignmentType iAssignmentType, CATIAResource *& oResource); \
      virtual HRESULT __stdcall RemoveByAssignmentType(CATIAResource * iResource, DNBResourceAssignmentType iAssignmentType, CATIAResource *& oResource); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAResources(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAResource *& oResource); \
virtual HRESULT __stdcall Add(CATIAResource * iResource, CATIAResource *& oResource); \
virtual HRESULT __stdcall AddByAssignmentType(CATIAResource * iResource, DNBResourceAssignmentType iAssignmentType, CATIAResource *& oResource); \
virtual HRESULT __stdcall RemoveByAssignmentType(CATIAResource * iResource, DNBResourceAssignmentType iAssignmentType, CATIAResource *& oResource); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAResources(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAResource *& oResource) \
{ \
return (ENVTIECALL(CATIAResources,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oResource)); \
} \
HRESULT __stdcall  ENVTIEName::Add(CATIAResource * iResource, CATIAResource *& oResource) \
{ \
return (ENVTIECALL(CATIAResources,ENVTIETypeLetter,ENVTIELetter)Add(iResource,oResource)); \
} \
HRESULT __stdcall  ENVTIEName::AddByAssignmentType(CATIAResource * iResource, DNBResourceAssignmentType iAssignmentType, CATIAResource *& oResource) \
{ \
return (ENVTIECALL(CATIAResources,ENVTIETypeLetter,ENVTIELetter)AddByAssignmentType(iResource,iAssignmentType,oResource)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveByAssignmentType(CATIAResource * iResource, DNBResourceAssignmentType iAssignmentType, CATIAResource *& oResource) \
{ \
return (ENVTIECALL(CATIAResources,ENVTIETypeLetter,ENVTIELetter)RemoveByAssignmentType(iResource,iAssignmentType,oResource)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAResources,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAResources,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAResources,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAResources,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAResources,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAResources,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAResources(classe)    TIECATIAResources##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAResources(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAResources, classe) \
 \
 \
CATImplementTIEMethods(CATIAResources, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAResources, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAResources, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAResources, classe) \
 \
HRESULT __stdcall  TIECATIAResources##classe::Item(const CATVariant & iIndex, CATIAResource *& oResource) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iIndex,&oResource); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oResource); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iIndex,&oResource); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAResources##classe::Add(CATIAResource * iResource, CATIAResource *& oResource) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iResource,&oResource); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iResource,oResource); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iResource,&oResource); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAResources##classe::AddByAssignmentType(CATIAResource * iResource, DNBResourceAssignmentType iAssignmentType, CATIAResource *& oResource) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iResource,&iAssignmentType,&oResource); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddByAssignmentType(iResource,iAssignmentType,oResource); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iResource,&iAssignmentType,&oResource); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAResources##classe::RemoveByAssignmentType(CATIAResource * iResource, DNBResourceAssignmentType iAssignmentType, CATIAResource *& oResource) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iResource,&iAssignmentType,&oResource); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveByAssignmentType(iResource,iAssignmentType,oResource); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iResource,&iAssignmentType,&oResource); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAResources##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAResources##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAResources##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAResources##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAResources##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAResources##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAResources(classe) \
 \
 \
declare_TIE_CATIAResources(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAResources##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAResources,"CATIAResources",CATIAResources::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAResources(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAResources, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAResources##classe(classe::MetaObject(),CATIAResources::MetaObject(),(void *)CreateTIECATIAResources##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAResources(classe) \
 \
 \
declare_TIE_CATIAResources(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAResources##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAResources,"CATIAResources",CATIAResources::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAResources(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAResources, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAResources##classe(classe::MetaObject(),CATIAResources::MetaObject(),(void *)CreateTIECATIAResources##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAResources(classe) TIE_CATIAResources(classe)
#else
#define BOA_CATIAResources(classe) CATImplementBOA(CATIAResources, classe)
#endif

#endif
