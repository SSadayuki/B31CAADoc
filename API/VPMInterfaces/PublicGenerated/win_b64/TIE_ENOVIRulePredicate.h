#ifndef __TIE_ENOVIRulePredicate
#define __TIE_ENOVIRulePredicate

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVIRulePredicate.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVIRulePredicate */
#define declare_TIE_ENOVIRulePredicate(classe) \
 \
 \
class TIEENOVIRulePredicate##classe : public ENOVIRulePredicate \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVIRulePredicate, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT      eval(CATBaseUnknown_var iInstance) ; \
      virtual int          setNot() ; \
      virtual int          isValid() ; \
      virtual const char * toString() ; \
};



#define ENVTIEdeclare_ENOVIRulePredicate(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT      eval(CATBaseUnknown_var iInstance) ; \
virtual int          setNot() ; \
virtual int          isValid() ; \
virtual const char * toString() ; \


#define ENVTIEdefine_ENOVIRulePredicate(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT       ENVTIEName::eval(CATBaseUnknown_var iInstance)  \
{ \
return (ENVTIECALL(ENOVIRulePredicate,ENVTIETypeLetter,ENVTIELetter)eval(iInstance)); \
} \
int           ENVTIEName::setNot()  \
{ \
return (ENVTIECALL(ENOVIRulePredicate,ENVTIETypeLetter,ENVTIELetter)setNot()); \
} \
int           ENVTIEName::isValid()  \
{ \
return (ENVTIECALL(ENOVIRulePredicate,ENVTIETypeLetter,ENVTIELetter)isValid()); \
} \
const char *  ENVTIEName::toString()  \
{ \
return (ENVTIECALL(ENOVIRulePredicate,ENVTIETypeLetter,ENVTIELetter)toString()); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVIRulePredicate(classe)    TIEENOVIRulePredicate##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVIRulePredicate(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVIRulePredicate, classe) \
 \
 \
CATImplementTIEMethods(ENOVIRulePredicate, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVIRulePredicate, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVIRulePredicate, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVIRulePredicate, classe) \
 \
HRESULT       TIEENOVIRulePredicate##classe::eval(CATBaseUnknown_var iInstance)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->eval(iInstance)); \
} \
int           TIEENOVIRulePredicate##classe::setNot()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->setNot()); \
} \
int           TIEENOVIRulePredicate##classe::isValid()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->isValid()); \
} \
const char *  TIEENOVIRulePredicate##classe::toString()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->toString()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVIRulePredicate(classe) \
 \
 \
declare_TIE_ENOVIRulePredicate(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIRulePredicate##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIRulePredicate,"ENOVIRulePredicate",ENOVIRulePredicate::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIRulePredicate(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVIRulePredicate, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIRulePredicate##classe(classe::MetaObject(),ENOVIRulePredicate::MetaObject(),(void *)CreateTIEENOVIRulePredicate##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVIRulePredicate(classe) \
 \
 \
declare_TIE_ENOVIRulePredicate(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIRulePredicate##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIRulePredicate,"ENOVIRulePredicate",ENOVIRulePredicate::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIRulePredicate(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVIRulePredicate, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIRulePredicate##classe(classe::MetaObject(),ENOVIRulePredicate::MetaObject(),(void *)CreateTIEENOVIRulePredicate##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVIRulePredicate(classe) TIE_ENOVIRulePredicate(classe)
#else
#define BOA_ENOVIRulePredicate(classe) CATImplementBOA(ENOVIRulePredicate, classe)
#endif

#endif
