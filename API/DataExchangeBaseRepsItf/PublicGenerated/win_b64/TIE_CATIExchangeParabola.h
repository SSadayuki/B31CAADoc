#ifndef __TIE_CATIExchangeParabola
#define __TIE_CATIExchangeParabola

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeParabola.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeParabola */
#define declare_TIE_CATIExchangeParabola(classe) \
 \
 \
class TIECATIExchangeParabola##classe : public CATIExchangeParabola \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeParabola, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetParabolaData(double oVertex[3], double oAxisVector[3], double oFocusAxis[3] ) const ; \
};



#define ENVTIEdeclare_CATIExchangeParabola(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetParabolaData(double oVertex[3], double oAxisVector[3], double oFocusAxis[3] ) const ; \


#define ENVTIEdefine_CATIExchangeParabola(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetParabolaData(double oVertex[3], double oAxisVector[3], double oFocusAxis[3] ) const  \
{ \
return (ENVTIECALL(CATIExchangeParabola,ENVTIETypeLetter,ENVTIELetter)GetParabolaData(oVertex,oAxisVector,oFocusAxis)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeParabola(classe)    TIECATIExchangeParabola##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeParabola(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeParabola, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeParabola, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeParabola, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeParabola, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeParabola, classe) \
 \
HRESULT  TIECATIExchangeParabola##classe::GetParabolaData(double oVertex[3], double oAxisVector[3], double oFocusAxis[3] ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetParabolaData(oVertex,oAxisVector,oFocusAxis)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeParabola(classe) \
 \
 \
declare_TIE_CATIExchangeParabola(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeParabola##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeParabola,"CATIExchangeParabola",CATIExchangeParabola::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeParabola(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeParabola, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeParabola##classe(classe::MetaObject(),CATIExchangeParabola::MetaObject(),(void *)CreateTIECATIExchangeParabola##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeParabola(classe) \
 \
 \
declare_TIE_CATIExchangeParabola(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeParabola##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeParabola,"CATIExchangeParabola",CATIExchangeParabola::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeParabola(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeParabola, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeParabola##classe(classe::MetaObject(),CATIExchangeParabola::MetaObject(),(void *)CreateTIECATIExchangeParabola##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeParabola(classe) TIE_CATIExchangeParabola(classe)
#else
#define BOA_CATIExchangeParabola(classe) CATImplementBOA(CATIExchangeParabola, classe)
#endif

#endif
