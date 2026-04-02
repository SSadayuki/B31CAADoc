#ifndef __TIE_CATIAVrmlSettingAtt
#define __TIE_CATIAVrmlSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAVrmlSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAVrmlSettingAtt */
#define declare_TIE_CATIAVrmlSettingAtt(classe) \
 \
 \
class TIECATIAVrmlSettingAtt##classe : public CATIAVrmlSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAVrmlSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ImportUnit(CATLONG & oImportUnit); \
      virtual HRESULT __stdcall put_ImportUnit(CATLONG iImportUnit); \
      virtual HRESULT __stdcall GetImportUnitInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetImportUnitLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ImportCreaseAngle(double & oImportCreaseAngle); \
      virtual HRESULT __stdcall put_ImportCreaseAngle(double iImportCreaseAngle); \
      virtual HRESULT __stdcall GetImportCreaseAngleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetImportCreaseAngleLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ExportVersion(CATLONG & oExportVersion); \
      virtual HRESULT __stdcall put_ExportVersion(CATLONG iExportVersion); \
      virtual HRESULT __stdcall GetExportVersionInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetExportVersionLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ExportNormals(CAT_VARIANT_BOOL & oExportNormals); \
      virtual HRESULT __stdcall put_ExportNormals(CAT_VARIANT_BOOL iExportNormals); \
      virtual HRESULT __stdcall GetExportNormalsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetExportNormalsLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ExportEdges(CAT_VARIANT_BOOL & oExportEdges); \
      virtual HRESULT __stdcall put_ExportEdges(CAT_VARIANT_BOOL iExportEdges); \
      virtual HRESULT __stdcall GetExportEdgesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetExportEdgesLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ExportTexture(CAT_VARIANT_BOOL & oExportTexture); \
      virtual HRESULT __stdcall put_ExportTexture(CAT_VARIANT_BOOL iExportTexture); \
      virtual HRESULT __stdcall GetExportTextureInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetExportTextureLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ExportTextureFile(CATLONG & oExportTextureFile); \
      virtual HRESULT __stdcall put_ExportTextureFile(CATLONG iExportTextureFile); \
      virtual HRESULT __stdcall GetExportTextureFileInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetExportTextureFileLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ExportTextureFormat(CATLONG & oExportTextureFormat); \
      virtual HRESULT __stdcall put_ExportTextureFormat(CATLONG iExportTextureFormat); \
      virtual HRESULT __stdcall GetExportTextureFormatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetExportTextureFormatLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetExportBackgroundColor(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB); \
      virtual HRESULT __stdcall SetExportBackgroundColor(CATLONG iR, CATLONG iG, CATLONG iB); \
      virtual HRESULT __stdcall GetExportBackgroundColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetExportBackgroundColorLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIAVrmlSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ImportUnit(CATLONG & oImportUnit); \
virtual HRESULT __stdcall put_ImportUnit(CATLONG iImportUnit); \
virtual HRESULT __stdcall GetImportUnitInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetImportUnitLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ImportCreaseAngle(double & oImportCreaseAngle); \
virtual HRESULT __stdcall put_ImportCreaseAngle(double iImportCreaseAngle); \
virtual HRESULT __stdcall GetImportCreaseAngleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetImportCreaseAngleLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ExportVersion(CATLONG & oExportVersion); \
virtual HRESULT __stdcall put_ExportVersion(CATLONG iExportVersion); \
virtual HRESULT __stdcall GetExportVersionInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetExportVersionLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ExportNormals(CAT_VARIANT_BOOL & oExportNormals); \
virtual HRESULT __stdcall put_ExportNormals(CAT_VARIANT_BOOL iExportNormals); \
virtual HRESULT __stdcall GetExportNormalsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetExportNormalsLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ExportEdges(CAT_VARIANT_BOOL & oExportEdges); \
virtual HRESULT __stdcall put_ExportEdges(CAT_VARIANT_BOOL iExportEdges); \
virtual HRESULT __stdcall GetExportEdgesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetExportEdgesLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ExportTexture(CAT_VARIANT_BOOL & oExportTexture); \
virtual HRESULT __stdcall put_ExportTexture(CAT_VARIANT_BOOL iExportTexture); \
virtual HRESULT __stdcall GetExportTextureInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetExportTextureLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ExportTextureFile(CATLONG & oExportTextureFile); \
virtual HRESULT __stdcall put_ExportTextureFile(CATLONG iExportTextureFile); \
virtual HRESULT __stdcall GetExportTextureFileInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetExportTextureFileLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ExportTextureFormat(CATLONG & oExportTextureFormat); \
virtual HRESULT __stdcall put_ExportTextureFormat(CATLONG iExportTextureFormat); \
virtual HRESULT __stdcall GetExportTextureFormatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetExportTextureFormatLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetExportBackgroundColor(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB); \
virtual HRESULT __stdcall SetExportBackgroundColor(CATLONG iR, CATLONG iG, CATLONG iB); \
virtual HRESULT __stdcall GetExportBackgroundColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetExportBackgroundColorLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIAVrmlSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ImportUnit(CATLONG & oImportUnit) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ImportUnit(oImportUnit)); \
} \
HRESULT __stdcall  ENVTIEName::put_ImportUnit(CATLONG iImportUnit) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ImportUnit(iImportUnit)); \
} \
HRESULT __stdcall  ENVTIEName::GetImportUnitInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetImportUnitInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetImportUnitLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetImportUnitLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ImportCreaseAngle(double & oImportCreaseAngle) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ImportCreaseAngle(oImportCreaseAngle)); \
} \
HRESULT __stdcall  ENVTIEName::put_ImportCreaseAngle(double iImportCreaseAngle) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ImportCreaseAngle(iImportCreaseAngle)); \
} \
HRESULT __stdcall  ENVTIEName::GetImportCreaseAngleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetImportCreaseAngleInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetImportCreaseAngleLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetImportCreaseAngleLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ExportVersion(CATLONG & oExportVersion) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ExportVersion(oExportVersion)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExportVersion(CATLONG iExportVersion) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ExportVersion(iExportVersion)); \
} \
HRESULT __stdcall  ENVTIEName::GetExportVersionInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetExportVersionInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetExportVersionLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetExportVersionLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ExportNormals(CAT_VARIANT_BOOL & oExportNormals) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ExportNormals(oExportNormals)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExportNormals(CAT_VARIANT_BOOL iExportNormals) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ExportNormals(iExportNormals)); \
} \
HRESULT __stdcall  ENVTIEName::GetExportNormalsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetExportNormalsInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetExportNormalsLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetExportNormalsLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ExportEdges(CAT_VARIANT_BOOL & oExportEdges) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ExportEdges(oExportEdges)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExportEdges(CAT_VARIANT_BOOL iExportEdges) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ExportEdges(iExportEdges)); \
} \
HRESULT __stdcall  ENVTIEName::GetExportEdgesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetExportEdgesInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetExportEdgesLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetExportEdgesLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ExportTexture(CAT_VARIANT_BOOL & oExportTexture) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ExportTexture(oExportTexture)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExportTexture(CAT_VARIANT_BOOL iExportTexture) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ExportTexture(iExportTexture)); \
} \
HRESULT __stdcall  ENVTIEName::GetExportTextureInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetExportTextureInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetExportTextureLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetExportTextureLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ExportTextureFile(CATLONG & oExportTextureFile) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ExportTextureFile(oExportTextureFile)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExportTextureFile(CATLONG iExportTextureFile) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ExportTextureFile(iExportTextureFile)); \
} \
HRESULT __stdcall  ENVTIEName::GetExportTextureFileInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetExportTextureFileInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetExportTextureFileLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetExportTextureFileLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ExportTextureFormat(CATLONG & oExportTextureFormat) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ExportTextureFormat(oExportTextureFormat)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExportTextureFormat(CATLONG iExportTextureFormat) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ExportTextureFormat(iExportTextureFormat)); \
} \
HRESULT __stdcall  ENVTIEName::GetExportTextureFormatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetExportTextureFormatInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetExportTextureFormatLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetExportTextureFormatLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetExportBackgroundColor(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetExportBackgroundColor(ioR,ioG,ioB)); \
} \
HRESULT __stdcall  ENVTIEName::SetExportBackgroundColor(CATLONG iR, CATLONG iG, CATLONG iB) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetExportBackgroundColor(iR,iG,iB)); \
} \
HRESULT __stdcall  ENVTIEName::GetExportBackgroundColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetExportBackgroundColorInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetExportBackgroundColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetExportBackgroundColorLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAVrmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAVrmlSettingAtt(classe)    TIECATIAVrmlSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAVrmlSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAVrmlSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAVrmlSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAVrmlSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAVrmlSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAVrmlSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::get_ImportUnit(CATLONG & oImportUnit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oImportUnit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ImportUnit(oImportUnit); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oImportUnit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::put_ImportUnit(CATLONG iImportUnit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iImportUnit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ImportUnit(iImportUnit); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iImportUnit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::GetImportUnitInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetImportUnitInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::SetImportUnitLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetImportUnitLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::get_ImportCreaseAngle(double & oImportCreaseAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oImportCreaseAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ImportCreaseAngle(oImportCreaseAngle); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oImportCreaseAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::put_ImportCreaseAngle(double iImportCreaseAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iImportCreaseAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ImportCreaseAngle(iImportCreaseAngle); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iImportCreaseAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::GetImportCreaseAngleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetImportCreaseAngleInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::SetImportCreaseAngleLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetImportCreaseAngleLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::get_ExportVersion(CATLONG & oExportVersion) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oExportVersion); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExportVersion(oExportVersion); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oExportVersion); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::put_ExportVersion(CATLONG iExportVersion) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iExportVersion); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExportVersion(iExportVersion); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iExportVersion); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::GetExportVersionInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExportVersionInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::SetExportVersionLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetExportVersionLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::get_ExportNormals(CAT_VARIANT_BOOL & oExportNormals) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oExportNormals); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExportNormals(oExportNormals); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oExportNormals); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::put_ExportNormals(CAT_VARIANT_BOOL iExportNormals) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iExportNormals); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExportNormals(iExportNormals); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iExportNormals); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::GetExportNormalsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExportNormalsInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::SetExportNormalsLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetExportNormalsLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::get_ExportEdges(CAT_VARIANT_BOOL & oExportEdges) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oExportEdges); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExportEdges(oExportEdges); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oExportEdges); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::put_ExportEdges(CAT_VARIANT_BOOL iExportEdges) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iExportEdges); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExportEdges(iExportEdges); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iExportEdges); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::GetExportEdgesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExportEdgesInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::SetExportEdgesLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetExportEdgesLock(iLocked); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::get_ExportTexture(CAT_VARIANT_BOOL & oExportTexture) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oExportTexture); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExportTexture(oExportTexture); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oExportTexture); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::put_ExportTexture(CAT_VARIANT_BOOL iExportTexture) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iExportTexture); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExportTexture(iExportTexture); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iExportTexture); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::GetExportTextureInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExportTextureInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::SetExportTextureLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetExportTextureLock(iLocked); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::get_ExportTextureFile(CATLONG & oExportTextureFile) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oExportTextureFile); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExportTextureFile(oExportTextureFile); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oExportTextureFile); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::put_ExportTextureFile(CATLONG iExportTextureFile) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iExportTextureFile); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExportTextureFile(iExportTextureFile); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iExportTextureFile); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::GetExportTextureFileInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExportTextureFileInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::SetExportTextureFileLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetExportTextureFileLock(iLocked); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::get_ExportTextureFormat(CATLONG & oExportTextureFormat) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oExportTextureFormat); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExportTextureFormat(oExportTextureFormat); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oExportTextureFormat); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::put_ExportTextureFormat(CATLONG iExportTextureFormat) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iExportTextureFormat); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExportTextureFormat(iExportTextureFormat); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iExportTextureFormat); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::GetExportTextureFormatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExportTextureFormatInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::SetExportTextureFormatLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetExportTextureFormatLock(iLocked); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::GetExportBackgroundColor(CATLONG & ioR, CATLONG & ioG, CATLONG & ioB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&ioR,&ioG,&ioB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExportBackgroundColor(ioR,ioG,ioB); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&ioR,&ioG,&ioB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::SetExportBackgroundColor(CATLONG iR, CATLONG iG, CATLONG iB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iR,&iG,&iB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetExportBackgroundColor(iR,iG,iB); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iR,&iG,&iB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::GetExportBackgroundColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExportBackgroundColorInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::SetExportBackgroundColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetExportBackgroundColorLock(iLocked); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVrmlSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVrmlSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVrmlSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVrmlSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVrmlSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVrmlSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAVrmlSettingAtt(classe) \
 \
 \
declare_TIE_CATIAVrmlSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAVrmlSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAVrmlSettingAtt,"CATIAVrmlSettingAtt",CATIAVrmlSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAVrmlSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAVrmlSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAVrmlSettingAtt##classe(classe::MetaObject(),CATIAVrmlSettingAtt::MetaObject(),(void *)CreateTIECATIAVrmlSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAVrmlSettingAtt(classe) \
 \
 \
declare_TIE_CATIAVrmlSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAVrmlSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAVrmlSettingAtt,"CATIAVrmlSettingAtt",CATIAVrmlSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAVrmlSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAVrmlSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAVrmlSettingAtt##classe(classe::MetaObject(),CATIAVrmlSettingAtt::MetaObject(),(void *)CreateTIECATIAVrmlSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAVrmlSettingAtt(classe) TIE_CATIAVrmlSettingAtt(classe)
#else
#define BOA_CATIAVrmlSettingAtt(classe) CATImplementBOA(CATIAVrmlSettingAtt, classe)
#endif

#endif
