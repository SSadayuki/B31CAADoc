#ifndef __TIE_CATIAAssemblyFeatures
#define __TIE_CATIAAssemblyFeatures

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAssemblyFeatures.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAssemblyFeatures */
#define declare_TIE_CATIAAssemblyFeatures(classe) \
 \
 \
class TIECATIAAssemblyFeatures##classe : public CATIAAssemblyFeatures \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAssemblyFeatures, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddAssemblySplit(CATIAReference * iSplittingElement, CATIAProduct * iSplittingElemComp, CatSplitSide iSplitSide, CATIAProduct * iComponent, CATIAAssemblyFeature *& oAssemblyFeature); \
      virtual HRESULT __stdcall AddAssemblyRemove(CATIABody * iBody, CATIAProduct * iBodyComp, CATIAProduct * iComponent, CATIAAssemblyFeature *& oAssemblyFeature); \
      virtual HRESULT __stdcall AddAssemblyAdd(CATIABody * iBody, CATIAProduct * iBodyComp, CATIAProduct * iComponent, CATIAAssemblyFeature *& oAssemblyFeature); \
      virtual HRESULT __stdcall AddAssemblyPocket(CATIASketch * iSketch, CATIAProduct * iSketchComp, double iDepth, CATIAProduct * iComponent, CATIAAssemblyFeature *& oAssemblyFeature); \
      virtual HRESULT __stdcall AddAssemblyHole(CATIASketch * iSketch, CATIAProduct * iSketchComp, double iDepth, CATIAProduct * iComponent, CATIAAssemblyFeature *& oAssemblyFeature); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAAssemblyFeature *& oAssemblyFeature); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAAssemblyFeatures(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddAssemblySplit(CATIAReference * iSplittingElement, CATIAProduct * iSplittingElemComp, CatSplitSide iSplitSide, CATIAProduct * iComponent, CATIAAssemblyFeature *& oAssemblyFeature); \
virtual HRESULT __stdcall AddAssemblyRemove(CATIABody * iBody, CATIAProduct * iBodyComp, CATIAProduct * iComponent, CATIAAssemblyFeature *& oAssemblyFeature); \
virtual HRESULT __stdcall AddAssemblyAdd(CATIABody * iBody, CATIAProduct * iBodyComp, CATIAProduct * iComponent, CATIAAssemblyFeature *& oAssemblyFeature); \
virtual HRESULT __stdcall AddAssemblyPocket(CATIASketch * iSketch, CATIAProduct * iSketchComp, double iDepth, CATIAProduct * iComponent, CATIAAssemblyFeature *& oAssemblyFeature); \
virtual HRESULT __stdcall AddAssemblyHole(CATIASketch * iSketch, CATIAProduct * iSketchComp, double iDepth, CATIAProduct * iComponent, CATIAAssemblyFeature *& oAssemblyFeature); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAAssemblyFeature *& oAssemblyFeature); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAAssemblyFeatures(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddAssemblySplit(CATIAReference * iSplittingElement, CATIAProduct * iSplittingElemComp, CatSplitSide iSplitSide, CATIAProduct * iComponent, CATIAAssemblyFeature *& oAssemblyFeature) \
{ \
return (ENVTIECALL(CATIAAssemblyFeatures,ENVTIETypeLetter,ENVTIELetter)AddAssemblySplit(iSplittingElement,iSplittingElemComp,iSplitSide,iComponent,oAssemblyFeature)); \
} \
HRESULT __stdcall  ENVTIEName::AddAssemblyRemove(CATIABody * iBody, CATIAProduct * iBodyComp, CATIAProduct * iComponent, CATIAAssemblyFeature *& oAssemblyFeature) \
{ \
return (ENVTIECALL(CATIAAssemblyFeatures,ENVTIETypeLetter,ENVTIELetter)AddAssemblyRemove(iBody,iBodyComp,iComponent,oAssemblyFeature)); \
} \
HRESULT __stdcall  ENVTIEName::AddAssemblyAdd(CATIABody * iBody, CATIAProduct * iBodyComp, CATIAProduct * iComponent, CATIAAssemblyFeature *& oAssemblyFeature) \
{ \
return (ENVTIECALL(CATIAAssemblyFeatures,ENVTIETypeLetter,ENVTIELetter)AddAssemblyAdd(iBody,iBodyComp,iComponent,oAssemblyFeature)); \
} \
HRESULT __stdcall  ENVTIEName::AddAssemblyPocket(CATIASketch * iSketch, CATIAProduct * iSketchComp, double iDepth, CATIAProduct * iComponent, CATIAAssemblyFeature *& oAssemblyFeature) \
{ \
return (ENVTIECALL(CATIAAssemblyFeatures,ENVTIETypeLetter,ENVTIELetter)AddAssemblyPocket(iSketch,iSketchComp,iDepth,iComponent,oAssemblyFeature)); \
} \
HRESULT __stdcall  ENVTIEName::AddAssemblyHole(CATIASketch * iSketch, CATIAProduct * iSketchComp, double iDepth, CATIAProduct * iComponent, CATIAAssemblyFeature *& oAssemblyFeature) \
{ \
return (ENVTIECALL(CATIAAssemblyFeatures,ENVTIETypeLetter,ENVTIELetter)AddAssemblyHole(iSketch,iSketchComp,iDepth,iComponent,oAssemblyFeature)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAAssemblyFeature *& oAssemblyFeature) \
{ \
return (ENVTIECALL(CATIAAssemblyFeatures,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oAssemblyFeature)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAAssemblyFeatures,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAssemblyFeatures,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAssemblyFeatures,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAAssemblyFeatures,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAAssemblyFeatures,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAAssemblyFeatures,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAAssemblyFeatures,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAssemblyFeatures(classe)    TIECATIAAssemblyFeatures##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAssemblyFeatures(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAssemblyFeatures, classe) \
 \
 \
CATImplementTIEMethods(CATIAAssemblyFeatures, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAssemblyFeatures, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAssemblyFeatures, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAssemblyFeatures, classe) \
 \
HRESULT __stdcall  TIECATIAAssemblyFeatures##classe::AddAssemblySplit(CATIAReference * iSplittingElement, CATIAProduct * iSplittingElemComp, CatSplitSide iSplitSide, CATIAProduct * iComponent, CATIAAssemblyFeature *& oAssemblyFeature) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iSplittingElement,&iSplittingElemComp,&iSplitSide,&iComponent,&oAssemblyFeature); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddAssemblySplit(iSplittingElement,iSplittingElemComp,iSplitSide,iComponent,oAssemblyFeature); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iSplittingElement,&iSplittingElemComp,&iSplitSide,&iComponent,&oAssemblyFeature); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyFeatures##classe::AddAssemblyRemove(CATIABody * iBody, CATIAProduct * iBodyComp, CATIAProduct * iComponent, CATIAAssemblyFeature *& oAssemblyFeature) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iBody,&iBodyComp,&iComponent,&oAssemblyFeature); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddAssemblyRemove(iBody,iBodyComp,iComponent,oAssemblyFeature); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iBody,&iBodyComp,&iComponent,&oAssemblyFeature); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyFeatures##classe::AddAssemblyAdd(CATIABody * iBody, CATIAProduct * iBodyComp, CATIAProduct * iComponent, CATIAAssemblyFeature *& oAssemblyFeature) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iBody,&iBodyComp,&iComponent,&oAssemblyFeature); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddAssemblyAdd(iBody,iBodyComp,iComponent,oAssemblyFeature); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iBody,&iBodyComp,&iComponent,&oAssemblyFeature); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyFeatures##classe::AddAssemblyPocket(CATIASketch * iSketch, CATIAProduct * iSketchComp, double iDepth, CATIAProduct * iComponent, CATIAAssemblyFeature *& oAssemblyFeature) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iSketch,&iSketchComp,&iDepth,&iComponent,&oAssemblyFeature); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddAssemblyPocket(iSketch,iSketchComp,iDepth,iComponent,oAssemblyFeature); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iSketch,&iSketchComp,&iDepth,&iComponent,&oAssemblyFeature); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyFeatures##classe::AddAssemblyHole(CATIASketch * iSketch, CATIAProduct * iSketchComp, double iDepth, CATIAProduct * iComponent, CATIAAssemblyFeature *& oAssemblyFeature) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iSketch,&iSketchComp,&iDepth,&iComponent,&oAssemblyFeature); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddAssemblyHole(iSketch,iSketchComp,iDepth,iComponent,oAssemblyFeature); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iSketch,&iSketchComp,&iDepth,&iComponent,&oAssemblyFeature); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyFeatures##classe::Item(const CATVariant & iIndex, CATIAAssemblyFeature *& oAssemblyFeature) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIndex,&oAssemblyFeature); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oAssemblyFeature); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIndex,&oAssemblyFeature); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyFeatures##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblyFeatures##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblyFeatures##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblyFeatures##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblyFeatures##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblyFeatures##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblyFeatures##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAssemblyFeatures(classe) \
 \
 \
declare_TIE_CATIAAssemblyFeatures(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAssemblyFeatures##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAssemblyFeatures,"CATIAAssemblyFeatures",CATIAAssemblyFeatures::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAssemblyFeatures(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAssemblyFeatures, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAssemblyFeatures##classe(classe::MetaObject(),CATIAAssemblyFeatures::MetaObject(),(void *)CreateTIECATIAAssemblyFeatures##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAssemblyFeatures(classe) \
 \
 \
declare_TIE_CATIAAssemblyFeatures(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAssemblyFeatures##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAssemblyFeatures,"CATIAAssemblyFeatures",CATIAAssemblyFeatures::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAssemblyFeatures(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAssemblyFeatures, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAssemblyFeatures##classe(classe::MetaObject(),CATIAAssemblyFeatures::MetaObject(),(void *)CreateTIECATIAAssemblyFeatures##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAssemblyFeatures(classe) TIE_CATIAAssemblyFeatures(classe)
#else
#define BOA_CATIAAssemblyFeatures(classe) CATImplementBOA(CATIAAssemblyFeatures, classe)
#endif

#endif
