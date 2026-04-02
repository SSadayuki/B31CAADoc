#ifndef __TIE_CATICLDGeom
#define __TIE_CATICLDGeom

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICLDGeom.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICLDGeom */
#define declare_TIE_CATICLDGeom(classe) \
 \
 \
class TIECATICLDGeom##classe : public CATICLDGeom \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICLDGeom, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
};



#define ENVTIEdeclare_CATICLDGeom(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \


#define ENVTIEdefine_CATICLDGeom(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \


/* Name of the TIE class */
#define class_TIE_CATICLDGeom(classe)    TIECATICLDGeom##classe


/* Common methods inside a TIE */
#define common_TIE_CATICLDGeom(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICLDGeom, classe) \
 \
 \
CATImplementTIEMethods(CATICLDGeom, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICLDGeom, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICLDGeom, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICLDGeom, classe) \
 \



/* Macro used to link an implementation with an interface */
#define TIE_CATICLDGeom(classe) \
 \
 \
declare_TIE_CATICLDGeom(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICLDGeom##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICLDGeom,"CATICLDGeom",CATICLDGeom::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICLDGeom(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICLDGeom, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICLDGeom##classe(classe::MetaObject(),CATICLDGeom::MetaObject(),(void *)CreateTIECATICLDGeom##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICLDGeom(classe) \
 \
 \
declare_TIE_CATICLDGeom(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICLDGeom##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICLDGeom,"CATICLDGeom",CATICLDGeom::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICLDGeom(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICLDGeom, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICLDGeom##classe(classe::MetaObject(),CATICLDGeom::MetaObject(),(void *)CreateTIECATICLDGeom##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICLDGeom(classe) TIE_CATICLDGeom(classe)
#else
#define BOA_CATICLDGeom(classe) CATImplementBOA(CATICLDGeom, classe)
#endif

#endif
