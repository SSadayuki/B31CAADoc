#ifndef __TIE_CATIEhfUIPArrangeJunction
#define __TIE_CATIEhfUIPArrangeJunction

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIEhfUIPArrangeJunction.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIEhfUIPArrangeJunction */
#define declare_TIE_CATIEhfUIPArrangeJunction(classe) \
 \
 \
class TIECATIEhfUIPArrangeJunction##classe : public CATIEhfUIPArrangeJunction \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIEhfUIPArrangeJunction, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT RetrieveUserDirection(const CATListPtrCATBaseUnknown & iListOfBundleSegmentExtremity, const CATMathPlane             & iFlatteningPlane, CATLISTP_CATMathVector         & ioListOfDirections) ; \
};



#define ENVTIEdeclare_CATIEhfUIPArrangeJunction(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT RetrieveUserDirection(const CATListPtrCATBaseUnknown & iListOfBundleSegmentExtremity, const CATMathPlane             & iFlatteningPlane, CATLISTP_CATMathVector         & ioListOfDirections) ; \


#define ENVTIEdefine_CATIEhfUIPArrangeJunction(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::RetrieveUserDirection(const CATListPtrCATBaseUnknown & iListOfBundleSegmentExtremity, const CATMathPlane             & iFlatteningPlane, CATLISTP_CATMathVector         & ioListOfDirections)  \
{ \
return (ENVTIECALL(CATIEhfUIPArrangeJunction,ENVTIETypeLetter,ENVTIELetter)RetrieveUserDirection(iListOfBundleSegmentExtremity,iFlatteningPlane,ioListOfDirections)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIEhfUIPArrangeJunction(classe)    TIECATIEhfUIPArrangeJunction##classe


/* Common methods inside a TIE */
#define common_TIE_CATIEhfUIPArrangeJunction(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIEhfUIPArrangeJunction, classe) \
 \
 \
CATImplementTIEMethods(CATIEhfUIPArrangeJunction, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIEhfUIPArrangeJunction, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIEhfUIPArrangeJunction, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIEhfUIPArrangeJunction, classe) \
 \
HRESULT  TIECATIEhfUIPArrangeJunction##classe::RetrieveUserDirection(const CATListPtrCATBaseUnknown & iListOfBundleSegmentExtremity, const CATMathPlane             & iFlatteningPlane, CATLISTP_CATMathVector         & ioListOfDirections)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RetrieveUserDirection(iListOfBundleSegmentExtremity,iFlatteningPlane,ioListOfDirections)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIEhfUIPArrangeJunction(classe) \
 \
 \
declare_TIE_CATIEhfUIPArrangeJunction(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEhfUIPArrangeJunction##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEhfUIPArrangeJunction,"CATIEhfUIPArrangeJunction",CATIEhfUIPArrangeJunction::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEhfUIPArrangeJunction(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIEhfUIPArrangeJunction, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEhfUIPArrangeJunction##classe(classe::MetaObject(),CATIEhfUIPArrangeJunction::MetaObject(),(void *)CreateTIECATIEhfUIPArrangeJunction##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIEhfUIPArrangeJunction(classe) \
 \
 \
declare_TIE_CATIEhfUIPArrangeJunction(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEhfUIPArrangeJunction##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEhfUIPArrangeJunction,"CATIEhfUIPArrangeJunction",CATIEhfUIPArrangeJunction::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEhfUIPArrangeJunction(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIEhfUIPArrangeJunction, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEhfUIPArrangeJunction##classe(classe::MetaObject(),CATIEhfUIPArrangeJunction::MetaObject(),(void *)CreateTIECATIEhfUIPArrangeJunction##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIEhfUIPArrangeJunction(classe) TIE_CATIEhfUIPArrangeJunction(classe)
#else
#define BOA_CATIEhfUIPArrangeJunction(classe) CATImplementBOA(CATIEhfUIPArrangeJunction, classe)
#endif

#endif
