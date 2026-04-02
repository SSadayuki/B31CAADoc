#ifndef __TIE_CATICciManufacturingParameters
#define __TIE_CATICciManufacturingParameters

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICciManufacturingParameters.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICciManufacturingParameters */
#define declare_TIE_CATICciManufacturingParameters(classe) \
 \
 \
class TIECATICciManufacturingParameters##classe : public CATICciManufacturingParameters \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICciManufacturingParameters, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetPartnerName (CATUnicodeString & oPartnerName) ; \
};



#define ENVTIEdeclare_CATICciManufacturingParameters(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetPartnerName (CATUnicodeString & oPartnerName) ; \


#define ENVTIEdefine_CATICciManufacturingParameters(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetPartnerName (CATUnicodeString & oPartnerName)  \
{ \
return (ENVTIECALL(CATICciManufacturingParameters,ENVTIETypeLetter,ENVTIELetter)GetPartnerName (oPartnerName)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICciManufacturingParameters(classe)    TIECATICciManufacturingParameters##classe


/* Common methods inside a TIE */
#define common_TIE_CATICciManufacturingParameters(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICciManufacturingParameters, classe) \
 \
 \
CATImplementTIEMethods(CATICciManufacturingParameters, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICciManufacturingParameters, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICciManufacturingParameters, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICciManufacturingParameters, classe) \
 \
HRESULT  TIECATICciManufacturingParameters##classe::GetPartnerName (CATUnicodeString & oPartnerName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPartnerName (oPartnerName)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICciManufacturingParameters(classe) \
 \
 \
declare_TIE_CATICciManufacturingParameters(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciManufacturingParameters##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciManufacturingParameters,"CATICciManufacturingParameters",CATICciManufacturingParameters::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciManufacturingParameters(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICciManufacturingParameters, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciManufacturingParameters##classe(classe::MetaObject(),CATICciManufacturingParameters::MetaObject(),(void *)CreateTIECATICciManufacturingParameters##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICciManufacturingParameters(classe) \
 \
 \
declare_TIE_CATICciManufacturingParameters(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciManufacturingParameters##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciManufacturingParameters,"CATICciManufacturingParameters",CATICciManufacturingParameters::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciManufacturingParameters(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICciManufacturingParameters, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciManufacturingParameters##classe(classe::MetaObject(),CATICciManufacturingParameters::MetaObject(),(void *)CreateTIECATICciManufacturingParameters##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICciManufacturingParameters(classe) TIE_CATICciManufacturingParameters(classe)
#else
#define BOA_CATICciManufacturingParameters(classe) CATImplementBOA(CATICciManufacturingParameters, classe)
#endif

#endif
