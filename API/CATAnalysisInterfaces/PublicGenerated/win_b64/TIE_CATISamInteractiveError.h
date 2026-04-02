#ifndef __TIE_CATISamInteractiveError
#define __TIE_CATISamInteractiveError

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamInteractiveError.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamInteractiveError */
#define declare_TIE_CATISamInteractiveError(classe) \
 \
 \
class TIECATISamInteractiveError##classe : public CATISamInteractiveError \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamInteractiveError, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetErrorCommand(CATCommand** oCommand) ; \
};



#define ENVTIEdeclare_CATISamInteractiveError(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetErrorCommand(CATCommand** oCommand) ; \


#define ENVTIEdefine_CATISamInteractiveError(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetErrorCommand(CATCommand** oCommand)  \
{ \
return (ENVTIECALL(CATISamInteractiveError,ENVTIETypeLetter,ENVTIELetter)GetErrorCommand(oCommand)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamInteractiveError(classe)    TIECATISamInteractiveError##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamInteractiveError(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamInteractiveError, classe) \
 \
 \
CATImplementTIEMethods(CATISamInteractiveError, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamInteractiveError, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamInteractiveError, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamInteractiveError, classe) \
 \
HRESULT  TIECATISamInteractiveError##classe::GetErrorCommand(CATCommand** oCommand)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetErrorCommand(oCommand)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamInteractiveError(classe) \
 \
 \
declare_TIE_CATISamInteractiveError(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamInteractiveError##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamInteractiveError,"CATISamInteractiveError",CATISamInteractiveError::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamInteractiveError(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamInteractiveError, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamInteractiveError##classe(classe::MetaObject(),CATISamInteractiveError::MetaObject(),(void *)CreateTIECATISamInteractiveError##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamInteractiveError(classe) \
 \
 \
declare_TIE_CATISamInteractiveError(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamInteractiveError##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamInteractiveError,"CATISamInteractiveError",CATISamInteractiveError::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamInteractiveError(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamInteractiveError, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamInteractiveError##classe(classe::MetaObject(),CATISamInteractiveError::MetaObject(),(void *)CreateTIECATISamInteractiveError##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamInteractiveError(classe) TIE_CATISamInteractiveError(classe)
#else
#define BOA_CATISamInteractiveError(classe) CATImplementBOA(CATISamInteractiveError, classe)
#endif

#endif
