#ifndef __TIE_CATIAExpertRuleBase
#define __TIE_CATIAExpertRuleBase

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAExpertRuleBase.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAExpertRuleBase */
#define declare_TIE_CATIAExpertRuleBase(classe) \
 \
 \
class TIECATIAExpertRuleBase##classe : public CATIAExpertRuleBase \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAExpertRuleBase, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall VolatileCopy(CATIAExpertRuleBaseRuntime *& oVolatileRuleBase); \
      virtual HRESULT __stdcall get_RuleBaseEdition(CATIAExpertRuleBase *& oRuleBaseEdition); \
      virtual HRESULT __stdcall get_RuleSet(CATIAExpertRuleSet *& oRuleCollection); \
      virtual HRESULT __stdcall get_ReportOutPutFormat(CatOutPutFormatType & oType); \
      virtual HRESULT __stdcall put_ReportOutPutFormat(CatOutPutFormatType iType); \
      virtual HRESULT __stdcall get_ReportDescriptionLength(CatDescriptionLengthType & oType); \
      virtual HRESULT __stdcall put_ReportDescriptionLength(CatDescriptionLengthType iType); \
      virtual HRESULT __stdcall get_ReportShowResult(CatShowResultType & oType); \
      virtual HRESULT __stdcall put_ReportShowResult(CatShowResultType iType); \
      virtual HRESULT __stdcall get_TextVisualization(CatVisualizationType & oType); \
      virtual HRESULT __stdcall put_TextVisualization(CatVisualizationType oType); \
      virtual HRESULT __stdcall get_SolveType(CatSolveType & oType); \
      virtual HRESULT __stdcall put_SolveType(CatSolveType oType); \
      virtual HRESULT __stdcall get_ReportPath(CATBSTR & Path); \
      virtual HRESULT __stdcall put_ReportPath(const CATBSTR & Path); \
      virtual HRESULT __stdcall AccurateType(CATBSTR & oName); \
      virtual HRESULT __stdcall Deduce(); \
      virtual HRESULT __stdcall AddFact(CATIABase * iFact); \
      virtual HRESULT __stdcall RemoveFact(CATIABase * iFact); \
      virtual HRESULT __stdcall ReloadFact(CATIABase * iFact); \
      virtual HRESULT __stdcall AddRootOfFacts(CATIABase * iRootFacts); \
      virtual HRESULT __stdcall RemoveRootOfFacts(CATIABase * iRootFacts); \
      virtual HRESULT __stdcall GetRootsOfFacts(CATSafeArrayVariant & oRootsOfFacts); \
      virtual HRESULT __stdcall GetNumberOfRootsOfFacts(CATLONG & oArraySize); \
      virtual HRESULT __stdcall Report(CAT_VARIANT_BOOL reallyStartBrowser); \
      virtual HRESULT __stdcall Fingerprint(CAT_VARIANT_BOOL & oFingerprint); \
      virtual HRESULT __stdcall ImportFromFile(const CATBSTR & iPath, CAT_VARIANT_BOOL iForce); \
      virtual HRESULT __stdcall Import(CATIAExpertRuleSet * iRuleSet, CAT_VARIANT_BOOL iForce); \
      virtual HRESULT __stdcall ImportWithLink(CATIABase * iRoot, CAT_VARIANT_BOOL iForce); \
      virtual HRESULT __stdcall SynchronizeStatus(CAT_VARIANT_BOOL & oStatus); \
      virtual HRESULT __stdcall get_Value(CATBSTR & oValue); \
      virtual HRESULT __stdcall get_Comment(CATBSTR & oComment); \
      virtual HRESULT __stdcall put_Comment(const CATBSTR & iComment); \
      virtual HRESULT __stdcall Rename(const CATBSTR & iName); \
      virtual HRESULT __stdcall Modify(const CATBSTR & iValue); \
      virtual HRESULT __stdcall get_NbInParameters(CATLONG & oNbInputs); \
      virtual HRESULT __stdcall get_NbOutParameters(CATLONG & oNbOutputs); \
      virtual HRESULT __stdcall GetInParameter(CATLONG iIndex, CATIABase *& oParameter); \
      virtual HRESULT __stdcall GetOutParameter(CATLONG iIndex, CATIAParameter *& oParameter); \
      virtual HRESULT __stdcall get_Context(CATIABase *& oContext); \
      virtual HRESULT __stdcall get_Activated(CAT_VARIANT_BOOL & oActivated); \
      virtual HRESULT __stdcall Activate(); \
      virtual HRESULT __stdcall Deactivate(); \
      virtual HRESULT __stdcall get_Hidden(CAT_VARIANT_BOOL & oHidden); \
      virtual HRESULT __stdcall put_Hidden(CAT_VARIANT_BOOL iHidden); \
      virtual HRESULT __stdcall get_IsConst(CAT_VARIANT_BOOL & oIsConst); \
      virtual HRESULT __stdcall put_IsConst(CAT_VARIANT_BOOL iIsConst); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAExpertRuleBase(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall VolatileCopy(CATIAExpertRuleBaseRuntime *& oVolatileRuleBase); \
virtual HRESULT __stdcall get_RuleBaseEdition(CATIAExpertRuleBase *& oRuleBaseEdition); \
virtual HRESULT __stdcall get_RuleSet(CATIAExpertRuleSet *& oRuleCollection); \
virtual HRESULT __stdcall get_ReportOutPutFormat(CatOutPutFormatType & oType); \
virtual HRESULT __stdcall put_ReportOutPutFormat(CatOutPutFormatType iType); \
virtual HRESULT __stdcall get_ReportDescriptionLength(CatDescriptionLengthType & oType); \
virtual HRESULT __stdcall put_ReportDescriptionLength(CatDescriptionLengthType iType); \
virtual HRESULT __stdcall get_ReportShowResult(CatShowResultType & oType); \
virtual HRESULT __stdcall put_ReportShowResult(CatShowResultType iType); \
virtual HRESULT __stdcall get_TextVisualization(CatVisualizationType & oType); \
virtual HRESULT __stdcall put_TextVisualization(CatVisualizationType oType); \
virtual HRESULT __stdcall get_SolveType(CatSolveType & oType); \
virtual HRESULT __stdcall put_SolveType(CatSolveType oType); \
virtual HRESULT __stdcall get_ReportPath(CATBSTR & Path); \
virtual HRESULT __stdcall put_ReportPath(const CATBSTR & Path); \
virtual HRESULT __stdcall AccurateType(CATBSTR & oName); \
virtual HRESULT __stdcall Deduce(); \
virtual HRESULT __stdcall AddFact(CATIABase * iFact); \
virtual HRESULT __stdcall RemoveFact(CATIABase * iFact); \
virtual HRESULT __stdcall ReloadFact(CATIABase * iFact); \
virtual HRESULT __stdcall AddRootOfFacts(CATIABase * iRootFacts); \
virtual HRESULT __stdcall RemoveRootOfFacts(CATIABase * iRootFacts); \
virtual HRESULT __stdcall GetRootsOfFacts(CATSafeArrayVariant & oRootsOfFacts); \
virtual HRESULT __stdcall GetNumberOfRootsOfFacts(CATLONG & oArraySize); \
virtual HRESULT __stdcall Report(CAT_VARIANT_BOOL reallyStartBrowser); \
virtual HRESULT __stdcall Fingerprint(CAT_VARIANT_BOOL & oFingerprint); \
virtual HRESULT __stdcall ImportFromFile(const CATBSTR & iPath, CAT_VARIANT_BOOL iForce); \
virtual HRESULT __stdcall Import(CATIAExpertRuleSet * iRuleSet, CAT_VARIANT_BOOL iForce); \
virtual HRESULT __stdcall ImportWithLink(CATIABase * iRoot, CAT_VARIANT_BOOL iForce); \
virtual HRESULT __stdcall SynchronizeStatus(CAT_VARIANT_BOOL & oStatus); \
virtual HRESULT __stdcall get_Value(CATBSTR & oValue); \
virtual HRESULT __stdcall get_Comment(CATBSTR & oComment); \
virtual HRESULT __stdcall put_Comment(const CATBSTR & iComment); \
virtual HRESULT __stdcall Rename(const CATBSTR & iName); \
virtual HRESULT __stdcall Modify(const CATBSTR & iValue); \
virtual HRESULT __stdcall get_NbInParameters(CATLONG & oNbInputs); \
virtual HRESULT __stdcall get_NbOutParameters(CATLONG & oNbOutputs); \
virtual HRESULT __stdcall GetInParameter(CATLONG iIndex, CATIABase *& oParameter); \
virtual HRESULT __stdcall GetOutParameter(CATLONG iIndex, CATIAParameter *& oParameter); \
virtual HRESULT __stdcall get_Context(CATIABase *& oContext); \
virtual HRESULT __stdcall get_Activated(CAT_VARIANT_BOOL & oActivated); \
virtual HRESULT __stdcall Activate(); \
virtual HRESULT __stdcall Deactivate(); \
virtual HRESULT __stdcall get_Hidden(CAT_VARIANT_BOOL & oHidden); \
virtual HRESULT __stdcall put_Hidden(CAT_VARIANT_BOOL iHidden); \
virtual HRESULT __stdcall get_IsConst(CAT_VARIANT_BOOL & oIsConst); \
virtual HRESULT __stdcall put_IsConst(CAT_VARIANT_BOOL iIsConst); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAExpertRuleBase(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::VolatileCopy(CATIAExpertRuleBaseRuntime *& oVolatileRuleBase) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)VolatileCopy(oVolatileRuleBase)); \
} \
HRESULT __stdcall  ENVTIEName::get_RuleBaseEdition(CATIAExpertRuleBase *& oRuleBaseEdition) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)get_RuleBaseEdition(oRuleBaseEdition)); \
} \
HRESULT __stdcall  ENVTIEName::get_RuleSet(CATIAExpertRuleSet *& oRuleCollection) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)get_RuleSet(oRuleCollection)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReportOutPutFormat(CatOutPutFormatType & oType) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)get_ReportOutPutFormat(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReportOutPutFormat(CatOutPutFormatType iType) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)put_ReportOutPutFormat(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReportDescriptionLength(CatDescriptionLengthType & oType) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)get_ReportDescriptionLength(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReportDescriptionLength(CatDescriptionLengthType iType) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)put_ReportDescriptionLength(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReportShowResult(CatShowResultType & oType) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)get_ReportShowResult(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReportShowResult(CatShowResultType iType) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)put_ReportShowResult(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_TextVisualization(CatVisualizationType & oType) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)get_TextVisualization(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_TextVisualization(CatVisualizationType oType) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)put_TextVisualization(oType)); \
} \
HRESULT __stdcall  ENVTIEName::get_SolveType(CatSolveType & oType) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)get_SolveType(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_SolveType(CatSolveType oType) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)put_SolveType(oType)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReportPath(CATBSTR & Path) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)get_ReportPath(Path)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReportPath(const CATBSTR & Path) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)put_ReportPath(Path)); \
} \
HRESULT __stdcall  ENVTIEName::AccurateType(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)AccurateType(oName)); \
} \
HRESULT __stdcall  ENVTIEName::Deduce() \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)Deduce()); \
} \
HRESULT __stdcall  ENVTIEName::AddFact(CATIABase * iFact) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)AddFact(iFact)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveFact(CATIABase * iFact) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)RemoveFact(iFact)); \
} \
HRESULT __stdcall  ENVTIEName::ReloadFact(CATIABase * iFact) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)ReloadFact(iFact)); \
} \
HRESULT __stdcall  ENVTIEName::AddRootOfFacts(CATIABase * iRootFacts) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)AddRootOfFacts(iRootFacts)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveRootOfFacts(CATIABase * iRootFacts) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)RemoveRootOfFacts(iRootFacts)); \
} \
HRESULT __stdcall  ENVTIEName::GetRootsOfFacts(CATSafeArrayVariant & oRootsOfFacts) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)GetRootsOfFacts(oRootsOfFacts)); \
} \
HRESULT __stdcall  ENVTIEName::GetNumberOfRootsOfFacts(CATLONG & oArraySize) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)GetNumberOfRootsOfFacts(oArraySize)); \
} \
HRESULT __stdcall  ENVTIEName::Report(CAT_VARIANT_BOOL reallyStartBrowser) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)Report(reallyStartBrowser)); \
} \
HRESULT __stdcall  ENVTIEName::Fingerprint(CAT_VARIANT_BOOL & oFingerprint) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)Fingerprint(oFingerprint)); \
} \
HRESULT __stdcall  ENVTIEName::ImportFromFile(const CATBSTR & iPath, CAT_VARIANT_BOOL iForce) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)ImportFromFile(iPath,iForce)); \
} \
HRESULT __stdcall  ENVTIEName::Import(CATIAExpertRuleSet * iRuleSet, CAT_VARIANT_BOOL iForce) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)Import(iRuleSet,iForce)); \
} \
HRESULT __stdcall  ENVTIEName::ImportWithLink(CATIABase * iRoot, CAT_VARIANT_BOOL iForce) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)ImportWithLink(iRoot,iForce)); \
} \
HRESULT __stdcall  ENVTIEName::SynchronizeStatus(CAT_VARIANT_BOOL & oStatus) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)SynchronizeStatus(oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_Value(CATBSTR & oValue) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)get_Value(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_Comment(CATBSTR & oComment) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)get_Comment(oComment)); \
} \
HRESULT __stdcall  ENVTIEName::put_Comment(const CATBSTR & iComment) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)put_Comment(iComment)); \
} \
HRESULT __stdcall  ENVTIEName::Rename(const CATBSTR & iName) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)Rename(iName)); \
} \
HRESULT __stdcall  ENVTIEName::Modify(const CATBSTR & iValue) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)Modify(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_NbInParameters(CATLONG & oNbInputs) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)get_NbInParameters(oNbInputs)); \
} \
HRESULT __stdcall  ENVTIEName::get_NbOutParameters(CATLONG & oNbOutputs) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)get_NbOutParameters(oNbOutputs)); \
} \
HRESULT __stdcall  ENVTIEName::GetInParameter(CATLONG iIndex, CATIABase *& oParameter) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)GetInParameter(iIndex,oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::GetOutParameter(CATLONG iIndex, CATIAParameter *& oParameter) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)GetOutParameter(iIndex,oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::get_Context(CATIABase *& oContext) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)get_Context(oContext)); \
} \
HRESULT __stdcall  ENVTIEName::get_Activated(CAT_VARIANT_BOOL & oActivated) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)get_Activated(oActivated)); \
} \
HRESULT __stdcall  ENVTIEName::Activate() \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)Activate()); \
} \
HRESULT __stdcall  ENVTIEName::Deactivate() \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)Deactivate()); \
} \
HRESULT __stdcall  ENVTIEName::get_Hidden(CAT_VARIANT_BOOL & oHidden) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)get_Hidden(oHidden)); \
} \
HRESULT __stdcall  ENVTIEName::put_Hidden(CAT_VARIANT_BOOL iHidden) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)put_Hidden(iHidden)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsConst(CAT_VARIANT_BOOL & oIsConst) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)get_IsConst(oIsConst)); \
} \
HRESULT __stdcall  ENVTIEName::put_IsConst(CAT_VARIANT_BOOL iIsConst) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)put_IsConst(iIsConst)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAExpertRuleBase,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAExpertRuleBase(classe)    TIECATIAExpertRuleBase##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAExpertRuleBase(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAExpertRuleBase, classe) \
 \
 \
CATImplementTIEMethods(CATIAExpertRuleBase, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAExpertRuleBase, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAExpertRuleBase, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAExpertRuleBase, classe) \
 \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::VolatileCopy(CATIAExpertRuleBaseRuntime *& oVolatileRuleBase) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oVolatileRuleBase); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->VolatileCopy(oVolatileRuleBase); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oVolatileRuleBase); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::get_RuleBaseEdition(CATIAExpertRuleBase *& oRuleBaseEdition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oRuleBaseEdition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RuleBaseEdition(oRuleBaseEdition); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oRuleBaseEdition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::get_RuleSet(CATIAExpertRuleSet *& oRuleCollection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oRuleCollection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RuleSet(oRuleCollection); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oRuleCollection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::get_ReportOutPutFormat(CatOutPutFormatType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReportOutPutFormat(oType); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::put_ReportOutPutFormat(CatOutPutFormatType iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReportOutPutFormat(iType); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::get_ReportDescriptionLength(CatDescriptionLengthType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReportDescriptionLength(oType); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::put_ReportDescriptionLength(CatDescriptionLengthType iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReportDescriptionLength(iType); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::get_ReportShowResult(CatShowResultType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReportShowResult(oType); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::put_ReportShowResult(CatShowResultType iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReportShowResult(iType); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::get_TextVisualization(CatVisualizationType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TextVisualization(oType); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::put_TextVisualization(CatVisualizationType oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TextVisualization(oType); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::get_SolveType(CatSolveType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SolveType(oType); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::put_SolveType(CatSolveType oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SolveType(oType); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::get_ReportPath(CATBSTR & Path) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&Path); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReportPath(Path); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&Path); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::put_ReportPath(const CATBSTR & Path) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&Path); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReportPath(Path); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&Path); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::AccurateType(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AccurateType(oName); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::Deduce() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Deduce(); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::AddFact(CATIABase * iFact) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iFact); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFact(iFact); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iFact); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::RemoveFact(CATIABase * iFact) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iFact); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveFact(iFact); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iFact); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::ReloadFact(CATIABase * iFact) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iFact); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReloadFact(iFact); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iFact); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::AddRootOfFacts(CATIABase * iRootFacts) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iRootFacts); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddRootOfFacts(iRootFacts); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iRootFacts); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::RemoveRootOfFacts(CATIABase * iRootFacts) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iRootFacts); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveRootOfFacts(iRootFacts); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iRootFacts); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::GetRootsOfFacts(CATSafeArrayVariant & oRootsOfFacts) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oRootsOfFacts); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRootsOfFacts(oRootsOfFacts); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oRootsOfFacts); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::GetNumberOfRootsOfFacts(CATLONG & oArraySize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oArraySize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumberOfRootsOfFacts(oArraySize); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oArraySize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::Report(CAT_VARIANT_BOOL reallyStartBrowser) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&reallyStartBrowser); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Report(reallyStartBrowser); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&reallyStartBrowser); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::Fingerprint(CAT_VARIANT_BOOL & oFingerprint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oFingerprint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Fingerprint(oFingerprint); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oFingerprint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::ImportFromFile(const CATBSTR & iPath, CAT_VARIANT_BOOL iForce) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iPath,&iForce); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ImportFromFile(iPath,iForce); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iPath,&iForce); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::Import(CATIAExpertRuleSet * iRuleSet, CAT_VARIANT_BOOL iForce) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iRuleSet,&iForce); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Import(iRuleSet,iForce); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iRuleSet,&iForce); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::ImportWithLink(CATIABase * iRoot, CAT_VARIANT_BOOL iForce) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iRoot,&iForce); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ImportWithLink(iRoot,iForce); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iRoot,&iForce); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::SynchronizeStatus(CAT_VARIANT_BOOL & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SynchronizeStatus(oStatus); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::get_Value(CATBSTR & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Value(oValue); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::get_Comment(CATBSTR & oComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Comment(oComment); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::put_Comment(const CATBSTR & iComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Comment(iComment); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::Rename(const CATBSTR & iName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rename(iName); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::Modify(const CATBSTR & iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Modify(iValue); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::get_NbInParameters(CATLONG & oNbInputs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oNbInputs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NbInParameters(oNbInputs); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oNbInputs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::get_NbOutParameters(CATLONG & oNbOutputs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oNbOutputs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NbOutParameters(oNbOutputs); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oNbOutputs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::GetInParameter(CATLONG iIndex, CATIABase *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iIndex,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInParameter(iIndex,oParameter); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iIndex,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::GetOutParameter(CATLONG iIndex, CATIAParameter *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&iIndex,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOutParameter(iIndex,oParameter); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&iIndex,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::get_Context(CATIABase *& oContext) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&oContext); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Context(oContext); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&oContext); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::get_Activated(CAT_VARIANT_BOOL & oActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Activated(oActivated); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::Activate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate(); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::Deactivate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Deactivate(); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::get_Hidden(CAT_VARIANT_BOOL & oHidden) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&oHidden); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Hidden(oHidden); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&oHidden); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::put_Hidden(CAT_VARIANT_BOOL iHidden) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&iHidden); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Hidden(iHidden); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&iHidden); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::get_IsConst(CAT_VARIANT_BOOL & oIsConst) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&oIsConst); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsConst(oIsConst); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&oIsConst); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBase##classe::put_IsConst(CAT_VARIANT_BOOL iIsConst) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&iIsConst); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_IsConst(iIsConst); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&iIsConst); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertRuleBase##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertRuleBase##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertRuleBase##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertRuleBase##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertRuleBase##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAExpertRuleBase(classe) \
 \
 \
declare_TIE_CATIAExpertRuleBase(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAExpertRuleBase##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAExpertRuleBase,"CATIAExpertRuleBase",CATIAExpertRuleBase::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAExpertRuleBase(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAExpertRuleBase, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAExpertRuleBase##classe(classe::MetaObject(),CATIAExpertRuleBase::MetaObject(),(void *)CreateTIECATIAExpertRuleBase##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAExpertRuleBase(classe) \
 \
 \
declare_TIE_CATIAExpertRuleBase(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAExpertRuleBase##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAExpertRuleBase,"CATIAExpertRuleBase",CATIAExpertRuleBase::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAExpertRuleBase(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAExpertRuleBase, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAExpertRuleBase##classe(classe::MetaObject(),CATIAExpertRuleBase::MetaObject(),(void *)CreateTIECATIAExpertRuleBase##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAExpertRuleBase(classe) TIE_CATIAExpertRuleBase(classe)
#else
#define BOA_CATIAExpertRuleBase(classe) CATImplementBOA(CATIAExpertRuleBase, classe)
#endif

#endif
