#ifndef __TIE_CATIExchangeTorus
#define __TIE_CATIExchangeTorus

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeTorus.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeTorus */
#define declare_TIE_CATIExchangeTorus(classe) \
 \
 \
class TIECATIExchangeTorus##classe : public CATIExchangeTorus \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeTorus, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetTorusData(double oCenterPoint[3], double oAxisVector[3], double *oMajorRadius, double *oMinorRadius, CATBaseUnknown_var ioRelimitedOnFace = ((CATBaseUnknown*)0)) const ; \
      virtual HRESULT IsAxisDirect(int *oIsDirect) const ; \
      virtual HRESULT GetTorusInfo(double oRefDirection[3]) const ; \
      virtual HRESULT IsAppleType() const ; \
      virtual HRESULT GetRelimitedGeneratrix(CATIExchangeBSplineCurve_var& oCurve) const ; \
};



#define ENVTIEdeclare_CATIExchangeTorus(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetTorusData(double oCenterPoint[3], double oAxisVector[3], double *oMajorRadius, double *oMinorRadius, CATBaseUnknown_var ioRelimitedOnFace = ((CATBaseUnknown*)0)) const ; \
virtual HRESULT IsAxisDirect(int *oIsDirect) const ; \
virtual HRESULT GetTorusInfo(double oRefDirection[3]) const ; \
virtual HRESULT IsAppleType() const ; \
virtual HRESULT GetRelimitedGeneratrix(CATIExchangeBSplineCurve_var& oCurve) const ; \


#define ENVTIEdefine_CATIExchangeTorus(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetTorusData(double oCenterPoint[3], double oAxisVector[3], double *oMajorRadius, double *oMinorRadius, CATBaseUnknown_var ioRelimitedOnFace ) const  \
{ \
return (ENVTIECALL(CATIExchangeTorus,ENVTIETypeLetter,ENVTIELetter)GetTorusData(oCenterPoint,oAxisVector,oMajorRadius,oMinorRadius,ioRelimitedOnFace )); \
} \
HRESULT  ENVTIEName::IsAxisDirect(int *oIsDirect) const  \
{ \
return (ENVTIECALL(CATIExchangeTorus,ENVTIETypeLetter,ENVTIELetter)IsAxisDirect(oIsDirect)); \
} \
HRESULT  ENVTIEName::GetTorusInfo(double oRefDirection[3]) const  \
{ \
return (ENVTIECALL(CATIExchangeTorus,ENVTIETypeLetter,ENVTIELetter)GetTorusInfo(oRefDirection)); \
} \
HRESULT  ENVTIEName::IsAppleType() const  \
{ \
return (ENVTIECALL(CATIExchangeTorus,ENVTIETypeLetter,ENVTIELetter)IsAppleType()); \
} \
HRESULT  ENVTIEName::GetRelimitedGeneratrix(CATIExchangeBSplineCurve_var& oCurve) const  \
{ \
return (ENVTIECALL(CATIExchangeTorus,ENVTIETypeLetter,ENVTIELetter)GetRelimitedGeneratrix(oCurve)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeTorus(classe)    TIECATIExchangeTorus##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeTorus(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeTorus, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeTorus, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeTorus, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeTorus, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeTorus, classe) \
 \
HRESULT  TIECATIExchangeTorus##classe::GetTorusData(double oCenterPoint[3], double oAxisVector[3], double *oMajorRadius, double *oMinorRadius, CATBaseUnknown_var ioRelimitedOnFace ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTorusData(oCenterPoint,oAxisVector,oMajorRadius,oMinorRadius,ioRelimitedOnFace )); \
} \
HRESULT  TIECATIExchangeTorus##classe::IsAxisDirect(int *oIsDirect) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAxisDirect(oIsDirect)); \
} \
HRESULT  TIECATIExchangeTorus##classe::GetTorusInfo(double oRefDirection[3]) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTorusInfo(oRefDirection)); \
} \
HRESULT  TIECATIExchangeTorus##classe::IsAppleType() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAppleType()); \
} \
HRESULT  TIECATIExchangeTorus##classe::GetRelimitedGeneratrix(CATIExchangeBSplineCurve_var& oCurve) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRelimitedGeneratrix(oCurve)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeTorus(classe) \
 \
 \
declare_TIE_CATIExchangeTorus(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeTorus##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeTorus,"CATIExchangeTorus",CATIExchangeTorus::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeTorus(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeTorus, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeTorus##classe(classe::MetaObject(),CATIExchangeTorus::MetaObject(),(void *)CreateTIECATIExchangeTorus##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeTorus(classe) \
 \
 \
declare_TIE_CATIExchangeTorus(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeTorus##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeTorus,"CATIExchangeTorus",CATIExchangeTorus::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeTorus(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeTorus, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeTorus##classe(classe::MetaObject(),CATIExchangeTorus::MetaObject(),(void *)CreateTIECATIExchangeTorus##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeTorus(classe) TIE_CATIExchangeTorus(classe)
#else
#define BOA_CATIExchangeTorus(classe) CATImplementBOA(CATIExchangeTorus, classe)
#endif

#endif
