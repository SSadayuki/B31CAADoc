#ifndef __TIE_CATIDftGenSRDress
#define __TIE_CATIDftGenSRDress

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIDftGenSRDress.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIDftGenSRDress */
#define declare_TIE_CATIDftGenSRDress(classe) \
 \
 \
class TIECATIDftGenSRDress##classe : public CATIDftGenSRDress \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIDftGenSRDress, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AddProvGeomToDress(CATDftGen3DCurveWithProvenance * iProv) ; \
      virtual HRESULT RemoveAllProvGeom() ; \
};



#define ENVTIEdeclare_CATIDftGenSRDress(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AddProvGeomToDress(CATDftGen3DCurveWithProvenance * iProv) ; \
virtual HRESULT RemoveAllProvGeom() ; \


#define ENVTIEdefine_CATIDftGenSRDress(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AddProvGeomToDress(CATDftGen3DCurveWithProvenance * iProv)  \
{ \
return (ENVTIECALL(CATIDftGenSRDress,ENVTIETypeLetter,ENVTIELetter)AddProvGeomToDress(iProv)); \
} \
HRESULT  ENVTIEName::RemoveAllProvGeom()  \
{ \
return (ENVTIECALL(CATIDftGenSRDress,ENVTIETypeLetter,ENVTIELetter)RemoveAllProvGeom()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIDftGenSRDress(classe)    TIECATIDftGenSRDress##classe


/* Common methods inside a TIE */
#define common_TIE_CATIDftGenSRDress(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIDftGenSRDress, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATIDftGenSRDress, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATIDftGenSRDress, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATIDftGenSRDress, classe) \
 \
HRESULT  TIECATIDftGenSRDress##classe::AddProvGeomToDress(CATDftGen3DCurveWithProvenance * iProv)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddProvGeomToDress(iProv)); \
} \
HRESULT  TIECATIDftGenSRDress##classe::RemoveAllProvGeom()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllProvGeom()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIDftGenSRDress(classe) \
 \
 \
declare_TIE_CATIDftGenSRDress(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDftGenSRDress##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDftGenSRDress,"CATIDftGenSRDress",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDftGenSRDress(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIDftGenSRDress, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDftGenSRDress##classe(classe::MetaObject(),TIECATIDftGenSRDress##classe::MetaObject(),(void *)CreateTIECATIDftGenSRDress##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIDftGenSRDress(classe) \
 \
 \
declare_TIE_CATIDftGenSRDress(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDftGenSRDress##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDftGenSRDress,"CATIDftGenSRDress",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDftGenSRDress(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIDftGenSRDress, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDftGenSRDress##classe(classe::MetaObject(),TIECATIDftGenSRDress##classe::MetaObject(),(void *)CreateTIECATIDftGenSRDress##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIDftGenSRDress(classe) TIE_CATIDftGenSRDress(classe)
#else
#define BOA_CATIDftGenSRDress(classe) CATImplementBOA(CATIDftGenSRDress, classe)
#endif

#endif
