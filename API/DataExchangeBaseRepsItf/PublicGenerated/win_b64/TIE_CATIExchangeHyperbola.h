#ifndef __TIE_CATIExchangeHyperbola
#define __TIE_CATIExchangeHyperbola

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeHyperbola.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeHyperbola */
#define declare_TIE_CATIExchangeHyperbola(classe) \
 \
 \
class TIECATIExchangeHyperbola##classe : public CATIExchangeHyperbola \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeHyperbola, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetHyperbolaData(double oIntersectionPoint[3], double oAxisVector[3], double oMajorAxis[3], double *oLengthTopC, double *oAxisASympAngle) const ; \
      virtual HRESULT GetHyperbolaData2(double oVertex[3], double oAxisVector[3], double oMajorAxis[3], double* oSemi_axis, double *oSemi_imag_axis) const ; \
};



#define ENVTIEdeclare_CATIExchangeHyperbola(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetHyperbolaData(double oIntersectionPoint[3], double oAxisVector[3], double oMajorAxis[3], double *oLengthTopC, double *oAxisASympAngle) const ; \
virtual HRESULT GetHyperbolaData2(double oVertex[3], double oAxisVector[3], double oMajorAxis[3], double* oSemi_axis, double *oSemi_imag_axis) const ; \


#define ENVTIEdefine_CATIExchangeHyperbola(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetHyperbolaData(double oIntersectionPoint[3], double oAxisVector[3], double oMajorAxis[3], double *oLengthTopC, double *oAxisASympAngle) const  \
{ \
return (ENVTIECALL(CATIExchangeHyperbola,ENVTIETypeLetter,ENVTIELetter)GetHyperbolaData(oIntersectionPoint,oAxisVector,oMajorAxis,oLengthTopC,oAxisASympAngle)); \
} \
HRESULT  ENVTIEName::GetHyperbolaData2(double oVertex[3], double oAxisVector[3], double oMajorAxis[3], double* oSemi_axis, double *oSemi_imag_axis) const  \
{ \
return (ENVTIECALL(CATIExchangeHyperbola,ENVTIETypeLetter,ENVTIELetter)GetHyperbolaData2(oVertex,oAxisVector,oMajorAxis,oSemi_axis,oSemi_imag_axis)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeHyperbola(classe)    TIECATIExchangeHyperbola##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeHyperbola(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeHyperbola, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeHyperbola, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeHyperbola, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeHyperbola, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeHyperbola, classe) \
 \
HRESULT  TIECATIExchangeHyperbola##classe::GetHyperbolaData(double oIntersectionPoint[3], double oAxisVector[3], double oMajorAxis[3], double *oLengthTopC, double *oAxisASympAngle) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetHyperbolaData(oIntersectionPoint,oAxisVector,oMajorAxis,oLengthTopC,oAxisASympAngle)); \
} \
HRESULT  TIECATIExchangeHyperbola##classe::GetHyperbolaData2(double oVertex[3], double oAxisVector[3], double oMajorAxis[3], double* oSemi_axis, double *oSemi_imag_axis) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetHyperbolaData2(oVertex,oAxisVector,oMajorAxis,oSemi_axis,oSemi_imag_axis)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeHyperbola(classe) \
 \
 \
declare_TIE_CATIExchangeHyperbola(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeHyperbola##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeHyperbola,"CATIExchangeHyperbola",CATIExchangeHyperbola::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeHyperbola(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeHyperbola, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeHyperbola##classe(classe::MetaObject(),CATIExchangeHyperbola::MetaObject(),(void *)CreateTIECATIExchangeHyperbola##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeHyperbola(classe) \
 \
 \
declare_TIE_CATIExchangeHyperbola(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeHyperbola##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeHyperbola,"CATIExchangeHyperbola",CATIExchangeHyperbola::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeHyperbola(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeHyperbola, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeHyperbola##classe(classe::MetaObject(),CATIExchangeHyperbola::MetaObject(),(void *)CreateTIECATIExchangeHyperbola##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeHyperbola(classe) TIE_CATIExchangeHyperbola(classe)
#else
#define BOA_CATIExchangeHyperbola(classe) CATImplementBOA(CATIExchangeHyperbola, classe)
#endif

#endif
