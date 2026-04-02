#ifndef __TIE_CATIVpmUEActionFlow
#define __TIE_CATIVpmUEActionFlow

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIVpmUEActionFlow.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIVpmUEActionFlow */
#define declare_TIE_CATIVpmUEActionFlow(classe) \
 \
 \
class TIECATIVpmUEActionFlow##classe : public CATIVpmUEActionFlow \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIVpmUEActionFlow, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT  Run(CATListOfCATUnicodeString& ioList) ; \
};



#define ENVTIEdeclare_CATIVpmUEActionFlow(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT  Run(CATListOfCATUnicodeString& ioList) ; \


#define ENVTIEdefine_CATIVpmUEActionFlow(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT   ENVTIEName::Run(CATListOfCATUnicodeString& ioList)  \
{ \
return (ENVTIECALL(CATIVpmUEActionFlow,ENVTIETypeLetter,ENVTIELetter)Run(ioList)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIVpmUEActionFlow(classe)    TIECATIVpmUEActionFlow##classe


/* Common methods inside a TIE */
#define common_TIE_CATIVpmUEActionFlow(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIVpmUEActionFlow, classe) \
 \
 \
CATImplementTIEMethods(CATIVpmUEActionFlow, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIVpmUEActionFlow, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIVpmUEActionFlow, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIVpmUEActionFlow, classe) \
 \
HRESULT   TIECATIVpmUEActionFlow##classe::Run(CATListOfCATUnicodeString& ioList)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Run(ioList)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIVpmUEActionFlow(classe) \
 \
 \
declare_TIE_CATIVpmUEActionFlow(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIVpmUEActionFlow##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIVpmUEActionFlow,"CATIVpmUEActionFlow",CATIVpmUEActionFlow::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIVpmUEActionFlow(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIVpmUEActionFlow, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIVpmUEActionFlow##classe(classe::MetaObject(),CATIVpmUEActionFlow::MetaObject(),(void *)CreateTIECATIVpmUEActionFlow##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIVpmUEActionFlow(classe) \
 \
 \
declare_TIE_CATIVpmUEActionFlow(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIVpmUEActionFlow##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIVpmUEActionFlow,"CATIVpmUEActionFlow",CATIVpmUEActionFlow::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIVpmUEActionFlow(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIVpmUEActionFlow, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIVpmUEActionFlow##classe(classe::MetaObject(),CATIVpmUEActionFlow::MetaObject(),(void *)CreateTIECATIVpmUEActionFlow##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIVpmUEActionFlow(classe) TIE_CATIVpmUEActionFlow(classe)
#else
#define BOA_CATIVpmUEActionFlow(classe) CATImplementBOA(CATIVpmUEActionFlow, classe)
#endif

#endif
