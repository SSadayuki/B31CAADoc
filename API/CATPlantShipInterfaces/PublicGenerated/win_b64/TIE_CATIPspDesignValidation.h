#ifndef __TIE_CATIPspDesignValidation
#define __TIE_CATIPspDesignValidation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPspDesignValidation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPspDesignValidation */
#define declare_TIE_CATIPspDesignValidation(classe) \
 \
 \
class TIECATIPspDesignValidation##classe : public CATIPspDesignValidation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPspDesignValidation, classe) \
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



#define ENVTIEdeclare_CATIPspDesignValidation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
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


#define ENVTIEdefine_CATIPspDesignValidation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetValidationChecks( CATListValCATUnicodeString& oChecks )  \
{ \
return (ENVTIECALL(CATIPspDesignValidation,ENVTIETypeLetter,ENVTIELetter)GetValidationChecks(oChecks )); \
} \
HRESULT  ENVTIEName::GetClassification( CATUnicodeString& oClassification )  \
{ \
return (ENVTIECALL(CATIPspDesignValidation,ENVTIETypeLetter,ENVTIELetter)GetClassification(oClassification )); \
} \
HRESULT  ENVTIEName::GetCheckName( const CATUnicodeString& iCheck, CATUnicodeString& oName )  \
{ \
return (ENVTIECALL(CATIPspDesignValidation,ENVTIETypeLetter,ENVTIELetter)GetCheckName(iCheck,oName )); \
} \
HRESULT  ENVTIEName::GetViolationObjectType( CATUnicodeString& oType )  \
{ \
return (ENVTIECALL(CATIPspDesignValidation,ENVTIETypeLetter,ENVTIELetter)GetViolationObjectType(oType )); \
} \
HRESULT  ENVTIEName::IsObjectAViolation( const CATBaseUnknown* iObject, const CATListValCATUnicodeString& iChecks, CATListPV** oViolation, const unsigned int& iErrorFile )  \
{ \
return (ENVTIECALL(CATIPspDesignValidation,ENVTIETypeLetter,ENVTIELetter)IsObjectAViolation(iObject,iChecks,oViolation,iErrorFile )); \
} \
HRESULT  ENVTIEName::IsMemberAViolation( const CATIPspGroup* iGroup, const CATIUnknownList* iMembers, const IUnknown* iObject, const CATListValCATUnicodeString& iChecks, CATListPV** oViolation, const unsigned int& iErrorFile )  \
{ \
return (ENVTIECALL(CATIPspDesignValidation,ENVTIETypeLetter,ENVTIELetter)IsMemberAViolation(iGroup,iMembers,iObject,iChecks,oViolation,iErrorFile )); \
} \
HRESULT  ENVTIEName::GetColumnTitles( CATListValCATUnicodeString& oTitles )  \
{ \
return (ENVTIECALL(CATIPspDesignValidation,ENVTIETypeLetter,ENVTIELetter)GetColumnTitles(oTitles )); \
} \
HRESULT  ENVTIEName::GetDocColumnTitles( CATListValCATUnicodeString& oDocTitles, CATListValCATUnicodeString& oObjectTitles)  \
{ \
return (ENVTIECALL(CATIPspDesignValidation,ENVTIETypeLetter,ENVTIELetter)GetDocColumnTitles(oDocTitles,oObjectTitles)); \
} \
HRESULT  ENVTIEName::LogContextObject( const CATBaseUnknown* iObject, const unsigned int& iErrorFile)  \
{ \
return (ENVTIECALL(CATIPspDesignValidation,ENVTIETypeLetter,ENVTIELetter)LogContextObject(iObject,iErrorFile)); \
} \
HRESULT  ENVTIEName::GetContextObjectViolation( const int& iIndex, CATPspViolationProduct** oProduct, CATListPV** oViolation )  \
{ \
return (ENVTIECALL(CATIPspDesignValidation,ENVTIETypeLetter,ENVTIELetter)GetContextObjectViolation(iIndex,oProduct,oViolation )); \
} \
HRESULT  ENVTIEName::GetContextObjectViolationCount( int& oNumber )  \
{ \
return (ENVTIECALL(CATIPspDesignValidation,ENVTIETypeLetter,ENVTIELetter)GetContextObjectViolationCount(oNumber )); \
} \
HRESULT  ENVTIEName::IsAnIntegrationCheck()  \
{ \
return (ENVTIECALL(CATIPspDesignValidation,ENVTIETypeLetter,ENVTIELetter)IsAnIntegrationCheck()); \
} \
HRESULT  ENVTIEName::IsAFromToCheck()  \
{ \
return (ENVTIECALL(CATIPspDesignValidation,ENVTIETypeLetter,ENVTIELetter)IsAFromToCheck()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPspDesignValidation(classe)    TIECATIPspDesignValidation##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPspDesignValidation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPspDesignValidation, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATIPspDesignValidation, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATIPspDesignValidation, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPspDesignValidation, classe) \
 \
HRESULT  TIECATIPspDesignValidation##classe::GetValidationChecks( CATListValCATUnicodeString& oChecks )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetValidationChecks(oChecks )); \
} \
HRESULT  TIECATIPspDesignValidation##classe::GetClassification( CATUnicodeString& oClassification )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetClassification(oClassification )); \
} \
HRESULT  TIECATIPspDesignValidation##classe::GetCheckName( const CATUnicodeString& iCheck, CATUnicodeString& oName )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCheckName(iCheck,oName )); \
} \
HRESULT  TIECATIPspDesignValidation##classe::GetViolationObjectType( CATUnicodeString& oType )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetViolationObjectType(oType )); \
} \
HRESULT  TIECATIPspDesignValidation##classe::IsObjectAViolation( const CATBaseUnknown* iObject, const CATListValCATUnicodeString& iChecks, CATListPV** oViolation, const unsigned int& iErrorFile )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsObjectAViolation(iObject,iChecks,oViolation,iErrorFile )); \
} \
HRESULT  TIECATIPspDesignValidation##classe::IsMemberAViolation( const CATIPspGroup* iGroup, const CATIUnknownList* iMembers, const IUnknown* iObject, const CATListValCATUnicodeString& iChecks, CATListPV** oViolation, const unsigned int& iErrorFile )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsMemberAViolation(iGroup,iMembers,iObject,iChecks,oViolation,iErrorFile )); \
} \
HRESULT  TIECATIPspDesignValidation##classe::GetColumnTitles( CATListValCATUnicodeString& oTitles )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetColumnTitles(oTitles )); \
} \
HRESULT  TIECATIPspDesignValidation##classe::GetDocColumnTitles( CATListValCATUnicodeString& oDocTitles, CATListValCATUnicodeString& oObjectTitles)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDocColumnTitles(oDocTitles,oObjectTitles)); \
} \
HRESULT  TIECATIPspDesignValidation##classe::LogContextObject( const CATBaseUnknown* iObject, const unsigned int& iErrorFile)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LogContextObject(iObject,iErrorFile)); \
} \
HRESULT  TIECATIPspDesignValidation##classe::GetContextObjectViolation( const int& iIndex, CATPspViolationProduct** oProduct, CATListPV** oViolation )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetContextObjectViolation(iIndex,oProduct,oViolation )); \
} \
HRESULT  TIECATIPspDesignValidation##classe::GetContextObjectViolationCount( int& oNumber )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetContextObjectViolationCount(oNumber )); \
} \
HRESULT  TIECATIPspDesignValidation##classe::IsAnIntegrationCheck()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAnIntegrationCheck()); \
} \
HRESULT  TIECATIPspDesignValidation##classe::IsAFromToCheck()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAFromToCheck()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPspDesignValidation(classe) \
 \
 \
declare_TIE_CATIPspDesignValidation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPspDesignValidation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPspDesignValidation,"CATIPspDesignValidation",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPspDesignValidation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPspDesignValidation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPspDesignValidation##classe(classe::MetaObject(),TIECATIPspDesignValidation##classe::MetaObject(),(void *)CreateTIECATIPspDesignValidation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPspDesignValidation(classe) \
 \
 \
declare_TIE_CATIPspDesignValidation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPspDesignValidation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPspDesignValidation,"CATIPspDesignValidation",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPspDesignValidation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPspDesignValidation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPspDesignValidation##classe(classe::MetaObject(),TIECATIPspDesignValidation##classe::MetaObject(),(void *)CreateTIECATIPspDesignValidation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPspDesignValidation(classe) TIE_CATIPspDesignValidation(classe)
#else
#define BOA_CATIPspDesignValidation(classe) CATImplementBOA(CATIPspDesignValidation, classe)
#endif

#endif
