#ifndef __TIE_CATIMSHCriterion
#define __TIE_CATIMSHCriterion

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMSHCriterion.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMSHCriterion */
#define declare_TIE_CATIMSHCriterion(classe) \
 \
 \
class TIECATIMSHCriterion##classe : public CATIMSHCriterion \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMSHCriterion, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual const CATUnicodeString & GetName () const ; \
      virtual const CATUnicodeString & GetMagnitude () const ; \
      virtual HRESULT IsImplemented ( const CATIMSHConnectivity * iConnectivity ) ; \
      virtual const CATMSHCriterionInfos * GetInfos () const ; \
      virtual HRESULT Compute ( CATMSHGeometricalEngine * iGeometricalEngine , double & ioCriterion ) ; \
      virtual int IsVisible () const ; \
      virtual int NeedGeometricSupport () const ; \
};



#define ENVTIEdeclare_CATIMSHCriterion(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual const CATUnicodeString & GetName () const ; \
virtual const CATUnicodeString & GetMagnitude () const ; \
virtual HRESULT IsImplemented ( const CATIMSHConnectivity * iConnectivity ) ; \
virtual const CATMSHCriterionInfos * GetInfos () const ; \
virtual HRESULT Compute ( CATMSHGeometricalEngine * iGeometricalEngine , double & ioCriterion ) ; \
virtual int IsVisible () const ; \
virtual int NeedGeometricSupport () const ; \


#define ENVTIEdefine_CATIMSHCriterion(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
const CATUnicodeString &  ENVTIEName::GetName () const  \
{ \
return (ENVTIECALL(CATIMSHCriterion,ENVTIETypeLetter,ENVTIELetter)GetName ()); \
} \
const CATUnicodeString &  ENVTIEName::GetMagnitude () const  \
{ \
return (ENVTIECALL(CATIMSHCriterion,ENVTIETypeLetter,ENVTIELetter)GetMagnitude ()); \
} \
HRESULT  ENVTIEName::IsImplemented ( const CATIMSHConnectivity * iConnectivity )  \
{ \
return (ENVTIECALL(CATIMSHCriterion,ENVTIETypeLetter,ENVTIELetter)IsImplemented (iConnectivity )); \
} \
const CATMSHCriterionInfos *  ENVTIEName::GetInfos () const  \
{ \
return (ENVTIECALL(CATIMSHCriterion,ENVTIETypeLetter,ENVTIELetter)GetInfos ()); \
} \
HRESULT  ENVTIEName::Compute ( CATMSHGeometricalEngine * iGeometricalEngine , double & ioCriterion )  \
{ \
return (ENVTIECALL(CATIMSHCriterion,ENVTIETypeLetter,ENVTIELetter)Compute (iGeometricalEngine ,ioCriterion )); \
} \
int  ENVTIEName::IsVisible () const  \
{ \
return (ENVTIECALL(CATIMSHCriterion,ENVTIETypeLetter,ENVTIELetter)IsVisible ()); \
} \
int  ENVTIEName::NeedGeometricSupport () const  \
{ \
return (ENVTIECALL(CATIMSHCriterion,ENVTIETypeLetter,ENVTIELetter)NeedGeometricSupport ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMSHCriterion(classe)    TIECATIMSHCriterion##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMSHCriterion(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMSHCriterion, classe) \
 \
 \
CATImplementTIEMethods(CATIMSHCriterion, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMSHCriterion, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMSHCriterion, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMSHCriterion, classe) \
 \
const CATUnicodeString &  TIECATIMSHCriterion##classe::GetName () const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetName ()); \
} \
const CATUnicodeString &  TIECATIMSHCriterion##classe::GetMagnitude () const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMagnitude ()); \
} \
HRESULT  TIECATIMSHCriterion##classe::IsImplemented ( const CATIMSHConnectivity * iConnectivity )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsImplemented (iConnectivity )); \
} \
const CATMSHCriterionInfos *  TIECATIMSHCriterion##classe::GetInfos () const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInfos ()); \
} \
HRESULT  TIECATIMSHCriterion##classe::Compute ( CATMSHGeometricalEngine * iGeometricalEngine , double & ioCriterion )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute (iGeometricalEngine ,ioCriterion )); \
} \
int  TIECATIMSHCriterion##classe::IsVisible () const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsVisible ()); \
} \
int  TIECATIMSHCriterion##classe::NeedGeometricSupport () const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->NeedGeometricSupport ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMSHCriterion(classe) \
 \
 \
declare_TIE_CATIMSHCriterion(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMSHCriterion##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMSHCriterion,"CATIMSHCriterion",CATIMSHCriterion::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMSHCriterion(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMSHCriterion, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMSHCriterion##classe(classe::MetaObject(),CATIMSHCriterion::MetaObject(),(void *)CreateTIECATIMSHCriterion##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMSHCriterion(classe) \
 \
 \
declare_TIE_CATIMSHCriterion(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMSHCriterion##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMSHCriterion,"CATIMSHCriterion",CATIMSHCriterion::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMSHCriterion(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMSHCriterion, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMSHCriterion##classe(classe::MetaObject(),CATIMSHCriterion::MetaObject(),(void *)CreateTIECATIMSHCriterion##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMSHCriterion(classe) TIE_CATIMSHCriterion(classe)
#else
#define BOA_CATIMSHCriterion(classe) CATImplementBOA(CATIMSHCriterion, classe)
#endif

#endif
