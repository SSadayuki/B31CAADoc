#ifndef __TIE_CATIASfmStandardPosStrategyParameters
#define __TIE_CATIASfmStandardPosStrategyParameters

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASfmStandardPosStrategyParameters.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASfmStandardPosStrategyParameters */
#define declare_TIE_CATIASfmStandardPosStrategyParameters(classe) \
 \
 \
class TIECATIASfmStandardPosStrategyParameters##classe : public CATIASfmStandardPosStrategyParameters \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASfmStandardPosStrategyParameters, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATBaseUnknown *& oStdPosParm); \
      virtual HRESULT __stdcall SetPosParamData(const CATBSTR & iPosStrategyName, double iRotationAngle, CATIASfmReferences * iUrefElem, double iUOffset, CATIASfmReferences * iVRefElem, double iVOffset); \
      virtual HRESULT __stdcall get_Count(CATLONG & oSize); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASfmStandardPosStrategyParameters(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATBaseUnknown *& oStdPosParm); \
virtual HRESULT __stdcall SetPosParamData(const CATBSTR & iPosStrategyName, double iRotationAngle, CATIASfmReferences * iUrefElem, double iUOffset, CATIASfmReferences * iVRefElem, double iVOffset); \
virtual HRESULT __stdcall get_Count(CATLONG & oSize); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASfmStandardPosStrategyParameters(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATBaseUnknown *& oStdPosParm) \
{ \
return (ENVTIECALL(CATIASfmStandardPosStrategyParameters,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oStdPosParm)); \
} \
HRESULT __stdcall  ENVTIEName::SetPosParamData(const CATBSTR & iPosStrategyName, double iRotationAngle, CATIASfmReferences * iUrefElem, double iUOffset, CATIASfmReferences * iVRefElem, double iVOffset) \
{ \
return (ENVTIECALL(CATIASfmStandardPosStrategyParameters,ENVTIETypeLetter,ENVTIELetter)SetPosParamData(iPosStrategyName,iRotationAngle,iUrefElem,iUOffset,iVRefElem,iVOffset)); \
} \
HRESULT __stdcall  ENVTIEName::get_Count(CATLONG & oSize) \
{ \
return (ENVTIECALL(CATIASfmStandardPosStrategyParameters,ENVTIETypeLetter,ENVTIELetter)get_Count(oSize)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASfmStandardPosStrategyParameters,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASfmStandardPosStrategyParameters,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmStandardPosStrategyParameters,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmStandardPosStrategyParameters,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASfmStandardPosStrategyParameters,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASfmStandardPosStrategyParameters(classe)    TIECATIASfmStandardPosStrategyParameters##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASfmStandardPosStrategyParameters(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASfmStandardPosStrategyParameters, classe) \
 \
 \
CATImplementTIEMethods(CATIASfmStandardPosStrategyParameters, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASfmStandardPosStrategyParameters, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASfmStandardPosStrategyParameters, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASfmStandardPosStrategyParameters, classe) \
 \
HRESULT __stdcall  TIECATIASfmStandardPosStrategyParameters##classe::Item(const CATVariant & iIndex, CATBaseUnknown *& oStdPosParm) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iIndex,&oStdPosParm); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oStdPosParm); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iIndex,&oStdPosParm); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmStandardPosStrategyParameters##classe::SetPosParamData(const CATBSTR & iPosStrategyName, double iRotationAngle, CATIASfmReferences * iUrefElem, double iUOffset, CATIASfmReferences * iVRefElem, double iVOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iPosStrategyName,&iRotationAngle,&iUrefElem,&iUOffset,&iVRefElem,&iVOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPosParamData(iPosStrategyName,iRotationAngle,iUrefElem,iUOffset,iVRefElem,iVOffset); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iPosStrategyName,&iRotationAngle,&iUrefElem,&iUOffset,&iVRefElem,&iVOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmStandardPosStrategyParameters##classe::get_Count(CATLONG & oSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oSize); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oSize); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmStandardPosStrategyParameters##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmStandardPosStrategyParameters##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmStandardPosStrategyParameters##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmStandardPosStrategyParameters##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmStandardPosStrategyParameters##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASfmStandardPosStrategyParameters(classe) \
 \
 \
declare_TIE_CATIASfmStandardPosStrategyParameters(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmStandardPosStrategyParameters##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmStandardPosStrategyParameters,"CATIASfmStandardPosStrategyParameters",CATIASfmStandardPosStrategyParameters::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmStandardPosStrategyParameters(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASfmStandardPosStrategyParameters, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmStandardPosStrategyParameters##classe(classe::MetaObject(),CATIASfmStandardPosStrategyParameters::MetaObject(),(void *)CreateTIECATIASfmStandardPosStrategyParameters##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASfmStandardPosStrategyParameters(classe) \
 \
 \
declare_TIE_CATIASfmStandardPosStrategyParameters(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmStandardPosStrategyParameters##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmStandardPosStrategyParameters,"CATIASfmStandardPosStrategyParameters",CATIASfmStandardPosStrategyParameters::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmStandardPosStrategyParameters(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASfmStandardPosStrategyParameters, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmStandardPosStrategyParameters##classe(classe::MetaObject(),CATIASfmStandardPosStrategyParameters::MetaObject(),(void *)CreateTIECATIASfmStandardPosStrategyParameters##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASfmStandardPosStrategyParameters(classe) TIE_CATIASfmStandardPosStrategyParameters(classe)
#else
#define BOA_CATIASfmStandardPosStrategyParameters(classe) CATImplementBOA(CATIASfmStandardPosStrategyParameters, classe)
#endif

#endif
