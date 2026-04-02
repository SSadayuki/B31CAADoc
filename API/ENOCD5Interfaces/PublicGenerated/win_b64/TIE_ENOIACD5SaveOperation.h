#ifndef __TIE_ENOIACD5SaveOperation
#define __TIE_ENOIACD5SaveOperation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "ENOIACD5SaveOperation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOIACD5SaveOperation */
#define declare_TIE_ENOIACD5SaveOperation(classe) \
 \
 \
class TIEENOIACD5SaveOperation##classe : public ENOIACD5SaveOperation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOIACD5SaveOperation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_CreateVersion(CAT_VARIANT_BOOL & oCreateVersion); \
      virtual HRESULT __stdcall put_CreateVersion(CAT_VARIANT_BOOL iCreateVersion); \
      virtual HRESULT __stdcall get_RetainLock(CAT_VARIANT_BOOL & oRetainLock); \
      virtual HRESULT __stdcall put_RetainLock(CAT_VARIANT_BOOL iRetainLock); \
      virtual HRESULT __stdcall get_Comment(CATBSTR & oComment); \
      virtual HRESULT __stdcall put_Comment(const CATBSTR & iComment); \
      virtual HRESULT __stdcall get_AllowDiskSave(CAT_VARIANT_BOOL & oAllowDiskSave); \
      virtual HRESULT __stdcall put_AllowDiskSave(CAT_VARIANT_BOOL iAllowDiskSave); \
      virtual HRESULT __stdcall get_Items(ENOIACD5SaveItems *& oSaveItems); \
      virtual HRESULT __stdcall ShowPanel(); \
      virtual HRESULT __stdcall Run(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_ENOIACD5SaveOperation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_CreateVersion(CAT_VARIANT_BOOL & oCreateVersion); \
virtual HRESULT __stdcall put_CreateVersion(CAT_VARIANT_BOOL iCreateVersion); \
virtual HRESULT __stdcall get_RetainLock(CAT_VARIANT_BOOL & oRetainLock); \
virtual HRESULT __stdcall put_RetainLock(CAT_VARIANT_BOOL iRetainLock); \
virtual HRESULT __stdcall get_Comment(CATBSTR & oComment); \
virtual HRESULT __stdcall put_Comment(const CATBSTR & iComment); \
virtual HRESULT __stdcall get_AllowDiskSave(CAT_VARIANT_BOOL & oAllowDiskSave); \
virtual HRESULT __stdcall put_AllowDiskSave(CAT_VARIANT_BOOL iAllowDiskSave); \
virtual HRESULT __stdcall get_Items(ENOIACD5SaveItems *& oSaveItems); \
virtual HRESULT __stdcall ShowPanel(); \
virtual HRESULT __stdcall Run(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_ENOIACD5SaveOperation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_CreateVersion(CAT_VARIANT_BOOL & oCreateVersion) \
{ \
return (ENVTIECALL(ENOIACD5SaveOperation,ENVTIETypeLetter,ENVTIELetter)get_CreateVersion(oCreateVersion)); \
} \
HRESULT __stdcall  ENVTIEName::put_CreateVersion(CAT_VARIANT_BOOL iCreateVersion) \
{ \
return (ENVTIECALL(ENOIACD5SaveOperation,ENVTIETypeLetter,ENVTIELetter)put_CreateVersion(iCreateVersion)); \
} \
HRESULT __stdcall  ENVTIEName::get_RetainLock(CAT_VARIANT_BOOL & oRetainLock) \
{ \
return (ENVTIECALL(ENOIACD5SaveOperation,ENVTIETypeLetter,ENVTIELetter)get_RetainLock(oRetainLock)); \
} \
HRESULT __stdcall  ENVTIEName::put_RetainLock(CAT_VARIANT_BOOL iRetainLock) \
{ \
return (ENVTIECALL(ENOIACD5SaveOperation,ENVTIETypeLetter,ENVTIELetter)put_RetainLock(iRetainLock)); \
} \
HRESULT __stdcall  ENVTIEName::get_Comment(CATBSTR & oComment) \
{ \
return (ENVTIECALL(ENOIACD5SaveOperation,ENVTIETypeLetter,ENVTIELetter)get_Comment(oComment)); \
} \
HRESULT __stdcall  ENVTIEName::put_Comment(const CATBSTR & iComment) \
{ \
return (ENVTIECALL(ENOIACD5SaveOperation,ENVTIETypeLetter,ENVTIELetter)put_Comment(iComment)); \
} \
HRESULT __stdcall  ENVTIEName::get_AllowDiskSave(CAT_VARIANT_BOOL & oAllowDiskSave) \
{ \
return (ENVTIECALL(ENOIACD5SaveOperation,ENVTIETypeLetter,ENVTIELetter)get_AllowDiskSave(oAllowDiskSave)); \
} \
HRESULT __stdcall  ENVTIEName::put_AllowDiskSave(CAT_VARIANT_BOOL iAllowDiskSave) \
{ \
return (ENVTIECALL(ENOIACD5SaveOperation,ENVTIETypeLetter,ENVTIELetter)put_AllowDiskSave(iAllowDiskSave)); \
} \
HRESULT __stdcall  ENVTIEName::get_Items(ENOIACD5SaveItems *& oSaveItems) \
{ \
return (ENVTIECALL(ENOIACD5SaveOperation,ENVTIETypeLetter,ENVTIELetter)get_Items(oSaveItems)); \
} \
HRESULT __stdcall  ENVTIEName::ShowPanel() \
{ \
return (ENVTIECALL(ENOIACD5SaveOperation,ENVTIETypeLetter,ENVTIELetter)ShowPanel()); \
} \
HRESULT __stdcall  ENVTIEName::Run() \
{ \
return (ENVTIECALL(ENOIACD5SaveOperation,ENVTIETypeLetter,ENVTIELetter)Run()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(ENOIACD5SaveOperation,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(ENOIACD5SaveOperation,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(ENOIACD5SaveOperation,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(ENOIACD5SaveOperation,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(ENOIACD5SaveOperation,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOIACD5SaveOperation(classe)    TIEENOIACD5SaveOperation##classe


/* Common methods inside a TIE */
#define common_TIE_ENOIACD5SaveOperation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOIACD5SaveOperation, classe) \
 \
 \
CATImplementTIEMethods(ENOIACD5SaveOperation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOIACD5SaveOperation, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOIACD5SaveOperation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOIACD5SaveOperation, classe) \
 \
HRESULT __stdcall  TIEENOIACD5SaveOperation##classe::get_CreateVersion(CAT_VARIANT_BOOL & oCreateVersion) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oCreateVersion); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CreateVersion(oCreateVersion); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oCreateVersion); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5SaveOperation##classe::put_CreateVersion(CAT_VARIANT_BOOL iCreateVersion) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iCreateVersion); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CreateVersion(iCreateVersion); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iCreateVersion); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5SaveOperation##classe::get_RetainLock(CAT_VARIANT_BOOL & oRetainLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oRetainLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RetainLock(oRetainLock); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oRetainLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5SaveOperation##classe::put_RetainLock(CAT_VARIANT_BOOL iRetainLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iRetainLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RetainLock(iRetainLock); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iRetainLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5SaveOperation##classe::get_Comment(CATBSTR & oComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Comment(oComment); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5SaveOperation##classe::put_Comment(const CATBSTR & iComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Comment(iComment); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5SaveOperation##classe::get_AllowDiskSave(CAT_VARIANT_BOOL & oAllowDiskSave) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oAllowDiskSave); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AllowDiskSave(oAllowDiskSave); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oAllowDiskSave); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5SaveOperation##classe::put_AllowDiskSave(CAT_VARIANT_BOOL iAllowDiskSave) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iAllowDiskSave); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AllowDiskSave(iAllowDiskSave); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iAllowDiskSave); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5SaveOperation##classe::get_Items(ENOIACD5SaveItems *& oSaveItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oSaveItems); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Items(oSaveItems); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oSaveItems); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5SaveOperation##classe::ShowPanel() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ShowPanel(); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5SaveOperation##classe::Run() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Run(); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5SaveOperation##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5SaveOperation##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5SaveOperation##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5SaveOperation##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5SaveOperation##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOIACD5SaveOperation(classe) \
 \
 \
declare_TIE_ENOIACD5SaveOperation(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOIACD5SaveOperation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOIACD5SaveOperation,"ENOIACD5SaveOperation",ENOIACD5SaveOperation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOIACD5SaveOperation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOIACD5SaveOperation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOIACD5SaveOperation##classe(classe::MetaObject(),ENOIACD5SaveOperation::MetaObject(),(void *)CreateTIEENOIACD5SaveOperation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOIACD5SaveOperation(classe) \
 \
 \
declare_TIE_ENOIACD5SaveOperation(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOIACD5SaveOperation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOIACD5SaveOperation,"ENOIACD5SaveOperation",ENOIACD5SaveOperation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOIACD5SaveOperation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOIACD5SaveOperation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOIACD5SaveOperation##classe(classe::MetaObject(),ENOIACD5SaveOperation::MetaObject(),(void *)CreateTIEENOIACD5SaveOperation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOIACD5SaveOperation(classe) TIE_ENOIACD5SaveOperation(classe)
#else
#define BOA_ENOIACD5SaveOperation(classe) CATImplementBOA(ENOIACD5SaveOperation, classe)
#endif

#endif
