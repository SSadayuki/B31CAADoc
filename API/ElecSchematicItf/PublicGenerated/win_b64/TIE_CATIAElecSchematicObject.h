#ifndef __TIE_CATIAElecSchematicObject
#define __TIE_CATIAElecSchematicObject

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAElecSchematicObject.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAElecSchematicObject */
#define declare_TIE_CATIAElecSchematicObject(classe) \
 \
 \
class TIECATIAElecSchematicObject##classe : public CATIAElecSchematicObject \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAElecSchematicObject, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
      virtual HRESULT __stdcall get_RootType(CATBSTR & oRootType); \
      virtual HRESULT __stdcall get_ElecSchematicChildren(CATIASchListOfObjects *& oElecSchematicChildren); \
      virtual HRESULT __stdcall get_ConnectedElecSchObjects(CATIASchListOfObjects *& oConnectedElecSchObjects); \
      virtual HRESULT __stdcall get_ElecSchematicParent(CATIAElecSchematicObject *& oElecSchematicParent); \
      virtual HRESULT __stdcall get_IsSpaceReserved(CAT_VARIANT_BOOL & oIsSpaceReserved); \
      virtual HRESULT __stdcall GetPinAttribute(CATIAElecSchematicObject * iConnectedObject, const CATBSTR & iAttrName, CATBSTR & oRootType); \
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



#define ENVTIEdeclare_CATIAElecSchematicObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
virtual HRESULT __stdcall get_RootType(CATBSTR & oRootType); \
virtual HRESULT __stdcall get_ElecSchematicChildren(CATIASchListOfObjects *& oElecSchematicChildren); \
virtual HRESULT __stdcall get_ConnectedElecSchObjects(CATIASchListOfObjects *& oConnectedElecSchObjects); \
virtual HRESULT __stdcall get_ElecSchematicParent(CATIAElecSchematicObject *& oElecSchematicParent); \
virtual HRESULT __stdcall get_IsSpaceReserved(CAT_VARIANT_BOOL & oIsSpaceReserved); \
virtual HRESULT __stdcall GetPinAttribute(CATIAElecSchematicObject * iConnectedObject, const CATBSTR & iAttrName, CATBSTR & oRootType); \
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


#define ENVTIEdefine_CATIAElecSchematicObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Type(CATBSTR & oType) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::get_RootType(CATBSTR & oRootType) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)get_RootType(oRootType)); \
} \
HRESULT __stdcall  ENVTIEName::get_ElecSchematicChildren(CATIASchListOfObjects *& oElecSchematicChildren) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)get_ElecSchematicChildren(oElecSchematicChildren)); \
} \
HRESULT __stdcall  ENVTIEName::get_ConnectedElecSchObjects(CATIASchListOfObjects *& oConnectedElecSchObjects) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)get_ConnectedElecSchObjects(oConnectedElecSchObjects)); \
} \
HRESULT __stdcall  ENVTIEName::get_ElecSchematicParent(CATIAElecSchematicObject *& oElecSchematicParent) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)get_ElecSchematicParent(oElecSchematicParent)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsSpaceReserved(CAT_VARIANT_BOOL & oIsSpaceReserved) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)get_IsSpaceReserved(oIsSpaceReserved)); \
} \
HRESULT __stdcall  ENVTIEName::GetPinAttribute(CATIAElecSchematicObject * iConnectedObject, const CATBSTR & iAttrName, CATBSTR & oRootType) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)GetPinAttribute(iConnectedObject,iAttrName,oRootType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Products(CATIAProducts *& oProducts) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)get_Products(oProducts)); \
} \
HRESULT __stdcall  ENVTIEName::get_Publications(CATIAPublications *& oPublications) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)get_Publications(oPublications)); \
} \
HRESULT __stdcall  ENVTIEName::AddShapeRepresentation(const CATBSTR & iShapePathName, const CATBSTR & iShapeName, CatRepType iRepBehavior, CAT_VARIANT_BOOL iContext) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)AddShapeRepresentation(iShapePathName,iShapeName,iRepBehavior,iContext)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveShapeRepresentation(const CATBSTR & iShapeName, CatRepType iRepBehavior, CAT_VARIANT_BOOL iContext) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)RemoveShapeRepresentation(iShapeName,iRepBehavior,iContext)); \
} \
HRESULT __stdcall  ENVTIEName::HasShapeRepresentation(const CATBSTR & iShapeName, CatRepType iRepBehavior, CAT_VARIANT_BOOL iContext, CAT_VARIANT_BOOL & oHasAShape) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)HasShapeRepresentation(iShapeName,iRepBehavior,iContext,oHasAShape)); \
} \
HRESULT __stdcall  ENVTIEName::GetShapeRepresentation(CAT_VARIANT_BOOL iLoadIfNecessary, const CATBSTR & iShapeName, CatRepType iRepBehavior, CAT_VARIANT_BOOL iContext, CATBaseDispatch *& oMasterShapeRep) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)GetShapeRepresentation(iLoadIfNecessary,iShapeName,iRepBehavior,iContext,oMasterShapeRep)); \
} \
HRESULT __stdcall  ENVTIEName::AddMasterShapeRepresentation(const CATBSTR & iShapePathName) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)AddMasterShapeRepresentation(iShapePathName)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveMasterShapeRepresentation() \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)RemoveMasterShapeRepresentation()); \
} \
HRESULT __stdcall  ENVTIEName::HasAMasterShapeRepresentation(CAT_VARIANT_BOOL & oHasAShape) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)HasAMasterShapeRepresentation(oHasAShape)); \
} \
HRESULT __stdcall  ENVTIEName::GetMasterShapeRepresentation(CAT_VARIANT_BOOL iLoadIfNecessary, CATBaseDispatch *& oMasterShapeRep) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)GetMasterShapeRepresentation(iLoadIfNecessary,oMasterShapeRep)); \
} \
HRESULT __stdcall  ENVTIEName::GetMasterShapeRepresentationPathName(CATBSTR & oMasterShapeRepPathName) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)GetMasterShapeRepresentationPathName(oMasterShapeRepPathName)); \
} \
HRESULT __stdcall  ENVTIEName::get_PartNumber(CATBSTR & oPartNumber) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)get_PartNumber(oPartNumber)); \
} \
HRESULT __stdcall  ENVTIEName::put_PartNumber(const CATBSTR & iPartNumber) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)put_PartNumber(iPartNumber)); \
} \
HRESULT __stdcall  ENVTIEName::get_Revision(CATBSTR & oRevision) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)get_Revision(oRevision)); \
} \
HRESULT __stdcall  ENVTIEName::put_Revision(const CATBSTR & iRevision) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)put_Revision(iRevision)); \
} \
HRESULT __stdcall  ENVTIEName::get_Definition(CATBSTR & oDefinition) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)get_Definition(oDefinition)); \
} \
HRESULT __stdcall  ENVTIEName::put_Definition(const CATBSTR & iDefinition) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)put_Definition(iDefinition)); \
} \
HRESULT __stdcall  ENVTIEName::get_Nomenclature(CATBSTR & oNomenclature) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)get_Nomenclature(oNomenclature)); \
} \
HRESULT __stdcall  ENVTIEName::put_Nomenclature(const CATBSTR & iNomenclature) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)put_Nomenclature(iNomenclature)); \
} \
HRESULT __stdcall  ENVTIEName::get_Source(CatProductSource & oSource) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)get_Source(oSource)); \
} \
HRESULT __stdcall  ENVTIEName::put_Source(CatProductSource iSource) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)put_Source(iSource)); \
} \
HRESULT __stdcall  ENVTIEName::get_DescriptionRef(CATBSTR & oDescriptionRef) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)get_DescriptionRef(oDescriptionRef)); \
} \
HRESULT __stdcall  ENVTIEName::put_DescriptionRef(const CATBSTR & iDescriptionRef) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)put_DescriptionRef(iDescriptionRef)); \
} \
HRESULT __stdcall  ENVTIEName::get_DescriptionInst(CATBSTR & oDescriptionInst) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)get_DescriptionInst(oDescriptionInst)); \
} \
HRESULT __stdcall  ENVTIEName::put_DescriptionInst(const CATBSTR & iDescriptionInst) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)put_DescriptionInst(iDescriptionInst)); \
} \
HRESULT __stdcall  ENVTIEName::Connections(const CATBSTR & iConnectionsType, CATIACollection *& oConnections) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)Connections(iConnectionsType,oConnections)); \
} \
HRESULT __stdcall  ENVTIEName::get_Move(CATIAMove *& oMove) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)get_Move(oMove)); \
} \
HRESULT __stdcall  ENVTIEName::get_Position(CATIAPosition *& oPosition) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)get_Position(oPosition)); \
} \
HRESULT __stdcall  ENVTIEName::get_Analyze(CATIAAnalyze *& oAnalyze) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)get_Analyze(oAnalyze)); \
} \
HRESULT __stdcall  ENVTIEName::ExtractBOM(CatFileType iFileType, const CATBSTR & iFile) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)ExtractBOM(iFileType,iFile)); \
} \
HRESULT __stdcall  ENVTIEName::Update() \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)Update()); \
} \
HRESULT __stdcall  ENVTIEName::get_ReferenceProduct(CATIAProduct *& oReferenceProduct) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)get_ReferenceProduct(oReferenceProduct)); \
} \
HRESULT __stdcall  ENVTIEName::get_Parameters(CATIAParameters *& oReferenceProduct) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)get_Parameters(oReferenceProduct)); \
} \
HRESULT __stdcall  ENVTIEName::get_UserRefProperties(CATIAParameters *& oRefProperties) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)get_UserRefProperties(oRefProperties)); \
} \
HRESULT __stdcall  ENVTIEName::get_Relations(CATIARelations *& oReferenceProduct) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)get_Relations(oReferenceProduct)); \
} \
HRESULT __stdcall  ENVTIEName::CreateReferenceFromName(const CATBSTR & iLabel, CATIAReference *& oRef) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)CreateReferenceFromName(iLabel,oRef)); \
} \
HRESULT __stdcall  ENVTIEName::ApplyWorkMode(CatWorkModeType newMode) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)ApplyWorkMode(newMode)); \
} \
HRESULT __stdcall  ENVTIEName::ActivateDefaultShape() \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)ActivateDefaultShape()); \
} \
HRESULT __stdcall  ENVTIEName::DesactivateDefaultShape() \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)DesactivateDefaultShape()); \
} \
HRESULT __stdcall  ENVTIEName::ActivateShape(const CATBSTR & ShapeName) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)ActivateShape(ShapeName)); \
} \
HRESULT __stdcall  ENVTIEName::DesactivateShape(const CATBSTR & ShapeName) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)DesactivateShape(ShapeName)); \
} \
HRESULT __stdcall  ENVTIEName::GetNumberOfShapes(short & oNbShapes) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)GetNumberOfShapes(oNbShapes)); \
} \
HRESULT __stdcall  ENVTIEName::GetAllShapesNames(CATSafeArrayVariant & olistshape) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)GetAllShapesNames(olistshape)); \
} \
HRESULT __stdcall  ENVTIEName::GetActiveShapeName(CATBSTR & oShapeName) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)GetActiveShapeName(oShapeName)); \
} \
HRESULT __stdcall  ENVTIEName::GetDefaultShapeName(CATBSTR & oShapeName) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)GetDefaultShapeName(oShapeName)); \
} \
HRESULT __stdcall  ENVTIEName::GetShapePathName(const CATBSTR & iShapeName, CATBSTR & oShapePathName) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)GetShapePathName(iShapeName,oShapePathName)); \
} \
HRESULT __stdcall  ENVTIEName::GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)GetTechnologicalObject(iApplicationType,oApplicativeObj)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAElecSchematicObject,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAElecSchematicObject(classe)    TIECATIAElecSchematicObject##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAElecSchematicObject(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAElecSchematicObject, classe) \
 \
 \
CATImplementTIEMethods(CATIAElecSchematicObject, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAElecSchematicObject, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAElecSchematicObject, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAElecSchematicObject, classe) \
 \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::get_Type(CATBSTR & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::get_RootType(CATBSTR & oRootType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oRootType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RootType(oRootType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oRootType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::get_ElecSchematicChildren(CATIASchListOfObjects *& oElecSchematicChildren) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oElecSchematicChildren); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ElecSchematicChildren(oElecSchematicChildren); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oElecSchematicChildren); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::get_ConnectedElecSchObjects(CATIASchListOfObjects *& oConnectedElecSchObjects) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oConnectedElecSchObjects); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ConnectedElecSchObjects(oConnectedElecSchObjects); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oConnectedElecSchObjects); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::get_ElecSchematicParent(CATIAElecSchematicObject *& oElecSchematicParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oElecSchematicParent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ElecSchematicParent(oElecSchematicParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oElecSchematicParent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::get_IsSpaceReserved(CAT_VARIANT_BOOL & oIsSpaceReserved) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oIsSpaceReserved); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsSpaceReserved(oIsSpaceReserved); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oIsSpaceReserved); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::GetPinAttribute(CATIAElecSchematicObject * iConnectedObject, const CATBSTR & iAttrName, CATBSTR & oRootType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iConnectedObject,&iAttrName,&oRootType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPinAttribute(iConnectedObject,iAttrName,oRootType); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iConnectedObject,&iAttrName,&oRootType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::get_Products(CATIAProducts *& oProducts) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oProducts); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Products(oProducts); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oProducts); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::get_Publications(CATIAPublications *& oPublications) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oPublications); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Publications(oPublications); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oPublications); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::AddShapeRepresentation(const CATBSTR & iShapePathName, const CATBSTR & iShapeName, CatRepType iRepBehavior, CAT_VARIANT_BOOL iContext) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iShapePathName,&iShapeName,&iRepBehavior,&iContext); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddShapeRepresentation(iShapePathName,iShapeName,iRepBehavior,iContext); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iShapePathName,&iShapeName,&iRepBehavior,&iContext); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::RemoveShapeRepresentation(const CATBSTR & iShapeName, CatRepType iRepBehavior, CAT_VARIANT_BOOL iContext) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iShapeName,&iRepBehavior,&iContext); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveShapeRepresentation(iShapeName,iRepBehavior,iContext); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iShapeName,&iRepBehavior,&iContext); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::HasShapeRepresentation(const CATBSTR & iShapeName, CatRepType iRepBehavior, CAT_VARIANT_BOOL iContext, CAT_VARIANT_BOOL & oHasAShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iShapeName,&iRepBehavior,&iContext,&oHasAShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasShapeRepresentation(iShapeName,iRepBehavior,iContext,oHasAShape); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iShapeName,&iRepBehavior,&iContext,&oHasAShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::GetShapeRepresentation(CAT_VARIANT_BOOL iLoadIfNecessary, const CATBSTR & iShapeName, CatRepType iRepBehavior, CAT_VARIANT_BOOL iContext, CATBaseDispatch *& oMasterShapeRep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iLoadIfNecessary,&iShapeName,&iRepBehavior,&iContext,&oMasterShapeRep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetShapeRepresentation(iLoadIfNecessary,iShapeName,iRepBehavior,iContext,oMasterShapeRep); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iLoadIfNecessary,&iShapeName,&iRepBehavior,&iContext,&oMasterShapeRep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::AddMasterShapeRepresentation(const CATBSTR & iShapePathName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iShapePathName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMasterShapeRepresentation(iShapePathName); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iShapePathName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::RemoveMasterShapeRepresentation() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveMasterShapeRepresentation(); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::HasAMasterShapeRepresentation(CAT_VARIANT_BOOL & oHasAShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oHasAShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasAMasterShapeRepresentation(oHasAShape); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oHasAShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::GetMasterShapeRepresentation(CAT_VARIANT_BOOL iLoadIfNecessary, CATBaseDispatch *& oMasterShapeRep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iLoadIfNecessary,&oMasterShapeRep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMasterShapeRepresentation(iLoadIfNecessary,oMasterShapeRep); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iLoadIfNecessary,&oMasterShapeRep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::GetMasterShapeRepresentationPathName(CATBSTR & oMasterShapeRepPathName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oMasterShapeRepPathName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMasterShapeRepresentationPathName(oMasterShapeRepPathName); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oMasterShapeRepPathName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::get_PartNumber(CATBSTR & oPartNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oPartNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PartNumber(oPartNumber); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oPartNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::put_PartNumber(const CATBSTR & iPartNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iPartNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PartNumber(iPartNumber); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iPartNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::get_Revision(CATBSTR & oRevision) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oRevision); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Revision(oRevision); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oRevision); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::put_Revision(const CATBSTR & iRevision) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iRevision); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Revision(iRevision); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iRevision); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::get_Definition(CATBSTR & oDefinition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oDefinition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Definition(oDefinition); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oDefinition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::put_Definition(const CATBSTR & iDefinition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iDefinition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Definition(iDefinition); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iDefinition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::get_Nomenclature(CATBSTR & oNomenclature) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oNomenclature); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Nomenclature(oNomenclature); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oNomenclature); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::put_Nomenclature(const CATBSTR & iNomenclature) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iNomenclature); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Nomenclature(iNomenclature); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iNomenclature); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::get_Source(CatProductSource & oSource) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oSource); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Source(oSource); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oSource); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::put_Source(CatProductSource iSource) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iSource); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Source(iSource); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iSource); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::get_DescriptionRef(CATBSTR & oDescriptionRef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oDescriptionRef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DescriptionRef(oDescriptionRef); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oDescriptionRef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::put_DescriptionRef(const CATBSTR & iDescriptionRef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iDescriptionRef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DescriptionRef(iDescriptionRef); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iDescriptionRef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::get_DescriptionInst(CATBSTR & oDescriptionInst) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oDescriptionInst); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DescriptionInst(oDescriptionInst); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oDescriptionInst); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::put_DescriptionInst(const CATBSTR & iDescriptionInst) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iDescriptionInst); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DescriptionInst(iDescriptionInst); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iDescriptionInst); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::Connections(const CATBSTR & iConnectionsType, CATIACollection *& oConnections) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iConnectionsType,&oConnections); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Connections(iConnectionsType,oConnections); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iConnectionsType,&oConnections); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::get_Move(CATIAMove *& oMove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oMove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Move(oMove); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oMove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::get_Position(CATIAPosition *& oPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Position(oPosition); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::get_Analyze(CATIAAnalyze *& oAnalyze) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oAnalyze); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Analyze(oAnalyze); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oAnalyze); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::ExtractBOM(CatFileType iFileType, const CATBSTR & iFile) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&iFileType,&iFile); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExtractBOM(iFileType,iFile); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&iFileType,&iFile); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::Update() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Update(); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::get_ReferenceProduct(CATIAProduct *& oReferenceProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&oReferenceProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReferenceProduct(oReferenceProduct); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&oReferenceProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::get_Parameters(CATIAParameters *& oReferenceProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&oReferenceProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parameters(oReferenceProduct); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&oReferenceProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::get_UserRefProperties(CATIAParameters *& oRefProperties) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oRefProperties); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UserRefProperties(oRefProperties); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oRefProperties); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::get_Relations(CATIARelations *& oReferenceProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&oReferenceProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Relations(oReferenceProduct); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&oReferenceProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::CreateReferenceFromName(const CATBSTR & iLabel, CATIAReference *& oRef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&iLabel,&oRef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateReferenceFromName(iLabel,oRef); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&iLabel,&oRef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::ApplyWorkMode(CatWorkModeType newMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&newMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ApplyWorkMode(newMode); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&newMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::ActivateDefaultShape() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ActivateDefaultShape(); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::DesactivateDefaultShape() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DesactivateDefaultShape(); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::ActivateShape(const CATBSTR & ShapeName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&ShapeName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ActivateShape(ShapeName); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&ShapeName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::DesactivateShape(const CATBSTR & ShapeName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&ShapeName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DesactivateShape(ShapeName); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&ShapeName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::GetNumberOfShapes(short & oNbShapes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&oNbShapes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumberOfShapes(oNbShapes); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&oNbShapes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::GetAllShapesNames(CATSafeArrayVariant & olistshape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&olistshape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAllShapesNames(olistshape); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&olistshape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::GetActiveShapeName(CATBSTR & oShapeName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&oShapeName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetActiveShapeName(oShapeName); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&oShapeName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::GetDefaultShapeName(CATBSTR & oShapeName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&oShapeName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDefaultShapeName(oShapeName); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&oShapeName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::GetShapePathName(const CATBSTR & iShapeName, CATBSTR & oShapePathName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&iShapeName,&oShapePathName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetShapePathName(iShapeName,oShapePathName); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&iShapeName,&oShapePathName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAElecSchematicObject##classe::GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&iApplicationType,&oApplicativeObj); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTechnologicalObject(iApplicationType,oApplicativeObj); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&iApplicationType,&oApplicativeObj); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAElecSchematicObject##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAElecSchematicObject##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAElecSchematicObject##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAElecSchematicObject##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAElecSchematicObject##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAElecSchematicObject(classe) \
 \
 \
declare_TIE_CATIAElecSchematicObject(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAElecSchematicObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAElecSchematicObject,"CATIAElecSchematicObject",CATIAElecSchematicObject::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAElecSchematicObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAElecSchematicObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAElecSchematicObject##classe(classe::MetaObject(),CATIAElecSchematicObject::MetaObject(),(void *)CreateTIECATIAElecSchematicObject##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAElecSchematicObject(classe) \
 \
 \
declare_TIE_CATIAElecSchematicObject(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAElecSchematicObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAElecSchematicObject,"CATIAElecSchematicObject",CATIAElecSchematicObject::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAElecSchematicObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAElecSchematicObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAElecSchematicObject##classe(classe::MetaObject(),CATIAElecSchematicObject::MetaObject(),(void *)CreateTIECATIAElecSchematicObject##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAElecSchematicObject(classe) TIE_CATIAElecSchematicObject(classe)
#else
#define BOA_CATIAElecSchematicObject(classe) CATImplementBOA(CATIAElecSchematicObject, classe)
#endif

#endif
