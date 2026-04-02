#ifndef __TIE_CATIAV4WritingSettingAtt
#define __TIE_CATIAV4WritingSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAV4WritingSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAV4WritingSettingAtt */
#define declare_TIE_CATIAV4WritingSettingAtt(classe) \
 \
 \
class TIECATIAV4WritingSettingAtt##classe : public CATIAV4WritingSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAV4WritingSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Code_page_Dest(CATLONG & oStateOfCpdest); \
      virtual HRESULT __stdcall put_Code_page_Dest(CATLONG iStateOfCpdest); \
      virtual HRESULT __stdcall SetCode_page_DestLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetCode_page_DestInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_Model_Dimension(double & oValueOfModelDim); \
      virtual HRESULT __stdcall put_Model_Dimension(double iValueOfModelDim); \
      virtual HRESULT __stdcall SetModel_DimensionLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetModel_DimensionInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_Model_Unit(CATLONG & oDefaultModelUnit); \
      virtual HRESULT __stdcall put_Model_Unit(CATLONG iDefaultModelUnit); \
      virtual HRESULT __stdcall SetModel_UnitLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetModel_UnitInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_Asso_mode(CATV4IV5V4AssociativityModeEnum & oDefaultAssoMode); \
      virtual HRESULT __stdcall put_Asso_mode(CATV4IV5V4AssociativityModeEnum iDefaultAssoMode); \
      virtual HRESULT __stdcall SetAsso_modeLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetAsso_modeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_Layer_for_No_Asso(CATLONG & oDefaultLayer); \
      virtual HRESULT __stdcall put_Layer_for_No_Asso(CATLONG iDefaultLayer); \
      virtual HRESULT __stdcall SetLayer_for_No_AssoLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetLayer_for_No_AssoInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_ModeErrorDisplay(CATV4IV5V4ErrorFeatureCreationEnum & oModeErrorDisplay); \
      virtual HRESULT __stdcall put_ModeErrorDisplay(CATV4IV5V4ErrorFeatureCreationEnum iModeErrorDisplay); \
      virtual HRESULT __stdcall SetModeErrorDisplayLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetModeErrorDisplayInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_Initial_Model_File_Path(CATBSTR & oDefaultInitialModelPath); \
      virtual HRESULT __stdcall put_Initial_Model_File_Path(const CATBSTR & iDefaultInitialModelPath); \
      virtual HRESULT __stdcall SetInitial_Model_File_PathLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetInitial_Model_File_PathInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_ModeCreateDisplay(CATV4IV5V4InternalCurveCreationEnum & oDefaultCreateDisplay); \
      virtual HRESULT __stdcall put_ModeCreateDisplay(CATV4IV5V4InternalCurveCreationEnum iDefaultCreateDisplay); \
      virtual HRESULT __stdcall SetModeCreateDisplayLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetModeCreateDisplayInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_Model_Factor(double & oDefaultModelFactor); \
      virtual HRESULT __stdcall put_Model_Factor(double iDefaultModelFactor); \
      virtual HRESULT __stdcall SetModel_FactorLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetModel_FactorInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_Model_File_Name(CAT_VARIANT_BOOL & oDefaultModelFileName); \
      virtual HRESULT __stdcall put_Model_File_Name(CAT_VARIANT_BOOL iDefaultModelFileName); \
      virtual HRESULT __stdcall SetModel_File_NameLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetModel_File_NameInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_CleanTolCheck(CAT_VARIANT_BOOL & oDefaultCleanTolCheck); \
      virtual HRESULT __stdcall put_CleanTolCheck(CAT_VARIANT_BOOL iDefaultCleanTolCheck); \
      virtual HRESULT __stdcall SetCleanTolCheckLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetCleanTolCheckInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_CleanTolValue(double & oDefaultCleanTolValue); \
      virtual HRESULT __stdcall put_CleanTolValue(double iDefaultCleanTolValue); \
      virtual HRESULT __stdcall SetCleanTolValueLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetCleanTolValueInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
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



#define ENVTIEdeclare_CATIAV4WritingSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Code_page_Dest(CATLONG & oStateOfCpdest); \
virtual HRESULT __stdcall put_Code_page_Dest(CATLONG iStateOfCpdest); \
virtual HRESULT __stdcall SetCode_page_DestLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetCode_page_DestInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_Model_Dimension(double & oValueOfModelDim); \
virtual HRESULT __stdcall put_Model_Dimension(double iValueOfModelDim); \
virtual HRESULT __stdcall SetModel_DimensionLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetModel_DimensionInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_Model_Unit(CATLONG & oDefaultModelUnit); \
virtual HRESULT __stdcall put_Model_Unit(CATLONG iDefaultModelUnit); \
virtual HRESULT __stdcall SetModel_UnitLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetModel_UnitInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_Asso_mode(CATV4IV5V4AssociativityModeEnum & oDefaultAssoMode); \
virtual HRESULT __stdcall put_Asso_mode(CATV4IV5V4AssociativityModeEnum iDefaultAssoMode); \
virtual HRESULT __stdcall SetAsso_modeLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetAsso_modeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_Layer_for_No_Asso(CATLONG & oDefaultLayer); \
virtual HRESULT __stdcall put_Layer_for_No_Asso(CATLONG iDefaultLayer); \
virtual HRESULT __stdcall SetLayer_for_No_AssoLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetLayer_for_No_AssoInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_ModeErrorDisplay(CATV4IV5V4ErrorFeatureCreationEnum & oModeErrorDisplay); \
virtual HRESULT __stdcall put_ModeErrorDisplay(CATV4IV5V4ErrorFeatureCreationEnum iModeErrorDisplay); \
virtual HRESULT __stdcall SetModeErrorDisplayLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetModeErrorDisplayInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_Initial_Model_File_Path(CATBSTR & oDefaultInitialModelPath); \
virtual HRESULT __stdcall put_Initial_Model_File_Path(const CATBSTR & iDefaultInitialModelPath); \
virtual HRESULT __stdcall SetInitial_Model_File_PathLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetInitial_Model_File_PathInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_ModeCreateDisplay(CATV4IV5V4InternalCurveCreationEnum & oDefaultCreateDisplay); \
virtual HRESULT __stdcall put_ModeCreateDisplay(CATV4IV5V4InternalCurveCreationEnum iDefaultCreateDisplay); \
virtual HRESULT __stdcall SetModeCreateDisplayLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetModeCreateDisplayInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_Model_Factor(double & oDefaultModelFactor); \
virtual HRESULT __stdcall put_Model_Factor(double iDefaultModelFactor); \
virtual HRESULT __stdcall SetModel_FactorLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetModel_FactorInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_Model_File_Name(CAT_VARIANT_BOOL & oDefaultModelFileName); \
virtual HRESULT __stdcall put_Model_File_Name(CAT_VARIANT_BOOL iDefaultModelFileName); \
virtual HRESULT __stdcall SetModel_File_NameLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetModel_File_NameInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_CleanTolCheck(CAT_VARIANT_BOOL & oDefaultCleanTolCheck); \
virtual HRESULT __stdcall put_CleanTolCheck(CAT_VARIANT_BOOL iDefaultCleanTolCheck); \
virtual HRESULT __stdcall SetCleanTolCheckLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetCleanTolCheckInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_CleanTolValue(double & oDefaultCleanTolValue); \
virtual HRESULT __stdcall put_CleanTolValue(double iDefaultCleanTolValue); \
virtual HRESULT __stdcall SetCleanTolValueLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetCleanTolValueInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
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


#define ENVTIEdefine_CATIAV4WritingSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Code_page_Dest(CATLONG & oStateOfCpdest) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Code_page_Dest(oStateOfCpdest)); \
} \
HRESULT __stdcall  ENVTIEName::put_Code_page_Dest(CATLONG iStateOfCpdest) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Code_page_Dest(iStateOfCpdest)); \
} \
HRESULT __stdcall  ENVTIEName::SetCode_page_DestLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetCode_page_DestLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetCode_page_DestInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetCode_page_DestInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_Model_Dimension(double & oValueOfModelDim) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Model_Dimension(oValueOfModelDim)); \
} \
HRESULT __stdcall  ENVTIEName::put_Model_Dimension(double iValueOfModelDim) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Model_Dimension(iValueOfModelDim)); \
} \
HRESULT __stdcall  ENVTIEName::SetModel_DimensionLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetModel_DimensionLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetModel_DimensionInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetModel_DimensionInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_Model_Unit(CATLONG & oDefaultModelUnit) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Model_Unit(oDefaultModelUnit)); \
} \
HRESULT __stdcall  ENVTIEName::put_Model_Unit(CATLONG iDefaultModelUnit) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Model_Unit(iDefaultModelUnit)); \
} \
HRESULT __stdcall  ENVTIEName::SetModel_UnitLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetModel_UnitLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetModel_UnitInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetModel_UnitInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_Asso_mode(CATV4IV5V4AssociativityModeEnum & oDefaultAssoMode) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Asso_mode(oDefaultAssoMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_Asso_mode(CATV4IV5V4AssociativityModeEnum iDefaultAssoMode) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Asso_mode(iDefaultAssoMode)); \
} \
HRESULT __stdcall  ENVTIEName::SetAsso_modeLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAsso_modeLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetAsso_modeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAsso_modeInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_Layer_for_No_Asso(CATLONG & oDefaultLayer) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Layer_for_No_Asso(oDefaultLayer)); \
} \
HRESULT __stdcall  ENVTIEName::put_Layer_for_No_Asso(CATLONG iDefaultLayer) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Layer_for_No_Asso(iDefaultLayer)); \
} \
HRESULT __stdcall  ENVTIEName::SetLayer_for_No_AssoLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetLayer_for_No_AssoLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetLayer_for_No_AssoInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetLayer_for_No_AssoInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_ModeErrorDisplay(CATV4IV5V4ErrorFeatureCreationEnum & oModeErrorDisplay) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ModeErrorDisplay(oModeErrorDisplay)); \
} \
HRESULT __stdcall  ENVTIEName::put_ModeErrorDisplay(CATV4IV5V4ErrorFeatureCreationEnum iModeErrorDisplay) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ModeErrorDisplay(iModeErrorDisplay)); \
} \
HRESULT __stdcall  ENVTIEName::SetModeErrorDisplayLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetModeErrorDisplayLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetModeErrorDisplayInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetModeErrorDisplayInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_Initial_Model_File_Path(CATBSTR & oDefaultInitialModelPath) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Initial_Model_File_Path(oDefaultInitialModelPath)); \
} \
HRESULT __stdcall  ENVTIEName::put_Initial_Model_File_Path(const CATBSTR & iDefaultInitialModelPath) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Initial_Model_File_Path(iDefaultInitialModelPath)); \
} \
HRESULT __stdcall  ENVTIEName::SetInitial_Model_File_PathLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetInitial_Model_File_PathLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetInitial_Model_File_PathInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetInitial_Model_File_PathInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_ModeCreateDisplay(CATV4IV5V4InternalCurveCreationEnum & oDefaultCreateDisplay) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ModeCreateDisplay(oDefaultCreateDisplay)); \
} \
HRESULT __stdcall  ENVTIEName::put_ModeCreateDisplay(CATV4IV5V4InternalCurveCreationEnum iDefaultCreateDisplay) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ModeCreateDisplay(iDefaultCreateDisplay)); \
} \
HRESULT __stdcall  ENVTIEName::SetModeCreateDisplayLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetModeCreateDisplayLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetModeCreateDisplayInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetModeCreateDisplayInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_Model_Factor(double & oDefaultModelFactor) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Model_Factor(oDefaultModelFactor)); \
} \
HRESULT __stdcall  ENVTIEName::put_Model_Factor(double iDefaultModelFactor) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Model_Factor(iDefaultModelFactor)); \
} \
HRESULT __stdcall  ENVTIEName::SetModel_FactorLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetModel_FactorLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetModel_FactorInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetModel_FactorInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_Model_File_Name(CAT_VARIANT_BOOL & oDefaultModelFileName) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Model_File_Name(oDefaultModelFileName)); \
} \
HRESULT __stdcall  ENVTIEName::put_Model_File_Name(CAT_VARIANT_BOOL iDefaultModelFileName) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Model_File_Name(iDefaultModelFileName)); \
} \
HRESULT __stdcall  ENVTIEName::SetModel_File_NameLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetModel_File_NameLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetModel_File_NameInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetModel_File_NameInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_CleanTolCheck(CAT_VARIANT_BOOL & oDefaultCleanTolCheck) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_CleanTolCheck(oDefaultCleanTolCheck)); \
} \
HRESULT __stdcall  ENVTIEName::put_CleanTolCheck(CAT_VARIANT_BOOL iDefaultCleanTolCheck) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_CleanTolCheck(iDefaultCleanTolCheck)); \
} \
HRESULT __stdcall  ENVTIEName::SetCleanTolCheckLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetCleanTolCheckLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetCleanTolCheckInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetCleanTolCheckInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_CleanTolValue(double & oDefaultCleanTolValue) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_CleanTolValue(oDefaultCleanTolValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_CleanTolValue(double iDefaultCleanTolValue) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_CleanTolValue(iDefaultCleanTolValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetCleanTolValueLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetCleanTolValueLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetCleanTolValueInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetCleanTolValueInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAV4WritingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAV4WritingSettingAtt(classe)    TIECATIAV4WritingSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAV4WritingSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAV4WritingSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAV4WritingSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAV4WritingSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAV4WritingSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAV4WritingSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::get_Code_page_Dest(CATLONG & oStateOfCpdest) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oStateOfCpdest); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Code_page_Dest(oStateOfCpdest); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oStateOfCpdest); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::put_Code_page_Dest(CATLONG iStateOfCpdest) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iStateOfCpdest); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Code_page_Dest(iStateOfCpdest); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iStateOfCpdest); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::SetCode_page_DestLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCode_page_DestLock(iLock); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::GetCode_page_DestInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCode_page_DestInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::get_Model_Dimension(double & oValueOfModelDim) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oValueOfModelDim); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Model_Dimension(oValueOfModelDim); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oValueOfModelDim); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::put_Model_Dimension(double iValueOfModelDim) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iValueOfModelDim); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Model_Dimension(iValueOfModelDim); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iValueOfModelDim); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::SetModel_DimensionLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetModel_DimensionLock(iLock); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::GetModel_DimensionInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetModel_DimensionInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::get_Model_Unit(CATLONG & oDefaultModelUnit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oDefaultModelUnit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Model_Unit(oDefaultModelUnit); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oDefaultModelUnit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::put_Model_Unit(CATLONG iDefaultModelUnit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iDefaultModelUnit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Model_Unit(iDefaultModelUnit); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iDefaultModelUnit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::SetModel_UnitLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetModel_UnitLock(iLock); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::GetModel_UnitInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetModel_UnitInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::get_Asso_mode(CATV4IV5V4AssociativityModeEnum & oDefaultAssoMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oDefaultAssoMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Asso_mode(oDefaultAssoMode); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oDefaultAssoMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::put_Asso_mode(CATV4IV5V4AssociativityModeEnum iDefaultAssoMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iDefaultAssoMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Asso_mode(iDefaultAssoMode); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iDefaultAssoMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::SetAsso_modeLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAsso_modeLock(iLock); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::GetAsso_modeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAsso_modeInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::get_Layer_for_No_Asso(CATLONG & oDefaultLayer) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oDefaultLayer); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Layer_for_No_Asso(oDefaultLayer); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oDefaultLayer); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::put_Layer_for_No_Asso(CATLONG iDefaultLayer) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iDefaultLayer); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Layer_for_No_Asso(iDefaultLayer); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iDefaultLayer); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::SetLayer_for_No_AssoLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLayer_for_No_AssoLock(iLock); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::GetLayer_for_No_AssoInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLayer_for_No_AssoInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::get_ModeErrorDisplay(CATV4IV5V4ErrorFeatureCreationEnum & oModeErrorDisplay) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oModeErrorDisplay); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ModeErrorDisplay(oModeErrorDisplay); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oModeErrorDisplay); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::put_ModeErrorDisplay(CATV4IV5V4ErrorFeatureCreationEnum iModeErrorDisplay) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iModeErrorDisplay); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ModeErrorDisplay(iModeErrorDisplay); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iModeErrorDisplay); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::SetModeErrorDisplayLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetModeErrorDisplayLock(iLock); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::GetModeErrorDisplayInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetModeErrorDisplayInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::get_Initial_Model_File_Path(CATBSTR & oDefaultInitialModelPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oDefaultInitialModelPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Initial_Model_File_Path(oDefaultInitialModelPath); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oDefaultInitialModelPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::put_Initial_Model_File_Path(const CATBSTR & iDefaultInitialModelPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iDefaultInitialModelPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Initial_Model_File_Path(iDefaultInitialModelPath); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iDefaultInitialModelPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::SetInitial_Model_File_PathLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetInitial_Model_File_PathLock(iLock); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::GetInitial_Model_File_PathInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInitial_Model_File_PathInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::get_ModeCreateDisplay(CATV4IV5V4InternalCurveCreationEnum & oDefaultCreateDisplay) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oDefaultCreateDisplay); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ModeCreateDisplay(oDefaultCreateDisplay); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oDefaultCreateDisplay); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::put_ModeCreateDisplay(CATV4IV5V4InternalCurveCreationEnum iDefaultCreateDisplay) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iDefaultCreateDisplay); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ModeCreateDisplay(iDefaultCreateDisplay); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iDefaultCreateDisplay); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::SetModeCreateDisplayLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetModeCreateDisplayLock(iLock); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::GetModeCreateDisplayInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetModeCreateDisplayInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::get_Model_Factor(double & oDefaultModelFactor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oDefaultModelFactor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Model_Factor(oDefaultModelFactor); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oDefaultModelFactor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::put_Model_Factor(double iDefaultModelFactor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iDefaultModelFactor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Model_Factor(iDefaultModelFactor); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iDefaultModelFactor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::SetModel_FactorLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetModel_FactorLock(iLock); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::GetModel_FactorInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetModel_FactorInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::get_Model_File_Name(CAT_VARIANT_BOOL & oDefaultModelFileName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oDefaultModelFileName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Model_File_Name(oDefaultModelFileName); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oDefaultModelFileName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::put_Model_File_Name(CAT_VARIANT_BOOL iDefaultModelFileName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iDefaultModelFileName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Model_File_Name(iDefaultModelFileName); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iDefaultModelFileName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::SetModel_File_NameLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetModel_File_NameLock(iLock); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::GetModel_File_NameInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetModel_File_NameInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::get_CleanTolCheck(CAT_VARIANT_BOOL & oDefaultCleanTolCheck) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oDefaultCleanTolCheck); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CleanTolCheck(oDefaultCleanTolCheck); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oDefaultCleanTolCheck); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::put_CleanTolCheck(CAT_VARIANT_BOOL iDefaultCleanTolCheck) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iDefaultCleanTolCheck); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CleanTolCheck(iDefaultCleanTolCheck); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iDefaultCleanTolCheck); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::SetCleanTolCheckLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCleanTolCheckLock(iLock); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::GetCleanTolCheckInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCleanTolCheckInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::get_CleanTolValue(double & oDefaultCleanTolValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&oDefaultCleanTolValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CleanTolValue(oDefaultCleanTolValue); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&oDefaultCleanTolValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::put_CleanTolValue(double iDefaultCleanTolValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iDefaultCleanTolValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CleanTolValue(iDefaultCleanTolValue); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iDefaultCleanTolValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::SetCleanTolValueLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCleanTolValueLock(iLock); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::GetCleanTolValueInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCleanTolValueInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4WritingSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAV4WritingSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAV4WritingSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAV4WritingSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAV4WritingSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAV4WritingSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAV4WritingSettingAtt(classe) \
 \
 \
declare_TIE_CATIAV4WritingSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAV4WritingSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAV4WritingSettingAtt,"CATIAV4WritingSettingAtt",CATIAV4WritingSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAV4WritingSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAV4WritingSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAV4WritingSettingAtt##classe(classe::MetaObject(),CATIAV4WritingSettingAtt::MetaObject(),(void *)CreateTIECATIAV4WritingSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAV4WritingSettingAtt(classe) \
 \
 \
declare_TIE_CATIAV4WritingSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAV4WritingSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAV4WritingSettingAtt,"CATIAV4WritingSettingAtt",CATIAV4WritingSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAV4WritingSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAV4WritingSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAV4WritingSettingAtt##classe(classe::MetaObject(),CATIAV4WritingSettingAtt::MetaObject(),(void *)CreateTIECATIAV4WritingSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAV4WritingSettingAtt(classe) TIE_CATIAV4WritingSettingAtt(classe)
#else
#define BOA_CATIAV4WritingSettingAtt(classe) CATImplementBOA(CATIAV4WritingSettingAtt, classe)
#endif

#endif
