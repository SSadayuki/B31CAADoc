#ifndef __TIE_CATIAResources2
#define __TIE_CATIAResources2

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAResources2.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAResources2 */
#define declare_TIE_CATIAResources2(classe) \
 \
 \
class TIECATIAResources2##classe : public CATIAResources2 \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAResources2, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddByAssignmentType(CATIAResource * iResource, DNBResourceAssignmentType iAssignmentType, CATIAResource *& oResource); \
      virtual HRESULT __stdcall RemoveByAssignmentType(CATIAResource * iResource, DNBResourceAssignmentType iAssignmentType, CATIAResource *& oResource); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAResources2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddByAssignmentType(CATIAResource * iResource, DNBResourceAssignmentType iAssignmentType, CATIAResource *& oResource); \
virtual HRESULT __stdcall RemoveByAssignmentType(CATIAResource * iResource, DNBResourceAssignmentType iAssignmentType, CATIAResource *& oResource); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAResources2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddByAssignmentType(CATIAResource * iResource, DNBResourceAssignmentType iAssignmentType, CATIAResource *& oResource) \
{ \
return (ENVTIECALL(CATIAResources2,ENVTIETypeLetter,ENVTIELetter)AddByAssignmentType(iResource,iAssignmentType,oResource)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveByAssignmentType(CATIAResource * iResource, DNBResourceAssignmentType iAssignmentType, CATIAResource *& oResource) \
{ \
return (ENVTIECALL(CATIAResources2,ENVTIETypeLetter,ENVTIELetter)RemoveByAssignmentType(iResource,iAssignmentType,oResource)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAResources2,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAResources2,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAResources2,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAResources2,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAResources2,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAResources2(classe)    TIECATIAResources2##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAResources2(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAResources2, classe) \
 \
 \
CATImplementTIEMethods(CATIAResources2, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAResources2, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAResources2, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAResources2, classe) \
 \
HRESULT __stdcall  TIECATIAResources2##classe::AddByAssignmentType(CATIAResource * iResource, DNBResourceAssignmentType iAssignmentType, CATIAResource *& oResource) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iResource,&iAssignmentType,&oResource); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddByAssignmentType(iResource,iAssignmentType,oResource); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iResource,&iAssignmentType,&oResource); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAResources2##classe::RemoveByAssignmentType(CATIAResource * iResource, DNBResourceAssignmentType iAssignmentType, CATIAResource *& oResource) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iResource,&iAssignmentType,&oResource); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveByAssignmentType(iResource,iAssignmentType,oResource); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iResource,&iAssignmentType,&oResource); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAResources2##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAResources2##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAResources2##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAResources2##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAResources2##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAResources2(classe) \
 \
 \
declare_TIE_CATIAResources2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAResources2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAResources2,"CATIAResources2",CATIAResources2::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAResources2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAResources2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAResources2##classe(classe::MetaObject(),CATIAResources2::MetaObject(),(void *)CreateTIECATIAResources2##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAResources2(classe) \
 \
 \
declare_TIE_CATIAResources2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAResources2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAResources2,"CATIAResources2",CATIAResources2::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAResources2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAResources2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAResources2##classe(classe::MetaObject(),CATIAResources2::MetaObject(),(void *)CreateTIECATIAResources2##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAResources2(classe) TIE_CATIAResources2(classe)
#else
#define BOA_CATIAResources2(classe) CATImplementBOA(CATIAResources2, classe)
#endif

#endif
