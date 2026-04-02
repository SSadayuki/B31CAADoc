#ifndef __TIE_CATISamSupportFilter
#define __TIE_CATISamSupportFilter

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamSupportFilter.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamSupportFilter */
#define declare_TIE_CATISamSupportFilter(classe) \
 \
 \
class TIECATISamSupportFilter##classe : public CATISamSupportFilter \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamSupportFilter, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATBoolean GetStatus (CATPathElement* iPath) ; \
      virtual HRESULT GetSelectableObject (CATPathElement*	    iPath, CATBaseUnknown*& oLinkable, CATBaseUnknown*&	oSpecObject) ; \
      virtual HRESULT ValidateSupport (const CATBaseUnknown* iLinkable, const CATBaseUnknown*	iSpecObject) ; \
      virtual HRESULT GetNLSid (const CATBaseUnknown* iLinkable, CATString	&oNLSid) ; \
};



#define ENVTIEdeclare_CATISamSupportFilter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATBoolean GetStatus (CATPathElement* iPath) ; \
virtual HRESULT GetSelectableObject (CATPathElement*	    iPath, CATBaseUnknown*& oLinkable, CATBaseUnknown*&	oSpecObject) ; \
virtual HRESULT ValidateSupport (const CATBaseUnknown* iLinkable, const CATBaseUnknown*	iSpecObject) ; \
virtual HRESULT GetNLSid (const CATBaseUnknown* iLinkable, CATString	&oNLSid) ; \


#define ENVTIEdefine_CATISamSupportFilter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATBoolean  ENVTIEName::GetStatus (CATPathElement* iPath)  \
{ \
return (ENVTIECALL(CATISamSupportFilter,ENVTIETypeLetter,ENVTIELetter)GetStatus (iPath)); \
} \
HRESULT  ENVTIEName::GetSelectableObject (CATPathElement*	    iPath, CATBaseUnknown*& oLinkable, CATBaseUnknown*&	oSpecObject)  \
{ \
return (ENVTIECALL(CATISamSupportFilter,ENVTIETypeLetter,ENVTIELetter)GetSelectableObject (iPath,oLinkable,oSpecObject)); \
} \
HRESULT  ENVTIEName::ValidateSupport (const CATBaseUnknown* iLinkable, const CATBaseUnknown*	iSpecObject)  \
{ \
return (ENVTIECALL(CATISamSupportFilter,ENVTIETypeLetter,ENVTIELetter)ValidateSupport (iLinkable,iSpecObject)); \
} \
HRESULT  ENVTIEName::GetNLSid (const CATBaseUnknown* iLinkable, CATString	&oNLSid)  \
{ \
return (ENVTIECALL(CATISamSupportFilter,ENVTIETypeLetter,ENVTIELetter)GetNLSid (iLinkable,oNLSid)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamSupportFilter(classe)    TIECATISamSupportFilter##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamSupportFilter(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamSupportFilter, classe) \
 \
 \
CATImplementTIEMethods(CATISamSupportFilter, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamSupportFilter, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamSupportFilter, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamSupportFilter, classe) \
 \
CATBoolean  TIECATISamSupportFilter##classe::GetStatus (CATPathElement* iPath)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStatus (iPath)); \
} \
HRESULT  TIECATISamSupportFilter##classe::GetSelectableObject (CATPathElement*	    iPath, CATBaseUnknown*& oLinkable, CATBaseUnknown*&	oSpecObject)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSelectableObject (iPath,oLinkable,oSpecObject)); \
} \
HRESULT  TIECATISamSupportFilter##classe::ValidateSupport (const CATBaseUnknown* iLinkable, const CATBaseUnknown*	iSpecObject)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ValidateSupport (iLinkable,iSpecObject)); \
} \
HRESULT  TIECATISamSupportFilter##classe::GetNLSid (const CATBaseUnknown* iLinkable, CATString	&oNLSid)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNLSid (iLinkable,oNLSid)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamSupportFilter(classe) \
 \
 \
declare_TIE_CATISamSupportFilter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamSupportFilter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamSupportFilter,"CATISamSupportFilter",CATISamSupportFilter::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamSupportFilter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamSupportFilter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamSupportFilter##classe(classe::MetaObject(),CATISamSupportFilter::MetaObject(),(void *)CreateTIECATISamSupportFilter##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamSupportFilter(classe) \
 \
 \
declare_TIE_CATISamSupportFilter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamSupportFilter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamSupportFilter,"CATISamSupportFilter",CATISamSupportFilter::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamSupportFilter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamSupportFilter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamSupportFilter##classe(classe::MetaObject(),CATISamSupportFilter::MetaObject(),(void *)CreateTIECATISamSupportFilter##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamSupportFilter(classe) TIE_CATISamSupportFilter(classe)
#else
#define BOA_CATISamSupportFilter(classe) CATImplementBOA(CATISamSupportFilter, classe)
#endif

#endif
