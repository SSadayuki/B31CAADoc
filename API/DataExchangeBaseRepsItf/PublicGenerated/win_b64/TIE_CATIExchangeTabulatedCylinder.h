#ifndef __TIE_CATIExchangeTabulatedCylinder
#define __TIE_CATIExchangeTabulatedCylinder

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeTabulatedCylinder.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeTabulatedCylinder */
#define declare_TIE_CATIExchangeTabulatedCylinder(classe) \
 \
 \
class TIECATIExchangeTabulatedCylinder##classe : public CATIExchangeTabulatedCylinder \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeTabulatedCylinder, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetTabulatedCylinderData(double oVectDirectrix[3], double *oLimitLength, double *oOtherLimitLength, CATBaseUnknown_var &oGeneratrix) const ; \
      virtual HRESULT ActiveGeneratrixTrim(CATBaseUnknown_var iRelimitedOnFace, short iIsFittingRequested = 0) const ; \
      virtual HRESULT GetTabulatedCylinderInfo(double oRefDirection[3]) const ; \
};



#define ENVTIEdeclare_CATIExchangeTabulatedCylinder(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetTabulatedCylinderData(double oVectDirectrix[3], double *oLimitLength, double *oOtherLimitLength, CATBaseUnknown_var &oGeneratrix) const ; \
virtual HRESULT ActiveGeneratrixTrim(CATBaseUnknown_var iRelimitedOnFace, short iIsFittingRequested = 0) const ; \
virtual HRESULT GetTabulatedCylinderInfo(double oRefDirection[3]) const ; \


#define ENVTIEdefine_CATIExchangeTabulatedCylinder(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetTabulatedCylinderData(double oVectDirectrix[3], double *oLimitLength, double *oOtherLimitLength, CATBaseUnknown_var &oGeneratrix) const  \
{ \
return (ENVTIECALL(CATIExchangeTabulatedCylinder,ENVTIETypeLetter,ENVTIELetter)GetTabulatedCylinderData(oVectDirectrix,oLimitLength,oOtherLimitLength,oGeneratrix)); \
} \
HRESULT  ENVTIEName::ActiveGeneratrixTrim(CATBaseUnknown_var iRelimitedOnFace, short iIsFittingRequested ) const  \
{ \
return (ENVTIECALL(CATIExchangeTabulatedCylinder,ENVTIETypeLetter,ENVTIELetter)ActiveGeneratrixTrim(iRelimitedOnFace,iIsFittingRequested )); \
} \
HRESULT  ENVTIEName::GetTabulatedCylinderInfo(double oRefDirection[3]) const  \
{ \
return (ENVTIECALL(CATIExchangeTabulatedCylinder,ENVTIETypeLetter,ENVTIELetter)GetTabulatedCylinderInfo(oRefDirection)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeTabulatedCylinder(classe)    TIECATIExchangeTabulatedCylinder##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeTabulatedCylinder(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeTabulatedCylinder, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeTabulatedCylinder, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeTabulatedCylinder, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeTabulatedCylinder, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeTabulatedCylinder, classe) \
 \
HRESULT  TIECATIExchangeTabulatedCylinder##classe::GetTabulatedCylinderData(double oVectDirectrix[3], double *oLimitLength, double *oOtherLimitLength, CATBaseUnknown_var &oGeneratrix) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTabulatedCylinderData(oVectDirectrix,oLimitLength,oOtherLimitLength,oGeneratrix)); \
} \
HRESULT  TIECATIExchangeTabulatedCylinder##classe::ActiveGeneratrixTrim(CATBaseUnknown_var iRelimitedOnFace, short iIsFittingRequested ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ActiveGeneratrixTrim(iRelimitedOnFace,iIsFittingRequested )); \
} \
HRESULT  TIECATIExchangeTabulatedCylinder##classe::GetTabulatedCylinderInfo(double oRefDirection[3]) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTabulatedCylinderInfo(oRefDirection)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeTabulatedCylinder(classe) \
 \
 \
declare_TIE_CATIExchangeTabulatedCylinder(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeTabulatedCylinder##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeTabulatedCylinder,"CATIExchangeTabulatedCylinder",CATIExchangeTabulatedCylinder::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeTabulatedCylinder(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeTabulatedCylinder, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeTabulatedCylinder##classe(classe::MetaObject(),CATIExchangeTabulatedCylinder::MetaObject(),(void *)CreateTIECATIExchangeTabulatedCylinder##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeTabulatedCylinder(classe) \
 \
 \
declare_TIE_CATIExchangeTabulatedCylinder(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeTabulatedCylinder##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeTabulatedCylinder,"CATIExchangeTabulatedCylinder",CATIExchangeTabulatedCylinder::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeTabulatedCylinder(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeTabulatedCylinder, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeTabulatedCylinder##classe(classe::MetaObject(),CATIExchangeTabulatedCylinder::MetaObject(),(void *)CreateTIECATIExchangeTabulatedCylinder##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeTabulatedCylinder(classe) TIE_CATIExchangeTabulatedCylinder(classe)
#else
#define BOA_CATIExchangeTabulatedCylinder(classe) CATImplementBOA(CATIExchangeTabulatedCylinder, classe)
#endif

#endif
