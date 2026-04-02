#ifndef __TIE_CATIInstanceExtension
#define __TIE_CATIInstanceExtension

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIInstanceExtension.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIInstanceExtension */
#define declare_TIE_CATIInstanceExtension(classe) \
 \
 \
class TIECATIInstanceExtension##classe : public CATIInstanceExtension \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIInstanceExtension, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ListSupportedTypes( CATListValCATIType_var& iolListOfCATIType ) const ; \
      virtual HRESULT SetValue( const CATUnicodeString& iKey, const CATIValue_var& iValue ) ; \
      virtual CATIValue* GetValue( const CATUnicodeString& iKey ) ; \
};



#define ENVTIEdeclare_CATIInstanceExtension(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ListSupportedTypes( CATListValCATIType_var& iolListOfCATIType ) const ; \
virtual HRESULT SetValue( const CATUnicodeString& iKey, const CATIValue_var& iValue ) ; \
virtual CATIValue* GetValue( const CATUnicodeString& iKey ) ; \


#define ENVTIEdefine_CATIInstanceExtension(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ListSupportedTypes( CATListValCATIType_var& iolListOfCATIType ) const  \
{ \
return (ENVTIECALL(CATIInstanceExtension,ENVTIETypeLetter,ENVTIELetter)ListSupportedTypes(iolListOfCATIType )); \
} \
HRESULT  ENVTIEName::SetValue( const CATUnicodeString& iKey, const CATIValue_var& iValue )  \
{ \
return (ENVTIECALL(CATIInstanceExtension,ENVTIETypeLetter,ENVTIELetter)SetValue(iKey,iValue )); \
} \
CATIValue*  ENVTIEName::GetValue( const CATUnicodeString& iKey )  \
{ \
return (ENVTIECALL(CATIInstanceExtension,ENVTIETypeLetter,ENVTIELetter)GetValue(iKey )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIInstanceExtension(classe)    TIECATIInstanceExtension##classe


/* Common methods inside a TIE */
#define common_TIE_CATIInstanceExtension(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIInstanceExtension, classe) \
 \
 \
CATImplementTIEMethods(CATIInstanceExtension, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIInstanceExtension, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIInstanceExtension, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIInstanceExtension, classe) \
 \
HRESULT  TIECATIInstanceExtension##classe::ListSupportedTypes( CATListValCATIType_var& iolListOfCATIType ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListSupportedTypes(iolListOfCATIType )); \
} \
HRESULT  TIECATIInstanceExtension##classe::SetValue( const CATUnicodeString& iKey, const CATIValue_var& iValue )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetValue(iKey,iValue )); \
} \
CATIValue*  TIECATIInstanceExtension##classe::GetValue( const CATUnicodeString& iKey )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetValue(iKey )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIInstanceExtension(classe) \
 \
 \
declare_TIE_CATIInstanceExtension(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIInstanceExtension##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIInstanceExtension,"CATIInstanceExtension",CATIInstanceExtension::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIInstanceExtension(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIInstanceExtension, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIInstanceExtension##classe(classe::MetaObject(),CATIInstanceExtension::MetaObject(),(void *)CreateTIECATIInstanceExtension##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIInstanceExtension(classe) \
 \
 \
declare_TIE_CATIInstanceExtension(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIInstanceExtension##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIInstanceExtension,"CATIInstanceExtension",CATIInstanceExtension::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIInstanceExtension(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIInstanceExtension, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIInstanceExtension##classe(classe::MetaObject(),CATIInstanceExtension::MetaObject(),(void *)CreateTIECATIInstanceExtension##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIInstanceExtension(classe) TIE_CATIInstanceExtension(classe)
#else
#define BOA_CATIInstanceExtension(classe) CATImplementBOA(CATIInstanceExtension, classe)
#endif

#endif
