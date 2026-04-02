#ifndef __TIE_CATISamElementGroup
#define __TIE_CATISamElementGroup

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamElementGroup.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamElementGroup */
#define declare_TIE_CATISamElementGroup(classe) \
 \
 \
class TIECATISamElementGroup##classe : public CATISamElementGroup \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamElementGroup, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual  int GetElementList(CATMSHElement** & oMshElementList); \
};



#define ENVTIEdeclare_CATISamElementGroup(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual  int GetElementList(CATMSHElement** & oMshElementList); \


#define ENVTIEdefine_CATISamElementGroup(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
int  ENVTIEName::GetElementList(CATMSHElement** & oMshElementList) \
{ \
return (ENVTIECALL(CATISamElementGroup,ENVTIETypeLetter,ENVTIELetter)GetElementList(oMshElementList)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamElementGroup(classe)    TIECATISamElementGroup##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamElementGroup(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamElementGroup, classe) \
 \
 \
CATImplementTIEMethods(CATISamElementGroup, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamElementGroup, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamElementGroup, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamElementGroup, classe) \
 \
int  TIECATISamElementGroup##classe::GetElementList(CATMSHElement** & oMshElementList) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetElementList(oMshElementList)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamElementGroup(classe) \
 \
 \
declare_TIE_CATISamElementGroup(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamElementGroup##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamElementGroup,"CATISamElementGroup",CATISamElementGroup::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamElementGroup(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamElementGroup, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamElementGroup##classe(classe::MetaObject(),CATISamElementGroup::MetaObject(),(void *)CreateTIECATISamElementGroup##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamElementGroup(classe) \
 \
 \
declare_TIE_CATISamElementGroup(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamElementGroup##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamElementGroup,"CATISamElementGroup",CATISamElementGroup::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamElementGroup(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamElementGroup, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamElementGroup##classe(classe::MetaObject(),CATISamElementGroup::MetaObject(),(void *)CreateTIECATISamElementGroup##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamElementGroup(classe) TIE_CATISamElementGroup(classe)
#else
#define BOA_CATISamElementGroup(classe) CATImplementBOA(CATISamElementGroup, classe)
#endif

#endif
