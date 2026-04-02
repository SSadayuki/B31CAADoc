#ifndef __TIE_CATIASfmStandardOpening
#define __TIE_CATIASfmStandardOpening

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASfmStandardOpening.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASfmStandardOpening */
#define declare_TIE_CATIASfmStandardOpening(classe) \
 \
 \
class TIECATIASfmStandardOpening##classe : public CATIASfmStandardOpening \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASfmStandardOpening, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetContour(CATBSTR & oContourName, CATIASfmStandardContourParameters *& oListContourParams); \
      virtual HRESULT __stdcall SetContour(const CATBSTR & iContourName, CATIASfmStandardContourParameters * iListContourParams); \
      virtual HRESULT __stdcall GetPositioningStrategy(CATBSTR & oPosStrategyName, CATIASfmStandardPosStrategyParameters *& oListPosParams); \
      virtual HRESULT __stdcall SetPositioningStrategy(const CATBSTR & iPosStrategyName, CATIASfmStandardPosStrategyParameters * iListPosParams); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASfmStandardOpening(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetContour(CATBSTR & oContourName, CATIASfmStandardContourParameters *& oListContourParams); \
virtual HRESULT __stdcall SetContour(const CATBSTR & iContourName, CATIASfmStandardContourParameters * iListContourParams); \
virtual HRESULT __stdcall GetPositioningStrategy(CATBSTR & oPosStrategyName, CATIASfmStandardPosStrategyParameters *& oListPosParams); \
virtual HRESULT __stdcall SetPositioningStrategy(const CATBSTR & iPosStrategyName, CATIASfmStandardPosStrategyParameters * iListPosParams); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASfmStandardOpening(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetContour(CATBSTR & oContourName, CATIASfmStandardContourParameters *& oListContourParams) \
{ \
return (ENVTIECALL(CATIASfmStandardOpening,ENVTIETypeLetter,ENVTIELetter)GetContour(oContourName,oListContourParams)); \
} \
HRESULT __stdcall  ENVTIEName::SetContour(const CATBSTR & iContourName, CATIASfmStandardContourParameters * iListContourParams) \
{ \
return (ENVTIECALL(CATIASfmStandardOpening,ENVTIETypeLetter,ENVTIELetter)SetContour(iContourName,iListContourParams)); \
} \
HRESULT __stdcall  ENVTIEName::GetPositioningStrategy(CATBSTR & oPosStrategyName, CATIASfmStandardPosStrategyParameters *& oListPosParams) \
{ \
return (ENVTIECALL(CATIASfmStandardOpening,ENVTIETypeLetter,ENVTIELetter)GetPositioningStrategy(oPosStrategyName,oListPosParams)); \
} \
HRESULT __stdcall  ENVTIEName::SetPositioningStrategy(const CATBSTR & iPosStrategyName, CATIASfmStandardPosStrategyParameters * iListPosParams) \
{ \
return (ENVTIECALL(CATIASfmStandardOpening,ENVTIETypeLetter,ENVTIELetter)SetPositioningStrategy(iPosStrategyName,iListPosParams)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASfmStandardOpening,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASfmStandardOpening,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmStandardOpening,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmStandardOpening,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASfmStandardOpening,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASfmStandardOpening(classe)    TIECATIASfmStandardOpening##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASfmStandardOpening(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASfmStandardOpening, classe) \
 \
 \
CATImplementTIEMethods(CATIASfmStandardOpening, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASfmStandardOpening, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASfmStandardOpening, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASfmStandardOpening, classe) \
 \
HRESULT __stdcall  TIECATIASfmStandardOpening##classe::GetContour(CATBSTR & oContourName, CATIASfmStandardContourParameters *& oListContourParams) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oContourName,&oListContourParams); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetContour(oContourName,oListContourParams); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oContourName,&oListContourParams); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmStandardOpening##classe::SetContour(const CATBSTR & iContourName, CATIASfmStandardContourParameters * iListContourParams) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iContourName,&iListContourParams); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetContour(iContourName,iListContourParams); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iContourName,&iListContourParams); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmStandardOpening##classe::GetPositioningStrategy(CATBSTR & oPosStrategyName, CATIASfmStandardPosStrategyParameters *& oListPosParams) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oPosStrategyName,&oListPosParams); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPositioningStrategy(oPosStrategyName,oListPosParams); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oPosStrategyName,&oListPosParams); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmStandardOpening##classe::SetPositioningStrategy(const CATBSTR & iPosStrategyName, CATIASfmStandardPosStrategyParameters * iListPosParams) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iPosStrategyName,&iListPosParams); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPositioningStrategy(iPosStrategyName,iListPosParams); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iPosStrategyName,&iListPosParams); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmStandardOpening##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmStandardOpening##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmStandardOpening##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmStandardOpening##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmStandardOpening##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASfmStandardOpening(classe) \
 \
 \
declare_TIE_CATIASfmStandardOpening(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmStandardOpening##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmStandardOpening,"CATIASfmStandardOpening",CATIASfmStandardOpening::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmStandardOpening(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASfmStandardOpening, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmStandardOpening##classe(classe::MetaObject(),CATIASfmStandardOpening::MetaObject(),(void *)CreateTIECATIASfmStandardOpening##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASfmStandardOpening(classe) \
 \
 \
declare_TIE_CATIASfmStandardOpening(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmStandardOpening##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmStandardOpening,"CATIASfmStandardOpening",CATIASfmStandardOpening::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmStandardOpening(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASfmStandardOpening, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmStandardOpening##classe(classe::MetaObject(),CATIASfmStandardOpening::MetaObject(),(void *)CreateTIECATIASfmStandardOpening##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASfmStandardOpening(classe) TIE_CATIASfmStandardOpening(classe)
#else
#define BOA_CATIASfmStandardOpening(classe) CATImplementBOA(CATIASfmStandardOpening, classe)
#endif

#endif
