#ifndef __TIE_CATIAArrangementItemReservations
#define __TIE_CATIAArrangementItemReservations

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAArrangementItemReservations.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAArrangementItemReservations */
#define declare_TIE_CATIAArrangementItemReservations(classe) \
 \
 \
class TIECATIAArrangementItemReservations##classe : public CATIAArrangementItemReservations \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAArrangementItemReservations, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddItemReservation(CATIAMove * iRelAxis, const CATSafeArrayVariant & iPosition, double iXMin, double iYMin, double iZMin, double iXMax, double iYMax, double iZMax, CATIAArrangementItemReservation *& oArrItemReservation); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAArrangementItemReservation *& oArrItemReservation); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAArrangementItemReservations(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddItemReservation(CATIAMove * iRelAxis, const CATSafeArrayVariant & iPosition, double iXMin, double iYMin, double iZMin, double iXMax, double iYMax, double iZMax, CATIAArrangementItemReservation *& oArrItemReservation); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAArrangementItemReservation *& oArrItemReservation); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAArrangementItemReservations(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddItemReservation(CATIAMove * iRelAxis, const CATSafeArrayVariant & iPosition, double iXMin, double iYMin, double iZMin, double iXMax, double iYMax, double iZMax, CATIAArrangementItemReservation *& oArrItemReservation) \
{ \
return (ENVTIECALL(CATIAArrangementItemReservations,ENVTIETypeLetter,ENVTIELetter)AddItemReservation(iRelAxis,iPosition,iXMin,iYMin,iZMin,iXMax,iYMax,iZMax,oArrItemReservation)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAArrangementItemReservation *& oArrItemReservation) \
{ \
return (ENVTIECALL(CATIAArrangementItemReservations,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oArrItemReservation)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAArrangementItemReservations,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAArrangementItemReservations,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAArrangementItemReservations,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAArrangementItemReservations,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAArrangementItemReservations,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAArrangementItemReservations,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAArrangementItemReservations,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAArrangementItemReservations(classe)    TIECATIAArrangementItemReservations##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAArrangementItemReservations(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAArrangementItemReservations, classe) \
 \
 \
CATImplementTIEMethods(CATIAArrangementItemReservations, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAArrangementItemReservations, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAArrangementItemReservations, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAArrangementItemReservations, classe) \
 \
HRESULT __stdcall  TIECATIAArrangementItemReservations##classe::AddItemReservation(CATIAMove * iRelAxis, const CATSafeArrayVariant & iPosition, double iXMin, double iYMin, double iZMin, double iXMax, double iYMax, double iZMax, CATIAArrangementItemReservation *& oArrItemReservation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iRelAxis,&iPosition,&iXMin,&iYMin,&iZMin,&iXMax,&iYMax,&iZMax,&oArrItemReservation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddItemReservation(iRelAxis,iPosition,iXMin,iYMin,iZMin,iXMax,iYMax,iZMax,oArrItemReservation); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iRelAxis,&iPosition,&iXMin,&iYMin,&iZMin,&iXMax,&iYMax,&iZMax,&oArrItemReservation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementItemReservations##classe::Item(const CATVariant & iIndex, CATIAArrangementItemReservation *& oArrItemReservation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex,&oArrItemReservation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oArrItemReservation); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex,&oArrItemReservation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementItemReservations##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementItemReservations##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementItemReservations##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementItemReservations##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementItemReservations##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementItemReservations##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementItemReservations##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAArrangementItemReservations(classe) \
 \
 \
declare_TIE_CATIAArrangementItemReservations(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrangementItemReservations##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrangementItemReservations,"CATIAArrangementItemReservations",CATIAArrangementItemReservations::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrangementItemReservations(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAArrangementItemReservations, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrangementItemReservations##classe(classe::MetaObject(),CATIAArrangementItemReservations::MetaObject(),(void *)CreateTIECATIAArrangementItemReservations##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAArrangementItemReservations(classe) \
 \
 \
declare_TIE_CATIAArrangementItemReservations(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrangementItemReservations##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrangementItemReservations,"CATIAArrangementItemReservations",CATIAArrangementItemReservations::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrangementItemReservations(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAArrangementItemReservations, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrangementItemReservations##classe(classe::MetaObject(),CATIAArrangementItemReservations::MetaObject(),(void *)CreateTIECATIAArrangementItemReservations##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAArrangementItemReservations(classe) TIE_CATIAArrangementItemReservations(classe)
#else
#define BOA_CATIAArrangementItemReservations(classe) CATImplementBOA(CATIAArrangementItemReservations, classe)
#endif

#endif
