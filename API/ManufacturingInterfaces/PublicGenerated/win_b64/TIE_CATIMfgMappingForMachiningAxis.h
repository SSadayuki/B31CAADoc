#ifndef __TIE_CATIMfgMappingForMachiningAxis
#define __TIE_CATIMfgMappingForMachiningAxis

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgMappingForMachiningAxis.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgMappingForMachiningAxis */
#define declare_TIE_CATIMfgMappingForMachiningAxis(classe) \
 \
 \
class TIECATIMfgMappingForMachiningAxis##classe : public CATIMfgMappingForMachiningAxis \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgMappingForMachiningAxis, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetAxisSystem (CATBaseUnknown_var& oAxisSystem) ; \
};



#define ENVTIEdeclare_CATIMfgMappingForMachiningAxis(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetAxisSystem (CATBaseUnknown_var& oAxisSystem) ; \


#define ENVTIEdefine_CATIMfgMappingForMachiningAxis(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetAxisSystem (CATBaseUnknown_var& oAxisSystem)  \
{ \
return (ENVTIECALL(CATIMfgMappingForMachiningAxis,ENVTIETypeLetter,ENVTIELetter)GetAxisSystem (oAxisSystem)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgMappingForMachiningAxis(classe)    TIECATIMfgMappingForMachiningAxis##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgMappingForMachiningAxis(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgMappingForMachiningAxis, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgMappingForMachiningAxis, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgMappingForMachiningAxis, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgMappingForMachiningAxis, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgMappingForMachiningAxis, classe) \
 \
HRESULT  TIECATIMfgMappingForMachiningAxis##classe::GetAxisSystem (CATBaseUnknown_var& oAxisSystem)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAxisSystem (oAxisSystem)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgMappingForMachiningAxis(classe) \
 \
 \
declare_TIE_CATIMfgMappingForMachiningAxis(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMappingForMachiningAxis##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMappingForMachiningAxis,"CATIMfgMappingForMachiningAxis",CATIMfgMappingForMachiningAxis::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMappingForMachiningAxis(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgMappingForMachiningAxis, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMappingForMachiningAxis##classe(classe::MetaObject(),CATIMfgMappingForMachiningAxis::MetaObject(),(void *)CreateTIECATIMfgMappingForMachiningAxis##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgMappingForMachiningAxis(classe) \
 \
 \
declare_TIE_CATIMfgMappingForMachiningAxis(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMappingForMachiningAxis##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMappingForMachiningAxis,"CATIMfgMappingForMachiningAxis",CATIMfgMappingForMachiningAxis::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMappingForMachiningAxis(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgMappingForMachiningAxis, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMappingForMachiningAxis##classe(classe::MetaObject(),CATIMfgMappingForMachiningAxis::MetaObject(),(void *)CreateTIECATIMfgMappingForMachiningAxis##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgMappingForMachiningAxis(classe) TIE_CATIMfgMappingForMachiningAxis(classe)
#else
#define BOA_CATIMfgMappingForMachiningAxis(classe) CATImplementBOA(CATIMfgMappingForMachiningAxis, classe)
#endif

#endif
