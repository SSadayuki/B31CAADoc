#ifndef __TIE_CATISiAnalysis
#define __TIE_CATISiAnalysis

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISiAnalysis.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISiAnalysis */
#define declare_TIE_CATISiAnalysis(classe) \
 \
 \
class TIECATISiAnalysis##classe : public CATISiAnalysis \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISiAnalysis, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void Compute()                             const ; \
      virtual void GetConditionVerification(int & State) const ; \
      virtual void EmitWarning()                         const ; \
      virtual void Clean()                               const ; \
      virtual CATUnicodeString   GetType()               const ; \
      virtual void SetGraphicActivation(int iStatus) ; \
};



#define ENVTIEdeclare_CATISiAnalysis(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void Compute()                             const ; \
virtual void GetConditionVerification(int & State) const ; \
virtual void EmitWarning()                         const ; \
virtual void Clean()                               const ; \
virtual CATUnicodeString   GetType()               const ; \
virtual void SetGraphicActivation(int iStatus) ; \


#define ENVTIEdefine_CATISiAnalysis(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void  ENVTIEName::Compute()                             const  \
{ \
 (ENVTIECALL(CATISiAnalysis,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
void  ENVTIEName::GetConditionVerification(int & State) const  \
{ \
 (ENVTIECALL(CATISiAnalysis,ENVTIETypeLetter,ENVTIELetter)GetConditionVerification(State)); \
} \
void  ENVTIEName::EmitWarning()                         const  \
{ \
 (ENVTIECALL(CATISiAnalysis,ENVTIETypeLetter,ENVTIELetter)EmitWarning()); \
} \
void  ENVTIEName::Clean()                               const  \
{ \
 (ENVTIECALL(CATISiAnalysis,ENVTIETypeLetter,ENVTIELetter)Clean()); \
} \
CATUnicodeString    ENVTIEName::GetType()               const  \
{ \
return (ENVTIECALL(CATISiAnalysis,ENVTIETypeLetter,ENVTIELetter)GetType()); \
} \
void  ENVTIEName::SetGraphicActivation(int iStatus)  \
{ \
 (ENVTIECALL(CATISiAnalysis,ENVTIETypeLetter,ENVTIELetter)SetGraphicActivation(iStatus)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISiAnalysis(classe)    TIECATISiAnalysis##classe


/* Common methods inside a TIE */
#define common_TIE_CATISiAnalysis(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISiAnalysis, classe) \
 \
 \
CATImplementTIEMethods(CATISiAnalysis, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISiAnalysis, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISiAnalysis, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISiAnalysis, classe) \
 \
void  TIECATISiAnalysis##classe::Compute()                             const  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
} \
void  TIECATISiAnalysis##classe::GetConditionVerification(int & State) const  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConditionVerification(State); \
} \
void  TIECATISiAnalysis##classe::EmitWarning()                         const  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EmitWarning(); \
} \
void  TIECATISiAnalysis##classe::Clean()                               const  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Clean(); \
} \
CATUnicodeString    TIECATISiAnalysis##classe::GetType()               const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetType()); \
} \
void  TIECATISiAnalysis##classe::SetGraphicActivation(int iStatus)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGraphicActivation(iStatus); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISiAnalysis(classe) \
 \
 \
declare_TIE_CATISiAnalysis(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISiAnalysis##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISiAnalysis,"CATISiAnalysis",CATISiAnalysis::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISiAnalysis(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISiAnalysis, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISiAnalysis##classe(classe::MetaObject(),CATISiAnalysis::MetaObject(),(void *)CreateTIECATISiAnalysis##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISiAnalysis(classe) \
 \
 \
declare_TIE_CATISiAnalysis(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISiAnalysis##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISiAnalysis,"CATISiAnalysis",CATISiAnalysis::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISiAnalysis(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISiAnalysis, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISiAnalysis##classe(classe::MetaObject(),CATISiAnalysis::MetaObject(),(void *)CreateTIECATISiAnalysis##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISiAnalysis(classe) TIE_CATISiAnalysis(classe)
#else
#define BOA_CATISiAnalysis(classe) CATImplementBOA(CATISiAnalysis, classe)
#endif

#endif
