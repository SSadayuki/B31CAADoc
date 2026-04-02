#ifndef __TIE_CATIMfgToolAssembly3DVisuCustom
#define __TIE_CATIMfgToolAssembly3DVisuCustom

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgToolAssembly3DVisuCustom.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgToolAssembly3DVisuCustom */
#define declare_TIE_CATIMfgToolAssembly3DVisuCustom(classe) \
 \
 \
class TIECATIMfgToolAssembly3DVisuCustom##classe : public CATIMfgToolAssembly3DVisuCustom \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgToolAssembly3DVisuCustom, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATRep* BuildRep() ; \
      virtual HRESULT SetLocation(const CATMathPoint& iTipPoint, const CATMathVector& iAxis, CAT3DBagRep* iBagRep, const CATMathVector* ipRadial = 0) ; \
};



#define ENVTIEdeclare_CATIMfgToolAssembly3DVisuCustom(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATRep* BuildRep() ; \
virtual HRESULT SetLocation(const CATMathPoint& iTipPoint, const CATMathVector& iAxis, CAT3DBagRep* iBagRep, const CATMathVector* ipRadial = 0) ; \


#define ENVTIEdefine_CATIMfgToolAssembly3DVisuCustom(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATRep*  ENVTIEName::BuildRep()  \
{ \
return (ENVTIECALL(CATIMfgToolAssembly3DVisuCustom,ENVTIETypeLetter,ENVTIELetter)BuildRep()); \
} \
HRESULT  ENVTIEName::SetLocation(const CATMathPoint& iTipPoint, const CATMathVector& iAxis, CAT3DBagRep* iBagRep, const CATMathVector* ipRadial )  \
{ \
return (ENVTIECALL(CATIMfgToolAssembly3DVisuCustom,ENVTIETypeLetter,ENVTIELetter)SetLocation(iTipPoint,iAxis,iBagRep,ipRadial )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgToolAssembly3DVisuCustom(classe)    TIECATIMfgToolAssembly3DVisuCustom##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgToolAssembly3DVisuCustom(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgToolAssembly3DVisuCustom, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgToolAssembly3DVisuCustom, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgToolAssembly3DVisuCustom, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgToolAssembly3DVisuCustom, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgToolAssembly3DVisuCustom, classe) \
 \
CATRep*  TIECATIMfgToolAssembly3DVisuCustom##classe::BuildRep()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildRep()); \
} \
HRESULT  TIECATIMfgToolAssembly3DVisuCustom##classe::SetLocation(const CATMathPoint& iTipPoint, const CATMathVector& iAxis, CAT3DBagRep* iBagRep, const CATMathVector* ipRadial )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLocation(iTipPoint,iAxis,iBagRep,ipRadial )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgToolAssembly3DVisuCustom(classe) \
 \
 \
declare_TIE_CATIMfgToolAssembly3DVisuCustom(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgToolAssembly3DVisuCustom##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgToolAssembly3DVisuCustom,"CATIMfgToolAssembly3DVisuCustom",CATIMfgToolAssembly3DVisuCustom::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgToolAssembly3DVisuCustom(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgToolAssembly3DVisuCustom, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgToolAssembly3DVisuCustom##classe(classe::MetaObject(),CATIMfgToolAssembly3DVisuCustom::MetaObject(),(void *)CreateTIECATIMfgToolAssembly3DVisuCustom##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgToolAssembly3DVisuCustom(classe) \
 \
 \
declare_TIE_CATIMfgToolAssembly3DVisuCustom(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgToolAssembly3DVisuCustom##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgToolAssembly3DVisuCustom,"CATIMfgToolAssembly3DVisuCustom",CATIMfgToolAssembly3DVisuCustom::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgToolAssembly3DVisuCustom(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgToolAssembly3DVisuCustom, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgToolAssembly3DVisuCustom##classe(classe::MetaObject(),CATIMfgToolAssembly3DVisuCustom::MetaObject(),(void *)CreateTIECATIMfgToolAssembly3DVisuCustom##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgToolAssembly3DVisuCustom(classe) TIE_CATIMfgToolAssembly3DVisuCustom(classe)
#else
#define BOA_CATIMfgToolAssembly3DVisuCustom(classe) CATImplementBOA(CATIMfgToolAssembly3DVisuCustom, classe)
#endif

#endif
