#ifndef __TIE_CATICldCAAFactory
#define __TIE_CATICldCAAFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICldCAAFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICldCAAFactory */
#define declare_TIE_CATICldCAAFactory(classe) \
 \
 \
class TIECATICldCAAFactory##classe : public CATICldCAAFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICldCAAFactory, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATICLDGeom_var CreateCLDGeom (CATCldBody* iGeometry = 0) ; \
};



#define ENVTIEdeclare_CATICldCAAFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATICLDGeom_var CreateCLDGeom (CATCldBody* iGeometry = 0) ; \


#define ENVTIEdefine_CATICldCAAFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATICLDGeom_var  ENVTIEName::CreateCLDGeom (CATCldBody* iGeometry )  \
{ \
return (ENVTIECALL(CATICldCAAFactory,ENVTIETypeLetter,ENVTIELetter)CreateCLDGeom (iGeometry )); \
} \


/* Name of the TIE class */
#define class_TIE_CATICldCAAFactory(classe)    TIECATICldCAAFactory##classe


/* Common methods inside a TIE */
#define common_TIE_CATICldCAAFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICldCAAFactory, classe) \
 \
 \
CATImplementTIEMethods(CATICldCAAFactory, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICldCAAFactory, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICldCAAFactory, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICldCAAFactory, classe) \
 \
CATICLDGeom_var  TIECATICldCAAFactory##classe::CreateCLDGeom (CATCldBody* iGeometry )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCLDGeom (iGeometry )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICldCAAFactory(classe) \
 \
 \
declare_TIE_CATICldCAAFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICldCAAFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICldCAAFactory,"CATICldCAAFactory",CATICldCAAFactory::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICldCAAFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICldCAAFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICldCAAFactory##classe(classe::MetaObject(),CATICldCAAFactory::MetaObject(),(void *)CreateTIECATICldCAAFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICldCAAFactory(classe) \
 \
 \
declare_TIE_CATICldCAAFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICldCAAFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICldCAAFactory,"CATICldCAAFactory",CATICldCAAFactory::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICldCAAFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICldCAAFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICldCAAFactory##classe(classe::MetaObject(),CATICldCAAFactory::MetaObject(),(void *)CreateTIECATICldCAAFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICldCAAFactory(classe) TIE_CATICldCAAFactory(classe)
#else
#define BOA_CATICldCAAFactory(classe) CATImplementBOA(CATICldCAAFactory, classe)
#endif

#endif
