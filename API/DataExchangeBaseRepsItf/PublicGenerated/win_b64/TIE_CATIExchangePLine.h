#ifndef __TIE_CATIExchangePLine
#define __TIE_CATIExchangePLine

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangePLine.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangePLine */
#define declare_TIE_CATIExchangePLine(classe) \
 \
 \
class TIECATIExchangePLine##classe : public CATIExchangePLine \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangePLine, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetPLineData(double *oRootPoint, double *oVector) const ; \
};



#define ENVTIEdeclare_CATIExchangePLine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetPLineData(double *oRootPoint, double *oVector) const ; \


#define ENVTIEdefine_CATIExchangePLine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetPLineData(double *oRootPoint, double *oVector) const  \
{ \
return (ENVTIECALL(CATIExchangePLine,ENVTIETypeLetter,ENVTIELetter)GetPLineData(oRootPoint,oVector)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangePLine(classe)    TIECATIExchangePLine##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangePLine(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangePLine, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangePLine, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangePLine, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangePLine, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangePLine, classe) \
 \
HRESULT  TIECATIExchangePLine##classe::GetPLineData(double *oRootPoint, double *oVector) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPLineData(oRootPoint,oVector)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangePLine(classe) \
 \
 \
declare_TIE_CATIExchangePLine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangePLine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangePLine,"CATIExchangePLine",CATIExchangePLine::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangePLine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangePLine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangePLine##classe(classe::MetaObject(),CATIExchangePLine::MetaObject(),(void *)CreateTIECATIExchangePLine##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangePLine(classe) \
 \
 \
declare_TIE_CATIExchangePLine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangePLine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangePLine,"CATIExchangePLine",CATIExchangePLine::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangePLine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangePLine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangePLine##classe(classe::MetaObject(),CATIExchangePLine::MetaObject(),(void *)CreateTIECATIExchangePLine##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangePLine(classe) TIE_CATIExchangePLine(classe)
#else
#define BOA_CATIExchangePLine(classe) CATImplementBOA(CATIExchangePLine, classe)
#endif

#endif
