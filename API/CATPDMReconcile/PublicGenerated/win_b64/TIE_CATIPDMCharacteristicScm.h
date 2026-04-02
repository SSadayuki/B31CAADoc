#ifndef __TIE_CATIPDMCharacteristicScm
#define __TIE_CATIPDMCharacteristicScm

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPDMCharacteristicScm.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPDMCharacteristicScm */
#define declare_TIE_CATIPDMCharacteristicScm(classe) \
 \
 \
class TIECATIPDMCharacteristicScm##classe : public CATIPDMCharacteristicScm \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPDMCharacteristicScm, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetName( CATUnicodeString & oName ) const ; \
      virtual HRESULT IsApplicable( CATScmObject * iCATRecObj ) const ; \
      virtual HRESULT ExecuteCharacteristic( CATScmObject                * iCATRecObj , CATUnicodeString           ** oCharStatusList , CATListValCATUnicodeString ** oCATCharList , CATListValCATUnicodeString ** oPDMCharList ) ; \
};



#define ENVTIEdeclare_CATIPDMCharacteristicScm(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetName( CATUnicodeString & oName ) const ; \
virtual HRESULT IsApplicable( CATScmObject * iCATRecObj ) const ; \
virtual HRESULT ExecuteCharacteristic( CATScmObject                * iCATRecObj , CATUnicodeString           ** oCharStatusList , CATListValCATUnicodeString ** oCATCharList , CATListValCATUnicodeString ** oPDMCharList ) ; \


#define ENVTIEdefine_CATIPDMCharacteristicScm(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetName( CATUnicodeString & oName ) const  \
{ \
return (ENVTIECALL(CATIPDMCharacteristicScm,ENVTIETypeLetter,ENVTIELetter)GetName(oName )); \
} \
HRESULT  ENVTIEName::IsApplicable( CATScmObject * iCATRecObj ) const  \
{ \
return (ENVTIECALL(CATIPDMCharacteristicScm,ENVTIETypeLetter,ENVTIELetter)IsApplicable(iCATRecObj )); \
} \
HRESULT  ENVTIEName::ExecuteCharacteristic( CATScmObject                * iCATRecObj , CATUnicodeString           ** oCharStatusList , CATListValCATUnicodeString ** oCATCharList , CATListValCATUnicodeString ** oPDMCharList )  \
{ \
return (ENVTIECALL(CATIPDMCharacteristicScm,ENVTIETypeLetter,ENVTIELetter)ExecuteCharacteristic(iCATRecObj ,oCharStatusList ,oCATCharList ,oPDMCharList )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPDMCharacteristicScm(classe)    TIECATIPDMCharacteristicScm##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPDMCharacteristicScm(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPDMCharacteristicScm, classe) \
 \
 \
CATImplementTIEMethods(CATIPDMCharacteristicScm, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPDMCharacteristicScm, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPDMCharacteristicScm, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPDMCharacteristicScm, classe) \
 \
HRESULT  TIECATIPDMCharacteristicScm##classe::GetName( CATUnicodeString & oName ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetName(oName )); \
} \
HRESULT  TIECATIPDMCharacteristicScm##classe::IsApplicable( CATScmObject * iCATRecObj ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsApplicable(iCATRecObj )); \
} \
HRESULT  TIECATIPDMCharacteristicScm##classe::ExecuteCharacteristic( CATScmObject                * iCATRecObj , CATUnicodeString           ** oCharStatusList , CATListValCATUnicodeString ** oCATCharList , CATListValCATUnicodeString ** oPDMCharList )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExecuteCharacteristic(iCATRecObj ,oCharStatusList ,oCATCharList ,oPDMCharList )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPDMCharacteristicScm(classe) \
 \
 \
declare_TIE_CATIPDMCharacteristicScm(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMCharacteristicScm##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMCharacteristicScm,"CATIPDMCharacteristicScm",CATIPDMCharacteristicScm::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMCharacteristicScm(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPDMCharacteristicScm, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMCharacteristicScm##classe(classe::MetaObject(),CATIPDMCharacteristicScm::MetaObject(),(void *)CreateTIECATIPDMCharacteristicScm##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPDMCharacteristicScm(classe) \
 \
 \
declare_TIE_CATIPDMCharacteristicScm(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMCharacteristicScm##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMCharacteristicScm,"CATIPDMCharacteristicScm",CATIPDMCharacteristicScm::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMCharacteristicScm(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPDMCharacteristicScm, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMCharacteristicScm##classe(classe::MetaObject(),CATIPDMCharacteristicScm::MetaObject(),(void *)CreateTIECATIPDMCharacteristicScm##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPDMCharacteristicScm(classe) TIE_CATIPDMCharacteristicScm(classe)
#else
#define BOA_CATIPDMCharacteristicScm(classe) CATImplementBOA(CATIPDMCharacteristicScm, classe)
#endif

#endif
