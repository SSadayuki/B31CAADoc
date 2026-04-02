#ifndef __TIE_CATIMfgMotionPipeUpdAct
#define __TIE_CATIMfgMotionPipeUpdAct

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgMotionPipeUpdAct.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgMotionPipeUpdAct */
#define declare_TIE_CATIMfgMotionPipeUpdAct(classe) \
 \
 \
class TIECATIMfgMotionPipeUpdAct##classe : public CATIMfgMotionPipeUpdAct \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgMotionPipeUpdAct, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT UpdateOperation (const int & iRank, const int & iMode, CATListOfDouble *& ipDOF, CATMathTransformation & iTCPTransfo) ; \
      virtual HRESULT ApplySetupOnOperation (CATMathTransformation & iSetupTransfo) ; \
      virtual HRESULT GetJogClosureEvent (const int & iClosureEvent) ; \
      virtual HRESULT SimulEndOfMove (int iNumberOfDOFElt) ; \
};



#define ENVTIEdeclare_CATIMfgMotionPipeUpdAct(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT UpdateOperation (const int & iRank, const int & iMode, CATListOfDouble *& ipDOF, CATMathTransformation & iTCPTransfo) ; \
virtual HRESULT ApplySetupOnOperation (CATMathTransformation & iSetupTransfo) ; \
virtual HRESULT GetJogClosureEvent (const int & iClosureEvent) ; \
virtual HRESULT SimulEndOfMove (int iNumberOfDOFElt) ; \


#define ENVTIEdefine_CATIMfgMotionPipeUpdAct(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::UpdateOperation (const int & iRank, const int & iMode, CATListOfDouble *& ipDOF, CATMathTransformation & iTCPTransfo)  \
{ \
return (ENVTIECALL(CATIMfgMotionPipeUpdAct,ENVTIETypeLetter,ENVTIELetter)UpdateOperation (iRank,iMode,ipDOF,iTCPTransfo)); \
} \
HRESULT  ENVTIEName::ApplySetupOnOperation (CATMathTransformation & iSetupTransfo)  \
{ \
return (ENVTIECALL(CATIMfgMotionPipeUpdAct,ENVTIETypeLetter,ENVTIELetter)ApplySetupOnOperation (iSetupTransfo)); \
} \
HRESULT  ENVTIEName::GetJogClosureEvent (const int & iClosureEvent)  \
{ \
return (ENVTIECALL(CATIMfgMotionPipeUpdAct,ENVTIETypeLetter,ENVTIELetter)GetJogClosureEvent (iClosureEvent)); \
} \
HRESULT  ENVTIEName::SimulEndOfMove (int iNumberOfDOFElt)  \
{ \
return (ENVTIECALL(CATIMfgMotionPipeUpdAct,ENVTIETypeLetter,ENVTIELetter)SimulEndOfMove (iNumberOfDOFElt)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgMotionPipeUpdAct(classe)    TIECATIMfgMotionPipeUpdAct##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgMotionPipeUpdAct(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgMotionPipeUpdAct, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgMotionPipeUpdAct, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgMotionPipeUpdAct, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgMotionPipeUpdAct, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgMotionPipeUpdAct, classe) \
 \
HRESULT  TIECATIMfgMotionPipeUpdAct##classe::UpdateOperation (const int & iRank, const int & iMode, CATListOfDouble *& ipDOF, CATMathTransformation & iTCPTransfo)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UpdateOperation (iRank,iMode,ipDOF,iTCPTransfo)); \
} \
HRESULT  TIECATIMfgMotionPipeUpdAct##classe::ApplySetupOnOperation (CATMathTransformation & iSetupTransfo)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ApplySetupOnOperation (iSetupTransfo)); \
} \
HRESULT  TIECATIMfgMotionPipeUpdAct##classe::GetJogClosureEvent (const int & iClosureEvent)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetJogClosureEvent (iClosureEvent)); \
} \
HRESULT  TIECATIMfgMotionPipeUpdAct##classe::SimulEndOfMove (int iNumberOfDOFElt)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SimulEndOfMove (iNumberOfDOFElt)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgMotionPipeUpdAct(classe) \
 \
 \
declare_TIE_CATIMfgMotionPipeUpdAct(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMotionPipeUpdAct##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMotionPipeUpdAct,"CATIMfgMotionPipeUpdAct",CATIMfgMotionPipeUpdAct::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMotionPipeUpdAct(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgMotionPipeUpdAct, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMotionPipeUpdAct##classe(classe::MetaObject(),CATIMfgMotionPipeUpdAct::MetaObject(),(void *)CreateTIECATIMfgMotionPipeUpdAct##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgMotionPipeUpdAct(classe) \
 \
 \
declare_TIE_CATIMfgMotionPipeUpdAct(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMotionPipeUpdAct##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMotionPipeUpdAct,"CATIMfgMotionPipeUpdAct",CATIMfgMotionPipeUpdAct::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMotionPipeUpdAct(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgMotionPipeUpdAct, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMotionPipeUpdAct##classe(classe::MetaObject(),CATIMfgMotionPipeUpdAct::MetaObject(),(void *)CreateTIECATIMfgMotionPipeUpdAct##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgMotionPipeUpdAct(classe) TIE_CATIMfgMotionPipeUpdAct(classe)
#else
#define BOA_CATIMfgMotionPipeUpdAct(classe) CATImplementBOA(CATIMfgMotionPipeUpdAct, classe)
#endif

#endif
