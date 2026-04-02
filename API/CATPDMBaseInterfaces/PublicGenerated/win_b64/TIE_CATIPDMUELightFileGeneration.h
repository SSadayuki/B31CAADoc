#ifndef __TIE_CATIPDMUELightFileGeneration
#define __TIE_CATIPDMUELightFileGeneration

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPDMUELightFileGeneration.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPDMUELightFileGeneration */
#define declare_TIE_CATIPDMUELightFileGeneration(classe) \
 \
 \
class TIECATIPDMUELightFileGeneration##classe : public CATIPDMUELightFileGeneration \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPDMUELightFileGeneration, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Generate(CATListOfCATUnicodeString & ioListOfPaths, CATUnicodeString & ioXML) ; \
};



#define ENVTIEdeclare_CATIPDMUELightFileGeneration(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Generate(CATListOfCATUnicodeString & ioListOfPaths, CATUnicodeString & ioXML) ; \


#define ENVTIEdefine_CATIPDMUELightFileGeneration(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Generate(CATListOfCATUnicodeString & ioListOfPaths, CATUnicodeString & ioXML)  \
{ \
return (ENVTIECALL(CATIPDMUELightFileGeneration,ENVTIETypeLetter,ENVTIELetter)Generate(ioListOfPaths,ioXML)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPDMUELightFileGeneration(classe)    TIECATIPDMUELightFileGeneration##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPDMUELightFileGeneration(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPDMUELightFileGeneration, classe) \
 \
 \
CATImplementTIEMethods(CATIPDMUELightFileGeneration, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPDMUELightFileGeneration, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPDMUELightFileGeneration, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPDMUELightFileGeneration, classe) \
 \
HRESULT  TIECATIPDMUELightFileGeneration##classe::Generate(CATListOfCATUnicodeString & ioListOfPaths, CATUnicodeString & ioXML)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Generate(ioListOfPaths,ioXML)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPDMUELightFileGeneration(classe) \
 \
 \
declare_TIE_CATIPDMUELightFileGeneration(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUELightFileGeneration##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUELightFileGeneration,"CATIPDMUELightFileGeneration",CATIPDMUELightFileGeneration::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUELightFileGeneration(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPDMUELightFileGeneration, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUELightFileGeneration##classe(classe::MetaObject(),CATIPDMUELightFileGeneration::MetaObject(),(void *)CreateTIECATIPDMUELightFileGeneration##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPDMUELightFileGeneration(classe) \
 \
 \
declare_TIE_CATIPDMUELightFileGeneration(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUELightFileGeneration##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUELightFileGeneration,"CATIPDMUELightFileGeneration",CATIPDMUELightFileGeneration::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUELightFileGeneration(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPDMUELightFileGeneration, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUELightFileGeneration##classe(classe::MetaObject(),CATIPDMUELightFileGeneration::MetaObject(),(void *)CreateTIECATIPDMUELightFileGeneration##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPDMUELightFileGeneration(classe) TIE_CATIPDMUELightFileGeneration(classe)
#else
#define BOA_CATIPDMUELightFileGeneration(classe) CATImplementBOA(CATIPDMUELightFileGeneration, classe)
#endif

#endif
