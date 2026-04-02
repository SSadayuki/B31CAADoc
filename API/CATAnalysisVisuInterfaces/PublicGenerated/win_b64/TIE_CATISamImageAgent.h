#ifndef __TIE_CATISamImageAgent
#define __TIE_CATISamImageAgent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamImageAgent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamImageAgent */
#define declare_TIE_CATISamImageAgent(classe) \
 \
 \
class TIECATISamImageAgent##classe : public CATISamImageAgent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamImageAgent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Init (  ) ; \
      virtual HRESULT Clean (  ) ; \
      virtual HRESULT GetNbFrames ( int & oNbFrames ) ; \
      virtual HRESULT SetCurrentFrame ( const int iCurrentFrame ) ; \
      virtual HRESULT SetMode ( const CATSamAnimationMode iMode ) ; \
      virtual HRESULT SetInterpolationFluidity ( const int iFluidity ) ; \
      virtual HRESULT Apply ( ) ; \
};



#define ENVTIEdeclare_CATISamImageAgent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Init (  ) ; \
virtual HRESULT Clean (  ) ; \
virtual HRESULT GetNbFrames ( int & oNbFrames ) ; \
virtual HRESULT SetCurrentFrame ( const int iCurrentFrame ) ; \
virtual HRESULT SetMode ( const CATSamAnimationMode iMode ) ; \
virtual HRESULT SetInterpolationFluidity ( const int iFluidity ) ; \
virtual HRESULT Apply ( ) ; \


#define ENVTIEdefine_CATISamImageAgent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Init (  )  \
{ \
return (ENVTIECALL(CATISamImageAgent,ENVTIETypeLetter,ENVTIELetter)Init ()); \
} \
HRESULT  ENVTIEName::Clean (  )  \
{ \
return (ENVTIECALL(CATISamImageAgent,ENVTIETypeLetter,ENVTIELetter)Clean ()); \
} \
HRESULT  ENVTIEName::GetNbFrames ( int & oNbFrames )  \
{ \
return (ENVTIECALL(CATISamImageAgent,ENVTIETypeLetter,ENVTIELetter)GetNbFrames (oNbFrames )); \
} \
HRESULT  ENVTIEName::SetCurrentFrame ( const int iCurrentFrame )  \
{ \
return (ENVTIECALL(CATISamImageAgent,ENVTIETypeLetter,ENVTIELetter)SetCurrentFrame (iCurrentFrame )); \
} \
HRESULT  ENVTIEName::SetMode ( const CATSamAnimationMode iMode )  \
{ \
return (ENVTIECALL(CATISamImageAgent,ENVTIETypeLetter,ENVTIELetter)SetMode (iMode )); \
} \
HRESULT  ENVTIEName::SetInterpolationFluidity ( const int iFluidity )  \
{ \
return (ENVTIECALL(CATISamImageAgent,ENVTIETypeLetter,ENVTIELetter)SetInterpolationFluidity (iFluidity )); \
} \
HRESULT  ENVTIEName::Apply ( )  \
{ \
return (ENVTIECALL(CATISamImageAgent,ENVTIETypeLetter,ENVTIELetter)Apply ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamImageAgent(classe)    TIECATISamImageAgent##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamImageAgent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamImageAgent, classe) \
 \
 \
CATImplementTIEMethods(CATISamImageAgent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamImageAgent, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamImageAgent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamImageAgent, classe) \
 \
HRESULT  TIECATISamImageAgent##classe::Init (  )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Init ()); \
} \
HRESULT  TIECATISamImageAgent##classe::Clean (  )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Clean ()); \
} \
HRESULT  TIECATISamImageAgent##classe::GetNbFrames ( int & oNbFrames )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbFrames (oNbFrames )); \
} \
HRESULT  TIECATISamImageAgent##classe::SetCurrentFrame ( const int iCurrentFrame )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCurrentFrame (iCurrentFrame )); \
} \
HRESULT  TIECATISamImageAgent##classe::SetMode ( const CATSamAnimationMode iMode )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMode (iMode )); \
} \
HRESULT  TIECATISamImageAgent##classe::SetInterpolationFluidity ( const int iFluidity )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetInterpolationFluidity (iFluidity )); \
} \
HRESULT  TIECATISamImageAgent##classe::Apply ( )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Apply ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamImageAgent(classe) \
 \
 \
declare_TIE_CATISamImageAgent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamImageAgent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamImageAgent,"CATISamImageAgent",CATISamImageAgent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamImageAgent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamImageAgent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamImageAgent##classe(classe::MetaObject(),CATISamImageAgent::MetaObject(),(void *)CreateTIECATISamImageAgent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamImageAgent(classe) \
 \
 \
declare_TIE_CATISamImageAgent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamImageAgent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamImageAgent,"CATISamImageAgent",CATISamImageAgent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamImageAgent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamImageAgent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamImageAgent##classe(classe::MetaObject(),CATISamImageAgent::MetaObject(),(void *)CreateTIECATISamImageAgent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamImageAgent(classe) TIE_CATISamImageAgent(classe)
#else
#define BOA_CATISamImageAgent(classe) CATImplementBOA(CATISamImageAgent, classe)
#endif

#endif
