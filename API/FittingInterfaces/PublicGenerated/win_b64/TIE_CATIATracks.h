#ifndef __TIE_CATIATracks
#define __TIE_CATIATracks

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIATracks.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIATracks */
#define declare_TIE_CATIATracks(classe) \
 \
 \
class TIECATIATracks##classe : public CATIATracks \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIATracks, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddFromFile(const CATBSTR & iFileName); \
      virtual HRESULT __stdcall Add(CATIASampled *& oNewSampled); \
      virtual HRESULT __stdcall AddFromSel(CATIASampled *& oNewSampled); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIASampled *& oSampled); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIATracks(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddFromFile(const CATBSTR & iFileName); \
virtual HRESULT __stdcall Add(CATIASampled *& oNewSampled); \
virtual HRESULT __stdcall AddFromSel(CATIASampled *& oNewSampled); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIASampled *& oSampled); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIATracks(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddFromFile(const CATBSTR & iFileName) \
{ \
return (ENVTIECALL(CATIATracks,ENVTIETypeLetter,ENVTIELetter)AddFromFile(iFileName)); \
} \
HRESULT __stdcall  ENVTIEName::Add(CATIASampled *& oNewSampled) \
{ \
return (ENVTIECALL(CATIATracks,ENVTIETypeLetter,ENVTIELetter)Add(oNewSampled)); \
} \
HRESULT __stdcall  ENVTIEName::AddFromSel(CATIASampled *& oNewSampled) \
{ \
return (ENVTIECALL(CATIATracks,ENVTIETypeLetter,ENVTIELetter)AddFromSel(oNewSampled)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIASampled *& oSampled) \
{ \
return (ENVTIECALL(CATIATracks,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oSampled)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIATracks,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIATracks,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIATracks,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIATracks,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIATracks,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIATracks,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIATracks,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIATracks(classe)    TIECATIATracks##classe


/* Common methods inside a TIE */
#define common_TIE_CATIATracks(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIATracks, classe) \
 \
 \
CATImplementTIEMethods(CATIATracks, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIATracks, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIATracks, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIATracks, classe) \
 \
HRESULT __stdcall  TIECATIATracks##classe::AddFromFile(const CATBSTR & iFileName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iFileName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFromFile(iFileName); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iFileName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATracks##classe::Add(CATIASampled *& oNewSampled) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oNewSampled); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(oNewSampled); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oNewSampled); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATracks##classe::AddFromSel(CATIASampled *& oNewSampled) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oNewSampled); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFromSel(oNewSampled); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oNewSampled); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATracks##classe::Item(const CATVariant & iIndex, CATIASampled *& oSampled) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIndex,&oSampled); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oSampled); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIndex,&oSampled); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATracks##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATracks##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATracks##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATracks##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATracks##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATracks##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATracks##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIATracks(classe) \
 \
 \
declare_TIE_CATIATracks(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATracks##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATracks,"CATIATracks",CATIATracks::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATracks(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIATracks, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATracks##classe(classe::MetaObject(),CATIATracks::MetaObject(),(void *)CreateTIECATIATracks##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIATracks(classe) \
 \
 \
declare_TIE_CATIATracks(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATracks##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATracks,"CATIATracks",CATIATracks::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATracks(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIATracks, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATracks##classe(classe::MetaObject(),CATIATracks::MetaObject(),(void *)CreateTIECATIATracks##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIATracks(classe) TIE_CATIATracks(classe)
#else
#define BOA_CATIATracks(classe) CATImplementBOA(CATIATracks, classe)
#endif

#endif
