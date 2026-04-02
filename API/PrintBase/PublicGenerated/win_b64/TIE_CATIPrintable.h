#ifndef __TIE_CATIPrintable
#define __TIE_CATIPrintable

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPrintable.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPrintable */
#define declare_TIE_CATIPrintable(classe) \
 \
 \
class TIECATIPrintable##classe : public CATIPrintable \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPrintable, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATPrintImage* CreatePrintableImage( void ) ; \
};



#define ENVTIEdeclare_CATIPrintable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATPrintImage* CreatePrintableImage( void ) ; \


#define ENVTIEdefine_CATIPrintable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATPrintImage*  ENVTIEName::CreatePrintableImage( void )  \
{ \
return (ENVTIECALL(CATIPrintable,ENVTIETypeLetter,ENVTIELetter)CreatePrintableImage()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPrintable(classe)    TIECATIPrintable##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPrintable(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPrintable, classe) \
 \
 \
CATImplementTIEMethods(CATIPrintable, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPrintable, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPrintable, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPrintable, classe) \
 \
CATPrintImage*  TIECATIPrintable##classe::CreatePrintableImage( void )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreatePrintableImage()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPrintable(classe) \
 \
 \
declare_TIE_CATIPrintable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPrintable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPrintable,"CATIPrintable",CATIPrintable::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPrintable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPrintable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPrintable##classe(classe::MetaObject(),CATIPrintable::MetaObject(),(void *)CreateTIECATIPrintable##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPrintable(classe) \
 \
 \
declare_TIE_CATIPrintable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPrintable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPrintable,"CATIPrintable",CATIPrintable::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPrintable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPrintable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPrintable##classe(classe::MetaObject(),CATIPrintable::MetaObject(),(void *)CreateTIECATIPrintable##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPrintable(classe) TIE_CATIPrintable(classe)
#else
#define BOA_CATIPrintable(classe) CATImplementBOA(CATIPrintable, classe)
#endif

#endif
