#ifndef __TIE_CATISchAppAssemblyMember
#define __TIE_CATISchAppAssemblyMember

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppAssemblyMember.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppAssemblyMember */
#define declare_TIE_CATISchAppAssemblyMember(classe) \
 \
 \
class TIECATISchAppAssemblyMember##classe : public CATISchAppAssemblyMember \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppAssemblyMember, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppIsAssemblyMember (CATBoolean *oBYes) ; \
      virtual HRESULT AppGetAssembly (CATISchAppConnectable **oAssembly) ; \
};



#define ENVTIEdeclare_CATISchAppAssemblyMember(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppIsAssemblyMember (CATBoolean *oBYes) ; \
virtual HRESULT AppGetAssembly (CATISchAppConnectable **oAssembly) ; \


#define ENVTIEdefine_CATISchAppAssemblyMember(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppIsAssemblyMember (CATBoolean *oBYes)  \
{ \
return (ENVTIECALL(CATISchAppAssemblyMember,ENVTIETypeLetter,ENVTIELetter)AppIsAssemblyMember (oBYes)); \
} \
HRESULT  ENVTIEName::AppGetAssembly (CATISchAppConnectable **oAssembly)  \
{ \
return (ENVTIECALL(CATISchAppAssemblyMember,ENVTIETypeLetter,ENVTIELetter)AppGetAssembly (oAssembly)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppAssemblyMember(classe)    TIECATISchAppAssemblyMember##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppAssemblyMember(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppAssemblyMember, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppAssemblyMember, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppAssemblyMember, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppAssemblyMember, classe) \
 \
HRESULT  TIECATISchAppAssemblyMember##classe::AppIsAssemblyMember (CATBoolean *oBYes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppIsAssemblyMember (oBYes)); \
} \
HRESULT  TIECATISchAppAssemblyMember##classe::AppGetAssembly (CATISchAppConnectable **oAssembly)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetAssembly (oAssembly)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppAssemblyMember(classe) \
 \
 \
declare_TIE_CATISchAppAssemblyMember(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppAssemblyMember##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppAssemblyMember,"CATISchAppAssemblyMember",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppAssemblyMember(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppAssemblyMember, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppAssemblyMember##classe(classe::MetaObject(),TIECATISchAppAssemblyMember##classe::MetaObject(),(void *)CreateTIECATISchAppAssemblyMember##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppAssemblyMember(classe) \
 \
 \
declare_TIE_CATISchAppAssemblyMember(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppAssemblyMember##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppAssemblyMember,"CATISchAppAssemblyMember",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppAssemblyMember(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppAssemblyMember, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppAssemblyMember##classe(classe::MetaObject(),TIECATISchAppAssemblyMember##classe::MetaObject(),(void *)CreateTIECATISchAppAssemblyMember##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppAssemblyMember(classe) TIE_CATISchAppAssemblyMember(classe)
#else
#define BOA_CATISchAppAssemblyMember(classe) CATImplementBOA(CATISchAppAssemblyMember, classe)
#endif

#endif
