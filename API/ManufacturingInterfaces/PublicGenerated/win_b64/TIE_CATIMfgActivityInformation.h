#ifndef __TIE_CATIMfgActivityInformation
#define __TIE_CATIMfgActivityInformation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgActivityInformation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgActivityInformation */
#define declare_TIE_CATIMfgActivityInformation(classe) \
 \
 \
class TIECATIMfgActivityInformation##classe : public CATIMfgActivityInformation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgActivityInformation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetImplementedKeyWords (CATListOfCATUnicodeString &oListKeyWords); \
      virtual HRESULT GetInfo (CATUnicodeString &iKeyWords, CATUnicodeString &oInfoValue, int &oMode); \
};



#define ENVTIEdeclare_CATIMfgActivityInformation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetImplementedKeyWords (CATListOfCATUnicodeString &oListKeyWords); \
virtual HRESULT GetInfo (CATUnicodeString &iKeyWords, CATUnicodeString &oInfoValue, int &oMode); \


#define ENVTIEdefine_CATIMfgActivityInformation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetImplementedKeyWords (CATListOfCATUnicodeString &oListKeyWords) \
{ \
return (ENVTIECALL(CATIMfgActivityInformation,ENVTIETypeLetter,ENVTIELetter)GetImplementedKeyWords (oListKeyWords)); \
} \
HRESULT  ENVTIEName::GetInfo (CATUnicodeString &iKeyWords, CATUnicodeString &oInfoValue, int &oMode) \
{ \
return (ENVTIECALL(CATIMfgActivityInformation,ENVTIETypeLetter,ENVTIELetter)GetInfo (iKeyWords,oInfoValue,oMode)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgActivityInformation(classe)    TIECATIMfgActivityInformation##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgActivityInformation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgActivityInformation, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgActivityInformation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgActivityInformation, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgActivityInformation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgActivityInformation, classe) \
 \
HRESULT  TIECATIMfgActivityInformation##classe::GetImplementedKeyWords (CATListOfCATUnicodeString &oListKeyWords) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetImplementedKeyWords (oListKeyWords)); \
} \
HRESULT  TIECATIMfgActivityInformation##classe::GetInfo (CATUnicodeString &iKeyWords, CATUnicodeString &oInfoValue, int &oMode) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInfo (iKeyWords,oInfoValue,oMode)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgActivityInformation(classe) \
 \
 \
declare_TIE_CATIMfgActivityInformation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgActivityInformation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgActivityInformation,"CATIMfgActivityInformation",CATIMfgActivityInformation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgActivityInformation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgActivityInformation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgActivityInformation##classe(classe::MetaObject(),CATIMfgActivityInformation::MetaObject(),(void *)CreateTIECATIMfgActivityInformation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgActivityInformation(classe) \
 \
 \
declare_TIE_CATIMfgActivityInformation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgActivityInformation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgActivityInformation,"CATIMfgActivityInformation",CATIMfgActivityInformation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgActivityInformation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgActivityInformation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgActivityInformation##classe(classe::MetaObject(),CATIMfgActivityInformation::MetaObject(),(void *)CreateTIECATIMfgActivityInformation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgActivityInformation(classe) TIE_CATIMfgActivityInformation(classe)
#else
#define BOA_CATIMfgActivityInformation(classe) CATImplementBOA(CATIMfgActivityInformation, classe)
#endif

#endif
