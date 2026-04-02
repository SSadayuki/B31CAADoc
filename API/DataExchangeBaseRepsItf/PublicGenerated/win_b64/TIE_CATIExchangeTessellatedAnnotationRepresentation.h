#ifndef __TIE_CATIExchangeTessellatedAnnotationRepresentation
#define __TIE_CATIExchangeTessellatedAnnotationRepresentation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeTessellatedAnnotationRepresentation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeTessellatedAnnotationRepresentation */
#define declare_TIE_CATIExchangeTessellatedAnnotationRepresentation(classe) \
 \
 \
class TIECATIExchangeTessellatedAnnotationRepresentation##classe : public CATIExchangeTessellatedAnnotationRepresentation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeTessellatedAnnotationRepresentation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetGeometricalIDList(int * oNbGeometricID, int* &oGeometricalID) ; \
      virtual HRESULT GetSAG(const void* iNodeID, float* oSAGValue, float* oAngleValue, float* oStepValue) ; \
      virtual HRESULT GetRootNodesCount(unsigned int* oNodeCount) ; \
      virtual HRESULT GetRootNode(const unsigned int iRootIndex, void*& oRootNodeID) ; \
      virtual HRESULT GetChildCount(const void* iNodeID, unsigned int* oNodeCount) ; \
      virtual HRESULT GetChild(const void* iNodeID, const unsigned int iChildIndex, void*& oChildNodeID) ; \
      virtual HRESULT GetNodeType(const void* iNodeID, KindOfNode& oNodeType) ; \
      virtual HRESULT GetNodeAnnotationType(const void* iNodeID, CATString& oAnnotationType, CATString& oAnnotationSubType) ; \
      virtual HRESULT GetNodeAnnotationTolerance(const void* iNodeID, double& oAnnotationTolerance) ; \
      virtual HRESULT GetNodePlane(const void* iNodeID, float oOrigin[3], float oVectorX[3], float oVectorY[3]) ; \
      virtual HRESULT GetNodeOrientationMatrix(const void* iNodeID, float oRotationMatrix[2][2], float oTranslationVector[2]) ; \
      virtual HRESULT Get2DGPType(const void* iNodeID, KindOf2DGP& oGPType) ; \
      virtual HRESULT Get2DPolyLineData(const void* iNodeID, float **oPoints, int *oNbPoints, int *oLineType) ; \
      virtual HRESULT Get2DPolygonData(const void* iNodeID, float **oPoints, int *oNbContour, int **oNbOfPtPerContour) ; \
      virtual HRESULT Get2DFaceData(const void* iNodeID, float **oPoints, int *oNbPoint, int *oFill, int * oNbTriangle, int ** oType, int ** oTriangle, int ** oVertex) ; \
      virtual HRESULT Get2DArcCircleData(const void* iNodeID, double **oCenter, double *oRadius, double *oBegin_angle, double *oEnd_angle, int *oFill) ; \
      virtual HRESULT GetNodeColor(const void* iNodeID, unsigned int* oRed, unsigned int* oGreen, unsigned int* oBlue, unsigned int* oAlpha = 0) ; \
      virtual HRESULT GetNodeProperties(const void* iNodeID, unsigned int* oShow, float* oThickness, CATUnicodeString& oNodeName) ; \
      virtual HRESULT GetNodeGeometry(const void* iNodeID, int * oNbGeometricID , int* &oGeometricID) ; \
      virtual HRESULT GetNodeAssociatedAnnotation(const void* iNodeID, int * oNbAssociatedAnnotationID , void** &oAssociatedAnnotationID) ; \
      virtual HRESULT GetNodeCameraParameters(const void* iNodeID, float oOrigin[3], float oDirection[3], float oZenith[3], float oTarget[3]) ; \
      virtual HRESULT GetNodeUDA(const void* iNodeID, unsigned int* oNbParams,  CATUnicodeString** oNodeParamsNames, CATUnicodeString** oNodeParamsValues ) ; \
      virtual HRESULT GetNodeCameraAttributes(const void* iNodeID, CATUnicodeString &oCameraType, double &oCameraViewAngle, double &oCameraZoom) ; \
      virtual HRESULT GetNodeLineStyle(const void* iNodeID, unsigned short &oPattern, unsigned short &oRatio ) ; \
      virtual HRESULT GetNodeAnnotationParallelToScreenState(const void* iNodeID, CATBoolean &oParallelToScreenState, CATBoolean &oZoomableState) ; \
      virtual HRESULT GetNodeGPParallelToScreenOrigin (const void* iNodeID, float oOrigin[3]) ; \
      virtual HRESULT GetNodeAnnotationGroupAttributes(const void* iNodeID, void *&oActiveViewNodeId, CATBoolean &oClippingState) ; \
      virtual HRESULT GetNodeAnnotationGroupAssociatedBodies(const void* iNodeID,   unsigned int &oNbOfAssociatedBodiesID,   void** &oAssociatedBodiesID) ; \
      virtual HRESULT GetNodeAnnotationConstructionGeometry(const void* iRootNodeID, unsigned int & oNbConstructionGeometryNode ,  void** &oConstructionGeometryNodeID) ; \
      virtual HRESULT GetNodeConstructionGeometryType(const void* iConstructionGeometryNode, CATUnicodeString & oConstructionGeometryType ) ; \
      virtual HRESULT GetNodeCGPointParameters   (const void* iConstructionGeometryNode,  double oPointParameters[3]) ; \
      virtual HRESULT GetNodeCGLineParameters    (const void* iConstructionGeometryNode,  double oStartPoint [3],    double oEndPoint [3]) ; \
      virtual HRESULT GetNodeCGCircleParameters  (const void* iConstructionGeometryNode,     double & oRadius, double oPlaneOrigin [3],                  double oPlaneFirstDirection [3],             double oPlaneSecondDirection [3]) ; \
      virtual HRESULT GetNodeCGPlaneParameters   (const void* iConstructionGeometryNode,  double oOriginPoint [3],   double oFirstVector [2][3],    double oSecondVector[2][3], double & oAngle) ; \
      virtual HRESULT GetNodeCGCylinderParameters(const void* iConstructionGeometryNode,  double oPositionPoint [3], double & oRadius,              double oStartPoint [3],     double oEndPoint [3]) ; \
      virtual HRESULT GetNodeCGThreadComponents  (const void* iConstructionGeometryNode, double oThreadCylinderPositionPoint [3],  double & oThreadCylinderRadius,              double oThreadCylinderStartPoint [3],      double oThreadCylinderEndPoint [3], double oThreadUpperPlaneOriginPoint [3],  double oThreadUpperPlaneFirstVector [2][3],  double oThreadUpperPlaneSecondVector[2][3],    double & oThreadUpperPlaneAngle, double oThreadLowerPlaneOriginPoint [3],  double oThreadLowerPlaneFirstVector [2][3],  double oThreadLowerPlaneSecondVector[2][3],    double & oThreadLowerPlaneAngle ) ; \
      virtual HRESULT GetNodeCGThreadParameters(const void* iConstructionGeometryNode, double oUpperCircleCenterPoint [3] ,          double & oUpperCircleRadius, double oUpperCirclePlaneFirstDirection [3] ,  double oUpperCirclePlaneSecondDirection [3] , double oUpperCircleStartPoint [3] ,           double oUpperCircleEndPoint [3] , double oLowerCircleCenterPoint [3],           double & oLowerCircleRadius, double oLowerCirclePlaneFirstDirection [3] ,  double oLowerCirclePlaneSecondDirection [3] , double oLowerCircleStartPoint [3] ,           double oLowerCircleEndPoint [3] ) ; \
      virtual HRESULT GetNodeCGUID(const void* iConstructionGeometryNode, CATListOfInt & oListOfIDs ) ; \
      virtual HRESULT GetNodeAnnotationGroupAssociatedCG(const void* iNodeID,   unsigned int &oNbOfAssociatedCGID,   void** &oAssociatedCGID) ; \
      virtual HRESULT GetNodeAnnotationValidationString( const void * iAnnotationNode, CATUnicodeString & oValidationString) ; \
      virtual HRESULT GetNodeGeometryFullPath(const void* iNodeID, int & oNbOfGeometryPathes , CATListOfCATUnicodeString* &oGeometryPathesTable) ; \
};



#define ENVTIEdeclare_CATIExchangeTessellatedAnnotationRepresentation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetGeometricalIDList(int * oNbGeometricID, int* &oGeometricalID) ; \
virtual HRESULT GetSAG(const void* iNodeID, float* oSAGValue, float* oAngleValue, float* oStepValue) ; \
virtual HRESULT GetRootNodesCount(unsigned int* oNodeCount) ; \
virtual HRESULT GetRootNode(const unsigned int iRootIndex, void*& oRootNodeID) ; \
virtual HRESULT GetChildCount(const void* iNodeID, unsigned int* oNodeCount) ; \
virtual HRESULT GetChild(const void* iNodeID, const unsigned int iChildIndex, void*& oChildNodeID) ; \
virtual HRESULT GetNodeType(const void* iNodeID, KindOfNode& oNodeType) ; \
virtual HRESULT GetNodeAnnotationType(const void* iNodeID, CATString& oAnnotationType, CATString& oAnnotationSubType) ; \
virtual HRESULT GetNodeAnnotationTolerance(const void* iNodeID, double& oAnnotationTolerance) ; \
virtual HRESULT GetNodePlane(const void* iNodeID, float oOrigin[3], float oVectorX[3], float oVectorY[3]) ; \
virtual HRESULT GetNodeOrientationMatrix(const void* iNodeID, float oRotationMatrix[2][2], float oTranslationVector[2]) ; \
virtual HRESULT Get2DGPType(const void* iNodeID, KindOf2DGP& oGPType) ; \
virtual HRESULT Get2DPolyLineData(const void* iNodeID, float **oPoints, int *oNbPoints, int *oLineType) ; \
virtual HRESULT Get2DPolygonData(const void* iNodeID, float **oPoints, int *oNbContour, int **oNbOfPtPerContour) ; \
virtual HRESULT Get2DFaceData(const void* iNodeID, float **oPoints, int *oNbPoint, int *oFill, int * oNbTriangle, int ** oType, int ** oTriangle, int ** oVertex) ; \
virtual HRESULT Get2DArcCircleData(const void* iNodeID, double **oCenter, double *oRadius, double *oBegin_angle, double *oEnd_angle, int *oFill) ; \
virtual HRESULT GetNodeColor(const void* iNodeID, unsigned int* oRed, unsigned int* oGreen, unsigned int* oBlue, unsigned int* oAlpha = 0) ; \
virtual HRESULT GetNodeProperties(const void* iNodeID, unsigned int* oShow, float* oThickness, CATUnicodeString& oNodeName) ; \
virtual HRESULT GetNodeGeometry(const void* iNodeID, int * oNbGeometricID , int* &oGeometricID) ; \
virtual HRESULT GetNodeAssociatedAnnotation(const void* iNodeID, int * oNbAssociatedAnnotationID , void** &oAssociatedAnnotationID) ; \
virtual HRESULT GetNodeCameraParameters(const void* iNodeID, float oOrigin[3], float oDirection[3], float oZenith[3], float oTarget[3]) ; \
virtual HRESULT GetNodeUDA(const void* iNodeID, unsigned int* oNbParams,  CATUnicodeString** oNodeParamsNames, CATUnicodeString** oNodeParamsValues ) ; \
virtual HRESULT GetNodeCameraAttributes(const void* iNodeID, CATUnicodeString &oCameraType, double &oCameraViewAngle, double &oCameraZoom) ; \
virtual HRESULT GetNodeLineStyle(const void* iNodeID, unsigned short &oPattern, unsigned short &oRatio ) ; \
virtual HRESULT GetNodeAnnotationParallelToScreenState(const void* iNodeID, CATBoolean &oParallelToScreenState, CATBoolean &oZoomableState) ; \
virtual HRESULT GetNodeGPParallelToScreenOrigin (const void* iNodeID, float oOrigin[3]) ; \
virtual HRESULT GetNodeAnnotationGroupAttributes(const void* iNodeID, void *&oActiveViewNodeId, CATBoolean &oClippingState) ; \
virtual HRESULT GetNodeAnnotationGroupAssociatedBodies(const void* iNodeID,   unsigned int &oNbOfAssociatedBodiesID,   void** &oAssociatedBodiesID) ; \
virtual HRESULT GetNodeAnnotationConstructionGeometry(const void* iRootNodeID, unsigned int & oNbConstructionGeometryNode ,  void** &oConstructionGeometryNodeID) ; \
virtual HRESULT GetNodeConstructionGeometryType(const void* iConstructionGeometryNode, CATUnicodeString & oConstructionGeometryType ) ; \
virtual HRESULT GetNodeCGPointParameters   (const void* iConstructionGeometryNode,  double oPointParameters[3]) ; \
virtual HRESULT GetNodeCGLineParameters    (const void* iConstructionGeometryNode,  double oStartPoint [3],    double oEndPoint [3]) ; \
virtual HRESULT GetNodeCGCircleParameters  (const void* iConstructionGeometryNode,     double & oRadius, double oPlaneOrigin [3],                  double oPlaneFirstDirection [3],             double oPlaneSecondDirection [3]) ; \
virtual HRESULT GetNodeCGPlaneParameters   (const void* iConstructionGeometryNode,  double oOriginPoint [3],   double oFirstVector [2][3],    double oSecondVector[2][3], double & oAngle) ; \
virtual HRESULT GetNodeCGCylinderParameters(const void* iConstructionGeometryNode,  double oPositionPoint [3], double & oRadius,              double oStartPoint [3],     double oEndPoint [3]) ; \
virtual HRESULT GetNodeCGThreadComponents  (const void* iConstructionGeometryNode, double oThreadCylinderPositionPoint [3],  double & oThreadCylinderRadius,              double oThreadCylinderStartPoint [3],      double oThreadCylinderEndPoint [3], double oThreadUpperPlaneOriginPoint [3],  double oThreadUpperPlaneFirstVector [2][3],  double oThreadUpperPlaneSecondVector[2][3],    double & oThreadUpperPlaneAngle, double oThreadLowerPlaneOriginPoint [3],  double oThreadLowerPlaneFirstVector [2][3],  double oThreadLowerPlaneSecondVector[2][3],    double & oThreadLowerPlaneAngle ) ; \
virtual HRESULT GetNodeCGThreadParameters(const void* iConstructionGeometryNode, double oUpperCircleCenterPoint [3] ,          double & oUpperCircleRadius, double oUpperCirclePlaneFirstDirection [3] ,  double oUpperCirclePlaneSecondDirection [3] , double oUpperCircleStartPoint [3] ,           double oUpperCircleEndPoint [3] , double oLowerCircleCenterPoint [3],           double & oLowerCircleRadius, double oLowerCirclePlaneFirstDirection [3] ,  double oLowerCirclePlaneSecondDirection [3] , double oLowerCircleStartPoint [3] ,           double oLowerCircleEndPoint [3] ) ; \
virtual HRESULT GetNodeCGUID(const void* iConstructionGeometryNode, CATListOfInt & oListOfIDs ) ; \
virtual HRESULT GetNodeAnnotationGroupAssociatedCG(const void* iNodeID,   unsigned int &oNbOfAssociatedCGID,   void** &oAssociatedCGID) ; \
virtual HRESULT GetNodeAnnotationValidationString( const void * iAnnotationNode, CATUnicodeString & oValidationString) ; \
virtual HRESULT GetNodeGeometryFullPath(const void* iNodeID, int & oNbOfGeometryPathes , CATListOfCATUnicodeString* &oGeometryPathesTable) ; \


#define ENVTIEdefine_CATIExchangeTessellatedAnnotationRepresentation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetGeometricalIDList(int * oNbGeometricID, int* &oGeometricalID)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetGeometricalIDList(oNbGeometricID,oGeometricalID)); \
} \
HRESULT  ENVTIEName::GetSAG(const void* iNodeID, float* oSAGValue, float* oAngleValue, float* oStepValue)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetSAG(iNodeID,oSAGValue,oAngleValue,oStepValue)); \
} \
HRESULT  ENVTIEName::GetRootNodesCount(unsigned int* oNodeCount)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetRootNodesCount(oNodeCount)); \
} \
HRESULT  ENVTIEName::GetRootNode(const unsigned int iRootIndex, void*& oRootNodeID)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetRootNode(iRootIndex,oRootNodeID)); \
} \
HRESULT  ENVTIEName::GetChildCount(const void* iNodeID, unsigned int* oNodeCount)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetChildCount(iNodeID,oNodeCount)); \
} \
HRESULT  ENVTIEName::GetChild(const void* iNodeID, const unsigned int iChildIndex, void*& oChildNodeID)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetChild(iNodeID,iChildIndex,oChildNodeID)); \
} \
HRESULT  ENVTIEName::GetNodeType(const void* iNodeID, KindOfNode& oNodeType)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeType(iNodeID,oNodeType)); \
} \
HRESULT  ENVTIEName::GetNodeAnnotationType(const void* iNodeID, CATString& oAnnotationType, CATString& oAnnotationSubType)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeAnnotationType(iNodeID,oAnnotationType,oAnnotationSubType)); \
} \
HRESULT  ENVTIEName::GetNodeAnnotationTolerance(const void* iNodeID, double& oAnnotationTolerance)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeAnnotationTolerance(iNodeID,oAnnotationTolerance)); \
} \
HRESULT  ENVTIEName::GetNodePlane(const void* iNodeID, float oOrigin[3], float oVectorX[3], float oVectorY[3])  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodePlane(iNodeID,oOrigin,oVectorX,oVectorY)); \
} \
HRESULT  ENVTIEName::GetNodeOrientationMatrix(const void* iNodeID, float oRotationMatrix[2][2], float oTranslationVector[2])  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeOrientationMatrix(iNodeID,oRotationMatrix,oTranslationVector)); \
} \
HRESULT  ENVTIEName::Get2DGPType(const void* iNodeID, KindOf2DGP& oGPType)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)Get2DGPType(iNodeID,oGPType)); \
} \
HRESULT  ENVTIEName::Get2DPolyLineData(const void* iNodeID, float **oPoints, int *oNbPoints, int *oLineType)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)Get2DPolyLineData(iNodeID,oPoints,oNbPoints,oLineType)); \
} \
HRESULT  ENVTIEName::Get2DPolygonData(const void* iNodeID, float **oPoints, int *oNbContour, int **oNbOfPtPerContour)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)Get2DPolygonData(iNodeID,oPoints,oNbContour,oNbOfPtPerContour)); \
} \
HRESULT  ENVTIEName::Get2DFaceData(const void* iNodeID, float **oPoints, int *oNbPoint, int *oFill, int * oNbTriangle, int ** oType, int ** oTriangle, int ** oVertex)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)Get2DFaceData(iNodeID,oPoints,oNbPoint,oFill,oNbTriangle,oType,oTriangle,oVertex)); \
} \
HRESULT  ENVTIEName::Get2DArcCircleData(const void* iNodeID, double **oCenter, double *oRadius, double *oBegin_angle, double *oEnd_angle, int *oFill)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)Get2DArcCircleData(iNodeID,oCenter,oRadius,oBegin_angle,oEnd_angle,oFill)); \
} \
HRESULT  ENVTIEName::GetNodeColor(const void* iNodeID, unsigned int* oRed, unsigned int* oGreen, unsigned int* oBlue, unsigned int* oAlpha )  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeColor(iNodeID,oRed,oGreen,oBlue,oAlpha )); \
} \
HRESULT  ENVTIEName::GetNodeProperties(const void* iNodeID, unsigned int* oShow, float* oThickness, CATUnicodeString& oNodeName)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeProperties(iNodeID,oShow,oThickness,oNodeName)); \
} \
HRESULT  ENVTIEName::GetNodeGeometry(const void* iNodeID, int * oNbGeometricID , int* &oGeometricID)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeGeometry(iNodeID,oNbGeometricID ,oGeometricID)); \
} \
HRESULT  ENVTIEName::GetNodeAssociatedAnnotation(const void* iNodeID, int * oNbAssociatedAnnotationID , void** &oAssociatedAnnotationID)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeAssociatedAnnotation(iNodeID,oNbAssociatedAnnotationID ,oAssociatedAnnotationID)); \
} \
HRESULT  ENVTIEName::GetNodeCameraParameters(const void* iNodeID, float oOrigin[3], float oDirection[3], float oZenith[3], float oTarget[3])  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeCameraParameters(iNodeID,oOrigin,oDirection,oZenith,oTarget)); \
} \
HRESULT  ENVTIEName::GetNodeUDA(const void* iNodeID, unsigned int* oNbParams,  CATUnicodeString** oNodeParamsNames, CATUnicodeString** oNodeParamsValues )  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeUDA(iNodeID,oNbParams,oNodeParamsNames,oNodeParamsValues )); \
} \
HRESULT  ENVTIEName::GetNodeCameraAttributes(const void* iNodeID, CATUnicodeString &oCameraType, double &oCameraViewAngle, double &oCameraZoom)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeCameraAttributes(iNodeID,oCameraType,oCameraViewAngle,oCameraZoom)); \
} \
HRESULT  ENVTIEName::GetNodeLineStyle(const void* iNodeID, unsigned short &oPattern, unsigned short &oRatio )  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeLineStyle(iNodeID,oPattern,oRatio )); \
} \
HRESULT  ENVTIEName::GetNodeAnnotationParallelToScreenState(const void* iNodeID, CATBoolean &oParallelToScreenState, CATBoolean &oZoomableState)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeAnnotationParallelToScreenState(iNodeID,oParallelToScreenState,oZoomableState)); \
} \
HRESULT  ENVTIEName::GetNodeGPParallelToScreenOrigin (const void* iNodeID, float oOrigin[3])  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeGPParallelToScreenOrigin (iNodeID,oOrigin)); \
} \
HRESULT  ENVTIEName::GetNodeAnnotationGroupAttributes(const void* iNodeID, void *&oActiveViewNodeId, CATBoolean &oClippingState)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeAnnotationGroupAttributes(iNodeID,oActiveViewNodeId,oClippingState)); \
} \
HRESULT  ENVTIEName::GetNodeAnnotationGroupAssociatedBodies(const void* iNodeID,   unsigned int &oNbOfAssociatedBodiesID,   void** &oAssociatedBodiesID)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeAnnotationGroupAssociatedBodies(iNodeID,oNbOfAssociatedBodiesID,oAssociatedBodiesID)); \
} \
HRESULT  ENVTIEName::GetNodeAnnotationConstructionGeometry(const void* iRootNodeID, unsigned int & oNbConstructionGeometryNode ,  void** &oConstructionGeometryNodeID)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeAnnotationConstructionGeometry(iRootNodeID,oNbConstructionGeometryNode ,oConstructionGeometryNodeID)); \
} \
HRESULT  ENVTIEName::GetNodeConstructionGeometryType(const void* iConstructionGeometryNode, CATUnicodeString & oConstructionGeometryType )  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeConstructionGeometryType(iConstructionGeometryNode,oConstructionGeometryType )); \
} \
HRESULT  ENVTIEName::GetNodeCGPointParameters   (const void* iConstructionGeometryNode,  double oPointParameters[3])  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeCGPointParameters   (iConstructionGeometryNode,oPointParameters)); \
} \
HRESULT  ENVTIEName::GetNodeCGLineParameters    (const void* iConstructionGeometryNode,  double oStartPoint [3],    double oEndPoint [3])  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeCGLineParameters    (iConstructionGeometryNode,oStartPoint ,oEndPoint )); \
} \
HRESULT  ENVTIEName::GetNodeCGCircleParameters  (const void* iConstructionGeometryNode,     double & oRadius, double oPlaneOrigin [3],                  double oPlaneFirstDirection [3],             double oPlaneSecondDirection [3])  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeCGCircleParameters  (iConstructionGeometryNode,oRadius,oPlaneOrigin ,oPlaneFirstDirection ,oPlaneSecondDirection )); \
} \
HRESULT  ENVTIEName::GetNodeCGPlaneParameters   (const void* iConstructionGeometryNode,  double oOriginPoint [3],   double oFirstVector [2][3],    double oSecondVector[2][3], double & oAngle)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeCGPlaneParameters   (iConstructionGeometryNode,oOriginPoint ,oFirstVector ,oSecondVector,oAngle)); \
} \
HRESULT  ENVTIEName::GetNodeCGCylinderParameters(const void* iConstructionGeometryNode,  double oPositionPoint [3], double & oRadius,              double oStartPoint [3],     double oEndPoint [3])  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeCGCylinderParameters(iConstructionGeometryNode,oPositionPoint ,oRadius,oStartPoint ,oEndPoint )); \
} \
HRESULT  ENVTIEName::GetNodeCGThreadComponents  (const void* iConstructionGeometryNode, double oThreadCylinderPositionPoint [3],  double & oThreadCylinderRadius,              double oThreadCylinderStartPoint [3],      double oThreadCylinderEndPoint [3], double oThreadUpperPlaneOriginPoint [3],  double oThreadUpperPlaneFirstVector [2][3],  double oThreadUpperPlaneSecondVector[2][3],    double & oThreadUpperPlaneAngle, double oThreadLowerPlaneOriginPoint [3],  double oThreadLowerPlaneFirstVector [2][3],  double oThreadLowerPlaneSecondVector[2][3],    double & oThreadLowerPlaneAngle )  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeCGThreadComponents  (iConstructionGeometryNode,oThreadCylinderPositionPoint ,oThreadCylinderRadius,oThreadCylinderStartPoint ,oThreadCylinderEndPoint ,oThreadUpperPlaneOriginPoint ,oThreadUpperPlaneFirstVector ,oThreadUpperPlaneSecondVector,oThreadUpperPlaneAngle,oThreadLowerPlaneOriginPoint ,oThreadLowerPlaneFirstVector ,oThreadLowerPlaneSecondVector,oThreadLowerPlaneAngle )); \
} \
HRESULT  ENVTIEName::GetNodeCGThreadParameters(const void* iConstructionGeometryNode, double oUpperCircleCenterPoint [3] ,          double & oUpperCircleRadius, double oUpperCirclePlaneFirstDirection [3] ,  double oUpperCirclePlaneSecondDirection [3] , double oUpperCircleStartPoint [3] ,           double oUpperCircleEndPoint [3] , double oLowerCircleCenterPoint [3],           double & oLowerCircleRadius, double oLowerCirclePlaneFirstDirection [3] ,  double oLowerCirclePlaneSecondDirection [3] , double oLowerCircleStartPoint [3] ,           double oLowerCircleEndPoint [3] )  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeCGThreadParameters(iConstructionGeometryNode,oUpperCircleCenterPoint ,oUpperCircleRadius,oUpperCirclePlaneFirstDirection ,oUpperCirclePlaneSecondDirection ,oUpperCircleStartPoint ,oUpperCircleEndPoint ,oLowerCircleCenterPoint ,oLowerCircleRadius,oLowerCirclePlaneFirstDirection ,oLowerCirclePlaneSecondDirection ,oLowerCircleStartPoint ,oLowerCircleEndPoint )); \
} \
HRESULT  ENVTIEName::GetNodeCGUID(const void* iConstructionGeometryNode, CATListOfInt & oListOfIDs )  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeCGUID(iConstructionGeometryNode,oListOfIDs )); \
} \
HRESULT  ENVTIEName::GetNodeAnnotationGroupAssociatedCG(const void* iNodeID,   unsigned int &oNbOfAssociatedCGID,   void** &oAssociatedCGID)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeAnnotationGroupAssociatedCG(iNodeID,oNbOfAssociatedCGID,oAssociatedCGID)); \
} \
HRESULT  ENVTIEName::GetNodeAnnotationValidationString( const void * iAnnotationNode, CATUnicodeString & oValidationString)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeAnnotationValidationString(iAnnotationNode,oValidationString)); \
} \
HRESULT  ENVTIEName::GetNodeGeometryFullPath(const void* iNodeID, int & oNbOfGeometryPathes , CATListOfCATUnicodeString* &oGeometryPathesTable)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedAnnotationRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeGeometryFullPath(iNodeID,oNbOfGeometryPathes ,oGeometryPathesTable)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeTessellatedAnnotationRepresentation(classe)    TIECATIExchangeTessellatedAnnotationRepresentation##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeTessellatedAnnotationRepresentation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeTessellatedAnnotationRepresentation, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeTessellatedAnnotationRepresentation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeTessellatedAnnotationRepresentation, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeTessellatedAnnotationRepresentation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeTessellatedAnnotationRepresentation, classe) \
 \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetGeometricalIDList(int * oNbGeometricID, int* &oGeometricalID)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGeometricalIDList(oNbGeometricID,oGeometricalID)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetSAG(const void* iNodeID, float* oSAGValue, float* oAngleValue, float* oStepValue)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSAG(iNodeID,oSAGValue,oAngleValue,oStepValue)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetRootNodesCount(unsigned int* oNodeCount)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRootNodesCount(oNodeCount)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetRootNode(const unsigned int iRootIndex, void*& oRootNodeID)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRootNode(iRootIndex,oRootNodeID)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetChildCount(const void* iNodeID, unsigned int* oNodeCount)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetChildCount(iNodeID,oNodeCount)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetChild(const void* iNodeID, const unsigned int iChildIndex, void*& oChildNodeID)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetChild(iNodeID,iChildIndex,oChildNodeID)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeType(const void* iNodeID, KindOfNode& oNodeType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeType(iNodeID,oNodeType)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeAnnotationType(const void* iNodeID, CATString& oAnnotationType, CATString& oAnnotationSubType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeAnnotationType(iNodeID,oAnnotationType,oAnnotationSubType)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeAnnotationTolerance(const void* iNodeID, double& oAnnotationTolerance)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeAnnotationTolerance(iNodeID,oAnnotationTolerance)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodePlane(const void* iNodeID, float oOrigin[3], float oVectorX[3], float oVectorY[3])  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodePlane(iNodeID,oOrigin,oVectorX,oVectorY)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeOrientationMatrix(const void* iNodeID, float oRotationMatrix[2][2], float oTranslationVector[2])  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeOrientationMatrix(iNodeID,oRotationMatrix,oTranslationVector)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::Get2DGPType(const void* iNodeID, KindOf2DGP& oGPType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Get2DGPType(iNodeID,oGPType)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::Get2DPolyLineData(const void* iNodeID, float **oPoints, int *oNbPoints, int *oLineType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Get2DPolyLineData(iNodeID,oPoints,oNbPoints,oLineType)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::Get2DPolygonData(const void* iNodeID, float **oPoints, int *oNbContour, int **oNbOfPtPerContour)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Get2DPolygonData(iNodeID,oPoints,oNbContour,oNbOfPtPerContour)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::Get2DFaceData(const void* iNodeID, float **oPoints, int *oNbPoint, int *oFill, int * oNbTriangle, int ** oType, int ** oTriangle, int ** oVertex)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Get2DFaceData(iNodeID,oPoints,oNbPoint,oFill,oNbTriangle,oType,oTriangle,oVertex)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::Get2DArcCircleData(const void* iNodeID, double **oCenter, double *oRadius, double *oBegin_angle, double *oEnd_angle, int *oFill)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Get2DArcCircleData(iNodeID,oCenter,oRadius,oBegin_angle,oEnd_angle,oFill)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeColor(const void* iNodeID, unsigned int* oRed, unsigned int* oGreen, unsigned int* oBlue, unsigned int* oAlpha )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeColor(iNodeID,oRed,oGreen,oBlue,oAlpha )); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeProperties(const void* iNodeID, unsigned int* oShow, float* oThickness, CATUnicodeString& oNodeName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeProperties(iNodeID,oShow,oThickness,oNodeName)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeGeometry(const void* iNodeID, int * oNbGeometricID , int* &oGeometricID)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeGeometry(iNodeID,oNbGeometricID ,oGeometricID)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeAssociatedAnnotation(const void* iNodeID, int * oNbAssociatedAnnotationID , void** &oAssociatedAnnotationID)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeAssociatedAnnotation(iNodeID,oNbAssociatedAnnotationID ,oAssociatedAnnotationID)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeCameraParameters(const void* iNodeID, float oOrigin[3], float oDirection[3], float oZenith[3], float oTarget[3])  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeCameraParameters(iNodeID,oOrigin,oDirection,oZenith,oTarget)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeUDA(const void* iNodeID, unsigned int* oNbParams,  CATUnicodeString** oNodeParamsNames, CATUnicodeString** oNodeParamsValues )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeUDA(iNodeID,oNbParams,oNodeParamsNames,oNodeParamsValues )); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeCameraAttributes(const void* iNodeID, CATUnicodeString &oCameraType, double &oCameraViewAngle, double &oCameraZoom)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeCameraAttributes(iNodeID,oCameraType,oCameraViewAngle,oCameraZoom)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeLineStyle(const void* iNodeID, unsigned short &oPattern, unsigned short &oRatio )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeLineStyle(iNodeID,oPattern,oRatio )); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeAnnotationParallelToScreenState(const void* iNodeID, CATBoolean &oParallelToScreenState, CATBoolean &oZoomableState)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeAnnotationParallelToScreenState(iNodeID,oParallelToScreenState,oZoomableState)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeGPParallelToScreenOrigin (const void* iNodeID, float oOrigin[3])  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeGPParallelToScreenOrigin (iNodeID,oOrigin)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeAnnotationGroupAttributes(const void* iNodeID, void *&oActiveViewNodeId, CATBoolean &oClippingState)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeAnnotationGroupAttributes(iNodeID,oActiveViewNodeId,oClippingState)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeAnnotationGroupAssociatedBodies(const void* iNodeID,   unsigned int &oNbOfAssociatedBodiesID,   void** &oAssociatedBodiesID)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeAnnotationGroupAssociatedBodies(iNodeID,oNbOfAssociatedBodiesID,oAssociatedBodiesID)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeAnnotationConstructionGeometry(const void* iRootNodeID, unsigned int & oNbConstructionGeometryNode ,  void** &oConstructionGeometryNodeID)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeAnnotationConstructionGeometry(iRootNodeID,oNbConstructionGeometryNode ,oConstructionGeometryNodeID)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeConstructionGeometryType(const void* iConstructionGeometryNode, CATUnicodeString & oConstructionGeometryType )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeConstructionGeometryType(iConstructionGeometryNode,oConstructionGeometryType )); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeCGPointParameters   (const void* iConstructionGeometryNode,  double oPointParameters[3])  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeCGPointParameters   (iConstructionGeometryNode,oPointParameters)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeCGLineParameters    (const void* iConstructionGeometryNode,  double oStartPoint [3],    double oEndPoint [3])  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeCGLineParameters    (iConstructionGeometryNode,oStartPoint ,oEndPoint )); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeCGCircleParameters  (const void* iConstructionGeometryNode,     double & oRadius, double oPlaneOrigin [3],                  double oPlaneFirstDirection [3],             double oPlaneSecondDirection [3])  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeCGCircleParameters  (iConstructionGeometryNode,oRadius,oPlaneOrigin ,oPlaneFirstDirection ,oPlaneSecondDirection )); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeCGPlaneParameters   (const void* iConstructionGeometryNode,  double oOriginPoint [3],   double oFirstVector [2][3],    double oSecondVector[2][3], double & oAngle)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeCGPlaneParameters   (iConstructionGeometryNode,oOriginPoint ,oFirstVector ,oSecondVector,oAngle)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeCGCylinderParameters(const void* iConstructionGeometryNode,  double oPositionPoint [3], double & oRadius,              double oStartPoint [3],     double oEndPoint [3])  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeCGCylinderParameters(iConstructionGeometryNode,oPositionPoint ,oRadius,oStartPoint ,oEndPoint )); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeCGThreadComponents  (const void* iConstructionGeometryNode, double oThreadCylinderPositionPoint [3],  double & oThreadCylinderRadius,              double oThreadCylinderStartPoint [3],      double oThreadCylinderEndPoint [3], double oThreadUpperPlaneOriginPoint [3],  double oThreadUpperPlaneFirstVector [2][3],  double oThreadUpperPlaneSecondVector[2][3],    double & oThreadUpperPlaneAngle, double oThreadLowerPlaneOriginPoint [3],  double oThreadLowerPlaneFirstVector [2][3],  double oThreadLowerPlaneSecondVector[2][3],    double & oThreadLowerPlaneAngle )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeCGThreadComponents  (iConstructionGeometryNode,oThreadCylinderPositionPoint ,oThreadCylinderRadius,oThreadCylinderStartPoint ,oThreadCylinderEndPoint ,oThreadUpperPlaneOriginPoint ,oThreadUpperPlaneFirstVector ,oThreadUpperPlaneSecondVector,oThreadUpperPlaneAngle,oThreadLowerPlaneOriginPoint ,oThreadLowerPlaneFirstVector ,oThreadLowerPlaneSecondVector,oThreadLowerPlaneAngle )); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeCGThreadParameters(const void* iConstructionGeometryNode, double oUpperCircleCenterPoint [3] ,          double & oUpperCircleRadius, double oUpperCirclePlaneFirstDirection [3] ,  double oUpperCirclePlaneSecondDirection [3] , double oUpperCircleStartPoint [3] ,           double oUpperCircleEndPoint [3] , double oLowerCircleCenterPoint [3],           double & oLowerCircleRadius, double oLowerCirclePlaneFirstDirection [3] ,  double oLowerCirclePlaneSecondDirection [3] , double oLowerCircleStartPoint [3] ,           double oLowerCircleEndPoint [3] )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeCGThreadParameters(iConstructionGeometryNode,oUpperCircleCenterPoint ,oUpperCircleRadius,oUpperCirclePlaneFirstDirection ,oUpperCirclePlaneSecondDirection ,oUpperCircleStartPoint ,oUpperCircleEndPoint ,oLowerCircleCenterPoint ,oLowerCircleRadius,oLowerCirclePlaneFirstDirection ,oLowerCirclePlaneSecondDirection ,oLowerCircleStartPoint ,oLowerCircleEndPoint )); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeCGUID(const void* iConstructionGeometryNode, CATListOfInt & oListOfIDs )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeCGUID(iConstructionGeometryNode,oListOfIDs )); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeAnnotationGroupAssociatedCG(const void* iNodeID,   unsigned int &oNbOfAssociatedCGID,   void** &oAssociatedCGID)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeAnnotationGroupAssociatedCG(iNodeID,oNbOfAssociatedCGID,oAssociatedCGID)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeAnnotationValidationString( const void * iAnnotationNode, CATUnicodeString & oValidationString)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeAnnotationValidationString(iAnnotationNode,oValidationString)); \
} \
HRESULT  TIECATIExchangeTessellatedAnnotationRepresentation##classe::GetNodeGeometryFullPath(const void* iNodeID, int & oNbOfGeometryPathes , CATListOfCATUnicodeString* &oGeometryPathesTable)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeGeometryFullPath(iNodeID,oNbOfGeometryPathes ,oGeometryPathesTable)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeTessellatedAnnotationRepresentation(classe) \
 \
 \
declare_TIE_CATIExchangeTessellatedAnnotationRepresentation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeTessellatedAnnotationRepresentation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeTessellatedAnnotationRepresentation,"CATIExchangeTessellatedAnnotationRepresentation",CATIExchangeTessellatedAnnotationRepresentation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeTessellatedAnnotationRepresentation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeTessellatedAnnotationRepresentation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeTessellatedAnnotationRepresentation##classe(classe::MetaObject(),CATIExchangeTessellatedAnnotationRepresentation::MetaObject(),(void *)CreateTIECATIExchangeTessellatedAnnotationRepresentation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeTessellatedAnnotationRepresentation(classe) \
 \
 \
declare_TIE_CATIExchangeTessellatedAnnotationRepresentation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeTessellatedAnnotationRepresentation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeTessellatedAnnotationRepresentation,"CATIExchangeTessellatedAnnotationRepresentation",CATIExchangeTessellatedAnnotationRepresentation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeTessellatedAnnotationRepresentation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeTessellatedAnnotationRepresentation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeTessellatedAnnotationRepresentation##classe(classe::MetaObject(),CATIExchangeTessellatedAnnotationRepresentation::MetaObject(),(void *)CreateTIECATIExchangeTessellatedAnnotationRepresentation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeTessellatedAnnotationRepresentation(classe) TIE_CATIExchangeTessellatedAnnotationRepresentation(classe)
#else
#define BOA_CATIExchangeTessellatedAnnotationRepresentation(classe) CATImplementBOA(CATIExchangeTessellatedAnnotationRepresentation, classe)
#endif

#endif
