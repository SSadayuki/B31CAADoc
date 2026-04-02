#ifndef __TIE_CATIExchangeVertex
#define __TIE_CATIExchangeVertex

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeVertex.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeVertex */
#define declare_TIE_CATIExchangeVertex(classe) \
 \
 \
class TIECATIExchangeVertex##classe : public CATIExchangeVertex \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeVertex, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetPoint(double oPoint[3]) const ; \
};



#define ENVTIEdeclare_CATIExchangeVertex(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetPoint(double oPoint[3]) const ; \


#define ENVTIEdefine_CATIExchangeVertex(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetPoint(double oPoint[3]) const  \
{ \
return (ENVTIECALL(CATIExchangeVertex,ENVTIETypeLetter,ENVTIELetter)GetPoint(oPoint)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeVertex(classe)    TIECATIExchangeVertex##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeVertex(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeVertex, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeVertex, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeVertex, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeVertex, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeVertex, classe) \
 \
HRESULT  TIECATIExchangeVertex##classe::GetPoint(double oPoint[3]) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPoint(oPoint)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeVertex(classe) \
 \
 \
declare_TIE_CATIExchangeVertex(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeVertex##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeVertex,"CATIExchangeVertex",CATIExchangeVertex::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeVertex(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeVertex, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeVertex##classe(classe::MetaObject(),CATIExchangeVertex::MetaObject(),(void *)CreateTIECATIExchangeVertex##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeVertex(classe) \
 \
 \
declare_TIE_CATIExchangeVertex(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeVertex##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeVertex,"CATIExchangeVertex",CATIExchangeVertex::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeVertex(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeVertex, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeVertex##classe(classe::MetaObject(),CATIExchangeVertex::MetaObject(),(void *)CreateTIECATIExchangeVertex##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeVertex(classe) TIE_CATIExchangeVertex(classe)
#else
#define BOA_CATIExchangeVertex(classe) CATImplementBOA(CATIExchangeVertex, classe)
#endif

#endif
