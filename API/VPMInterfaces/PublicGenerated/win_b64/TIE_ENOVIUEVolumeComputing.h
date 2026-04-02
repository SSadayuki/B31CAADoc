#ifndef __TIE_ENOVIUEVolumeComputing
#define __TIE_ENOVIUEVolumeComputing

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVIUEVolumeComputing.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVIUEVolumeComputing */
#define declare_TIE_ENOVIUEVolumeComputing(classe) \
 \
 \
class TIEENOVIUEVolumeComputing##classe : public ENOVIUEVolumeComputing \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVIUEVolumeComputing, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Participate(); \
};



#define ENVTIEdeclare_ENOVIUEVolumeComputing(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Participate(); \


#define ENVTIEdefine_ENOVIUEVolumeComputing(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Participate() \
{ \
return (ENVTIECALL(ENOVIUEVolumeComputing,ENVTIETypeLetter,ENVTIELetter)Participate()); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVIUEVolumeComputing(classe)    TIEENOVIUEVolumeComputing##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVIUEVolumeComputing(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVIUEVolumeComputing, classe) \
 \
 \
CATImplementTIEMethods(ENOVIUEVolumeComputing, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVIUEVolumeComputing, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVIUEVolumeComputing, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVIUEVolumeComputing, classe) \
 \
HRESULT  TIEENOVIUEVolumeComputing##classe::Participate() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Participate()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVIUEVolumeComputing(classe) \
 \
 \
declare_TIE_ENOVIUEVolumeComputing(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIUEVolumeComputing##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIUEVolumeComputing,"ENOVIUEVolumeComputing",ENOVIUEVolumeComputing::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIUEVolumeComputing(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVIUEVolumeComputing, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIUEVolumeComputing##classe(classe::MetaObject(),ENOVIUEVolumeComputing::MetaObject(),(void *)CreateTIEENOVIUEVolumeComputing##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVIUEVolumeComputing(classe) \
 \
 \
declare_TIE_ENOVIUEVolumeComputing(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIUEVolumeComputing##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIUEVolumeComputing,"ENOVIUEVolumeComputing",ENOVIUEVolumeComputing::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIUEVolumeComputing(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVIUEVolumeComputing, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIUEVolumeComputing##classe(classe::MetaObject(),ENOVIUEVolumeComputing::MetaObject(),(void *)CreateTIEENOVIUEVolumeComputing##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVIUEVolumeComputing(classe) TIE_ENOVIUEVolumeComputing(classe)
#else
#define BOA_ENOVIUEVolumeComputing(classe) CATImplementBOA(ENOVIUEVolumeComputing, classe)
#endif

#endif
