#ifndef __TIE_CATIVisitor
#define __TIE_CATIVisitor

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIVisitor.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIVisitor */
#define declare_TIE_CATIVisitor(classe) \
 \
 \
class TIECATIVisitor##classe : public CATIVisitor \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIVisitor, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT   Visit      (CATBaseUnknown* iInstance); \
      virtual HRESULT VisitPublisherForRecursion(const CATIParmPublisher_var &publisher) ; \
      virtual const CATListOfCATUnicodeString* SpecialDataNeeded() ; \
};



#define ENVTIEdeclare_CATIVisitor(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT   Visit      (CATBaseUnknown* iInstance); \
virtual HRESULT VisitPublisherForRecursion(const CATIParmPublisher_var &publisher) ; \
virtual const CATListOfCATUnicodeString* SpecialDataNeeded() ; \


#define ENVTIEdefine_CATIVisitor(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT    ENVTIEName::Visit      (CATBaseUnknown* iInstance) \
{ \
return (ENVTIECALL(CATIVisitor,ENVTIETypeLetter,ENVTIELetter)Visit      (iInstance)); \
} \
HRESULT  ENVTIEName::VisitPublisherForRecursion(const CATIParmPublisher_var &publisher)  \
{ \
return (ENVTIECALL(CATIVisitor,ENVTIETypeLetter,ENVTIELetter)VisitPublisherForRecursion(publisher)); \
} \
const CATListOfCATUnicodeString*  ENVTIEName::SpecialDataNeeded()  \
{ \
return (ENVTIECALL(CATIVisitor,ENVTIETypeLetter,ENVTIELetter)SpecialDataNeeded()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIVisitor(classe)    TIECATIVisitor##classe


/* Common methods inside a TIE */
#define common_TIE_CATIVisitor(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIVisitor, classe) \
 \
 \
CATImplementTIEMethods(CATIVisitor, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIVisitor, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIVisitor, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIVisitor, classe) \
 \
HRESULT    TIECATIVisitor##classe::Visit      (CATBaseUnknown* iInstance) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Visit      (iInstance)); \
} \
HRESULT  TIECATIVisitor##classe::VisitPublisherForRecursion(const CATIParmPublisher_var &publisher)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->VisitPublisherForRecursion(publisher)); \
} \
const CATListOfCATUnicodeString*  TIECATIVisitor##classe::SpecialDataNeeded()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SpecialDataNeeded()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIVisitor(classe) \
 \
 \
declare_TIE_CATIVisitor(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIVisitor##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIVisitor,"CATIVisitor",CATIVisitor::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIVisitor(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIVisitor, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIVisitor##classe(classe::MetaObject(),CATIVisitor::MetaObject(),(void *)CreateTIECATIVisitor##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIVisitor(classe) \
 \
 \
declare_TIE_CATIVisitor(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIVisitor##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIVisitor,"CATIVisitor",CATIVisitor::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIVisitor(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIVisitor, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIVisitor##classe(classe::MetaObject(),CATIVisitor::MetaObject(),(void *)CreateTIECATIVisitor##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIVisitor(classe) TIE_CATIVisitor(classe)
#else
#define BOA_CATIVisitor(classe) CATImplementBOA(CATIVisitor, classe)
#endif

#endif
