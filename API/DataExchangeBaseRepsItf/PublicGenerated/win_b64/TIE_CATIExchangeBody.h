#ifndef __TIE_CATIExchangeBody
#define __TIE_CATIExchangeBody

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeBody.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeBody */
#define declare_TIE_CATIExchangeBody(classe) \
 \
 \
class TIECATIExchangeBody##classe : public CATIExchangeBody \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeBody, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATListValCATIExchangeVolume_var* EnumVolumes() const ; \
      virtual CATListValCATIExchangeShell_var* EnumShells() const ; \
      virtual CATListValCATIExchangeFace_var* EnumFaces() const ; \
      virtual CATListValCATIExchangeEdge_var* EnumEdges() const ; \
      virtual CATListValCATIExchangeVertex_var* EnumVertices() const ; \
      virtual CATListValCATIExchangeWire_var* EnumWires() const; \
      virtual HRESULT GetGeometricProperties(double  oCentroid[], double & oVolume, double & oWetArea) const ; \
};



#define ENVTIEdeclare_CATIExchangeBody(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATListValCATIExchangeVolume_var* EnumVolumes() const ; \
virtual CATListValCATIExchangeShell_var* EnumShells() const ; \
virtual CATListValCATIExchangeFace_var* EnumFaces() const ; \
virtual CATListValCATIExchangeEdge_var* EnumEdges() const ; \
virtual CATListValCATIExchangeVertex_var* EnumVertices() const ; \
virtual CATListValCATIExchangeWire_var* EnumWires() const; \
virtual HRESULT GetGeometricProperties(double  oCentroid[], double & oVolume, double & oWetArea) const ; \


#define ENVTIEdefine_CATIExchangeBody(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATListValCATIExchangeVolume_var*  ENVTIEName::EnumVolumes() const  \
{ \
return (ENVTIECALL(CATIExchangeBody,ENVTIETypeLetter,ENVTIELetter)EnumVolumes()); \
} \
CATListValCATIExchangeShell_var*  ENVTIEName::EnumShells() const  \
{ \
return (ENVTIECALL(CATIExchangeBody,ENVTIETypeLetter,ENVTIELetter)EnumShells()); \
} \
CATListValCATIExchangeFace_var*  ENVTIEName::EnumFaces() const  \
{ \
return (ENVTIECALL(CATIExchangeBody,ENVTIETypeLetter,ENVTIELetter)EnumFaces()); \
} \
CATListValCATIExchangeEdge_var*  ENVTIEName::EnumEdges() const  \
{ \
return (ENVTIECALL(CATIExchangeBody,ENVTIETypeLetter,ENVTIELetter)EnumEdges()); \
} \
CATListValCATIExchangeVertex_var*  ENVTIEName::EnumVertices() const  \
{ \
return (ENVTIECALL(CATIExchangeBody,ENVTIETypeLetter,ENVTIELetter)EnumVertices()); \
} \
CATListValCATIExchangeWire_var*  ENVTIEName::EnumWires() const \
{ \
return (ENVTIECALL(CATIExchangeBody,ENVTIETypeLetter,ENVTIELetter)EnumWires()); \
} \
HRESULT  ENVTIEName::GetGeometricProperties(double  oCentroid[], double & oVolume, double & oWetArea) const  \
{ \
return (ENVTIECALL(CATIExchangeBody,ENVTIETypeLetter,ENVTIELetter)GetGeometricProperties(oCentroid,oVolume,oWetArea)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeBody(classe)    TIECATIExchangeBody##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeBody(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeBody, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeBody, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeBody, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeBody, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeBody, classe) \
 \
CATListValCATIExchangeVolume_var*  TIECATIExchangeBody##classe::EnumVolumes() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EnumVolumes()); \
} \
CATListValCATIExchangeShell_var*  TIECATIExchangeBody##classe::EnumShells() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EnumShells()); \
} \
CATListValCATIExchangeFace_var*  TIECATIExchangeBody##classe::EnumFaces() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EnumFaces()); \
} \
CATListValCATIExchangeEdge_var*  TIECATIExchangeBody##classe::EnumEdges() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EnumEdges()); \
} \
CATListValCATIExchangeVertex_var*  TIECATIExchangeBody##classe::EnumVertices() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EnumVertices()); \
} \
CATListValCATIExchangeWire_var*  TIECATIExchangeBody##classe::EnumWires() const \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EnumWires()); \
} \
HRESULT  TIECATIExchangeBody##classe::GetGeometricProperties(double  oCentroid[], double & oVolume, double & oWetArea) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGeometricProperties(oCentroid,oVolume,oWetArea)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeBody(classe) \
 \
 \
declare_TIE_CATIExchangeBody(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeBody##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeBody,"CATIExchangeBody",CATIExchangeBody::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeBody(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeBody, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeBody##classe(classe::MetaObject(),CATIExchangeBody::MetaObject(),(void *)CreateTIECATIExchangeBody##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeBody(classe) \
 \
 \
declare_TIE_CATIExchangeBody(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeBody##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeBody,"CATIExchangeBody",CATIExchangeBody::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeBody(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeBody, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeBody##classe(classe::MetaObject(),CATIExchangeBody::MetaObject(),(void *)CreateTIECATIExchangeBody##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeBody(classe) TIE_CATIExchangeBody(classe)
#else
#define BOA_CATIExchangeBody(classe) CATImplementBOA(CATIExchangeBody, classe)
#endif

#endif
