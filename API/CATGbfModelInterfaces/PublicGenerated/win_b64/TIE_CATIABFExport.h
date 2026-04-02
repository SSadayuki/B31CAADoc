#ifndef __TIE_CATIABFExport
#define __TIE_CATIABFExport

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIABFExport.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIABFExport */
#define declare_TIE_CATIABFExport(classe) \
 \
 \
class TIECATIABFExport##classe : public CATIABFExport \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIABFExport, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT SetOutputFilePath(const CATUnicodeString & iExportDirectoryPath, const CATUnicodeString & iExportFileName) ; \
      virtual HRESULT SetAdditionalInfoFlag(const CATBoolean & ibIncludeAdditionalInfo) ; \
      virtual HRESULT SetCommentsFlag(const CATBoolean & ibIncludeComments) ; \
      virtual HRESULT SetUnit(const CATUnicodeString & iUnit) ; \
      virtual HRESULT SetPrecision(const int & iNbDigits) ; \
      virtual HRESULT SetScientificFlag(const CATBoolean & ibScientificFlag) ; \
      virtual HRESULT SetDiscretizationMethod(const CATUnicodeString & iDiscMethod) ; \
      virtual HRESULT SetDiscretizationTolerance(const double & iTolerance) ; \
      virtual HRESULT Export() ; \
};



#define ENVTIEdeclare_CATIABFExport(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT SetOutputFilePath(const CATUnicodeString & iExportDirectoryPath, const CATUnicodeString & iExportFileName) ; \
virtual HRESULT SetAdditionalInfoFlag(const CATBoolean & ibIncludeAdditionalInfo) ; \
virtual HRESULT SetCommentsFlag(const CATBoolean & ibIncludeComments) ; \
virtual HRESULT SetUnit(const CATUnicodeString & iUnit) ; \
virtual HRESULT SetPrecision(const int & iNbDigits) ; \
virtual HRESULT SetScientificFlag(const CATBoolean & ibScientificFlag) ; \
virtual HRESULT SetDiscretizationMethod(const CATUnicodeString & iDiscMethod) ; \
virtual HRESULT SetDiscretizationTolerance(const double & iTolerance) ; \
virtual HRESULT Export() ; \


#define ENVTIEdefine_CATIABFExport(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::SetOutputFilePath(const CATUnicodeString & iExportDirectoryPath, const CATUnicodeString & iExportFileName)  \
{ \
return (ENVTIECALL(CATIABFExport,ENVTIETypeLetter,ENVTIELetter)SetOutputFilePath(iExportDirectoryPath,iExportFileName)); \
} \
HRESULT  ENVTIEName::SetAdditionalInfoFlag(const CATBoolean & ibIncludeAdditionalInfo)  \
{ \
return (ENVTIECALL(CATIABFExport,ENVTIETypeLetter,ENVTIELetter)SetAdditionalInfoFlag(ibIncludeAdditionalInfo)); \
} \
HRESULT  ENVTIEName::SetCommentsFlag(const CATBoolean & ibIncludeComments)  \
{ \
return (ENVTIECALL(CATIABFExport,ENVTIETypeLetter,ENVTIELetter)SetCommentsFlag(ibIncludeComments)); \
} \
HRESULT  ENVTIEName::SetUnit(const CATUnicodeString & iUnit)  \
{ \
return (ENVTIECALL(CATIABFExport,ENVTIETypeLetter,ENVTIELetter)SetUnit(iUnit)); \
} \
HRESULT  ENVTIEName::SetPrecision(const int & iNbDigits)  \
{ \
return (ENVTIECALL(CATIABFExport,ENVTIETypeLetter,ENVTIELetter)SetPrecision(iNbDigits)); \
} \
HRESULT  ENVTIEName::SetScientificFlag(const CATBoolean & ibScientificFlag)  \
{ \
return (ENVTIECALL(CATIABFExport,ENVTIETypeLetter,ENVTIELetter)SetScientificFlag(ibScientificFlag)); \
} \
HRESULT  ENVTIEName::SetDiscretizationMethod(const CATUnicodeString & iDiscMethod)  \
{ \
return (ENVTIECALL(CATIABFExport,ENVTIETypeLetter,ENVTIELetter)SetDiscretizationMethod(iDiscMethod)); \
} \
HRESULT  ENVTIEName::SetDiscretizationTolerance(const double & iTolerance)  \
{ \
return (ENVTIECALL(CATIABFExport,ENVTIETypeLetter,ENVTIELetter)SetDiscretizationTolerance(iTolerance)); \
} \
HRESULT  ENVTIEName::Export()  \
{ \
return (ENVTIECALL(CATIABFExport,ENVTIETypeLetter,ENVTIELetter)Export()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIABFExport(classe)    TIECATIABFExport##classe


/* Common methods inside a TIE */
#define common_TIE_CATIABFExport(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIABFExport, classe) \
 \
 \
CATImplementTIEMethods(CATIABFExport, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIABFExport, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIABFExport, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIABFExport, classe) \
 \
HRESULT  TIECATIABFExport##classe::SetOutputFilePath(const CATUnicodeString & iExportDirectoryPath, const CATUnicodeString & iExportFileName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOutputFilePath(iExportDirectoryPath,iExportFileName)); \
} \
HRESULT  TIECATIABFExport##classe::SetAdditionalInfoFlag(const CATBoolean & ibIncludeAdditionalInfo)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAdditionalInfoFlag(ibIncludeAdditionalInfo)); \
} \
HRESULT  TIECATIABFExport##classe::SetCommentsFlag(const CATBoolean & ibIncludeComments)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCommentsFlag(ibIncludeComments)); \
} \
HRESULT  TIECATIABFExport##classe::SetUnit(const CATUnicodeString & iUnit)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUnit(iUnit)); \
} \
HRESULT  TIECATIABFExport##classe::SetPrecision(const int & iNbDigits)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPrecision(iNbDigits)); \
} \
HRESULT  TIECATIABFExport##classe::SetScientificFlag(const CATBoolean & ibScientificFlag)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetScientificFlag(ibScientificFlag)); \
} \
HRESULT  TIECATIABFExport##classe::SetDiscretizationMethod(const CATUnicodeString & iDiscMethod)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDiscretizationMethod(iDiscMethod)); \
} \
HRESULT  TIECATIABFExport##classe::SetDiscretizationTolerance(const double & iTolerance)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDiscretizationTolerance(iTolerance)); \
} \
HRESULT  TIECATIABFExport##classe::Export()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Export()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIABFExport(classe) \
 \
 \
declare_TIE_CATIABFExport(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIABFExport##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIABFExport,"CATIABFExport",CATIABFExport::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIABFExport(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIABFExport, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIABFExport##classe(classe::MetaObject(),CATIABFExport::MetaObject(),(void *)CreateTIECATIABFExport##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIABFExport(classe) \
 \
 \
declare_TIE_CATIABFExport(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIABFExport##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIABFExport,"CATIABFExport",CATIABFExport::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIABFExport(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIABFExport, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIABFExport##classe(classe::MetaObject(),CATIABFExport::MetaObject(),(void *)CreateTIECATIABFExport##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIABFExport(classe) TIE_CATIABFExport(classe)
#else
#define BOA_CATIABFExport(classe) CATImplementBOA(CATIABFExport, classe)
#endif

#endif
