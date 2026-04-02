#ifndef __TIE_CATISchAppAssembly
#define __TIE_CATISchAppAssembly

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppAssembly.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppAssembly */
#define declare_TIE_CATISchAppAssembly(classe) \
 \
 \
class TIECATISchAppAssembly##classe : public CATISchAppAssembly \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppAssembly, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppIsAssembly (CATBoolean *oBYes) ; \
      virtual HRESULT AppListMembers (CATIUnknownList **oLMembers) ; \
};



#define ENVTIEdeclare_CATISchAppAssembly(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppIsAssembly (CATBoolean *oBYes) ; \
virtual HRESULT AppListMembers (CATIUnknownList **oLMembers) ; \


#define ENVTIEdefine_CATISchAppAssembly(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppIsAssembly (CATBoolean *oBYes)  \
{ \
return (ENVTIECALL(CATISchAppAssembly,ENVTIETypeLetter,ENVTIELetter)AppIsAssembly (oBYes)); \
} \
HRESULT  ENVTIEName::AppListMembers (CATIUnknownList **oLMembers)  \
{ \
return (ENVTIECALL(CATISchAppAssembly,ENVTIETypeLetter,ENVTIELetter)AppListMembers (oLMembers)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppAssembly(classe)    TIECATISchAppAssembly##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppAssembly(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppAssembly, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppAssembly, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppAssembly, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppAssembly, classe) \
 \
HRESULT  TIECATISchAppAssembly##classe::AppIsAssembly (CATBoolean *oBYes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppIsAssembly (oBYes)); \
} \
HRESULT  TIECATISchAppAssembly##classe::AppListMembers (CATIUnknownList **oLMembers)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListMembers (oLMembers)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppAssembly(classe) \
 \
 \
declare_TIE_CATISchAppAssembly(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppAssembly##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppAssembly,"CATISchAppAssembly",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppAssembly(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppAssembly, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppAssembly##classe(classe::MetaObject(),TIECATISchAppAssembly##classe::MetaObject(),(void *)CreateTIECATISchAppAssembly##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppAssembly(classe) \
 \
 \
declare_TIE_CATISchAppAssembly(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppAssembly##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppAssembly,"CATISchAppAssembly",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppAssembly(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppAssembly, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppAssembly##classe(classe::MetaObject(),TIECATISchAppAssembly##classe::MetaObject(),(void *)CreateTIECATISchAppAssembly##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppAssembly(classe) TIE_CATISchAppAssembly(classe)
#else
#define BOA_CATISchAppAssembly(classe) CATImplementBOA(CATISchAppAssembly, classe)
#endif

#endif
