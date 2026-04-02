#ifndef __TIE_CATIExchangePCircle
#define __TIE_CATIExchangePCircle

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangePCircle.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangePCircle */
#define declare_TIE_CATIExchangePCircle(classe) \
 \
 \
class TIECATIExchangePCircle##classe : public CATIExchangePCircle \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangePCircle, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetPCircleData(double *oCenterPoint, double *oRadius) const ; \
};



#define ENVTIEdeclare_CATIExchangePCircle(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetPCircleData(double *oCenterPoint, double *oRadius) const ; \


#define ENVTIEdefine_CATIExchangePCircle(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetPCircleData(double *oCenterPoint, double *oRadius) const  \
{ \
return (ENVTIECALL(CATIExchangePCircle,ENVTIETypeLetter,ENVTIELetter)GetPCircleData(oCenterPoint,oRadius)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangePCircle(classe)    TIECATIExchangePCircle##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangePCircle(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangePCircle, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangePCircle, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangePCircle, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangePCircle, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangePCircle, classe) \
 \
HRESULT  TIECATIExchangePCircle##classe::GetPCircleData(double *oCenterPoint, double *oRadius) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPCircleData(oCenterPoint,oRadius)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangePCircle(classe) \
 \
 \
declare_TIE_CATIExchangePCircle(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangePCircle##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangePCircle,"CATIExchangePCircle",CATIExchangePCircle::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangePCircle(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangePCircle, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangePCircle##classe(classe::MetaObject(),CATIExchangePCircle::MetaObject(),(void *)CreateTIECATIExchangePCircle##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangePCircle(classe) \
 \
 \
declare_TIE_CATIExchangePCircle(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangePCircle##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangePCircle,"CATIExchangePCircle",CATIExchangePCircle::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangePCircle(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangePCircle, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangePCircle##classe(classe::MetaObject(),CATIExchangePCircle::MetaObject(),(void *)CreateTIECATIExchangePCircle##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangePCircle(classe) TIE_CATIExchangePCircle(classe)
#else
#define BOA_CATIExchangePCircle(classe) CATImplementBOA(CATIExchangePCircle, classe)
#endif

#endif
