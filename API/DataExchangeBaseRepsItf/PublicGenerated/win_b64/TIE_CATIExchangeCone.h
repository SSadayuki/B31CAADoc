#ifndef __TIE_CATIExchangeCone
#define __TIE_CATIExchangeCone

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeCone.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeCone */
#define declare_TIE_CATIExchangeCone(classe) \
 \
 \
class TIECATIExchangeCone##classe : public CATIExchangeCone \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeCone, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetConeData(double oBasePoint[3], double oAxisVector[3], double *oRadius, double *oHalfAngle, int *oIsExpanding, double *oStartAngle, double *oEndAngle, CATBaseUnknown_var ioRelimitedOnFace = ((CATBaseUnknown*)0) ) const ; \
      virtual HRESULT IsAxisDirect(int *oIsDirect) const ; \
      virtual HRESULT GetAllConeData(double pBasePoint[3], double pAxisVector[3], double *pRadius, double *pHalfAngle, int *pIsExpanding, double *pStartAngle, double *pEndAngle, CATBaseUnknown_var RelimitedOnFace = ((CATBaseUnknown*)0), double pRefDirection[3] = 0) const ; \
      virtual HRESULT GetConeInfo(double oRefDirection[3]) const ; \
};



#define ENVTIEdeclare_CATIExchangeCone(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetConeData(double oBasePoint[3], double oAxisVector[3], double *oRadius, double *oHalfAngle, int *oIsExpanding, double *oStartAngle, double *oEndAngle, CATBaseUnknown_var ioRelimitedOnFace = ((CATBaseUnknown*)0) ) const ; \
virtual HRESULT IsAxisDirect(int *oIsDirect) const ; \
virtual HRESULT GetAllConeData(double pBasePoint[3], double pAxisVector[3], double *pRadius, double *pHalfAngle, int *pIsExpanding, double *pStartAngle, double *pEndAngle, CATBaseUnknown_var RelimitedOnFace = ((CATBaseUnknown*)0), double pRefDirection[3] = 0) const ; \
virtual HRESULT GetConeInfo(double oRefDirection[3]) const ; \


#define ENVTIEdefine_CATIExchangeCone(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetConeData(double oBasePoint[3], double oAxisVector[3], double *oRadius, double *oHalfAngle, int *oIsExpanding, double *oStartAngle, double *oEndAngle, CATBaseUnknown_var ioRelimitedOnFace ) const  \
{ \
return (ENVTIECALL(CATIExchangeCone,ENVTIETypeLetter,ENVTIELetter)GetConeData(oBasePoint,oAxisVector,oRadius,oHalfAngle,oIsExpanding,oStartAngle,oEndAngle,ioRelimitedOnFace )); \
} \
HRESULT  ENVTIEName::IsAxisDirect(int *oIsDirect) const  \
{ \
return (ENVTIECALL(CATIExchangeCone,ENVTIETypeLetter,ENVTIELetter)IsAxisDirect(oIsDirect)); \
} \
HRESULT  ENVTIEName::GetAllConeData(double pBasePoint[3], double pAxisVector[3], double *pRadius, double *pHalfAngle, int *pIsExpanding, double *pStartAngle, double *pEndAngle, CATBaseUnknown_var RelimitedOnFace , double pRefDirection[3] ) const  \
{ \
return (ENVTIECALL(CATIExchangeCone,ENVTIETypeLetter,ENVTIELetter)GetAllConeData(pBasePoint,pAxisVector,pRadius,pHalfAngle,pIsExpanding,pStartAngle,pEndAngle,RelimitedOnFace ,pRefDirection)); \
} \
HRESULT  ENVTIEName::GetConeInfo(double oRefDirection[3]) const  \
{ \
return (ENVTIECALL(CATIExchangeCone,ENVTIETypeLetter,ENVTIELetter)GetConeInfo(oRefDirection)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeCone(classe)    TIECATIExchangeCone##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeCone(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeCone, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeCone, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeCone, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeCone, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeCone, classe) \
 \
HRESULT  TIECATIExchangeCone##classe::GetConeData(double oBasePoint[3], double oAxisVector[3], double *oRadius, double *oHalfAngle, int *oIsExpanding, double *oStartAngle, double *oEndAngle, CATBaseUnknown_var ioRelimitedOnFace ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConeData(oBasePoint,oAxisVector,oRadius,oHalfAngle,oIsExpanding,oStartAngle,oEndAngle,ioRelimitedOnFace )); \
} \
HRESULT  TIECATIExchangeCone##classe::IsAxisDirect(int *oIsDirect) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAxisDirect(oIsDirect)); \
} \
HRESULT  TIECATIExchangeCone##classe::GetAllConeData(double pBasePoint[3], double pAxisVector[3], double *pRadius, double *pHalfAngle, int *pIsExpanding, double *pStartAngle, double *pEndAngle, CATBaseUnknown_var RelimitedOnFace , double pRefDirection[3] ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAllConeData(pBasePoint,pAxisVector,pRadius,pHalfAngle,pIsExpanding,pStartAngle,pEndAngle,RelimitedOnFace ,pRefDirection)); \
} \
HRESULT  TIECATIExchangeCone##classe::GetConeInfo(double oRefDirection[3]) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConeInfo(oRefDirection)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeCone(classe) \
 \
 \
declare_TIE_CATIExchangeCone(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeCone##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeCone,"CATIExchangeCone",CATIExchangeCone::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeCone(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeCone, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeCone##classe(classe::MetaObject(),CATIExchangeCone::MetaObject(),(void *)CreateTIECATIExchangeCone##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeCone(classe) \
 \
 \
declare_TIE_CATIExchangeCone(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeCone##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeCone,"CATIExchangeCone",CATIExchangeCone::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeCone(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeCone, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeCone##classe(classe::MetaObject(),CATIExchangeCone::MetaObject(),(void *)CreateTIECATIExchangeCone##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeCone(classe) TIE_CATIExchangeCone(classe)
#else
#define BOA_CATIExchangeCone(classe) CATImplementBOA(CATIExchangeCone, classe)
#endif

#endif
