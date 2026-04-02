#ifndef __TIE_CATIAArrangementRectangles
#define __TIE_CATIAArrangementRectangles

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAArrangementRectangles.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAArrangementRectangles */
#define declare_TIE_CATIAArrangementRectangles(classe) \
 \
 \
class TIECATIAArrangementRectangles##classe : public CATIAArrangementRectangles \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAArrangementRectangles, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddRectangle(CATIAMove * iRelAxis, const CATSafeArrayVariant & iPosition, double iWidth, double iLength, CATIAArrangementRectangle *& oArrRectangle); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAArrangementRectangle *& oArrRectangle); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAArrangementRectangles(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddRectangle(CATIAMove * iRelAxis, const CATSafeArrayVariant & iPosition, double iWidth, double iLength, CATIAArrangementRectangle *& oArrRectangle); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAArrangementRectangle *& oArrRectangle); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAArrangementRectangles(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddRectangle(CATIAMove * iRelAxis, const CATSafeArrayVariant & iPosition, double iWidth, double iLength, CATIAArrangementRectangle *& oArrRectangle) \
{ \
return (ENVTIECALL(CATIAArrangementRectangles,ENVTIETypeLetter,ENVTIELetter)AddRectangle(iRelAxis,iPosition,iWidth,iLength,oArrRectangle)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAArrangementRectangle *& oArrRectangle) \
{ \
return (ENVTIECALL(CATIAArrangementRectangles,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oArrRectangle)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAArrangementRectangles,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAArrangementRectangles,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAArrangementRectangles,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAArrangementRectangles,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAArrangementRectangles,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAArrangementRectangles,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAArrangementRectangles,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAArrangementRectangles(classe)    TIECATIAArrangementRectangles##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAArrangementRectangles(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAArrangementRectangles, classe) \
 \
 \
CATImplementTIEMethods(CATIAArrangementRectangles, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAArrangementRectangles, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAArrangementRectangles, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAArrangementRectangles, classe) \
 \
HRESULT __stdcall  TIECATIAArrangementRectangles##classe::AddRectangle(CATIAMove * iRelAxis, const CATSafeArrayVariant & iPosition, double iWidth, double iLength, CATIAArrangementRectangle *& oArrRectangle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iRelAxis,&iPosition,&iWidth,&iLength,&oArrRectangle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddRectangle(iRelAxis,iPosition,iWidth,iLength,oArrRectangle); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iRelAxis,&iPosition,&iWidth,&iLength,&oArrRectangle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementRectangles##classe::Item(const CATVariant & iIndex, CATIAArrangementRectangle *& oArrRectangle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex,&oArrRectangle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oArrRectangle); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex,&oArrRectangle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementRectangles##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementRectangles##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementRectangles##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementRectangles##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementRectangles##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementRectangles##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementRectangles##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAArrangementRectangles(classe) \
 \
 \
declare_TIE_CATIAArrangementRectangles(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrangementRectangles##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrangementRectangles,"CATIAArrangementRectangles",CATIAArrangementRectangles::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrangementRectangles(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAArrangementRectangles, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrangementRectangles##classe(classe::MetaObject(),CATIAArrangementRectangles::MetaObject(),(void *)CreateTIECATIAArrangementRectangles##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAArrangementRectangles(classe) \
 \
 \
declare_TIE_CATIAArrangementRectangles(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrangementRectangles##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrangementRectangles,"CATIAArrangementRectangles",CATIAArrangementRectangles::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrangementRectangles(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAArrangementRectangles, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrangementRectangles##classe(classe::MetaObject(),CATIAArrangementRectangles::MetaObject(),(void *)CreateTIECATIAArrangementRectangles##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAArrangementRectangles(classe) TIE_CATIAArrangementRectangles(classe)
#else
#define BOA_CATIAArrangementRectangles(classe) CATImplementBOA(CATIAArrangementRectangles, classe)
#endif

#endif
