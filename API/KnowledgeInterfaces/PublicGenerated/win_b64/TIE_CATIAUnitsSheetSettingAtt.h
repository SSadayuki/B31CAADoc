#ifndef __TIE_CATIAUnitsSheetSettingAtt
#define __TIE_CATIAUnitsSheetSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAUnitsSheetSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAUnitsSheetSettingAtt */
#define declare_TIE_CATIAUnitsSheetSettingAtt(classe) \
 \
 \
class TIECATIAUnitsSheetSettingAtt##classe : public CATIAUnitsSheetSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAUnitsSheetSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall SaveRepositoryForUnits(); \
      virtual HRESULT __stdcall RollbackForUnits(); \
      virtual HRESULT __stdcall CommitForUnits(); \
      virtual HRESULT __stdcall ResetToAdminValuesForUnits(); \
      virtual HRESULT __stdcall get_ListOfMagnitudes(CATSafeArrayVariant *& oListOfMagnitudes); \
      virtual HRESULT __stdcall get_ListOfMagnitudesSize(double & oListOfMagnitudesSize); \
      virtual HRESULT __stdcall GetMagnitudeValues(CATBSTR & iMagnitudeName, CATBSTR & oUnitName, double & oDecimalPlaceReadWrite, double & oDecimalPlaceReadOnly); \
      virtual HRESULT __stdcall GetDecimalReadWrite(CATBSTR & iMagnitudeName, double & oDecimalPlaceReadWrite); \
      virtual HRESULT __stdcall GetDecimalReadOnly(CATBSTR & iMagnitudeName, double & oDecimalPlaceReadOnly); \
      virtual HRESULT __stdcall SetMagnitudeValues(CATBSTR & iMagnitudeName, CATBSTR & iUnitName, double iDecimalPlaceReadWrite, double iDecimalPlaceReadOnly); \
      virtual HRESULT __stdcall GetListOfMagnitudesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetListOfMagnitudesLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDimensionsDisplayInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDimensionsDisplayLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DisplayTrailingZeros(short & oDisplayTrailingZeros); \
      virtual HRESULT __stdcall put_DisplayTrailingZeros(short iDisplayTrailingZeros); \
      virtual HRESULT __stdcall GetDisplayTrailingZerosInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDisplayTrailingZerosLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ExpNotationValuesGreater(double & oExpNotationValuesGreater); \
      virtual HRESULT __stdcall put_ExpNotationValuesGreater(double iExpNotationValuesGreater); \
      virtual HRESULT __stdcall GetExpNotationValuesGreaterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetExpNotationValuesGreaterLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ExpNotationValuesLower(double & oExpNotationValuesLower); \
      virtual HRESULT __stdcall put_ExpNotationValuesLower(double iExpNotationValuesLower); \
      virtual HRESULT __stdcall GetExpNotationValuesLowerInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetExpNotationValuesLowerLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SameDisplay(short & oSameDisplay); \
      virtual HRESULT __stdcall put_SameDisplay(short iSameDisplay); \
      virtual HRESULT __stdcall GetSameDisplayInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSameDisplayLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIAUnitsSheetSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall SaveRepositoryForUnits(); \
virtual HRESULT __stdcall RollbackForUnits(); \
virtual HRESULT __stdcall CommitForUnits(); \
virtual HRESULT __stdcall ResetToAdminValuesForUnits(); \
virtual HRESULT __stdcall get_ListOfMagnitudes(CATSafeArrayVariant *& oListOfMagnitudes); \
virtual HRESULT __stdcall get_ListOfMagnitudesSize(double & oListOfMagnitudesSize); \
virtual HRESULT __stdcall GetMagnitudeValues(CATBSTR & iMagnitudeName, CATBSTR & oUnitName, double & oDecimalPlaceReadWrite, double & oDecimalPlaceReadOnly); \
virtual HRESULT __stdcall GetDecimalReadWrite(CATBSTR & iMagnitudeName, double & oDecimalPlaceReadWrite); \
virtual HRESULT __stdcall GetDecimalReadOnly(CATBSTR & iMagnitudeName, double & oDecimalPlaceReadOnly); \
virtual HRESULT __stdcall SetMagnitudeValues(CATBSTR & iMagnitudeName, CATBSTR & iUnitName, double iDecimalPlaceReadWrite, double iDecimalPlaceReadOnly); \
virtual HRESULT __stdcall GetListOfMagnitudesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetListOfMagnitudesLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDimensionsDisplayInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDimensionsDisplayLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DisplayTrailingZeros(short & oDisplayTrailingZeros); \
virtual HRESULT __stdcall put_DisplayTrailingZeros(short iDisplayTrailingZeros); \
virtual HRESULT __stdcall GetDisplayTrailingZerosInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDisplayTrailingZerosLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ExpNotationValuesGreater(double & oExpNotationValuesGreater); \
virtual HRESULT __stdcall put_ExpNotationValuesGreater(double iExpNotationValuesGreater); \
virtual HRESULT __stdcall GetExpNotationValuesGreaterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetExpNotationValuesGreaterLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ExpNotationValuesLower(double & oExpNotationValuesLower); \
virtual HRESULT __stdcall put_ExpNotationValuesLower(double iExpNotationValuesLower); \
virtual HRESULT __stdcall GetExpNotationValuesLowerInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetExpNotationValuesLowerLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SameDisplay(short & oSameDisplay); \
virtual HRESULT __stdcall put_SameDisplay(short iSameDisplay); \
virtual HRESULT __stdcall GetSameDisplayInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSameDisplayLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIAUnitsSheetSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::SaveRepositoryForUnits() \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepositoryForUnits()); \
} \
HRESULT __stdcall  ENVTIEName::RollbackForUnits() \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)RollbackForUnits()); \
} \
HRESULT __stdcall  ENVTIEName::CommitForUnits() \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)CommitForUnits()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesForUnits() \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesForUnits()); \
} \
HRESULT __stdcall  ENVTIEName::get_ListOfMagnitudes(CATSafeArrayVariant *& oListOfMagnitudes) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ListOfMagnitudes(oListOfMagnitudes)); \
} \
HRESULT __stdcall  ENVTIEName::get_ListOfMagnitudesSize(double & oListOfMagnitudesSize) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ListOfMagnitudesSize(oListOfMagnitudesSize)); \
} \
HRESULT __stdcall  ENVTIEName::GetMagnitudeValues(CATBSTR & iMagnitudeName, CATBSTR & oUnitName, double & oDecimalPlaceReadWrite, double & oDecimalPlaceReadOnly) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMagnitudeValues(iMagnitudeName,oUnitName,oDecimalPlaceReadWrite,oDecimalPlaceReadOnly)); \
} \
HRESULT __stdcall  ENVTIEName::GetDecimalReadWrite(CATBSTR & iMagnitudeName, double & oDecimalPlaceReadWrite) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDecimalReadWrite(iMagnitudeName,oDecimalPlaceReadWrite)); \
} \
HRESULT __stdcall  ENVTIEName::GetDecimalReadOnly(CATBSTR & iMagnitudeName, double & oDecimalPlaceReadOnly) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDecimalReadOnly(iMagnitudeName,oDecimalPlaceReadOnly)); \
} \
HRESULT __stdcall  ENVTIEName::SetMagnitudeValues(CATBSTR & iMagnitudeName, CATBSTR & iUnitName, double iDecimalPlaceReadWrite, double iDecimalPlaceReadOnly) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMagnitudeValues(iMagnitudeName,iUnitName,iDecimalPlaceReadWrite,iDecimalPlaceReadOnly)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfMagnitudesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetListOfMagnitudesInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetListOfMagnitudesLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetListOfMagnitudesLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimensionsDisplayInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDimensionsDisplayInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimensionsDisplayLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDimensionsDisplayLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DisplayTrailingZeros(short & oDisplayTrailingZeros) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DisplayTrailingZeros(oDisplayTrailingZeros)); \
} \
HRESULT __stdcall  ENVTIEName::put_DisplayTrailingZeros(short iDisplayTrailingZeros) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DisplayTrailingZeros(iDisplayTrailingZeros)); \
} \
HRESULT __stdcall  ENVTIEName::GetDisplayTrailingZerosInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDisplayTrailingZerosInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDisplayTrailingZerosLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDisplayTrailingZerosLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ExpNotationValuesGreater(double & oExpNotationValuesGreater) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ExpNotationValuesGreater(oExpNotationValuesGreater)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExpNotationValuesGreater(double iExpNotationValuesGreater) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ExpNotationValuesGreater(iExpNotationValuesGreater)); \
} \
HRESULT __stdcall  ENVTIEName::GetExpNotationValuesGreaterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetExpNotationValuesGreaterInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetExpNotationValuesGreaterLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetExpNotationValuesGreaterLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ExpNotationValuesLower(double & oExpNotationValuesLower) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ExpNotationValuesLower(oExpNotationValuesLower)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExpNotationValuesLower(double iExpNotationValuesLower) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ExpNotationValuesLower(iExpNotationValuesLower)); \
} \
HRESULT __stdcall  ENVTIEName::GetExpNotationValuesLowerInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetExpNotationValuesLowerInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetExpNotationValuesLowerLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetExpNotationValuesLowerLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SameDisplay(short & oSameDisplay) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SameDisplay(oSameDisplay)); \
} \
HRESULT __stdcall  ENVTIEName::put_SameDisplay(short iSameDisplay) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SameDisplay(iSameDisplay)); \
} \
HRESULT __stdcall  ENVTIEName::GetSameDisplayInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSameDisplayInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSameDisplayLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSameDisplayLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAUnitsSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAUnitsSheetSettingAtt(classe)    TIECATIAUnitsSheetSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAUnitsSheetSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAUnitsSheetSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAUnitsSheetSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAUnitsSheetSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAUnitsSheetSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAUnitsSheetSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::SaveRepositoryForUnits() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepositoryForUnits(); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::RollbackForUnits() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RollbackForUnits(); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::CommitForUnits() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CommitForUnits(); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::ResetToAdminValuesForUnits() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesForUnits(); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::get_ListOfMagnitudes(CATSafeArrayVariant *& oListOfMagnitudes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oListOfMagnitudes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ListOfMagnitudes(oListOfMagnitudes); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oListOfMagnitudes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::get_ListOfMagnitudesSize(double & oListOfMagnitudesSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oListOfMagnitudesSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ListOfMagnitudesSize(oListOfMagnitudesSize); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oListOfMagnitudesSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::GetMagnitudeValues(CATBSTR & iMagnitudeName, CATBSTR & oUnitName, double & oDecimalPlaceReadWrite, double & oDecimalPlaceReadOnly) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iMagnitudeName,&oUnitName,&oDecimalPlaceReadWrite,&oDecimalPlaceReadOnly); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMagnitudeValues(iMagnitudeName,oUnitName,oDecimalPlaceReadWrite,oDecimalPlaceReadOnly); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iMagnitudeName,&oUnitName,&oDecimalPlaceReadWrite,&oDecimalPlaceReadOnly); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::GetDecimalReadWrite(CATBSTR & iMagnitudeName, double & oDecimalPlaceReadWrite) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iMagnitudeName,&oDecimalPlaceReadWrite); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDecimalReadWrite(iMagnitudeName,oDecimalPlaceReadWrite); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iMagnitudeName,&oDecimalPlaceReadWrite); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::GetDecimalReadOnly(CATBSTR & iMagnitudeName, double & oDecimalPlaceReadOnly) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iMagnitudeName,&oDecimalPlaceReadOnly); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDecimalReadOnly(iMagnitudeName,oDecimalPlaceReadOnly); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iMagnitudeName,&oDecimalPlaceReadOnly); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::SetMagnitudeValues(CATBSTR & iMagnitudeName, CATBSTR & iUnitName, double iDecimalPlaceReadWrite, double iDecimalPlaceReadOnly) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iMagnitudeName,&iUnitName,&iDecimalPlaceReadWrite,&iDecimalPlaceReadOnly); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMagnitudeValues(iMagnitudeName,iUnitName,iDecimalPlaceReadWrite,iDecimalPlaceReadOnly); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iMagnitudeName,&iUnitName,&iDecimalPlaceReadWrite,&iDecimalPlaceReadOnly); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::GetListOfMagnitudesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfMagnitudesInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::SetListOfMagnitudesLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetListOfMagnitudesLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::GetDimensionsDisplayInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimensionsDisplayInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::SetDimensionsDisplayLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimensionsDisplayLock(iLocked); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::get_DisplayTrailingZeros(short & oDisplayTrailingZeros) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oDisplayTrailingZeros); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DisplayTrailingZeros(oDisplayTrailingZeros); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oDisplayTrailingZeros); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::put_DisplayTrailingZeros(short iDisplayTrailingZeros) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iDisplayTrailingZeros); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DisplayTrailingZeros(iDisplayTrailingZeros); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iDisplayTrailingZeros); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::GetDisplayTrailingZerosInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDisplayTrailingZerosInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::SetDisplayTrailingZerosLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDisplayTrailingZerosLock(iLocked); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::get_ExpNotationValuesGreater(double & oExpNotationValuesGreater) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oExpNotationValuesGreater); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExpNotationValuesGreater(oExpNotationValuesGreater); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oExpNotationValuesGreater); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::put_ExpNotationValuesGreater(double iExpNotationValuesGreater) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iExpNotationValuesGreater); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExpNotationValuesGreater(iExpNotationValuesGreater); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iExpNotationValuesGreater); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::GetExpNotationValuesGreaterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExpNotationValuesGreaterInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::SetExpNotationValuesGreaterLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetExpNotationValuesGreaterLock(iLocked); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::get_ExpNotationValuesLower(double & oExpNotationValuesLower) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oExpNotationValuesLower); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExpNotationValuesLower(oExpNotationValuesLower); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oExpNotationValuesLower); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::put_ExpNotationValuesLower(double iExpNotationValuesLower) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iExpNotationValuesLower); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExpNotationValuesLower(iExpNotationValuesLower); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iExpNotationValuesLower); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::GetExpNotationValuesLowerInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExpNotationValuesLowerInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::SetExpNotationValuesLowerLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetExpNotationValuesLowerLock(iLocked); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::get_SameDisplay(short & oSameDisplay) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oSameDisplay); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SameDisplay(oSameDisplay); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oSameDisplay); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::put_SameDisplay(short iSameDisplay) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iSameDisplay); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SameDisplay(iSameDisplay); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iSameDisplay); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::GetSameDisplayInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSameDisplayInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::SetSameDisplayLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSameDisplayLock(iLocked); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnitsSheetSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAUnitsSheetSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAUnitsSheetSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAUnitsSheetSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAUnitsSheetSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAUnitsSheetSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAUnitsSheetSettingAtt(classe) \
 \
 \
declare_TIE_CATIAUnitsSheetSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAUnitsSheetSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAUnitsSheetSettingAtt,"CATIAUnitsSheetSettingAtt",CATIAUnitsSheetSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAUnitsSheetSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAUnitsSheetSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAUnitsSheetSettingAtt##classe(classe::MetaObject(),CATIAUnitsSheetSettingAtt::MetaObject(),(void *)CreateTIECATIAUnitsSheetSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAUnitsSheetSettingAtt(classe) \
 \
 \
declare_TIE_CATIAUnitsSheetSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAUnitsSheetSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAUnitsSheetSettingAtt,"CATIAUnitsSheetSettingAtt",CATIAUnitsSheetSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAUnitsSheetSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAUnitsSheetSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAUnitsSheetSettingAtt##classe(classe::MetaObject(),CATIAUnitsSheetSettingAtt::MetaObject(),(void *)CreateTIECATIAUnitsSheetSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAUnitsSheetSettingAtt(classe) TIE_CATIAUnitsSheetSettingAtt(classe)
#else
#define BOA_CATIAUnitsSheetSettingAtt(classe) CATImplementBOA(CATIAUnitsSheetSettingAtt, classe)
#endif

#endif
