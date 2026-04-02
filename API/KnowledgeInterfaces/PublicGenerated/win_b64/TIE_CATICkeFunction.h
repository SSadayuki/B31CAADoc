#ifndef __TIE_CATICkeFunction
#define __TIE_CATICkeFunction

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICkeFunction.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICkeFunction */
#define declare_TIE_CATICkeFunction(classe) \
 \
 \
class TIECATICkeFunction##classe : public CATICkeFunction \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICkeFunction, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATICkeSignature_var GetDescription () const ; \
      virtual CATCke::Boolean IsRunnable () const ; \
      virtual void Run (CATCkeListOfParm iListOfParameters,const CATICkeParm_var &iReturnedParameter,const CATCkeEvalContext *iEvaluationContext=0) const ; \
};



#define ENVTIEdeclare_CATICkeFunction(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATICkeSignature_var GetDescription () const ; \
virtual CATCke::Boolean IsRunnable () const ; \
virtual void Run (CATCkeListOfParm iListOfParameters,const CATICkeParm_var &iReturnedParameter,const CATCkeEvalContext *iEvaluationContext=0) const ; \


#define ENVTIEdefine_CATICkeFunction(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATICkeSignature_var  ENVTIEName::GetDescription () const  \
{ \
return (ENVTIECALL(CATICkeFunction,ENVTIETypeLetter,ENVTIELetter)GetDescription ()); \
} \
CATCke::Boolean  ENVTIEName::IsRunnable () const  \
{ \
return (ENVTIECALL(CATICkeFunction,ENVTIETypeLetter,ENVTIELetter)IsRunnable ()); \
} \
void  ENVTIEName::Run (CATCkeListOfParm iListOfParameters,const CATICkeParm_var &iReturnedParameter,const CATCkeEvalContext *iEvaluationContext) const  \
{ \
 (ENVTIECALL(CATICkeFunction,ENVTIETypeLetter,ENVTIELetter)Run (iListOfParameters,iReturnedParameter,iEvaluationContext)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICkeFunction(classe)    TIECATICkeFunction##classe


/* Common methods inside a TIE */
#define common_TIE_CATICkeFunction(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICkeFunction, classe) \
 \
 \
CATImplementTIEMethods(CATICkeFunction, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICkeFunction, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICkeFunction, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICkeFunction, classe) \
 \
CATICkeSignature_var  TIECATICkeFunction##classe::GetDescription () const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDescription ()); \
} \
CATCke::Boolean  TIECATICkeFunction##classe::IsRunnable () const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsRunnable ()); \
} \
void  TIECATICkeFunction##classe::Run (CATCkeListOfParm iListOfParameters,const CATICkeParm_var &iReturnedParameter,const CATCkeEvalContext *iEvaluationContext) const  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Run (iListOfParameters,iReturnedParameter,iEvaluationContext); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICkeFunction(classe) \
 \
 \
declare_TIE_CATICkeFunction(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICkeFunction##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICkeFunction,"CATICkeFunction",CATICkeFunction::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICkeFunction(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICkeFunction, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICkeFunction##classe(classe::MetaObject(),CATICkeFunction::MetaObject(),(void *)CreateTIECATICkeFunction##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICkeFunction(classe) \
 \
 \
declare_TIE_CATICkeFunction(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICkeFunction##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICkeFunction,"CATICkeFunction",CATICkeFunction::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICkeFunction(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICkeFunction, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICkeFunction##classe(classe::MetaObject(),CATICkeFunction::MetaObject(),(void *)CreateTIECATICkeFunction##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICkeFunction(classe) TIE_CATICkeFunction(classe)
#else
#define BOA_CATICkeFunction(classe) CATImplementBOA(CATICkeFunction, classe)
#endif

#endif
