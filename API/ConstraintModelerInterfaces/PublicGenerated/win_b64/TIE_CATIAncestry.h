#ifndef __TIE_CATIAncestry
#define __TIE_CATIAncestry

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAncestry.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAncestry */
#define declare_TIE_CATIAncestry(classe) \
 \
 \
class TIECATIAncestry##classe : public CATIAncestry \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAncestry, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATListValCATBaseUnknown_var GetAncestry() const; \
      virtual HRESULT  GetAncestry(CATListValCATBaseUnknown_var& oList) const; \
};



#define ENVTIEdeclare_CATIAncestry(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATListValCATBaseUnknown_var GetAncestry() const; \
virtual HRESULT  GetAncestry(CATListValCATBaseUnknown_var& oList) const; \


#define ENVTIEdefine_CATIAncestry(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATListValCATBaseUnknown_var  ENVTIEName::GetAncestry() const \
{ \
return (ENVTIECALL(CATIAncestry,ENVTIETypeLetter,ENVTIELetter)GetAncestry()); \
} \
HRESULT   ENVTIEName::GetAncestry(CATListValCATBaseUnknown_var& oList) const \
{ \
return (ENVTIECALL(CATIAncestry,ENVTIETypeLetter,ENVTIELetter)GetAncestry(oList)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAncestry(classe)    TIECATIAncestry##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAncestry(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAncestry, classe) \
 \
 \
CATImplementTIEMethods(CATIAncestry, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAncestry, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAncestry, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAncestry, classe) \
 \
CATListValCATBaseUnknown_var  TIECATIAncestry##classe::GetAncestry() const \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAncestry()); \
} \
HRESULT   TIECATIAncestry##classe::GetAncestry(CATListValCATBaseUnknown_var& oList) const \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAncestry(oList)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAncestry(classe) \
 \
 \
declare_TIE_CATIAncestry(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAncestry##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAncestry,"CATIAncestry",CATIAncestry::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAncestry(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAncestry, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAncestry##classe(classe::MetaObject(),CATIAncestry::MetaObject(),(void *)CreateTIECATIAncestry##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAncestry(classe) \
 \
 \
declare_TIE_CATIAncestry(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAncestry##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAncestry,"CATIAncestry",CATIAncestry::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAncestry(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAncestry, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAncestry##classe(classe::MetaObject(),CATIAncestry::MetaObject(),(void *)CreateTIECATIAncestry##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAncestry(classe) TIE_CATIAncestry(classe)
#else
#define BOA_CATIAncestry(classe) CATImplementBOA(CATIAncestry, classe)
#endif

#endif
