#ifndef __TIE_CATIMfgDesignHoleLimits
#define __TIE_CATIMfgDesignHoleLimits

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgDesignHoleLimits.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgDesignHoleLimits */
#define declare_TIE_CATIMfgDesignHoleLimits(classe) \
 \
 \
class TIECATIMfgDesignHoleLimits##classe : public CATIMfgDesignHoleLimits \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgDesignHoleLimits, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetResultingExtremityPoints (CATMathPoint &oFirstLimit, CATMathPoint &oSecondLimit) ; \
};



#define ENVTIEdeclare_CATIMfgDesignHoleLimits(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetResultingExtremityPoints (CATMathPoint &oFirstLimit, CATMathPoint &oSecondLimit) ; \


#define ENVTIEdefine_CATIMfgDesignHoleLimits(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetResultingExtremityPoints (CATMathPoint &oFirstLimit, CATMathPoint &oSecondLimit)  \
{ \
return (ENVTIECALL(CATIMfgDesignHoleLimits,ENVTIETypeLetter,ENVTIELetter)GetResultingExtremityPoints (oFirstLimit,oSecondLimit)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgDesignHoleLimits(classe)    TIECATIMfgDesignHoleLimits##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgDesignHoleLimits(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgDesignHoleLimits, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgDesignHoleLimits, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgDesignHoleLimits, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgDesignHoleLimits, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgDesignHoleLimits, classe) \
 \
HRESULT  TIECATIMfgDesignHoleLimits##classe::GetResultingExtremityPoints (CATMathPoint &oFirstLimit, CATMathPoint &oSecondLimit)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetResultingExtremityPoints (oFirstLimit,oSecondLimit)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgDesignHoleLimits(classe) \
 \
 \
declare_TIE_CATIMfgDesignHoleLimits(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgDesignHoleLimits##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgDesignHoleLimits,"CATIMfgDesignHoleLimits",CATIMfgDesignHoleLimits::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgDesignHoleLimits(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgDesignHoleLimits, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgDesignHoleLimits##classe(classe::MetaObject(),CATIMfgDesignHoleLimits::MetaObject(),(void *)CreateTIECATIMfgDesignHoleLimits##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgDesignHoleLimits(classe) \
 \
 \
declare_TIE_CATIMfgDesignHoleLimits(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgDesignHoleLimits##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgDesignHoleLimits,"CATIMfgDesignHoleLimits",CATIMfgDesignHoleLimits::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgDesignHoleLimits(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgDesignHoleLimits, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgDesignHoleLimits##classe(classe::MetaObject(),CATIMfgDesignHoleLimits::MetaObject(),(void *)CreateTIECATIMfgDesignHoleLimits##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgDesignHoleLimits(classe) TIE_CATIMfgDesignHoleLimits(classe)
#else
#define BOA_CATIMfgDesignHoleLimits(classe) CATImplementBOA(CATIMfgDesignHoleLimits, classe)
#endif

#endif
