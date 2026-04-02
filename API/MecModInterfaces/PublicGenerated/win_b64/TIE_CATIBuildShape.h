#ifndef __TIE_CATIBuildShape
#define __TIE_CATIBuildShape

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIBuildShape.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIBuildShape */
#define declare_TIE_CATIBuildShape(classe) \
 \
 \
class TIECATIBuildShape##classe : public CATIBuildShape \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIBuildShape, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual int BuildShape() ; \
};



#define ENVTIEdeclare_CATIBuildShape(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual int BuildShape() ; \


#define ENVTIEdefine_CATIBuildShape(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
int  ENVTIEName::BuildShape()  \
{ \
return (ENVTIECALL(CATIBuildShape,ENVTIETypeLetter,ENVTIELetter)BuildShape()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIBuildShape(classe)    TIECATIBuildShape##classe


/* Common methods inside a TIE */
#define common_TIE_CATIBuildShape(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIBuildShape, classe) \
 \
 \
CATImplementTIEMethods(CATIBuildShape, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIBuildShape, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIBuildShape, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIBuildShape, classe) \
 \
int  TIECATIBuildShape##classe::BuildShape()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildShape()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIBuildShape(classe) \
 \
 \
declare_TIE_CATIBuildShape(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIBuildShape##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIBuildShape,"CATIBuildShape",CATIBuildShape::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIBuildShape(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIBuildShape, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIBuildShape##classe(classe::MetaObject(),CATIBuildShape::MetaObject(),(void *)CreateTIECATIBuildShape##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIBuildShape(classe) \
 \
 \
declare_TIE_CATIBuildShape(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIBuildShape##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIBuildShape,"CATIBuildShape",CATIBuildShape::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIBuildShape(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIBuildShape, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIBuildShape##classe(classe::MetaObject(),CATIBuildShape::MetaObject(),(void *)CreateTIECATIBuildShape##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIBuildShape(classe) TIE_CATIBuildShape(classe)
#else
#define BOA_CATIBuildShape(classe) CATImplementBOA(CATIBuildShape, classe)
#endif

#endif
