#ifndef __TIE_CATIAStrMember
#define __TIE_CATIAStrMember

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAStrMember.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAStrMember */
#define declare_TIE_CATIAStrMember(classe) \
 \
 \
class TIECATIAStrMember##classe : public CATIAStrMember \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAStrMember, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Section(CATIAStrSection *& oSection); \
      virtual HRESULT __stdcall get_StartExtremity(CATIAStrMemberExtremity *& oExtremity); \
      virtual HRESULT __stdcall get_EndExtremity(CATIAStrMemberExtremity *& oExtremity); \
      virtual HRESULT __stdcall get_CurrentAnchorPointName(CATBSTR & oName); \
      virtual HRESULT __stdcall put_CurrentAnchorPointName(const CATBSTR & iName); \
      virtual HRESULT __stdcall get_Angle(double & oAngle); \
      virtual HRESULT __stdcall put_Angle(double iAngle); \
      virtual HRESULT __stdcall get_AngleParameter(CATIAParameter *& oAngle); \
      virtual HRESULT __stdcall Rotate(double iAngle); \
      virtual HRESULT __stdcall Flip(); \
      virtual HRESULT __stdcall get_SurfaceReference(CATIAReference *& oSurface); \
      virtual HRESULT __stdcall put_SurfaceReference(CATIAReference * iSurface); \
      virtual HRESULT __stdcall get_Support(CATIAReference *& oSupport); \
      virtual HRESULT __stdcall get_InputSupport(CATIAReference *& oInputSupport); \
      virtual HRESULT __stdcall CreateCutback(CATIAStrMember * iMember, CatStrCutbackType iCutback, double iOffset, CATIAStrCutback *& oCutback); \
      virtual HRESULT __stdcall get_Type(CATIAParameter *& oParameter); \
      virtual HRESULT __stdcall get_Products(CATIAProducts *& oProducts); \
      virtual HRESULT __stdcall get_Publications(CATIAPublications *& oPublications); \
      virtual HRESULT __stdcall AddShapeRepresentation(const CATBSTR & iShapePathName, const CATBSTR & iShapeName, CatRepType iRepBehavior, CAT_VARIANT_BOOL iContext); \
      virtual HRESULT __stdcall RemoveShapeRepresentation(const CATBSTR & iShapeName, CatRepType iRepBehavior, CAT_VARIANT_BOOL iContext); \
      virtual HRESULT __stdcall HasShapeRepresentation(const CATBSTR & iShapeName, CatRepType iRepBehavior, CAT_VARIANT_BOOL iContext, CAT_VARIANT_BOOL & oHasAShape); \
      virtual HRESULT __stdcall GetShapeRepresentation(CAT_VARIANT_BOOL iLoadIfNecessary, const CATBSTR & iShapeName, CatRepType iRepBehavior, CAT_VARIANT_BOOL iContext, CATBaseDispatch *& oMasterShapeRep); \
      virtual HRESULT __stdcall AddMasterShapeRepresentation(const CATBSTR & iShapePathName); \
      virtual HRESULT __stdcall RemoveMasterShapeRepresentation(); \
      virtual HRESULT __stdcall HasAMasterShapeRepresentation(CAT_VARIANT_BOOL & oHasAShape); \
      virtual HRESULT __stdcall GetMasterShapeRepresentation(CAT_VARIANT_BOOL iLoadIfNecessary, CATBaseDispatch *& oMasterShapeRep); \
      virtual HRESULT __stdcall GetMasterShapeRepresentationPathName(CATBSTR & oMasterShapeRepPathName); \
      virtual HRESULT __stdcall get_PartNumber(CATBSTR & oPartNumber); \
      virtual HRESULT __stdcall put_PartNumber(const CATBSTR & iPartNumber); \
      virtual HRESULT __stdcall get_Revision(CATBSTR & oRevision); \
      virtual HRESULT __stdcall put_Revision(const CATBSTR & iRevision); \
      virtual HRESULT __stdcall get_Definition(CATBSTR & oDefinition); \
      virtual HRESULT __stdcall put_Definition(const CATBSTR & iDefinition); \
      virtual HRESULT __stdcall get_Nomenclature(CATBSTR & oNomenclature); \
      virtual HRESULT __stdcall put_Nomenclature(const CATBSTR & iNomenclature); \
      virtual HRESULT __stdcall get_Source(CatProductSource & oSource); \
      virtual HRESULT __stdcall put_Source(CatProductSource iSource); \
      virtual HRESULT __stdcall get_DescriptionRef(CATBSTR & oDescriptionRef); \
      virtual HRESULT __stdcall put_DescriptionRef(const CATBSTR & iDescriptionRef); \
      virtual HRESULT __stdcall get_DescriptionInst(CATBSTR & oDescriptionInst); \
      virtual HRESULT __stdcall put_DescriptionInst(const CATBSTR & iDescriptionInst); \
      virtual HRESULT __stdcall Connections(const CATBSTR & iConnectionsType, CATIACollection *& oConnections); \
      virtual HRESULT __stdcall get_Move(CATIAMove *& oMove); \
      virtual HRESULT __stdcall get_Position(CATIAPosition *& oPosition); \
      virtual HRESULT __stdcall get_Analyze(CATIAAnalyze *& oAnalyze); \
      virtual HRESULT __stdcall ExtractBOM(CatFileType iFileType, const CATBSTR & iFile); \
      virtual HRESULT __stdcall Update(); \
      virtual HRESULT __stdcall get_ReferenceProduct(CATIAProduct *& oReferenceProduct); \
      virtual HRESULT __stdcall get_Parameters(CATIAParameters *& oReferenceProduct); \
      virtual HRESULT __stdcall get_UserRefProperties(CATIAParameters *& oRefProperties); \
      virtual HRESULT __stdcall get_Relations(CATIARelations *& oReferenceProduct); \
      virtual HRESULT __stdcall CreateReferenceFromName(const CATBSTR & iLabel, CATIAReference *& oRef); \
      virtual HRESULT __stdcall ApplyWorkMode(CatWorkModeType newMode); \
      virtual HRESULT __stdcall ActivateDefaultShape(); \
      virtual HRESULT __stdcall DesactivateDefaultShape(); \
      virtual HRESULT __stdcall ActivateShape(const CATBSTR & ShapeName); \
      virtual HRESULT __stdcall DesactivateShape(const CATBSTR & ShapeName); \
      virtual HRESULT __stdcall GetNumberOfShapes(short & oNbShapes); \
      virtual HRESULT __stdcall GetAllShapesNames(CATSafeArrayVariant & olistshape); \
      virtual HRESULT __stdcall GetActiveShapeName(CATBSTR & oShapeName); \
      virtual HRESULT __stdcall GetDefaultShapeName(CATBSTR & oShapeName); \
      virtual HRESULT __stdcall GetShapePathName(const CATBSTR & iShapeName, CATBSTR & oShapePathName); \
      virtual HRESULT __stdcall GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAStrMember(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Section(CATIAStrSection *& oSection); \
virtual HRESULT __stdcall get_StartExtremity(CATIAStrMemberExtremity *& oExtremity); \
virtual HRESULT __stdcall get_EndExtremity(CATIAStrMemberExtremity *& oExtremity); \
virtual HRESULT __stdcall get_CurrentAnchorPointName(CATBSTR & oName); \
virtual HRESULT __stdcall put_CurrentAnchorPointName(const CATBSTR & iName); \
virtual HRESULT __stdcall get_Angle(double & oAngle); \
virtual HRESULT __stdcall put_Angle(double iAngle); \
virtual HRESULT __stdcall get_AngleParameter(CATIAParameter *& oAngle); \
virtual HRESULT __stdcall Rotate(double iAngle); \
virtual HRESULT __stdcall Flip(); \
virtual HRESULT __stdcall get_SurfaceReference(CATIAReference *& oSurface); \
virtual HRESULT __stdcall put_SurfaceReference(CATIAReference * iSurface); \
virtual HRESULT __stdcall get_Support(CATIAReference *& oSupport); \
virtual HRESULT __stdcall get_InputSupport(CATIAReference *& oInputSupport); \
virtual HRESULT __stdcall CreateCutback(CATIAStrMember * iMember, CatStrCutbackType iCutback, double iOffset, CATIAStrCutback *& oCutback); \
virtual HRESULT __stdcall get_Type(CATIAParameter *& oParameter); \
virtual HRESULT __stdcall get_Products(CATIAProducts *& oProducts); \
virtual HRESULT __stdcall get_Publications(CATIAPublications *& oPublications); \
virtual HRESULT __stdcall AddShapeRepresentation(const CATBSTR & iShapePathName, const CATBSTR & iShapeName, CatRepType iRepBehavior, CAT_VARIANT_BOOL iContext); \
virtual HRESULT __stdcall RemoveShapeRepresentation(const CATBSTR & iShapeName, CatRepType iRepBehavior, CAT_VARIANT_BOOL iContext); \
virtual HRESULT __stdcall HasShapeRepresentation(const CATBSTR & iShapeName, CatRepType iRepBehavior, CAT_VARIANT_BOOL iContext, CAT_VARIANT_BOOL & oHasAShape); \
virtual HRESULT __stdcall GetShapeRepresentation(CAT_VARIANT_BOOL iLoadIfNecessary, const CATBSTR & iShapeName, CatRepType iRepBehavior, CAT_VARIANT_BOOL iContext, CATBaseDispatch *& oMasterShapeRep); \
virtual HRESULT __stdcall AddMasterShapeRepresentation(const CATBSTR & iShapePathName); \
virtual HRESULT __stdcall RemoveMasterShapeRepresentation(); \
virtual HRESULT __stdcall HasAMasterShapeRepresentation(CAT_VARIANT_BOOL & oHasAShape); \
virtual HRESULT __stdcall GetMasterShapeRepresentation(CAT_VARIANT_BOOL iLoadIfNecessary, CATBaseDispatch *& oMasterShapeRep); \
virtual HRESULT __stdcall GetMasterShapeRepresentationPathName(CATBSTR & oMasterShapeRepPathName); \
virtual HRESULT __stdcall get_PartNumber(CATBSTR & oPartNumber); \
virtual HRESULT __stdcall put_PartNumber(const CATBSTR & iPartNumber); \
virtual HRESULT __stdcall get_Revision(CATBSTR & oRevision); \
virtual HRESULT __stdcall put_Revision(const CATBSTR & iRevision); \
virtual HRESULT __stdcall get_Definition(CATBSTR & oDefinition); \
virtual HRESULT __stdcall put_Definition(const CATBSTR & iDefinition); \
virtual HRESULT __stdcall get_Nomenclature(CATBSTR & oNomenclature); \
virtual HRESULT __stdcall put_Nomenclature(const CATBSTR & iNomenclature); \
virtual HRESULT __stdcall get_Source(CatProductSource & oSource); \
virtual HRESULT __stdcall put_Source(CatProductSource iSource); \
virtual HRESULT __stdcall get_DescriptionRef(CATBSTR & oDescriptionRef); \
virtual HRESULT __stdcall put_DescriptionRef(const CATBSTR & iDescriptionRef); \
virtual HRESULT __stdcall get_DescriptionInst(CATBSTR & oDescriptionInst); \
virtual HRESULT __stdcall put_DescriptionInst(const CATBSTR & iDescriptionInst); \
virtual HRESULT __stdcall Connections(const CATBSTR & iConnectionsType, CATIACollection *& oConnections); \
virtual HRESULT __stdcall get_Move(CATIAMove *& oMove); \
virtual HRESULT __stdcall get_Position(CATIAPosition *& oPosition); \
virtual HRESULT __stdcall get_Analyze(CATIAAnalyze *& oAnalyze); \
virtual HRESULT __stdcall ExtractBOM(CatFileType iFileType, const CATBSTR & iFile); \
virtual HRESULT __stdcall Update(); \
virtual HRESULT __stdcall get_ReferenceProduct(CATIAProduct *& oReferenceProduct); \
virtual HRESULT __stdcall get_Parameters(CATIAParameters *& oReferenceProduct); \
virtual HRESULT __stdcall get_UserRefProperties(CATIAParameters *& oRefProperties); \
virtual HRESULT __stdcall get_Relations(CATIARelations *& oReferenceProduct); \
virtual HRESULT __stdcall CreateReferenceFromName(const CATBSTR & iLabel, CATIAReference *& oRef); \
virtual HRESULT __stdcall ApplyWorkMode(CatWorkModeType newMode); \
virtual HRESULT __stdcall ActivateDefaultShape(); \
virtual HRESULT __stdcall DesactivateDefaultShape(); \
virtual HRESULT __stdcall ActivateShape(const CATBSTR & ShapeName); \
virtual HRESULT __stdcall DesactivateShape(const CATBSTR & ShapeName); \
virtual HRESULT __stdcall GetNumberOfShapes(short & oNbShapes); \
virtual HRESULT __stdcall GetAllShapesNames(CATSafeArrayVariant & olistshape); \
virtual HRESULT __stdcall GetActiveShapeName(CATBSTR & oShapeName); \
virtual HRESULT __stdcall GetDefaultShapeName(CATBSTR & oShapeName); \
virtual HRESULT __stdcall GetShapePathName(const CATBSTR & iShapeName, CATBSTR & oShapePathName); \
virtual HRESULT __stdcall GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAStrMember(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Section(CATIAStrSection *& oSection) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_Section(oSection)); \
} \
HRESULT __stdcall  ENVTIEName::get_StartExtremity(CATIAStrMemberExtremity *& oExtremity) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_StartExtremity(oExtremity)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndExtremity(CATIAStrMemberExtremity *& oExtremity) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_EndExtremity(oExtremity)); \
} \
HRESULT __stdcall  ENVTIEName::get_CurrentAnchorPointName(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_CurrentAnchorPointName(oName)); \
} \
HRESULT __stdcall  ENVTIEName::put_CurrentAnchorPointName(const CATBSTR & iName) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)put_CurrentAnchorPointName(iName)); \
} \
HRESULT __stdcall  ENVTIEName::get_Angle(double & oAngle) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_Angle(oAngle)); \
} \
HRESULT __stdcall  ENVTIEName::put_Angle(double iAngle) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)put_Angle(iAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_AngleParameter(CATIAParameter *& oAngle) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_AngleParameter(oAngle)); \
} \
HRESULT __stdcall  ENVTIEName::Rotate(double iAngle) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)Rotate(iAngle)); \
} \
HRESULT __stdcall  ENVTIEName::Flip() \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)Flip()); \
} \
HRESULT __stdcall  ENVTIEName::get_SurfaceReference(CATIAReference *& oSurface) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_SurfaceReference(oSurface)); \
} \
HRESULT __stdcall  ENVTIEName::put_SurfaceReference(CATIAReference * iSurface) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)put_SurfaceReference(iSurface)); \
} \
HRESULT __stdcall  ENVTIEName::get_Support(CATIAReference *& oSupport) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_Support(oSupport)); \
} \
HRESULT __stdcall  ENVTIEName::get_InputSupport(CATIAReference *& oInputSupport) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_InputSupport(oInputSupport)); \
} \
HRESULT __stdcall  ENVTIEName::CreateCutback(CATIAStrMember * iMember, CatStrCutbackType iCutback, double iOffset, CATIAStrCutback *& oCutback) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)CreateCutback(iMember,iCutback,iOffset,oCutback)); \
} \
HRESULT __stdcall  ENVTIEName::get_Type(CATIAParameter *& oParameter) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_Type(oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::get_Products(CATIAProducts *& oProducts) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_Products(oProducts)); \
} \
HRESULT __stdcall  ENVTIEName::get_Publications(CATIAPublications *& oPublications) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_Publications(oPublications)); \
} \
HRESULT __stdcall  ENVTIEName::AddShapeRepresentation(const CATBSTR & iShapePathName, const CATBSTR & iShapeName, CatRepType iRepBehavior, CAT_VARIANT_BOOL iContext) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)AddShapeRepresentation(iShapePathName,iShapeName,iRepBehavior,iContext)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveShapeRepresentation(const CATBSTR & iShapeName, CatRepType iRepBehavior, CAT_VARIANT_BOOL iContext) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)RemoveShapeRepresentation(iShapeName,iRepBehavior,iContext)); \
} \
HRESULT __stdcall  ENVTIEName::HasShapeRepresentation(const CATBSTR & iShapeName, CatRepType iRepBehavior, CAT_VARIANT_BOOL iContext, CAT_VARIANT_BOOL & oHasAShape) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)HasShapeRepresentation(iShapeName,iRepBehavior,iContext,oHasAShape)); \
} \
HRESULT __stdcall  ENVTIEName::GetShapeRepresentation(CAT_VARIANT_BOOL iLoadIfNecessary, const CATBSTR & iShapeName, CatRepType iRepBehavior, CAT_VARIANT_BOOL iContext, CATBaseDispatch *& oMasterShapeRep) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)GetShapeRepresentation(iLoadIfNecessary,iShapeName,iRepBehavior,iContext,oMasterShapeRep)); \
} \
HRESULT __stdcall  ENVTIEName::AddMasterShapeRepresentation(const CATBSTR & iShapePathName) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)AddMasterShapeRepresentation(iShapePathName)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveMasterShapeRepresentation() \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)RemoveMasterShapeRepresentation()); \
} \
HRESULT __stdcall  ENVTIEName::HasAMasterShapeRepresentation(CAT_VARIANT_BOOL & oHasAShape) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)HasAMasterShapeRepresentation(oHasAShape)); \
} \
HRESULT __stdcall  ENVTIEName::GetMasterShapeRepresentation(CAT_VARIANT_BOOL iLoadIfNecessary, CATBaseDispatch *& oMasterShapeRep) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)GetMasterShapeRepresentation(iLoadIfNecessary,oMasterShapeRep)); \
} \
HRESULT __stdcall  ENVTIEName::GetMasterShapeRepresentationPathName(CATBSTR & oMasterShapeRepPathName) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)GetMasterShapeRepresentationPathName(oMasterShapeRepPathName)); \
} \
HRESULT __stdcall  ENVTIEName::get_PartNumber(CATBSTR & oPartNumber) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_PartNumber(oPartNumber)); \
} \
HRESULT __stdcall  ENVTIEName::put_PartNumber(const CATBSTR & iPartNumber) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)put_PartNumber(iPartNumber)); \
} \
HRESULT __stdcall  ENVTIEName::get_Revision(CATBSTR & oRevision) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_Revision(oRevision)); \
} \
HRESULT __stdcall  ENVTIEName::put_Revision(const CATBSTR & iRevision) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)put_Revision(iRevision)); \
} \
HRESULT __stdcall  ENVTIEName::get_Definition(CATBSTR & oDefinition) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_Definition(oDefinition)); \
} \
HRESULT __stdcall  ENVTIEName::put_Definition(const CATBSTR & iDefinition) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)put_Definition(iDefinition)); \
} \
HRESULT __stdcall  ENVTIEName::get_Nomenclature(CATBSTR & oNomenclature) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_Nomenclature(oNomenclature)); \
} \
HRESULT __stdcall  ENVTIEName::put_Nomenclature(const CATBSTR & iNomenclature) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)put_Nomenclature(iNomenclature)); \
} \
HRESULT __stdcall  ENVTIEName::get_Source(CatProductSource & oSource) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_Source(oSource)); \
} \
HRESULT __stdcall  ENVTIEName::put_Source(CatProductSource iSource) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)put_Source(iSource)); \
} \
HRESULT __stdcall  ENVTIEName::get_DescriptionRef(CATBSTR & oDescriptionRef) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_DescriptionRef(oDescriptionRef)); \
} \
HRESULT __stdcall  ENVTIEName::put_DescriptionRef(const CATBSTR & iDescriptionRef) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)put_DescriptionRef(iDescriptionRef)); \
} \
HRESULT __stdcall  ENVTIEName::get_DescriptionInst(CATBSTR & oDescriptionInst) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_DescriptionInst(oDescriptionInst)); \
} \
HRESULT __stdcall  ENVTIEName::put_DescriptionInst(const CATBSTR & iDescriptionInst) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)put_DescriptionInst(iDescriptionInst)); \
} \
HRESULT __stdcall  ENVTIEName::Connections(const CATBSTR & iConnectionsType, CATIACollection *& oConnections) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)Connections(iConnectionsType,oConnections)); \
} \
HRESULT __stdcall  ENVTIEName::get_Move(CATIAMove *& oMove) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_Move(oMove)); \
} \
HRESULT __stdcall  ENVTIEName::get_Position(CATIAPosition *& oPosition) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_Position(oPosition)); \
} \
HRESULT __stdcall  ENVTIEName::get_Analyze(CATIAAnalyze *& oAnalyze) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_Analyze(oAnalyze)); \
} \
HRESULT __stdcall  ENVTIEName::ExtractBOM(CatFileType iFileType, const CATBSTR & iFile) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)ExtractBOM(iFileType,iFile)); \
} \
HRESULT __stdcall  ENVTIEName::Update() \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)Update()); \
} \
HRESULT __stdcall  ENVTIEName::get_ReferenceProduct(CATIAProduct *& oReferenceProduct) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_ReferenceProduct(oReferenceProduct)); \
} \
HRESULT __stdcall  ENVTIEName::get_Parameters(CATIAParameters *& oReferenceProduct) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_Parameters(oReferenceProduct)); \
} \
HRESULT __stdcall  ENVTIEName::get_UserRefProperties(CATIAParameters *& oRefProperties) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_UserRefProperties(oRefProperties)); \
} \
HRESULT __stdcall  ENVTIEName::get_Relations(CATIARelations *& oReferenceProduct) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_Relations(oReferenceProduct)); \
} \
HRESULT __stdcall  ENVTIEName::CreateReferenceFromName(const CATBSTR & iLabel, CATIAReference *& oRef) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)CreateReferenceFromName(iLabel,oRef)); \
} \
HRESULT __stdcall  ENVTIEName::ApplyWorkMode(CatWorkModeType newMode) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)ApplyWorkMode(newMode)); \
} \
HRESULT __stdcall  ENVTIEName::ActivateDefaultShape() \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)ActivateDefaultShape()); \
} \
HRESULT __stdcall  ENVTIEName::DesactivateDefaultShape() \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)DesactivateDefaultShape()); \
} \
HRESULT __stdcall  ENVTIEName::ActivateShape(const CATBSTR & ShapeName) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)ActivateShape(ShapeName)); \
} \
HRESULT __stdcall  ENVTIEName::DesactivateShape(const CATBSTR & ShapeName) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)DesactivateShape(ShapeName)); \
} \
HRESULT __stdcall  ENVTIEName::GetNumberOfShapes(short & oNbShapes) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)GetNumberOfShapes(oNbShapes)); \
} \
HRESULT __stdcall  ENVTIEName::GetAllShapesNames(CATSafeArrayVariant & olistshape) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)GetAllShapesNames(olistshape)); \
} \
HRESULT __stdcall  ENVTIEName::GetActiveShapeName(CATBSTR & oShapeName) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)GetActiveShapeName(oShapeName)); \
} \
HRESULT __stdcall  ENVTIEName::GetDefaultShapeName(CATBSTR & oShapeName) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)GetDefaultShapeName(oShapeName)); \
} \
HRESULT __stdcall  ENVTIEName::GetShapePathName(const CATBSTR & iShapeName, CATBSTR & oShapePathName) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)GetShapePathName(iShapeName,oShapePathName)); \
} \
HRESULT __stdcall  ENVTIEName::GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)GetTechnologicalObject(iApplicationType,oApplicativeObj)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAStrMember,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAStrMember(classe)    TIECATIAStrMember##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAStrMember(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAStrMember, classe) \
 \
 \
CATImplementTIEMethods(CATIAStrMember, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAStrMember, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAStrMember, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAStrMember, classe) \
 \
HRESULT __stdcall  TIECATIAStrMember##classe::get_Section(CATIAStrSection *& oSection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oSection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Section(oSection); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oSection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::get_StartExtremity(CATIAStrMemberExtremity *& oExtremity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oExtremity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StartExtremity(oExtremity); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oExtremity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::get_EndExtremity(CATIAStrMemberExtremity *& oExtremity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oExtremity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndExtremity(oExtremity); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oExtremity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::get_CurrentAnchorPointName(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CurrentAnchorPointName(oName); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::put_CurrentAnchorPointName(const CATBSTR & iName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CurrentAnchorPointName(iName); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::get_Angle(double & oAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Angle(oAngle); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::put_Angle(double iAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Angle(iAngle); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::get_AngleParameter(CATIAParameter *& oAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AngleParameter(oAngle); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::Rotate(double iAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rotate(iAngle); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::Flip() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Flip(); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::get_SurfaceReference(CATIAReference *& oSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SurfaceReference(oSurface); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::put_SurfaceReference(CATIAReference * iSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SurfaceReference(iSurface); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::get_Support(CATIAReference *& oSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Support(oSupport); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::get_InputSupport(CATIAReference *& oInputSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oInputSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InputSupport(oInputSupport); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oInputSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::CreateCutback(CATIAStrMember * iMember, CatStrCutbackType iCutback, double iOffset, CATIAStrCutback *& oCutback) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iMember,&iCutback,&iOffset,&oCutback); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCutback(iMember,iCutback,iOffset,oCutback); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iMember,&iCutback,&iOffset,&oCutback); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::get_Type(CATIAParameter *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oParameter); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::get_Products(CATIAProducts *& oProducts) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oProducts); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Products(oProducts); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oProducts); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::get_Publications(CATIAPublications *& oPublications) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oPublications); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Publications(oPublications); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oPublications); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::AddShapeRepresentation(const CATBSTR & iShapePathName, const CATBSTR & iShapeName, CatRepType iRepBehavior, CAT_VARIANT_BOOL iContext) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iShapePathName,&iShapeName,&iRepBehavior,&iContext); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddShapeRepresentation(iShapePathName,iShapeName,iRepBehavior,iContext); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iShapePathName,&iShapeName,&iRepBehavior,&iContext); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::RemoveShapeRepresentation(const CATBSTR & iShapeName, CatRepType iRepBehavior, CAT_VARIANT_BOOL iContext) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iShapeName,&iRepBehavior,&iContext); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveShapeRepresentation(iShapeName,iRepBehavior,iContext); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iShapeName,&iRepBehavior,&iContext); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::HasShapeRepresentation(const CATBSTR & iShapeName, CatRepType iRepBehavior, CAT_VARIANT_BOOL iContext, CAT_VARIANT_BOOL & oHasAShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iShapeName,&iRepBehavior,&iContext,&oHasAShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasShapeRepresentation(iShapeName,iRepBehavior,iContext,oHasAShape); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iShapeName,&iRepBehavior,&iContext,&oHasAShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::GetShapeRepresentation(CAT_VARIANT_BOOL iLoadIfNecessary, const CATBSTR & iShapeName, CatRepType iRepBehavior, CAT_VARIANT_BOOL iContext, CATBaseDispatch *& oMasterShapeRep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iLoadIfNecessary,&iShapeName,&iRepBehavior,&iContext,&oMasterShapeRep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetShapeRepresentation(iLoadIfNecessary,iShapeName,iRepBehavior,iContext,oMasterShapeRep); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iLoadIfNecessary,&iShapeName,&iRepBehavior,&iContext,&oMasterShapeRep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::AddMasterShapeRepresentation(const CATBSTR & iShapePathName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iShapePathName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMasterShapeRepresentation(iShapePathName); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iShapePathName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::RemoveMasterShapeRepresentation() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveMasterShapeRepresentation(); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::HasAMasterShapeRepresentation(CAT_VARIANT_BOOL & oHasAShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oHasAShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasAMasterShapeRepresentation(oHasAShape); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oHasAShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::GetMasterShapeRepresentation(CAT_VARIANT_BOOL iLoadIfNecessary, CATBaseDispatch *& oMasterShapeRep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iLoadIfNecessary,&oMasterShapeRep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMasterShapeRepresentation(iLoadIfNecessary,oMasterShapeRep); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iLoadIfNecessary,&oMasterShapeRep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::GetMasterShapeRepresentationPathName(CATBSTR & oMasterShapeRepPathName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oMasterShapeRepPathName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMasterShapeRepresentationPathName(oMasterShapeRepPathName); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oMasterShapeRepPathName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::get_PartNumber(CATBSTR & oPartNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oPartNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PartNumber(oPartNumber); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oPartNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::put_PartNumber(const CATBSTR & iPartNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iPartNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PartNumber(iPartNumber); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iPartNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::get_Revision(CATBSTR & oRevision) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oRevision); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Revision(oRevision); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oRevision); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::put_Revision(const CATBSTR & iRevision) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iRevision); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Revision(iRevision); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iRevision); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::get_Definition(CATBSTR & oDefinition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oDefinition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Definition(oDefinition); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oDefinition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::put_Definition(const CATBSTR & iDefinition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iDefinition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Definition(iDefinition); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iDefinition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::get_Nomenclature(CATBSTR & oNomenclature) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oNomenclature); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Nomenclature(oNomenclature); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oNomenclature); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::put_Nomenclature(const CATBSTR & iNomenclature) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&iNomenclature); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Nomenclature(iNomenclature); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&iNomenclature); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::get_Source(CatProductSource & oSource) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oSource); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Source(oSource); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oSource); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::put_Source(CatProductSource iSource) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&iSource); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Source(iSource); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&iSource); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::get_DescriptionRef(CATBSTR & oDescriptionRef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&oDescriptionRef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DescriptionRef(oDescriptionRef); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&oDescriptionRef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::put_DescriptionRef(const CATBSTR & iDescriptionRef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&iDescriptionRef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DescriptionRef(iDescriptionRef); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&iDescriptionRef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::get_DescriptionInst(CATBSTR & oDescriptionInst) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&oDescriptionInst); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DescriptionInst(oDescriptionInst); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&oDescriptionInst); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::put_DescriptionInst(const CATBSTR & iDescriptionInst) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&iDescriptionInst); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DescriptionInst(iDescriptionInst); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&iDescriptionInst); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::Connections(const CATBSTR & iConnectionsType, CATIACollection *& oConnections) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iConnectionsType,&oConnections); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Connections(iConnectionsType,oConnections); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iConnectionsType,&oConnections); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::get_Move(CATIAMove *& oMove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&oMove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Move(oMove); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&oMove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::get_Position(CATIAPosition *& oPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&oPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Position(oPosition); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&oPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::get_Analyze(CATIAAnalyze *& oAnalyze) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&oAnalyze); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Analyze(oAnalyze); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&oAnalyze); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::ExtractBOM(CatFileType iFileType, const CATBSTR & iFile) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iFileType,&iFile); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExtractBOM(iFileType,iFile); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iFileType,&iFile); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::Update() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Update(); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::get_ReferenceProduct(CATIAProduct *& oReferenceProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&oReferenceProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReferenceProduct(oReferenceProduct); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&oReferenceProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::get_Parameters(CATIAParameters *& oReferenceProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&oReferenceProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parameters(oReferenceProduct); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&oReferenceProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::get_UserRefProperties(CATIAParameters *& oRefProperties) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&oRefProperties); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UserRefProperties(oRefProperties); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&oRefProperties); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::get_Relations(CATIARelations *& oReferenceProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&oReferenceProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Relations(oReferenceProduct); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&oReferenceProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::CreateReferenceFromName(const CATBSTR & iLabel, CATIAReference *& oRef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&iLabel,&oRef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateReferenceFromName(iLabel,oRef); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&iLabel,&oRef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::ApplyWorkMode(CatWorkModeType newMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&newMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ApplyWorkMode(newMode); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&newMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::ActivateDefaultShape() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ActivateDefaultShape(); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::DesactivateDefaultShape() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DesactivateDefaultShape(); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::ActivateShape(const CATBSTR & ShapeName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&ShapeName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ActivateShape(ShapeName); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&ShapeName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::DesactivateShape(const CATBSTR & ShapeName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&ShapeName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DesactivateShape(ShapeName); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&ShapeName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::GetNumberOfShapes(short & oNbShapes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&oNbShapes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumberOfShapes(oNbShapes); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&oNbShapes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::GetAllShapesNames(CATSafeArrayVariant & olistshape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&olistshape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAllShapesNames(olistshape); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&olistshape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::GetActiveShapeName(CATBSTR & oShapeName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&oShapeName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetActiveShapeName(oShapeName); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&oShapeName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::GetDefaultShapeName(CATBSTR & oShapeName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&oShapeName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDefaultShapeName(oShapeName); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&oShapeName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::GetShapePathName(const CATBSTR & iShapeName, CATBSTR & oShapePathName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2,&iShapeName,&oShapePathName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetShapePathName(iShapeName,oShapePathName); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg,&iShapeName,&oShapePathName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMember##classe::GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,63,&_Trac2,&iApplicationType,&oApplicativeObj); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTechnologicalObject(iApplicationType,oApplicativeObj); \
   ExitAfterCall(this,63,_Trac2,&_ret_arg,&iApplicationType,&oApplicativeObj); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrMember##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,64,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,64,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrMember##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,65,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,65,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrMember##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,66,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,66,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrMember##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,67,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,67,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrMember##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,68,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,68,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAStrMember(classe) \
 \
 \
declare_TIE_CATIAStrMember(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStrMember##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStrMember,"CATIAStrMember",CATIAStrMember::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStrMember(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAStrMember, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStrMember##classe(classe::MetaObject(),CATIAStrMember::MetaObject(),(void *)CreateTIECATIAStrMember##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAStrMember(classe) \
 \
 \
declare_TIE_CATIAStrMember(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStrMember##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStrMember,"CATIAStrMember",CATIAStrMember::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStrMember(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAStrMember, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStrMember##classe(classe::MetaObject(),CATIAStrMember::MetaObject(),(void *)CreateTIECATIAStrMember##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAStrMember(classe) TIE_CATIAStrMember(classe)
#else
#define BOA_CATIAStrMember(classe) CATImplementBOA(CATIAStrMember, classe)
#endif

#endif
