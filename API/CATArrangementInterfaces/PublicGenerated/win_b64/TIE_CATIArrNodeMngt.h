#ifndef __TIE_CATIArrNodeMngt
#define __TIE_CATIArrNodeMngt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIArrNodeMngt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIArrNodeMngt */
#define declare_TIE_CATIArrNodeMngt(classe) \
 \
 \
class TIECATIArrNodeMngt##classe : public CATIArrNodeMngt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIArrNodeMngt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT SetPoint(const CATIMovable_var & ihRelAxis, const CATMathPoint & iPoint ) ; \
};



#define ENVTIEdeclare_CATIArrNodeMngt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT SetPoint(const CATIMovable_var & ihRelAxis, const CATMathPoint & iPoint ) ; \


#define ENVTIEdefine_CATIArrNodeMngt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::SetPoint(const CATIMovable_var & ihRelAxis, const CATMathPoint & iPoint )  \
{ \
return (ENVTIECALL(CATIArrNodeMngt,ENVTIETypeLetter,ENVTIELetter)SetPoint(ihRelAxis,iPoint )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIArrNodeMngt(classe)    TIECATIArrNodeMngt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIArrNodeMngt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIArrNodeMngt, classe) \
 \
 \
CATImplementTIEMethods(CATIArrNodeMngt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIArrNodeMngt, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIArrNodeMngt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIArrNodeMngt, classe) \
 \
HRESULT  TIECATIArrNodeMngt##classe::SetPoint(const CATIMovable_var & ihRelAxis, const CATMathPoint & iPoint )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPoint(ihRelAxis,iPoint )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIArrNodeMngt(classe) \
 \
 \
declare_TIE_CATIArrNodeMngt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIArrNodeMngt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIArrNodeMngt,"CATIArrNodeMngt",CATIArrNodeMngt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIArrNodeMngt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIArrNodeMngt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIArrNodeMngt##classe(classe::MetaObject(),CATIArrNodeMngt::MetaObject(),(void *)CreateTIECATIArrNodeMngt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIArrNodeMngt(classe) \
 \
 \
declare_TIE_CATIArrNodeMngt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIArrNodeMngt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIArrNodeMngt,"CATIArrNodeMngt",CATIArrNodeMngt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIArrNodeMngt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIArrNodeMngt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIArrNodeMngt##classe(classe::MetaObject(),CATIArrNodeMngt::MetaObject(),(void *)CreateTIECATIArrNodeMngt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIArrNodeMngt(classe) TIE_CATIArrNodeMngt(classe)
#else
#define BOA_CATIArrNodeMngt(classe) CATImplementBOA(CATIArrNodeMngt, classe)
#endif

#endif
