#ifndef __TIE_CATIAMigrBatchSettingAtt
#define __TIE_CATIAMigrBatchSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAMigrBatchSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAMigrBatchSettingAtt */
#define declare_TIE_CATIAMigrBatchSettingAtt(classe) \
 \
 \
class TIECATIAMigrBatchSettingAtt##classe : public CATIAMigrBatchSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAMigrBatchSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Migration_Type(CATBSTR & oMigrType); \
      virtual HRESULT __stdcall put_Migration_Type(const CATBSTR & iMigrType); \
      virtual HRESULT __stdcall GetMigration_TypeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMigration_TypeLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall get_Migration_Interface(CATBSTR & oMigrItf); \
      virtual HRESULT __stdcall put_Migration_Interface(const CATBSTR & iMigrItf); \
      virtual HRESULT __stdcall GetMigration_InterfaceInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMigration_InterfaceLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall get_Migration_Format(CATBSTR & oMigrFormat); \
      virtual HRESULT __stdcall put_Migration_Format(const CATBSTR & iMigrFormat); \
      virtual HRESULT __stdcall GetMigration_FormatInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMigration_FormatLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall get_V4_Part_Definition(CATBSTR & oV4PartDef); \
      virtual HRESULT __stdcall put_V4_Part_Definition(const CATBSTR & iV4PartDef); \
      virtual HRESULT __stdcall GetV4_Part_DefinitionInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetV4_Part_DefinitionLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall get_Visu_Mode_2D(CATBSTR & o2DVisuMode); \
      virtual HRESULT __stdcall put_Visu_Mode_2D(const CATBSTR & i2DVisuMode); \
      virtual HRESULT __stdcall GetVisu_Mode_2DInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetVisu_Mode_2DLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall get_StartUp_Model_For_Drawing(CATBSTR & oInitialModel); \
      virtual HRESULT __stdcall put_StartUp_Model_For_Drawing(const CATBSTR & iInitialModel); \
      virtual HRESULT __stdcall GetStartUp_Model_For_DrawingInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetStartUp_Model_For_DrawingLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall get_Mapping_File_Save_Mode(CATBSTR & oMapFileMode); \
      virtual HRESULT __stdcall put_Mapping_File_Save_Mode(const CATBSTR & iMapFileMode); \
      virtual HRESULT __stdcall GetMapping_File_Save_ModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMapping_File_Save_ModeLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall get_Mapping_Saving_File(CATBSTR & oMapSavingFile); \
      virtual HRESULT __stdcall put_Mapping_Saving_File(const CATBSTR & iMapSavingFile); \
      virtual HRESULT __stdcall GetMapping_Saving_FileInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMapping_Saving_FileLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall get_Search_List_Size(CATLONG & oListSize); \
      virtual HRESULT __stdcall put_Search_List_Size(CATLONG iListSize); \
      virtual HRESULT __stdcall get_Affiche_Attribut(CATBSTR & oAfficheAttr); \
      virtual HRESULT __stdcall put_Affiche_Attribut(const CATBSTR & iAfficheAttr); \
      virtual HRESULT __stdcall GetAffiche_AttributInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAffiche_AttributLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetSearch_Mapping_List(CATSafeArrayVariant *& oRelPath); \
      virtual HRESULT __stdcall PutSearch_Mapping_List(const CATSafeArrayVariant & iRelPath); \
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



#define ENVTIEdeclare_CATIAMigrBatchSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Migration_Type(CATBSTR & oMigrType); \
virtual HRESULT __stdcall put_Migration_Type(const CATBSTR & iMigrType); \
virtual HRESULT __stdcall GetMigration_TypeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMigration_TypeLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall get_Migration_Interface(CATBSTR & oMigrItf); \
virtual HRESULT __stdcall put_Migration_Interface(const CATBSTR & iMigrItf); \
virtual HRESULT __stdcall GetMigration_InterfaceInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMigration_InterfaceLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall get_Migration_Format(CATBSTR & oMigrFormat); \
virtual HRESULT __stdcall put_Migration_Format(const CATBSTR & iMigrFormat); \
virtual HRESULT __stdcall GetMigration_FormatInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMigration_FormatLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall get_V4_Part_Definition(CATBSTR & oV4PartDef); \
virtual HRESULT __stdcall put_V4_Part_Definition(const CATBSTR & iV4PartDef); \
virtual HRESULT __stdcall GetV4_Part_DefinitionInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetV4_Part_DefinitionLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall get_Visu_Mode_2D(CATBSTR & o2DVisuMode); \
virtual HRESULT __stdcall put_Visu_Mode_2D(const CATBSTR & i2DVisuMode); \
virtual HRESULT __stdcall GetVisu_Mode_2DInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetVisu_Mode_2DLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall get_StartUp_Model_For_Drawing(CATBSTR & oInitialModel); \
virtual HRESULT __stdcall put_StartUp_Model_For_Drawing(const CATBSTR & iInitialModel); \
virtual HRESULT __stdcall GetStartUp_Model_For_DrawingInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetStartUp_Model_For_DrawingLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall get_Mapping_File_Save_Mode(CATBSTR & oMapFileMode); \
virtual HRESULT __stdcall put_Mapping_File_Save_Mode(const CATBSTR & iMapFileMode); \
virtual HRESULT __stdcall GetMapping_File_Save_ModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMapping_File_Save_ModeLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall get_Mapping_Saving_File(CATBSTR & oMapSavingFile); \
virtual HRESULT __stdcall put_Mapping_Saving_File(const CATBSTR & iMapSavingFile); \
virtual HRESULT __stdcall GetMapping_Saving_FileInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMapping_Saving_FileLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall get_Search_List_Size(CATLONG & oListSize); \
virtual HRESULT __stdcall put_Search_List_Size(CATLONG iListSize); \
virtual HRESULT __stdcall get_Affiche_Attribut(CATBSTR & oAfficheAttr); \
virtual HRESULT __stdcall put_Affiche_Attribut(const CATBSTR & iAfficheAttr); \
virtual HRESULT __stdcall GetAffiche_AttributInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAffiche_AttributLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetSearch_Mapping_List(CATSafeArrayVariant *& oRelPath); \
virtual HRESULT __stdcall PutSearch_Mapping_List(const CATSafeArrayVariant & iRelPath); \
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


#define ENVTIEdefine_CATIAMigrBatchSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Migration_Type(CATBSTR & oMigrType) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Migration_Type(oMigrType)); \
} \
HRESULT __stdcall  ENVTIEName::put_Migration_Type(const CATBSTR & iMigrType) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Migration_Type(iMigrType)); \
} \
HRESULT __stdcall  ENVTIEName::GetMigration_TypeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMigration_TypeInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMigration_TypeLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMigration_TypeLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::get_Migration_Interface(CATBSTR & oMigrItf) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Migration_Interface(oMigrItf)); \
} \
HRESULT __stdcall  ENVTIEName::put_Migration_Interface(const CATBSTR & iMigrItf) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Migration_Interface(iMigrItf)); \
} \
HRESULT __stdcall  ENVTIEName::GetMigration_InterfaceInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMigration_InterfaceInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMigration_InterfaceLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMigration_InterfaceLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::get_Migration_Format(CATBSTR & oMigrFormat) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Migration_Format(oMigrFormat)); \
} \
HRESULT __stdcall  ENVTIEName::put_Migration_Format(const CATBSTR & iMigrFormat) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Migration_Format(iMigrFormat)); \
} \
HRESULT __stdcall  ENVTIEName::GetMigration_FormatInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMigration_FormatInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMigration_FormatLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMigration_FormatLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::get_V4_Part_Definition(CATBSTR & oV4PartDef) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_V4_Part_Definition(oV4PartDef)); \
} \
HRESULT __stdcall  ENVTIEName::put_V4_Part_Definition(const CATBSTR & iV4PartDef) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_V4_Part_Definition(iV4PartDef)); \
} \
HRESULT __stdcall  ENVTIEName::GetV4_Part_DefinitionInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetV4_Part_DefinitionInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetV4_Part_DefinitionLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetV4_Part_DefinitionLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::get_Visu_Mode_2D(CATBSTR & o2DVisuMode) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Visu_Mode_2D(o2DVisuMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_Visu_Mode_2D(const CATBSTR & i2DVisuMode) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Visu_Mode_2D(i2DVisuMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetVisu_Mode_2DInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetVisu_Mode_2DInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetVisu_Mode_2DLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetVisu_Mode_2DLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::get_StartUp_Model_For_Drawing(CATBSTR & oInitialModel) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_StartUp_Model_For_Drawing(oInitialModel)); \
} \
HRESULT __stdcall  ENVTIEName::put_StartUp_Model_For_Drawing(const CATBSTR & iInitialModel) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_StartUp_Model_For_Drawing(iInitialModel)); \
} \
HRESULT __stdcall  ENVTIEName::GetStartUp_Model_For_DrawingInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetStartUp_Model_For_DrawingInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetStartUp_Model_For_DrawingLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetStartUp_Model_For_DrawingLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::get_Mapping_File_Save_Mode(CATBSTR & oMapFileMode) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Mapping_File_Save_Mode(oMapFileMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_Mapping_File_Save_Mode(const CATBSTR & iMapFileMode) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Mapping_File_Save_Mode(iMapFileMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetMapping_File_Save_ModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMapping_File_Save_ModeInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMapping_File_Save_ModeLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMapping_File_Save_ModeLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::get_Mapping_Saving_File(CATBSTR & oMapSavingFile) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Mapping_Saving_File(oMapSavingFile)); \
} \
HRESULT __stdcall  ENVTIEName::put_Mapping_Saving_File(const CATBSTR & iMapSavingFile) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Mapping_Saving_File(iMapSavingFile)); \
} \
HRESULT __stdcall  ENVTIEName::GetMapping_Saving_FileInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMapping_Saving_FileInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMapping_Saving_FileLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMapping_Saving_FileLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::get_Search_List_Size(CATLONG & oListSize) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Search_List_Size(oListSize)); \
} \
HRESULT __stdcall  ENVTIEName::put_Search_List_Size(CATLONG iListSize) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Search_List_Size(iListSize)); \
} \
HRESULT __stdcall  ENVTIEName::get_Affiche_Attribut(CATBSTR & oAfficheAttr) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Affiche_Attribut(oAfficheAttr)); \
} \
HRESULT __stdcall  ENVTIEName::put_Affiche_Attribut(const CATBSTR & iAfficheAttr) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Affiche_Attribut(iAfficheAttr)); \
} \
HRESULT __stdcall  ENVTIEName::GetAffiche_AttributInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAffiche_AttributInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAffiche_AttributLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAffiche_AttributLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetSearch_Mapping_List(CATSafeArrayVariant *& oRelPath) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSearch_Mapping_List(oRelPath)); \
} \
HRESULT __stdcall  ENVTIEName::PutSearch_Mapping_List(const CATSafeArrayVariant & iRelPath) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)PutSearch_Mapping_List(iRelPath)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAMigrBatchSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAMigrBatchSettingAtt(classe)    TIECATIAMigrBatchSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAMigrBatchSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAMigrBatchSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAMigrBatchSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAMigrBatchSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAMigrBatchSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAMigrBatchSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::get_Migration_Type(CATBSTR & oMigrType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oMigrType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Migration_Type(oMigrType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oMigrType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::put_Migration_Type(const CATBSTR & iMigrType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iMigrType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Migration_Type(iMigrType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iMigrType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::GetMigration_TypeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMigration_TypeInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::SetMigration_TypeLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMigration_TypeLock(iLock); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::get_Migration_Interface(CATBSTR & oMigrItf) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oMigrItf); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Migration_Interface(oMigrItf); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oMigrItf); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::put_Migration_Interface(const CATBSTR & iMigrItf) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iMigrItf); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Migration_Interface(iMigrItf); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iMigrItf); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::GetMigration_InterfaceInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMigration_InterfaceInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::SetMigration_InterfaceLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMigration_InterfaceLock(iLock); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::get_Migration_Format(CATBSTR & oMigrFormat) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oMigrFormat); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Migration_Format(oMigrFormat); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oMigrFormat); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::put_Migration_Format(const CATBSTR & iMigrFormat) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iMigrFormat); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Migration_Format(iMigrFormat); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iMigrFormat); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::GetMigration_FormatInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMigration_FormatInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::SetMigration_FormatLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMigration_FormatLock(iLock); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::get_V4_Part_Definition(CATBSTR & oV4PartDef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oV4PartDef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_V4_Part_Definition(oV4PartDef); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oV4PartDef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::put_V4_Part_Definition(const CATBSTR & iV4PartDef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iV4PartDef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_V4_Part_Definition(iV4PartDef); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iV4PartDef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::GetV4_Part_DefinitionInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetV4_Part_DefinitionInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::SetV4_Part_DefinitionLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetV4_Part_DefinitionLock(iLock); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::get_Visu_Mode_2D(CATBSTR & o2DVisuMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&o2DVisuMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Visu_Mode_2D(o2DVisuMode); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&o2DVisuMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::put_Visu_Mode_2D(const CATBSTR & i2DVisuMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&i2DVisuMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Visu_Mode_2D(i2DVisuMode); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&i2DVisuMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::GetVisu_Mode_2DInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetVisu_Mode_2DInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::SetVisu_Mode_2DLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetVisu_Mode_2DLock(iLock); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::get_StartUp_Model_For_Drawing(CATBSTR & oInitialModel) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oInitialModel); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StartUp_Model_For_Drawing(oInitialModel); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oInitialModel); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::put_StartUp_Model_For_Drawing(const CATBSTR & iInitialModel) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iInitialModel); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_StartUp_Model_For_Drawing(iInitialModel); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iInitialModel); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::GetStartUp_Model_For_DrawingInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStartUp_Model_For_DrawingInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::SetStartUp_Model_For_DrawingLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetStartUp_Model_For_DrawingLock(iLock); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::get_Mapping_File_Save_Mode(CATBSTR & oMapFileMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oMapFileMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Mapping_File_Save_Mode(oMapFileMode); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oMapFileMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::put_Mapping_File_Save_Mode(const CATBSTR & iMapFileMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iMapFileMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Mapping_File_Save_Mode(iMapFileMode); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iMapFileMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::GetMapping_File_Save_ModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMapping_File_Save_ModeInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::SetMapping_File_Save_ModeLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMapping_File_Save_ModeLock(iLock); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::get_Mapping_Saving_File(CATBSTR & oMapSavingFile) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oMapSavingFile); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Mapping_Saving_File(oMapSavingFile); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oMapSavingFile); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::put_Mapping_Saving_File(const CATBSTR & iMapSavingFile) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iMapSavingFile); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Mapping_Saving_File(iMapSavingFile); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iMapSavingFile); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::GetMapping_Saving_FileInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMapping_Saving_FileInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::SetMapping_Saving_FileLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMapping_Saving_FileLock(iLock); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::get_Search_List_Size(CATLONG & oListSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oListSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Search_List_Size(oListSize); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oListSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::put_Search_List_Size(CATLONG iListSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iListSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Search_List_Size(iListSize); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iListSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::get_Affiche_Attribut(CATBSTR & oAfficheAttr) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oAfficheAttr); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Affiche_Attribut(oAfficheAttr); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oAfficheAttr); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::put_Affiche_Attribut(const CATBSTR & iAfficheAttr) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iAfficheAttr); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Affiche_Attribut(iAfficheAttr); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iAfficheAttr); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::GetAffiche_AttributInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAffiche_AttributInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::SetAffiche_AttributLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAffiche_AttributLock(iLock); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::GetSearch_Mapping_List(CATSafeArrayVariant *& oRelPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&oRelPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSearch_Mapping_List(oRelPath); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&oRelPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::PutSearch_Mapping_List(const CATSafeArrayVariant & iRelPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iRelPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutSearch_Mapping_List(iRelPath); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iRelPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMigrBatchSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMigrBatchSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMigrBatchSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMigrBatchSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMigrBatchSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMigrBatchSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAMigrBatchSettingAtt(classe) \
 \
 \
declare_TIE_CATIAMigrBatchSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMigrBatchSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMigrBatchSettingAtt,"CATIAMigrBatchSettingAtt",CATIAMigrBatchSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMigrBatchSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAMigrBatchSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMigrBatchSettingAtt##classe(classe::MetaObject(),CATIAMigrBatchSettingAtt::MetaObject(),(void *)CreateTIECATIAMigrBatchSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAMigrBatchSettingAtt(classe) \
 \
 \
declare_TIE_CATIAMigrBatchSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMigrBatchSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMigrBatchSettingAtt,"CATIAMigrBatchSettingAtt",CATIAMigrBatchSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMigrBatchSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAMigrBatchSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMigrBatchSettingAtt##classe(classe::MetaObject(),CATIAMigrBatchSettingAtt::MetaObject(),(void *)CreateTIECATIAMigrBatchSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAMigrBatchSettingAtt(classe) TIE_CATIAMigrBatchSettingAtt(classe)
#else
#define BOA_CATIAMigrBatchSettingAtt(classe) CATImplementBOA(CATIAMigrBatchSettingAtt, classe)
#endif

#endif
