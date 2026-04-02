#ifndef __TIE_CATISchAppDisplayMode
#define __TIE_CATISchAppDisplayMode

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppDisplayMode.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppDisplayMode */
#define declare_TIE_CATISchAppDisplayMode(classe) \
 \
 \
class TIECATISchAppDisplayMode##classe : public CATISchAppDisplayMode \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppDisplayMode, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppDisplayMode (CATSchDisplayMode *oEDisplayMode) ; \
};



#define ENVTIEdeclare_CATISchAppDisplayMode(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppDisplayMode (CATSchDisplayMode *oEDisplayMode) ; \


#define ENVTIEdefine_CATISchAppDisplayMode(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppDisplayMode (CATSchDisplayMode *oEDisplayMode)  \
{ \
return (ENVTIECALL(CATISchAppDisplayMode,ENVTIETypeLetter,ENVTIELetter)AppDisplayMode (oEDisplayMode)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppDisplayMode(classe)    TIECATISchAppDisplayMode##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppDisplayMode(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppDisplayMode, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppDisplayMode, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppDisplayMode, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppDisplayMode, classe) \
 \
HRESULT  TIECATISchAppDisplayMode##classe::AppDisplayMode (CATSchDisplayMode *oEDisplayMode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppDisplayMode (oEDisplayMode)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppDisplayMode(classe) \
 \
 \
declare_TIE_CATISchAppDisplayMode(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppDisplayMode##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppDisplayMode,"CATISchAppDisplayMode",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppDisplayMode(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppDisplayMode, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppDisplayMode##classe(classe::MetaObject(),TIECATISchAppDisplayMode##classe::MetaObject(),(void *)CreateTIECATISchAppDisplayMode##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppDisplayMode(classe) \
 \
 \
declare_TIE_CATISchAppDisplayMode(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppDisplayMode##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppDisplayMode,"CATISchAppDisplayMode",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppDisplayMode(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppDisplayMode, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppDisplayMode##classe(classe::MetaObject(),TIECATISchAppDisplayMode##classe::MetaObject(),(void *)CreateTIECATISchAppDisplayMode##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppDisplayMode(classe) TIE_CATISchAppDisplayMode(classe)
#else
#define BOA_CATISchAppDisplayMode(classe) CATImplementBOA(CATISchAppDisplayMode, classe)
#endif

#endif
