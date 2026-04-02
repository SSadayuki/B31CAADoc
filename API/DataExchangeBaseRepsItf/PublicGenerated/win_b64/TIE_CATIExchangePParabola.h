#ifndef __TIE_CATIExchangePParabola
#define __TIE_CATIExchangePParabola

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangePParabola.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangePParabola */
#define declare_TIE_CATIExchangePParabola(classe) \
 \
 \
class TIECATIExchangePParabola##classe : public CATIExchangePParabola \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangePParabola, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetPParabolaData(double oVertex[2], double oFocusAxis[2] ) const ; \
};



#define ENVTIEdeclare_CATIExchangePParabola(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetPParabolaData(double oVertex[2], double oFocusAxis[2] ) const ; \


#define ENVTIEdefine_CATIExchangePParabola(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetPParabolaData(double oVertex[2], double oFocusAxis[2] ) const  \
{ \
return (ENVTIECALL(CATIExchangePParabola,ENVTIETypeLetter,ENVTIELetter)GetPParabolaData(oVertex,oFocusAxis)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangePParabola(classe)    TIECATIExchangePParabola##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangePParabola(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangePParabola, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangePParabola, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangePParabola, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangePParabola, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangePParabola, classe) \
 \
HRESULT  TIECATIExchangePParabola##classe::GetPParabolaData(double oVertex[2], double oFocusAxis[2] ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPParabolaData(oVertex,oFocusAxis)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangePParabola(classe) \
 \
 \
declare_TIE_CATIExchangePParabola(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangePParabola##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangePParabola,"CATIExchangePParabola",CATIExchangePParabola::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangePParabola(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangePParabola, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangePParabola##classe(classe::MetaObject(),CATIExchangePParabola::MetaObject(),(void *)CreateTIECATIExchangePParabola##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangePParabola(classe) \
 \
 \
declare_TIE_CATIExchangePParabola(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangePParabola##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangePParabola,"CATIExchangePParabola",CATIExchangePParabola::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangePParabola(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangePParabola, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangePParabola##classe(classe::MetaObject(),CATIExchangePParabola::MetaObject(),(void *)CreateTIECATIExchangePParabola##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangePParabola(classe) TIE_CATIExchangePParabola(classe)
#else
#define BOA_CATIExchangePParabola(classe) CATImplementBOA(CATIExchangePParabola, classe)
#endif

#endif
