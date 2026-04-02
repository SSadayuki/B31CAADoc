#ifndef __TIE_CATIExchangeTransformation
#define __TIE_CATIExchangeTransformation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeTransformation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeTransformation */
#define declare_TIE_CATIExchangeTransformation(classe) \
 \
 \
class TIECATIExchangeTransformation##classe : public CATIExchangeTransformation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeTransformation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetTransformation(double oRot[3][3], double oTrans[3]) const ; \
};



#define ENVTIEdeclare_CATIExchangeTransformation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetTransformation(double oRot[3][3], double oTrans[3]) const ; \


#define ENVTIEdefine_CATIExchangeTransformation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetTransformation(double oRot[3][3], double oTrans[3]) const  \
{ \
return (ENVTIECALL(CATIExchangeTransformation,ENVTIETypeLetter,ENVTIELetter)GetTransformation(oRot,oTrans)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeTransformation(classe)    TIECATIExchangeTransformation##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeTransformation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeTransformation, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeTransformation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeTransformation, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeTransformation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeTransformation, classe) \
 \
HRESULT  TIECATIExchangeTransformation##classe::GetTransformation(double oRot[3][3], double oTrans[3]) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTransformation(oRot,oTrans)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeTransformation(classe) \
 \
 \
declare_TIE_CATIExchangeTransformation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeTransformation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeTransformation,"CATIExchangeTransformation",CATIExchangeTransformation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeTransformation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeTransformation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeTransformation##classe(classe::MetaObject(),CATIExchangeTransformation::MetaObject(),(void *)CreateTIECATIExchangeTransformation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeTransformation(classe) \
 \
 \
declare_TIE_CATIExchangeTransformation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeTransformation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeTransformation,"CATIExchangeTransformation",CATIExchangeTransformation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeTransformation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeTransformation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeTransformation##classe(classe::MetaObject(),CATIExchangeTransformation::MetaObject(),(void *)CreateTIECATIExchangeTransformation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeTransformation(classe) TIE_CATIExchangeTransformation(classe)
#else
#define BOA_CATIExchangeTransformation(classe) CATImplementBOA(CATIExchangeTransformation, classe)
#endif

#endif
