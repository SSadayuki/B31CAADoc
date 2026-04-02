#ifndef __TIE_CATICciSpliceZoneGroup
#define __TIE_CATICciSpliceZoneGroup

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICciSpliceZoneGroup.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICciSpliceZoneGroup */
#define declare_TIE_CATICciSpliceZoneGroup(classe) \
 \
 \
class TIECATICciSpliceZoneGroup##classe : public CATICciSpliceZoneGroup \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICciSpliceZoneGroup, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetSpliceZoneGroupType(CATCciSpliceZoneGroupType & oType) ; \
      virtual HRESULT GetSpliceZones(CATListValCATIMmiMechanicalFeature_var& oListOfSpliceZones) ; \
};



#define ENVTIEdeclare_CATICciSpliceZoneGroup(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetSpliceZoneGroupType(CATCciSpliceZoneGroupType & oType) ; \
virtual HRESULT GetSpliceZones(CATListValCATIMmiMechanicalFeature_var& oListOfSpliceZones) ; \


#define ENVTIEdefine_CATICciSpliceZoneGroup(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetSpliceZoneGroupType(CATCciSpliceZoneGroupType & oType)  \
{ \
return (ENVTIECALL(CATICciSpliceZoneGroup,ENVTIETypeLetter,ENVTIELetter)GetSpliceZoneGroupType(oType)); \
} \
HRESULT  ENVTIEName::GetSpliceZones(CATListValCATIMmiMechanicalFeature_var& oListOfSpliceZones)  \
{ \
return (ENVTIECALL(CATICciSpliceZoneGroup,ENVTIETypeLetter,ENVTIELetter)GetSpliceZones(oListOfSpliceZones)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICciSpliceZoneGroup(classe)    TIECATICciSpliceZoneGroup##classe


/* Common methods inside a TIE */
#define common_TIE_CATICciSpliceZoneGroup(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICciSpliceZoneGroup, classe) \
 \
 \
CATImplementTIEMethods(CATICciSpliceZoneGroup, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICciSpliceZoneGroup, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICciSpliceZoneGroup, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICciSpliceZoneGroup, classe) \
 \
HRESULT  TIECATICciSpliceZoneGroup##classe::GetSpliceZoneGroupType(CATCciSpliceZoneGroupType & oType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSpliceZoneGroupType(oType)); \
} \
HRESULT  TIECATICciSpliceZoneGroup##classe::GetSpliceZones(CATListValCATIMmiMechanicalFeature_var& oListOfSpliceZones)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSpliceZones(oListOfSpliceZones)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICciSpliceZoneGroup(classe) \
 \
 \
declare_TIE_CATICciSpliceZoneGroup(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciSpliceZoneGroup##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciSpliceZoneGroup,"CATICciSpliceZoneGroup",CATICciSpliceZoneGroup::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciSpliceZoneGroup(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICciSpliceZoneGroup, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciSpliceZoneGroup##classe(classe::MetaObject(),CATICciSpliceZoneGroup::MetaObject(),(void *)CreateTIECATICciSpliceZoneGroup##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICciSpliceZoneGroup(classe) \
 \
 \
declare_TIE_CATICciSpliceZoneGroup(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciSpliceZoneGroup##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciSpliceZoneGroup,"CATICciSpliceZoneGroup",CATICciSpliceZoneGroup::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciSpliceZoneGroup(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICciSpliceZoneGroup, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciSpliceZoneGroup##classe(classe::MetaObject(),CATICciSpliceZoneGroup::MetaObject(),(void *)CreateTIECATICciSpliceZoneGroup##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICciSpliceZoneGroup(classe) TIE_CATICciSpliceZoneGroup(classe)
#else
#define BOA_CATICciSpliceZoneGroup(classe) CATImplementBOA(CATICciSpliceZoneGroup, classe)
#endif

#endif
