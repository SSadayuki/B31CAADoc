#ifndef __TIE_CATIParmSelector
#define __TIE_CATIParmSelector

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIParmSelector.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIParmSelector */
#define declare_TIE_CATIParmSelector(classe) \
 \
 \
class TIECATIParmSelector##classe : public CATIParmSelector \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIParmSelector, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATICkeParm_var SelectedLiteral () const ; \
};



#define ENVTIEdeclare_CATIParmSelector(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATICkeParm_var SelectedLiteral () const ; \


#define ENVTIEdefine_CATIParmSelector(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATICkeParm_var  ENVTIEName::SelectedLiteral () const  \
{ \
return (ENVTIECALL(CATIParmSelector,ENVTIETypeLetter,ENVTIELetter)SelectedLiteral ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIParmSelector(classe)    TIECATIParmSelector##classe


/* Common methods inside a TIE */
#define common_TIE_CATIParmSelector(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIParmSelector, classe) \
 \
 \
CATImplementTIEMethods(CATIParmSelector, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIParmSelector, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIParmSelector, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIParmSelector, classe) \
 \
CATICkeParm_var  TIECATIParmSelector##classe::SelectedLiteral () const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SelectedLiteral ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIParmSelector(classe) \
 \
 \
declare_TIE_CATIParmSelector(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIParmSelector##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIParmSelector,"CATIParmSelector",CATIParmSelector::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIParmSelector(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIParmSelector, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIParmSelector##classe(classe::MetaObject(),CATIParmSelector::MetaObject(),(void *)CreateTIECATIParmSelector##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIParmSelector(classe) \
 \
 \
declare_TIE_CATIParmSelector(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIParmSelector##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIParmSelector,"CATIParmSelector",CATIParmSelector::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIParmSelector(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIParmSelector, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIParmSelector##classe(classe::MetaObject(),CATIParmSelector::MetaObject(),(void *)CreateTIECATIParmSelector##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIParmSelector(classe) TIE_CATIParmSelector(classe)
#else
#define BOA_CATIParmSelector(classe) CATImplementBOA(CATIParmSelector, classe)
#endif

#endif
