#ifndef __TIE_CATIMfgFeatureAccess
#define __TIE_CATIMfgFeatureAccess

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgFeatureAccess.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgFeatureAccess */
#define declare_TIE_CATIMfgFeatureAccess(classe) \
 \
 \
class TIECATIMfgFeatureAccess##classe : public CATIMfgFeatureAccess \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgFeatureAccess, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT IsComplete (int &oIsComplete) ; \
};



#define ENVTIEdeclare_CATIMfgFeatureAccess(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT IsComplete (int &oIsComplete) ; \


#define ENVTIEdefine_CATIMfgFeatureAccess(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::IsComplete (int &oIsComplete)  \
{ \
return (ENVTIECALL(CATIMfgFeatureAccess,ENVTIETypeLetter,ENVTIELetter)IsComplete (oIsComplete)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgFeatureAccess(classe)    TIECATIMfgFeatureAccess##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgFeatureAccess(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgFeatureAccess, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgFeatureAccess, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgFeatureAccess, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgFeatureAccess, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgFeatureAccess, classe) \
 \
HRESULT  TIECATIMfgFeatureAccess##classe::IsComplete (int &oIsComplete)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsComplete (oIsComplete)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgFeatureAccess(classe) \
 \
 \
declare_TIE_CATIMfgFeatureAccess(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgFeatureAccess##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgFeatureAccess,"CATIMfgFeatureAccess",CATIMfgFeatureAccess::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgFeatureAccess(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgFeatureAccess, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgFeatureAccess##classe(classe::MetaObject(),CATIMfgFeatureAccess::MetaObject(),(void *)CreateTIECATIMfgFeatureAccess##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgFeatureAccess(classe) \
 \
 \
declare_TIE_CATIMfgFeatureAccess(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgFeatureAccess##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgFeatureAccess,"CATIMfgFeatureAccess",CATIMfgFeatureAccess::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgFeatureAccess(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgFeatureAccess, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgFeatureAccess##classe(classe::MetaObject(),CATIMfgFeatureAccess::MetaObject(),(void *)CreateTIECATIMfgFeatureAccess##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgFeatureAccess(classe) TIE_CATIMfgFeatureAccess(classe)
#else
#define BOA_CATIMfgFeatureAccess(classe) CATImplementBOA(CATIMfgFeatureAccess, classe)
#endif

#endif
