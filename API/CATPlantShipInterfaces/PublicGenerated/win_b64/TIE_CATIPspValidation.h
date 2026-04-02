#ifndef __TIE_CATIPspValidation
#define __TIE_CATIPspValidation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPspValidation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPspValidation */
#define declare_TIE_CATIPspValidation(classe) \
 \
 \
class TIECATIPspValidation##classe : public CATIPspValidation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPspValidation, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetValidationChecks( CATListValCATUnicodeString& oChecks ) ; \
      virtual HRESULT GetClassification( CATUnicodeString& oClassification ) ; \
      virtual HRESULT GetCheckName( const CATUnicodeString& iCheck, CATUnicodeString& oName ) ; \
      virtual HRESULT GetViolationObjectType( CATUnicodeString& oType ) ; \
      virtual HRESULT IsObjectAViolation( const CATBaseUnknown* iObject, const CATListValCATUnicodeString& iChecks, CATListPV** oViolation, const unsigned int& iErrorFile = 0 ) ; \
      virtual HRESULT IsMemberAViolation( const CATIPspGroup* iGroup, const CATIUnknownList* iMembers, const IUnknown* iObject, const CATListValCATUnicodeString& iChecks, CATListPV** oViolation, const unsigned int& iErrorFile = 0 ) ; \
      virtual HRESULT GetColumnTitles( CATListValCATUnicodeString& oTitles ) ; \
      virtual HRESULT GetDocColumnTitles( CATListValCATUnicodeString& oDocTitles, CATListValCATUnicodeString& oObjectTitles) ; \
      virtual HRESULT LogContextObject( const CATBaseUnknown* iObject, const unsigned int& iErrorFile=0 ) ; \
      virtual HRESULT GetContextObjectViolation( const int& iIndex, CATPspViolationProduct** oProduct, CATListPV** oViolation ) ; \
      virtual HRESULT GetContextObjectViolationCount( int& oNumber ) ; \
      virtual HRESULT IsAnIntegrationCheck() ; \
      virtual HRESULT IsAFromToCheck() ; \
};



#define ENVTIEdeclare_CATIPspValidation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetValidationChecks( CATListValCATUnicodeString& oChecks ) ; \
virtual HRESULT GetClassification( CATUnicodeString& oClassification ) ; \
virtual HRESULT GetCheckName( const CATUnicodeString& iCheck, CATUnicodeString& oName ) ; \
virtual HRESULT GetViolationObjectType( CATUnicodeString& oType ) ; \
virtual HRESULT IsObjectAViolation( const CATBaseUnknown* iObject, const CATListValCATUnicodeString& iChecks, CATListPV** oViolation, const unsigned int& iErrorFile = 0 ) ; \
virtual HRESULT IsMemberAViolation( const CATIPspGroup* iGroup, const CATIUnknownList* iMembers, const IUnknown* iObject, const CATListValCATUnicodeString& iChecks, CATListPV** oViolation, const unsigned int& iErrorFile = 0 ) ; \
virtual HRESULT GetColumnTitles( CATListValCATUnicodeString& oTitles ) ; \
virtual HRESULT GetDocColumnTitles( CATListValCATUnicodeString& oDocTitles, CATListValCATUnicodeString& oObjectTitles) ; \
virtual HRESULT LogContextObject( const CATBaseUnknown* iObject, const unsigned int& iErrorFile=0 ) ; \
virtual HRESULT GetContextObjectViolation( const int& iIndex, CATPspViolationProduct** oProduct, CATListPV** oViolation ) ; \
virtual HRESULT GetContextObjectViolationCount( int& oNumber ) ; \
virtual HRESULT IsAnIntegrationCheck() ; \
virtual HRESULT IsAFromToCheck() ; \


#define ENVTIEdefine_CATIPspValidation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetValidationChecks( CATListValCATUnicodeString& oChecks )  \
{ \
return (ENVTIECALL(CATIPspValidation,ENVTIETypeLetter,ENVTIELetter)GetValidationChecks(oChecks )); \
} \
HRESULT  ENVTIEName::GetClassification( CATUnicodeString& oClassification )  \
{ \
return (ENVTIECALL(CATIPspValidation,ENVTIETypeLetter,ENVTIELetter)GetClassification(oClassification )); \
} \
HRESULT  ENVTIEName::GetCheckName( const CATUnicodeString& iCheck, CATUnicodeString& oName )  \
{ \
return (ENVTIECALL(CATIPspValidation,ENVTIETypeLetter,ENVTIELetter)GetCheckName(iCheck,oName )); \
} \
HRESULT  ENVTIEName::GetViolationObjectType( CATUnicodeString& oType )  \
{ \
return (ENVTIECALL(CATIPspValidation,ENVTIETypeLetter,ENVTIELetter)GetViolationObjectType(oType )); \
} \
HRESULT  ENVTIEName::IsObjectAViolation( const CATBaseUnknown* iObject, const CATListValCATUnicodeString& iChecks, CATListPV** oViolation, const unsigned int& iErrorFile )  \
{ \
return (ENVTIECALL(CATIPspValidation,ENVTIETypeLetter,ENVTIELetter)IsObjectAViolation(iObject,iChecks,oViolation,iErrorFile )); \
} \
HRESULT  ENVTIEName::IsMemberAViolation( const CATIPspGroup* iGroup, const CATIUnknownList* iMembers, const IUnknown* iObject, const CATListValCATUnicodeString& iChecks, CATListPV** oViolation, const unsigned int& iErrorFile )  \
{ \
return (ENVTIECALL(CATIPspValidation,ENVTIETypeLetter,ENVTIELetter)IsMemberAViolation(iGroup,iMembers,iObject,iChecks,oViolation,iErrorFile )); \
} \
HRESULT  ENVTIEName::GetColumnTitles( CATListValCATUnicodeString& oTitles )  \
{ \
return (ENVTIECALL(CATIPspValidation,ENVTIETypeLetter,ENVTIELetter)GetColumnTitles(oTitles )); \
} \
HRESULT  ENVTIEName::GetDocColumnTitles( CATListValCATUnicodeString& oDocTitles, CATListValCATUnicodeString& oObjectTitles)  \
{ \
return (ENVTIECALL(CATIPspValidation,ENVTIETypeLetter,ENVTIELetter)GetDocColumnTitles(oDocTitles,oObjectTitles)); \
} \
HRESULT  ENVTIEName::LogContextObject( const CATBaseUnknown* iObject, const unsigned int& iErrorFile)  \
{ \
return (ENVTIECALL(CATIPspValidation,ENVTIETypeLetter,ENVTIELetter)LogContextObject(iObject,iErrorFile)); \
} \
HRESULT  ENVTIEName::GetContextObjectViolation( const int& iIndex, CATPspViolationProduct** oProduct, CATListPV** oViolation )  \
{ \
return (ENVTIECALL(CATIPspValidation,ENVTIETypeLetter,ENVTIELetter)GetContextObjectViolation(iIndex,oProduct,oViolation )); \
} \
HRESULT  ENVTIEName::GetContextObjectViolationCount( int& oNumber )  \
{ \
return (ENVTIECALL(CATIPspValidation,ENVTIETypeLetter,ENVTIELetter)GetContextObjectViolationCount(oNumber )); \
} \
HRESULT  ENVTIEName::IsAnIntegrationCheck()  \
{ \
return (ENVTIECALL(CATIPspValidation,ENVTIETypeLetter,ENVTIELetter)IsAnIntegrationCheck()); \
} \
HRESULT  ENVTIEName::IsAFromToCheck()  \
{ \
return (ENVTIECALL(CATIPspValidation,ENVTIETypeLetter,ENVTIELetter)IsAFromToCheck()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPspValidation(classe)    TIECATIPspValidation##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPspValidation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPspValidation, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATIPspValidation, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATIPspValidation, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPspValidation, classe) \
 \
HRESULT  TIECATIPspValidation##classe::GetValidationChecks( CATListValCATUnicodeString& oChecks )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetValidationChecks(oChecks )); \
} \
HRESULT  TIECATIPspValidation##classe::GetClassification( CATUnicodeString& oClassification )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetClassification(oClassification )); \
} \
HRESULT  TIECATIPspValidation##classe::GetCheckName( const CATUnicodeString& iCheck, CATUnicodeString& oName )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCheckName(iCheck,oName )); \
} \
HRESULT  TIECATIPspValidation##classe::GetViolationObjectType( CATUnicodeString& oType )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetViolationObjectType(oType )); \
} \
HRESULT  TIECATIPspValidation##classe::IsObjectAViolation( const CATBaseUnknown* iObject, const CATListValCATUnicodeString& iChecks, CATListPV** oViolation, const unsigned int& iErrorFile )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsObjectAViolation(iObject,iChecks,oViolation,iErrorFile )); \
} \
HRESULT  TIECATIPspValidation##classe::IsMemberAViolation( const CATIPspGroup* iGroup, const CATIUnknownList* iMembers, const IUnknown* iObject, const CATListValCATUnicodeString& iChecks, CATListPV** oViolation, const unsigned int& iErrorFile )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsMemberAViolation(iGroup,iMembers,iObject,iChecks,oViolation,iErrorFile )); \
} \
HRESULT  TIECATIPspValidation##classe::GetColumnTitles( CATListValCATUnicodeString& oTitles )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetColumnTitles(oTitles )); \
} \
HRESULT  TIECATIPspValidation##classe::GetDocColumnTitles( CATListValCATUnicodeString& oDocTitles, CATListValCATUnicodeString& oObjectTitles)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDocColumnTitles(oDocTitles,oObjectTitles)); \
} \
HRESULT  TIECATIPspValidation##classe::LogContextObject( const CATBaseUnknown* iObject, const unsigned int& iErrorFile)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LogContextObject(iObject,iErrorFile)); \
} \
HRESULT  TIECATIPspValidation##classe::GetContextObjectViolation( const int& iIndex, CATPspViolationProduct** oProduct, CATListPV** oViolation )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetContextObjectViolation(iIndex,oProduct,oViolation )); \
} \
HRESULT  TIECATIPspValidation##classe::GetContextObjectViolationCount( int& oNumber )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetContextObjectViolationCount(oNumber )); \
} \
HRESULT  TIECATIPspValidation##classe::IsAnIntegrationCheck()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAnIntegrationCheck()); \
} \
HRESULT  TIECATIPspValidation##classe::IsAFromToCheck()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAFromToCheck()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPspValidation(classe) \
 \
 \
declare_TIE_CATIPspValidation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPspValidation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPspValidation,"CATIPspValidation",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPspValidation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPspValidation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPspValidation##classe(classe::MetaObject(),TIECATIPspValidation##classe::MetaObject(),(void *)CreateTIECATIPspValidation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPspValidation(classe) \
 \
 \
declare_TIE_CATIPspValidation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPspValidation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPspValidation,"CATIPspValidation",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPspValidation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPspValidation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPspValidation##classe(classe::MetaObject(),TIECATIPspValidation##classe::MetaObject(),(void *)CreateTIECATIPspValidation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPspValidation(classe) TIE_CATIPspValidation(classe)
#else
#define BOA_CATIPspValidation(classe) CATImplementBOA(CATIPspValidation, classe)
#endif

#endif
