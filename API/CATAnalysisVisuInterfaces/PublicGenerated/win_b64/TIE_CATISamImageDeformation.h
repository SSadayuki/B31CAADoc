#ifndef __TIE_CATISamImageDeformation
#define __TIE_CATISamImageDeformation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamImageDeformation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamImageDeformation */
#define declare_TIE_CATISamImageDeformation(classe) \
 \
 \
class TIECATISamImageDeformation##classe : public CATISamImageDeformation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamImageDeformation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetPhysicalType ( CATSamPhysicalType & oPhysicalType ) const ; \
      virtual HRESULT GetVersion ( CATSamCharacVersion & oVersion) const ; \
};



#define ENVTIEdeclare_CATISamImageDeformation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetPhysicalType ( CATSamPhysicalType & oPhysicalType ) const ; \
virtual HRESULT GetVersion ( CATSamCharacVersion & oVersion) const ; \


#define ENVTIEdefine_CATISamImageDeformation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetPhysicalType ( CATSamPhysicalType & oPhysicalType ) const  \
{ \
return (ENVTIECALL(CATISamImageDeformation,ENVTIETypeLetter,ENVTIELetter)GetPhysicalType (oPhysicalType )); \
} \
HRESULT  ENVTIEName::GetVersion ( CATSamCharacVersion & oVersion) const  \
{ \
return (ENVTIECALL(CATISamImageDeformation,ENVTIETypeLetter,ENVTIELetter)GetVersion (oVersion)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamImageDeformation(classe)    TIECATISamImageDeformation##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamImageDeformation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamImageDeformation, classe) \
 \
 \
CATImplementTIEMethods(CATISamImageDeformation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamImageDeformation, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamImageDeformation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamImageDeformation, classe) \
 \
HRESULT  TIECATISamImageDeformation##classe::GetPhysicalType ( CATSamPhysicalType & oPhysicalType ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPhysicalType (oPhysicalType )); \
} \
HRESULT  TIECATISamImageDeformation##classe::GetVersion ( CATSamCharacVersion & oVersion) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetVersion (oVersion)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamImageDeformation(classe) \
 \
 \
declare_TIE_CATISamImageDeformation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamImageDeformation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamImageDeformation,"CATISamImageDeformation",CATISamImageDeformation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamImageDeformation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamImageDeformation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamImageDeformation##classe(classe::MetaObject(),CATISamImageDeformation::MetaObject(),(void *)CreateTIECATISamImageDeformation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamImageDeformation(classe) \
 \
 \
declare_TIE_CATISamImageDeformation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamImageDeformation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamImageDeformation,"CATISamImageDeformation",CATISamImageDeformation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamImageDeformation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamImageDeformation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamImageDeformation##classe(classe::MetaObject(),CATISamImageDeformation::MetaObject(),(void *)CreateTIECATISamImageDeformation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamImageDeformation(classe) TIE_CATISamImageDeformation(classe)
#else
#define BOA_CATISamImageDeformation(classe) CATImplementBOA(CATISamImageDeformation, classe)
#endif

#endif
