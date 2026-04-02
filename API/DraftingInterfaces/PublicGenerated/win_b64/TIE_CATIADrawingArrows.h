#ifndef __TIE_CATIADrawingArrows
#define __TIE_CATIADrawingArrows

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADrawingArrows.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADrawingArrows */
#define declare_TIE_CATIADrawingArrows(classe) \
 \
 \
class TIECATIADrawingArrows##classe : public CATIADrawingArrows \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADrawingArrows, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Add(double iHeadPointX, double iHeadPointY, double iTailPointX, double iTailPointY, CATIADrawingArrow *& oNewDrawingArrow); \
      virtual HRESULT __stdcall Remove(CATLONG iIndex); \
      virtual HRESULT __stdcall Item(CATLONG iIndex, CATIADrawingArrow *& oItem); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIADrawingArrows(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Add(double iHeadPointX, double iHeadPointY, double iTailPointX, double iTailPointY, CATIADrawingArrow *& oNewDrawingArrow); \
virtual HRESULT __stdcall Remove(CATLONG iIndex); \
virtual HRESULT __stdcall Item(CATLONG iIndex, CATIADrawingArrow *& oItem); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIADrawingArrows(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Add(double iHeadPointX, double iHeadPointY, double iTailPointX, double iTailPointY, CATIADrawingArrow *& oNewDrawingArrow) \
{ \
return (ENVTIECALL(CATIADrawingArrows,ENVTIETypeLetter,ENVTIELetter)Add(iHeadPointX,iHeadPointY,iTailPointX,iTailPointY,oNewDrawingArrow)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(CATLONG iIndex) \
{ \
return (ENVTIECALL(CATIADrawingArrows,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::Item(CATLONG iIndex, CATIADrawingArrow *& oItem) \
{ \
return (ENVTIECALL(CATIADrawingArrows,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oItem)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADrawingArrows,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADrawingArrows,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIADrawingArrows,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIADrawingArrows,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIADrawingArrows,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIADrawingArrows,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADrawingArrows(classe)    TIECATIADrawingArrows##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADrawingArrows(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADrawingArrows, classe) \
 \
 \
CATImplementTIEMethods(CATIADrawingArrows, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADrawingArrows, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADrawingArrows, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADrawingArrows, classe) \
 \
HRESULT __stdcall  TIECATIADrawingArrows##classe::Add(double iHeadPointX, double iHeadPointY, double iTailPointX, double iTailPointY, CATIADrawingArrow *& oNewDrawingArrow) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iHeadPointX,&iHeadPointY,&iTailPointX,&iTailPointY,&oNewDrawingArrow); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iHeadPointX,iHeadPointY,iTailPointX,iTailPointY,oNewDrawingArrow); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iHeadPointX,&iHeadPointY,&iTailPointX,&iTailPointY,&oNewDrawingArrow); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingArrows##classe::Remove(CATLONG iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingArrows##classe::Item(CATLONG iIndex, CATIADrawingArrow *& oItem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex,&oItem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oItem); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex,&oItem); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingArrows##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingArrows##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingArrows##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingArrows##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingArrows##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingArrows##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADrawingArrows(classe) \
 \
 \
declare_TIE_CATIADrawingArrows(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingArrows##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingArrows,"CATIADrawingArrows",CATIADrawingArrows::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingArrows(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADrawingArrows, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingArrows##classe(classe::MetaObject(),CATIADrawingArrows::MetaObject(),(void *)CreateTIECATIADrawingArrows##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADrawingArrows(classe) \
 \
 \
declare_TIE_CATIADrawingArrows(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingArrows##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingArrows,"CATIADrawingArrows",CATIADrawingArrows::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingArrows(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADrawingArrows, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingArrows##classe(classe::MetaObject(),CATIADrawingArrows::MetaObject(),(void *)CreateTIECATIADrawingArrows##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADrawingArrows(classe) TIE_CATIADrawingArrows(classe)
#else
#define BOA_CATIADrawingArrows(classe) CATImplementBOA(CATIADrawingArrows, classe)
#endif

#endif
