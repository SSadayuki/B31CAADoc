#ifndef __TIE_CATIEwrWire
#define __TIE_CATIEwrWire

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIEwrWire.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIEwrWire */
#define declare_TIE_CATIEwrWire(classe) \
 \
 \
class TIECATIEwrWire##classe : public CATIEwrWire \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIEwrWire, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetExtremities(CATBaseUnknown *& opUnkFirstExtrDeviceInst, CATBaseUnknown *& opUnkFirstExtrCnctPt, CATBaseUnknown *& opUnkSecondExtrDeviceInst, CATBaseUnknown *& opUnkSecondExtrCnctPt) ; \
};



#define ENVTIEdeclare_CATIEwrWire(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetExtremities(CATBaseUnknown *& opUnkFirstExtrDeviceInst, CATBaseUnknown *& opUnkFirstExtrCnctPt, CATBaseUnknown *& opUnkSecondExtrDeviceInst, CATBaseUnknown *& opUnkSecondExtrCnctPt) ; \


#define ENVTIEdefine_CATIEwrWire(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetExtremities(CATBaseUnknown *& opUnkFirstExtrDeviceInst, CATBaseUnknown *& opUnkFirstExtrCnctPt, CATBaseUnknown *& opUnkSecondExtrDeviceInst, CATBaseUnknown *& opUnkSecondExtrCnctPt)  \
{ \
return (ENVTIECALL(CATIEwrWire,ENVTIETypeLetter,ENVTIELetter)GetExtremities(opUnkFirstExtrDeviceInst,opUnkFirstExtrCnctPt,opUnkSecondExtrDeviceInst,opUnkSecondExtrCnctPt)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIEwrWire(classe)    TIECATIEwrWire##classe


/* Common methods inside a TIE */
#define common_TIE_CATIEwrWire(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIEwrWire, classe) \
 \
 \
CATImplementTIEMethods(CATIEwrWire, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIEwrWire, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIEwrWire, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIEwrWire, classe) \
 \
HRESULT  TIECATIEwrWire##classe::GetExtremities(CATBaseUnknown *& opUnkFirstExtrDeviceInst, CATBaseUnknown *& opUnkFirstExtrCnctPt, CATBaseUnknown *& opUnkSecondExtrDeviceInst, CATBaseUnknown *& opUnkSecondExtrCnctPt)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExtremities(opUnkFirstExtrDeviceInst,opUnkFirstExtrCnctPt,opUnkSecondExtrDeviceInst,opUnkSecondExtrCnctPt)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIEwrWire(classe) \
 \
 \
declare_TIE_CATIEwrWire(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEwrWire##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEwrWire,"CATIEwrWire",CATIEwrWire::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEwrWire(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIEwrWire, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEwrWire##classe(classe::MetaObject(),CATIEwrWire::MetaObject(),(void *)CreateTIECATIEwrWire##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIEwrWire(classe) \
 \
 \
declare_TIE_CATIEwrWire(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEwrWire##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEwrWire,"CATIEwrWire",CATIEwrWire::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEwrWire(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIEwrWire, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEwrWire##classe(classe::MetaObject(),CATIEwrWire::MetaObject(),(void *)CreateTIECATIEwrWire##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIEwrWire(classe) TIE_CATIEwrWire(classe)
#else
#define BOA_CATIEwrWire(classe) CATImplementBOA(CATIEwrWire, classe)
#endif

#endif
