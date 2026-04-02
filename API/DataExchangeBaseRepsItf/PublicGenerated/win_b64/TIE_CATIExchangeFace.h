#ifndef __TIE_CATIExchangeFace
#define __TIE_CATIExchangeFace

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeFace.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeFace */
#define declare_TIE_CATIExchangeFace(classe) \
 \
 \
class TIECATIExchangeFace##classe : public CATIExchangeFace \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeFace, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATListValCATIExchangeLoop_var* EnumLoops() const ; \
      virtual CATIExchangeSurface_var GetSurface() ; \
      virtual int IsParamReversed() ; \
      virtual HRESULT GetGeometricProperties (double & oArea) const ; \
};



#define ENVTIEdeclare_CATIExchangeFace(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATListValCATIExchangeLoop_var* EnumLoops() const ; \
virtual CATIExchangeSurface_var GetSurface() ; \
virtual int IsParamReversed() ; \
virtual HRESULT GetGeometricProperties (double & oArea) const ; \


#define ENVTIEdefine_CATIExchangeFace(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATListValCATIExchangeLoop_var*  ENVTIEName::EnumLoops() const  \
{ \
return (ENVTIECALL(CATIExchangeFace,ENVTIETypeLetter,ENVTIELetter)EnumLoops()); \
} \
CATIExchangeSurface_var  ENVTIEName::GetSurface()  \
{ \
return (ENVTIECALL(CATIExchangeFace,ENVTIETypeLetter,ENVTIELetter)GetSurface()); \
} \
int  ENVTIEName::IsParamReversed()  \
{ \
return (ENVTIECALL(CATIExchangeFace,ENVTIETypeLetter,ENVTIELetter)IsParamReversed()); \
} \
HRESULT  ENVTIEName::GetGeometricProperties (double & oArea) const  \
{ \
return (ENVTIECALL(CATIExchangeFace,ENVTIETypeLetter,ENVTIELetter)GetGeometricProperties (oArea)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeFace(classe)    TIECATIExchangeFace##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeFace(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeFace, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeFace, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeFace, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeFace, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeFace, classe) \
 \
CATListValCATIExchangeLoop_var*  TIECATIExchangeFace##classe::EnumLoops() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EnumLoops()); \
} \
CATIExchangeSurface_var  TIECATIExchangeFace##classe::GetSurface()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSurface()); \
} \
int  TIECATIExchangeFace##classe::IsParamReversed()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsParamReversed()); \
} \
HRESULT  TIECATIExchangeFace##classe::GetGeometricProperties (double & oArea) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGeometricProperties (oArea)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeFace(classe) \
 \
 \
declare_TIE_CATIExchangeFace(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeFace##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeFace,"CATIExchangeFace",CATIExchangeFace::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeFace(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeFace, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeFace##classe(classe::MetaObject(),CATIExchangeFace::MetaObject(),(void *)CreateTIECATIExchangeFace##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeFace(classe) \
 \
 \
declare_TIE_CATIExchangeFace(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeFace##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeFace,"CATIExchangeFace",CATIExchangeFace::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeFace(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeFace, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeFace##classe(classe::MetaObject(),CATIExchangeFace::MetaObject(),(void *)CreateTIECATIExchangeFace##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeFace(classe) TIE_CATIExchangeFace(classe)
#else
#define BOA_CATIExchangeFace(classe) CATImplementBOA(CATIExchangeFace, classe)
#endif

#endif
