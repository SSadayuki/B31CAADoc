#ifndef __TIE_CATIAStmViewCharacteristicCurvesSettingAtt
#define __TIE_CATIAStmViewCharacteristicCurvesSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAStmViewCharacteristicCurvesSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAStmViewCharacteristicCurvesSettingAtt */
#define declare_TIE_CATIAStmViewCharacteristicCurvesSettingAtt(classe) \
 \
 \
class TIECATIAStmViewCharacteristicCurvesSettingAtt##classe : public CATIAStmViewCharacteristicCurvesSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAStmViewCharacteristicCurvesSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_SHMViewFDSurfFlgBTLSuppBF(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFDSurfFlgBTLSuppBF(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFDSurfFlgBTLSuppBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFDSurfFlgBTLSuppBFLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFPSurfFlgBTLSuppBF(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFPSurfFlgBTLSuppBF(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFPSurfFlgBTLSuppBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFPSurfFlgBTLSuppBFLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFDSurfFlgBTLFeatBF(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFDSurfFlgBTLFeatBF(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFDSurfFlgBTLFeatBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFDSurfFlgBTLFeatBFLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFPSurfFlgBTLFeatBF(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFPSurfFlgBTLFeatBF(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFPSurfFlgBTLFeatBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFPSurfFlgBTLFeatBFLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFDSurfFlgIMLBF(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFDSurfFlgIMLBF(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFDSurfFlgIMLBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFDSurfFlgIMLBFLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFPSurfFlgIMLBF(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFPSurfFlgIMLBF(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFPSurfFlgIMLBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFPSurfFlgIMLBFLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFDSurfFlgOMLBF(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFDSurfFlgOMLBF(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFDSurfFlgOMLBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFDSurfFlgOMLBFLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFPSurfFlgOMLBF(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFPSurfFlgOMLBF(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFPSurfFlgOMLBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFPSurfFlgOMLBFLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFPSurfFlgOML2BF(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFPSurfFlgOML2BF(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFPSurfFlgOML2BFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFPSurfFlgOML2BFLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFPSurfFlgCLBBF(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFPSurfFlgCLBBF(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFPSurfFlgCLBBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFPSurfFlgCLBBFLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFDSurfFlgBTLSuppHF(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFDSurfFlgBTLSuppHF(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFDSurfFlgBTLSuppHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFDSurfFlgBTLSuppHFLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFPSurfFlgBTLSuppHF(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFPSurfFlgBTLSuppHF(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFPSurfFlgBTLSuppHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFPSurfFlgBTLSuppHFLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFDSurfFlgBTLFeatHF(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFDSurfFlgBTLFeatHF(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFDSurfFlgBTLFeatHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFDSurfFlgBTLFeatHFLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFPSurfFlgBTLFeatHF(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFPSurfFlgBTLFeatHF(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFPSurfFlgBTLFeatHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFPSurfFlgBTLFeatHFLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFDSurfFlgIMLHF(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFDSurfFlgIMLHF(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFDSurfFlgIMLHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFDSurfFlgIMLHFLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFPSurfFlgIMLHF(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFPSurfFlgIMLHF(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFPSurfFlgIMLHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFPSurfFlgIMLHFLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFDSurfFlgOMLHF(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFDSurfFlgOMLHF(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFDSurfFlgOMLHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFDSurfFlgOMLHFLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFPSurfFlgOMLHF(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFPSurfFlgOMLHF(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFPSurfFlgOMLHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFPSurfFlgOMLHFLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFPSurfFlgOML2HF(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFPSurfFlgOML2HF(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFPSurfFlgOML2HFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFPSurfFlgOML2HFLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFPSurfFlgCLBHF(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFPSurfFlgCLBHF(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFPSurfFlgCLBHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFPSurfFlgCLBHFLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFDFlgHoleBTLFeat(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFDFlgHoleBTLFeat(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFDFlgHoleBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFDFlgHoleBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFPFlgHoleBTLFeat(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFPFlgHoleBTLFeat(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFPFlgHoleBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFPFlgHoleBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFDFlgHoleIML(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFDFlgHoleIML(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFDFlgHoleIMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFDFlgHoleIMLLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFPFlgHoleIML(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFPFlgHoleIML(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFPFlgHoleIMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFPFlgHoleIMLLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFDFlgHoleOML(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFDFlgHoleOML(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFDFlgHoleOMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFDFlgHoleOMLLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFPFlgHoleOML(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFPFlgHoleOML(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFPFlgHoleOMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFPFlgHoleOMLLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFDBeadBTLFeat(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFDBeadBTLFeat(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFDBeadBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFDBeadBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFPBeadBTLFeat(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFPBeadBTLFeat(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFPBeadBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFPBeadBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFDCircStampBTLFeat(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFDCircStampBTLFeat(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFDCircStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFDCircStampBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFPCircStampBTLFeat(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFPCircStampBTLFeat(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFPCircStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFPCircStampBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFDSurfStampBTLFeat(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFDSurfStampBTLFeat(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFDSurfStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFDSurfStampBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFPSurfStampBTLFeat(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFPSurfStampBTLFeat(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFPSurfStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFPSurfStampBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFDFlgCutBTLFeat(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFDFlgCutBTLFeat(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFDFlgCutBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFDFlgCutBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFPFlgCutBTLFeat(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFPFlgCutBTLFeat(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFPFlgCutBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFPFlgCutBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFDFlgCutIML(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFDFlgCutIML(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFDFlgCutIMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFDFlgCutIMLLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFPFlgCutIML(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFPFlgCutIML(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFPFlgCutIMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFPFlgCutIMLLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFDFlgCutOML(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFDFlgCutOML(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFDFlgCutOMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFDFlgCutOMLLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFPFlgCutOML(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFPFlgCutOML(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFPFlgCutOMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFPFlgCutOMLLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFDStiffStampBTLFeat(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFDStiffStampBTLFeat(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFDStiffStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFDStiffStampBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFPStiffStampBTLFeat(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFPStiffStampBTLFeat(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFPStiffStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFPStiffStampBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFDCurveStampBTLFeat(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFDCurveStampBTLFeat(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFDCurveStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFDCurveStampBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFPCurveStampBTLFeat(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFPCurveStampBTLFeat(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFPCurveStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFPCurveStampBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFDUserStampBTLFeat(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFDUserStampBTLFeat(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFDUserStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFDUserStampBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFPUserStampBTLFeat(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFPUserStampBTLFeat(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFPUserStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFPUserStampBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFDOtherStampBTLFeat(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFDOtherStampBTLFeat(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFDOtherStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFDOtherStampBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SHMViewFPOtherStampBTLFeat(CATLONG & oSeen); \
      virtual HRESULT __stdcall put_SHMViewFPOtherStampBTLFeat(CATLONG iSeen); \
      virtual HRESULT __stdcall GetSHMViewFPOtherStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSHMViewFPOtherStampBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIAStmViewCharacteristicCurvesSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_SHMViewFDSurfFlgBTLSuppBF(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFDSurfFlgBTLSuppBF(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFDSurfFlgBTLSuppBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFDSurfFlgBTLSuppBFLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFPSurfFlgBTLSuppBF(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFPSurfFlgBTLSuppBF(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFPSurfFlgBTLSuppBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFPSurfFlgBTLSuppBFLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFDSurfFlgBTLFeatBF(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFDSurfFlgBTLFeatBF(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFDSurfFlgBTLFeatBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFDSurfFlgBTLFeatBFLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFPSurfFlgBTLFeatBF(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFPSurfFlgBTLFeatBF(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFPSurfFlgBTLFeatBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFPSurfFlgBTLFeatBFLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFDSurfFlgIMLBF(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFDSurfFlgIMLBF(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFDSurfFlgIMLBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFDSurfFlgIMLBFLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFPSurfFlgIMLBF(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFPSurfFlgIMLBF(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFPSurfFlgIMLBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFPSurfFlgIMLBFLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFDSurfFlgOMLBF(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFDSurfFlgOMLBF(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFDSurfFlgOMLBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFDSurfFlgOMLBFLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFPSurfFlgOMLBF(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFPSurfFlgOMLBF(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFPSurfFlgOMLBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFPSurfFlgOMLBFLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFPSurfFlgOML2BF(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFPSurfFlgOML2BF(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFPSurfFlgOML2BFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFPSurfFlgOML2BFLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFPSurfFlgCLBBF(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFPSurfFlgCLBBF(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFPSurfFlgCLBBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFPSurfFlgCLBBFLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFDSurfFlgBTLSuppHF(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFDSurfFlgBTLSuppHF(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFDSurfFlgBTLSuppHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFDSurfFlgBTLSuppHFLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFPSurfFlgBTLSuppHF(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFPSurfFlgBTLSuppHF(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFPSurfFlgBTLSuppHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFPSurfFlgBTLSuppHFLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFDSurfFlgBTLFeatHF(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFDSurfFlgBTLFeatHF(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFDSurfFlgBTLFeatHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFDSurfFlgBTLFeatHFLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFPSurfFlgBTLFeatHF(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFPSurfFlgBTLFeatHF(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFPSurfFlgBTLFeatHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFPSurfFlgBTLFeatHFLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFDSurfFlgIMLHF(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFDSurfFlgIMLHF(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFDSurfFlgIMLHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFDSurfFlgIMLHFLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFPSurfFlgIMLHF(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFPSurfFlgIMLHF(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFPSurfFlgIMLHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFPSurfFlgIMLHFLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFDSurfFlgOMLHF(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFDSurfFlgOMLHF(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFDSurfFlgOMLHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFDSurfFlgOMLHFLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFPSurfFlgOMLHF(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFPSurfFlgOMLHF(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFPSurfFlgOMLHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFPSurfFlgOMLHFLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFPSurfFlgOML2HF(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFPSurfFlgOML2HF(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFPSurfFlgOML2HFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFPSurfFlgOML2HFLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFPSurfFlgCLBHF(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFPSurfFlgCLBHF(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFPSurfFlgCLBHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFPSurfFlgCLBHFLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFDFlgHoleBTLFeat(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFDFlgHoleBTLFeat(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFDFlgHoleBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFDFlgHoleBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFPFlgHoleBTLFeat(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFPFlgHoleBTLFeat(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFPFlgHoleBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFPFlgHoleBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFDFlgHoleIML(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFDFlgHoleIML(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFDFlgHoleIMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFDFlgHoleIMLLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFPFlgHoleIML(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFPFlgHoleIML(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFPFlgHoleIMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFPFlgHoleIMLLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFDFlgHoleOML(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFDFlgHoleOML(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFDFlgHoleOMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFDFlgHoleOMLLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFPFlgHoleOML(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFPFlgHoleOML(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFPFlgHoleOMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFPFlgHoleOMLLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFDBeadBTLFeat(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFDBeadBTLFeat(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFDBeadBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFDBeadBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFPBeadBTLFeat(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFPBeadBTLFeat(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFPBeadBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFPBeadBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFDCircStampBTLFeat(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFDCircStampBTLFeat(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFDCircStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFDCircStampBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFPCircStampBTLFeat(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFPCircStampBTLFeat(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFPCircStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFPCircStampBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFDSurfStampBTLFeat(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFDSurfStampBTLFeat(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFDSurfStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFDSurfStampBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFPSurfStampBTLFeat(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFPSurfStampBTLFeat(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFPSurfStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFPSurfStampBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFDFlgCutBTLFeat(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFDFlgCutBTLFeat(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFDFlgCutBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFDFlgCutBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFPFlgCutBTLFeat(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFPFlgCutBTLFeat(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFPFlgCutBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFPFlgCutBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFDFlgCutIML(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFDFlgCutIML(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFDFlgCutIMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFDFlgCutIMLLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFPFlgCutIML(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFPFlgCutIML(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFPFlgCutIMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFPFlgCutIMLLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFDFlgCutOML(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFDFlgCutOML(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFDFlgCutOMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFDFlgCutOMLLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFPFlgCutOML(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFPFlgCutOML(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFPFlgCutOMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFPFlgCutOMLLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFDStiffStampBTLFeat(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFDStiffStampBTLFeat(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFDStiffStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFDStiffStampBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFPStiffStampBTLFeat(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFPStiffStampBTLFeat(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFPStiffStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFPStiffStampBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFDCurveStampBTLFeat(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFDCurveStampBTLFeat(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFDCurveStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFDCurveStampBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFPCurveStampBTLFeat(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFPCurveStampBTLFeat(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFPCurveStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFPCurveStampBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFDUserStampBTLFeat(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFDUserStampBTLFeat(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFDUserStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFDUserStampBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFPUserStampBTLFeat(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFPUserStampBTLFeat(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFPUserStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFPUserStampBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFDOtherStampBTLFeat(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFDOtherStampBTLFeat(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFDOtherStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFDOtherStampBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SHMViewFPOtherStampBTLFeat(CATLONG & oSeen); \
virtual HRESULT __stdcall put_SHMViewFPOtherStampBTLFeat(CATLONG iSeen); \
virtual HRESULT __stdcall GetSHMViewFPOtherStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSHMViewFPOtherStampBTLFeatLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIAStmViewCharacteristicCurvesSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_SHMViewFDSurfFlgBTLSuppBF(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFDSurfFlgBTLSuppBF(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFDSurfFlgBTLSuppBF(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFDSurfFlgBTLSuppBF(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFDSurfFlgBTLSuppBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFDSurfFlgBTLSuppBFInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFDSurfFlgBTLSuppBFLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFDSurfFlgBTLSuppBFLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFPSurfFlgBTLSuppBF(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFPSurfFlgBTLSuppBF(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFPSurfFlgBTLSuppBF(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFPSurfFlgBTLSuppBF(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFPSurfFlgBTLSuppBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFPSurfFlgBTLSuppBFInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFPSurfFlgBTLSuppBFLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFPSurfFlgBTLSuppBFLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFDSurfFlgBTLFeatBF(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFDSurfFlgBTLFeatBF(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFDSurfFlgBTLFeatBF(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFDSurfFlgBTLFeatBF(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFDSurfFlgBTLFeatBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFDSurfFlgBTLFeatBFInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFDSurfFlgBTLFeatBFLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFDSurfFlgBTLFeatBFLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFPSurfFlgBTLFeatBF(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFPSurfFlgBTLFeatBF(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFPSurfFlgBTLFeatBF(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFPSurfFlgBTLFeatBF(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFPSurfFlgBTLFeatBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFPSurfFlgBTLFeatBFInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFPSurfFlgBTLFeatBFLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFPSurfFlgBTLFeatBFLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFDSurfFlgIMLBF(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFDSurfFlgIMLBF(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFDSurfFlgIMLBF(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFDSurfFlgIMLBF(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFDSurfFlgIMLBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFDSurfFlgIMLBFInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFDSurfFlgIMLBFLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFDSurfFlgIMLBFLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFPSurfFlgIMLBF(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFPSurfFlgIMLBF(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFPSurfFlgIMLBF(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFPSurfFlgIMLBF(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFPSurfFlgIMLBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFPSurfFlgIMLBFInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFPSurfFlgIMLBFLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFPSurfFlgIMLBFLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFDSurfFlgOMLBF(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFDSurfFlgOMLBF(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFDSurfFlgOMLBF(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFDSurfFlgOMLBF(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFDSurfFlgOMLBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFDSurfFlgOMLBFInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFDSurfFlgOMLBFLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFDSurfFlgOMLBFLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFPSurfFlgOMLBF(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFPSurfFlgOMLBF(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFPSurfFlgOMLBF(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFPSurfFlgOMLBF(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFPSurfFlgOMLBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFPSurfFlgOMLBFInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFPSurfFlgOMLBFLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFPSurfFlgOMLBFLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFPSurfFlgOML2BF(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFPSurfFlgOML2BF(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFPSurfFlgOML2BF(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFPSurfFlgOML2BF(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFPSurfFlgOML2BFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFPSurfFlgOML2BFInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFPSurfFlgOML2BFLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFPSurfFlgOML2BFLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFPSurfFlgCLBBF(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFPSurfFlgCLBBF(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFPSurfFlgCLBBF(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFPSurfFlgCLBBF(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFPSurfFlgCLBBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFPSurfFlgCLBBFInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFPSurfFlgCLBBFLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFPSurfFlgCLBBFLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFDSurfFlgBTLSuppHF(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFDSurfFlgBTLSuppHF(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFDSurfFlgBTLSuppHF(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFDSurfFlgBTLSuppHF(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFDSurfFlgBTLSuppHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFDSurfFlgBTLSuppHFInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFDSurfFlgBTLSuppHFLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFDSurfFlgBTLSuppHFLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFPSurfFlgBTLSuppHF(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFPSurfFlgBTLSuppHF(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFPSurfFlgBTLSuppHF(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFPSurfFlgBTLSuppHF(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFPSurfFlgBTLSuppHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFPSurfFlgBTLSuppHFInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFPSurfFlgBTLSuppHFLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFPSurfFlgBTLSuppHFLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFDSurfFlgBTLFeatHF(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFDSurfFlgBTLFeatHF(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFDSurfFlgBTLFeatHF(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFDSurfFlgBTLFeatHF(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFDSurfFlgBTLFeatHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFDSurfFlgBTLFeatHFInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFDSurfFlgBTLFeatHFLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFDSurfFlgBTLFeatHFLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFPSurfFlgBTLFeatHF(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFPSurfFlgBTLFeatHF(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFPSurfFlgBTLFeatHF(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFPSurfFlgBTLFeatHF(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFPSurfFlgBTLFeatHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFPSurfFlgBTLFeatHFInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFPSurfFlgBTLFeatHFLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFPSurfFlgBTLFeatHFLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFDSurfFlgIMLHF(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFDSurfFlgIMLHF(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFDSurfFlgIMLHF(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFDSurfFlgIMLHF(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFDSurfFlgIMLHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFDSurfFlgIMLHFInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFDSurfFlgIMLHFLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFDSurfFlgIMLHFLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFPSurfFlgIMLHF(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFPSurfFlgIMLHF(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFPSurfFlgIMLHF(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFPSurfFlgIMLHF(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFPSurfFlgIMLHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFPSurfFlgIMLHFInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFPSurfFlgIMLHFLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFPSurfFlgIMLHFLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFDSurfFlgOMLHF(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFDSurfFlgOMLHF(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFDSurfFlgOMLHF(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFDSurfFlgOMLHF(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFDSurfFlgOMLHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFDSurfFlgOMLHFInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFDSurfFlgOMLHFLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFDSurfFlgOMLHFLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFPSurfFlgOMLHF(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFPSurfFlgOMLHF(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFPSurfFlgOMLHF(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFPSurfFlgOMLHF(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFPSurfFlgOMLHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFPSurfFlgOMLHFInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFPSurfFlgOMLHFLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFPSurfFlgOMLHFLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFPSurfFlgOML2HF(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFPSurfFlgOML2HF(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFPSurfFlgOML2HF(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFPSurfFlgOML2HF(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFPSurfFlgOML2HFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFPSurfFlgOML2HFInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFPSurfFlgOML2HFLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFPSurfFlgOML2HFLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFPSurfFlgCLBHF(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFPSurfFlgCLBHF(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFPSurfFlgCLBHF(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFPSurfFlgCLBHF(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFPSurfFlgCLBHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFPSurfFlgCLBHFInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFPSurfFlgCLBHFLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFPSurfFlgCLBHFLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFDFlgHoleBTLFeat(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFDFlgHoleBTLFeat(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFDFlgHoleBTLFeat(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFDFlgHoleBTLFeat(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFDFlgHoleBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFDFlgHoleBTLFeatInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFDFlgHoleBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFDFlgHoleBTLFeatLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFPFlgHoleBTLFeat(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFPFlgHoleBTLFeat(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFPFlgHoleBTLFeat(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFPFlgHoleBTLFeat(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFPFlgHoleBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFPFlgHoleBTLFeatInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFPFlgHoleBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFPFlgHoleBTLFeatLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFDFlgHoleIML(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFDFlgHoleIML(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFDFlgHoleIML(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFDFlgHoleIML(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFDFlgHoleIMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFDFlgHoleIMLInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFDFlgHoleIMLLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFDFlgHoleIMLLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFPFlgHoleIML(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFPFlgHoleIML(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFPFlgHoleIML(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFPFlgHoleIML(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFPFlgHoleIMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFPFlgHoleIMLInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFPFlgHoleIMLLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFPFlgHoleIMLLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFDFlgHoleOML(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFDFlgHoleOML(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFDFlgHoleOML(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFDFlgHoleOML(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFDFlgHoleOMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFDFlgHoleOMLInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFDFlgHoleOMLLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFDFlgHoleOMLLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFPFlgHoleOML(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFPFlgHoleOML(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFPFlgHoleOML(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFPFlgHoleOML(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFPFlgHoleOMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFPFlgHoleOMLInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFPFlgHoleOMLLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFPFlgHoleOMLLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFDBeadBTLFeat(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFDBeadBTLFeat(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFDBeadBTLFeat(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFDBeadBTLFeat(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFDBeadBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFDBeadBTLFeatInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFDBeadBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFDBeadBTLFeatLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFPBeadBTLFeat(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFPBeadBTLFeat(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFPBeadBTLFeat(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFPBeadBTLFeat(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFPBeadBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFPBeadBTLFeatInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFPBeadBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFPBeadBTLFeatLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFDCircStampBTLFeat(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFDCircStampBTLFeat(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFDCircStampBTLFeat(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFDCircStampBTLFeat(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFDCircStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFDCircStampBTLFeatInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFDCircStampBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFDCircStampBTLFeatLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFPCircStampBTLFeat(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFPCircStampBTLFeat(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFPCircStampBTLFeat(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFPCircStampBTLFeat(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFPCircStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFPCircStampBTLFeatInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFPCircStampBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFPCircStampBTLFeatLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFDSurfStampBTLFeat(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFDSurfStampBTLFeat(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFDSurfStampBTLFeat(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFDSurfStampBTLFeat(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFDSurfStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFDSurfStampBTLFeatInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFDSurfStampBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFDSurfStampBTLFeatLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFPSurfStampBTLFeat(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFPSurfStampBTLFeat(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFPSurfStampBTLFeat(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFPSurfStampBTLFeat(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFPSurfStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFPSurfStampBTLFeatInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFPSurfStampBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFPSurfStampBTLFeatLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFDFlgCutBTLFeat(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFDFlgCutBTLFeat(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFDFlgCutBTLFeat(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFDFlgCutBTLFeat(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFDFlgCutBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFDFlgCutBTLFeatInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFDFlgCutBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFDFlgCutBTLFeatLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFPFlgCutBTLFeat(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFPFlgCutBTLFeat(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFPFlgCutBTLFeat(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFPFlgCutBTLFeat(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFPFlgCutBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFPFlgCutBTLFeatInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFPFlgCutBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFPFlgCutBTLFeatLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFDFlgCutIML(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFDFlgCutIML(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFDFlgCutIML(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFDFlgCutIML(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFDFlgCutIMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFDFlgCutIMLInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFDFlgCutIMLLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFDFlgCutIMLLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFPFlgCutIML(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFPFlgCutIML(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFPFlgCutIML(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFPFlgCutIML(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFPFlgCutIMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFPFlgCutIMLInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFPFlgCutIMLLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFPFlgCutIMLLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFDFlgCutOML(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFDFlgCutOML(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFDFlgCutOML(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFDFlgCutOML(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFDFlgCutOMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFDFlgCutOMLInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFDFlgCutOMLLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFDFlgCutOMLLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFPFlgCutOML(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFPFlgCutOML(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFPFlgCutOML(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFPFlgCutOML(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFPFlgCutOMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFPFlgCutOMLInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFPFlgCutOMLLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFPFlgCutOMLLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFDStiffStampBTLFeat(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFDStiffStampBTLFeat(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFDStiffStampBTLFeat(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFDStiffStampBTLFeat(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFDStiffStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFDStiffStampBTLFeatInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFDStiffStampBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFDStiffStampBTLFeatLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFPStiffStampBTLFeat(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFPStiffStampBTLFeat(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFPStiffStampBTLFeat(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFPStiffStampBTLFeat(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFPStiffStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFPStiffStampBTLFeatInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFPStiffStampBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFPStiffStampBTLFeatLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFDCurveStampBTLFeat(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFDCurveStampBTLFeat(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFDCurveStampBTLFeat(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFDCurveStampBTLFeat(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFDCurveStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFDCurveStampBTLFeatInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFDCurveStampBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFDCurveStampBTLFeatLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFPCurveStampBTLFeat(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFPCurveStampBTLFeat(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFPCurveStampBTLFeat(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFPCurveStampBTLFeat(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFPCurveStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFPCurveStampBTLFeatInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFPCurveStampBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFPCurveStampBTLFeatLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFDUserStampBTLFeat(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFDUserStampBTLFeat(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFDUserStampBTLFeat(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFDUserStampBTLFeat(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFDUserStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFDUserStampBTLFeatInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFDUserStampBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFDUserStampBTLFeatLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFPUserStampBTLFeat(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFPUserStampBTLFeat(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFPUserStampBTLFeat(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFPUserStampBTLFeat(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFPUserStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFPUserStampBTLFeatInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFPUserStampBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFPUserStampBTLFeatLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFDOtherStampBTLFeat(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFDOtherStampBTLFeat(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFDOtherStampBTLFeat(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFDOtherStampBTLFeat(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFDOtherStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFDOtherStampBTLFeatInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFDOtherStampBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFDOtherStampBTLFeatLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SHMViewFPOtherStampBTLFeat(CATLONG & oSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SHMViewFPOtherStampBTLFeat(oSeen)); \
} \
HRESULT __stdcall  ENVTIEName::put_SHMViewFPOtherStampBTLFeat(CATLONG iSeen) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SHMViewFPOtherStampBTLFeat(iSeen)); \
} \
HRESULT __stdcall  ENVTIEName::GetSHMViewFPOtherStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSHMViewFPOtherStampBTLFeatInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSHMViewFPOtherStampBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSHMViewFPOtherStampBTLFeatLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAStmViewCharacteristicCurvesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAStmViewCharacteristicCurvesSettingAtt(classe)    TIECATIAStmViewCharacteristicCurvesSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAStmViewCharacteristicCurvesSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAStmViewCharacteristicCurvesSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAStmViewCharacteristicCurvesSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAStmViewCharacteristicCurvesSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAStmViewCharacteristicCurvesSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAStmViewCharacteristicCurvesSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFDSurfFlgBTLSuppBF(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFDSurfFlgBTLSuppBF(oSeen); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFDSurfFlgBTLSuppBF(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFDSurfFlgBTLSuppBF(iSeen); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFDSurfFlgBTLSuppBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFDSurfFlgBTLSuppBFInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFDSurfFlgBTLSuppBFLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFDSurfFlgBTLSuppBFLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFPSurfFlgBTLSuppBF(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFPSurfFlgBTLSuppBF(oSeen); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFPSurfFlgBTLSuppBF(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFPSurfFlgBTLSuppBF(iSeen); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFPSurfFlgBTLSuppBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFPSurfFlgBTLSuppBFInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFPSurfFlgBTLSuppBFLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFPSurfFlgBTLSuppBFLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFDSurfFlgBTLFeatBF(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFDSurfFlgBTLFeatBF(oSeen); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFDSurfFlgBTLFeatBF(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFDSurfFlgBTLFeatBF(iSeen); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFDSurfFlgBTLFeatBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFDSurfFlgBTLFeatBFInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFDSurfFlgBTLFeatBFLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFDSurfFlgBTLFeatBFLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFPSurfFlgBTLFeatBF(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFPSurfFlgBTLFeatBF(oSeen); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFPSurfFlgBTLFeatBF(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFPSurfFlgBTLFeatBF(iSeen); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFPSurfFlgBTLFeatBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFPSurfFlgBTLFeatBFInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFPSurfFlgBTLFeatBFLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFPSurfFlgBTLFeatBFLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFDSurfFlgIMLBF(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFDSurfFlgIMLBF(oSeen); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFDSurfFlgIMLBF(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFDSurfFlgIMLBF(iSeen); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFDSurfFlgIMLBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFDSurfFlgIMLBFInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFDSurfFlgIMLBFLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFDSurfFlgIMLBFLock(iLocked); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFPSurfFlgIMLBF(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFPSurfFlgIMLBF(oSeen); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFPSurfFlgIMLBF(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFPSurfFlgIMLBF(iSeen); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFPSurfFlgIMLBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFPSurfFlgIMLBFInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFPSurfFlgIMLBFLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFPSurfFlgIMLBFLock(iLocked); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFDSurfFlgOMLBF(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFDSurfFlgOMLBF(oSeen); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFDSurfFlgOMLBF(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFDSurfFlgOMLBF(iSeen); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFDSurfFlgOMLBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFDSurfFlgOMLBFInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFDSurfFlgOMLBFLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFDSurfFlgOMLBFLock(iLocked); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFPSurfFlgOMLBF(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFPSurfFlgOMLBF(oSeen); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFPSurfFlgOMLBF(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFPSurfFlgOMLBF(iSeen); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFPSurfFlgOMLBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFPSurfFlgOMLBFInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFPSurfFlgOMLBFLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFPSurfFlgOMLBFLock(iLocked); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFPSurfFlgOML2BF(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFPSurfFlgOML2BF(oSeen); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFPSurfFlgOML2BF(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFPSurfFlgOML2BF(iSeen); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFPSurfFlgOML2BFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFPSurfFlgOML2BFInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFPSurfFlgOML2BFLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFPSurfFlgOML2BFLock(iLocked); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFPSurfFlgCLBBF(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFPSurfFlgCLBBF(oSeen); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFPSurfFlgCLBBF(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFPSurfFlgCLBBF(iSeen); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFPSurfFlgCLBBFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFPSurfFlgCLBBFInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFPSurfFlgCLBBFLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFPSurfFlgCLBBFLock(iLocked); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFDSurfFlgBTLSuppHF(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFDSurfFlgBTLSuppHF(oSeen); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFDSurfFlgBTLSuppHF(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFDSurfFlgBTLSuppHF(iSeen); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFDSurfFlgBTLSuppHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFDSurfFlgBTLSuppHFInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFDSurfFlgBTLSuppHFLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFDSurfFlgBTLSuppHFLock(iLocked); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFPSurfFlgBTLSuppHF(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFPSurfFlgBTLSuppHF(oSeen); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFPSurfFlgBTLSuppHF(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFPSurfFlgBTLSuppHF(iSeen); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFPSurfFlgBTLSuppHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFPSurfFlgBTLSuppHFInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFPSurfFlgBTLSuppHFLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFPSurfFlgBTLSuppHFLock(iLocked); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFDSurfFlgBTLFeatHF(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFDSurfFlgBTLFeatHF(oSeen); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFDSurfFlgBTLFeatHF(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFDSurfFlgBTLFeatHF(iSeen); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFDSurfFlgBTLFeatHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFDSurfFlgBTLFeatHFInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFDSurfFlgBTLFeatHFLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFDSurfFlgBTLFeatHFLock(iLocked); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFPSurfFlgBTLFeatHF(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFPSurfFlgBTLFeatHF(oSeen); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFPSurfFlgBTLFeatHF(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFPSurfFlgBTLFeatHF(iSeen); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFPSurfFlgBTLFeatHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFPSurfFlgBTLFeatHFInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFPSurfFlgBTLFeatHFLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFPSurfFlgBTLFeatHFLock(iLocked); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFDSurfFlgIMLHF(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFDSurfFlgIMLHF(oSeen); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFDSurfFlgIMLHF(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFDSurfFlgIMLHF(iSeen); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFDSurfFlgIMLHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFDSurfFlgIMLHFInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFDSurfFlgIMLHFLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFDSurfFlgIMLHFLock(iLocked); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFPSurfFlgIMLHF(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFPSurfFlgIMLHF(oSeen); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFPSurfFlgIMLHF(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFPSurfFlgIMLHF(iSeen); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFPSurfFlgIMLHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,63,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFPSurfFlgIMLHFInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,63,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFPSurfFlgIMLHFLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,64,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFPSurfFlgIMLHFLock(iLocked); \
   ExitAfterCall(this,64,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFDSurfFlgOMLHF(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,65,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFDSurfFlgOMLHF(oSeen); \
   ExitAfterCall(this,65,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFDSurfFlgOMLHF(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,66,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFDSurfFlgOMLHF(iSeen); \
   ExitAfterCall(this,66,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFDSurfFlgOMLHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,67,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFDSurfFlgOMLHFInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,67,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFDSurfFlgOMLHFLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,68,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFDSurfFlgOMLHFLock(iLocked); \
   ExitAfterCall(this,68,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFPSurfFlgOMLHF(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,69,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFPSurfFlgOMLHF(oSeen); \
   ExitAfterCall(this,69,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFPSurfFlgOMLHF(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,70,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFPSurfFlgOMLHF(iSeen); \
   ExitAfterCall(this,70,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFPSurfFlgOMLHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,71,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFPSurfFlgOMLHFInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,71,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFPSurfFlgOMLHFLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,72,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFPSurfFlgOMLHFLock(iLocked); \
   ExitAfterCall(this,72,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFPSurfFlgOML2HF(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,73,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFPSurfFlgOML2HF(oSeen); \
   ExitAfterCall(this,73,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFPSurfFlgOML2HF(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,74,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFPSurfFlgOML2HF(iSeen); \
   ExitAfterCall(this,74,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFPSurfFlgOML2HFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,75,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFPSurfFlgOML2HFInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,75,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFPSurfFlgOML2HFLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,76,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFPSurfFlgOML2HFLock(iLocked); \
   ExitAfterCall(this,76,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFPSurfFlgCLBHF(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,77,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFPSurfFlgCLBHF(oSeen); \
   ExitAfterCall(this,77,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFPSurfFlgCLBHF(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,78,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFPSurfFlgCLBHF(iSeen); \
   ExitAfterCall(this,78,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFPSurfFlgCLBHFInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,79,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFPSurfFlgCLBHFInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,79,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFPSurfFlgCLBHFLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,80,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFPSurfFlgCLBHFLock(iLocked); \
   ExitAfterCall(this,80,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFDFlgHoleBTLFeat(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,81,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFDFlgHoleBTLFeat(oSeen); \
   ExitAfterCall(this,81,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFDFlgHoleBTLFeat(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,82,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFDFlgHoleBTLFeat(iSeen); \
   ExitAfterCall(this,82,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFDFlgHoleBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,83,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFDFlgHoleBTLFeatInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,83,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFDFlgHoleBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,84,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFDFlgHoleBTLFeatLock(iLocked); \
   ExitAfterCall(this,84,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFPFlgHoleBTLFeat(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,85,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFPFlgHoleBTLFeat(oSeen); \
   ExitAfterCall(this,85,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFPFlgHoleBTLFeat(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,86,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFPFlgHoleBTLFeat(iSeen); \
   ExitAfterCall(this,86,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFPFlgHoleBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,87,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFPFlgHoleBTLFeatInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,87,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFPFlgHoleBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,88,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFPFlgHoleBTLFeatLock(iLocked); \
   ExitAfterCall(this,88,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFDFlgHoleIML(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,89,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFDFlgHoleIML(oSeen); \
   ExitAfterCall(this,89,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFDFlgHoleIML(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,90,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFDFlgHoleIML(iSeen); \
   ExitAfterCall(this,90,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFDFlgHoleIMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,91,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFDFlgHoleIMLInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,91,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFDFlgHoleIMLLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,92,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFDFlgHoleIMLLock(iLocked); \
   ExitAfterCall(this,92,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFPFlgHoleIML(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,93,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFPFlgHoleIML(oSeen); \
   ExitAfterCall(this,93,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFPFlgHoleIML(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,94,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFPFlgHoleIML(iSeen); \
   ExitAfterCall(this,94,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFPFlgHoleIMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,95,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFPFlgHoleIMLInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,95,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFPFlgHoleIMLLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,96,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFPFlgHoleIMLLock(iLocked); \
   ExitAfterCall(this,96,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFDFlgHoleOML(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,97,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFDFlgHoleOML(oSeen); \
   ExitAfterCall(this,97,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFDFlgHoleOML(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,98,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFDFlgHoleOML(iSeen); \
   ExitAfterCall(this,98,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFDFlgHoleOMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,99,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFDFlgHoleOMLInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,99,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFDFlgHoleOMLLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,100,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFDFlgHoleOMLLock(iLocked); \
   ExitAfterCall(this,100,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFPFlgHoleOML(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,101,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFPFlgHoleOML(oSeen); \
   ExitAfterCall(this,101,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFPFlgHoleOML(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,102,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFPFlgHoleOML(iSeen); \
   ExitAfterCall(this,102,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFPFlgHoleOMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,103,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFPFlgHoleOMLInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,103,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFPFlgHoleOMLLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,104,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFPFlgHoleOMLLock(iLocked); \
   ExitAfterCall(this,104,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFDBeadBTLFeat(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,105,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFDBeadBTLFeat(oSeen); \
   ExitAfterCall(this,105,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFDBeadBTLFeat(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,106,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFDBeadBTLFeat(iSeen); \
   ExitAfterCall(this,106,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFDBeadBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,107,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFDBeadBTLFeatInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,107,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFDBeadBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,108,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFDBeadBTLFeatLock(iLocked); \
   ExitAfterCall(this,108,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFPBeadBTLFeat(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,109,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFPBeadBTLFeat(oSeen); \
   ExitAfterCall(this,109,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFPBeadBTLFeat(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,110,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFPBeadBTLFeat(iSeen); \
   ExitAfterCall(this,110,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFPBeadBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,111,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFPBeadBTLFeatInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,111,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFPBeadBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,112,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFPBeadBTLFeatLock(iLocked); \
   ExitAfterCall(this,112,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFDCircStampBTLFeat(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,113,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFDCircStampBTLFeat(oSeen); \
   ExitAfterCall(this,113,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFDCircStampBTLFeat(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,114,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFDCircStampBTLFeat(iSeen); \
   ExitAfterCall(this,114,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFDCircStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,115,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFDCircStampBTLFeatInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,115,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFDCircStampBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,116,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFDCircStampBTLFeatLock(iLocked); \
   ExitAfterCall(this,116,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFPCircStampBTLFeat(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,117,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFPCircStampBTLFeat(oSeen); \
   ExitAfterCall(this,117,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFPCircStampBTLFeat(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,118,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFPCircStampBTLFeat(iSeen); \
   ExitAfterCall(this,118,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFPCircStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,119,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFPCircStampBTLFeatInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,119,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFPCircStampBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,120,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFPCircStampBTLFeatLock(iLocked); \
   ExitAfterCall(this,120,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFDSurfStampBTLFeat(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,121,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFDSurfStampBTLFeat(oSeen); \
   ExitAfterCall(this,121,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFDSurfStampBTLFeat(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,122,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFDSurfStampBTLFeat(iSeen); \
   ExitAfterCall(this,122,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFDSurfStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,123,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFDSurfStampBTLFeatInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,123,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFDSurfStampBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,124,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFDSurfStampBTLFeatLock(iLocked); \
   ExitAfterCall(this,124,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFPSurfStampBTLFeat(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,125,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFPSurfStampBTLFeat(oSeen); \
   ExitAfterCall(this,125,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFPSurfStampBTLFeat(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,126,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFPSurfStampBTLFeat(iSeen); \
   ExitAfterCall(this,126,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFPSurfStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,127,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFPSurfStampBTLFeatInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,127,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFPSurfStampBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,128,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFPSurfStampBTLFeatLock(iLocked); \
   ExitAfterCall(this,128,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFDFlgCutBTLFeat(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,129,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFDFlgCutBTLFeat(oSeen); \
   ExitAfterCall(this,129,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFDFlgCutBTLFeat(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,130,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFDFlgCutBTLFeat(iSeen); \
   ExitAfterCall(this,130,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFDFlgCutBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,131,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFDFlgCutBTLFeatInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,131,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFDFlgCutBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,132,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFDFlgCutBTLFeatLock(iLocked); \
   ExitAfterCall(this,132,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFPFlgCutBTLFeat(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,133,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFPFlgCutBTLFeat(oSeen); \
   ExitAfterCall(this,133,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFPFlgCutBTLFeat(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,134,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFPFlgCutBTLFeat(iSeen); \
   ExitAfterCall(this,134,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFPFlgCutBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,135,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFPFlgCutBTLFeatInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,135,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFPFlgCutBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,136,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFPFlgCutBTLFeatLock(iLocked); \
   ExitAfterCall(this,136,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFDFlgCutIML(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,137,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFDFlgCutIML(oSeen); \
   ExitAfterCall(this,137,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFDFlgCutIML(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,138,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFDFlgCutIML(iSeen); \
   ExitAfterCall(this,138,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFDFlgCutIMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,139,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFDFlgCutIMLInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,139,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFDFlgCutIMLLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,140,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFDFlgCutIMLLock(iLocked); \
   ExitAfterCall(this,140,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFPFlgCutIML(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,141,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFPFlgCutIML(oSeen); \
   ExitAfterCall(this,141,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFPFlgCutIML(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,142,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFPFlgCutIML(iSeen); \
   ExitAfterCall(this,142,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFPFlgCutIMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,143,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFPFlgCutIMLInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,143,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFPFlgCutIMLLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,144,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFPFlgCutIMLLock(iLocked); \
   ExitAfterCall(this,144,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFDFlgCutOML(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,145,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFDFlgCutOML(oSeen); \
   ExitAfterCall(this,145,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFDFlgCutOML(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,146,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFDFlgCutOML(iSeen); \
   ExitAfterCall(this,146,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFDFlgCutOMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,147,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFDFlgCutOMLInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,147,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFDFlgCutOMLLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,148,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFDFlgCutOMLLock(iLocked); \
   ExitAfterCall(this,148,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFPFlgCutOML(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,149,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFPFlgCutOML(oSeen); \
   ExitAfterCall(this,149,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFPFlgCutOML(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,150,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFPFlgCutOML(iSeen); \
   ExitAfterCall(this,150,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFPFlgCutOMLInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,151,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFPFlgCutOMLInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,151,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFPFlgCutOMLLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,152,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFPFlgCutOMLLock(iLocked); \
   ExitAfterCall(this,152,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFDStiffStampBTLFeat(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,153,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFDStiffStampBTLFeat(oSeen); \
   ExitAfterCall(this,153,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFDStiffStampBTLFeat(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,154,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFDStiffStampBTLFeat(iSeen); \
   ExitAfterCall(this,154,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFDStiffStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,155,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFDStiffStampBTLFeatInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,155,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFDStiffStampBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,156,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFDStiffStampBTLFeatLock(iLocked); \
   ExitAfterCall(this,156,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFPStiffStampBTLFeat(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,157,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFPStiffStampBTLFeat(oSeen); \
   ExitAfterCall(this,157,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFPStiffStampBTLFeat(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,158,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFPStiffStampBTLFeat(iSeen); \
   ExitAfterCall(this,158,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFPStiffStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,159,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFPStiffStampBTLFeatInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,159,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFPStiffStampBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,160,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFPStiffStampBTLFeatLock(iLocked); \
   ExitAfterCall(this,160,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFDCurveStampBTLFeat(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,161,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFDCurveStampBTLFeat(oSeen); \
   ExitAfterCall(this,161,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFDCurveStampBTLFeat(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,162,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFDCurveStampBTLFeat(iSeen); \
   ExitAfterCall(this,162,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFDCurveStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,163,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFDCurveStampBTLFeatInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,163,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFDCurveStampBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,164,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFDCurveStampBTLFeatLock(iLocked); \
   ExitAfterCall(this,164,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFPCurveStampBTLFeat(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,165,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFPCurveStampBTLFeat(oSeen); \
   ExitAfterCall(this,165,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFPCurveStampBTLFeat(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,166,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFPCurveStampBTLFeat(iSeen); \
   ExitAfterCall(this,166,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFPCurveStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,167,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFPCurveStampBTLFeatInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,167,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFPCurveStampBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,168,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFPCurveStampBTLFeatLock(iLocked); \
   ExitAfterCall(this,168,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFDUserStampBTLFeat(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,169,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFDUserStampBTLFeat(oSeen); \
   ExitAfterCall(this,169,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFDUserStampBTLFeat(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,170,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFDUserStampBTLFeat(iSeen); \
   ExitAfterCall(this,170,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFDUserStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,171,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFDUserStampBTLFeatInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,171,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFDUserStampBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,172,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFDUserStampBTLFeatLock(iLocked); \
   ExitAfterCall(this,172,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFPUserStampBTLFeat(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,173,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFPUserStampBTLFeat(oSeen); \
   ExitAfterCall(this,173,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFPUserStampBTLFeat(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,174,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFPUserStampBTLFeat(iSeen); \
   ExitAfterCall(this,174,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFPUserStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,175,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFPUserStampBTLFeatInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,175,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFPUserStampBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,176,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFPUserStampBTLFeatLock(iLocked); \
   ExitAfterCall(this,176,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFDOtherStampBTLFeat(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,177,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFDOtherStampBTLFeat(oSeen); \
   ExitAfterCall(this,177,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFDOtherStampBTLFeat(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,178,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFDOtherStampBTLFeat(iSeen); \
   ExitAfterCall(this,178,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFDOtherStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,179,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFDOtherStampBTLFeatInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,179,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFDOtherStampBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,180,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFDOtherStampBTLFeatLock(iLocked); \
   ExitAfterCall(this,180,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_SHMViewFPOtherStampBTLFeat(CATLONG & oSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,181,&_Trac2,&oSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SHMViewFPOtherStampBTLFeat(oSeen); \
   ExitAfterCall(this,181,_Trac2,&_ret_arg,&oSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_SHMViewFPOtherStampBTLFeat(CATLONG iSeen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,182,&_Trac2,&iSeen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SHMViewFPOtherStampBTLFeat(iSeen); \
   ExitAfterCall(this,182,_Trac2,&_ret_arg,&iSeen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetSHMViewFPOtherStampBTLFeatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,183,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSHMViewFPOtherStampBTLFeatInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,183,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SetSHMViewFPOtherStampBTLFeatLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,184,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSHMViewFPOtherStampBTLFeatLock(iLocked); \
   ExitAfterCall(this,184,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,185,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,185,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,186,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,186,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,187,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,187,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,188,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,188,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,189,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,189,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,190,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,190,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,191,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,191,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,192,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,192,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,193,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,193,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,194,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,194,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAStmViewCharacteristicCurvesSettingAtt(classe) \
 \
 \
declare_TIE_CATIAStmViewCharacteristicCurvesSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStmViewCharacteristicCurvesSettingAtt,"CATIAStmViewCharacteristicCurvesSettingAtt",CATIAStmViewCharacteristicCurvesSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStmViewCharacteristicCurvesSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAStmViewCharacteristicCurvesSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStmViewCharacteristicCurvesSettingAtt##classe(classe::MetaObject(),CATIAStmViewCharacteristicCurvesSettingAtt::MetaObject(),(void *)CreateTIECATIAStmViewCharacteristicCurvesSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAStmViewCharacteristicCurvesSettingAtt(classe) \
 \
 \
declare_TIE_CATIAStmViewCharacteristicCurvesSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStmViewCharacteristicCurvesSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStmViewCharacteristicCurvesSettingAtt,"CATIAStmViewCharacteristicCurvesSettingAtt",CATIAStmViewCharacteristicCurvesSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStmViewCharacteristicCurvesSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAStmViewCharacteristicCurvesSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStmViewCharacteristicCurvesSettingAtt##classe(classe::MetaObject(),CATIAStmViewCharacteristicCurvesSettingAtt::MetaObject(),(void *)CreateTIECATIAStmViewCharacteristicCurvesSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAStmViewCharacteristicCurvesSettingAtt(classe) TIE_CATIAStmViewCharacteristicCurvesSettingAtt(classe)
#else
#define BOA_CATIAStmViewCharacteristicCurvesSettingAtt(classe) CATImplementBOA(CATIAStmViewCharacteristicCurvesSettingAtt, classe)
#endif

#endif
