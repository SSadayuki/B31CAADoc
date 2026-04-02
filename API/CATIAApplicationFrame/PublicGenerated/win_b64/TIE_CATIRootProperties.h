#ifndef __TIE_CATIRootProperties
#define __TIE_CATIRootProperties

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIRootProperties.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIRootProperties */
#define declare_TIE_CATIRootProperties(classe) \
 \
 \
class TIECATIRootProperties##classe : public CATIRootProperties \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIRootProperties, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATListOfCATString GetListOfEditors (); \
      virtual void GetAssociatedObject (); \
};



#define ENVTIEdeclare_CATIRootProperties(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATListOfCATString GetListOfEditors (); \
virtual void GetAssociatedObject (); \


#define ENVTIEdefine_CATIRootProperties(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATListOfCATString  ENVTIEName::GetListOfEditors () \
{ \
return (ENVTIECALL(CATIRootProperties,ENVTIETypeLetter,ENVTIELetter)GetListOfEditors ()); \
} \
void  ENVTIEName::GetAssociatedObject () \
{ \
 (ENVTIECALL(CATIRootProperties,ENVTIETypeLetter,ENVTIELetter)GetAssociatedObject ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIRootProperties(classe)    TIECATIRootProperties##classe


/* Common methods inside a TIE */
#define common_TIE_CATIRootProperties(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIRootProperties, classe) \
 \
 \
CATImplementTIEMethods(CATIRootProperties, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIRootProperties, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIRootProperties, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIRootProperties, classe) \
 \
CATListOfCATString  TIECATIRootProperties##classe::GetListOfEditors () \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfEditors ()); \
} \
void  TIECATIRootProperties##classe::GetAssociatedObject () \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAssociatedObject (); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIRootProperties(classe) \
 \
 \
declare_TIE_CATIRootProperties(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIRootProperties##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIRootProperties,"CATIRootProperties",CATIRootProperties::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIRootProperties(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIRootProperties, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIRootProperties##classe(classe::MetaObject(),CATIRootProperties::MetaObject(),(void *)CreateTIECATIRootProperties##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIRootProperties(classe) \
 \
 \
declare_TIE_CATIRootProperties(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIRootProperties##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIRootProperties,"CATIRootProperties",CATIRootProperties::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIRootProperties(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIRootProperties, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIRootProperties##classe(classe::MetaObject(),CATIRootProperties::MetaObject(),(void *)CreateTIECATIRootProperties##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIRootProperties(classe) TIE_CATIRootProperties(classe)
#else
#define BOA_CATIRootProperties(classe) CATImplementBOA(CATIRootProperties, classe)
#endif

#endif
