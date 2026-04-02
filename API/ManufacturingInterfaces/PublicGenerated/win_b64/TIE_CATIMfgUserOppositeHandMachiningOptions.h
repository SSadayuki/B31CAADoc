#ifndef __TIE_CATIMfgUserOppositeHandMachiningOptions
#define __TIE_CATIMfgUserOppositeHandMachiningOptions

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgUserOppositeHandMachiningOptions.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgUserOppositeHandMachiningOptions */
#define declare_TIE_CATIMfgUserOppositeHandMachiningOptions(classe) \
 \
 \
class TIECATIMfgUserOppositeHandMachiningOptions##classe : public CATIMfgUserOppositeHandMachiningOptions \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgUserOppositeHandMachiningOptions, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetNames(CATUnicodeString & oOperationName, CATUnicodeString & oSettingName, CATUnicodeString & oRepositoryName) ; \
};



#define ENVTIEdeclare_CATIMfgUserOppositeHandMachiningOptions(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetNames(CATUnicodeString & oOperationName, CATUnicodeString & oSettingName, CATUnicodeString & oRepositoryName) ; \


#define ENVTIEdefine_CATIMfgUserOppositeHandMachiningOptions(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetNames(CATUnicodeString & oOperationName, CATUnicodeString & oSettingName, CATUnicodeString & oRepositoryName)  \
{ \
return (ENVTIECALL(CATIMfgUserOppositeHandMachiningOptions,ENVTIETypeLetter,ENVTIELetter)GetNames(oOperationName,oSettingName,oRepositoryName)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgUserOppositeHandMachiningOptions(classe)    TIECATIMfgUserOppositeHandMachiningOptions##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgUserOppositeHandMachiningOptions(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgUserOppositeHandMachiningOptions, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgUserOppositeHandMachiningOptions, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgUserOppositeHandMachiningOptions, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgUserOppositeHandMachiningOptions, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgUserOppositeHandMachiningOptions, classe) \
 \
HRESULT  TIECATIMfgUserOppositeHandMachiningOptions##classe::GetNames(CATUnicodeString & oOperationName, CATUnicodeString & oSettingName, CATUnicodeString & oRepositoryName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNames(oOperationName,oSettingName,oRepositoryName)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgUserOppositeHandMachiningOptions(classe) \
 \
 \
declare_TIE_CATIMfgUserOppositeHandMachiningOptions(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgUserOppositeHandMachiningOptions##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgUserOppositeHandMachiningOptions,"CATIMfgUserOppositeHandMachiningOptions",CATIMfgUserOppositeHandMachiningOptions::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgUserOppositeHandMachiningOptions(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgUserOppositeHandMachiningOptions, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgUserOppositeHandMachiningOptions##classe(classe::MetaObject(),CATIMfgUserOppositeHandMachiningOptions::MetaObject(),(void *)CreateTIECATIMfgUserOppositeHandMachiningOptions##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgUserOppositeHandMachiningOptions(classe) \
 \
 \
declare_TIE_CATIMfgUserOppositeHandMachiningOptions(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgUserOppositeHandMachiningOptions##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgUserOppositeHandMachiningOptions,"CATIMfgUserOppositeHandMachiningOptions",CATIMfgUserOppositeHandMachiningOptions::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgUserOppositeHandMachiningOptions(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgUserOppositeHandMachiningOptions, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgUserOppositeHandMachiningOptions##classe(classe::MetaObject(),CATIMfgUserOppositeHandMachiningOptions::MetaObject(),(void *)CreateTIECATIMfgUserOppositeHandMachiningOptions##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgUserOppositeHandMachiningOptions(classe) TIE_CATIMfgUserOppositeHandMachiningOptions(classe)
#else
#define BOA_CATIMfgUserOppositeHandMachiningOptions(classe) CATImplementBOA(CATIMfgUserOppositeHandMachiningOptions, classe)
#endif

#endif
