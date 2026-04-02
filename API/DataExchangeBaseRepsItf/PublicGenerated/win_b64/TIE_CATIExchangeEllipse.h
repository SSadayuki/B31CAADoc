#ifndef __TIE_CATIExchangeEllipse
#define __TIE_CATIExchangeEllipse

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeEllipse.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeEllipse */
#define declare_TIE_CATIExchangeEllipse(classe) \
 \
 \
class TIECATIExchangeEllipse##classe : public CATIExchangeEllipse \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeEllipse, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetEllipseData(double oCenterPoint[3], double oAxisVector[3], double oMajorAxis[3], double *oMinorMajorRatio) const ; \
      virtual HRESULT GetEllipseData(double oOriginSystem[3], double oVectUSystem[3], double oVectVSystem[3], double *oMajorLength, double *oMinorLength ) const ; \
};



#define ENVTIEdeclare_CATIExchangeEllipse(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetEllipseData(double oCenterPoint[3], double oAxisVector[3], double oMajorAxis[3], double *oMinorMajorRatio) const ; \
virtual HRESULT GetEllipseData(double oOriginSystem[3], double oVectUSystem[3], double oVectVSystem[3], double *oMajorLength, double *oMinorLength ) const ; \


#define ENVTIEdefine_CATIExchangeEllipse(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetEllipseData(double oCenterPoint[3], double oAxisVector[3], double oMajorAxis[3], double *oMinorMajorRatio) const  \
{ \
return (ENVTIECALL(CATIExchangeEllipse,ENVTIETypeLetter,ENVTIELetter)GetEllipseData(oCenterPoint,oAxisVector,oMajorAxis,oMinorMajorRatio)); \
} \
HRESULT  ENVTIEName::GetEllipseData(double oOriginSystem[3], double oVectUSystem[3], double oVectVSystem[3], double *oMajorLength, double *oMinorLength ) const  \
{ \
return (ENVTIECALL(CATIExchangeEllipse,ENVTIETypeLetter,ENVTIELetter)GetEllipseData(oOriginSystem,oVectUSystem,oVectVSystem,oMajorLength,oMinorLength )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeEllipse(classe)    TIECATIExchangeEllipse##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeEllipse(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeEllipse, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeEllipse, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeEllipse, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeEllipse, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeEllipse, classe) \
 \
HRESULT  TIECATIExchangeEllipse##classe::GetEllipseData(double oCenterPoint[3], double oAxisVector[3], double oMajorAxis[3], double *oMinorMajorRatio) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEllipseData(oCenterPoint,oAxisVector,oMajorAxis,oMinorMajorRatio)); \
} \
HRESULT  TIECATIExchangeEllipse##classe::GetEllipseData(double oOriginSystem[3], double oVectUSystem[3], double oVectVSystem[3], double *oMajorLength, double *oMinorLength ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEllipseData(oOriginSystem,oVectUSystem,oVectVSystem,oMajorLength,oMinorLength )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeEllipse(classe) \
 \
 \
declare_TIE_CATIExchangeEllipse(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeEllipse##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeEllipse,"CATIExchangeEllipse",CATIExchangeEllipse::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeEllipse(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeEllipse, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeEllipse##classe(classe::MetaObject(),CATIExchangeEllipse::MetaObject(),(void *)CreateTIECATIExchangeEllipse##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeEllipse(classe) \
 \
 \
declare_TIE_CATIExchangeEllipse(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeEllipse##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeEllipse,"CATIExchangeEllipse",CATIExchangeEllipse::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeEllipse(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeEllipse, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeEllipse##classe(classe::MetaObject(),CATIExchangeEllipse::MetaObject(),(void *)CreateTIECATIExchangeEllipse##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeEllipse(classe) TIE_CATIExchangeEllipse(classe)
#else
#define BOA_CATIExchangeEllipse(classe) CATImplementBOA(CATIExchangeEllipse, classe)
#endif

#endif
