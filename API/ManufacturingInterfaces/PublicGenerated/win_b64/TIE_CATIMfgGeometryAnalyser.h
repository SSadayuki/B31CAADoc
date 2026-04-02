#ifndef __TIE_CATIMfgGeometryAnalyser
#define __TIE_CATIMfgGeometryAnalyser

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgGeometryAnalyser.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgGeometryAnalyser */
#define declare_TIE_CATIMfgGeometryAnalyser(classe) \
 \
 \
class TIECATIMfgGeometryAnalyser##classe : public CATIMfgGeometryAnalyser \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgGeometryAnalyser, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetStyle (const CATString &iContext, int &oStyle); \
      virtual HRESULT GetGeometries (const CATString &iContext, CATListValCATBaseUnknown_var & oGeometries); \
      virtual HRESULT RemoveGeometries (const CATString &iContext); \
};



#define ENVTIEdeclare_CATIMfgGeometryAnalyser(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetStyle (const CATString &iContext, int &oStyle); \
virtual HRESULT GetGeometries (const CATString &iContext, CATListValCATBaseUnknown_var & oGeometries); \
virtual HRESULT RemoveGeometries (const CATString &iContext); \


#define ENVTIEdefine_CATIMfgGeometryAnalyser(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetStyle (const CATString &iContext, int &oStyle) \
{ \
return (ENVTIECALL(CATIMfgGeometryAnalyser,ENVTIETypeLetter,ENVTIELetter)GetStyle (iContext,oStyle)); \
} \
HRESULT  ENVTIEName::GetGeometries (const CATString &iContext, CATListValCATBaseUnknown_var & oGeometries) \
{ \
return (ENVTIECALL(CATIMfgGeometryAnalyser,ENVTIETypeLetter,ENVTIELetter)GetGeometries (iContext,oGeometries)); \
} \
HRESULT  ENVTIEName::RemoveGeometries (const CATString &iContext) \
{ \
return (ENVTIECALL(CATIMfgGeometryAnalyser,ENVTIETypeLetter,ENVTIELetter)RemoveGeometries (iContext)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgGeometryAnalyser(classe)    TIECATIMfgGeometryAnalyser##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgGeometryAnalyser(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgGeometryAnalyser, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgGeometryAnalyser, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgGeometryAnalyser, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgGeometryAnalyser, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgGeometryAnalyser, classe) \
 \
HRESULT  TIECATIMfgGeometryAnalyser##classe::GetStyle (const CATString &iContext, int &oStyle) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStyle (iContext,oStyle)); \
} \
HRESULT  TIECATIMfgGeometryAnalyser##classe::GetGeometries (const CATString &iContext, CATListValCATBaseUnknown_var & oGeometries) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGeometries (iContext,oGeometries)); \
} \
HRESULT  TIECATIMfgGeometryAnalyser##classe::RemoveGeometries (const CATString &iContext) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveGeometries (iContext)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgGeometryAnalyser(classe) \
 \
 \
declare_TIE_CATIMfgGeometryAnalyser(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgGeometryAnalyser##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgGeometryAnalyser,"CATIMfgGeometryAnalyser",CATIMfgGeometryAnalyser::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgGeometryAnalyser(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgGeometryAnalyser, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgGeometryAnalyser##classe(classe::MetaObject(),CATIMfgGeometryAnalyser::MetaObject(),(void *)CreateTIECATIMfgGeometryAnalyser##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgGeometryAnalyser(classe) \
 \
 \
declare_TIE_CATIMfgGeometryAnalyser(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgGeometryAnalyser##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgGeometryAnalyser,"CATIMfgGeometryAnalyser",CATIMfgGeometryAnalyser::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgGeometryAnalyser(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgGeometryAnalyser, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgGeometryAnalyser##classe(classe::MetaObject(),CATIMfgGeometryAnalyser::MetaObject(),(void *)CreateTIECATIMfgGeometryAnalyser##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgGeometryAnalyser(classe) TIE_CATIMfgGeometryAnalyser(classe)
#else
#define BOA_CATIMfgGeometryAnalyser(classe) CATImplementBOA(CATIMfgGeometryAnalyser, classe)
#endif

#endif
