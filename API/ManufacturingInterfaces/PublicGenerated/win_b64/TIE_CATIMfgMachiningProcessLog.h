#ifndef __TIE_CATIMfgMachiningProcessLog
#define __TIE_CATIMfgMachiningProcessLog

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgMachiningProcessLog.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgMachiningProcessLog */
#define declare_TIE_CATIMfgMachiningProcessLog(classe) \
 \
 \
class TIECATIMfgMachiningProcessLog##classe : public CATIMfgMachiningProcessLog \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgMachiningProcessLog, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Activate(CATBoolean iActive) ; \
      virtual HRESULT IsActive(CATBoolean& oActive) ; \
      virtual HRESULT Trace(int iContext, const CATListOfCATUnicodeString& iTraces) ; \
};



#define ENVTIEdeclare_CATIMfgMachiningProcessLog(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Activate(CATBoolean iActive) ; \
virtual HRESULT IsActive(CATBoolean& oActive) ; \
virtual HRESULT Trace(int iContext, const CATListOfCATUnicodeString& iTraces) ; \


#define ENVTIEdefine_CATIMfgMachiningProcessLog(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Activate(CATBoolean iActive)  \
{ \
return (ENVTIECALL(CATIMfgMachiningProcessLog,ENVTIETypeLetter,ENVTIELetter)Activate(iActive)); \
} \
HRESULT  ENVTIEName::IsActive(CATBoolean& oActive)  \
{ \
return (ENVTIECALL(CATIMfgMachiningProcessLog,ENVTIETypeLetter,ENVTIELetter)IsActive(oActive)); \
} \
HRESULT  ENVTIEName::Trace(int iContext, const CATListOfCATUnicodeString& iTraces)  \
{ \
return (ENVTIECALL(CATIMfgMachiningProcessLog,ENVTIETypeLetter,ENVTIELetter)Trace(iContext,iTraces)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgMachiningProcessLog(classe)    TIECATIMfgMachiningProcessLog##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgMachiningProcessLog(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgMachiningProcessLog, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgMachiningProcessLog, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgMachiningProcessLog, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgMachiningProcessLog, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgMachiningProcessLog, classe) \
 \
HRESULT  TIECATIMfgMachiningProcessLog##classe::Activate(CATBoolean iActive)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate(iActive)); \
} \
HRESULT  TIECATIMfgMachiningProcessLog##classe::IsActive(CATBoolean& oActive)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsActive(oActive)); \
} \
HRESULT  TIECATIMfgMachiningProcessLog##classe::Trace(int iContext, const CATListOfCATUnicodeString& iTraces)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Trace(iContext,iTraces)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgMachiningProcessLog(classe) \
 \
 \
declare_TIE_CATIMfgMachiningProcessLog(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMachiningProcessLog##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMachiningProcessLog,"CATIMfgMachiningProcessLog",CATIMfgMachiningProcessLog::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMachiningProcessLog(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgMachiningProcessLog, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMachiningProcessLog##classe(classe::MetaObject(),CATIMfgMachiningProcessLog::MetaObject(),(void *)CreateTIECATIMfgMachiningProcessLog##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgMachiningProcessLog(classe) \
 \
 \
declare_TIE_CATIMfgMachiningProcessLog(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMachiningProcessLog##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMachiningProcessLog,"CATIMfgMachiningProcessLog",CATIMfgMachiningProcessLog::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMachiningProcessLog(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgMachiningProcessLog, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMachiningProcessLog##classe(classe::MetaObject(),CATIMfgMachiningProcessLog::MetaObject(),(void *)CreateTIECATIMfgMachiningProcessLog##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgMachiningProcessLog(classe) TIE_CATIMfgMachiningProcessLog(classe)
#else
#define BOA_CATIMfgMachiningProcessLog(classe) CATImplementBOA(CATIMfgMachiningProcessLog, classe)
#endif

#endif
