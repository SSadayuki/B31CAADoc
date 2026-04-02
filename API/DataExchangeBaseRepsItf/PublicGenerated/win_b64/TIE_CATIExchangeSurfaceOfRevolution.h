#ifndef __TIE_CATIExchangeSurfaceOfRevolution
#define __TIE_CATIExchangeSurfaceOfRevolution

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeSurfaceOfRevolution.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeSurfaceOfRevolution */
#define declare_TIE_CATIExchangeSurfaceOfRevolution(classe) \
 \
 \
class TIECATIExchangeSurfaceOfRevolution##classe : public CATIExchangeSurfaceOfRevolution \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeSurfaceOfRevolution, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetSurfaceOfRevolutionData(double oAxisOfRevolution[3], double oPointOnAxis[3], double *oStartAngle, double *oEndAngle, CATBaseUnknown_var &oGeneratrix) const ; \
      virtual HRESULT ActiveGeneratrixTrim(CATBaseUnknown_var iRelimitedOnFace, short iIsFittingRequested = 0) const ; \
      virtual HRESULT GetSurfaceOfRevolutionInfo(double oRefDirection[3]) const ; \
};



#define ENVTIEdeclare_CATIExchangeSurfaceOfRevolution(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetSurfaceOfRevolutionData(double oAxisOfRevolution[3], double oPointOnAxis[3], double *oStartAngle, double *oEndAngle, CATBaseUnknown_var &oGeneratrix) const ; \
virtual HRESULT ActiveGeneratrixTrim(CATBaseUnknown_var iRelimitedOnFace, short iIsFittingRequested = 0) const ; \
virtual HRESULT GetSurfaceOfRevolutionInfo(double oRefDirection[3]) const ; \


#define ENVTIEdefine_CATIExchangeSurfaceOfRevolution(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetSurfaceOfRevolutionData(double oAxisOfRevolution[3], double oPointOnAxis[3], double *oStartAngle, double *oEndAngle, CATBaseUnknown_var &oGeneratrix) const  \
{ \
return (ENVTIECALL(CATIExchangeSurfaceOfRevolution,ENVTIETypeLetter,ENVTIELetter)GetSurfaceOfRevolutionData(oAxisOfRevolution,oPointOnAxis,oStartAngle,oEndAngle,oGeneratrix)); \
} \
HRESULT  ENVTIEName::ActiveGeneratrixTrim(CATBaseUnknown_var iRelimitedOnFace, short iIsFittingRequested ) const  \
{ \
return (ENVTIECALL(CATIExchangeSurfaceOfRevolution,ENVTIETypeLetter,ENVTIELetter)ActiveGeneratrixTrim(iRelimitedOnFace,iIsFittingRequested )); \
} \
HRESULT  ENVTIEName::GetSurfaceOfRevolutionInfo(double oRefDirection[3]) const  \
{ \
return (ENVTIECALL(CATIExchangeSurfaceOfRevolution,ENVTIETypeLetter,ENVTIELetter)GetSurfaceOfRevolutionInfo(oRefDirection)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeSurfaceOfRevolution(classe)    TIECATIExchangeSurfaceOfRevolution##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeSurfaceOfRevolution(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeSurfaceOfRevolution, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeSurfaceOfRevolution, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeSurfaceOfRevolution, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeSurfaceOfRevolution, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeSurfaceOfRevolution, classe) \
 \
HRESULT  TIECATIExchangeSurfaceOfRevolution##classe::GetSurfaceOfRevolutionData(double oAxisOfRevolution[3], double oPointOnAxis[3], double *oStartAngle, double *oEndAngle, CATBaseUnknown_var &oGeneratrix) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSurfaceOfRevolutionData(oAxisOfRevolution,oPointOnAxis,oStartAngle,oEndAngle,oGeneratrix)); \
} \
HRESULT  TIECATIExchangeSurfaceOfRevolution##classe::ActiveGeneratrixTrim(CATBaseUnknown_var iRelimitedOnFace, short iIsFittingRequested ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ActiveGeneratrixTrim(iRelimitedOnFace,iIsFittingRequested )); \
} \
HRESULT  TIECATIExchangeSurfaceOfRevolution##classe::GetSurfaceOfRevolutionInfo(double oRefDirection[3]) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSurfaceOfRevolutionInfo(oRefDirection)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeSurfaceOfRevolution(classe) \
 \
 \
declare_TIE_CATIExchangeSurfaceOfRevolution(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeSurfaceOfRevolution##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeSurfaceOfRevolution,"CATIExchangeSurfaceOfRevolution",CATIExchangeSurfaceOfRevolution::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeSurfaceOfRevolution(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeSurfaceOfRevolution, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeSurfaceOfRevolution##classe(classe::MetaObject(),CATIExchangeSurfaceOfRevolution::MetaObject(),(void *)CreateTIECATIExchangeSurfaceOfRevolution##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeSurfaceOfRevolution(classe) \
 \
 \
declare_TIE_CATIExchangeSurfaceOfRevolution(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeSurfaceOfRevolution##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeSurfaceOfRevolution,"CATIExchangeSurfaceOfRevolution",CATIExchangeSurfaceOfRevolution::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeSurfaceOfRevolution(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeSurfaceOfRevolution, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeSurfaceOfRevolution##classe(classe::MetaObject(),CATIExchangeSurfaceOfRevolution::MetaObject(),(void *)CreateTIECATIExchangeSurfaceOfRevolution##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeSurfaceOfRevolution(classe) TIE_CATIExchangeSurfaceOfRevolution(classe)
#else
#define BOA_CATIExchangeSurfaceOfRevolution(classe) CATImplementBOA(CATIExchangeSurfaceOfRevolution, classe)
#endif

#endif
