#ifndef __TIE_CATIAscendant
#define __TIE_CATIAscendant

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAscendant.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAscendant */
#define declare_TIE_CATIAscendant(classe) \
 \
 \
class TIECATIAscendant##classe : public CATIAscendant \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAscendant, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATBaseUnknown_var GetFather () ; \
};



#define ENVTIEdeclare_CATIAscendant(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATBaseUnknown_var GetFather () ; \


#define ENVTIEdefine_CATIAscendant(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATBaseUnknown_var  ENVTIEName::GetFather ()  \
{ \
return (ENVTIECALL(CATIAscendant,ENVTIETypeLetter,ENVTIELetter)GetFather ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAscendant(classe)    TIECATIAscendant##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAscendant(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAscendant, classe) \
 \
 \
CATImplementTIEMethods(CATIAscendant, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAscendant, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAscendant, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAscendant, classe) \
 \
CATBaseUnknown_var  TIECATIAscendant##classe::GetFather ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFather ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAscendant(classe) \
 \
 \
declare_TIE_CATIAscendant(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAscendant##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAscendant,"CATIAscendant",CATIAscendant::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAscendant(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAscendant, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAscendant##classe(classe::MetaObject(),CATIAscendant::MetaObject(),(void *)CreateTIECATIAscendant##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAscendant(classe) \
 \
 \
declare_TIE_CATIAscendant(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAscendant##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAscendant,"CATIAscendant",CATIAscendant::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAscendant(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAscendant, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAscendant##classe(classe::MetaObject(),CATIAscendant::MetaObject(),(void *)CreateTIECATIAscendant##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAscendant(classe) TIE_CATIAscendant(classe)
#else
#define BOA_CATIAscendant(classe) CATImplementBOA(CATIAscendant, classe)
#endif

#endif
