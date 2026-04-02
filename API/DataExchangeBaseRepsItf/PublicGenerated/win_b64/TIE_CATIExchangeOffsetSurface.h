#ifndef __TIE_CATIExchangeOffsetSurface
#define __TIE_CATIExchangeOffsetSurface

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeOffsetSurface.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeOffsetSurface */
#define declare_TIE_CATIExchangeOffsetSurface(classe) \
 \
 \
class TIECATIExchangeOffsetSurface##classe : public CATIExchangeOffsetSurface \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeOffsetSurface, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATBaseUnknown_var GetOffsetSurfaceBasicSurface(CATBaseUnknown_var ioRelimitedOnFace = ((CATBaseUnknown*)0))  const ; \
      virtual HRESULT GetOffsetSurfaceTranslationVector(double oNormalVector[3], double *oDistance, CATBaseUnknown_var ioRelimitedOnFace = ((CATBaseUnknown*)0)) const ; \
      virtual HRESULT GetOffsetSurfaceInfo(double oRefDirection[3]) const ; \
};



#define ENVTIEdeclare_CATIExchangeOffsetSurface(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATBaseUnknown_var GetOffsetSurfaceBasicSurface(CATBaseUnknown_var ioRelimitedOnFace = ((CATBaseUnknown*)0))  const ; \
virtual HRESULT GetOffsetSurfaceTranslationVector(double oNormalVector[3], double *oDistance, CATBaseUnknown_var ioRelimitedOnFace = ((CATBaseUnknown*)0)) const ; \
virtual HRESULT GetOffsetSurfaceInfo(double oRefDirection[3]) const ; \


#define ENVTIEdefine_CATIExchangeOffsetSurface(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATBaseUnknown_var  ENVTIEName::GetOffsetSurfaceBasicSurface(CATBaseUnknown_var ioRelimitedOnFace )  const  \
{ \
return (ENVTIECALL(CATIExchangeOffsetSurface,ENVTIETypeLetter,ENVTIELetter)GetOffsetSurfaceBasicSurface(ioRelimitedOnFace )); \
} \
HRESULT  ENVTIEName::GetOffsetSurfaceTranslationVector(double oNormalVector[3], double *oDistance, CATBaseUnknown_var ioRelimitedOnFace ) const  \
{ \
return (ENVTIECALL(CATIExchangeOffsetSurface,ENVTIETypeLetter,ENVTIELetter)GetOffsetSurfaceTranslationVector(oNormalVector,oDistance,ioRelimitedOnFace )); \
} \
HRESULT  ENVTIEName::GetOffsetSurfaceInfo(double oRefDirection[3]) const  \
{ \
return (ENVTIECALL(CATIExchangeOffsetSurface,ENVTIETypeLetter,ENVTIELetter)GetOffsetSurfaceInfo(oRefDirection)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeOffsetSurface(classe)    TIECATIExchangeOffsetSurface##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeOffsetSurface(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeOffsetSurface, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeOffsetSurface, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeOffsetSurface, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeOffsetSurface, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeOffsetSurface, classe) \
 \
CATBaseUnknown_var  TIECATIExchangeOffsetSurface##classe::GetOffsetSurfaceBasicSurface(CATBaseUnknown_var ioRelimitedOnFace )  const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOffsetSurfaceBasicSurface(ioRelimitedOnFace )); \
} \
HRESULT  TIECATIExchangeOffsetSurface##classe::GetOffsetSurfaceTranslationVector(double oNormalVector[3], double *oDistance, CATBaseUnknown_var ioRelimitedOnFace ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOffsetSurfaceTranslationVector(oNormalVector,oDistance,ioRelimitedOnFace )); \
} \
HRESULT  TIECATIExchangeOffsetSurface##classe::GetOffsetSurfaceInfo(double oRefDirection[3]) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOffsetSurfaceInfo(oRefDirection)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeOffsetSurface(classe) \
 \
 \
declare_TIE_CATIExchangeOffsetSurface(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeOffsetSurface##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeOffsetSurface,"CATIExchangeOffsetSurface",CATIExchangeOffsetSurface::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeOffsetSurface(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeOffsetSurface, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeOffsetSurface##classe(classe::MetaObject(),CATIExchangeOffsetSurface::MetaObject(),(void *)CreateTIECATIExchangeOffsetSurface##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeOffsetSurface(classe) \
 \
 \
declare_TIE_CATIExchangeOffsetSurface(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeOffsetSurface##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeOffsetSurface,"CATIExchangeOffsetSurface",CATIExchangeOffsetSurface::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeOffsetSurface(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeOffsetSurface, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeOffsetSurface##classe(classe::MetaObject(),CATIExchangeOffsetSurface::MetaObject(),(void *)CreateTIECATIExchangeOffsetSurface##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeOffsetSurface(classe) TIE_CATIExchangeOffsetSurface(classe)
#else
#define BOA_CATIExchangeOffsetSurface(classe) CATImplementBOA(CATIExchangeOffsetSurface, classe)
#endif

#endif
