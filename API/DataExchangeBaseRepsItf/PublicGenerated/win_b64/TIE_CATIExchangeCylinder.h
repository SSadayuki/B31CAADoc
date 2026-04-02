#ifndef __TIE_CATIExchangeCylinder
#define __TIE_CATIExchangeCylinder

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeCylinder.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeCylinder */
#define declare_TIE_CATIExchangeCylinder(classe) \
 \
 \
class TIECATIExchangeCylinder##classe : public CATIExchangeCylinder \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeCylinder, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetCylinderData(double oBasePoint[3], double oAxisVector[3], double *oRadius, CATBaseUnknown_var ioRelimitedOnFace = ((CATBaseUnknown*)0)) const ; \
      virtual HRESULT GetCylinderInfo(double oRefDirection[3]) const ; \
};



#define ENVTIEdeclare_CATIExchangeCylinder(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetCylinderData(double oBasePoint[3], double oAxisVector[3], double *oRadius, CATBaseUnknown_var ioRelimitedOnFace = ((CATBaseUnknown*)0)) const ; \
virtual HRESULT GetCylinderInfo(double oRefDirection[3]) const ; \


#define ENVTIEdefine_CATIExchangeCylinder(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetCylinderData(double oBasePoint[3], double oAxisVector[3], double *oRadius, CATBaseUnknown_var ioRelimitedOnFace ) const  \
{ \
return (ENVTIECALL(CATIExchangeCylinder,ENVTIETypeLetter,ENVTIELetter)GetCylinderData(oBasePoint,oAxisVector,oRadius,ioRelimitedOnFace )); \
} \
HRESULT  ENVTIEName::GetCylinderInfo(double oRefDirection[3]) const  \
{ \
return (ENVTIECALL(CATIExchangeCylinder,ENVTIETypeLetter,ENVTIELetter)GetCylinderInfo(oRefDirection)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeCylinder(classe)    TIECATIExchangeCylinder##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeCylinder(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeCylinder, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeCylinder, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeCylinder, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeCylinder, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeCylinder, classe) \
 \
HRESULT  TIECATIExchangeCylinder##classe::GetCylinderData(double oBasePoint[3], double oAxisVector[3], double *oRadius, CATBaseUnknown_var ioRelimitedOnFace ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCylinderData(oBasePoint,oAxisVector,oRadius,ioRelimitedOnFace )); \
} \
HRESULT  TIECATIExchangeCylinder##classe::GetCylinderInfo(double oRefDirection[3]) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCylinderInfo(oRefDirection)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeCylinder(classe) \
 \
 \
declare_TIE_CATIExchangeCylinder(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeCylinder##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeCylinder,"CATIExchangeCylinder",CATIExchangeCylinder::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeCylinder(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeCylinder, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeCylinder##classe(classe::MetaObject(),CATIExchangeCylinder::MetaObject(),(void *)CreateTIECATIExchangeCylinder##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeCylinder(classe) \
 \
 \
declare_TIE_CATIExchangeCylinder(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeCylinder##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeCylinder,"CATIExchangeCylinder",CATIExchangeCylinder::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeCylinder(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeCylinder, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeCylinder##classe(classe::MetaObject(),CATIExchangeCylinder::MetaObject(),(void *)CreateTIECATIExchangeCylinder##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeCylinder(classe) TIE_CATIExchangeCylinder(classe)
#else
#define BOA_CATIExchangeCylinder(classe) CATImplementBOA(CATIExchangeCylinder, classe)
#endif

#endif
