#ifndef __TIE_CATIShapeFeatureProperties
#define __TIE_CATIShapeFeatureProperties

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIShapeFeatureProperties.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIShapeFeatureProperties */
#define declare_TIE_CATIShapeFeatureProperties(classe) \
 \
 \
class TIECATIShapeFeatureProperties##classe : public CATIShapeFeatureProperties \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIShapeFeatureProperties, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual int  IsAContextualFeature ( )  const  ; \
      virtual int  IsAFreeFormFeature ( )  const  ; \
      virtual CATUnicodeString GetPolarity ( )  const  ; \
      virtual CATListValCATISpecObject_var GiveMeYourFavoriteSketches() const ; \
      virtual CATListValCATISpecObject_var GiveMeYourBRepSpecifications()const ; \
      virtual int HasAnAxis() const ; \
      virtual int HasAnAxis(CATBaseUnknown_var iElt) const ; \
      virtual CATMathPlane GetBoundingPlane(CATUnicodeString& iSide) const ; \
      virtual int CanBePatterned() const ; \
};



#define ENVTIEdeclare_CATIShapeFeatureProperties(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual int  IsAContextualFeature ( )  const  ; \
virtual int  IsAFreeFormFeature ( )  const  ; \
virtual CATUnicodeString GetPolarity ( )  const  ; \
virtual CATListValCATISpecObject_var GiveMeYourFavoriteSketches() const ; \
virtual CATListValCATISpecObject_var GiveMeYourBRepSpecifications()const ; \
virtual int HasAnAxis() const ; \
virtual int HasAnAxis(CATBaseUnknown_var iElt) const ; \
virtual CATMathPlane GetBoundingPlane(CATUnicodeString& iSide) const ; \
virtual int CanBePatterned() const ; \


#define ENVTIEdefine_CATIShapeFeatureProperties(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
int   ENVTIEName::IsAContextualFeature ( )  const   \
{ \
return (ENVTIECALL(CATIShapeFeatureProperties,ENVTIETypeLetter,ENVTIELetter)IsAContextualFeature ()); \
} \
int   ENVTIEName::IsAFreeFormFeature ( )  const   \
{ \
return (ENVTIECALL(CATIShapeFeatureProperties,ENVTIETypeLetter,ENVTIELetter)IsAFreeFormFeature ()); \
} \
CATUnicodeString  ENVTIEName::GetPolarity ( )  const   \
{ \
return (ENVTIECALL(CATIShapeFeatureProperties,ENVTIETypeLetter,ENVTIELetter)GetPolarity ()); \
} \
CATListValCATISpecObject_var  ENVTIEName::GiveMeYourFavoriteSketches() const  \
{ \
return (ENVTIECALL(CATIShapeFeatureProperties,ENVTIETypeLetter,ENVTIELetter)GiveMeYourFavoriteSketches()); \
} \
CATListValCATISpecObject_var  ENVTIEName::GiveMeYourBRepSpecifications()const  \
{ \
return (ENVTIECALL(CATIShapeFeatureProperties,ENVTIETypeLetter,ENVTIELetter)GiveMeYourBRepSpecifications()); \
} \
int  ENVTIEName::HasAnAxis() const  \
{ \
return (ENVTIECALL(CATIShapeFeatureProperties,ENVTIETypeLetter,ENVTIELetter)HasAnAxis()); \
} \
int  ENVTIEName::HasAnAxis(CATBaseUnknown_var iElt) const  \
{ \
return (ENVTIECALL(CATIShapeFeatureProperties,ENVTIETypeLetter,ENVTIELetter)HasAnAxis(iElt)); \
} \
CATMathPlane  ENVTIEName::GetBoundingPlane(CATUnicodeString& iSide) const  \
{ \
return (ENVTIECALL(CATIShapeFeatureProperties,ENVTIETypeLetter,ENVTIELetter)GetBoundingPlane(iSide)); \
} \
int  ENVTIEName::CanBePatterned() const  \
{ \
return (ENVTIECALL(CATIShapeFeatureProperties,ENVTIETypeLetter,ENVTIELetter)CanBePatterned()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIShapeFeatureProperties(classe)    TIECATIShapeFeatureProperties##classe


/* Common methods inside a TIE */
#define common_TIE_CATIShapeFeatureProperties(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIShapeFeatureProperties, classe) \
 \
 \
CATImplementTIEMethods(CATIShapeFeatureProperties, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIShapeFeatureProperties, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIShapeFeatureProperties, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIShapeFeatureProperties, classe) \
 \
int   TIECATIShapeFeatureProperties##classe::IsAContextualFeature ( )  const   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAContextualFeature ()); \
} \
int   TIECATIShapeFeatureProperties##classe::IsAFreeFormFeature ( )  const   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAFreeFormFeature ()); \
} \
CATUnicodeString  TIECATIShapeFeatureProperties##classe::GetPolarity ( )  const   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPolarity ()); \
} \
CATListValCATISpecObject_var  TIECATIShapeFeatureProperties##classe::GiveMeYourFavoriteSketches() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GiveMeYourFavoriteSketches()); \
} \
CATListValCATISpecObject_var  TIECATIShapeFeatureProperties##classe::GiveMeYourBRepSpecifications()const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GiveMeYourBRepSpecifications()); \
} \
int  TIECATIShapeFeatureProperties##classe::HasAnAxis() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasAnAxis()); \
} \
int  TIECATIShapeFeatureProperties##classe::HasAnAxis(CATBaseUnknown_var iElt) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasAnAxis(iElt)); \
} \
CATMathPlane  TIECATIShapeFeatureProperties##classe::GetBoundingPlane(CATUnicodeString& iSide) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBoundingPlane(iSide)); \
} \
int  TIECATIShapeFeatureProperties##classe::CanBePatterned() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CanBePatterned()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIShapeFeatureProperties(classe) \
 \
 \
declare_TIE_CATIShapeFeatureProperties(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIShapeFeatureProperties##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIShapeFeatureProperties,"CATIShapeFeatureProperties",CATIShapeFeatureProperties::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIShapeFeatureProperties(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIShapeFeatureProperties, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIShapeFeatureProperties##classe(classe::MetaObject(),CATIShapeFeatureProperties::MetaObject(),(void *)CreateTIECATIShapeFeatureProperties##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIShapeFeatureProperties(classe) \
 \
 \
declare_TIE_CATIShapeFeatureProperties(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIShapeFeatureProperties##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIShapeFeatureProperties,"CATIShapeFeatureProperties",CATIShapeFeatureProperties::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIShapeFeatureProperties(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIShapeFeatureProperties, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIShapeFeatureProperties##classe(classe::MetaObject(),CATIShapeFeatureProperties::MetaObject(),(void *)CreateTIECATIShapeFeatureProperties##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIShapeFeatureProperties(classe) TIE_CATIShapeFeatureProperties(classe)
#else
#define BOA_CATIShapeFeatureProperties(classe) CATImplementBOA(CATIShapeFeatureProperties, classe)
#endif

#endif
