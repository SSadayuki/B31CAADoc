#ifndef __TIE_CATIWorkbenchTransition
#define __TIE_CATIWorkbenchTransition

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIWorkbenchTransition.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIWorkbenchTransition */
#define declare_TIE_CATIWorkbenchTransition(classe) \
 \
 \
class TIECATIWorkbenchTransition##classe : public CATIWorkbenchTransition \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIWorkbenchTransition, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual int DoTransition(const CATString & iFromWorkshop, const CATString & iFromWorkbench, const CATString & iToWorkshop, const CATString & iToWorkbench) ; \
};



#define ENVTIEdeclare_CATIWorkbenchTransition(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual int DoTransition(const CATString & iFromWorkshop, const CATString & iFromWorkbench, const CATString & iToWorkshop, const CATString & iToWorkbench) ; \


#define ENVTIEdefine_CATIWorkbenchTransition(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
int  ENVTIEName::DoTransition(const CATString & iFromWorkshop, const CATString & iFromWorkbench, const CATString & iToWorkshop, const CATString & iToWorkbench)  \
{ \
return (ENVTIECALL(CATIWorkbenchTransition,ENVTIETypeLetter,ENVTIELetter)DoTransition(iFromWorkshop,iFromWorkbench,iToWorkshop,iToWorkbench)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIWorkbenchTransition(classe)    TIECATIWorkbenchTransition##classe


/* Common methods inside a TIE */
#define common_TIE_CATIWorkbenchTransition(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIWorkbenchTransition, classe) \
 \
 \
CATImplementTIEMethods(CATIWorkbenchTransition, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIWorkbenchTransition, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIWorkbenchTransition, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIWorkbenchTransition, classe) \
 \
int  TIECATIWorkbenchTransition##classe::DoTransition(const CATString & iFromWorkshop, const CATString & iFromWorkbench, const CATString & iToWorkshop, const CATString & iToWorkbench)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DoTransition(iFromWorkshop,iFromWorkbench,iToWorkshop,iToWorkbench)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIWorkbenchTransition(classe) \
 \
 \
declare_TIE_CATIWorkbenchTransition(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIWorkbenchTransition##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIWorkbenchTransition,"CATIWorkbenchTransition",CATIWorkbenchTransition::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIWorkbenchTransition(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIWorkbenchTransition, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIWorkbenchTransition##classe(classe::MetaObject(),CATIWorkbenchTransition::MetaObject(),(void *)CreateTIECATIWorkbenchTransition##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIWorkbenchTransition(classe) \
 \
 \
declare_TIE_CATIWorkbenchTransition(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIWorkbenchTransition##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIWorkbenchTransition,"CATIWorkbenchTransition",CATIWorkbenchTransition::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIWorkbenchTransition(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIWorkbenchTransition, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIWorkbenchTransition##classe(classe::MetaObject(),CATIWorkbenchTransition::MetaObject(),(void *)CreateTIECATIWorkbenchTransition##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIWorkbenchTransition(classe) TIE_CATIWorkbenchTransition(classe)
#else
#define BOA_CATIWorkbenchTransition(classe) CATImplementBOA(CATIWorkbenchTransition, classe)
#endif

#endif
