#ifndef __TIE_CATIAArrangementContours
#define __TIE_CATIAArrangementContours

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAArrangementContours.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAArrangementContours */
#define declare_TIE_CATIAArrangementContours(classe) \
 \
 \
class TIECATIAArrangementContours##classe : public CATIAArrangementContours \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAArrangementContours, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddRectangularContour(CATIAArrangementRectangle * iRectangle, CATIAArrangementContour *& oArrangementContour); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAArrangementContour *& oArrangementContour); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAArrangementContours(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddRectangularContour(CATIAArrangementRectangle * iRectangle, CATIAArrangementContour *& oArrangementContour); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAArrangementContour *& oArrangementContour); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAArrangementContours(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddRectangularContour(CATIAArrangementRectangle * iRectangle, CATIAArrangementContour *& oArrangementContour) \
{ \
return (ENVTIECALL(CATIAArrangementContours,ENVTIETypeLetter,ENVTIELetter)AddRectangularContour(iRectangle,oArrangementContour)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAArrangementContour *& oArrangementContour) \
{ \
return (ENVTIECALL(CATIAArrangementContours,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oArrangementContour)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAArrangementContours,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAArrangementContours,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAArrangementContours,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAArrangementContours,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAArrangementContours,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAArrangementContours,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAArrangementContours,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAArrangementContours(classe)    TIECATIAArrangementContours##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAArrangementContours(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAArrangementContours, classe) \
 \
 \
CATImplementTIEMethods(CATIAArrangementContours, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAArrangementContours, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAArrangementContours, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAArrangementContours, classe) \
 \
HRESULT __stdcall  TIECATIAArrangementContours##classe::AddRectangularContour(CATIAArrangementRectangle * iRectangle, CATIAArrangementContour *& oArrangementContour) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iRectangle,&oArrangementContour); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddRectangularContour(iRectangle,oArrangementContour); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iRectangle,&oArrangementContour); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementContours##classe::Item(const CATVariant & iIndex, CATIAArrangementContour *& oArrangementContour) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex,&oArrangementContour); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oArrangementContour); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex,&oArrangementContour); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementContours##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementContours##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementContours##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementContours##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementContours##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementContours##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementContours##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAArrangementContours(classe) \
 \
 \
declare_TIE_CATIAArrangementContours(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrangementContours##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrangementContours,"CATIAArrangementContours",CATIAArrangementContours::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrangementContours(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAArrangementContours, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrangementContours##classe(classe::MetaObject(),CATIAArrangementContours::MetaObject(),(void *)CreateTIECATIAArrangementContours##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAArrangementContours(classe) \
 \
 \
declare_TIE_CATIAArrangementContours(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrangementContours##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrangementContours,"CATIAArrangementContours",CATIAArrangementContours::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrangementContours(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAArrangementContours, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrangementContours##classe(classe::MetaObject(),CATIAArrangementContours::MetaObject(),(void *)CreateTIECATIAArrangementContours##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAArrangementContours(classe) TIE_CATIAArrangementContours(classe)
#else
#define BOA_CATIAArrangementContours(classe) CATImplementBOA(CATIAArrangementContours, classe)
#endif

#endif
