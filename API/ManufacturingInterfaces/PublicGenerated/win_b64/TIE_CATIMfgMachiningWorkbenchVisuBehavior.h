#ifndef __TIE_CATIMfgMachiningWorkbenchVisuBehavior
#define __TIE_CATIMfgMachiningWorkbenchVisuBehavior

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgMachiningWorkbenchVisuBehavior.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgMachiningWorkbenchVisuBehavior */
#define declare_TIE_CATIMfgMachiningWorkbenchVisuBehavior(classe) \
 \
 \
class TIECATIMfgMachiningWorkbenchVisuBehavior##classe : public CATIMfgMachiningWorkbenchVisuBehavior \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgMachiningWorkbenchVisuBehavior, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT FollowMachiningVisuBehaviour (CATBoolean& oMachiningBehaviour) ; \
};



#define ENVTIEdeclare_CATIMfgMachiningWorkbenchVisuBehavior(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT FollowMachiningVisuBehaviour (CATBoolean& oMachiningBehaviour) ; \


#define ENVTIEdefine_CATIMfgMachiningWorkbenchVisuBehavior(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::FollowMachiningVisuBehaviour (CATBoolean& oMachiningBehaviour)  \
{ \
return (ENVTIECALL(CATIMfgMachiningWorkbenchVisuBehavior,ENVTIETypeLetter,ENVTIELetter)FollowMachiningVisuBehaviour (oMachiningBehaviour)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgMachiningWorkbenchVisuBehavior(classe)    TIECATIMfgMachiningWorkbenchVisuBehavior##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgMachiningWorkbenchVisuBehavior(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgMachiningWorkbenchVisuBehavior, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgMachiningWorkbenchVisuBehavior, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgMachiningWorkbenchVisuBehavior, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgMachiningWorkbenchVisuBehavior, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgMachiningWorkbenchVisuBehavior, classe) \
 \
HRESULT  TIECATIMfgMachiningWorkbenchVisuBehavior##classe::FollowMachiningVisuBehaviour (CATBoolean& oMachiningBehaviour)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FollowMachiningVisuBehaviour (oMachiningBehaviour)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgMachiningWorkbenchVisuBehavior(classe) \
 \
 \
declare_TIE_CATIMfgMachiningWorkbenchVisuBehavior(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMachiningWorkbenchVisuBehavior##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMachiningWorkbenchVisuBehavior,"CATIMfgMachiningWorkbenchVisuBehavior",CATIMfgMachiningWorkbenchVisuBehavior::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMachiningWorkbenchVisuBehavior(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgMachiningWorkbenchVisuBehavior, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMachiningWorkbenchVisuBehavior##classe(classe::MetaObject(),CATIMfgMachiningWorkbenchVisuBehavior::MetaObject(),(void *)CreateTIECATIMfgMachiningWorkbenchVisuBehavior##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgMachiningWorkbenchVisuBehavior(classe) \
 \
 \
declare_TIE_CATIMfgMachiningWorkbenchVisuBehavior(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMachiningWorkbenchVisuBehavior##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMachiningWorkbenchVisuBehavior,"CATIMfgMachiningWorkbenchVisuBehavior",CATIMfgMachiningWorkbenchVisuBehavior::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMachiningWorkbenchVisuBehavior(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgMachiningWorkbenchVisuBehavior, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMachiningWorkbenchVisuBehavior##classe(classe::MetaObject(),CATIMfgMachiningWorkbenchVisuBehavior::MetaObject(),(void *)CreateTIECATIMfgMachiningWorkbenchVisuBehavior##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgMachiningWorkbenchVisuBehavior(classe) TIE_CATIMfgMachiningWorkbenchVisuBehavior(classe)
#else
#define BOA_CATIMfgMachiningWorkbenchVisuBehavior(classe) CATImplementBOA(CATIMfgMachiningWorkbenchVisuBehavior, classe)
#endif

#endif
