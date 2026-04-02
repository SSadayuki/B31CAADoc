#ifndef __TIE_CATIAAnalysisLocalEntities
#define __TIE_CATIAAnalysisLocalEntities

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAnalysisLocalEntities.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnalysisLocalEntities */
#define declare_TIE_CATIAAnalysisLocalEntities(classe) \
 \
 \
class TIECATIAAnalysisLocalEntities##classe : public CATIAAnalysisLocalEntities \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnalysisLocalEntities, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Add(const CATBSTR & iType, CATIAAnalysisLocalEntity *& oEntity); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAAnalysisLocalEntity *& oEntity); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAAnalysisLocalEntities(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Add(const CATBSTR & iType, CATIAAnalysisLocalEntity *& oEntity); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAAnalysisLocalEntity *& oEntity); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAAnalysisLocalEntities(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Add(const CATBSTR & iType, CATIAAnalysisLocalEntity *& oEntity) \
{ \
return (ENVTIECALL(CATIAAnalysisLocalEntities,ENVTIETypeLetter,ENVTIELetter)Add(iType,oEntity)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAAnalysisLocalEntity *& oEntity) \
{ \
return (ENVTIECALL(CATIAAnalysisLocalEntities,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oEntity)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAAnalysisLocalEntities,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnalysisLocalEntities,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnalysisLocalEntities,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAAnalysisLocalEntities,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAAnalysisLocalEntities,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAAnalysisLocalEntities,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAAnalysisLocalEntities,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnalysisLocalEntities(classe)    TIECATIAAnalysisLocalEntities##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnalysisLocalEntities(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnalysisLocalEntities, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnalysisLocalEntities, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnalysisLocalEntities, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnalysisLocalEntities, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnalysisLocalEntities, classe) \
 \
HRESULT __stdcall  TIECATIAAnalysisLocalEntities##classe::Add(const CATBSTR & iType, CATIAAnalysisLocalEntity *& oEntity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iType,&oEntity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iType,oEntity); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iType,&oEntity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisLocalEntities##classe::Item(const CATVariant & iIndex, CATIAAnalysisLocalEntity *& oEntity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex,&oEntity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oEntity); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex,&oEntity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisLocalEntities##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisLocalEntities##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisLocalEntities##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisLocalEntities##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisLocalEntities##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisLocalEntities##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisLocalEntities##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnalysisLocalEntities(classe) \
 \
 \
declare_TIE_CATIAAnalysisLocalEntities(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisLocalEntities##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisLocalEntities,"CATIAAnalysisLocalEntities",CATIAAnalysisLocalEntities::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisLocalEntities(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnalysisLocalEntities, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisLocalEntities##classe(classe::MetaObject(),CATIAAnalysisLocalEntities::MetaObject(),(void *)CreateTIECATIAAnalysisLocalEntities##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnalysisLocalEntities(classe) \
 \
 \
declare_TIE_CATIAAnalysisLocalEntities(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisLocalEntities##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisLocalEntities,"CATIAAnalysisLocalEntities",CATIAAnalysisLocalEntities::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisLocalEntities(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnalysisLocalEntities, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisLocalEntities##classe(classe::MetaObject(),CATIAAnalysisLocalEntities::MetaObject(),(void *)CreateTIECATIAAnalysisLocalEntities##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnalysisLocalEntities(classe) TIE_CATIAAnalysisLocalEntities(classe)
#else
#define BOA_CATIAAnalysisLocalEntities(classe) CATImplementBOA(CATIAAnalysisLocalEntities, classe)
#endif

#endif
