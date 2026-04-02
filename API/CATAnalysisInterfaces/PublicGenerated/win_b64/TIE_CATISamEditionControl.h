#ifndef __TIE_CATISamEditionControl
#define __TIE_CATISamEditionControl

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamEditionControl.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamEditionControl */
#define declare_TIE_CATISamEditionControl(classe) \
 \
 \
class TIECATISamEditionControl##classe : public CATISamEditionControl \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamEditionControl, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AllowEdition(CATBoolean & oBoolean) ; \
};



#define ENVTIEdeclare_CATISamEditionControl(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AllowEdition(CATBoolean & oBoolean) ; \


#define ENVTIEdefine_CATISamEditionControl(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AllowEdition(CATBoolean & oBoolean)  \
{ \
return (ENVTIECALL(CATISamEditionControl,ENVTIETypeLetter,ENVTIELetter)AllowEdition(oBoolean)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamEditionControl(classe)    TIECATISamEditionControl##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamEditionControl(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamEditionControl, classe) \
 \
 \
CATImplementTIEMethods(CATISamEditionControl, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamEditionControl, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamEditionControl, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamEditionControl, classe) \
 \
HRESULT  TIECATISamEditionControl##classe::AllowEdition(CATBoolean & oBoolean)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AllowEdition(oBoolean)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamEditionControl(classe) \
 \
 \
declare_TIE_CATISamEditionControl(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamEditionControl##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamEditionControl,"CATISamEditionControl",CATISamEditionControl::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamEditionControl(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamEditionControl, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamEditionControl##classe(classe::MetaObject(),CATISamEditionControl::MetaObject(),(void *)CreateTIECATISamEditionControl##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamEditionControl(classe) \
 \
 \
declare_TIE_CATISamEditionControl(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamEditionControl##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamEditionControl,"CATISamEditionControl",CATISamEditionControl::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamEditionControl(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamEditionControl, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamEditionControl##classe(classe::MetaObject(),CATISamEditionControl::MetaObject(),(void *)CreateTIECATISamEditionControl##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamEditionControl(classe) TIE_CATISamEditionControl(classe)
#else
#define BOA_CATISamEditionControl(classe) CATImplementBOA(CATISamEditionControl, classe)
#endif

#endif
