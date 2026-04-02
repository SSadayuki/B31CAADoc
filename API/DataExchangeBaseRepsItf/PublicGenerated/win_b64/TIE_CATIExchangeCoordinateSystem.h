#ifndef __TIE_CATIExchangeCoordinateSystem
#define __TIE_CATIExchangeCoordinateSystem

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeCoordinateSystem.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeCoordinateSystem */
#define declare_TIE_CATIExchangeCoordinateSystem(classe) \
 \
 \
class TIECATIExchangeCoordinateSystem##classe : public CATIExchangeCoordinateSystem \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeCoordinateSystem, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void GetElementOfUCS(double oRot[3][3], double oTrans[3]) const ; \
};



#define ENVTIEdeclare_CATIExchangeCoordinateSystem(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void GetElementOfUCS(double oRot[3][3], double oTrans[3]) const ; \


#define ENVTIEdefine_CATIExchangeCoordinateSystem(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void  ENVTIEName::GetElementOfUCS(double oRot[3][3], double oTrans[3]) const  \
{ \
 (ENVTIECALL(CATIExchangeCoordinateSystem,ENVTIETypeLetter,ENVTIELetter)GetElementOfUCS(oRot,oTrans)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeCoordinateSystem(classe)    TIECATIExchangeCoordinateSystem##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeCoordinateSystem(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeCoordinateSystem, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeCoordinateSystem, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeCoordinateSystem, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeCoordinateSystem, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeCoordinateSystem, classe) \
 \
void  TIECATIExchangeCoordinateSystem##classe::GetElementOfUCS(double oRot[3][3], double oTrans[3]) const  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetElementOfUCS(oRot,oTrans); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeCoordinateSystem(classe) \
 \
 \
declare_TIE_CATIExchangeCoordinateSystem(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeCoordinateSystem##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeCoordinateSystem,"CATIExchangeCoordinateSystem",CATIExchangeCoordinateSystem::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeCoordinateSystem(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeCoordinateSystem, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeCoordinateSystem##classe(classe::MetaObject(),CATIExchangeCoordinateSystem::MetaObject(),(void *)CreateTIECATIExchangeCoordinateSystem##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeCoordinateSystem(classe) \
 \
 \
declare_TIE_CATIExchangeCoordinateSystem(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeCoordinateSystem##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeCoordinateSystem,"CATIExchangeCoordinateSystem",CATIExchangeCoordinateSystem::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeCoordinateSystem(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeCoordinateSystem, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeCoordinateSystem##classe(classe::MetaObject(),CATIExchangeCoordinateSystem::MetaObject(),(void *)CreateTIECATIExchangeCoordinateSystem##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeCoordinateSystem(classe) TIE_CATIExchangeCoordinateSystem(classe)
#else
#define BOA_CATIExchangeCoordinateSystem(classe) CATImplementBOA(CATIExchangeCoordinateSystem, classe)
#endif

#endif
