#ifndef __TIE_CATIMSHTrapSelector
#define __TIE_CATIMSHTrapSelector

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMSHTrapSelector.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMSHTrapSelector */
#define declare_TIE_CATIMSHTrapSelector(classe) \
 \
 \
class TIECATIMSHTrapSelector##classe : public CATIMSHTrapSelector \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMSHTrapSelector, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATSO * BuildSelection ( CATMSHSelectionTrap * iTrap , void * iData ) ; \
};



#define ENVTIEdeclare_CATIMSHTrapSelector(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATSO * BuildSelection ( CATMSHSelectionTrap * iTrap , void * iData ) ; \


#define ENVTIEdefine_CATIMSHTrapSelector(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATSO *  ENVTIEName::BuildSelection ( CATMSHSelectionTrap * iTrap , void * iData )  \
{ \
return (ENVTIECALL(CATIMSHTrapSelector,ENVTIETypeLetter,ENVTIELetter)BuildSelection (iTrap ,iData )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMSHTrapSelector(classe)    TIECATIMSHTrapSelector##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMSHTrapSelector(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMSHTrapSelector, classe) \
 \
 \
CATImplementTIEMethods(CATIMSHTrapSelector, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMSHTrapSelector, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMSHTrapSelector, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMSHTrapSelector, classe) \
 \
CATSO *  TIECATIMSHTrapSelector##classe::BuildSelection ( CATMSHSelectionTrap * iTrap , void * iData )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildSelection (iTrap ,iData )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMSHTrapSelector(classe) \
 \
 \
declare_TIE_CATIMSHTrapSelector(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMSHTrapSelector##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMSHTrapSelector,"CATIMSHTrapSelector",CATIMSHTrapSelector::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMSHTrapSelector(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMSHTrapSelector, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMSHTrapSelector##classe(classe::MetaObject(),CATIMSHTrapSelector::MetaObject(),(void *)CreateTIECATIMSHTrapSelector##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMSHTrapSelector(classe) \
 \
 \
declare_TIE_CATIMSHTrapSelector(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMSHTrapSelector##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMSHTrapSelector,"CATIMSHTrapSelector",CATIMSHTrapSelector::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMSHTrapSelector(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMSHTrapSelector, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMSHTrapSelector##classe(classe::MetaObject(),CATIMSHTrapSelector::MetaObject(),(void *)CreateTIECATIMSHTrapSelector##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMSHTrapSelector(classe) TIE_CATIMSHTrapSelector(classe)
#else
#define BOA_CATIMSHTrapSelector(classe) CATImplementBOA(CATIMSHTrapSelector, classe)
#endif

#endif
