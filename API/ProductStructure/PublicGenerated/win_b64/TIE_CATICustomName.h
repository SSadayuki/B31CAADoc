#ifndef __TIE_CATICustomName
#define __TIE_CATICustomName

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICustomName.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICustomName */
#define declare_TIE_CATICustomName(classe) \
 \
 \
class TIECATICustomName##classe : public CATICustomName \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICustomName, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ComputePartNumber(  const CATUnicodeString& iCurrentPath , CATUnicodeString& oPartNumber , CATUnicodeString& oExtension) ; \
};



#define ENVTIEdeclare_CATICustomName(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ComputePartNumber(  const CATUnicodeString& iCurrentPath , CATUnicodeString& oPartNumber , CATUnicodeString& oExtension) ; \


#define ENVTIEdefine_CATICustomName(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ComputePartNumber(  const CATUnicodeString& iCurrentPath , CATUnicodeString& oPartNumber , CATUnicodeString& oExtension)  \
{ \
return (ENVTIECALL(CATICustomName,ENVTIETypeLetter,ENVTIELetter)ComputePartNumber(iCurrentPath ,oPartNumber ,oExtension)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICustomName(classe)    TIECATICustomName##classe


/* Common methods inside a TIE */
#define common_TIE_CATICustomName(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICustomName, classe) \
 \
 \
CATImplementTIEMethods(CATICustomName, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICustomName, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICustomName, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICustomName, classe) \
 \
HRESULT  TIECATICustomName##classe::ComputePartNumber(  const CATUnicodeString& iCurrentPath , CATUnicodeString& oPartNumber , CATUnicodeString& oExtension)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputePartNumber(iCurrentPath ,oPartNumber ,oExtension)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICustomName(classe) \
 \
 \
declare_TIE_CATICustomName(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICustomName##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICustomName,"CATICustomName",CATICustomName::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICustomName(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICustomName, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICustomName##classe(classe::MetaObject(),CATICustomName::MetaObject(),(void *)CreateTIECATICustomName##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICustomName(classe) \
 \
 \
declare_TIE_CATICustomName(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICustomName##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICustomName,"CATICustomName",CATICustomName::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICustomName(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICustomName, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICustomName##classe(classe::MetaObject(),CATICustomName::MetaObject(),(void *)CreateTIECATICustomName##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICustomName(classe) TIE_CATICustomName(classe)
#else
#define BOA_CATICustomName(classe) CATImplementBOA(CATICustomName, classe)
#endif

#endif
