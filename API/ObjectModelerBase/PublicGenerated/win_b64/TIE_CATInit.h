#ifndef __TIE_CATInit
#define __TIE_CATInit

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATInit.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATInit */
#define declare_TIE_CATInit(classe) \
 \
 \
class TIECATInit##classe : public CATInit \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATInit, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void Init (CATBoolean iDestroyExistingData); \
      virtual CATBaseUnknown* GetRootContainer (const CATIdent iInterfaceID); \
};



#define ENVTIEdeclare_CATInit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void Init (CATBoolean iDestroyExistingData); \
virtual CATBaseUnknown* GetRootContainer (const CATIdent iInterfaceID); \


#define ENVTIEdefine_CATInit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void  ENVTIEName::Init (CATBoolean iDestroyExistingData) \
{ \
 (ENVTIECALL(CATInit,ENVTIETypeLetter,ENVTIELetter)Init (iDestroyExistingData)); \
} \
CATBaseUnknown*  ENVTIEName::GetRootContainer (const CATIdent iInterfaceID) \
{ \
return (ENVTIECALL(CATInit,ENVTIETypeLetter,ENVTIELetter)GetRootContainer (iInterfaceID)); \
} \


/* Name of the TIE class */
#define class_TIE_CATInit(classe)    TIECATInit##classe


/* Common methods inside a TIE */
#define common_TIE_CATInit(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATInit, classe) \
 \
 \
CATImplementTIEMethods(CATInit, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATInit, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATInit, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATInit, classe) \
 \
void  TIECATInit##classe::Init (CATBoolean iDestroyExistingData) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Init (iDestroyExistingData); \
} \
CATBaseUnknown*  TIECATInit##classe::GetRootContainer (const CATIdent iInterfaceID) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRootContainer (iInterfaceID)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATInit(classe) \
 \
 \
declare_TIE_CATInit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATInit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATInit,"CATInit",CATInit::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATInit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATInit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATInit##classe(classe::MetaObject(),CATInit::MetaObject(),(void *)CreateTIECATInit##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATInit(classe) \
 \
 \
declare_TIE_CATInit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATInit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATInit,"CATInit",CATInit::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATInit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATInit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATInit##classe(classe::MetaObject(),CATInit::MetaObject(),(void *)CreateTIECATInit##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATInit(classe) TIE_CATInit(classe)
#else
#define BOA_CATInit(classe) CATImplementBOA(CATInit, classe)
#endif

#endif
