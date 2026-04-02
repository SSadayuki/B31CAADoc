#ifndef __TIE_CATIDftGenSRSymbol
#define __TIE_CATIDftGenSRSymbol

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIDftGenSRSymbol.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIDftGenSRSymbol */
#define declare_TIE_CATIDftGenSRSymbol(classe) \
 \
 \
class TIECATIDftGenSRSymbol##classe : public CATIDftGenSRSymbol \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIDftGenSRSymbol, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT SetDetail (CATI2DDetail* iDetail) ; \
      virtual HRESULT GetDetail (CATI2DDetail** oDetail) ; \
      virtual HRESULT SetAnchorPoint (const CATMathPoint& iPoint) ; \
      virtual HRESULT GetAnchorPoint (CATMathPoint* oPoint) ; \
      virtual HRESULT SetOrientation (const CATMathVector& iVecX, const CATMathVector& iVecY) ; \
      virtual HRESULT GetOrientation (CATMathVector* oVecX, CATMathVector* oVecY) ; \
      virtual HRESULT SetScalingPolicy (int iNumber) ; \
      virtual HRESULT GetScalingPolicy (int* oNumber) ; \
      virtual HRESULT SetScale (double iScale) ; \
      virtual HRESULT GetScale (double* oScale) ; \
      virtual HRESULT SetGraphicProperties (const CATVisPropertiesValues& iProp) ; \
      virtual HRESULT GetGraphicProperties (CATVisPropertiesValues* oProp) ; \
};



#define ENVTIEdeclare_CATIDftGenSRSymbol(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT SetDetail (CATI2DDetail* iDetail) ; \
virtual HRESULT GetDetail (CATI2DDetail** oDetail) ; \
virtual HRESULT SetAnchorPoint (const CATMathPoint& iPoint) ; \
virtual HRESULT GetAnchorPoint (CATMathPoint* oPoint) ; \
virtual HRESULT SetOrientation (const CATMathVector& iVecX, const CATMathVector& iVecY) ; \
virtual HRESULT GetOrientation (CATMathVector* oVecX, CATMathVector* oVecY) ; \
virtual HRESULT SetScalingPolicy (int iNumber) ; \
virtual HRESULT GetScalingPolicy (int* oNumber) ; \
virtual HRESULT SetScale (double iScale) ; \
virtual HRESULT GetScale (double* oScale) ; \
virtual HRESULT SetGraphicProperties (const CATVisPropertiesValues& iProp) ; \
virtual HRESULT GetGraphicProperties (CATVisPropertiesValues* oProp) ; \


#define ENVTIEdefine_CATIDftGenSRSymbol(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::SetDetail (CATI2DDetail* iDetail)  \
{ \
return (ENVTIECALL(CATIDftGenSRSymbol,ENVTIETypeLetter,ENVTIELetter)SetDetail (iDetail)); \
} \
HRESULT  ENVTIEName::GetDetail (CATI2DDetail** oDetail)  \
{ \
return (ENVTIECALL(CATIDftGenSRSymbol,ENVTIETypeLetter,ENVTIELetter)GetDetail (oDetail)); \
} \
HRESULT  ENVTIEName::SetAnchorPoint (const CATMathPoint& iPoint)  \
{ \
return (ENVTIECALL(CATIDftGenSRSymbol,ENVTIETypeLetter,ENVTIELetter)SetAnchorPoint (iPoint)); \
} \
HRESULT  ENVTIEName::GetAnchorPoint (CATMathPoint* oPoint)  \
{ \
return (ENVTIECALL(CATIDftGenSRSymbol,ENVTIETypeLetter,ENVTIELetter)GetAnchorPoint (oPoint)); \
} \
HRESULT  ENVTIEName::SetOrientation (const CATMathVector& iVecX, const CATMathVector& iVecY)  \
{ \
return (ENVTIECALL(CATIDftGenSRSymbol,ENVTIETypeLetter,ENVTIELetter)SetOrientation (iVecX,iVecY)); \
} \
HRESULT  ENVTIEName::GetOrientation (CATMathVector* oVecX, CATMathVector* oVecY)  \
{ \
return (ENVTIECALL(CATIDftGenSRSymbol,ENVTIETypeLetter,ENVTIELetter)GetOrientation (oVecX,oVecY)); \
} \
HRESULT  ENVTIEName::SetScalingPolicy (int iNumber)  \
{ \
return (ENVTIECALL(CATIDftGenSRSymbol,ENVTIETypeLetter,ENVTIELetter)SetScalingPolicy (iNumber)); \
} \
HRESULT  ENVTIEName::GetScalingPolicy (int* oNumber)  \
{ \
return (ENVTIECALL(CATIDftGenSRSymbol,ENVTIETypeLetter,ENVTIELetter)GetScalingPolicy (oNumber)); \
} \
HRESULT  ENVTIEName::SetScale (double iScale)  \
{ \
return (ENVTIECALL(CATIDftGenSRSymbol,ENVTIETypeLetter,ENVTIELetter)SetScale (iScale)); \
} \
HRESULT  ENVTIEName::GetScale (double* oScale)  \
{ \
return (ENVTIECALL(CATIDftGenSRSymbol,ENVTIETypeLetter,ENVTIELetter)GetScale (oScale)); \
} \
HRESULT  ENVTIEName::SetGraphicProperties (const CATVisPropertiesValues& iProp)  \
{ \
return (ENVTIECALL(CATIDftGenSRSymbol,ENVTIETypeLetter,ENVTIELetter)SetGraphicProperties (iProp)); \
} \
HRESULT  ENVTIEName::GetGraphicProperties (CATVisPropertiesValues* oProp)  \
{ \
return (ENVTIECALL(CATIDftGenSRSymbol,ENVTIETypeLetter,ENVTIELetter)GetGraphicProperties (oProp)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIDftGenSRSymbol(classe)    TIECATIDftGenSRSymbol##classe


/* Common methods inside a TIE */
#define common_TIE_CATIDftGenSRSymbol(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIDftGenSRSymbol, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATIDftGenSRSymbol, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATIDftGenSRSymbol, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATIDftGenSRSymbol, classe) \
 \
HRESULT  TIECATIDftGenSRSymbol##classe::SetDetail (CATI2DDetail* iDetail)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDetail (iDetail)); \
} \
HRESULT  TIECATIDftGenSRSymbol##classe::GetDetail (CATI2DDetail** oDetail)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDetail (oDetail)); \
} \
HRESULT  TIECATIDftGenSRSymbol##classe::SetAnchorPoint (const CATMathPoint& iPoint)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAnchorPoint (iPoint)); \
} \
HRESULT  TIECATIDftGenSRSymbol##classe::GetAnchorPoint (CATMathPoint* oPoint)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnchorPoint (oPoint)); \
} \
HRESULT  TIECATIDftGenSRSymbol##classe::SetOrientation (const CATMathVector& iVecX, const CATMathVector& iVecY)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOrientation (iVecX,iVecY)); \
} \
HRESULT  TIECATIDftGenSRSymbol##classe::GetOrientation (CATMathVector* oVecX, CATMathVector* oVecY)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrientation (oVecX,oVecY)); \
} \
HRESULT  TIECATIDftGenSRSymbol##classe::SetScalingPolicy (int iNumber)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetScalingPolicy (iNumber)); \
} \
HRESULT  TIECATIDftGenSRSymbol##classe::GetScalingPolicy (int* oNumber)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetScalingPolicy (oNumber)); \
} \
HRESULT  TIECATIDftGenSRSymbol##classe::SetScale (double iScale)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetScale (iScale)); \
} \
HRESULT  TIECATIDftGenSRSymbol##classe::GetScale (double* oScale)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetScale (oScale)); \
} \
HRESULT  TIECATIDftGenSRSymbol##classe::SetGraphicProperties (const CATVisPropertiesValues& iProp)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGraphicProperties (iProp)); \
} \
HRESULT  TIECATIDftGenSRSymbol##classe::GetGraphicProperties (CATVisPropertiesValues* oProp)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGraphicProperties (oProp)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIDftGenSRSymbol(classe) \
 \
 \
declare_TIE_CATIDftGenSRSymbol(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDftGenSRSymbol##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDftGenSRSymbol,"CATIDftGenSRSymbol",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDftGenSRSymbol(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIDftGenSRSymbol, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDftGenSRSymbol##classe(classe::MetaObject(),TIECATIDftGenSRSymbol##classe::MetaObject(),(void *)CreateTIECATIDftGenSRSymbol##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIDftGenSRSymbol(classe) \
 \
 \
declare_TIE_CATIDftGenSRSymbol(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDftGenSRSymbol##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDftGenSRSymbol,"CATIDftGenSRSymbol",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDftGenSRSymbol(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIDftGenSRSymbol, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDftGenSRSymbol##classe(classe::MetaObject(),TIECATIDftGenSRSymbol##classe::MetaObject(),(void *)CreateTIECATIDftGenSRSymbol##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIDftGenSRSymbol(classe) TIE_CATIDftGenSRSymbol(classe)
#else
#define BOA_CATIDftGenSRSymbol(classe) CATImplementBOA(CATIDftGenSRSymbol, classe)
#endif

#endif
