#ifndef __TIE_CATIExchangePoint
#define __TIE_CATIExchangePoint

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangePoint.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangePoint */
#define declare_TIE_CATIExchangePoint(classe) \
 \
 \
class TIECATIExchangePoint##classe : public CATIExchangePoint \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangePoint, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetPointData(double *oPoint) const ; \
};



#define ENVTIEdeclare_CATIExchangePoint(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetPointData(double *oPoint) const ; \


#define ENVTIEdefine_CATIExchangePoint(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetPointData(double *oPoint) const  \
{ \
return (ENVTIECALL(CATIExchangePoint,ENVTIETypeLetter,ENVTIELetter)GetPointData(oPoint)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangePoint(classe)    TIECATIExchangePoint##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangePoint(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangePoint, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangePoint, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangePoint, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangePoint, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangePoint, classe) \
 \
HRESULT  TIECATIExchangePoint##classe::GetPointData(double *oPoint) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPointData(oPoint)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangePoint(classe) \
 \
 \
declare_TIE_CATIExchangePoint(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangePoint##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangePoint,"CATIExchangePoint",CATIExchangePoint::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangePoint(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangePoint, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangePoint##classe(classe::MetaObject(),CATIExchangePoint::MetaObject(),(void *)CreateTIECATIExchangePoint##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangePoint(classe) \
 \
 \
declare_TIE_CATIExchangePoint(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangePoint##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangePoint,"CATIExchangePoint",CATIExchangePoint::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangePoint(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangePoint, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangePoint##classe(classe::MetaObject(),CATIExchangePoint::MetaObject(),(void *)CreateTIECATIExchangePoint##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangePoint(classe) TIE_CATIExchangePoint(classe)
#else
#define BOA_CATIExchangePoint(classe) CATImplementBOA(CATIExchangePoint, classe)
#endif

#endif
