#ifndef __TIE_CATIExchangeLine
#define __TIE_CATIExchangeLine

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeLine.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeLine */
#define declare_TIE_CATIExchangeLine(classe) \
 \
 \
class TIECATIExchangeLine##classe : public CATIExchangeLine \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeLine, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetLineData(double *oRootPoint, double *oVector) const ; \
};



#define ENVTIEdeclare_CATIExchangeLine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetLineData(double *oRootPoint, double *oVector) const ; \


#define ENVTIEdefine_CATIExchangeLine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetLineData(double *oRootPoint, double *oVector) const  \
{ \
return (ENVTIECALL(CATIExchangeLine,ENVTIETypeLetter,ENVTIELetter)GetLineData(oRootPoint,oVector)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeLine(classe)    TIECATIExchangeLine##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeLine(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeLine, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeLine, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeLine, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeLine, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeLine, classe) \
 \
HRESULT  TIECATIExchangeLine##classe::GetLineData(double *oRootPoint, double *oVector) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLineData(oRootPoint,oVector)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeLine(classe) \
 \
 \
declare_TIE_CATIExchangeLine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeLine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeLine,"CATIExchangeLine",CATIExchangeLine::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeLine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeLine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeLine##classe(classe::MetaObject(),CATIExchangeLine::MetaObject(),(void *)CreateTIECATIExchangeLine##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeLine(classe) \
 \
 \
declare_TIE_CATIExchangeLine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeLine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeLine,"CATIExchangeLine",CATIExchangeLine::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeLine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeLine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeLine##classe(classe::MetaObject(),CATIExchangeLine::MetaObject(),(void *)CreateTIECATIExchangeLine##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeLine(classe) TIE_CATIExchangeLine(classe)
#else
#define BOA_CATIExchangeLine(classe) CATImplementBOA(CATIExchangeLine, classe)
#endif

#endif
