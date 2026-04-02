#ifndef __TIE_CATIEhiFLEX
#define __TIE_CATIEhiFLEX

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIEhiFLEX.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIEhiFLEX */
#define declare_TIE_CATIEhiFLEX(classe) \
 \
 \
class TIECATIEhiFLEX##classe : public CATIEhiFLEX \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIEhiFLEX, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetFLEXEquivalentModulus( CATListValCATBaseUnknown_var * ipListOfWireWireGroup, CATListValCATBaseUnknown_var * ipOrderedListOfProtectionReference, CATListValCATBaseUnknown_var * ipInternalSpliceReferenceList, CATEhiProfileType iProfile, double iProfileLength1, double iProfileLength2, int iBundleSegmentFlexibility, double & oYoungModulusEquivalent, double & oEquivalentRatioToBend, double & oEquivalentRatioToTwist); \
};



#define ENVTIEdeclare_CATIEhiFLEX(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetFLEXEquivalentModulus( CATListValCATBaseUnknown_var * ipListOfWireWireGroup, CATListValCATBaseUnknown_var * ipOrderedListOfProtectionReference, CATListValCATBaseUnknown_var * ipInternalSpliceReferenceList, CATEhiProfileType iProfile, double iProfileLength1, double iProfileLength2, int iBundleSegmentFlexibility, double & oYoungModulusEquivalent, double & oEquivalentRatioToBend, double & oEquivalentRatioToTwist); \


#define ENVTIEdefine_CATIEhiFLEX(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetFLEXEquivalentModulus( CATListValCATBaseUnknown_var * ipListOfWireWireGroup, CATListValCATBaseUnknown_var * ipOrderedListOfProtectionReference, CATListValCATBaseUnknown_var * ipInternalSpliceReferenceList, CATEhiProfileType iProfile, double iProfileLength1, double iProfileLength2, int iBundleSegmentFlexibility, double & oYoungModulusEquivalent, double & oEquivalentRatioToBend, double & oEquivalentRatioToTwist) \
{ \
return (ENVTIECALL(CATIEhiFLEX,ENVTIETypeLetter,ENVTIELetter)GetFLEXEquivalentModulus(ipListOfWireWireGroup,ipOrderedListOfProtectionReference,ipInternalSpliceReferenceList,iProfile,iProfileLength1,iProfileLength2,iBundleSegmentFlexibility,oYoungModulusEquivalent,oEquivalentRatioToBend,oEquivalentRatioToTwist)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIEhiFLEX(classe)    TIECATIEhiFLEX##classe


/* Common methods inside a TIE */
#define common_TIE_CATIEhiFLEX(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIEhiFLEX, classe) \
 \
 \
CATImplementTIEMethods(CATIEhiFLEX, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIEhiFLEX, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIEhiFLEX, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIEhiFLEX, classe) \
 \
HRESULT  TIECATIEhiFLEX##classe::GetFLEXEquivalentModulus( CATListValCATBaseUnknown_var * ipListOfWireWireGroup, CATListValCATBaseUnknown_var * ipOrderedListOfProtectionReference, CATListValCATBaseUnknown_var * ipInternalSpliceReferenceList, CATEhiProfileType iProfile, double iProfileLength1, double iProfileLength2, int iBundleSegmentFlexibility, double & oYoungModulusEquivalent, double & oEquivalentRatioToBend, double & oEquivalentRatioToTwist) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFLEXEquivalentModulus(ipListOfWireWireGroup,ipOrderedListOfProtectionReference,ipInternalSpliceReferenceList,iProfile,iProfileLength1,iProfileLength2,iBundleSegmentFlexibility,oYoungModulusEquivalent,oEquivalentRatioToBend,oEquivalentRatioToTwist)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIEhiFLEX(classe) \
 \
 \
declare_TIE_CATIEhiFLEX(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEhiFLEX##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEhiFLEX,"CATIEhiFLEX",CATIEhiFLEX::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEhiFLEX(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIEhiFLEX, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEhiFLEX##classe(classe::MetaObject(),CATIEhiFLEX::MetaObject(),(void *)CreateTIECATIEhiFLEX##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIEhiFLEX(classe) \
 \
 \
declare_TIE_CATIEhiFLEX(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEhiFLEX##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEhiFLEX,"CATIEhiFLEX",CATIEhiFLEX::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEhiFLEX(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIEhiFLEX, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEhiFLEX##classe(classe::MetaObject(),CATIEhiFLEX::MetaObject(),(void *)CreateTIECATIEhiFLEX##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIEhiFLEX(classe) TIE_CATIEhiFLEX(classe)
#else
#define BOA_CATIEhiFLEX(classe) CATImplementBOA(CATIEhiFLEX, classe)
#endif

#endif
