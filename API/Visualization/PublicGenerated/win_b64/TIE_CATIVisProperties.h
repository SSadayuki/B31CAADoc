#ifndef __TIE_CATIVisProperties
#define __TIE_CATIVisProperties

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIVisProperties.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIVisProperties */
#define declare_TIE_CATIVisProperties(classe) \
 \
 \
class TIECATIVisProperties##classe : public CATIVisProperties \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIVisProperties, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT SetProperties   ( CATVisPropertiesValues & iValues, CATVisPropertyType       iPropertyType, CATPathElement         & iPathElement, int                      iNotify = 1)                   ; \
      virtual HRESULT ResetProperties ( CATVisPropertyType       iPropertyType, CATPathElement         & iPathElement, int                      iNotify = 1)                   ; \
      virtual HRESULT GetProperties   ( CATVisPropertiesValues & ioValues, CATVisPropertyType       iPropertyType, CATPathElement         & iPathElement)                  ; \
      virtual HRESULT SetPropertiesAtt   ( CATVisPropertiesValues & iValues, CATVisPropertyType       iPropertyType, CATVisGeomType           iGeomType = 0, unsigned int             iPropertyNumber   = 0, int                      ifromSetProperties = 0)      ; \
      virtual HRESULT ResetPropertiesAtt ( CATVisPropertyType iPropertyType, CATVisGeomType     iGeomType = 0, unsigned int       iPropertyNumber     = 0, int                ifromSetProperties = 0)          ; \
      virtual HRESULT GetPropertiesAtt   ( CATVisPropertiesValues & ioValues, CATVisPropertyType       iPropertyType, CATVisGeomType           iGeomType  = 0, unsigned int             iPropertyNumber   = 0, int                      ifromGetProperties = 0)      ; \
      virtual HRESULT GetStandardProperties ( CATVisPropertiesValues & ioValues, CATVisPropertyType       iPropertyType, CATVisGeomType           iGeomType = 0) ; \
      virtual HRESULT GetSubTypeFromPath(CATPathElement     & iPathElement, CATVisPropertyType   iPropertyType, CATVisGeomType     & oGeomType, unsigned int       & oPropertyNumber )    ; \
      virtual HRESULT IsGeomTypeDefined (CATVisGeomType& iGeomType) ; \
      virtual CATIVisPropertiesAbstract * GetPropertyOwner(CATVisPropertyAction iAction, CATVisGeomType       iGeomType, unsigned int         iPropertyNumber=0) ; \
      virtual CATIModelEvents* FindSender (CATPathElement & iPathElement) ; \
      virtual unsigned int GetPropertyNumber (CATVisGeomType iVisProperty) ; \
      virtual HRESULT GetGraphicAttributSet (CATGraphicAttributeSet & oAttributSet, CATVisGeomType           iGeomType, unsigned int             iPropertyNumber = 0)       ; \
      virtual HRESULT IsEditableBy(CATVisPropertyEditorType iEditorType) ; \
};



#define ENVTIEdeclare_CATIVisProperties(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT SetProperties   ( CATVisPropertiesValues & iValues, CATVisPropertyType       iPropertyType, CATPathElement         & iPathElement, int                      iNotify = 1)                   ; \
virtual HRESULT ResetProperties ( CATVisPropertyType       iPropertyType, CATPathElement         & iPathElement, int                      iNotify = 1)                   ; \
virtual HRESULT GetProperties   ( CATVisPropertiesValues & ioValues, CATVisPropertyType       iPropertyType, CATPathElement         & iPathElement)                  ; \
virtual HRESULT SetPropertiesAtt   ( CATVisPropertiesValues & iValues, CATVisPropertyType       iPropertyType, CATVisGeomType           iGeomType = 0, unsigned int             iPropertyNumber   = 0, int                      ifromSetProperties = 0)      ; \
virtual HRESULT ResetPropertiesAtt ( CATVisPropertyType iPropertyType, CATVisGeomType     iGeomType = 0, unsigned int       iPropertyNumber     = 0, int                ifromSetProperties = 0)          ; \
virtual HRESULT GetPropertiesAtt   ( CATVisPropertiesValues & ioValues, CATVisPropertyType       iPropertyType, CATVisGeomType           iGeomType  = 0, unsigned int             iPropertyNumber   = 0, int                      ifromGetProperties = 0)      ; \
virtual HRESULT GetStandardProperties ( CATVisPropertiesValues & ioValues, CATVisPropertyType       iPropertyType, CATVisGeomType           iGeomType = 0) ; \
virtual HRESULT GetSubTypeFromPath(CATPathElement     & iPathElement, CATVisPropertyType   iPropertyType, CATVisGeomType     & oGeomType, unsigned int       & oPropertyNumber )    ; \
virtual HRESULT IsGeomTypeDefined (CATVisGeomType& iGeomType) ; \
virtual CATIVisPropertiesAbstract * GetPropertyOwner(CATVisPropertyAction iAction, CATVisGeomType       iGeomType, unsigned int         iPropertyNumber=0) ; \
virtual CATIModelEvents* FindSender (CATPathElement & iPathElement) ; \
virtual unsigned int GetPropertyNumber (CATVisGeomType iVisProperty) ; \
virtual HRESULT GetGraphicAttributSet (CATGraphicAttributeSet & oAttributSet, CATVisGeomType           iGeomType, unsigned int             iPropertyNumber = 0)       ; \
virtual HRESULT IsEditableBy(CATVisPropertyEditorType iEditorType) ; \


#define ENVTIEdefine_CATIVisProperties(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::SetProperties   ( CATVisPropertiesValues & iValues, CATVisPropertyType       iPropertyType, CATPathElement         & iPathElement, int                      iNotify )                    \
{ \
return (ENVTIECALL(CATIVisProperties,ENVTIETypeLetter,ENVTIELetter)SetProperties   (iValues,iPropertyType,iPathElement,iNotify )); \
} \
HRESULT  ENVTIEName::ResetProperties ( CATVisPropertyType       iPropertyType, CATPathElement         & iPathElement, int                      iNotify )                    \
{ \
return (ENVTIECALL(CATIVisProperties,ENVTIETypeLetter,ENVTIELetter)ResetProperties (iPropertyType,iPathElement,iNotify )); \
} \
HRESULT  ENVTIEName::GetProperties   ( CATVisPropertiesValues & ioValues, CATVisPropertyType       iPropertyType, CATPathElement         & iPathElement)                   \
{ \
return (ENVTIECALL(CATIVisProperties,ENVTIETypeLetter,ENVTIELetter)GetProperties   (ioValues,iPropertyType,iPathElement)); \
} \
HRESULT  ENVTIEName::SetPropertiesAtt   ( CATVisPropertiesValues & iValues, CATVisPropertyType       iPropertyType, CATVisGeomType           iGeomType , unsigned int             iPropertyNumber   , int                      ifromSetProperties )       \
{ \
return (ENVTIECALL(CATIVisProperties,ENVTIETypeLetter,ENVTIELetter)SetPropertiesAtt   (iValues,iPropertyType,iGeomType ,iPropertyNumber   ,ifromSetProperties )); \
} \
HRESULT  ENVTIEName::ResetPropertiesAtt ( CATVisPropertyType iPropertyType, CATVisGeomType     iGeomType , unsigned int       iPropertyNumber     , int                ifromSetProperties )           \
{ \
return (ENVTIECALL(CATIVisProperties,ENVTIETypeLetter,ENVTIELetter)ResetPropertiesAtt (iPropertyType,iGeomType ,iPropertyNumber     ,ifromSetProperties )); \
} \
HRESULT  ENVTIEName::GetPropertiesAtt   ( CATVisPropertiesValues & ioValues, CATVisPropertyType       iPropertyType, CATVisGeomType           iGeomType  , unsigned int             iPropertyNumber   , int                      ifromGetProperties )       \
{ \
return (ENVTIECALL(CATIVisProperties,ENVTIETypeLetter,ENVTIELetter)GetPropertiesAtt   (ioValues,iPropertyType,iGeomType  ,iPropertyNumber   ,ifromGetProperties )); \
} \
HRESULT  ENVTIEName::GetStandardProperties ( CATVisPropertiesValues & ioValues, CATVisPropertyType       iPropertyType, CATVisGeomType           iGeomType )  \
{ \
return (ENVTIECALL(CATIVisProperties,ENVTIETypeLetter,ENVTIELetter)GetStandardProperties (ioValues,iPropertyType,iGeomType )); \
} \
HRESULT  ENVTIEName::GetSubTypeFromPath(CATPathElement     & iPathElement, CATVisPropertyType   iPropertyType, CATVisGeomType     & oGeomType, unsigned int       & oPropertyNumber )     \
{ \
return (ENVTIECALL(CATIVisProperties,ENVTIETypeLetter,ENVTIELetter)GetSubTypeFromPath(iPathElement,iPropertyType,oGeomType,oPropertyNumber )); \
} \
HRESULT  ENVTIEName::IsGeomTypeDefined (CATVisGeomType& iGeomType)  \
{ \
return (ENVTIECALL(CATIVisProperties,ENVTIETypeLetter,ENVTIELetter)IsGeomTypeDefined (iGeomType)); \
} \
CATIVisPropertiesAbstract *  ENVTIEName::GetPropertyOwner(CATVisPropertyAction iAction, CATVisGeomType       iGeomType, unsigned int         iPropertyNumber)  \
{ \
return (ENVTIECALL(CATIVisProperties,ENVTIETypeLetter,ENVTIELetter)GetPropertyOwner(iAction,iGeomType,iPropertyNumber)); \
} \
CATIModelEvents*  ENVTIEName::FindSender (CATPathElement & iPathElement)  \
{ \
return (ENVTIECALL(CATIVisProperties,ENVTIETypeLetter,ENVTIELetter)FindSender (iPathElement)); \
} \
unsigned int  ENVTIEName::GetPropertyNumber (CATVisGeomType iVisProperty)  \
{ \
return (ENVTIECALL(CATIVisProperties,ENVTIETypeLetter,ENVTIELetter)GetPropertyNumber (iVisProperty)); \
} \
HRESULT  ENVTIEName::GetGraphicAttributSet (CATGraphicAttributeSet & oAttributSet, CATVisGeomType           iGeomType, unsigned int             iPropertyNumber )        \
{ \
return (ENVTIECALL(CATIVisProperties,ENVTIETypeLetter,ENVTIELetter)GetGraphicAttributSet (oAttributSet,iGeomType,iPropertyNumber )); \
} \
HRESULT  ENVTIEName::IsEditableBy(CATVisPropertyEditorType iEditorType)  \
{ \
return (ENVTIECALL(CATIVisProperties,ENVTIETypeLetter,ENVTIELetter)IsEditableBy(iEditorType)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIVisProperties(classe)    TIECATIVisProperties##classe


/* Common methods inside a TIE */
#define common_TIE_CATIVisProperties(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIVisProperties, classe) \
 \
 \
CATImplementTIEMethods(CATIVisProperties, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIVisProperties, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIVisProperties, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIVisProperties, classe) \
 \
HRESULT  TIECATIVisProperties##classe::SetProperties   ( CATVisPropertiesValues & iValues, CATVisPropertyType       iPropertyType, CATPathElement         & iPathElement, int                      iNotify )                    \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetProperties   (iValues,iPropertyType,iPathElement,iNotify )); \
} \
HRESULT  TIECATIVisProperties##classe::ResetProperties ( CATVisPropertyType       iPropertyType, CATPathElement         & iPathElement, int                      iNotify )                    \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetProperties (iPropertyType,iPathElement,iNotify )); \
} \
HRESULT  TIECATIVisProperties##classe::GetProperties   ( CATVisPropertiesValues & ioValues, CATVisPropertyType       iPropertyType, CATPathElement         & iPathElement)                   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProperties   (ioValues,iPropertyType,iPathElement)); \
} \
HRESULT  TIECATIVisProperties##classe::SetPropertiesAtt   ( CATVisPropertiesValues & iValues, CATVisPropertyType       iPropertyType, CATVisGeomType           iGeomType , unsigned int             iPropertyNumber   , int                      ifromSetProperties )       \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPropertiesAtt   (iValues,iPropertyType,iGeomType ,iPropertyNumber   ,ifromSetProperties )); \
} \
HRESULT  TIECATIVisProperties##classe::ResetPropertiesAtt ( CATVisPropertyType iPropertyType, CATVisGeomType     iGeomType , unsigned int       iPropertyNumber     , int                ifromSetProperties )           \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetPropertiesAtt (iPropertyType,iGeomType ,iPropertyNumber     ,ifromSetProperties )); \
} \
HRESULT  TIECATIVisProperties##classe::GetPropertiesAtt   ( CATVisPropertiesValues & ioValues, CATVisPropertyType       iPropertyType, CATVisGeomType           iGeomType  , unsigned int             iPropertyNumber   , int                      ifromGetProperties )       \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPropertiesAtt   (ioValues,iPropertyType,iGeomType  ,iPropertyNumber   ,ifromGetProperties )); \
} \
HRESULT  TIECATIVisProperties##classe::GetStandardProperties ( CATVisPropertiesValues & ioValues, CATVisPropertyType       iPropertyType, CATVisGeomType           iGeomType )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStandardProperties (ioValues,iPropertyType,iGeomType )); \
} \
HRESULT  TIECATIVisProperties##classe::GetSubTypeFromPath(CATPathElement     & iPathElement, CATVisPropertyType   iPropertyType, CATVisGeomType     & oGeomType, unsigned int       & oPropertyNumber )     \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSubTypeFromPath(iPathElement,iPropertyType,oGeomType,oPropertyNumber )); \
} \
HRESULT  TIECATIVisProperties##classe::IsGeomTypeDefined (CATVisGeomType& iGeomType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsGeomTypeDefined (iGeomType)); \
} \
CATIVisPropertiesAbstract *  TIECATIVisProperties##classe::GetPropertyOwner(CATVisPropertyAction iAction, CATVisGeomType       iGeomType, unsigned int         iPropertyNumber)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPropertyOwner(iAction,iGeomType,iPropertyNumber)); \
} \
CATIModelEvents*  TIECATIVisProperties##classe::FindSender (CATPathElement & iPathElement)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FindSender (iPathElement)); \
} \
unsigned int  TIECATIVisProperties##classe::GetPropertyNumber (CATVisGeomType iVisProperty)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPropertyNumber (iVisProperty)); \
} \
HRESULT  TIECATIVisProperties##classe::GetGraphicAttributSet (CATGraphicAttributeSet & oAttributSet, CATVisGeomType           iGeomType, unsigned int             iPropertyNumber )        \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGraphicAttributSet (oAttributSet,iGeomType,iPropertyNumber )); \
} \
HRESULT  TIECATIVisProperties##classe::IsEditableBy(CATVisPropertyEditorType iEditorType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsEditableBy(iEditorType)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIVisProperties(classe) \
 \
 \
declare_TIE_CATIVisProperties(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIVisProperties##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIVisProperties,"CATIVisProperties",CATIVisProperties::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIVisProperties(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIVisProperties, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIVisProperties##classe(classe::MetaObject(),CATIVisProperties::MetaObject(),(void *)CreateTIECATIVisProperties##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIVisProperties(classe) \
 \
 \
declare_TIE_CATIVisProperties(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIVisProperties##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIVisProperties,"CATIVisProperties",CATIVisProperties::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIVisProperties(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIVisProperties, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIVisProperties##classe(classe::MetaObject(),CATIVisProperties::MetaObject(),(void *)CreateTIECATIVisProperties##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIVisProperties(classe) TIE_CATIVisProperties(classe)
#else
#define BOA_CATIVisProperties(classe) CATImplementBOA(CATIVisProperties, classe)
#endif

#endif
