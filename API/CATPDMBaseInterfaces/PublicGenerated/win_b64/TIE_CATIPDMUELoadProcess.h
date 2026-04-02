#ifndef __TIE_CATIPDMUELoadProcess
#define __TIE_CATIPDMUELoadProcess

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPDMUELoadProcess.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPDMUELoadProcess */
#define declare_TIE_CATIPDMUELoadProcess(classe) \
 \
 \
class TIECATIPDMUELoadProcess##classe : public CATIPDMUELoadProcess \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPDMUELoadProcess, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Finalize(const CATListValCATBaseUnknown_var& iListOfLoadedObj) ; \
};



#define ENVTIEdeclare_CATIPDMUELoadProcess(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Finalize(const CATListValCATBaseUnknown_var& iListOfLoadedObj) ; \


#define ENVTIEdefine_CATIPDMUELoadProcess(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Finalize(const CATListValCATBaseUnknown_var& iListOfLoadedObj)  \
{ \
return (ENVTIECALL(CATIPDMUELoadProcess,ENVTIETypeLetter,ENVTIELetter)Finalize(iListOfLoadedObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPDMUELoadProcess(classe)    TIECATIPDMUELoadProcess##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPDMUELoadProcess(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPDMUELoadProcess, classe) \
 \
 \
CATImplementTIEMethods(CATIPDMUELoadProcess, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPDMUELoadProcess, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPDMUELoadProcess, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPDMUELoadProcess, classe) \
 \
HRESULT  TIECATIPDMUELoadProcess##classe::Finalize(const CATListValCATBaseUnknown_var& iListOfLoadedObj)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Finalize(iListOfLoadedObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPDMUELoadProcess(classe) \
 \
 \
declare_TIE_CATIPDMUELoadProcess(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUELoadProcess##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUELoadProcess,"CATIPDMUELoadProcess",CATIPDMUELoadProcess::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUELoadProcess(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPDMUELoadProcess, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUELoadProcess##classe(classe::MetaObject(),CATIPDMUELoadProcess::MetaObject(),(void *)CreateTIECATIPDMUELoadProcess##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPDMUELoadProcess(classe) \
 \
 \
declare_TIE_CATIPDMUELoadProcess(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUELoadProcess##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUELoadProcess,"CATIPDMUELoadProcess",CATIPDMUELoadProcess::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUELoadProcess(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPDMUELoadProcess, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUELoadProcess##classe(classe::MetaObject(),CATIPDMUELoadProcess::MetaObject(),(void *)CreateTIECATIPDMUELoadProcess##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPDMUELoadProcess(classe) TIE_CATIPDMUELoadProcess(classe)
#else
#define BOA_CATIPDMUELoadProcess(classe) CATImplementBOA(CATIPDMUELoadProcess, classe)
#endif

#endif
