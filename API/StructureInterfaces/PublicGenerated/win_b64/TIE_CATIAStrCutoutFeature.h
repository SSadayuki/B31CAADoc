#ifndef __TIE_CATIAStrCutoutFeature
#define __TIE_CATIAStrCutoutFeature

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAStrCutoutFeature.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAStrCutoutFeature */
#define declare_TIE_CATIAStrCutoutFeature(classe) \
 \
 \
class TIECATIAStrCutoutFeature##classe : public CATIAStrCutoutFeature \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAStrCutoutFeature, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Contour(CATIAReference *& oContour); \
      virtual HRESULT __stdcall put_Contour(CATIAReference * iContour); \
      virtual HRESULT __stdcall get_CutoutType(CATBSTR & oCutoutType); \
      virtual HRESULT __stdcall put_CutoutType(const CATBSTR & iCutoutType); \
      virtual HRESULT __stdcall get_Direction(CATSafeArrayVariant *& oDirection); \
      virtual HRESULT __stdcall put_Direction(const CATSafeArrayVariant & iDirection); \
      virtual HRESULT __stdcall get_DirectionElement(CATIAReference *& oDirectionElement); \
      virtual HRESULT __stdcall put_DirectionElement(CATIAReference * oDirectionElement); \
      virtual HRESULT __stdcall get_ReferenceSurface(CATIAReference *& oSurface); \
      virtual HRESULT __stdcall put_ReferenceSurface(CATIAReference * iSurface); \
      virtual HRESULT __stdcall GetObject(CATIAProduct *& oObject); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAStrCutoutFeature(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Contour(CATIAReference *& oContour); \
virtual HRESULT __stdcall put_Contour(CATIAReference * iContour); \
virtual HRESULT __stdcall get_CutoutType(CATBSTR & oCutoutType); \
virtual HRESULT __stdcall put_CutoutType(const CATBSTR & iCutoutType); \
virtual HRESULT __stdcall get_Direction(CATSafeArrayVariant *& oDirection); \
virtual HRESULT __stdcall put_Direction(const CATSafeArrayVariant & iDirection); \
virtual HRESULT __stdcall get_DirectionElement(CATIAReference *& oDirectionElement); \
virtual HRESULT __stdcall put_DirectionElement(CATIAReference * oDirectionElement); \
virtual HRESULT __stdcall get_ReferenceSurface(CATIAReference *& oSurface); \
virtual HRESULT __stdcall put_ReferenceSurface(CATIAReference * iSurface); \
virtual HRESULT __stdcall GetObject(CATIAProduct *& oObject); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAStrCutoutFeature(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Contour(CATIAReference *& oContour) \
{ \
return (ENVTIECALL(CATIAStrCutoutFeature,ENVTIETypeLetter,ENVTIELetter)get_Contour(oContour)); \
} \
HRESULT __stdcall  ENVTIEName::put_Contour(CATIAReference * iContour) \
{ \
return (ENVTIECALL(CATIAStrCutoutFeature,ENVTIETypeLetter,ENVTIELetter)put_Contour(iContour)); \
} \
HRESULT __stdcall  ENVTIEName::get_CutoutType(CATBSTR & oCutoutType) \
{ \
return (ENVTIECALL(CATIAStrCutoutFeature,ENVTIETypeLetter,ENVTIELetter)get_CutoutType(oCutoutType)); \
} \
HRESULT __stdcall  ENVTIEName::put_CutoutType(const CATBSTR & iCutoutType) \
{ \
return (ENVTIECALL(CATIAStrCutoutFeature,ENVTIETypeLetter,ENVTIELetter)put_CutoutType(iCutoutType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Direction(CATSafeArrayVariant *& oDirection) \
{ \
return (ENVTIECALL(CATIAStrCutoutFeature,ENVTIETypeLetter,ENVTIELetter)get_Direction(oDirection)); \
} \
HRESULT __stdcall  ENVTIEName::put_Direction(const CATSafeArrayVariant & iDirection) \
{ \
return (ENVTIECALL(CATIAStrCutoutFeature,ENVTIETypeLetter,ENVTIELetter)put_Direction(iDirection)); \
} \
HRESULT __stdcall  ENVTIEName::get_DirectionElement(CATIAReference *& oDirectionElement) \
{ \
return (ENVTIECALL(CATIAStrCutoutFeature,ENVTIETypeLetter,ENVTIELetter)get_DirectionElement(oDirectionElement)); \
} \
HRESULT __stdcall  ENVTIEName::put_DirectionElement(CATIAReference * oDirectionElement) \
{ \
return (ENVTIECALL(CATIAStrCutoutFeature,ENVTIETypeLetter,ENVTIELetter)put_DirectionElement(oDirectionElement)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReferenceSurface(CATIAReference *& oSurface) \
{ \
return (ENVTIECALL(CATIAStrCutoutFeature,ENVTIETypeLetter,ENVTIELetter)get_ReferenceSurface(oSurface)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReferenceSurface(CATIAReference * iSurface) \
{ \
return (ENVTIECALL(CATIAStrCutoutFeature,ENVTIETypeLetter,ENVTIELetter)put_ReferenceSurface(iSurface)); \
} \
HRESULT __stdcall  ENVTIEName::GetObject(CATIAProduct *& oObject) \
{ \
return (ENVTIECALL(CATIAStrCutoutFeature,ENVTIETypeLetter,ENVTIELetter)GetObject(oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAStrCutoutFeature,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAStrCutoutFeature,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAStrCutoutFeature,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAStrCutoutFeature,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAStrCutoutFeature,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAStrCutoutFeature(classe)    TIECATIAStrCutoutFeature##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAStrCutoutFeature(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAStrCutoutFeature, classe) \
 \
 \
CATImplementTIEMethods(CATIAStrCutoutFeature, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAStrCutoutFeature, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAStrCutoutFeature, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAStrCutoutFeature, classe) \
 \
HRESULT __stdcall  TIECATIAStrCutoutFeature##classe::get_Contour(CATIAReference *& oContour) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oContour); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Contour(oContour); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oContour); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrCutoutFeature##classe::put_Contour(CATIAReference * iContour) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iContour); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Contour(iContour); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iContour); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrCutoutFeature##classe::get_CutoutType(CATBSTR & oCutoutType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oCutoutType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CutoutType(oCutoutType); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oCutoutType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrCutoutFeature##classe::put_CutoutType(const CATBSTR & iCutoutType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iCutoutType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CutoutType(iCutoutType); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iCutoutType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrCutoutFeature##classe::get_Direction(CATSafeArrayVariant *& oDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Direction(oDirection); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrCutoutFeature##classe::put_Direction(const CATSafeArrayVariant & iDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Direction(iDirection); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrCutoutFeature##classe::get_DirectionElement(CATIAReference *& oDirectionElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oDirectionElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DirectionElement(oDirectionElement); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oDirectionElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrCutoutFeature##classe::put_DirectionElement(CATIAReference * oDirectionElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oDirectionElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DirectionElement(oDirectionElement); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oDirectionElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrCutoutFeature##classe::get_ReferenceSurface(CATIAReference *& oSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReferenceSurface(oSurface); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrCutoutFeature##classe::put_ReferenceSurface(CATIAReference * iSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReferenceSurface(iSurface); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrCutoutFeature##classe::GetObject(CATIAProduct *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetObject(oObject); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrCutoutFeature##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrCutoutFeature##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrCutoutFeature##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrCutoutFeature##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrCutoutFeature##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAStrCutoutFeature(classe) \
 \
 \
declare_TIE_CATIAStrCutoutFeature(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStrCutoutFeature##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStrCutoutFeature,"CATIAStrCutoutFeature",CATIAStrCutoutFeature::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStrCutoutFeature(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAStrCutoutFeature, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStrCutoutFeature##classe(classe::MetaObject(),CATIAStrCutoutFeature::MetaObject(),(void *)CreateTIECATIAStrCutoutFeature##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAStrCutoutFeature(classe) \
 \
 \
declare_TIE_CATIAStrCutoutFeature(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStrCutoutFeature##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStrCutoutFeature,"CATIAStrCutoutFeature",CATIAStrCutoutFeature::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStrCutoutFeature(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAStrCutoutFeature, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStrCutoutFeature##classe(classe::MetaObject(),CATIAStrCutoutFeature::MetaObject(),(void *)CreateTIECATIAStrCutoutFeature##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAStrCutoutFeature(classe) TIE_CATIAStrCutoutFeature(classe)
#else
#define BOA_CATIAStrCutoutFeature(classe) CATImplementBOA(CATIAStrCutoutFeature, classe)
#endif

#endif
