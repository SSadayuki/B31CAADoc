#ifndef __TIE_CATIExchangePlane
#define __TIE_CATIExchangePlane

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangePlane.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangePlane */
#define declare_TIE_CATIExchangePlane(classe) \
 \
 \
class TIECATIExchangePlane##classe : public CATIExchangePlane \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangePlane, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetPlaneData(double *oRootPoint, double *oNormalVector, CATBaseUnknown_var ioRelimitedOnFace = ((CATBaseUnknown*)0)) const ; \
};



#define ENVTIEdeclare_CATIExchangePlane(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetPlaneData(double *oRootPoint, double *oNormalVector, CATBaseUnknown_var ioRelimitedOnFace = ((CATBaseUnknown*)0)) const ; \


#define ENVTIEdefine_CATIExchangePlane(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetPlaneData(double *oRootPoint, double *oNormalVector, CATBaseUnknown_var ioRelimitedOnFace ) const  \
{ \
return (ENVTIECALL(CATIExchangePlane,ENVTIETypeLetter,ENVTIELetter)GetPlaneData(oRootPoint,oNormalVector,ioRelimitedOnFace )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangePlane(classe)    TIECATIExchangePlane##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangePlane(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangePlane, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangePlane, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangePlane, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangePlane, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangePlane, classe) \
 \
HRESULT  TIECATIExchangePlane##classe::GetPlaneData(double *oRootPoint, double *oNormalVector, CATBaseUnknown_var ioRelimitedOnFace ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPlaneData(oRootPoint,oNormalVector,ioRelimitedOnFace )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangePlane(classe) \
 \
 \
declare_TIE_CATIExchangePlane(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangePlane##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangePlane,"CATIExchangePlane",CATIExchangePlane::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangePlane(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangePlane, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangePlane##classe(classe::MetaObject(),CATIExchangePlane::MetaObject(),(void *)CreateTIECATIExchangePlane##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangePlane(classe) \
 \
 \
declare_TIE_CATIExchangePlane(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangePlane##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangePlane,"CATIExchangePlane",CATIExchangePlane::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangePlane(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangePlane, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangePlane##classe(classe::MetaObject(),CATIExchangePlane::MetaObject(),(void *)CreateTIECATIExchangePlane##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangePlane(classe) TIE_CATIExchangePlane(classe)
#else
#define BOA_CATIExchangePlane(classe) CATImplementBOA(CATIExchangePlane, classe)
#endif

#endif
