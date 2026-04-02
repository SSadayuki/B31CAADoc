#ifndef __TIE_CATIAfrCmdPaletteOptions
#define __TIE_CATIAfrCmdPaletteOptions

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAfrCmdPaletteOptions.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAfrCmdPaletteOptions */
#define declare_TIE_CATIAfrCmdPaletteOptions(classe) \
 \
 \
class TIECATIAfrCmdPaletteOptions##classe : public CATIAfrCmdPaletteOptions \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAfrCmdPaletteOptions, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATListPtrCATCommandHeader GetPaletteOptions() ; \
      virtual CATListPtrCATCommandHeader GetPaletteStateOptions() ; \
};



#define ENVTIEdeclare_CATIAfrCmdPaletteOptions(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATListPtrCATCommandHeader GetPaletteOptions() ; \
virtual CATListPtrCATCommandHeader GetPaletteStateOptions() ; \


#define ENVTIEdefine_CATIAfrCmdPaletteOptions(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATListPtrCATCommandHeader  ENVTIEName::GetPaletteOptions()  \
{ \
return (ENVTIECALL(CATIAfrCmdPaletteOptions,ENVTIETypeLetter,ENVTIELetter)GetPaletteOptions()); \
} \
CATListPtrCATCommandHeader  ENVTIEName::GetPaletteStateOptions()  \
{ \
return (ENVTIECALL(CATIAfrCmdPaletteOptions,ENVTIETypeLetter,ENVTIELetter)GetPaletteStateOptions()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAfrCmdPaletteOptions(classe)    TIECATIAfrCmdPaletteOptions##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAfrCmdPaletteOptions(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAfrCmdPaletteOptions, classe) \
 \
 \
CATImplementTIEMethods(CATIAfrCmdPaletteOptions, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAfrCmdPaletteOptions, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAfrCmdPaletteOptions, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAfrCmdPaletteOptions, classe) \
 \
CATListPtrCATCommandHeader  TIECATIAfrCmdPaletteOptions##classe::GetPaletteOptions()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPaletteOptions()); \
} \
CATListPtrCATCommandHeader  TIECATIAfrCmdPaletteOptions##classe::GetPaletteStateOptions()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPaletteStateOptions()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAfrCmdPaletteOptions(classe) \
 \
 \
declare_TIE_CATIAfrCmdPaletteOptions(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAfrCmdPaletteOptions##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAfrCmdPaletteOptions,"CATIAfrCmdPaletteOptions",CATIAfrCmdPaletteOptions::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAfrCmdPaletteOptions(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAfrCmdPaletteOptions, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAfrCmdPaletteOptions##classe(classe::MetaObject(),CATIAfrCmdPaletteOptions::MetaObject(),(void *)CreateTIECATIAfrCmdPaletteOptions##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAfrCmdPaletteOptions(classe) \
 \
 \
declare_TIE_CATIAfrCmdPaletteOptions(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAfrCmdPaletteOptions##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAfrCmdPaletteOptions,"CATIAfrCmdPaletteOptions",CATIAfrCmdPaletteOptions::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAfrCmdPaletteOptions(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAfrCmdPaletteOptions, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAfrCmdPaletteOptions##classe(classe::MetaObject(),CATIAfrCmdPaletteOptions::MetaObject(),(void *)CreateTIECATIAfrCmdPaletteOptions##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAfrCmdPaletteOptions(classe) TIE_CATIAfrCmdPaletteOptions(classe)
#else
#define BOA_CATIAfrCmdPaletteOptions(classe) CATImplementBOA(CATIAfrCmdPaletteOptions, classe)
#endif

#endif
