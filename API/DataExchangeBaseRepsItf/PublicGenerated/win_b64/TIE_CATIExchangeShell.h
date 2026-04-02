#ifndef __TIE_CATIExchangeShell
#define __TIE_CATIExchangeShell

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeShell.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeShell */
#define declare_TIE_CATIExchangeShell(classe) \
 \
 \
class TIECATIExchangeShell##classe : public CATIExchangeShell \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeShell, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATListValCATIExchangeFace_var* EnumFaces() const ; \
      virtual HRESULT GetFacesOrientations(CATListOfInt*& oOrient) const ; \
      virtual HRESULT IsReversed() const ; \
      virtual HRESULT IsClosed() const ; \
      virtual HRESULT GetGeometricProperties (double oCentroid[], double & oWetArea) const ; \
};



#define ENVTIEdeclare_CATIExchangeShell(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATListValCATIExchangeFace_var* EnumFaces() const ; \
virtual HRESULT GetFacesOrientations(CATListOfInt*& oOrient) const ; \
virtual HRESULT IsReversed() const ; \
virtual HRESULT IsClosed() const ; \
virtual HRESULT GetGeometricProperties (double oCentroid[], double & oWetArea) const ; \


#define ENVTIEdefine_CATIExchangeShell(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATListValCATIExchangeFace_var*  ENVTIEName::EnumFaces() const  \
{ \
return (ENVTIECALL(CATIExchangeShell,ENVTIETypeLetter,ENVTIELetter)EnumFaces()); \
} \
HRESULT  ENVTIEName::GetFacesOrientations(CATListOfInt*& oOrient) const  \
{ \
return (ENVTIECALL(CATIExchangeShell,ENVTIETypeLetter,ENVTIELetter)GetFacesOrientations(oOrient)); \
} \
HRESULT  ENVTIEName::IsReversed() const  \
{ \
return (ENVTIECALL(CATIExchangeShell,ENVTIETypeLetter,ENVTIELetter)IsReversed()); \
} \
HRESULT  ENVTIEName::IsClosed() const  \
{ \
return (ENVTIECALL(CATIExchangeShell,ENVTIETypeLetter,ENVTIELetter)IsClosed()); \
} \
HRESULT  ENVTIEName::GetGeometricProperties (double oCentroid[], double & oWetArea) const  \
{ \
return (ENVTIECALL(CATIExchangeShell,ENVTIETypeLetter,ENVTIELetter)GetGeometricProperties (oCentroid,oWetArea)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeShell(classe)    TIECATIExchangeShell##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeShell(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeShell, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeShell, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeShell, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeShell, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeShell, classe) \
 \
CATListValCATIExchangeFace_var*  TIECATIExchangeShell##classe::EnumFaces() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EnumFaces()); \
} \
HRESULT  TIECATIExchangeShell##classe::GetFacesOrientations(CATListOfInt*& oOrient) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFacesOrientations(oOrient)); \
} \
HRESULT  TIECATIExchangeShell##classe::IsReversed() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsReversed()); \
} \
HRESULT  TIECATIExchangeShell##classe::IsClosed() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsClosed()); \
} \
HRESULT  TIECATIExchangeShell##classe::GetGeometricProperties (double oCentroid[], double & oWetArea) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGeometricProperties (oCentroid,oWetArea)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeShell(classe) \
 \
 \
declare_TIE_CATIExchangeShell(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeShell##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeShell,"CATIExchangeShell",CATIExchangeShell::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeShell(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeShell, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeShell##classe(classe::MetaObject(),CATIExchangeShell::MetaObject(),(void *)CreateTIECATIExchangeShell##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeShell(classe) \
 \
 \
declare_TIE_CATIExchangeShell(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeShell##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeShell,"CATIExchangeShell",CATIExchangeShell::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeShell(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeShell, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeShell##classe(classe::MetaObject(),CATIExchangeShell::MetaObject(),(void *)CreateTIECATIExchangeShell##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeShell(classe) TIE_CATIExchangeShell(classe)
#else
#define BOA_CATIExchangeShell(classe) CATImplementBOA(CATIExchangeShell, classe)
#endif

#endif
