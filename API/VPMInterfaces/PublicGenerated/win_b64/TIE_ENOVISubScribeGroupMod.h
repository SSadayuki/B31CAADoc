#ifndef __TIE_ENOVISubScribeGroupMod
#define __TIE_ENOVISubScribeGroupMod

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVISubScribeGroupMod.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVISubScribeGroupMod */
#define declare_TIE_ENOVISubScribeGroupMod(classe) \
 \
 \
class TIEENOVISubScribeGroupMod##classe : public ENOVISubScribeGroupMod \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVISubScribeGroupMod, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT EventBehaviorBefore(CATICfgGroupModif_var & iGroupMod, CATUnicodeString & iBehavior); \
      virtual HRESULT EventBehaviorAfter(CATICfgGroupModif_var & iGroupMod, CATUnicodeString & iBehavior); \
      virtual HRESULT EventValueBefore(CATICfgGroupModif_var & iGroupMod,CATICfgORExpression_var &iOrExp); \
      virtual HRESULT EventValueAfter(CATICfgGroupModif_var & iGroupMod,CATICfgORExpression_var &iOrExp); \
      virtual HRESULT EventAddModBefore(CATICfgGroupModif_var & iGroupMod,CATICfgModification_var &iMod); \
      virtual HRESULT EventAddModAfter(CATICfgGroupModif_var & iGroupMod,CATICfgModification_var &iMod); \
      virtual HRESULT EventRemoveModBefore(CATICfgGroupModif_var & iGroupMod,CATICfgModification_var &iMod); \
      virtual HRESULT EventRemoveMadAfter(CATICfgGroupModif_var & iGroupMod,CATICfgModification_var &iMod); \
      virtual HRESULT EventModifyBefore(const CATICfgModification::Operation iOperation, const CATIConfigurableObject_var &iCV, const CATILinkableObject_var &iObj1, const CATILinkableObject_var &iObj2, const CATILinkableObject_var &iFather) ; \
      virtual HRESULT EventModifyAfter(const CATICfgModification::Operation iOperation, const CATIConfigurableObject_var &iCV, const CATILinkableObject_var &iObj1, const CATILinkableObject_var &iObj2, const CATILinkableObject_var &iFather) ; \
      virtual HRESULT EventSetValueModBefore(CATICfgModification_var &iMod,const CATUnicodeString &iName, const CATICfgEffectivity_var &iEffectivity) ; \
      virtual HRESULT EventSetValueModAfter(CATICfgModification_var &iMod,const CATUnicodeString &iName, const CATICfgEffectivity_var &iEffectivity) ; \
      virtual HRESULT EventRemoveValueModBefore(CATICfgModification_var &iMod,const CATUnicodeString &iName) ; \
      virtual HRESULT EventRemoveValueModAfter(CATICfgModification_var &iMod,const CATUnicodeString &iName) ; \
};



#define ENVTIEdeclare_ENOVISubScribeGroupMod(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT EventBehaviorBefore(CATICfgGroupModif_var & iGroupMod, CATUnicodeString & iBehavior); \
virtual HRESULT EventBehaviorAfter(CATICfgGroupModif_var & iGroupMod, CATUnicodeString & iBehavior); \
virtual HRESULT EventValueBefore(CATICfgGroupModif_var & iGroupMod,CATICfgORExpression_var &iOrExp); \
virtual HRESULT EventValueAfter(CATICfgGroupModif_var & iGroupMod,CATICfgORExpression_var &iOrExp); \
virtual HRESULT EventAddModBefore(CATICfgGroupModif_var & iGroupMod,CATICfgModification_var &iMod); \
virtual HRESULT EventAddModAfter(CATICfgGroupModif_var & iGroupMod,CATICfgModification_var &iMod); \
virtual HRESULT EventRemoveModBefore(CATICfgGroupModif_var & iGroupMod,CATICfgModification_var &iMod); \
virtual HRESULT EventRemoveMadAfter(CATICfgGroupModif_var & iGroupMod,CATICfgModification_var &iMod); \
virtual HRESULT EventModifyBefore(const CATICfgModification::Operation iOperation, const CATIConfigurableObject_var &iCV, const CATILinkableObject_var &iObj1, const CATILinkableObject_var &iObj2, const CATILinkableObject_var &iFather) ; \
virtual HRESULT EventModifyAfter(const CATICfgModification::Operation iOperation, const CATIConfigurableObject_var &iCV, const CATILinkableObject_var &iObj1, const CATILinkableObject_var &iObj2, const CATILinkableObject_var &iFather) ; \
virtual HRESULT EventSetValueModBefore(CATICfgModification_var &iMod,const CATUnicodeString &iName, const CATICfgEffectivity_var &iEffectivity) ; \
virtual HRESULT EventSetValueModAfter(CATICfgModification_var &iMod,const CATUnicodeString &iName, const CATICfgEffectivity_var &iEffectivity) ; \
virtual HRESULT EventRemoveValueModBefore(CATICfgModification_var &iMod,const CATUnicodeString &iName) ; \
virtual HRESULT EventRemoveValueModAfter(CATICfgModification_var &iMod,const CATUnicodeString &iName) ; \


#define ENVTIEdefine_ENOVISubScribeGroupMod(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::EventBehaviorBefore(CATICfgGroupModif_var & iGroupMod, CATUnicodeString & iBehavior) \
{ \
return (ENVTIECALL(ENOVISubScribeGroupMod,ENVTIETypeLetter,ENVTIELetter)EventBehaviorBefore(iGroupMod,iBehavior)); \
} \
HRESULT  ENVTIEName::EventBehaviorAfter(CATICfgGroupModif_var & iGroupMod, CATUnicodeString & iBehavior) \
{ \
return (ENVTIECALL(ENOVISubScribeGroupMod,ENVTIETypeLetter,ENVTIELetter)EventBehaviorAfter(iGroupMod,iBehavior)); \
} \
HRESULT  ENVTIEName::EventValueBefore(CATICfgGroupModif_var & iGroupMod,CATICfgORExpression_var &iOrExp) \
{ \
return (ENVTIECALL(ENOVISubScribeGroupMod,ENVTIETypeLetter,ENVTIELetter)EventValueBefore(iGroupMod,iOrExp)); \
} \
HRESULT  ENVTIEName::EventValueAfter(CATICfgGroupModif_var & iGroupMod,CATICfgORExpression_var &iOrExp) \
{ \
return (ENVTIECALL(ENOVISubScribeGroupMod,ENVTIETypeLetter,ENVTIELetter)EventValueAfter(iGroupMod,iOrExp)); \
} \
HRESULT  ENVTIEName::EventAddModBefore(CATICfgGroupModif_var & iGroupMod,CATICfgModification_var &iMod) \
{ \
return (ENVTIECALL(ENOVISubScribeGroupMod,ENVTIETypeLetter,ENVTIELetter)EventAddModBefore(iGroupMod,iMod)); \
} \
HRESULT  ENVTIEName::EventAddModAfter(CATICfgGroupModif_var & iGroupMod,CATICfgModification_var &iMod) \
{ \
return (ENVTIECALL(ENOVISubScribeGroupMod,ENVTIETypeLetter,ENVTIELetter)EventAddModAfter(iGroupMod,iMod)); \
} \
HRESULT  ENVTIEName::EventRemoveModBefore(CATICfgGroupModif_var & iGroupMod,CATICfgModification_var &iMod) \
{ \
return (ENVTIECALL(ENOVISubScribeGroupMod,ENVTIETypeLetter,ENVTIELetter)EventRemoveModBefore(iGroupMod,iMod)); \
} \
HRESULT  ENVTIEName::EventRemoveMadAfter(CATICfgGroupModif_var & iGroupMod,CATICfgModification_var &iMod) \
{ \
return (ENVTIECALL(ENOVISubScribeGroupMod,ENVTIETypeLetter,ENVTIELetter)EventRemoveMadAfter(iGroupMod,iMod)); \
} \
HRESULT  ENVTIEName::EventModifyBefore(const CATICfgModification::Operation iOperation, const CATIConfigurableObject_var &iCV, const CATILinkableObject_var &iObj1, const CATILinkableObject_var &iObj2, const CATILinkableObject_var &iFather)  \
{ \
return (ENVTIECALL(ENOVISubScribeGroupMod,ENVTIETypeLetter,ENVTIELetter)EventModifyBefore(iOperation,iCV,iObj1,iObj2,iFather)); \
} \
HRESULT  ENVTIEName::EventModifyAfter(const CATICfgModification::Operation iOperation, const CATIConfigurableObject_var &iCV, const CATILinkableObject_var &iObj1, const CATILinkableObject_var &iObj2, const CATILinkableObject_var &iFather)  \
{ \
return (ENVTIECALL(ENOVISubScribeGroupMod,ENVTIETypeLetter,ENVTIELetter)EventModifyAfter(iOperation,iCV,iObj1,iObj2,iFather)); \
} \
HRESULT  ENVTIEName::EventSetValueModBefore(CATICfgModification_var &iMod,const CATUnicodeString &iName, const CATICfgEffectivity_var &iEffectivity)  \
{ \
return (ENVTIECALL(ENOVISubScribeGroupMod,ENVTIETypeLetter,ENVTIELetter)EventSetValueModBefore(iMod,iName,iEffectivity)); \
} \
HRESULT  ENVTIEName::EventSetValueModAfter(CATICfgModification_var &iMod,const CATUnicodeString &iName, const CATICfgEffectivity_var &iEffectivity)  \
{ \
return (ENVTIECALL(ENOVISubScribeGroupMod,ENVTIETypeLetter,ENVTIELetter)EventSetValueModAfter(iMod,iName,iEffectivity)); \
} \
HRESULT  ENVTIEName::EventRemoveValueModBefore(CATICfgModification_var &iMod,const CATUnicodeString &iName)  \
{ \
return (ENVTIECALL(ENOVISubScribeGroupMod,ENVTIETypeLetter,ENVTIELetter)EventRemoveValueModBefore(iMod,iName)); \
} \
HRESULT  ENVTIEName::EventRemoveValueModAfter(CATICfgModification_var &iMod,const CATUnicodeString &iName)  \
{ \
return (ENVTIECALL(ENOVISubScribeGroupMod,ENVTIETypeLetter,ENVTIELetter)EventRemoveValueModAfter(iMod,iName)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVISubScribeGroupMod(classe)    TIEENOVISubScribeGroupMod##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVISubScribeGroupMod(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVISubScribeGroupMod, classe) \
 \
 \
CATImplementTIEMethods(ENOVISubScribeGroupMod, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVISubScribeGroupMod, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVISubScribeGroupMod, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVISubScribeGroupMod, classe) \
 \
HRESULT  TIEENOVISubScribeGroupMod##classe::EventBehaviorBefore(CATICfgGroupModif_var & iGroupMod, CATUnicodeString & iBehavior) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EventBehaviorBefore(iGroupMod,iBehavior)); \
} \
HRESULT  TIEENOVISubScribeGroupMod##classe::EventBehaviorAfter(CATICfgGroupModif_var & iGroupMod, CATUnicodeString & iBehavior) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EventBehaviorAfter(iGroupMod,iBehavior)); \
} \
HRESULT  TIEENOVISubScribeGroupMod##classe::EventValueBefore(CATICfgGroupModif_var & iGroupMod,CATICfgORExpression_var &iOrExp) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EventValueBefore(iGroupMod,iOrExp)); \
} \
HRESULT  TIEENOVISubScribeGroupMod##classe::EventValueAfter(CATICfgGroupModif_var & iGroupMod,CATICfgORExpression_var &iOrExp) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EventValueAfter(iGroupMod,iOrExp)); \
} \
HRESULT  TIEENOVISubScribeGroupMod##classe::EventAddModBefore(CATICfgGroupModif_var & iGroupMod,CATICfgModification_var &iMod) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EventAddModBefore(iGroupMod,iMod)); \
} \
HRESULT  TIEENOVISubScribeGroupMod##classe::EventAddModAfter(CATICfgGroupModif_var & iGroupMod,CATICfgModification_var &iMod) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EventAddModAfter(iGroupMod,iMod)); \
} \
HRESULT  TIEENOVISubScribeGroupMod##classe::EventRemoveModBefore(CATICfgGroupModif_var & iGroupMod,CATICfgModification_var &iMod) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EventRemoveModBefore(iGroupMod,iMod)); \
} \
HRESULT  TIEENOVISubScribeGroupMod##classe::EventRemoveMadAfter(CATICfgGroupModif_var & iGroupMod,CATICfgModification_var &iMod) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EventRemoveMadAfter(iGroupMod,iMod)); \
} \
HRESULT  TIEENOVISubScribeGroupMod##classe::EventModifyBefore(const CATICfgModification::Operation iOperation, const CATIConfigurableObject_var &iCV, const CATILinkableObject_var &iObj1, const CATILinkableObject_var &iObj2, const CATILinkableObject_var &iFather)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EventModifyBefore(iOperation,iCV,iObj1,iObj2,iFather)); \
} \
HRESULT  TIEENOVISubScribeGroupMod##classe::EventModifyAfter(const CATICfgModification::Operation iOperation, const CATIConfigurableObject_var &iCV, const CATILinkableObject_var &iObj1, const CATILinkableObject_var &iObj2, const CATILinkableObject_var &iFather)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EventModifyAfter(iOperation,iCV,iObj1,iObj2,iFather)); \
} \
HRESULT  TIEENOVISubScribeGroupMod##classe::EventSetValueModBefore(CATICfgModification_var &iMod,const CATUnicodeString &iName, const CATICfgEffectivity_var &iEffectivity)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EventSetValueModBefore(iMod,iName,iEffectivity)); \
} \
HRESULT  TIEENOVISubScribeGroupMod##classe::EventSetValueModAfter(CATICfgModification_var &iMod,const CATUnicodeString &iName, const CATICfgEffectivity_var &iEffectivity)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EventSetValueModAfter(iMod,iName,iEffectivity)); \
} \
HRESULT  TIEENOVISubScribeGroupMod##classe::EventRemoveValueModBefore(CATICfgModification_var &iMod,const CATUnicodeString &iName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EventRemoveValueModBefore(iMod,iName)); \
} \
HRESULT  TIEENOVISubScribeGroupMod##classe::EventRemoveValueModAfter(CATICfgModification_var &iMod,const CATUnicodeString &iName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EventRemoveValueModAfter(iMod,iName)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVISubScribeGroupMod(classe) \
 \
 \
declare_TIE_ENOVISubScribeGroupMod(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVISubScribeGroupMod##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVISubScribeGroupMod,"ENOVISubScribeGroupMod",ENOVISubScribeGroupMod::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVISubScribeGroupMod(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVISubScribeGroupMod, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVISubScribeGroupMod##classe(classe::MetaObject(),ENOVISubScribeGroupMod::MetaObject(),(void *)CreateTIEENOVISubScribeGroupMod##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVISubScribeGroupMod(classe) \
 \
 \
declare_TIE_ENOVISubScribeGroupMod(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVISubScribeGroupMod##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVISubScribeGroupMod,"ENOVISubScribeGroupMod",ENOVISubScribeGroupMod::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVISubScribeGroupMod(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVISubScribeGroupMod, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVISubScribeGroupMod##classe(classe::MetaObject(),ENOVISubScribeGroupMod::MetaObject(),(void *)CreateTIEENOVISubScribeGroupMod##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVISubScribeGroupMod(classe) TIE_ENOVISubScribeGroupMod(classe)
#else
#define BOA_ENOVISubScribeGroupMod(classe) CATImplementBOA(ENOVISubScribeGroupMod, classe)
#endif

#endif
