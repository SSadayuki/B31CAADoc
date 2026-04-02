#ifndef __TIE_CATIMmiUseSolidInsertion
#define __TIE_CATIMmiUseSolidInsertion

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMmiUseSolidInsertion.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMmiUseSolidInsertion */
#define declare_TIE_CATIMmiUseSolidInsertion(classe) \
 \
 \
class TIECATIMmiUseSolidInsertion##classe : public CATIMmiUseSolidInsertion \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMmiUseSolidInsertion, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ReorderFeature( const CATIMmiMechanicalFeature_var& iDestination ) ; \
      virtual HRESULT InsertFeature( const CATIMmiMechanicalFeature_var&  iDestination ) ; \
};



#define ENVTIEdeclare_CATIMmiUseSolidInsertion(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ReorderFeature( const CATIMmiMechanicalFeature_var& iDestination ) ; \
virtual HRESULT InsertFeature( const CATIMmiMechanicalFeature_var&  iDestination ) ; \


#define ENVTIEdefine_CATIMmiUseSolidInsertion(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ReorderFeature( const CATIMmiMechanicalFeature_var& iDestination )  \
{ \
return (ENVTIECALL(CATIMmiUseSolidInsertion,ENVTIETypeLetter,ENVTIELetter)ReorderFeature(iDestination )); \
} \
HRESULT  ENVTIEName::InsertFeature( const CATIMmiMechanicalFeature_var&  iDestination )  \
{ \
return (ENVTIECALL(CATIMmiUseSolidInsertion,ENVTIETypeLetter,ENVTIELetter)InsertFeature(iDestination )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMmiUseSolidInsertion(classe)    TIECATIMmiUseSolidInsertion##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMmiUseSolidInsertion(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMmiUseSolidInsertion, classe) \
 \
 \
CATImplementTIEMethods(CATIMmiUseSolidInsertion, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMmiUseSolidInsertion, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMmiUseSolidInsertion, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMmiUseSolidInsertion, classe) \
 \
HRESULT  TIECATIMmiUseSolidInsertion##classe::ReorderFeature( const CATIMmiMechanicalFeature_var& iDestination )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReorderFeature(iDestination )); \
} \
HRESULT  TIECATIMmiUseSolidInsertion##classe::InsertFeature( const CATIMmiMechanicalFeature_var&  iDestination )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InsertFeature(iDestination )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMmiUseSolidInsertion(classe) \
 \
 \
declare_TIE_CATIMmiUseSolidInsertion(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMmiUseSolidInsertion##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMmiUseSolidInsertion,"CATIMmiUseSolidInsertion",CATIMmiUseSolidInsertion::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMmiUseSolidInsertion(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMmiUseSolidInsertion, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMmiUseSolidInsertion##classe(classe::MetaObject(),CATIMmiUseSolidInsertion::MetaObject(),(void *)CreateTIECATIMmiUseSolidInsertion##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMmiUseSolidInsertion(classe) \
 \
 \
declare_TIE_CATIMmiUseSolidInsertion(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMmiUseSolidInsertion##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMmiUseSolidInsertion,"CATIMmiUseSolidInsertion",CATIMmiUseSolidInsertion::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMmiUseSolidInsertion(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMmiUseSolidInsertion, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMmiUseSolidInsertion##classe(classe::MetaObject(),CATIMmiUseSolidInsertion::MetaObject(),(void *)CreateTIECATIMmiUseSolidInsertion##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMmiUseSolidInsertion(classe) TIE_CATIMmiUseSolidInsertion(classe)
#else
#define BOA_CATIMmiUseSolidInsertion(classe) CATImplementBOA(CATIMmiUseSolidInsertion, classe)
#endif

#endif
