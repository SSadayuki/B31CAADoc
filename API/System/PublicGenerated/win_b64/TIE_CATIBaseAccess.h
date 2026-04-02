#ifndef __TIE_CATIBaseAccess
#define __TIE_CATIBaseAccess

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIBaseAccess.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIBaseAccess */
#define declare_TIE_CATIBaseAccess(classe) \
 \
 \
class TIECATIBaseAccess##classe : public CATIBaseAccess \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIBaseAccess, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GiveAccurateExposedInterface(CATBaseDispatch** oBasePointer); \
};



#define ENVTIEdeclare_CATIBaseAccess(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GiveAccurateExposedInterface(CATBaseDispatch** oBasePointer); \


#define ENVTIEdefine_CATIBaseAccess(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GiveAccurateExposedInterface(CATBaseDispatch** oBasePointer) \
{ \
return (ENVTIECALL(CATIBaseAccess,ENVTIETypeLetter,ENVTIELetter)GiveAccurateExposedInterface(oBasePointer)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIBaseAccess(classe)    TIECATIBaseAccess##classe


/* Common methods inside a TIE */
#define common_TIE_CATIBaseAccess(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIBaseAccess, classe) \
 \
 \
CATImplementTIEMethods(CATIBaseAccess, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIBaseAccess, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIBaseAccess, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIBaseAccess, classe) \
 \
HRESULT  TIECATIBaseAccess##classe::GiveAccurateExposedInterface(CATBaseDispatch** oBasePointer) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GiveAccurateExposedInterface(oBasePointer)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIBaseAccess(classe) \
 \
 \
declare_TIE_CATIBaseAccess(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIBaseAccess##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIBaseAccess,"CATIBaseAccess",CATIBaseAccess::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIBaseAccess(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIBaseAccess, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIBaseAccess##classe(classe::MetaObject(),CATIBaseAccess::MetaObject(),(void *)CreateTIECATIBaseAccess##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIBaseAccess(classe) \
 \
 \
declare_TIE_CATIBaseAccess(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIBaseAccess##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIBaseAccess,"CATIBaseAccess",CATIBaseAccess::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIBaseAccess(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIBaseAccess, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIBaseAccess##classe(classe::MetaObject(),CATIBaseAccess::MetaObject(),(void *)CreateTIECATIBaseAccess##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIBaseAccess(classe) TIE_CATIBaseAccess(classe)
#else
#define BOA_CATIBaseAccess(classe) CATImplementBOA(CATIBaseAccess, classe)
#endif

#endif
