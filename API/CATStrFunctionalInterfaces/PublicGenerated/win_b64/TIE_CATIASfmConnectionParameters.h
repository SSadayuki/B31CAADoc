#ifndef __TIE_CATIASfmConnectionParameters
#define __TIE_CATIASfmConnectionParameters

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASfmConnectionParameters.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASfmConnectionParameters */
#define declare_TIE_CATIASfmConnectionParameters(classe) \
 \
 \
class TIECATIASfmConnectionParameters##classe : public CATIASfmConnectionParameters \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASfmConnectionParameters, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAParameter *& oStdConParm); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIASfmConnectionParameters(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAParameter *& oStdConParm); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIASfmConnectionParameters(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAParameter *& oStdConParm) \
{ \
return (ENVTIECALL(CATIASfmConnectionParameters,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oStdConParm)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASfmConnectionParameters,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASfmConnectionParameters,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIASfmConnectionParameters,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIASfmConnectionParameters,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIASfmConnectionParameters,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIASfmConnectionParameters,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASfmConnectionParameters(classe)    TIECATIASfmConnectionParameters##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASfmConnectionParameters(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASfmConnectionParameters, classe) \
 \
 \
CATImplementTIEMethods(CATIASfmConnectionParameters, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASfmConnectionParameters, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASfmConnectionParameters, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASfmConnectionParameters, classe) \
 \
HRESULT __stdcall  TIECATIASfmConnectionParameters##classe::Item(const CATVariant & iIndex, CATIAParameter *& oStdConParm) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iIndex,&oStdConParm); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oStdConParm); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iIndex,&oStdConParm); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmConnectionParameters##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmConnectionParameters##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmConnectionParameters##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmConnectionParameters##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmConnectionParameters##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmConnectionParameters##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASfmConnectionParameters(classe) \
 \
 \
declare_TIE_CATIASfmConnectionParameters(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmConnectionParameters##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmConnectionParameters,"CATIASfmConnectionParameters",CATIASfmConnectionParameters::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmConnectionParameters(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASfmConnectionParameters, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmConnectionParameters##classe(classe::MetaObject(),CATIASfmConnectionParameters::MetaObject(),(void *)CreateTIECATIASfmConnectionParameters##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASfmConnectionParameters(classe) \
 \
 \
declare_TIE_CATIASfmConnectionParameters(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmConnectionParameters##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmConnectionParameters,"CATIASfmConnectionParameters",CATIASfmConnectionParameters::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmConnectionParameters(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASfmConnectionParameters, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmConnectionParameters##classe(classe::MetaObject(),CATIASfmConnectionParameters::MetaObject(),(void *)CreateTIECATIASfmConnectionParameters##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASfmConnectionParameters(classe) TIE_CATIASfmConnectionParameters(classe)
#else
#define BOA_CATIASfmConnectionParameters(classe) CATImplementBOA(CATIASfmConnectionParameters, classe)
#endif

#endif
