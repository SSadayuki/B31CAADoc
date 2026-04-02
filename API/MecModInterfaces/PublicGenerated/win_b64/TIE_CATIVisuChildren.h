#ifndef __TIE_CATIVisuChildren
#define __TIE_CATIVisuChildren

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIVisuChildren.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIVisuChildren */
#define declare_TIE_CATIVisuChildren(classe) \
 \
 \
class TIECATIVisuChildren##classe : public CATIVisuChildren \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIVisuChildren, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetChildrenToVisualizeBeforeAndAfterMyRep(CATListValCATBaseUnknown_var** oBefore, CATListValCATBaseUnknown_var** oAfter, const CATUnicodeString& iViewContext = MfDefault3DView) ; \
      virtual HRESULT GetChildrenToVisualizeUnderMyRep(CATListValCATBaseUnknown_var** oUnder, const CATUnicodeString& iViewContext = MfDefault3DView) ; \
      virtual HRESULT GetAggregatedConstraintsAndParameters(CATListValCATBaseUnknown_var** oConstraints, const CATUnicodeString& iView = MfDefault3DView) ; \
};



#define ENVTIEdeclare_CATIVisuChildren(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetChildrenToVisualizeBeforeAndAfterMyRep(CATListValCATBaseUnknown_var** oBefore, CATListValCATBaseUnknown_var** oAfter, const CATUnicodeString& iViewContext = MfDefault3DView) ; \
virtual HRESULT GetChildrenToVisualizeUnderMyRep(CATListValCATBaseUnknown_var** oUnder, const CATUnicodeString& iViewContext = MfDefault3DView) ; \
virtual HRESULT GetAggregatedConstraintsAndParameters(CATListValCATBaseUnknown_var** oConstraints, const CATUnicodeString& iView = MfDefault3DView) ; \


#define ENVTIEdefine_CATIVisuChildren(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetChildrenToVisualizeBeforeAndAfterMyRep(CATListValCATBaseUnknown_var** oBefore, CATListValCATBaseUnknown_var** oAfter, const CATUnicodeString& iViewContext )  \
{ \
return (ENVTIECALL(CATIVisuChildren,ENVTIETypeLetter,ENVTIELetter)GetChildrenToVisualizeBeforeAndAfterMyRep(oBefore,oAfter,iViewContext )); \
} \
HRESULT  ENVTIEName::GetChildrenToVisualizeUnderMyRep(CATListValCATBaseUnknown_var** oUnder, const CATUnicodeString& iViewContext )  \
{ \
return (ENVTIECALL(CATIVisuChildren,ENVTIETypeLetter,ENVTIELetter)GetChildrenToVisualizeUnderMyRep(oUnder,iViewContext )); \
} \
HRESULT  ENVTIEName::GetAggregatedConstraintsAndParameters(CATListValCATBaseUnknown_var** oConstraints, const CATUnicodeString& iView )  \
{ \
return (ENVTIECALL(CATIVisuChildren,ENVTIETypeLetter,ENVTIELetter)GetAggregatedConstraintsAndParameters(oConstraints,iView )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIVisuChildren(classe)    TIECATIVisuChildren##classe


/* Common methods inside a TIE */
#define common_TIE_CATIVisuChildren(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIVisuChildren, classe) \
 \
 \
CATImplementTIEMethods(CATIVisuChildren, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIVisuChildren, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIVisuChildren, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIVisuChildren, classe) \
 \
HRESULT  TIECATIVisuChildren##classe::GetChildrenToVisualizeBeforeAndAfterMyRep(CATListValCATBaseUnknown_var** oBefore, CATListValCATBaseUnknown_var** oAfter, const CATUnicodeString& iViewContext )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetChildrenToVisualizeBeforeAndAfterMyRep(oBefore,oAfter,iViewContext )); \
} \
HRESULT  TIECATIVisuChildren##classe::GetChildrenToVisualizeUnderMyRep(CATListValCATBaseUnknown_var** oUnder, const CATUnicodeString& iViewContext )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetChildrenToVisualizeUnderMyRep(oUnder,iViewContext )); \
} \
HRESULT  TIECATIVisuChildren##classe::GetAggregatedConstraintsAndParameters(CATListValCATBaseUnknown_var** oConstraints, const CATUnicodeString& iView )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAggregatedConstraintsAndParameters(oConstraints,iView )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIVisuChildren(classe) \
 \
 \
declare_TIE_CATIVisuChildren(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIVisuChildren##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIVisuChildren,"CATIVisuChildren",CATIVisuChildren::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIVisuChildren(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIVisuChildren, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIVisuChildren##classe(classe::MetaObject(),CATIVisuChildren::MetaObject(),(void *)CreateTIECATIVisuChildren##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIVisuChildren(classe) \
 \
 \
declare_TIE_CATIVisuChildren(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIVisuChildren##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIVisuChildren,"CATIVisuChildren",CATIVisuChildren::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIVisuChildren(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIVisuChildren, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIVisuChildren##classe(classe::MetaObject(),CATIVisuChildren::MetaObject(),(void *)CreateTIECATIVisuChildren##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIVisuChildren(classe) TIE_CATIVisuChildren(classe)
#else
#define BOA_CATIVisuChildren(classe) CATImplementBOA(CATIVisuChildren, classe)
#endif

#endif
