#ifndef __TIE_CATIADrawingWeldings
#define __TIE_CATIADrawingWeldings

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADrawingWeldings.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADrawingWeldings */
#define declare_TIE_CATIADrawingWeldings(classe) \
 \
 \
class TIECATIADrawingWeldings##classe : public CATIADrawingWeldings \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADrawingWeldings, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Add(CatWeldingSymbol iSymbol, double iPositionX, double iPositionY, CATIADrawingWelding *& oNewDrawingWelding); \
      virtual HRESULT __stdcall Remove(CATLONG iIndex); \
      virtual HRESULT __stdcall Item(CATLONG iIndex, CATIADrawingWelding *& oItem); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIADrawingWeldings(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Add(CatWeldingSymbol iSymbol, double iPositionX, double iPositionY, CATIADrawingWelding *& oNewDrawingWelding); \
virtual HRESULT __stdcall Remove(CATLONG iIndex); \
virtual HRESULT __stdcall Item(CATLONG iIndex, CATIADrawingWelding *& oItem); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIADrawingWeldings(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Add(CatWeldingSymbol iSymbol, double iPositionX, double iPositionY, CATIADrawingWelding *& oNewDrawingWelding) \
{ \
return (ENVTIECALL(CATIADrawingWeldings,ENVTIETypeLetter,ENVTIELetter)Add(iSymbol,iPositionX,iPositionY,oNewDrawingWelding)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(CATLONG iIndex) \
{ \
return (ENVTIECALL(CATIADrawingWeldings,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::Item(CATLONG iIndex, CATIADrawingWelding *& oItem) \
{ \
return (ENVTIECALL(CATIADrawingWeldings,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oItem)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADrawingWeldings,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADrawingWeldings,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIADrawingWeldings,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIADrawingWeldings,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIADrawingWeldings,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIADrawingWeldings,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADrawingWeldings(classe)    TIECATIADrawingWeldings##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADrawingWeldings(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADrawingWeldings, classe) \
 \
 \
CATImplementTIEMethods(CATIADrawingWeldings, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADrawingWeldings, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADrawingWeldings, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADrawingWeldings, classe) \
 \
HRESULT __stdcall  TIECATIADrawingWeldings##classe::Add(CatWeldingSymbol iSymbol, double iPositionX, double iPositionY, CATIADrawingWelding *& oNewDrawingWelding) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iSymbol,&iPositionX,&iPositionY,&oNewDrawingWelding); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iSymbol,iPositionX,iPositionY,oNewDrawingWelding); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iSymbol,&iPositionX,&iPositionY,&oNewDrawingWelding); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingWeldings##classe::Remove(CATLONG iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingWeldings##classe::Item(CATLONG iIndex, CATIADrawingWelding *& oItem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex,&oItem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oItem); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex,&oItem); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingWeldings##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingWeldings##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingWeldings##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingWeldings##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingWeldings##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingWeldings##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADrawingWeldings(classe) \
 \
 \
declare_TIE_CATIADrawingWeldings(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingWeldings##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingWeldings,"CATIADrawingWeldings",CATIADrawingWeldings::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingWeldings(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADrawingWeldings, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingWeldings##classe(classe::MetaObject(),CATIADrawingWeldings::MetaObject(),(void *)CreateTIECATIADrawingWeldings##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADrawingWeldings(classe) \
 \
 \
declare_TIE_CATIADrawingWeldings(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingWeldings##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingWeldings,"CATIADrawingWeldings",CATIADrawingWeldings::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingWeldings(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADrawingWeldings, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingWeldings##classe(classe::MetaObject(),CATIADrawingWeldings::MetaObject(),(void *)CreateTIECATIADrawingWeldings##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADrawingWeldings(classe) TIE_CATIADrawingWeldings(classe)
#else
#define BOA_CATIADrawingWeldings(classe) CATImplementBOA(CATIADrawingWeldings, classe)
#endif

#endif
