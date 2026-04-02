#ifndef __TIE_CATIIcon
#define __TIE_CATIIcon

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIIcon.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIIcon */
#define declare_TIE_CATIIcon(classe) \
 \
 \
class TIECATIIcon##classe : public CATIIcon \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIIcon, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetIconName (CATUnicodeString& oName); \
      virtual HRESULT SetIconName (const CATUnicodeString& iName); \
};



#define ENVTIEdeclare_CATIIcon(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetIconName (CATUnicodeString& oName); \
virtual HRESULT SetIconName (const CATUnicodeString& iName); \


#define ENVTIEdefine_CATIIcon(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetIconName (CATUnicodeString& oName) \
{ \
return (ENVTIECALL(CATIIcon,ENVTIETypeLetter,ENVTIELetter)GetIconName (oName)); \
} \
HRESULT  ENVTIEName::SetIconName (const CATUnicodeString& iName) \
{ \
return (ENVTIECALL(CATIIcon,ENVTIETypeLetter,ENVTIELetter)SetIconName (iName)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIIcon(classe)    TIECATIIcon##classe


/* Common methods inside a TIE */
#define common_TIE_CATIIcon(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIIcon, classe) \
 \
 \
CATImplementTIEMethods(CATIIcon, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIIcon, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIIcon, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIIcon, classe) \
 \
HRESULT  TIECATIIcon##classe::GetIconName (CATUnicodeString& oName) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetIconName (oName)); \
} \
HRESULT  TIECATIIcon##classe::SetIconName (const CATUnicodeString& iName) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetIconName (iName)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIIcon(classe) \
 \
 \
declare_TIE_CATIIcon(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIIcon##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIIcon,"CATIIcon",CATIIcon::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIIcon(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIIcon, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIIcon##classe(classe::MetaObject(),CATIIcon::MetaObject(),(void *)CreateTIECATIIcon##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIIcon(classe) \
 \
 \
declare_TIE_CATIIcon(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIIcon##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIIcon,"CATIIcon",CATIIcon::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIIcon(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIIcon, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIIcon##classe(classe::MetaObject(),CATIIcon::MetaObject(),(void *)CreateTIECATIIcon##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIIcon(classe) TIE_CATIIcon(classe)
#else
#define BOA_CATIIcon(classe) CATImplementBOA(CATIIcon, classe)
#endif

#endif
