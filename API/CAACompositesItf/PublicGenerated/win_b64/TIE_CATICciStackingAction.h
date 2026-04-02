#ifndef __TIE_CATICciStackingAction
#define __TIE_CATICciStackingAction

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICciStackingAction.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICciStackingAction */
#define declare_TIE_CATICciStackingAction(classe) \
 \
 \
class TIECATICciStackingAction##classe : public CATICciStackingAction \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICciStackingAction, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT RemoveEntity(const CATIMmiMechanicalFeature_var & ispEntityToRemove) ; \
};



#define ENVTIEdeclare_CATICciStackingAction(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT RemoveEntity(const CATIMmiMechanicalFeature_var & ispEntityToRemove) ; \


#define ENVTIEdefine_CATICciStackingAction(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::RemoveEntity(const CATIMmiMechanicalFeature_var & ispEntityToRemove)  \
{ \
return (ENVTIECALL(CATICciStackingAction,ENVTIETypeLetter,ENVTIELetter)RemoveEntity(ispEntityToRemove)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICciStackingAction(classe)    TIECATICciStackingAction##classe


/* Common methods inside a TIE */
#define common_TIE_CATICciStackingAction(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICciStackingAction, classe) \
 \
 \
CATImplementTIEMethods(CATICciStackingAction, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICciStackingAction, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICciStackingAction, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICciStackingAction, classe) \
 \
HRESULT  TIECATICciStackingAction##classe::RemoveEntity(const CATIMmiMechanicalFeature_var & ispEntityToRemove)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveEntity(ispEntityToRemove)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICciStackingAction(classe) \
 \
 \
declare_TIE_CATICciStackingAction(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciStackingAction##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciStackingAction,"CATICciStackingAction",CATICciStackingAction::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciStackingAction(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICciStackingAction, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciStackingAction##classe(classe::MetaObject(),CATICciStackingAction::MetaObject(),(void *)CreateTIECATICciStackingAction##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICciStackingAction(classe) \
 \
 \
declare_TIE_CATICciStackingAction(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciStackingAction##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciStackingAction,"CATICciStackingAction",CATICciStackingAction::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciStackingAction(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICciStackingAction, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciStackingAction##classe(classe::MetaObject(),CATICciStackingAction::MetaObject(),(void *)CreateTIECATICciStackingAction##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICciStackingAction(classe) TIE_CATICciStackingAction(classe)
#else
#define BOA_CATICciStackingAction(classe) CATImplementBOA(CATICciStackingAction, classe)
#endif

#endif
