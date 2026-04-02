#ifndef __TIE_CATISamAnalysisSetInit
#define __TIE_CATISamAnalysisSetInit

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamAnalysisSetInit.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamAnalysisSetInit */
#define declare_TIE_CATISamAnalysisSetInit(classe) \
 \
 \
class TIECATISamAnalysisSetInit##classe : public CATISamAnalysisSetInit \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamAnalysisSetInit, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Initialize() ; \
      virtual int CheckAnalysisParent(const CATBaseUnknown* ipiAnalysisParent, SAM_Quality &oQuality) ; \
      virtual HRESULT InitWhenPositioned(const CATBaseUnknown* ipiAnalysisParent) ; \
      virtual HRESULT ReorderInScan(const CATISamAnalysisScan * ipiScan) ; \
      virtual HRESULT Remove(int iForCloseContext) ; \
};



#define ENVTIEdeclare_CATISamAnalysisSetInit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Initialize() ; \
virtual int CheckAnalysisParent(const CATBaseUnknown* ipiAnalysisParent, SAM_Quality &oQuality) ; \
virtual HRESULT InitWhenPositioned(const CATBaseUnknown* ipiAnalysisParent) ; \
virtual HRESULT ReorderInScan(const CATISamAnalysisScan * ipiScan) ; \
virtual HRESULT Remove(int iForCloseContext) ; \


#define ENVTIEdefine_CATISamAnalysisSetInit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Initialize()  \
{ \
return (ENVTIECALL(CATISamAnalysisSetInit,ENVTIETypeLetter,ENVTIELetter)Initialize()); \
} \
int  ENVTIEName::CheckAnalysisParent(const CATBaseUnknown* ipiAnalysisParent, SAM_Quality &oQuality)  \
{ \
return (ENVTIECALL(CATISamAnalysisSetInit,ENVTIETypeLetter,ENVTIELetter)CheckAnalysisParent(ipiAnalysisParent,oQuality)); \
} \
HRESULT  ENVTIEName::InitWhenPositioned(const CATBaseUnknown* ipiAnalysisParent)  \
{ \
return (ENVTIECALL(CATISamAnalysisSetInit,ENVTIETypeLetter,ENVTIELetter)InitWhenPositioned(ipiAnalysisParent)); \
} \
HRESULT  ENVTIEName::ReorderInScan(const CATISamAnalysisScan * ipiScan)  \
{ \
return (ENVTIECALL(CATISamAnalysisSetInit,ENVTIETypeLetter,ENVTIELetter)ReorderInScan(ipiScan)); \
} \
HRESULT  ENVTIEName::Remove(int iForCloseContext)  \
{ \
return (ENVTIECALL(CATISamAnalysisSetInit,ENVTIETypeLetter,ENVTIELetter)Remove(iForCloseContext)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamAnalysisSetInit(classe)    TIECATISamAnalysisSetInit##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamAnalysisSetInit(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamAnalysisSetInit, classe) \
 \
 \
CATImplementTIEMethods(CATISamAnalysisSetInit, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamAnalysisSetInit, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamAnalysisSetInit, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamAnalysisSetInit, classe) \
 \
HRESULT  TIECATISamAnalysisSetInit##classe::Initialize()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Initialize()); \
} \
int  TIECATISamAnalysisSetInit##classe::CheckAnalysisParent(const CATBaseUnknown* ipiAnalysisParent, SAM_Quality &oQuality)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CheckAnalysisParent(ipiAnalysisParent,oQuality)); \
} \
HRESULT  TIECATISamAnalysisSetInit##classe::InitWhenPositioned(const CATBaseUnknown* ipiAnalysisParent)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InitWhenPositioned(ipiAnalysisParent)); \
} \
HRESULT  TIECATISamAnalysisSetInit##classe::ReorderInScan(const CATISamAnalysisScan * ipiScan)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReorderInScan(ipiScan)); \
} \
HRESULT  TIECATISamAnalysisSetInit##classe::Remove(int iForCloseContext)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iForCloseContext)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamAnalysisSetInit(classe) \
 \
 \
declare_TIE_CATISamAnalysisSetInit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamAnalysisSetInit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamAnalysisSetInit,"CATISamAnalysisSetInit",CATISamAnalysisSetInit::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamAnalysisSetInit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamAnalysisSetInit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamAnalysisSetInit##classe(classe::MetaObject(),CATISamAnalysisSetInit::MetaObject(),(void *)CreateTIECATISamAnalysisSetInit##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamAnalysisSetInit(classe) \
 \
 \
declare_TIE_CATISamAnalysisSetInit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamAnalysisSetInit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamAnalysisSetInit,"CATISamAnalysisSetInit",CATISamAnalysisSetInit::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamAnalysisSetInit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamAnalysisSetInit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamAnalysisSetInit##classe(classe::MetaObject(),CATISamAnalysisSetInit::MetaObject(),(void *)CreateTIECATISamAnalysisSetInit##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamAnalysisSetInit(classe) TIE_CATISamAnalysisSetInit(classe)
#else
#define BOA_CATISamAnalysisSetInit(classe) CATImplementBOA(CATISamAnalysisSetInit, classe)
#endif

#endif
