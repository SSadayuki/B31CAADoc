#ifndef __TIE_CATISchAppZone
#define __TIE_CATISchAppZone

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppZone.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppZone */
#define declare_TIE_CATISchAppZone(classe) \
 \
 \
class TIECATISchAppZone##classe : public CATISchAppZone \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppZone, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppAddZoneMember (CATISchAppConnectable *iAppCntblToAdd) ; \
      virtual HRESULT AppRemoveZoneMember (CATISchAppConnectable *iAppCntblToRemove) ; \
      virtual HRESULT AppListZoneMembers (CATIUnknownList **oLAppCntbl) ; \
};



#define ENVTIEdeclare_CATISchAppZone(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppAddZoneMember (CATISchAppConnectable *iAppCntblToAdd) ; \
virtual HRESULT AppRemoveZoneMember (CATISchAppConnectable *iAppCntblToRemove) ; \
virtual HRESULT AppListZoneMembers (CATIUnknownList **oLAppCntbl) ; \


#define ENVTIEdefine_CATISchAppZone(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppAddZoneMember (CATISchAppConnectable *iAppCntblToAdd)  \
{ \
return (ENVTIECALL(CATISchAppZone,ENVTIETypeLetter,ENVTIELetter)AppAddZoneMember (iAppCntblToAdd)); \
} \
HRESULT  ENVTIEName::AppRemoveZoneMember (CATISchAppConnectable *iAppCntblToRemove)  \
{ \
return (ENVTIECALL(CATISchAppZone,ENVTIETypeLetter,ENVTIELetter)AppRemoveZoneMember (iAppCntblToRemove)); \
} \
HRESULT  ENVTIEName::AppListZoneMembers (CATIUnknownList **oLAppCntbl)  \
{ \
return (ENVTIECALL(CATISchAppZone,ENVTIETypeLetter,ENVTIELetter)AppListZoneMembers (oLAppCntbl)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppZone(classe)    TIECATISchAppZone##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppZone(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppZone, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppZone, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppZone, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppZone, classe) \
 \
HRESULT  TIECATISchAppZone##classe::AppAddZoneMember (CATISchAppConnectable *iAppCntblToAdd)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppAddZoneMember (iAppCntblToAdd)); \
} \
HRESULT  TIECATISchAppZone##classe::AppRemoveZoneMember (CATISchAppConnectable *iAppCntblToRemove)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppRemoveZoneMember (iAppCntblToRemove)); \
} \
HRESULT  TIECATISchAppZone##classe::AppListZoneMembers (CATIUnknownList **oLAppCntbl)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListZoneMembers (oLAppCntbl)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppZone(classe) \
 \
 \
declare_TIE_CATISchAppZone(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppZone##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppZone,"CATISchAppZone",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppZone(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppZone, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppZone##classe(classe::MetaObject(),TIECATISchAppZone##classe::MetaObject(),(void *)CreateTIECATISchAppZone##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppZone(classe) \
 \
 \
declare_TIE_CATISchAppZone(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppZone##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppZone,"CATISchAppZone",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppZone(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppZone, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppZone##classe(classe::MetaObject(),TIECATISchAppZone##classe::MetaObject(),(void *)CreateTIECATISchAppZone##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppZone(classe) TIE_CATISchAppZone(classe)
#else
#define BOA_CATISchAppZone(classe) CATImplementBOA(CATISchAppZone, classe)
#endif

#endif
