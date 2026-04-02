#ifndef __TIE_CATIEhfLengthTolerance
#define __TIE_CATIEhfLengthTolerance

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIEhfLengthTolerance.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIEhfLengthTolerance */
#define declare_TIE_CATIEhfLengthTolerance(classe) \
 \
 \
class TIECATIEhfLengthTolerance##classe : public CATIEhfLengthTolerance \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIEhfLengthTolerance, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetName( CATUnicodeString & oLengthToleranceName ) ; \
      virtual HRESULT GetFixExtremity( CATBaseUnknown *& opIUnkFixExtremity ) ; \
      virtual HRESULT GetMoveExtremity( CATBaseUnknown *& opIUnkMoveExtremity ) ; \
      virtual HRESULT GetToleranceValue( CATICkeInst *& opICkeInstToleranceValue ) ; \
      virtual HRESULT GetPortionLength( CATICkeInst *& opICkeInstPortionLength ) ; \
      virtual HRESULT SetToleranceValue( const CATICkeInst * ipICkeInstToleranceValue, CATIProduct       * ipIProdRoot ) ; \
};



#define ENVTIEdeclare_CATIEhfLengthTolerance(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetName( CATUnicodeString & oLengthToleranceName ) ; \
virtual HRESULT GetFixExtremity( CATBaseUnknown *& opIUnkFixExtremity ) ; \
virtual HRESULT GetMoveExtremity( CATBaseUnknown *& opIUnkMoveExtremity ) ; \
virtual HRESULT GetToleranceValue( CATICkeInst *& opICkeInstToleranceValue ) ; \
virtual HRESULT GetPortionLength( CATICkeInst *& opICkeInstPortionLength ) ; \
virtual HRESULT SetToleranceValue( const CATICkeInst * ipICkeInstToleranceValue, CATIProduct       * ipIProdRoot ) ; \


#define ENVTIEdefine_CATIEhfLengthTolerance(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetName( CATUnicodeString & oLengthToleranceName )  \
{ \
return (ENVTIECALL(CATIEhfLengthTolerance,ENVTIETypeLetter,ENVTIELetter)GetName(oLengthToleranceName )); \
} \
HRESULT  ENVTIEName::GetFixExtremity( CATBaseUnknown *& opIUnkFixExtremity )  \
{ \
return (ENVTIECALL(CATIEhfLengthTolerance,ENVTIETypeLetter,ENVTIELetter)GetFixExtremity(opIUnkFixExtremity )); \
} \
HRESULT  ENVTIEName::GetMoveExtremity( CATBaseUnknown *& opIUnkMoveExtremity )  \
{ \
return (ENVTIECALL(CATIEhfLengthTolerance,ENVTIETypeLetter,ENVTIELetter)GetMoveExtremity(opIUnkMoveExtremity )); \
} \
HRESULT  ENVTIEName::GetToleranceValue( CATICkeInst *& opICkeInstToleranceValue )  \
{ \
return (ENVTIECALL(CATIEhfLengthTolerance,ENVTIETypeLetter,ENVTIELetter)GetToleranceValue(opICkeInstToleranceValue )); \
} \
HRESULT  ENVTIEName::GetPortionLength( CATICkeInst *& opICkeInstPortionLength )  \
{ \
return (ENVTIECALL(CATIEhfLengthTolerance,ENVTIETypeLetter,ENVTIELetter)GetPortionLength(opICkeInstPortionLength )); \
} \
HRESULT  ENVTIEName::SetToleranceValue( const CATICkeInst * ipICkeInstToleranceValue, CATIProduct       * ipIProdRoot )  \
{ \
return (ENVTIECALL(CATIEhfLengthTolerance,ENVTIETypeLetter,ENVTIELetter)SetToleranceValue(ipICkeInstToleranceValue,ipIProdRoot )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIEhfLengthTolerance(classe)    TIECATIEhfLengthTolerance##classe


/* Common methods inside a TIE */
#define common_TIE_CATIEhfLengthTolerance(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIEhfLengthTolerance, classe) \
 \
 \
CATImplementTIEMethods(CATIEhfLengthTolerance, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIEhfLengthTolerance, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIEhfLengthTolerance, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIEhfLengthTolerance, classe) \
 \
HRESULT  TIECATIEhfLengthTolerance##classe::GetName( CATUnicodeString & oLengthToleranceName )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetName(oLengthToleranceName )); \
} \
HRESULT  TIECATIEhfLengthTolerance##classe::GetFixExtremity( CATBaseUnknown *& opIUnkFixExtremity )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFixExtremity(opIUnkFixExtremity )); \
} \
HRESULT  TIECATIEhfLengthTolerance##classe::GetMoveExtremity( CATBaseUnknown *& opIUnkMoveExtremity )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMoveExtremity(opIUnkMoveExtremity )); \
} \
HRESULT  TIECATIEhfLengthTolerance##classe::GetToleranceValue( CATICkeInst *& opICkeInstToleranceValue )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetToleranceValue(opICkeInstToleranceValue )); \
} \
HRESULT  TIECATIEhfLengthTolerance##classe::GetPortionLength( CATICkeInst *& opICkeInstPortionLength )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPortionLength(opICkeInstPortionLength )); \
} \
HRESULT  TIECATIEhfLengthTolerance##classe::SetToleranceValue( const CATICkeInst * ipICkeInstToleranceValue, CATIProduct       * ipIProdRoot )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetToleranceValue(ipICkeInstToleranceValue,ipIProdRoot )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIEhfLengthTolerance(classe) \
 \
 \
declare_TIE_CATIEhfLengthTolerance(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEhfLengthTolerance##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEhfLengthTolerance,"CATIEhfLengthTolerance",CATIEhfLengthTolerance::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEhfLengthTolerance(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIEhfLengthTolerance, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEhfLengthTolerance##classe(classe::MetaObject(),CATIEhfLengthTolerance::MetaObject(),(void *)CreateTIECATIEhfLengthTolerance##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIEhfLengthTolerance(classe) \
 \
 \
declare_TIE_CATIEhfLengthTolerance(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEhfLengthTolerance##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEhfLengthTolerance,"CATIEhfLengthTolerance",CATIEhfLengthTolerance::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEhfLengthTolerance(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIEhfLengthTolerance, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEhfLengthTolerance##classe(classe::MetaObject(),CATIEhfLengthTolerance::MetaObject(),(void *)CreateTIECATIEhfLengthTolerance##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIEhfLengthTolerance(classe) TIE_CATIEhfLengthTolerance(classe)
#else
#define BOA_CATIEhfLengthTolerance(classe) CATImplementBOA(CATIEhfLengthTolerance, classe)
#endif

#endif
