#ifndef __TIE_CATIAStepSettingAtt
#define __TIE_CATIAStepSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAStepSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAStepSettingAtt */
#define declare_TIE_CATIAStepSettingAtt(classe) \
 \
 \
class TIECATIAStepSettingAtt##classe : public CATIAStepSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAStepSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_AttAP(short & oAttAP); \
      virtual HRESULT __stdcall put_AttAP(short iAttAP); \
      virtual HRESULT __stdcall GetAttAPInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttAPLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttExportRepMode(short & oAttExportRepMode); \
      virtual HRESULT __stdcall put_AttExportRepMode(short iAttExportRepMode); \
      virtual HRESULT __stdcall GetAttExportRepModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttExportRepModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttASM(short & oAttASM); \
      virtual HRESULT __stdcall put_AttASM(short iAttASM); \
      virtual HRESULT __stdcall GetAttASMInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttASMLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttUnits(short & oAttUnits); \
      virtual HRESULT __stdcall put_AttUnits(short iAttUnits); \
      virtual HRESULT __stdcall GetAttUnitsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttUnitsLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttAnnotationExport(short & oAttAnnotationExport); \
      virtual HRESULT __stdcall put_AttAnnotationExport(short iAttAnnotationExport); \
      virtual HRESULT __stdcall GetAttAnnotationExportInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttAnnotationExportLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttOptimizeC2(short & oAttOptimizeC2); \
      virtual HRESULT __stdcall put_AttOptimizeC2(short iAttOptimizeC2); \
      virtual HRESULT __stdcall GetAttOptimizeC2Info(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttOptimizeC2Lock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttFitting(short & oAttFitting); \
      virtual HRESULT __stdcall put_AttFitting(short iAttFitting); \
      virtual HRESULT __stdcall GetAttFittingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttFittingLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttTolDefOptFit(float & oAttTolDefOptFit); \
      virtual HRESULT __stdcall put_AttTolDefOptFit(float iAttTolDefOptFit); \
      virtual HRESULT __stdcall GetAttTolDefOptFitInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttTolDefOptFitLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttAngleDefFiting(float & oAttAngleDefFiting); \
      virtual HRESULT __stdcall put_AttAngleDefFiting(float iAttAngleDefFiting); \
      virtual HRESULT __stdcall GetAttAngleDefFitingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttAngleDefFitingLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttMultiCAD(short & oAttMultiCAD); \
      virtual HRESULT __stdcall put_AttMultiCAD(short iAttMultiCAD); \
      virtual HRESULT __stdcall GetAttMultiCADInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttMultiCADLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttTessPrefered(short & oAttTessPrefered); \
      virtual HRESULT __stdcall put_AttTessPrefered(short iAttTessPrefered); \
      virtual HRESULT __stdcall GetAttTessPreferedInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttTessPreferedLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttIASM(short & oAttIASM); \
      virtual HRESULT __stdcall put_AttIASM(short iAttIASM); \
      virtual HRESULT __stdcall GetAttIASMInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttIASMLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttReport(short & oAttReport); \
      virtual HRESULT __stdcall put_AttReport(short iAttReport); \
      virtual HRESULT __stdcall GetAttReportInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttReportLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttAnnotation(short & oAttAnnotation); \
      virtual HRESULT __stdcall put_AttAnnotation(short iAttAnnotation); \
      virtual HRESULT __stdcall GetAttAnnotationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttAnnotationLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttComposites(short & oAttComposites); \
      virtual HRESULT __stdcall put_AttComposites(short iAttComposites); \
      virtual HRESULT __stdcall GetAttCompositesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttCompositesLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttUDA(short & oAttUDA); \
      virtual HRESULT __stdcall put_AttUDA(short iAttUDA); \
      virtual HRESULT __stdcall GetAttUDAInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttUDALock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttGVP(short & oAttGVP); \
      virtual HRESULT __stdcall put_AttGVP(short iAttGVP); \
      virtual HRESULT __stdcall GetAttGVPInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttGVPLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttGVPVA(double & oAttGVPVA); \
      virtual HRESULT __stdcall put_AttGVPVA(double iAttGVPVA); \
      virtual HRESULT __stdcall GetAttGVPVAInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttGVPVALock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttGVPCdG(double & oAttGVPCdG); \
      virtual HRESULT __stdcall put_AttGVPCdG(double iAttGVPCdG); \
      virtual HRESULT __stdcall GetAttGVPCdGInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttGVPCdGLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttGVPCOPS(short & oAttGVPCOPS); \
      virtual HRESULT __stdcall put_AttGVPCOPS(short iAttGVPCOPS); \
      virtual HRESULT __stdcall GetAttGVPCOPSInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttGVPCOPSLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttGVPCOPSSAG(double & oAttGVPCOPSSAG); \
      virtual HRESULT __stdcall put_AttGVPCOPSSAG(double iAttGVPCOPSSAG); \
      virtual HRESULT __stdcall GetAttGVPCOPSSAGInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttGVPCOPSSAGLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttGVPCOPSTol(double & oAttGVPCOPSTol); \
      virtual HRESULT __stdcall put_AttGVPCOPSTol(double iAttGVPCOPSTol); \
      virtual HRESULT __stdcall GetAttGVPCOPSTolInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttGVPCOPSTolLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttASMGVP(short & oAttASMGVP); \
      virtual HRESULT __stdcall put_AttASMGVP(short iAttASMGVP); \
      virtual HRESULT __stdcall GetAttASMGVPInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttASMGVPLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttShow(short & oAttShow); \
      virtual HRESULT __stdcall put_AttShow(short iAttShow); \
      virtual HRESULT __stdcall GetAttShowInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttShowLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttLayersFilters(short & oAttLayersFilters); \
      virtual HRESULT __stdcall put_AttLayersFilters(short iAttLayersFilters); \
      virtual HRESULT __stdcall GetAttLayersFiltersInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttLayersFiltersLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttHeaderAuthor(CATBSTR & oAttHeaderAuthor); \
      virtual HRESULT __stdcall put_AttHeaderAuthor(const CATBSTR & iAttHeaderAuthor); \
      virtual HRESULT __stdcall GetAttHeaderAuthorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttHeaderAuthorLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttHeaderOrganisation(CATBSTR & oAttHeaderOrganisation); \
      virtual HRESULT __stdcall put_AttHeaderOrganisation(const CATBSTR & iAttHeaderOrganisation); \
      virtual HRESULT __stdcall GetAttHeaderOrganisationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttHeaderOrganisationLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttHeaderDescription(CATBSTR & oAttHeaderDescription); \
      virtual HRESULT __stdcall put_AttHeaderDescription(const CATBSTR & iAttHeaderDescription); \
      virtual HRESULT __stdcall GetAttHeaderDescriptionInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttHeaderDescriptionLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttHeaderAuthorisation(CATBSTR & oAttHeaderAuthorisation); \
      virtual HRESULT __stdcall put_AttHeaderAuthorisation(const CATBSTR & iAttHeaderAuthorisation); \
      virtual HRESULT __stdcall GetAttHeaderAuthorisationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttHeaderAuthorisationLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttGroupMode(short & oAttGroupMode); \
      virtual HRESULT __stdcall put_AttGroupMode(short iAttGroupMode); \
      virtual HRESULT __stdcall GetAttGroupModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttGroupModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_EdgeInTessMode(short & oEdgeInTessMode); \
      virtual HRESULT __stdcall put_EdgeInTessMode(short iEdgeInTessMode); \
      virtual HRESULT __stdcall GetEdgeInTessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetEdgeInTessLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIAStepSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_AttAP(short & oAttAP); \
virtual HRESULT __stdcall put_AttAP(short iAttAP); \
virtual HRESULT __stdcall GetAttAPInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttAPLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttExportRepMode(short & oAttExportRepMode); \
virtual HRESULT __stdcall put_AttExportRepMode(short iAttExportRepMode); \
virtual HRESULT __stdcall GetAttExportRepModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttExportRepModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttASM(short & oAttASM); \
virtual HRESULT __stdcall put_AttASM(short iAttASM); \
virtual HRESULT __stdcall GetAttASMInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttASMLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttUnits(short & oAttUnits); \
virtual HRESULT __stdcall put_AttUnits(short iAttUnits); \
virtual HRESULT __stdcall GetAttUnitsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttUnitsLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttAnnotationExport(short & oAttAnnotationExport); \
virtual HRESULT __stdcall put_AttAnnotationExport(short iAttAnnotationExport); \
virtual HRESULT __stdcall GetAttAnnotationExportInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttAnnotationExportLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttOptimizeC2(short & oAttOptimizeC2); \
virtual HRESULT __stdcall put_AttOptimizeC2(short iAttOptimizeC2); \
virtual HRESULT __stdcall GetAttOptimizeC2Info(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttOptimizeC2Lock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttFitting(short & oAttFitting); \
virtual HRESULT __stdcall put_AttFitting(short iAttFitting); \
virtual HRESULT __stdcall GetAttFittingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttFittingLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttTolDefOptFit(float & oAttTolDefOptFit); \
virtual HRESULT __stdcall put_AttTolDefOptFit(float iAttTolDefOptFit); \
virtual HRESULT __stdcall GetAttTolDefOptFitInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttTolDefOptFitLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttAngleDefFiting(float & oAttAngleDefFiting); \
virtual HRESULT __stdcall put_AttAngleDefFiting(float iAttAngleDefFiting); \
virtual HRESULT __stdcall GetAttAngleDefFitingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttAngleDefFitingLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttMultiCAD(short & oAttMultiCAD); \
virtual HRESULT __stdcall put_AttMultiCAD(short iAttMultiCAD); \
virtual HRESULT __stdcall GetAttMultiCADInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttMultiCADLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttTessPrefered(short & oAttTessPrefered); \
virtual HRESULT __stdcall put_AttTessPrefered(short iAttTessPrefered); \
virtual HRESULT __stdcall GetAttTessPreferedInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttTessPreferedLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttIASM(short & oAttIASM); \
virtual HRESULT __stdcall put_AttIASM(short iAttIASM); \
virtual HRESULT __stdcall GetAttIASMInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttIASMLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttReport(short & oAttReport); \
virtual HRESULT __stdcall put_AttReport(short iAttReport); \
virtual HRESULT __stdcall GetAttReportInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttReportLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttAnnotation(short & oAttAnnotation); \
virtual HRESULT __stdcall put_AttAnnotation(short iAttAnnotation); \
virtual HRESULT __stdcall GetAttAnnotationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttAnnotationLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttComposites(short & oAttComposites); \
virtual HRESULT __stdcall put_AttComposites(short iAttComposites); \
virtual HRESULT __stdcall GetAttCompositesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttCompositesLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttUDA(short & oAttUDA); \
virtual HRESULT __stdcall put_AttUDA(short iAttUDA); \
virtual HRESULT __stdcall GetAttUDAInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttUDALock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttGVP(short & oAttGVP); \
virtual HRESULT __stdcall put_AttGVP(short iAttGVP); \
virtual HRESULT __stdcall GetAttGVPInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttGVPLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttGVPVA(double & oAttGVPVA); \
virtual HRESULT __stdcall put_AttGVPVA(double iAttGVPVA); \
virtual HRESULT __stdcall GetAttGVPVAInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttGVPVALock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttGVPCdG(double & oAttGVPCdG); \
virtual HRESULT __stdcall put_AttGVPCdG(double iAttGVPCdG); \
virtual HRESULT __stdcall GetAttGVPCdGInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttGVPCdGLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttGVPCOPS(short & oAttGVPCOPS); \
virtual HRESULT __stdcall put_AttGVPCOPS(short iAttGVPCOPS); \
virtual HRESULT __stdcall GetAttGVPCOPSInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttGVPCOPSLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttGVPCOPSSAG(double & oAttGVPCOPSSAG); \
virtual HRESULT __stdcall put_AttGVPCOPSSAG(double iAttGVPCOPSSAG); \
virtual HRESULT __stdcall GetAttGVPCOPSSAGInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttGVPCOPSSAGLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttGVPCOPSTol(double & oAttGVPCOPSTol); \
virtual HRESULT __stdcall put_AttGVPCOPSTol(double iAttGVPCOPSTol); \
virtual HRESULT __stdcall GetAttGVPCOPSTolInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttGVPCOPSTolLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttASMGVP(short & oAttASMGVP); \
virtual HRESULT __stdcall put_AttASMGVP(short iAttASMGVP); \
virtual HRESULT __stdcall GetAttASMGVPInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttASMGVPLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttShow(short & oAttShow); \
virtual HRESULT __stdcall put_AttShow(short iAttShow); \
virtual HRESULT __stdcall GetAttShowInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttShowLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttLayersFilters(short & oAttLayersFilters); \
virtual HRESULT __stdcall put_AttLayersFilters(short iAttLayersFilters); \
virtual HRESULT __stdcall GetAttLayersFiltersInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttLayersFiltersLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttHeaderAuthor(CATBSTR & oAttHeaderAuthor); \
virtual HRESULT __stdcall put_AttHeaderAuthor(const CATBSTR & iAttHeaderAuthor); \
virtual HRESULT __stdcall GetAttHeaderAuthorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttHeaderAuthorLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttHeaderOrganisation(CATBSTR & oAttHeaderOrganisation); \
virtual HRESULT __stdcall put_AttHeaderOrganisation(const CATBSTR & iAttHeaderOrganisation); \
virtual HRESULT __stdcall GetAttHeaderOrganisationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttHeaderOrganisationLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttHeaderDescription(CATBSTR & oAttHeaderDescription); \
virtual HRESULT __stdcall put_AttHeaderDescription(const CATBSTR & iAttHeaderDescription); \
virtual HRESULT __stdcall GetAttHeaderDescriptionInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttHeaderDescriptionLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttHeaderAuthorisation(CATBSTR & oAttHeaderAuthorisation); \
virtual HRESULT __stdcall put_AttHeaderAuthorisation(const CATBSTR & iAttHeaderAuthorisation); \
virtual HRESULT __stdcall GetAttHeaderAuthorisationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttHeaderAuthorisationLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttGroupMode(short & oAttGroupMode); \
virtual HRESULT __stdcall put_AttGroupMode(short iAttGroupMode); \
virtual HRESULT __stdcall GetAttGroupModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttGroupModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_EdgeInTessMode(short & oEdgeInTessMode); \
virtual HRESULT __stdcall put_EdgeInTessMode(short iEdgeInTessMode); \
virtual HRESULT __stdcall GetEdgeInTessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetEdgeInTessLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIAStepSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_AttAP(short & oAttAP) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttAP(oAttAP)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttAP(short iAttAP) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttAP(iAttAP)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttAPInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttAPInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttAPLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttAPLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttExportRepMode(short & oAttExportRepMode) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttExportRepMode(oAttExportRepMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttExportRepMode(short iAttExportRepMode) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttExportRepMode(iAttExportRepMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttExportRepModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttExportRepModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttExportRepModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttExportRepModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttASM(short & oAttASM) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttASM(oAttASM)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttASM(short iAttASM) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttASM(iAttASM)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttASMInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttASMInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttASMLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttASMLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttUnits(short & oAttUnits) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttUnits(oAttUnits)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttUnits(short iAttUnits) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttUnits(iAttUnits)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttUnitsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttUnitsInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttUnitsLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttUnitsLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttAnnotationExport(short & oAttAnnotationExport) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttAnnotationExport(oAttAnnotationExport)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttAnnotationExport(short iAttAnnotationExport) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttAnnotationExport(iAttAnnotationExport)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttAnnotationExportInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttAnnotationExportInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttAnnotationExportLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttAnnotationExportLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttOptimizeC2(short & oAttOptimizeC2) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttOptimizeC2(oAttOptimizeC2)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttOptimizeC2(short iAttOptimizeC2) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttOptimizeC2(iAttOptimizeC2)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttOptimizeC2Info(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttOptimizeC2Info(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttOptimizeC2Lock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttOptimizeC2Lock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttFitting(short & oAttFitting) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttFitting(oAttFitting)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttFitting(short iAttFitting) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttFitting(iAttFitting)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttFittingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttFittingInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttFittingLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttFittingLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttTolDefOptFit(float & oAttTolDefOptFit) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttTolDefOptFit(oAttTolDefOptFit)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttTolDefOptFit(float iAttTolDefOptFit) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttTolDefOptFit(iAttTolDefOptFit)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttTolDefOptFitInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttTolDefOptFitInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttTolDefOptFitLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttTolDefOptFitLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttAngleDefFiting(float & oAttAngleDefFiting) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttAngleDefFiting(oAttAngleDefFiting)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttAngleDefFiting(float iAttAngleDefFiting) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttAngleDefFiting(iAttAngleDefFiting)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttAngleDefFitingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttAngleDefFitingInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttAngleDefFitingLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttAngleDefFitingLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttMultiCAD(short & oAttMultiCAD) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttMultiCAD(oAttMultiCAD)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttMultiCAD(short iAttMultiCAD) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttMultiCAD(iAttMultiCAD)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttMultiCADInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttMultiCADInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttMultiCADLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttMultiCADLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttTessPrefered(short & oAttTessPrefered) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttTessPrefered(oAttTessPrefered)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttTessPrefered(short iAttTessPrefered) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttTessPrefered(iAttTessPrefered)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttTessPreferedInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttTessPreferedInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttTessPreferedLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttTessPreferedLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttIASM(short & oAttIASM) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttIASM(oAttIASM)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttIASM(short iAttIASM) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttIASM(iAttIASM)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttIASMInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttIASMInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttIASMLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttIASMLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttReport(short & oAttReport) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttReport(oAttReport)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttReport(short iAttReport) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttReport(iAttReport)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttReportInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttReportInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttReportLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttReportLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttAnnotation(short & oAttAnnotation) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttAnnotation(oAttAnnotation)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttAnnotation(short iAttAnnotation) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttAnnotation(iAttAnnotation)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttAnnotationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttAnnotationInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttAnnotationLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttAnnotationLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttComposites(short & oAttComposites) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttComposites(oAttComposites)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttComposites(short iAttComposites) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttComposites(iAttComposites)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttCompositesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttCompositesInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttCompositesLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttCompositesLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttUDA(short & oAttUDA) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttUDA(oAttUDA)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttUDA(short iAttUDA) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttUDA(iAttUDA)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttUDAInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttUDAInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttUDALock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttUDALock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttGVP(short & oAttGVP) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttGVP(oAttGVP)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttGVP(short iAttGVP) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttGVP(iAttGVP)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttGVPInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttGVPInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttGVPLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttGVPLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttGVPVA(double & oAttGVPVA) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttGVPVA(oAttGVPVA)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttGVPVA(double iAttGVPVA) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttGVPVA(iAttGVPVA)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttGVPVAInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttGVPVAInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttGVPVALock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttGVPVALock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttGVPCdG(double & oAttGVPCdG) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttGVPCdG(oAttGVPCdG)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttGVPCdG(double iAttGVPCdG) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttGVPCdG(iAttGVPCdG)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttGVPCdGInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttGVPCdGInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttGVPCdGLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttGVPCdGLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttGVPCOPS(short & oAttGVPCOPS) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttGVPCOPS(oAttGVPCOPS)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttGVPCOPS(short iAttGVPCOPS) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttGVPCOPS(iAttGVPCOPS)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttGVPCOPSInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttGVPCOPSInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttGVPCOPSLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttGVPCOPSLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttGVPCOPSSAG(double & oAttGVPCOPSSAG) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttGVPCOPSSAG(oAttGVPCOPSSAG)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttGVPCOPSSAG(double iAttGVPCOPSSAG) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttGVPCOPSSAG(iAttGVPCOPSSAG)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttGVPCOPSSAGInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttGVPCOPSSAGInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttGVPCOPSSAGLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttGVPCOPSSAGLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttGVPCOPSTol(double & oAttGVPCOPSTol) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttGVPCOPSTol(oAttGVPCOPSTol)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttGVPCOPSTol(double iAttGVPCOPSTol) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttGVPCOPSTol(iAttGVPCOPSTol)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttGVPCOPSTolInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttGVPCOPSTolInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttGVPCOPSTolLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttGVPCOPSTolLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttASMGVP(short & oAttASMGVP) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttASMGVP(oAttASMGVP)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttASMGVP(short iAttASMGVP) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttASMGVP(iAttASMGVP)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttASMGVPInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttASMGVPInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttASMGVPLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttASMGVPLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttShow(short & oAttShow) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttShow(oAttShow)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttShow(short iAttShow) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttShow(iAttShow)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttShowInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttShowInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttShowLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttShowLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttLayersFilters(short & oAttLayersFilters) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttLayersFilters(oAttLayersFilters)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttLayersFilters(short iAttLayersFilters) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttLayersFilters(iAttLayersFilters)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttLayersFiltersInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttLayersFiltersInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttLayersFiltersLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttLayersFiltersLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttHeaderAuthor(CATBSTR & oAttHeaderAuthor) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttHeaderAuthor(oAttHeaderAuthor)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttHeaderAuthor(const CATBSTR & iAttHeaderAuthor) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttHeaderAuthor(iAttHeaderAuthor)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttHeaderAuthorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttHeaderAuthorInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttHeaderAuthorLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttHeaderAuthorLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttHeaderOrganisation(CATBSTR & oAttHeaderOrganisation) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttHeaderOrganisation(oAttHeaderOrganisation)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttHeaderOrganisation(const CATBSTR & iAttHeaderOrganisation) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttHeaderOrganisation(iAttHeaderOrganisation)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttHeaderOrganisationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttHeaderOrganisationInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttHeaderOrganisationLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttHeaderOrganisationLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttHeaderDescription(CATBSTR & oAttHeaderDescription) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttHeaderDescription(oAttHeaderDescription)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttHeaderDescription(const CATBSTR & iAttHeaderDescription) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttHeaderDescription(iAttHeaderDescription)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttHeaderDescriptionInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttHeaderDescriptionInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttHeaderDescriptionLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttHeaderDescriptionLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttHeaderAuthorisation(CATBSTR & oAttHeaderAuthorisation) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttHeaderAuthorisation(oAttHeaderAuthorisation)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttHeaderAuthorisation(const CATBSTR & iAttHeaderAuthorisation) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttHeaderAuthorisation(iAttHeaderAuthorisation)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttHeaderAuthorisationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttHeaderAuthorisationInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttHeaderAuthorisationLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttHeaderAuthorisationLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttGroupMode(short & oAttGroupMode) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttGroupMode(oAttGroupMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttGroupMode(short iAttGroupMode) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttGroupMode(iAttGroupMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttGroupModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttGroupModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttGroupModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttGroupModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_EdgeInTessMode(short & oEdgeInTessMode) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_EdgeInTessMode(oEdgeInTessMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_EdgeInTessMode(short iEdgeInTessMode) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_EdgeInTessMode(iEdgeInTessMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetEdgeInTessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetEdgeInTessInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetEdgeInTessLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetEdgeInTessLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAStepSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAStepSettingAtt(classe)    TIECATIAStepSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAStepSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAStepSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAStepSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAStepSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAStepSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAStepSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttAP(short & oAttAP) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oAttAP); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttAP(oAttAP); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oAttAP); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttAP(short iAttAP) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iAttAP); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttAP(iAttAP); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iAttAP); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttAPInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttAPInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttAPLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttAPLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttExportRepMode(short & oAttExportRepMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oAttExportRepMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttExportRepMode(oAttExportRepMode); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oAttExportRepMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttExportRepMode(short iAttExportRepMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iAttExportRepMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttExportRepMode(iAttExportRepMode); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iAttExportRepMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttExportRepModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttExportRepModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttExportRepModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttExportRepModeLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttASM(short & oAttASM) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oAttASM); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttASM(oAttASM); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oAttASM); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttASM(short iAttASM) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iAttASM); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttASM(iAttASM); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iAttASM); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttASMInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttASMInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttASMLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttASMLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttUnits(short & oAttUnits) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oAttUnits); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttUnits(oAttUnits); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oAttUnits); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttUnits(short iAttUnits) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iAttUnits); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttUnits(iAttUnits); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iAttUnits); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttUnitsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttUnitsInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttUnitsLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttUnitsLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttAnnotationExport(short & oAttAnnotationExport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oAttAnnotationExport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttAnnotationExport(oAttAnnotationExport); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oAttAnnotationExport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttAnnotationExport(short iAttAnnotationExport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iAttAnnotationExport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttAnnotationExport(iAttAnnotationExport); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iAttAnnotationExport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttAnnotationExportInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttAnnotationExportInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttAnnotationExportLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttAnnotationExportLock(iLocked); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttOptimizeC2(short & oAttOptimizeC2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oAttOptimizeC2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttOptimizeC2(oAttOptimizeC2); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oAttOptimizeC2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttOptimizeC2(short iAttOptimizeC2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iAttOptimizeC2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttOptimizeC2(iAttOptimizeC2); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iAttOptimizeC2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttOptimizeC2Info(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttOptimizeC2Info(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttOptimizeC2Lock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttOptimizeC2Lock(iLocked); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttFitting(short & oAttFitting) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oAttFitting); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttFitting(oAttFitting); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oAttFitting); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttFitting(short iAttFitting) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iAttFitting); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttFitting(iAttFitting); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iAttFitting); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttFittingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttFittingInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttFittingLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttFittingLock(iLocked); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttTolDefOptFit(float & oAttTolDefOptFit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oAttTolDefOptFit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttTolDefOptFit(oAttTolDefOptFit); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oAttTolDefOptFit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttTolDefOptFit(float iAttTolDefOptFit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iAttTolDefOptFit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttTolDefOptFit(iAttTolDefOptFit); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iAttTolDefOptFit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttTolDefOptFitInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttTolDefOptFitInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttTolDefOptFitLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttTolDefOptFitLock(iLocked); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttAngleDefFiting(float & oAttAngleDefFiting) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oAttAngleDefFiting); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttAngleDefFiting(oAttAngleDefFiting); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oAttAngleDefFiting); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttAngleDefFiting(float iAttAngleDefFiting) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iAttAngleDefFiting); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttAngleDefFiting(iAttAngleDefFiting); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iAttAngleDefFiting); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttAngleDefFitingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttAngleDefFitingInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttAngleDefFitingLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttAngleDefFitingLock(iLocked); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttMultiCAD(short & oAttMultiCAD) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oAttMultiCAD); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttMultiCAD(oAttMultiCAD); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oAttMultiCAD); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttMultiCAD(short iAttMultiCAD) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iAttMultiCAD); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttMultiCAD(iAttMultiCAD); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iAttMultiCAD); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttMultiCADInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttMultiCADInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttMultiCADLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttMultiCADLock(iLocked); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttTessPrefered(short & oAttTessPrefered) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oAttTessPrefered); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttTessPrefered(oAttTessPrefered); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oAttTessPrefered); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttTessPrefered(short iAttTessPrefered) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iAttTessPrefered); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttTessPrefered(iAttTessPrefered); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iAttTessPrefered); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttTessPreferedInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttTessPreferedInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttTessPreferedLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttTessPreferedLock(iLocked); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttIASM(short & oAttIASM) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&oAttIASM); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttIASM(oAttIASM); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&oAttIASM); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttIASM(short iAttIASM) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iAttIASM); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttIASM(iAttIASM); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iAttIASM); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttIASMInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttIASMInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttIASMLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttIASMLock(iLocked); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttReport(short & oAttReport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&oAttReport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttReport(oAttReport); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&oAttReport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttReport(short iAttReport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&iAttReport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttReport(iAttReport); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&iAttReport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttReportInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttReportInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttReportLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttReportLock(iLocked); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttAnnotation(short & oAttAnnotation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&oAttAnnotation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttAnnotation(oAttAnnotation); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&oAttAnnotation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttAnnotation(short iAttAnnotation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&iAttAnnotation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttAnnotation(iAttAnnotation); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&iAttAnnotation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttAnnotationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttAnnotationInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttAnnotationLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttAnnotationLock(iLocked); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttComposites(short & oAttComposites) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&oAttComposites); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttComposites(oAttComposites); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&oAttComposites); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttComposites(short iAttComposites) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&iAttComposites); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttComposites(iAttComposites); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&iAttComposites); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttCompositesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttCompositesInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttCompositesLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttCompositesLock(iLocked); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttUDA(short & oAttUDA) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&oAttUDA); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttUDA(oAttUDA); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&oAttUDA); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttUDA(short iAttUDA) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2,&iAttUDA); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttUDA(iAttUDA); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg,&iAttUDA); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttUDAInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,63,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttUDAInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,63,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttUDALock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,64,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttUDALock(iLocked); \
   ExitAfterCall(this,64,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttGVP(short & oAttGVP) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,65,&_Trac2,&oAttGVP); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttGVP(oAttGVP); \
   ExitAfterCall(this,65,_Trac2,&_ret_arg,&oAttGVP); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttGVP(short iAttGVP) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,66,&_Trac2,&iAttGVP); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttGVP(iAttGVP); \
   ExitAfterCall(this,66,_Trac2,&_ret_arg,&iAttGVP); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttGVPInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,67,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttGVPInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,67,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttGVPLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,68,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttGVPLock(iLocked); \
   ExitAfterCall(this,68,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttGVPVA(double & oAttGVPVA) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,69,&_Trac2,&oAttGVPVA); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttGVPVA(oAttGVPVA); \
   ExitAfterCall(this,69,_Trac2,&_ret_arg,&oAttGVPVA); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttGVPVA(double iAttGVPVA) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,70,&_Trac2,&iAttGVPVA); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttGVPVA(iAttGVPVA); \
   ExitAfterCall(this,70,_Trac2,&_ret_arg,&iAttGVPVA); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttGVPVAInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,71,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttGVPVAInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,71,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttGVPVALock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,72,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttGVPVALock(iLocked); \
   ExitAfterCall(this,72,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttGVPCdG(double & oAttGVPCdG) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,73,&_Trac2,&oAttGVPCdG); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttGVPCdG(oAttGVPCdG); \
   ExitAfterCall(this,73,_Trac2,&_ret_arg,&oAttGVPCdG); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttGVPCdG(double iAttGVPCdG) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,74,&_Trac2,&iAttGVPCdG); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttGVPCdG(iAttGVPCdG); \
   ExitAfterCall(this,74,_Trac2,&_ret_arg,&iAttGVPCdG); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttGVPCdGInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,75,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttGVPCdGInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,75,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttGVPCdGLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,76,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttGVPCdGLock(iLocked); \
   ExitAfterCall(this,76,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttGVPCOPS(short & oAttGVPCOPS) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,77,&_Trac2,&oAttGVPCOPS); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttGVPCOPS(oAttGVPCOPS); \
   ExitAfterCall(this,77,_Trac2,&_ret_arg,&oAttGVPCOPS); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttGVPCOPS(short iAttGVPCOPS) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,78,&_Trac2,&iAttGVPCOPS); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttGVPCOPS(iAttGVPCOPS); \
   ExitAfterCall(this,78,_Trac2,&_ret_arg,&iAttGVPCOPS); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttGVPCOPSInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,79,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttGVPCOPSInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,79,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttGVPCOPSLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,80,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttGVPCOPSLock(iLocked); \
   ExitAfterCall(this,80,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttGVPCOPSSAG(double & oAttGVPCOPSSAG) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,81,&_Trac2,&oAttGVPCOPSSAG); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttGVPCOPSSAG(oAttGVPCOPSSAG); \
   ExitAfterCall(this,81,_Trac2,&_ret_arg,&oAttGVPCOPSSAG); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttGVPCOPSSAG(double iAttGVPCOPSSAG) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,82,&_Trac2,&iAttGVPCOPSSAG); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttGVPCOPSSAG(iAttGVPCOPSSAG); \
   ExitAfterCall(this,82,_Trac2,&_ret_arg,&iAttGVPCOPSSAG); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttGVPCOPSSAGInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,83,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttGVPCOPSSAGInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,83,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttGVPCOPSSAGLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,84,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttGVPCOPSSAGLock(iLocked); \
   ExitAfterCall(this,84,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttGVPCOPSTol(double & oAttGVPCOPSTol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,85,&_Trac2,&oAttGVPCOPSTol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttGVPCOPSTol(oAttGVPCOPSTol); \
   ExitAfterCall(this,85,_Trac2,&_ret_arg,&oAttGVPCOPSTol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttGVPCOPSTol(double iAttGVPCOPSTol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,86,&_Trac2,&iAttGVPCOPSTol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttGVPCOPSTol(iAttGVPCOPSTol); \
   ExitAfterCall(this,86,_Trac2,&_ret_arg,&iAttGVPCOPSTol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttGVPCOPSTolInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,87,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttGVPCOPSTolInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,87,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttGVPCOPSTolLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,88,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttGVPCOPSTolLock(iLocked); \
   ExitAfterCall(this,88,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttASMGVP(short & oAttASMGVP) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,89,&_Trac2,&oAttASMGVP); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttASMGVP(oAttASMGVP); \
   ExitAfterCall(this,89,_Trac2,&_ret_arg,&oAttASMGVP); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttASMGVP(short iAttASMGVP) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,90,&_Trac2,&iAttASMGVP); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttASMGVP(iAttASMGVP); \
   ExitAfterCall(this,90,_Trac2,&_ret_arg,&iAttASMGVP); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttASMGVPInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,91,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttASMGVPInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,91,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttASMGVPLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,92,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttASMGVPLock(iLocked); \
   ExitAfterCall(this,92,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttShow(short & oAttShow) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,93,&_Trac2,&oAttShow); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttShow(oAttShow); \
   ExitAfterCall(this,93,_Trac2,&_ret_arg,&oAttShow); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttShow(short iAttShow) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,94,&_Trac2,&iAttShow); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttShow(iAttShow); \
   ExitAfterCall(this,94,_Trac2,&_ret_arg,&iAttShow); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttShowInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,95,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttShowInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,95,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttShowLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,96,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttShowLock(iLocked); \
   ExitAfterCall(this,96,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttLayersFilters(short & oAttLayersFilters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,97,&_Trac2,&oAttLayersFilters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttLayersFilters(oAttLayersFilters); \
   ExitAfterCall(this,97,_Trac2,&_ret_arg,&oAttLayersFilters); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttLayersFilters(short iAttLayersFilters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,98,&_Trac2,&iAttLayersFilters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttLayersFilters(iAttLayersFilters); \
   ExitAfterCall(this,98,_Trac2,&_ret_arg,&iAttLayersFilters); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttLayersFiltersInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,99,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttLayersFiltersInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,99,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttLayersFiltersLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,100,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttLayersFiltersLock(iLocked); \
   ExitAfterCall(this,100,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttHeaderAuthor(CATBSTR & oAttHeaderAuthor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,101,&_Trac2,&oAttHeaderAuthor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttHeaderAuthor(oAttHeaderAuthor); \
   ExitAfterCall(this,101,_Trac2,&_ret_arg,&oAttHeaderAuthor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttHeaderAuthor(const CATBSTR & iAttHeaderAuthor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,102,&_Trac2,&iAttHeaderAuthor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttHeaderAuthor(iAttHeaderAuthor); \
   ExitAfterCall(this,102,_Trac2,&_ret_arg,&iAttHeaderAuthor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttHeaderAuthorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,103,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttHeaderAuthorInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,103,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttHeaderAuthorLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,104,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttHeaderAuthorLock(iLocked); \
   ExitAfterCall(this,104,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttHeaderOrganisation(CATBSTR & oAttHeaderOrganisation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,105,&_Trac2,&oAttHeaderOrganisation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttHeaderOrganisation(oAttHeaderOrganisation); \
   ExitAfterCall(this,105,_Trac2,&_ret_arg,&oAttHeaderOrganisation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttHeaderOrganisation(const CATBSTR & iAttHeaderOrganisation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,106,&_Trac2,&iAttHeaderOrganisation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttHeaderOrganisation(iAttHeaderOrganisation); \
   ExitAfterCall(this,106,_Trac2,&_ret_arg,&iAttHeaderOrganisation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttHeaderOrganisationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,107,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttHeaderOrganisationInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,107,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttHeaderOrganisationLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,108,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttHeaderOrganisationLock(iLocked); \
   ExitAfterCall(this,108,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttHeaderDescription(CATBSTR & oAttHeaderDescription) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,109,&_Trac2,&oAttHeaderDescription); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttHeaderDescription(oAttHeaderDescription); \
   ExitAfterCall(this,109,_Trac2,&_ret_arg,&oAttHeaderDescription); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttHeaderDescription(const CATBSTR & iAttHeaderDescription) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,110,&_Trac2,&iAttHeaderDescription); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttHeaderDescription(iAttHeaderDescription); \
   ExitAfterCall(this,110,_Trac2,&_ret_arg,&iAttHeaderDescription); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttHeaderDescriptionInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,111,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttHeaderDescriptionInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,111,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttHeaderDescriptionLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,112,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttHeaderDescriptionLock(iLocked); \
   ExitAfterCall(this,112,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttHeaderAuthorisation(CATBSTR & oAttHeaderAuthorisation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,113,&_Trac2,&oAttHeaderAuthorisation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttHeaderAuthorisation(oAttHeaderAuthorisation); \
   ExitAfterCall(this,113,_Trac2,&_ret_arg,&oAttHeaderAuthorisation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttHeaderAuthorisation(const CATBSTR & iAttHeaderAuthorisation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,114,&_Trac2,&iAttHeaderAuthorisation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttHeaderAuthorisation(iAttHeaderAuthorisation); \
   ExitAfterCall(this,114,_Trac2,&_ret_arg,&iAttHeaderAuthorisation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttHeaderAuthorisationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,115,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttHeaderAuthorisationInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,115,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttHeaderAuthorisationLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,116,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttHeaderAuthorisationLock(iLocked); \
   ExitAfterCall(this,116,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_AttGroupMode(short & oAttGroupMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,117,&_Trac2,&oAttGroupMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttGroupMode(oAttGroupMode); \
   ExitAfterCall(this,117,_Trac2,&_ret_arg,&oAttGroupMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_AttGroupMode(short iAttGroupMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,118,&_Trac2,&iAttGroupMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttGroupMode(iAttGroupMode); \
   ExitAfterCall(this,118,_Trac2,&_ret_arg,&iAttGroupMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetAttGroupModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,119,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttGroupModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,119,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetAttGroupModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,120,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttGroupModeLock(iLocked); \
   ExitAfterCall(this,120,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::get_EdgeInTessMode(short & oEdgeInTessMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,121,&_Trac2,&oEdgeInTessMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EdgeInTessMode(oEdgeInTessMode); \
   ExitAfterCall(this,121,_Trac2,&_ret_arg,&oEdgeInTessMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::put_EdgeInTessMode(short iEdgeInTessMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,122,&_Trac2,&iEdgeInTessMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_EdgeInTessMode(iEdgeInTessMode); \
   ExitAfterCall(this,122,_Trac2,&_ret_arg,&iEdgeInTessMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::GetEdgeInTessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,123,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEdgeInTessInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,123,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SetEdgeInTessLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,124,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetEdgeInTessLock(iLocked); \
   ExitAfterCall(this,124,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,125,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,125,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,126,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,126,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,127,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,127,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,128,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,128,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStepSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,129,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,129,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStepSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,130,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,130,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStepSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,131,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,131,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStepSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,132,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,132,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStepSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,133,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,133,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStepSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,134,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,134,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAStepSettingAtt(classe) \
 \
 \
declare_TIE_CATIAStepSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStepSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStepSettingAtt,"CATIAStepSettingAtt",CATIAStepSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStepSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAStepSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStepSettingAtt##classe(classe::MetaObject(),CATIAStepSettingAtt::MetaObject(),(void *)CreateTIECATIAStepSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAStepSettingAtt(classe) \
 \
 \
declare_TIE_CATIAStepSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStepSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStepSettingAtt,"CATIAStepSettingAtt",CATIAStepSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStepSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAStepSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStepSettingAtt##classe(classe::MetaObject(),CATIAStepSettingAtt::MetaObject(),(void *)CreateTIECATIAStepSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAStepSettingAtt(classe) TIE_CATIAStepSettingAtt(classe)
#else
#define BOA_CATIAStepSettingAtt(classe) CATImplementBOA(CATIAStepSettingAtt, classe)
#endif

#endif
