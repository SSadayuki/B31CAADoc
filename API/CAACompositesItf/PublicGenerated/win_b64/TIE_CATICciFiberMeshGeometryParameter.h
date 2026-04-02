#ifndef __TIE_CATICciFiberMeshGeometryParameter
#define __TIE_CATICciFiberMeshGeometryParameter

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICciFiberMeshGeometryParameter.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICciFiberMeshGeometryParameter */
#define declare_TIE_CATICciFiberMeshGeometryParameter(classe) \
 \
 \
class TIECATICciFiberMeshGeometryParameter##classe : public CATICciFiberMeshGeometryParameter \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICciFiberMeshGeometryParameter, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual short GetGeometricalCheckToSkip(const CATUnicodeString & iusPropagationType) ; \
};



#define ENVTIEdeclare_CATICciFiberMeshGeometryParameter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual short GetGeometricalCheckToSkip(const CATUnicodeString & iusPropagationType) ; \


#define ENVTIEdefine_CATICciFiberMeshGeometryParameter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
short  ENVTIEName::GetGeometricalCheckToSkip(const CATUnicodeString & iusPropagationType)  \
{ \
return (ENVTIECALL(CATICciFiberMeshGeometryParameter,ENVTIETypeLetter,ENVTIELetter)GetGeometricalCheckToSkip(iusPropagationType)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICciFiberMeshGeometryParameter(classe)    TIECATICciFiberMeshGeometryParameter##classe


/* Common methods inside a TIE */
#define common_TIE_CATICciFiberMeshGeometryParameter(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICciFiberMeshGeometryParameter, classe) \
 \
 \
CATImplementTIEMethods(CATICciFiberMeshGeometryParameter, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICciFiberMeshGeometryParameter, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICciFiberMeshGeometryParameter, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICciFiberMeshGeometryParameter, classe) \
 \
short  TIECATICciFiberMeshGeometryParameter##classe::GetGeometricalCheckToSkip(const CATUnicodeString & iusPropagationType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGeometricalCheckToSkip(iusPropagationType)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICciFiberMeshGeometryParameter(classe) \
 \
 \
declare_TIE_CATICciFiberMeshGeometryParameter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciFiberMeshGeometryParameter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciFiberMeshGeometryParameter,"CATICciFiberMeshGeometryParameter",CATICciFiberMeshGeometryParameter::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciFiberMeshGeometryParameter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICciFiberMeshGeometryParameter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciFiberMeshGeometryParameter##classe(classe::MetaObject(),CATICciFiberMeshGeometryParameter::MetaObject(),(void *)CreateTIECATICciFiberMeshGeometryParameter##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICciFiberMeshGeometryParameter(classe) \
 \
 \
declare_TIE_CATICciFiberMeshGeometryParameter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciFiberMeshGeometryParameter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciFiberMeshGeometryParameter,"CATICciFiberMeshGeometryParameter",CATICciFiberMeshGeometryParameter::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciFiberMeshGeometryParameter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICciFiberMeshGeometryParameter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciFiberMeshGeometryParameter##classe(classe::MetaObject(),CATICciFiberMeshGeometryParameter::MetaObject(),(void *)CreateTIECATICciFiberMeshGeometryParameter##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICciFiberMeshGeometryParameter(classe) TIE_CATICciFiberMeshGeometryParameter(classe)
#else
#define BOA_CATICciFiberMeshGeometryParameter(classe) CATImplementBOA(CATICciFiberMeshGeometryParameter, classe)
#endif

#endif
