#ifndef __TIE_CATIExchangeRuledSurface
#define __TIE_CATIExchangeRuledSurface

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeRuledSurface.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeRuledSurface */
#define declare_TIE_CATIExchangeRuledSurface(classe) \
 \
 \
class TIECATIExchangeRuledSurface##classe : public CATIExchangeRuledSurface \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeRuledSurface, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATBaseUnknown_var GetRuledSurfaceFirstCurve(short *oDirectionFlag, CATBaseUnknown_var ioRelimitedOnFace = ((CATBaseUnknown*)0))  const ; \
      virtual CATBaseUnknown_var GetRuledSurfaceSecondCurve(short *oDevelopableSurfaceFlag, CATBaseUnknown_var ioRelimitedOnFace = ((CATBaseUnknown*)0)) const ; \
      virtual HRESULT GetRuledSurfaceInfo(double oRefDirection[3]) const ; \
};



#define ENVTIEdeclare_CATIExchangeRuledSurface(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATBaseUnknown_var GetRuledSurfaceFirstCurve(short *oDirectionFlag, CATBaseUnknown_var ioRelimitedOnFace = ((CATBaseUnknown*)0))  const ; \
virtual CATBaseUnknown_var GetRuledSurfaceSecondCurve(short *oDevelopableSurfaceFlag, CATBaseUnknown_var ioRelimitedOnFace = ((CATBaseUnknown*)0)) const ; \
virtual HRESULT GetRuledSurfaceInfo(double oRefDirection[3]) const ; \


#define ENVTIEdefine_CATIExchangeRuledSurface(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATBaseUnknown_var  ENVTIEName::GetRuledSurfaceFirstCurve(short *oDirectionFlag, CATBaseUnknown_var ioRelimitedOnFace )  const  \
{ \
return (ENVTIECALL(CATIExchangeRuledSurface,ENVTIETypeLetter,ENVTIELetter)GetRuledSurfaceFirstCurve(oDirectionFlag,ioRelimitedOnFace )); \
} \
CATBaseUnknown_var  ENVTIEName::GetRuledSurfaceSecondCurve(short *oDevelopableSurfaceFlag, CATBaseUnknown_var ioRelimitedOnFace ) const  \
{ \
return (ENVTIECALL(CATIExchangeRuledSurface,ENVTIETypeLetter,ENVTIELetter)GetRuledSurfaceSecondCurve(oDevelopableSurfaceFlag,ioRelimitedOnFace )); \
} \
HRESULT  ENVTIEName::GetRuledSurfaceInfo(double oRefDirection[3]) const  \
{ \
return (ENVTIECALL(CATIExchangeRuledSurface,ENVTIETypeLetter,ENVTIELetter)GetRuledSurfaceInfo(oRefDirection)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeRuledSurface(classe)    TIECATIExchangeRuledSurface##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeRuledSurface(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeRuledSurface, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeRuledSurface, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeRuledSurface, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeRuledSurface, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeRuledSurface, classe) \
 \
CATBaseUnknown_var  TIECATIExchangeRuledSurface##classe::GetRuledSurfaceFirstCurve(short *oDirectionFlag, CATBaseUnknown_var ioRelimitedOnFace )  const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRuledSurfaceFirstCurve(oDirectionFlag,ioRelimitedOnFace )); \
} \
CATBaseUnknown_var  TIECATIExchangeRuledSurface##classe::GetRuledSurfaceSecondCurve(short *oDevelopableSurfaceFlag, CATBaseUnknown_var ioRelimitedOnFace ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRuledSurfaceSecondCurve(oDevelopableSurfaceFlag,ioRelimitedOnFace )); \
} \
HRESULT  TIECATIExchangeRuledSurface##classe::GetRuledSurfaceInfo(double oRefDirection[3]) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRuledSurfaceInfo(oRefDirection)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeRuledSurface(classe) \
 \
 \
declare_TIE_CATIExchangeRuledSurface(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeRuledSurface##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeRuledSurface,"CATIExchangeRuledSurface",CATIExchangeRuledSurface::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeRuledSurface(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeRuledSurface, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeRuledSurface##classe(classe::MetaObject(),CATIExchangeRuledSurface::MetaObject(),(void *)CreateTIECATIExchangeRuledSurface##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeRuledSurface(classe) \
 \
 \
declare_TIE_CATIExchangeRuledSurface(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeRuledSurface##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeRuledSurface,"CATIExchangeRuledSurface",CATIExchangeRuledSurface::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeRuledSurface(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeRuledSurface, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeRuledSurface##classe(classe::MetaObject(),CATIExchangeRuledSurface::MetaObject(),(void *)CreateTIECATIExchangeRuledSurface##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeRuledSurface(classe) TIE_CATIExchangeRuledSurface(classe)
#else
#define BOA_CATIExchangeRuledSurface(classe) CATImplementBOA(CATIExchangeRuledSurface, classe)
#endif

#endif
