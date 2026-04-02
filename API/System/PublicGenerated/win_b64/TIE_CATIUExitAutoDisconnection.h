#ifndef __TIE_CATIUExitAutoDisconnection
#define __TIE_CATIUExitAutoDisconnection

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIUExitAutoDisconnection.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIUExitAutoDisconnection */
#define declare_TIE_CATIUExitAutoDisconnection(classe) \
 \
 \
class TIECATIUExitAutoDisconnection##classe : public CATIUExitAutoDisconnection \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIUExitAutoDisconnection, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT OnDisconnection (int *oDisconnectionAllowed ); \
};



#define ENVTIEdeclare_CATIUExitAutoDisconnection(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT OnDisconnection (int *oDisconnectionAllowed ); \


#define ENVTIEdefine_CATIUExitAutoDisconnection(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::OnDisconnection (int *oDisconnectionAllowed ) \
{ \
return (ENVTIECALL(CATIUExitAutoDisconnection,ENVTIETypeLetter,ENVTIELetter)OnDisconnection (oDisconnectionAllowed )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIUExitAutoDisconnection(classe)    TIECATIUExitAutoDisconnection##classe


/* Common methods inside a TIE */
#define common_TIE_CATIUExitAutoDisconnection(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIUExitAutoDisconnection, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATIUExitAutoDisconnection, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATIUExitAutoDisconnection, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATIUExitAutoDisconnection, classe) \
 \
HRESULT  TIECATIUExitAutoDisconnection##classe::OnDisconnection (int *oDisconnectionAllowed ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OnDisconnection (oDisconnectionAllowed )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIUExitAutoDisconnection(classe) \
 \
 \
declare_TIE_CATIUExitAutoDisconnection(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUExitAutoDisconnection##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUExitAutoDisconnection,"CATIUExitAutoDisconnection",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUExitAutoDisconnection(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIUExitAutoDisconnection, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUExitAutoDisconnection##classe(classe::MetaObject(),TIECATIUExitAutoDisconnection##classe::MetaObject(),(void *)CreateTIECATIUExitAutoDisconnection##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIUExitAutoDisconnection(classe) \
 \
 \
declare_TIE_CATIUExitAutoDisconnection(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUExitAutoDisconnection##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUExitAutoDisconnection,"CATIUExitAutoDisconnection",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUExitAutoDisconnection(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIUExitAutoDisconnection, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUExitAutoDisconnection##classe(classe::MetaObject(),TIECATIUExitAutoDisconnection##classe::MetaObject(),(void *)CreateTIECATIUExitAutoDisconnection##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIUExitAutoDisconnection(classe) TIE_CATIUExitAutoDisconnection(classe)
#else
#define BOA_CATIUExitAutoDisconnection(classe) CATImplementBOA(CATIUExitAutoDisconnection, classe)
#endif

#endif
