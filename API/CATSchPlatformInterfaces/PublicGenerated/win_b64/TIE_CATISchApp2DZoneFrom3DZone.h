#ifndef __TIE_CATISchApp2DZoneFrom3DZone
#define __TIE_CATISchApp2DZoneFrom3DZone

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchApp2DZoneFrom3DZone.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchApp2DZoneFrom3DZone */
#define declare_TIE_CATISchApp2DZoneFrom3DZone(classe) \
 \
 \
class TIECATISchApp2DZoneFrom3DZone##classe : public CATISchApp2DZoneFrom3DZone \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchApp2DZoneFrom3DZone, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Create2DAppZone(IUnknown **oAppZone) ; \
};



#define ENVTIEdeclare_CATISchApp2DZoneFrom3DZone(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Create2DAppZone(IUnknown **oAppZone) ; \


#define ENVTIEdefine_CATISchApp2DZoneFrom3DZone(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Create2DAppZone(IUnknown **oAppZone)  \
{ \
return (ENVTIECALL(CATISchApp2DZoneFrom3DZone,ENVTIETypeLetter,ENVTIELetter)Create2DAppZone(oAppZone)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchApp2DZoneFrom3DZone(classe)    TIECATISchApp2DZoneFrom3DZone##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchApp2DZoneFrom3DZone(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchApp2DZoneFrom3DZone, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchApp2DZoneFrom3DZone, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchApp2DZoneFrom3DZone, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchApp2DZoneFrom3DZone, classe) \
 \
HRESULT  TIECATISchApp2DZoneFrom3DZone##classe::Create2DAppZone(IUnknown **oAppZone)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Create2DAppZone(oAppZone)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchApp2DZoneFrom3DZone(classe) \
 \
 \
declare_TIE_CATISchApp2DZoneFrom3DZone(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchApp2DZoneFrom3DZone##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchApp2DZoneFrom3DZone,"CATISchApp2DZoneFrom3DZone",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchApp2DZoneFrom3DZone(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchApp2DZoneFrom3DZone, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchApp2DZoneFrom3DZone##classe(classe::MetaObject(),TIECATISchApp2DZoneFrom3DZone##classe::MetaObject(),(void *)CreateTIECATISchApp2DZoneFrom3DZone##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchApp2DZoneFrom3DZone(classe) \
 \
 \
declare_TIE_CATISchApp2DZoneFrom3DZone(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchApp2DZoneFrom3DZone##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchApp2DZoneFrom3DZone,"CATISchApp2DZoneFrom3DZone",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchApp2DZoneFrom3DZone(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchApp2DZoneFrom3DZone, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchApp2DZoneFrom3DZone##classe(classe::MetaObject(),TIECATISchApp2DZoneFrom3DZone##classe::MetaObject(),(void *)CreateTIECATISchApp2DZoneFrom3DZone##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchApp2DZoneFrom3DZone(classe) TIE_CATISchApp2DZoneFrom3DZone(classe)
#else
#define BOA_CATISchApp2DZoneFrom3DZone(classe) CATImplementBOA(CATISchApp2DZoneFrom3DZone, classe)
#endif

#endif
