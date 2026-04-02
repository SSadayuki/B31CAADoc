#ifndef __TIE_CATISchAppCntrName
#define __TIE_CATISchAppCntrName

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppCntrName.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppCntrName */
#define declare_TIE_CATISchAppCntrName(classe) \
 \
 \
class TIECATISchAppCntrName##classe : public CATISchAppCntrName \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppCntrName, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppListNames (CATICStringList **oLConnectorNamesAllowed) ; \
      virtual HRESULT GetName (char **oName) ; \
      virtual HRESULT SetName (const char *iName) ; \
      virtual HRESULT AppListNames2 (CATListOfCATUnicodeString &oLConnectorNamesAllowed) ; \
      virtual HRESULT GetName2 (CATUnicodeString &oName) ; \
      virtual HRESULT SetName2 (const CATUnicodeString &iName) ; \
};



#define ENVTIEdeclare_CATISchAppCntrName(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppListNames (CATICStringList **oLConnectorNamesAllowed) ; \
virtual HRESULT GetName (char **oName) ; \
virtual HRESULT SetName (const char *iName) ; \
virtual HRESULT AppListNames2 (CATListOfCATUnicodeString &oLConnectorNamesAllowed) ; \
virtual HRESULT GetName2 (CATUnicodeString &oName) ; \
virtual HRESULT SetName2 (const CATUnicodeString &iName) ; \


#define ENVTIEdefine_CATISchAppCntrName(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppListNames (CATICStringList **oLConnectorNamesAllowed)  \
{ \
return (ENVTIECALL(CATISchAppCntrName,ENVTIETypeLetter,ENVTIELetter)AppListNames (oLConnectorNamesAllowed)); \
} \
HRESULT  ENVTIEName::GetName (char **oName)  \
{ \
return (ENVTIECALL(CATISchAppCntrName,ENVTIETypeLetter,ENVTIELetter)GetName (oName)); \
} \
HRESULT  ENVTIEName::SetName (const char *iName)  \
{ \
return (ENVTIECALL(CATISchAppCntrName,ENVTIETypeLetter,ENVTIELetter)SetName (iName)); \
} \
HRESULT  ENVTIEName::AppListNames2 (CATListOfCATUnicodeString &oLConnectorNamesAllowed)  \
{ \
return (ENVTIECALL(CATISchAppCntrName,ENVTIETypeLetter,ENVTIELetter)AppListNames2 (oLConnectorNamesAllowed)); \
} \
HRESULT  ENVTIEName::GetName2 (CATUnicodeString &oName)  \
{ \
return (ENVTIECALL(CATISchAppCntrName,ENVTIETypeLetter,ENVTIELetter)GetName2 (oName)); \
} \
HRESULT  ENVTIEName::SetName2 (const CATUnicodeString &iName)  \
{ \
return (ENVTIECALL(CATISchAppCntrName,ENVTIETypeLetter,ENVTIELetter)SetName2 (iName)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppCntrName(classe)    TIECATISchAppCntrName##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppCntrName(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppCntrName, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppCntrName, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppCntrName, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppCntrName, classe) \
 \
HRESULT  TIECATISchAppCntrName##classe::AppListNames (CATICStringList **oLConnectorNamesAllowed)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListNames (oLConnectorNamesAllowed)); \
} \
HRESULT  TIECATISchAppCntrName##classe::GetName (char **oName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetName (oName)); \
} \
HRESULT  TIECATISchAppCntrName##classe::SetName (const char *iName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetName (iName)); \
} \
HRESULT  TIECATISchAppCntrName##classe::AppListNames2 (CATListOfCATUnicodeString &oLConnectorNamesAllowed)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListNames2 (oLConnectorNamesAllowed)); \
} \
HRESULT  TIECATISchAppCntrName##classe::GetName2 (CATUnicodeString &oName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetName2 (oName)); \
} \
HRESULT  TIECATISchAppCntrName##classe::SetName2 (const CATUnicodeString &iName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetName2 (iName)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppCntrName(classe) \
 \
 \
declare_TIE_CATISchAppCntrName(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppCntrName##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppCntrName,"CATISchAppCntrName",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppCntrName(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppCntrName, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppCntrName##classe(classe::MetaObject(),TIECATISchAppCntrName##classe::MetaObject(),(void *)CreateTIECATISchAppCntrName##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppCntrName(classe) \
 \
 \
declare_TIE_CATISchAppCntrName(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppCntrName##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppCntrName,"CATISchAppCntrName",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppCntrName(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppCntrName, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppCntrName##classe(classe::MetaObject(),TIECATISchAppCntrName##classe::MetaObject(),(void *)CreateTIECATISchAppCntrName##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppCntrName(classe) TIE_CATISchAppCntrName(classe)
#else
#define BOA_CATISchAppCntrName(classe) CATImplementBOA(CATISchAppCntrName, classe)
#endif

#endif
