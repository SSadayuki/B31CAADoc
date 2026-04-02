#ifndef __TIE_CATIExchangeSphere
#define __TIE_CATIExchangeSphere

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeSphere.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeSphere */
#define declare_TIE_CATIExchangeSphere(classe) \
 \
 \
class TIECATIExchangeSphere##classe : public CATIExchangeSphere \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeSphere, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetSphereData(double oCenterPoint[3],double *oRadius, double oAxisvector[3], CATBaseUnknown_var ioRelimitedOnFace = ((CATBaseUnknown*)0)) const ; \
      virtual HRESULT GetSphereInfo(double oRefDirection[3]) const ; \
};



#define ENVTIEdeclare_CATIExchangeSphere(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetSphereData(double oCenterPoint[3],double *oRadius, double oAxisvector[3], CATBaseUnknown_var ioRelimitedOnFace = ((CATBaseUnknown*)0)) const ; \
virtual HRESULT GetSphereInfo(double oRefDirection[3]) const ; \


#define ENVTIEdefine_CATIExchangeSphere(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetSphereData(double oCenterPoint[3],double *oRadius, double oAxisvector[3], CATBaseUnknown_var ioRelimitedOnFace ) const  \
{ \
return (ENVTIECALL(CATIExchangeSphere,ENVTIETypeLetter,ENVTIELetter)GetSphereData(oCenterPoint,oRadius,oAxisvector,ioRelimitedOnFace )); \
} \
HRESULT  ENVTIEName::GetSphereInfo(double oRefDirection[3]) const  \
{ \
return (ENVTIECALL(CATIExchangeSphere,ENVTIETypeLetter,ENVTIELetter)GetSphereInfo(oRefDirection)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeSphere(classe)    TIECATIExchangeSphere##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeSphere(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeSphere, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeSphere, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeSphere, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeSphere, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeSphere, classe) \
 \
HRESULT  TIECATIExchangeSphere##classe::GetSphereData(double oCenterPoint[3],double *oRadius, double oAxisvector[3], CATBaseUnknown_var ioRelimitedOnFace ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSphereData(oCenterPoint,oRadius,oAxisvector,ioRelimitedOnFace )); \
} \
HRESULT  TIECATIExchangeSphere##classe::GetSphereInfo(double oRefDirection[3]) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSphereInfo(oRefDirection)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeSphere(classe) \
 \
 \
declare_TIE_CATIExchangeSphere(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeSphere##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeSphere,"CATIExchangeSphere",CATIExchangeSphere::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeSphere(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeSphere, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeSphere##classe(classe::MetaObject(),CATIExchangeSphere::MetaObject(),(void *)CreateTIECATIExchangeSphere##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeSphere(classe) \
 \
 \
declare_TIE_CATIExchangeSphere(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeSphere##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeSphere,"CATIExchangeSphere",CATIExchangeSphere::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeSphere(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeSphere, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeSphere##classe(classe::MetaObject(),CATIExchangeSphere::MetaObject(),(void *)CreateTIECATIExchangeSphere##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeSphere(classe) TIE_CATIExchangeSphere(classe)
#else
#define BOA_CATIExchangeSphere(classe) CATImplementBOA(CATIExchangeSphere, classe)
#endif

#endif
