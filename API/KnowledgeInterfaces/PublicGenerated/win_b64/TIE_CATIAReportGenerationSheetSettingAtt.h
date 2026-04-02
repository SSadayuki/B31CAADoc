#ifndef __TIE_CATIAReportGenerationSheetSettingAtt
#define __TIE_CATIAReportGenerationSheetSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAReportGenerationSheetSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAReportGenerationSheetSettingAtt */
#define declare_TIE_CATIAReportGenerationSheetSettingAtt(classe) \
 \
 \
class TIECATIAReportGenerationSheetSettingAtt##classe : public CATIAReportGenerationSheetSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAReportGenerationSheetSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_CheckReportHtml(short & oCheckReportHtml); \
      virtual HRESULT __stdcall put_CheckReportHtml(short iCheckReportHtml); \
      virtual HRESULT __stdcall GetCheckReportHtmlInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetCheckReportHtmlLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AllChecksReport(short & oAllChecksReport); \
      virtual HRESULT __stdcall put_AllChecksReport(short iAllChecksReport); \
      virtual HRESULT __stdcall GetAllChecksReportInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAllChecksReportLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ReportCheckAdvisor(short & oReportCheckAdvisor); \
      virtual HRESULT __stdcall put_ReportCheckAdvisor(short iReportCheckAdvisor); \
      virtual HRESULT __stdcall GetReportCheckAdvisorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetReportCheckAdvisorLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ReportParametersInformation(short & oReportParametersInformation); \
      virtual HRESULT __stdcall put_ReportParametersInformation(short iReportParametersInformation); \
      virtual HRESULT __stdcall GetReportParametersInformationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetReportParametersInformationLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ReportCheckExpert(short & oReportCheckExpert); \
      virtual HRESULT __stdcall put_ReportCheckExpert(short iReportCheckExpert); \
      virtual HRESULT __stdcall GetReportCheckExpertInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetReportCheckExpertLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ReportPassedObjects(short & oReportPassedObjects); \
      virtual HRESULT __stdcall put_ReportPassedObjects(short iReportPassedObjects); \
      virtual HRESULT __stdcall GetReportPassedObjectsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetReportPassedObjectsLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ReportObjectsInformation(short & oReportObjectsInformation); \
      virtual HRESULT __stdcall put_ReportObjectsInformation(short iReportObjectsInformation); \
      virtual HRESULT __stdcall GetReportObjectsInformationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetReportObjectsInformationLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ReportHtmlInCatiaSession(short & oReportHtmlInCatiaSession); \
      virtual HRESULT __stdcall put_ReportHtmlInCatiaSession(short iReportHtmlInCatiaSession); \
      virtual HRESULT __stdcall GetReportHtmlInCatiaSessionInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetReportHtmlInCatiaSessionLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DirectoryForInputXsl(CATBSTR & oDirectoryForInputXsl); \
      virtual HRESULT __stdcall put_DirectoryForInputXsl(const CATBSTR & iDirectoryForInputXsl); \
      virtual HRESULT __stdcall GetDirectoryForInputXslInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDirectoryForInputXslLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ReportOutputDirectory(CATBSTR & oReportOutputDirectory); \
      virtual HRESULT __stdcall put_ReportOutputDirectory(const CATBSTR & iReportOutputDirectory); \
      virtual HRESULT __stdcall GetReportOutputDirectoryInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetReportOutputDirectoryLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall Commit(); \
      virtual HRESULT __stdcall Rollback(); \
      virtual HRESULT __stdcall ResetToAdminValues(); \
      virtual HRESULT __stdcall ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList); \
      virtual HRESULT __stdcall SaveRepository(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAReportGenerationSheetSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_CheckReportHtml(short & oCheckReportHtml); \
virtual HRESULT __stdcall put_CheckReportHtml(short iCheckReportHtml); \
virtual HRESULT __stdcall GetCheckReportHtmlInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetCheckReportHtmlLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AllChecksReport(short & oAllChecksReport); \
virtual HRESULT __stdcall put_AllChecksReport(short iAllChecksReport); \
virtual HRESULT __stdcall GetAllChecksReportInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAllChecksReportLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ReportCheckAdvisor(short & oReportCheckAdvisor); \
virtual HRESULT __stdcall put_ReportCheckAdvisor(short iReportCheckAdvisor); \
virtual HRESULT __stdcall GetReportCheckAdvisorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetReportCheckAdvisorLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ReportParametersInformation(short & oReportParametersInformation); \
virtual HRESULT __stdcall put_ReportParametersInformation(short iReportParametersInformation); \
virtual HRESULT __stdcall GetReportParametersInformationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetReportParametersInformationLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ReportCheckExpert(short & oReportCheckExpert); \
virtual HRESULT __stdcall put_ReportCheckExpert(short iReportCheckExpert); \
virtual HRESULT __stdcall GetReportCheckExpertInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetReportCheckExpertLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ReportPassedObjects(short & oReportPassedObjects); \
virtual HRESULT __stdcall put_ReportPassedObjects(short iReportPassedObjects); \
virtual HRESULT __stdcall GetReportPassedObjectsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetReportPassedObjectsLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ReportObjectsInformation(short & oReportObjectsInformation); \
virtual HRESULT __stdcall put_ReportObjectsInformation(short iReportObjectsInformation); \
virtual HRESULT __stdcall GetReportObjectsInformationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetReportObjectsInformationLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ReportHtmlInCatiaSession(short & oReportHtmlInCatiaSession); \
virtual HRESULT __stdcall put_ReportHtmlInCatiaSession(short iReportHtmlInCatiaSession); \
virtual HRESULT __stdcall GetReportHtmlInCatiaSessionInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetReportHtmlInCatiaSessionLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DirectoryForInputXsl(CATBSTR & oDirectoryForInputXsl); \
virtual HRESULT __stdcall put_DirectoryForInputXsl(const CATBSTR & iDirectoryForInputXsl); \
virtual HRESULT __stdcall GetDirectoryForInputXslInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDirectoryForInputXslLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ReportOutputDirectory(CATBSTR & oReportOutputDirectory); \
virtual HRESULT __stdcall put_ReportOutputDirectory(const CATBSTR & iReportOutputDirectory); \
virtual HRESULT __stdcall GetReportOutputDirectoryInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetReportOutputDirectoryLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall Commit(); \
virtual HRESULT __stdcall Rollback(); \
virtual HRESULT __stdcall ResetToAdminValues(); \
virtual HRESULT __stdcall ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList); \
virtual HRESULT __stdcall SaveRepository(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAReportGenerationSheetSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_CheckReportHtml(short & oCheckReportHtml) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_CheckReportHtml(oCheckReportHtml)); \
} \
HRESULT __stdcall  ENVTIEName::put_CheckReportHtml(short iCheckReportHtml) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_CheckReportHtml(iCheckReportHtml)); \
} \
HRESULT __stdcall  ENVTIEName::GetCheckReportHtmlInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetCheckReportHtmlInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetCheckReportHtmlLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetCheckReportHtmlLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AllChecksReport(short & oAllChecksReport) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AllChecksReport(oAllChecksReport)); \
} \
HRESULT __stdcall  ENVTIEName::put_AllChecksReport(short iAllChecksReport) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AllChecksReport(iAllChecksReport)); \
} \
HRESULT __stdcall  ENVTIEName::GetAllChecksReportInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAllChecksReportInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAllChecksReportLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAllChecksReportLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReportCheckAdvisor(short & oReportCheckAdvisor) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ReportCheckAdvisor(oReportCheckAdvisor)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReportCheckAdvisor(short iReportCheckAdvisor) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ReportCheckAdvisor(iReportCheckAdvisor)); \
} \
HRESULT __stdcall  ENVTIEName::GetReportCheckAdvisorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetReportCheckAdvisorInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetReportCheckAdvisorLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetReportCheckAdvisorLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReportParametersInformation(short & oReportParametersInformation) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ReportParametersInformation(oReportParametersInformation)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReportParametersInformation(short iReportParametersInformation) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ReportParametersInformation(iReportParametersInformation)); \
} \
HRESULT __stdcall  ENVTIEName::GetReportParametersInformationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetReportParametersInformationInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetReportParametersInformationLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetReportParametersInformationLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReportCheckExpert(short & oReportCheckExpert) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ReportCheckExpert(oReportCheckExpert)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReportCheckExpert(short iReportCheckExpert) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ReportCheckExpert(iReportCheckExpert)); \
} \
HRESULT __stdcall  ENVTIEName::GetReportCheckExpertInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetReportCheckExpertInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetReportCheckExpertLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetReportCheckExpertLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReportPassedObjects(short & oReportPassedObjects) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ReportPassedObjects(oReportPassedObjects)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReportPassedObjects(short iReportPassedObjects) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ReportPassedObjects(iReportPassedObjects)); \
} \
HRESULT __stdcall  ENVTIEName::GetReportPassedObjectsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetReportPassedObjectsInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetReportPassedObjectsLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetReportPassedObjectsLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReportObjectsInformation(short & oReportObjectsInformation) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ReportObjectsInformation(oReportObjectsInformation)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReportObjectsInformation(short iReportObjectsInformation) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ReportObjectsInformation(iReportObjectsInformation)); \
} \
HRESULT __stdcall  ENVTIEName::GetReportObjectsInformationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetReportObjectsInformationInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetReportObjectsInformationLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetReportObjectsInformationLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReportHtmlInCatiaSession(short & oReportHtmlInCatiaSession) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ReportHtmlInCatiaSession(oReportHtmlInCatiaSession)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReportHtmlInCatiaSession(short iReportHtmlInCatiaSession) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ReportHtmlInCatiaSession(iReportHtmlInCatiaSession)); \
} \
HRESULT __stdcall  ENVTIEName::GetReportHtmlInCatiaSessionInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetReportHtmlInCatiaSessionInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetReportHtmlInCatiaSessionLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetReportHtmlInCatiaSessionLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DirectoryForInputXsl(CATBSTR & oDirectoryForInputXsl) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DirectoryForInputXsl(oDirectoryForInputXsl)); \
} \
HRESULT __stdcall  ENVTIEName::put_DirectoryForInputXsl(const CATBSTR & iDirectoryForInputXsl) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DirectoryForInputXsl(iDirectoryForInputXsl)); \
} \
HRESULT __stdcall  ENVTIEName::GetDirectoryForInputXslInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDirectoryForInputXslInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDirectoryForInputXslLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDirectoryForInputXslLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReportOutputDirectory(CATBSTR & oReportOutputDirectory) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ReportOutputDirectory(oReportOutputDirectory)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReportOutputDirectory(const CATBSTR & iReportOutputDirectory) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ReportOutputDirectory(iReportOutputDirectory)); \
} \
HRESULT __stdcall  ENVTIEName::GetReportOutputDirectoryInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetReportOutputDirectoryInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetReportOutputDirectoryLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetReportOutputDirectoryLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAReportGenerationSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAReportGenerationSheetSettingAtt(classe)    TIECATIAReportGenerationSheetSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAReportGenerationSheetSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAReportGenerationSheetSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAReportGenerationSheetSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAReportGenerationSheetSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAReportGenerationSheetSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAReportGenerationSheetSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::get_CheckReportHtml(short & oCheckReportHtml) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oCheckReportHtml); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CheckReportHtml(oCheckReportHtml); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oCheckReportHtml); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::put_CheckReportHtml(short iCheckReportHtml) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iCheckReportHtml); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CheckReportHtml(iCheckReportHtml); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iCheckReportHtml); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::GetCheckReportHtmlInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCheckReportHtmlInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::SetCheckReportHtmlLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCheckReportHtmlLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::get_AllChecksReport(short & oAllChecksReport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oAllChecksReport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AllChecksReport(oAllChecksReport); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oAllChecksReport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::put_AllChecksReport(short iAllChecksReport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iAllChecksReport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AllChecksReport(iAllChecksReport); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iAllChecksReport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::GetAllChecksReportInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAllChecksReportInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::SetAllChecksReportLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAllChecksReportLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::get_ReportCheckAdvisor(short & oReportCheckAdvisor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oReportCheckAdvisor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReportCheckAdvisor(oReportCheckAdvisor); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oReportCheckAdvisor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::put_ReportCheckAdvisor(short iReportCheckAdvisor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iReportCheckAdvisor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReportCheckAdvisor(iReportCheckAdvisor); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iReportCheckAdvisor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::GetReportCheckAdvisorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetReportCheckAdvisorInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::SetReportCheckAdvisorLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetReportCheckAdvisorLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::get_ReportParametersInformation(short & oReportParametersInformation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oReportParametersInformation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReportParametersInformation(oReportParametersInformation); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oReportParametersInformation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::put_ReportParametersInformation(short iReportParametersInformation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iReportParametersInformation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReportParametersInformation(iReportParametersInformation); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iReportParametersInformation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::GetReportParametersInformationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetReportParametersInformationInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::SetReportParametersInformationLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetReportParametersInformationLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::get_ReportCheckExpert(short & oReportCheckExpert) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oReportCheckExpert); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReportCheckExpert(oReportCheckExpert); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oReportCheckExpert); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::put_ReportCheckExpert(short iReportCheckExpert) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iReportCheckExpert); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReportCheckExpert(iReportCheckExpert); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iReportCheckExpert); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::GetReportCheckExpertInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetReportCheckExpertInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::SetReportCheckExpertLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetReportCheckExpertLock(iLocked); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::get_ReportPassedObjects(short & oReportPassedObjects) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oReportPassedObjects); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReportPassedObjects(oReportPassedObjects); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oReportPassedObjects); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::put_ReportPassedObjects(short iReportPassedObjects) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iReportPassedObjects); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReportPassedObjects(iReportPassedObjects); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iReportPassedObjects); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::GetReportPassedObjectsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetReportPassedObjectsInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::SetReportPassedObjectsLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetReportPassedObjectsLock(iLocked); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::get_ReportObjectsInformation(short & oReportObjectsInformation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oReportObjectsInformation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReportObjectsInformation(oReportObjectsInformation); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oReportObjectsInformation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::put_ReportObjectsInformation(short iReportObjectsInformation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iReportObjectsInformation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReportObjectsInformation(iReportObjectsInformation); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iReportObjectsInformation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::GetReportObjectsInformationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetReportObjectsInformationInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::SetReportObjectsInformationLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetReportObjectsInformationLock(iLocked); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::get_ReportHtmlInCatiaSession(short & oReportHtmlInCatiaSession) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oReportHtmlInCatiaSession); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReportHtmlInCatiaSession(oReportHtmlInCatiaSession); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oReportHtmlInCatiaSession); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::put_ReportHtmlInCatiaSession(short iReportHtmlInCatiaSession) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iReportHtmlInCatiaSession); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReportHtmlInCatiaSession(iReportHtmlInCatiaSession); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iReportHtmlInCatiaSession); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::GetReportHtmlInCatiaSessionInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetReportHtmlInCatiaSessionInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::SetReportHtmlInCatiaSessionLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetReportHtmlInCatiaSessionLock(iLocked); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::get_DirectoryForInputXsl(CATBSTR & oDirectoryForInputXsl) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oDirectoryForInputXsl); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DirectoryForInputXsl(oDirectoryForInputXsl); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oDirectoryForInputXsl); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::put_DirectoryForInputXsl(const CATBSTR & iDirectoryForInputXsl) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iDirectoryForInputXsl); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DirectoryForInputXsl(iDirectoryForInputXsl); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iDirectoryForInputXsl); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::GetDirectoryForInputXslInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDirectoryForInputXslInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::SetDirectoryForInputXslLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDirectoryForInputXslLock(iLocked); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::get_ReportOutputDirectory(CATBSTR & oReportOutputDirectory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oReportOutputDirectory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReportOutputDirectory(oReportOutputDirectory); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oReportOutputDirectory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::put_ReportOutputDirectory(const CATBSTR & iReportOutputDirectory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iReportOutputDirectory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReportOutputDirectory(iReportOutputDirectory); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iReportOutputDirectory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::GetReportOutputDirectoryInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetReportOutputDirectoryInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::SetReportOutputDirectoryLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetReportOutputDirectoryLock(iLocked); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAReportGenerationSheetSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAReportGenerationSheetSettingAtt(classe) \
 \
 \
declare_TIE_CATIAReportGenerationSheetSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAReportGenerationSheetSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAReportGenerationSheetSettingAtt,"CATIAReportGenerationSheetSettingAtt",CATIAReportGenerationSheetSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAReportGenerationSheetSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAReportGenerationSheetSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAReportGenerationSheetSettingAtt##classe(classe::MetaObject(),CATIAReportGenerationSheetSettingAtt::MetaObject(),(void *)CreateTIECATIAReportGenerationSheetSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAReportGenerationSheetSettingAtt(classe) \
 \
 \
declare_TIE_CATIAReportGenerationSheetSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAReportGenerationSheetSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAReportGenerationSheetSettingAtt,"CATIAReportGenerationSheetSettingAtt",CATIAReportGenerationSheetSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAReportGenerationSheetSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAReportGenerationSheetSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAReportGenerationSheetSettingAtt##classe(classe::MetaObject(),CATIAReportGenerationSheetSettingAtt::MetaObject(),(void *)CreateTIECATIAReportGenerationSheetSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAReportGenerationSheetSettingAtt(classe) TIE_CATIAReportGenerationSheetSettingAtt(classe)
#else
#define BOA_CATIAReportGenerationSheetSettingAtt(classe) CATImplementBOA(CATIAReportGenerationSheetSettingAtt, classe)
#endif

#endif
