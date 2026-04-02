#ifndef __TIE_CATIAStrFeatureFactory
#define __TIE_CATIAStrFeatureFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAStrFeatureFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAStrFeatureFactory */
#define declare_TIE_CATIAStrFeatureFactory(classe) \
 \
 \
class TIECATIAStrFeatureFactory##classe : public CATIAStrFeatureFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAStrFeatureFactory, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddNibbling(const CATSafeArrayVariant & iListOfLimitingElements, const CATBSTR & iNibblingType, CATIAStrNibblingFeature *& oNibblingFeature); \
      virtual HRESULT __stdcall AddCutoutWithAfterFormingMode(CATIAReference * iContour, CATIAReference * iDirection, CATIAStrCutoutFeature *& oCutout); \
      virtual HRESULT __stdcall AddCutoutWithBeforeFormingMode(CATIAReference * iContour, CATIAReference * iSurface, CATIAStrCutoutFeature *& oCutout); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAStrFeatureFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddNibbling(const CATSafeArrayVariant & iListOfLimitingElements, const CATBSTR & iNibblingType, CATIAStrNibblingFeature *& oNibblingFeature); \
virtual HRESULT __stdcall AddCutoutWithAfterFormingMode(CATIAReference * iContour, CATIAReference * iDirection, CATIAStrCutoutFeature *& oCutout); \
virtual HRESULT __stdcall AddCutoutWithBeforeFormingMode(CATIAReference * iContour, CATIAReference * iSurface, CATIAStrCutoutFeature *& oCutout); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAStrFeatureFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddNibbling(const CATSafeArrayVariant & iListOfLimitingElements, const CATBSTR & iNibblingType, CATIAStrNibblingFeature *& oNibblingFeature) \
{ \
return (ENVTIECALL(CATIAStrFeatureFactory,ENVTIETypeLetter,ENVTIELetter)AddNibbling(iListOfLimitingElements,iNibblingType,oNibblingFeature)); \
} \
HRESULT __stdcall  ENVTIEName::AddCutoutWithAfterFormingMode(CATIAReference * iContour, CATIAReference * iDirection, CATIAStrCutoutFeature *& oCutout) \
{ \
return (ENVTIECALL(CATIAStrFeatureFactory,ENVTIETypeLetter,ENVTIELetter)AddCutoutWithAfterFormingMode(iContour,iDirection,oCutout)); \
} \
HRESULT __stdcall  ENVTIEName::AddCutoutWithBeforeFormingMode(CATIAReference * iContour, CATIAReference * iSurface, CATIAStrCutoutFeature *& oCutout) \
{ \
return (ENVTIECALL(CATIAStrFeatureFactory,ENVTIETypeLetter,ENVTIELetter)AddCutoutWithBeforeFormingMode(iContour,iSurface,oCutout)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAStrFeatureFactory,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAStrFeatureFactory,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAStrFeatureFactory,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAStrFeatureFactory,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAStrFeatureFactory,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAStrFeatureFactory(classe)    TIECATIAStrFeatureFactory##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAStrFeatureFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAStrFeatureFactory, classe) \
 \
 \
CATImplementTIEMethods(CATIAStrFeatureFactory, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAStrFeatureFactory, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAStrFeatureFactory, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAStrFeatureFactory, classe) \
 \
HRESULT __stdcall  TIECATIAStrFeatureFactory##classe::AddNibbling(const CATSafeArrayVariant & iListOfLimitingElements, const CATBSTR & iNibblingType, CATIAStrNibblingFeature *& oNibblingFeature) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iListOfLimitingElements,&iNibblingType,&oNibblingFeature); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNibbling(iListOfLimitingElements,iNibblingType,oNibblingFeature); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iListOfLimitingElements,&iNibblingType,&oNibblingFeature); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrFeatureFactory##classe::AddCutoutWithAfterFormingMode(CATIAReference * iContour, CATIAReference * iDirection, CATIAStrCutoutFeature *& oCutout) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iContour,&iDirection,&oCutout); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddCutoutWithAfterFormingMode(iContour,iDirection,oCutout); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iContour,&iDirection,&oCutout); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrFeatureFactory##classe::AddCutoutWithBeforeFormingMode(CATIAReference * iContour, CATIAReference * iSurface, CATIAStrCutoutFeature *& oCutout) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iContour,&iSurface,&oCutout); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddCutoutWithBeforeFormingMode(iContour,iSurface,oCutout); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iContour,&iSurface,&oCutout); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrFeatureFactory##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrFeatureFactory##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrFeatureFactory##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrFeatureFactory##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrFeatureFactory##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAStrFeatureFactory(classe) \
 \
 \
declare_TIE_CATIAStrFeatureFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStrFeatureFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStrFeatureFactory,"CATIAStrFeatureFactory",CATIAStrFeatureFactory::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStrFeatureFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAStrFeatureFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStrFeatureFactory##classe(classe::MetaObject(),CATIAStrFeatureFactory::MetaObject(),(void *)CreateTIECATIAStrFeatureFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAStrFeatureFactory(classe) \
 \
 \
declare_TIE_CATIAStrFeatureFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStrFeatureFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStrFeatureFactory,"CATIAStrFeatureFactory",CATIAStrFeatureFactory::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStrFeatureFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAStrFeatureFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStrFeatureFactory##classe(classe::MetaObject(),CATIAStrFeatureFactory::MetaObject(),(void *)CreateTIECATIAStrFeatureFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAStrFeatureFactory(classe) TIE_CATIAStrFeatureFactory(classe)
#else
#define BOA_CATIAStrFeatureFactory(classe) CATImplementBOA(CATIAStrFeatureFactory, classe)
#endif

#endif
