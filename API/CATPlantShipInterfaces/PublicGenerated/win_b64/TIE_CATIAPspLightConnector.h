#ifndef __TIE_CATIAPspLightConnector
#define __TIE_CATIAPspLightConnector

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPspLightConnector.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPspLightConnector */
#define declare_TIE_CATIAPspLightConnector(classe) \
 \
 \
class TIECATIAPspLightConnector##classe : public CATIAPspLightConnector \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPspLightConnector, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetOrigin(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oOrigin); \
      virtual HRESULT __stdcall SetOrigin(CATIAProduct * iRelAxis, const CATSafeArrayVariant & iDb3Position); \
      virtual HRESULT __stdcall GetAlignmentVector(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oAlignmentDirection); \
      virtual HRESULT __stdcall SetAlignmentVector(CATIAProduct * iRelAxis, const CATSafeArrayVariant & iAlignmentDirection); \
      virtual HRESULT __stdcall GetOrientationVector(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oOrientationDirection); \
      virtual HRESULT __stdcall SetOrientationVector(CATIAProduct * iRelAxis, const CATSafeArrayVariant & iOrientationDirection); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPspLightConnector(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetOrigin(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oOrigin); \
virtual HRESULT __stdcall SetOrigin(CATIAProduct * iRelAxis, const CATSafeArrayVariant & iDb3Position); \
virtual HRESULT __stdcall GetAlignmentVector(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oAlignmentDirection); \
virtual HRESULT __stdcall SetAlignmentVector(CATIAProduct * iRelAxis, const CATSafeArrayVariant & iAlignmentDirection); \
virtual HRESULT __stdcall GetOrientationVector(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oOrientationDirection); \
virtual HRESULT __stdcall SetOrientationVector(CATIAProduct * iRelAxis, const CATSafeArrayVariant & iOrientationDirection); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPspLightConnector(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetOrigin(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oOrigin) \
{ \
return (ENVTIECALL(CATIAPspLightConnector,ENVTIETypeLetter,ENVTIELetter)GetOrigin(iRelAxis,oOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::SetOrigin(CATIAProduct * iRelAxis, const CATSafeArrayVariant & iDb3Position) \
{ \
return (ENVTIECALL(CATIAPspLightConnector,ENVTIETypeLetter,ENVTIELetter)SetOrigin(iRelAxis,iDb3Position)); \
} \
HRESULT __stdcall  ENVTIEName::GetAlignmentVector(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oAlignmentDirection) \
{ \
return (ENVTIECALL(CATIAPspLightConnector,ENVTIETypeLetter,ENVTIELetter)GetAlignmentVector(iRelAxis,oAlignmentDirection)); \
} \
HRESULT __stdcall  ENVTIEName::SetAlignmentVector(CATIAProduct * iRelAxis, const CATSafeArrayVariant & iAlignmentDirection) \
{ \
return (ENVTIECALL(CATIAPspLightConnector,ENVTIETypeLetter,ENVTIELetter)SetAlignmentVector(iRelAxis,iAlignmentDirection)); \
} \
HRESULT __stdcall  ENVTIEName::GetOrientationVector(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oOrientationDirection) \
{ \
return (ENVTIECALL(CATIAPspLightConnector,ENVTIETypeLetter,ENVTIELetter)GetOrientationVector(iRelAxis,oOrientationDirection)); \
} \
HRESULT __stdcall  ENVTIEName::SetOrientationVector(CATIAProduct * iRelAxis, const CATSafeArrayVariant & iOrientationDirection) \
{ \
return (ENVTIECALL(CATIAPspLightConnector,ENVTIETypeLetter,ENVTIELetter)SetOrientationVector(iRelAxis,iOrientationDirection)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPspLightConnector,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPspLightConnector,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspLightConnector,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspLightConnector,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPspLightConnector,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPspLightConnector(classe)    TIECATIAPspLightConnector##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPspLightConnector(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPspLightConnector, classe) \
 \
 \
CATImplementTIEMethods(CATIAPspLightConnector, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPspLightConnector, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPspLightConnector, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPspLightConnector, classe) \
 \
HRESULT __stdcall  TIECATIAPspLightConnector##classe::GetOrigin(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iRelAxis,&oOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrigin(iRelAxis,oOrigin); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iRelAxis,&oOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspLightConnector##classe::SetOrigin(CATIAProduct * iRelAxis, const CATSafeArrayVariant & iDb3Position) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iRelAxis,&iDb3Position); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOrigin(iRelAxis,iDb3Position); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iRelAxis,&iDb3Position); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspLightConnector##classe::GetAlignmentVector(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oAlignmentDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iRelAxis,&oAlignmentDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAlignmentVector(iRelAxis,oAlignmentDirection); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iRelAxis,&oAlignmentDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspLightConnector##classe::SetAlignmentVector(CATIAProduct * iRelAxis, const CATSafeArrayVariant & iAlignmentDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iRelAxis,&iAlignmentDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAlignmentVector(iRelAxis,iAlignmentDirection); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iRelAxis,&iAlignmentDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspLightConnector##classe::GetOrientationVector(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oOrientationDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iRelAxis,&oOrientationDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrientationVector(iRelAxis,oOrientationDirection); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iRelAxis,&oOrientationDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspLightConnector##classe::SetOrientationVector(CATIAProduct * iRelAxis, const CATSafeArrayVariant & iOrientationDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iRelAxis,&iOrientationDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOrientationVector(iRelAxis,iOrientationDirection); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iRelAxis,&iOrientationDirection); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspLightConnector##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspLightConnector##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspLightConnector##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspLightConnector##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspLightConnector##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPspLightConnector(classe) \
 \
 \
declare_TIE_CATIAPspLightConnector(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspLightConnector##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspLightConnector,"CATIAPspLightConnector",CATIAPspLightConnector::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspLightConnector(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPspLightConnector, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspLightConnector##classe(classe::MetaObject(),CATIAPspLightConnector::MetaObject(),(void *)CreateTIECATIAPspLightConnector##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPspLightConnector(classe) \
 \
 \
declare_TIE_CATIAPspLightConnector(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspLightConnector##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspLightConnector,"CATIAPspLightConnector",CATIAPspLightConnector::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspLightConnector(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPspLightConnector, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspLightConnector##classe(classe::MetaObject(),CATIAPspLightConnector::MetaObject(),(void *)CreateTIECATIAPspLightConnector##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPspLightConnector(classe) TIE_CATIAPspLightConnector(classe)
#else
#define BOA_CATIAPspLightConnector(classe) CATImplementBOA(CATIAPspLightConnector, classe)
#endif

#endif
