#ifndef __TIE_CATIOptAlgorithmUIFactory
#define __TIE_CATIOptAlgorithmUIFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIOptAlgorithmUIFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIOptAlgorithmUIFactory */
#define declare_TIE_CATIOptAlgorithmUIFactory(classe) \
 \
 \
class TIECATIOptAlgorithmUIFactory##classe : public CATIOptAlgorithmUIFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIOptAlgorithmUIFactory, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATDlgFrame* CreateAlgoSettingsFrame(CATDialog* iFather,unsigned long iStyle = 786433) ; \
      virtual CATDlgDialog* CreateStopAlgoDialog(CATDialog* iFather, unsigned long iStyle,const CATIOptOptimization_var& iOptim) ; \
};



#define ENVTIEdeclare_CATIOptAlgorithmUIFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATDlgFrame* CreateAlgoSettingsFrame(CATDialog* iFather,unsigned long iStyle = 786433) ; \
virtual CATDlgDialog* CreateStopAlgoDialog(CATDialog* iFather, unsigned long iStyle,const CATIOptOptimization_var& iOptim) ; \


#define ENVTIEdefine_CATIOptAlgorithmUIFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATDlgFrame*  ENVTIEName::CreateAlgoSettingsFrame(CATDialog* iFather,unsigned long iStyle )  \
{ \
return (ENVTIECALL(CATIOptAlgorithmUIFactory,ENVTIETypeLetter,ENVTIELetter)CreateAlgoSettingsFrame(iFather,iStyle )); \
} \
CATDlgDialog*  ENVTIEName::CreateStopAlgoDialog(CATDialog* iFather, unsigned long iStyle,const CATIOptOptimization_var& iOptim)  \
{ \
return (ENVTIECALL(CATIOptAlgorithmUIFactory,ENVTIETypeLetter,ENVTIELetter)CreateStopAlgoDialog(iFather,iStyle,iOptim)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIOptAlgorithmUIFactory(classe)    TIECATIOptAlgorithmUIFactory##classe


/* Common methods inside a TIE */
#define common_TIE_CATIOptAlgorithmUIFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIOptAlgorithmUIFactory, classe) \
 \
 \
CATImplementTIEMethods(CATIOptAlgorithmUIFactory, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIOptAlgorithmUIFactory, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIOptAlgorithmUIFactory, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIOptAlgorithmUIFactory, classe) \
 \
CATDlgFrame*  TIECATIOptAlgorithmUIFactory##classe::CreateAlgoSettingsFrame(CATDialog* iFather,unsigned long iStyle )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateAlgoSettingsFrame(iFather,iStyle )); \
} \
CATDlgDialog*  TIECATIOptAlgorithmUIFactory##classe::CreateStopAlgoDialog(CATDialog* iFather, unsigned long iStyle,const CATIOptOptimization_var& iOptim)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateStopAlgoDialog(iFather,iStyle,iOptim)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIOptAlgorithmUIFactory(classe) \
 \
 \
declare_TIE_CATIOptAlgorithmUIFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIOptAlgorithmUIFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIOptAlgorithmUIFactory,"CATIOptAlgorithmUIFactory",CATIOptAlgorithmUIFactory::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIOptAlgorithmUIFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIOptAlgorithmUIFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIOptAlgorithmUIFactory##classe(classe::MetaObject(),CATIOptAlgorithmUIFactory::MetaObject(),(void *)CreateTIECATIOptAlgorithmUIFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIOptAlgorithmUIFactory(classe) \
 \
 \
declare_TIE_CATIOptAlgorithmUIFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIOptAlgorithmUIFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIOptAlgorithmUIFactory,"CATIOptAlgorithmUIFactory",CATIOptAlgorithmUIFactory::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIOptAlgorithmUIFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIOptAlgorithmUIFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIOptAlgorithmUIFactory##classe(classe::MetaObject(),CATIOptAlgorithmUIFactory::MetaObject(),(void *)CreateTIECATIOptAlgorithmUIFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIOptAlgorithmUIFactory(classe) TIE_CATIOptAlgorithmUIFactory(classe)
#else
#define BOA_CATIOptAlgorithmUIFactory(classe) CATImplementBOA(CATIOptAlgorithmUIFactory, classe)
#endif

#endif
