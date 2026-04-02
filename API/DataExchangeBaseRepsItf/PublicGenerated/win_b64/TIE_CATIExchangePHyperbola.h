#ifndef __TIE_CATIExchangePHyperbola
#define __TIE_CATIExchangePHyperbola

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangePHyperbola.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangePHyperbola */
#define declare_TIE_CATIExchangePHyperbola(classe) \
 \
 \
class TIECATIExchangePHyperbola##classe : public CATIExchangePHyperbola \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangePHyperbola, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetPHyperbolaData(double oIntersectionPoint[2], double oMajorAxis[2], double *oLengthTopC, double *oAxisASympAngle) const ; \
};



#define ENVTIEdeclare_CATIExchangePHyperbola(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetPHyperbolaData(double oIntersectionPoint[2], double oMajorAxis[2], double *oLengthTopC, double *oAxisASympAngle) const ; \


#define ENVTIEdefine_CATIExchangePHyperbola(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetPHyperbolaData(double oIntersectionPoint[2], double oMajorAxis[2], double *oLengthTopC, double *oAxisASympAngle) const  \
{ \
return (ENVTIECALL(CATIExchangePHyperbola,ENVTIETypeLetter,ENVTIELetter)GetPHyperbolaData(oIntersectionPoint,oMajorAxis,oLengthTopC,oAxisASympAngle)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangePHyperbola(classe)    TIECATIExchangePHyperbola##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangePHyperbola(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangePHyperbola, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangePHyperbola, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangePHyperbola, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangePHyperbola, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangePHyperbola, classe) \
 \
HRESULT  TIECATIExchangePHyperbola##classe::GetPHyperbolaData(double oIntersectionPoint[2], double oMajorAxis[2], double *oLengthTopC, double *oAxisASympAngle) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPHyperbolaData(oIntersectionPoint,oMajorAxis,oLengthTopC,oAxisASympAngle)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangePHyperbola(classe) \
 \
 \
declare_TIE_CATIExchangePHyperbola(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangePHyperbola##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangePHyperbola,"CATIExchangePHyperbola",CATIExchangePHyperbola::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangePHyperbola(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangePHyperbola, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangePHyperbola##classe(classe::MetaObject(),CATIExchangePHyperbola::MetaObject(),(void *)CreateTIECATIExchangePHyperbola##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangePHyperbola(classe) \
 \
 \
declare_TIE_CATIExchangePHyperbola(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangePHyperbola##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangePHyperbola,"CATIExchangePHyperbola",CATIExchangePHyperbola::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangePHyperbola(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangePHyperbola, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangePHyperbola##classe(classe::MetaObject(),CATIExchangePHyperbola::MetaObject(),(void *)CreateTIECATIExchangePHyperbola##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangePHyperbola(classe) TIE_CATIExchangePHyperbola(classe)
#else
#define BOA_CATIExchangePHyperbola(classe) CATImplementBOA(CATIExchangePHyperbola, classe)
#endif

#endif
