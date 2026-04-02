#ifndef __TIE_CATIExchangeExtendedGraphicProperty
#define __TIE_CATIExchangeExtendedGraphicProperty

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeExtendedGraphicProperty.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeExtendedGraphicProperty */
#define declare_TIE_CATIExchangeExtendedGraphicProperty(classe) \
 \
 \
class TIECATIExchangeExtendedGraphicProperty##classe : public CATIExchangeExtendedGraphicProperty \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeExtendedGraphicProperty, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetTransparency (double & oAlpha ) const; \
      virtual HRESULT GetBehaviorAttributes (int & oPickable  , int & oHighLighted, int & oLowLighted) const; \
      virtual HRESULT GetEdgeColor(double *oRColor, double *oGColor, double *oBColor) const ; \
      virtual HRESULT GetId64(CATLONG64* oID) const ; \
};



#define ENVTIEdeclare_CATIExchangeExtendedGraphicProperty(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetTransparency (double & oAlpha ) const; \
virtual HRESULT GetBehaviorAttributes (int & oPickable  , int & oHighLighted, int & oLowLighted) const; \
virtual HRESULT GetEdgeColor(double *oRColor, double *oGColor, double *oBColor) const ; \
virtual HRESULT GetId64(CATLONG64* oID) const ; \


#define ENVTIEdefine_CATIExchangeExtendedGraphicProperty(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetTransparency (double & oAlpha ) const \
{ \
return (ENVTIECALL(CATIExchangeExtendedGraphicProperty,ENVTIETypeLetter,ENVTIELetter)GetTransparency (oAlpha )); \
} \
HRESULT  ENVTIEName::GetBehaviorAttributes (int & oPickable  , int & oHighLighted, int & oLowLighted) const \
{ \
return (ENVTIECALL(CATIExchangeExtendedGraphicProperty,ENVTIETypeLetter,ENVTIELetter)GetBehaviorAttributes (oPickable  ,oHighLighted,oLowLighted)); \
} \
HRESULT  ENVTIEName::GetEdgeColor(double *oRColor, double *oGColor, double *oBColor) const  \
{ \
return (ENVTIECALL(CATIExchangeExtendedGraphicProperty,ENVTIETypeLetter,ENVTIELetter)GetEdgeColor(oRColor,oGColor,oBColor)); \
} \
HRESULT  ENVTIEName::GetId64(CATLONG64* oID) const  \
{ \
return (ENVTIECALL(CATIExchangeExtendedGraphicProperty,ENVTIETypeLetter,ENVTIELetter)GetId64(oID)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeExtendedGraphicProperty(classe)    TIECATIExchangeExtendedGraphicProperty##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeExtendedGraphicProperty(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeExtendedGraphicProperty, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeExtendedGraphicProperty, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeExtendedGraphicProperty, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeExtendedGraphicProperty, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeExtendedGraphicProperty, classe) \
 \
HRESULT  TIECATIExchangeExtendedGraphicProperty##classe::GetTransparency (double & oAlpha ) const \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTransparency (oAlpha )); \
} \
HRESULT  TIECATIExchangeExtendedGraphicProperty##classe::GetBehaviorAttributes (int & oPickable  , int & oHighLighted, int & oLowLighted) const \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBehaviorAttributes (oPickable  ,oHighLighted,oLowLighted)); \
} \
HRESULT  TIECATIExchangeExtendedGraphicProperty##classe::GetEdgeColor(double *oRColor, double *oGColor, double *oBColor) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEdgeColor(oRColor,oGColor,oBColor)); \
} \
HRESULT  TIECATIExchangeExtendedGraphicProperty##classe::GetId64(CATLONG64* oID) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetId64(oID)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeExtendedGraphicProperty(classe) \
 \
 \
declare_TIE_CATIExchangeExtendedGraphicProperty(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeExtendedGraphicProperty##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeExtendedGraphicProperty,"CATIExchangeExtendedGraphicProperty",CATIExchangeExtendedGraphicProperty::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeExtendedGraphicProperty(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeExtendedGraphicProperty, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeExtendedGraphicProperty##classe(classe::MetaObject(),CATIExchangeExtendedGraphicProperty::MetaObject(),(void *)CreateTIECATIExchangeExtendedGraphicProperty##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeExtendedGraphicProperty(classe) \
 \
 \
declare_TIE_CATIExchangeExtendedGraphicProperty(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeExtendedGraphicProperty##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeExtendedGraphicProperty,"CATIExchangeExtendedGraphicProperty",CATIExchangeExtendedGraphicProperty::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeExtendedGraphicProperty(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeExtendedGraphicProperty, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeExtendedGraphicProperty##classe(classe::MetaObject(),CATIExchangeExtendedGraphicProperty::MetaObject(),(void *)CreateTIECATIExchangeExtendedGraphicProperty##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeExtendedGraphicProperty(classe) TIE_CATIExchangeExtendedGraphicProperty(classe)
#else
#define BOA_CATIExchangeExtendedGraphicProperty(classe) CATImplementBOA(CATIExchangeExtendedGraphicProperty, classe)
#endif

#endif
