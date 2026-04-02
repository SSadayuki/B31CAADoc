#ifndef __TIE_CATIExchangeVolume
#define __TIE_CATIExchangeVolume

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeVolume.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeVolume */
#define declare_TIE_CATIExchangeVolume(classe) \
 \
 \
class TIECATIExchangeVolume##classe : public CATIExchangeVolume \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeVolume, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATListValCATIExchangeShell_var* EnumShells() const ; \
      virtual HRESULT GetGeometricProperties(double oCentroid[], double & oVolume, double & oWetArea) const ; \
};



#define ENVTIEdeclare_CATIExchangeVolume(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATListValCATIExchangeShell_var* EnumShells() const ; \
virtual HRESULT GetGeometricProperties(double oCentroid[], double & oVolume, double & oWetArea) const ; \


#define ENVTIEdefine_CATIExchangeVolume(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATListValCATIExchangeShell_var*  ENVTIEName::EnumShells() const  \
{ \
return (ENVTIECALL(CATIExchangeVolume,ENVTIETypeLetter,ENVTIELetter)EnumShells()); \
} \
HRESULT  ENVTIEName::GetGeometricProperties(double oCentroid[], double & oVolume, double & oWetArea) const  \
{ \
return (ENVTIECALL(CATIExchangeVolume,ENVTIETypeLetter,ENVTIELetter)GetGeometricProperties(oCentroid,oVolume,oWetArea)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeVolume(classe)    TIECATIExchangeVolume##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeVolume(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeVolume, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeVolume, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeVolume, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeVolume, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeVolume, classe) \
 \
CATListValCATIExchangeShell_var*  TIECATIExchangeVolume##classe::EnumShells() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EnumShells()); \
} \
HRESULT  TIECATIExchangeVolume##classe::GetGeometricProperties(double oCentroid[], double & oVolume, double & oWetArea) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGeometricProperties(oCentroid,oVolume,oWetArea)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeVolume(classe) \
 \
 \
declare_TIE_CATIExchangeVolume(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeVolume##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeVolume,"CATIExchangeVolume",CATIExchangeVolume::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeVolume(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeVolume, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeVolume##classe(classe::MetaObject(),CATIExchangeVolume::MetaObject(),(void *)CreateTIECATIExchangeVolume##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeVolume(classe) \
 \
 \
declare_TIE_CATIExchangeVolume(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeVolume##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeVolume,"CATIExchangeVolume",CATIExchangeVolume::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeVolume(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeVolume, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeVolume##classe(classe::MetaObject(),CATIExchangeVolume::MetaObject(),(void *)CreateTIECATIExchangeVolume##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeVolume(classe) TIE_CATIExchangeVolume(classe)
#else
#define BOA_CATIExchangeVolume(classe) CATImplementBOA(CATIExchangeVolume, classe)
#endif

#endif
