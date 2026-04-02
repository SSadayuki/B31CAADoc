#ifndef __TIE_CATIExchangePEllipse
#define __TIE_CATIExchangePEllipse

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangePEllipse.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangePEllipse */
#define declare_TIE_CATIExchangePEllipse(classe) \
 \
 \
class TIECATIExchangePEllipse##classe : public CATIExchangePEllipse \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangePEllipse, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetPEllipseData(double oCenterPoint[2], double oMajorAxis[2], double *oMinorMajorRatio) const ; \
      virtual HRESULT GetPEllipseData(double oOriginSystem[2], double oVectUSystem[2], double oVectVSystem[2], double *oMajorLength, double *oMinorLength ) const ; \
};



#define ENVTIEdeclare_CATIExchangePEllipse(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetPEllipseData(double oCenterPoint[2], double oMajorAxis[2], double *oMinorMajorRatio) const ; \
virtual HRESULT GetPEllipseData(double oOriginSystem[2], double oVectUSystem[2], double oVectVSystem[2], double *oMajorLength, double *oMinorLength ) const ; \


#define ENVTIEdefine_CATIExchangePEllipse(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetPEllipseData(double oCenterPoint[2], double oMajorAxis[2], double *oMinorMajorRatio) const  \
{ \
return (ENVTIECALL(CATIExchangePEllipse,ENVTIETypeLetter,ENVTIELetter)GetPEllipseData(oCenterPoint,oMajorAxis,oMinorMajorRatio)); \
} \
HRESULT  ENVTIEName::GetPEllipseData(double oOriginSystem[2], double oVectUSystem[2], double oVectVSystem[2], double *oMajorLength, double *oMinorLength ) const  \
{ \
return (ENVTIECALL(CATIExchangePEllipse,ENVTIETypeLetter,ENVTIELetter)GetPEllipseData(oOriginSystem,oVectUSystem,oVectVSystem,oMajorLength,oMinorLength )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangePEllipse(classe)    TIECATIExchangePEllipse##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangePEllipse(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangePEllipse, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangePEllipse, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangePEllipse, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangePEllipse, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangePEllipse, classe) \
 \
HRESULT  TIECATIExchangePEllipse##classe::GetPEllipseData(double oCenterPoint[2], double oMajorAxis[2], double *oMinorMajorRatio) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPEllipseData(oCenterPoint,oMajorAxis,oMinorMajorRatio)); \
} \
HRESULT  TIECATIExchangePEllipse##classe::GetPEllipseData(double oOriginSystem[2], double oVectUSystem[2], double oVectVSystem[2], double *oMajorLength, double *oMinorLength ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPEllipseData(oOriginSystem,oVectUSystem,oVectVSystem,oMajorLength,oMinorLength )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangePEllipse(classe) \
 \
 \
declare_TIE_CATIExchangePEllipse(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangePEllipse##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangePEllipse,"CATIExchangePEllipse",CATIExchangePEllipse::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangePEllipse(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangePEllipse, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangePEllipse##classe(classe::MetaObject(),CATIExchangePEllipse::MetaObject(),(void *)CreateTIECATIExchangePEllipse##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangePEllipse(classe) \
 \
 \
declare_TIE_CATIExchangePEllipse(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangePEllipse##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangePEllipse,"CATIExchangePEllipse",CATIExchangePEllipse::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangePEllipse(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangePEllipse, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangePEllipse##classe(classe::MetaObject(),CATIExchangePEllipse::MetaObject(),(void *)CreateTIECATIExchangePEllipse##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangePEllipse(classe) TIE_CATIExchangePEllipse(classe)
#else
#define BOA_CATIExchangePEllipse(classe) CATImplementBOA(CATIExchangePEllipse, classe)
#endif

#endif
