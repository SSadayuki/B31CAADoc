#ifndef __TIE_CATIAfrPaletteOptions
#define __TIE_CATIAfrPaletteOptions

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAfrPaletteOptions.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAfrPaletteOptions */
#define declare_TIE_CATIAfrPaletteOptions(classe) \
 \
 \
class TIECATIAfrPaletteOptions##classe : public CATIAfrPaletteOptions \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAfrPaletteOptions, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATListPtrCATCommandHeader GetPaletteOptions() ; \
};



#define ENVTIEdeclare_CATIAfrPaletteOptions(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATListPtrCATCommandHeader GetPaletteOptions() ; \


#define ENVTIEdefine_CATIAfrPaletteOptions(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATListPtrCATCommandHeader  ENVTIEName::GetPaletteOptions()  \
{ \
return (ENVTIECALL(CATIAfrPaletteOptions,ENVTIETypeLetter,ENVTIELetter)GetPaletteOptions()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAfrPaletteOptions(classe)    TIECATIAfrPaletteOptions##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAfrPaletteOptions(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAfrPaletteOptions, classe) \
 \
 \
CATImplementTIEMethods(CATIAfrPaletteOptions, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAfrPaletteOptions, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAfrPaletteOptions, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAfrPaletteOptions, classe) \
 \
CATListPtrCATCommandHeader  TIECATIAfrPaletteOptions##classe::GetPaletteOptions()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPaletteOptions()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAfrPaletteOptions(classe) \
 \
 \
declare_TIE_CATIAfrPaletteOptions(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAfrPaletteOptions##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAfrPaletteOptions,"CATIAfrPaletteOptions",CATIAfrPaletteOptions::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAfrPaletteOptions(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAfrPaletteOptions, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAfrPaletteOptions##classe(classe::MetaObject(),CATIAfrPaletteOptions::MetaObject(),(void *)CreateTIECATIAfrPaletteOptions##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAfrPaletteOptions(classe) \
 \
 \
declare_TIE_CATIAfrPaletteOptions(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAfrPaletteOptions##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAfrPaletteOptions,"CATIAfrPaletteOptions",CATIAfrPaletteOptions::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAfrPaletteOptions(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAfrPaletteOptions, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAfrPaletteOptions##classe(classe::MetaObject(),CATIAfrPaletteOptions::MetaObject(),(void *)CreateTIECATIAfrPaletteOptions##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAfrPaletteOptions(classe) TIE_CATIAfrPaletteOptions(classe)
#else
#define BOA_CATIAfrPaletteOptions(classe) CATImplementBOA(CATIAfrPaletteOptions, classe)
#endif

#endif
