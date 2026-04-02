#ifndef __TIE_CATISweptAble
#define __TIE_CATISweptAble

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISweptAble.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISweptAble */
#define declare_TIE_CATISweptAble(classe) \
 \
 \
class TIECATISweptAble##classe : public CATISweptAble \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISweptAble, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetMovingProducts (CATIAProduct **& oProductsToSwept, int& oNbProducts); \
      virtual HRESULT GetDuration (double& oDuration); \
      virtual HRESULT SetCurrentTime (double iTime); \
      virtual HRESULT GetNextTime (double& iTime); \
      virtual HRESULT GetCurrentPosition (int iProductIndex, CATMathTransformation &Matrice); \
      virtual HRESULT Clean(); \
      virtual HRESULT GetMovingElements (CATBaseUnknown **& oElementsToSwept, int& oNbElements); \
};



#define ENVTIEdeclare_CATISweptAble(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetMovingProducts (CATIAProduct **& oProductsToSwept, int& oNbProducts); \
virtual HRESULT GetDuration (double& oDuration); \
virtual HRESULT SetCurrentTime (double iTime); \
virtual HRESULT GetNextTime (double& iTime); \
virtual HRESULT GetCurrentPosition (int iProductIndex, CATMathTransformation &Matrice); \
virtual HRESULT Clean(); \
virtual HRESULT GetMovingElements (CATBaseUnknown **& oElementsToSwept, int& oNbElements); \


#define ENVTIEdefine_CATISweptAble(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetMovingProducts (CATIAProduct **& oProductsToSwept, int& oNbProducts) \
{ \
return (ENVTIECALL(CATISweptAble,ENVTIETypeLetter,ENVTIELetter)GetMovingProducts (oProductsToSwept,oNbProducts)); \
} \
HRESULT  ENVTIEName::GetDuration (double& oDuration) \
{ \
return (ENVTIECALL(CATISweptAble,ENVTIETypeLetter,ENVTIELetter)GetDuration (oDuration)); \
} \
HRESULT  ENVTIEName::SetCurrentTime (double iTime) \
{ \
return (ENVTIECALL(CATISweptAble,ENVTIETypeLetter,ENVTIELetter)SetCurrentTime (iTime)); \
} \
HRESULT  ENVTIEName::GetNextTime (double& iTime) \
{ \
return (ENVTIECALL(CATISweptAble,ENVTIETypeLetter,ENVTIELetter)GetNextTime (iTime)); \
} \
HRESULT  ENVTIEName::GetCurrentPosition (int iProductIndex, CATMathTransformation &Matrice) \
{ \
return (ENVTIECALL(CATISweptAble,ENVTIETypeLetter,ENVTIELetter)GetCurrentPosition (iProductIndex,Matrice)); \
} \
HRESULT  ENVTIEName::Clean() \
{ \
return (ENVTIECALL(CATISweptAble,ENVTIETypeLetter,ENVTIELetter)Clean()); \
} \
HRESULT  ENVTIEName::GetMovingElements (CATBaseUnknown **& oElementsToSwept, int& oNbElements) \
{ \
return (ENVTIECALL(CATISweptAble,ENVTIETypeLetter,ENVTIELetter)GetMovingElements (oElementsToSwept,oNbElements)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISweptAble(classe)    TIECATISweptAble##classe


/* Common methods inside a TIE */
#define common_TIE_CATISweptAble(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISweptAble, classe) \
 \
 \
CATImplementTIEMethods(CATISweptAble, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISweptAble, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISweptAble, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISweptAble, classe) \
 \
HRESULT  TIECATISweptAble##classe::GetMovingProducts (CATIAProduct **& oProductsToSwept, int& oNbProducts) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMovingProducts (oProductsToSwept,oNbProducts)); \
} \
HRESULT  TIECATISweptAble##classe::GetDuration (double& oDuration) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDuration (oDuration)); \
} \
HRESULT  TIECATISweptAble##classe::SetCurrentTime (double iTime) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCurrentTime (iTime)); \
} \
HRESULT  TIECATISweptAble##classe::GetNextTime (double& iTime) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNextTime (iTime)); \
} \
HRESULT  TIECATISweptAble##classe::GetCurrentPosition (int iProductIndex, CATMathTransformation &Matrice) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCurrentPosition (iProductIndex,Matrice)); \
} \
HRESULT  TIECATISweptAble##classe::Clean() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Clean()); \
} \
HRESULT  TIECATISweptAble##classe::GetMovingElements (CATBaseUnknown **& oElementsToSwept, int& oNbElements) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMovingElements (oElementsToSwept,oNbElements)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISweptAble(classe) \
 \
 \
declare_TIE_CATISweptAble(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISweptAble##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISweptAble,"CATISweptAble",CATISweptAble::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISweptAble(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISweptAble, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISweptAble##classe(classe::MetaObject(),CATISweptAble::MetaObject(),(void *)CreateTIECATISweptAble##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISweptAble(classe) \
 \
 \
declare_TIE_CATISweptAble(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISweptAble##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISweptAble,"CATISweptAble",CATISweptAble::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISweptAble(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISweptAble, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISweptAble##classe(classe::MetaObject(),CATISweptAble::MetaObject(),(void *)CreateTIECATISweptAble##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISweptAble(classe) TIE_CATISweptAble(classe)
#else
#define BOA_CATISweptAble(classe) CATImplementBOA(CATISweptAble, classe)
#endif

#endif
