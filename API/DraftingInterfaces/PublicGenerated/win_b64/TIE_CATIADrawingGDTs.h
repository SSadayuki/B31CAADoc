#ifndef __TIE_CATIADrawingGDTs
#define __TIE_CATIADrawingGDTs

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADrawingGDTs.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADrawingGDTs */
#define declare_TIE_CATIADrawingGDTs(classe) \
 \
 \
class TIECATIADrawingGDTs##classe : public CATIADrawingGDTs \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADrawingGDTs, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Add(double iPositionLeaderX, double iPositionLeaderY, double iPositionX, double iPositionY, CATLONG iGDTSymbol, const CATBSTR & iText, CATIADrawingGDT *& oNewDrawingGDT); \
      virtual HRESULT __stdcall Remove(CATLONG iIndex); \
      virtual HRESULT __stdcall Item(CATLONG iIndex, CATIADrawingGDT *& oItem); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIADrawingGDTs(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Add(double iPositionLeaderX, double iPositionLeaderY, double iPositionX, double iPositionY, CATLONG iGDTSymbol, const CATBSTR & iText, CATIADrawingGDT *& oNewDrawingGDT); \
virtual HRESULT __stdcall Remove(CATLONG iIndex); \
virtual HRESULT __stdcall Item(CATLONG iIndex, CATIADrawingGDT *& oItem); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIADrawingGDTs(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Add(double iPositionLeaderX, double iPositionLeaderY, double iPositionX, double iPositionY, CATLONG iGDTSymbol, const CATBSTR & iText, CATIADrawingGDT *& oNewDrawingGDT) \
{ \
return (ENVTIECALL(CATIADrawingGDTs,ENVTIETypeLetter,ENVTIELetter)Add(iPositionLeaderX,iPositionLeaderY,iPositionX,iPositionY,iGDTSymbol,iText,oNewDrawingGDT)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(CATLONG iIndex) \
{ \
return (ENVTIECALL(CATIADrawingGDTs,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::Item(CATLONG iIndex, CATIADrawingGDT *& oItem) \
{ \
return (ENVTIECALL(CATIADrawingGDTs,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oItem)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADrawingGDTs,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADrawingGDTs,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIADrawingGDTs,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIADrawingGDTs,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIADrawingGDTs,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIADrawingGDTs,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADrawingGDTs(classe)    TIECATIADrawingGDTs##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADrawingGDTs(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADrawingGDTs, classe) \
 \
 \
CATImplementTIEMethods(CATIADrawingGDTs, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADrawingGDTs, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADrawingGDTs, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADrawingGDTs, classe) \
 \
HRESULT __stdcall  TIECATIADrawingGDTs##classe::Add(double iPositionLeaderX, double iPositionLeaderY, double iPositionX, double iPositionY, CATLONG iGDTSymbol, const CATBSTR & iText, CATIADrawingGDT *& oNewDrawingGDT) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iPositionLeaderX,&iPositionLeaderY,&iPositionX,&iPositionY,&iGDTSymbol,&iText,&oNewDrawingGDT); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iPositionLeaderX,iPositionLeaderY,iPositionX,iPositionY,iGDTSymbol,iText,oNewDrawingGDT); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iPositionLeaderX,&iPositionLeaderY,&iPositionX,&iPositionY,&iGDTSymbol,&iText,&oNewDrawingGDT); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingGDTs##classe::Remove(CATLONG iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingGDTs##classe::Item(CATLONG iIndex, CATIADrawingGDT *& oItem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex,&oItem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oItem); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex,&oItem); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingGDTs##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingGDTs##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingGDTs##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingGDTs##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingGDTs##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingGDTs##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADrawingGDTs(classe) \
 \
 \
declare_TIE_CATIADrawingGDTs(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingGDTs##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingGDTs,"CATIADrawingGDTs",CATIADrawingGDTs::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingGDTs(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADrawingGDTs, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingGDTs##classe(classe::MetaObject(),CATIADrawingGDTs::MetaObject(),(void *)CreateTIECATIADrawingGDTs##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADrawingGDTs(classe) \
 \
 \
declare_TIE_CATIADrawingGDTs(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingGDTs##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingGDTs,"CATIADrawingGDTs",CATIADrawingGDTs::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingGDTs(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADrawingGDTs, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingGDTs##classe(classe::MetaObject(),CATIADrawingGDTs::MetaObject(),(void *)CreateTIECATIADrawingGDTs##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADrawingGDTs(classe) TIE_CATIADrawingGDTs(classe)
#else
#define BOA_CATIADrawingGDTs(classe) CATImplementBOA(CATIADrawingGDTs, classe)
#endif

#endif
