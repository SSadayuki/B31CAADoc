#ifndef __TIE_CATIMechanicalProperties
#define __TIE_CATIMechanicalProperties

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMechanicalProperties.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMechanicalProperties */
#define declare_TIE_CATIMechanicalProperties(classe) \
 \
 \
class TIECATIMechanicalProperties##classe : public CATIMechanicalProperties \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMechanicalProperties, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual int IsInactive() const ; \
      virtual void Activate() ; \
      virtual void InActivate() ; \
};



#define ENVTIEdeclare_CATIMechanicalProperties(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual int IsInactive() const ; \
virtual void Activate() ; \
virtual void InActivate() ; \


#define ENVTIEdefine_CATIMechanicalProperties(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
int  ENVTIEName::IsInactive() const  \
{ \
return (ENVTIECALL(CATIMechanicalProperties,ENVTIETypeLetter,ENVTIELetter)IsInactive()); \
} \
void  ENVTIEName::Activate()  \
{ \
 (ENVTIECALL(CATIMechanicalProperties,ENVTIETypeLetter,ENVTIELetter)Activate()); \
} \
void  ENVTIEName::InActivate()  \
{ \
 (ENVTIECALL(CATIMechanicalProperties,ENVTIETypeLetter,ENVTIELetter)InActivate()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMechanicalProperties(classe)    TIECATIMechanicalProperties##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMechanicalProperties(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMechanicalProperties, classe) \
 \
 \
CATImplementTIEMethods(CATIMechanicalProperties, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMechanicalProperties, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMechanicalProperties, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMechanicalProperties, classe) \
 \
int  TIECATIMechanicalProperties##classe::IsInactive() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsInactive()); \
} \
void  TIECATIMechanicalProperties##classe::Activate()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate(); \
} \
void  TIECATIMechanicalProperties##classe::InActivate()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InActivate(); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMechanicalProperties(classe) \
 \
 \
declare_TIE_CATIMechanicalProperties(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMechanicalProperties##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMechanicalProperties,"CATIMechanicalProperties",CATIMechanicalProperties::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMechanicalProperties(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMechanicalProperties, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMechanicalProperties##classe(classe::MetaObject(),CATIMechanicalProperties::MetaObject(),(void *)CreateTIECATIMechanicalProperties##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMechanicalProperties(classe) \
 \
 \
declare_TIE_CATIMechanicalProperties(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMechanicalProperties##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMechanicalProperties,"CATIMechanicalProperties",CATIMechanicalProperties::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMechanicalProperties(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMechanicalProperties, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMechanicalProperties##classe(classe::MetaObject(),CATIMechanicalProperties::MetaObject(),(void *)CreateTIECATIMechanicalProperties##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMechanicalProperties(classe) TIE_CATIMechanicalProperties(classe)
#else
#define BOA_CATIMechanicalProperties(classe) CATImplementBOA(CATIMechanicalProperties, classe)
#endif

#endif
