#ifndef __TIE_CATICharacteristicGeomElem
#define __TIE_CATICharacteristicGeomElem

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICharacteristicGeomElem.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICharacteristicGeomElem */
#define declare_TIE_CATICharacteristicGeomElem(classe) \
 \
 \
class TIECATICharacteristicGeomElem##classe : public CATICharacteristicGeomElem \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICharacteristicGeomElem, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetAnchorPoint(CATMathPoint& oAnchorPoint) const ; \
      virtual HRESULT GetReferenceNormal(CATMathDirection& oRefNormal) const ; \
};



#define ENVTIEdeclare_CATICharacteristicGeomElem(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetAnchorPoint(CATMathPoint& oAnchorPoint) const ; \
virtual HRESULT GetReferenceNormal(CATMathDirection& oRefNormal) const ; \


#define ENVTIEdefine_CATICharacteristicGeomElem(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetAnchorPoint(CATMathPoint& oAnchorPoint) const  \
{ \
return (ENVTIECALL(CATICharacteristicGeomElem,ENVTIETypeLetter,ENVTIELetter)GetAnchorPoint(oAnchorPoint)); \
} \
HRESULT  ENVTIEName::GetReferenceNormal(CATMathDirection& oRefNormal) const  \
{ \
return (ENVTIECALL(CATICharacteristicGeomElem,ENVTIETypeLetter,ENVTIELetter)GetReferenceNormal(oRefNormal)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICharacteristicGeomElem(classe)    TIECATICharacteristicGeomElem##classe


/* Common methods inside a TIE */
#define common_TIE_CATICharacteristicGeomElem(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICharacteristicGeomElem, classe) \
 \
 \
CATImplementTIEMethods(CATICharacteristicGeomElem, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICharacteristicGeomElem, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICharacteristicGeomElem, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICharacteristicGeomElem, classe) \
 \
HRESULT  TIECATICharacteristicGeomElem##classe::GetAnchorPoint(CATMathPoint& oAnchorPoint) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnchorPoint(oAnchorPoint)); \
} \
HRESULT  TIECATICharacteristicGeomElem##classe::GetReferenceNormal(CATMathDirection& oRefNormal) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetReferenceNormal(oRefNormal)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICharacteristicGeomElem(classe) \
 \
 \
declare_TIE_CATICharacteristicGeomElem(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICharacteristicGeomElem##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICharacteristicGeomElem,"CATICharacteristicGeomElem",CATICharacteristicGeomElem::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICharacteristicGeomElem(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICharacteristicGeomElem, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICharacteristicGeomElem##classe(classe::MetaObject(),CATICharacteristicGeomElem::MetaObject(),(void *)CreateTIECATICharacteristicGeomElem##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICharacteristicGeomElem(classe) \
 \
 \
declare_TIE_CATICharacteristicGeomElem(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICharacteristicGeomElem##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICharacteristicGeomElem,"CATICharacteristicGeomElem",CATICharacteristicGeomElem::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICharacteristicGeomElem(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICharacteristicGeomElem, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICharacteristicGeomElem##classe(classe::MetaObject(),CATICharacteristicGeomElem::MetaObject(),(void *)CreateTIECATICharacteristicGeomElem##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICharacteristicGeomElem(classe) TIE_CATICharacteristicGeomElem(classe)
#else
#define BOA_CATICharacteristicGeomElem(classe) CATImplementBOA(CATICharacteristicGeomElem, classe)
#endif

#endif
