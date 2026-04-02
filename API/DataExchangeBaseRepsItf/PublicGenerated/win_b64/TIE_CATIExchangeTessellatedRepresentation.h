#ifndef __TIE_CATIExchangeTessellatedRepresentation
#define __TIE_CATIExchangeTessellatedRepresentation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeTessellatedRepresentation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeTessellatedRepresentation */
#define declare_TIE_CATIExchangeTessellatedRepresentation(classe) \
 \
 \
class TIECATIExchangeTessellatedRepresentation##classe : public CATIExchangeTessellatedRepresentation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeTessellatedRepresentation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetSAG(const void* iNodeID, float* oSAGValue, float* oAngleValue, float* oStepValue) ; \
      virtual HRESULT GetRootNodesCount(unsigned int* oNodeCount) ; \
      virtual HRESULT GetRootNode(const unsigned int iRootIndex, void*& oRootNodeID) ; \
      virtual HRESULT GetChildCount(const void* iNodeID, unsigned int* oNodeCount) ; \
      virtual HRESULT GetChild(const void* iNodeID, const unsigned int iChildIndex, void*& oChildNodeID) ; \
      virtual HRESULT GetNodeType(const void* iNodeID, KindOfNode& oNodeType) ; \
      virtual HRESULT GetGPType(const void* iNodeID, KindOfGP& oGPType) ; \
      virtual HRESULT GetNodeOrientationMatrix(const void* iNodeID, float oRotationMatrix[3][3], float oTranslationVector[3]) ; \
      virtual HRESULT GetNodeUID(const void* iNodeID, CATUnicodeString& oNodeUID) ; \
      virtual HRESULT GetCoordinateSystem(const void* iNodeID, double oOriginPoint[3], double oFirstVector[3], double oSecondVector[3]) ; \
      virtual HRESULT GetNodeColor(const void* iNodeID, unsigned int* oRed, unsigned int* oGreen, unsigned int* oBlue, unsigned int* oAlpha = 0) ; \
      virtual HRESULT GetNodeBoundingSphere(const void* iNodeID, float oCenterPoint[3], float* oRadius) ; \
      virtual HRESULT GetFaceData(const void* iNodeID, int* oVerticesNumber, float** oVertices, int* oNormalsNumber, float** oNormals, int* oSingleTrianglesNumber, int** oSingleTrianglesIndices, int* oStripTrianglesNumber, int** oStripTrianglesIndices, int** oNbVertexPerStripTriangle, int* oFanTrianglesNumber, int** oFanTrianglesIndices, int** oNbVertexPerFanTriangle) ; \
      virtual HRESULT GetPlaneData(const void* iNodeID, double oBasePoint[3], double oNormalVector[3]) ; \
      virtual HRESULT GetCylinderData(const void* iNodeID, double oBasePoint[3], double oAxisVector[3], double* oRadius) ; \
      virtual HRESULT GetConeData(const void* iNodeID, double oBasePoint[3], double oAxisVector[3], double* oHalfAngle) ; \
      virtual HRESULT GetSphereData(const void* iNodeID, double oCenterPoint[3], double* oRadius) ; \
      virtual HRESULT GetEdgeData(const void* iNodeID, void** oFace1Node, void** oFace2Node, float** oFace1Vertices, unsigned int* oVerticesNumber, int** oVerticesIndices) ; \
      virtual HRESULT GetPolyLineData(const void* iNodeID, float **oPoints, int *oNbPoints,int *oLineType) ; \
      virtual HRESULT GetPointData(const void* iNodeID, float **oPoints, int *oNbPoints) ; \
      virtual HRESULT GetCircleData(const void* iNodeID, double oCenterPoint[3], double oNormalVector[3], double* oRadius) ; \
};



#define ENVTIEdeclare_CATIExchangeTessellatedRepresentation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetSAG(const void* iNodeID, float* oSAGValue, float* oAngleValue, float* oStepValue) ; \
virtual HRESULT GetRootNodesCount(unsigned int* oNodeCount) ; \
virtual HRESULT GetRootNode(const unsigned int iRootIndex, void*& oRootNodeID) ; \
virtual HRESULT GetChildCount(const void* iNodeID, unsigned int* oNodeCount) ; \
virtual HRESULT GetChild(const void* iNodeID, const unsigned int iChildIndex, void*& oChildNodeID) ; \
virtual HRESULT GetNodeType(const void* iNodeID, KindOfNode& oNodeType) ; \
virtual HRESULT GetGPType(const void* iNodeID, KindOfGP& oGPType) ; \
virtual HRESULT GetNodeOrientationMatrix(const void* iNodeID, float oRotationMatrix[3][3], float oTranslationVector[3]) ; \
virtual HRESULT GetNodeUID(const void* iNodeID, CATUnicodeString& oNodeUID) ; \
virtual HRESULT GetCoordinateSystem(const void* iNodeID, double oOriginPoint[3], double oFirstVector[3], double oSecondVector[3]) ; \
virtual HRESULT GetNodeColor(const void* iNodeID, unsigned int* oRed, unsigned int* oGreen, unsigned int* oBlue, unsigned int* oAlpha = 0) ; \
virtual HRESULT GetNodeBoundingSphere(const void* iNodeID, float oCenterPoint[3], float* oRadius) ; \
virtual HRESULT GetFaceData(const void* iNodeID, int* oVerticesNumber, float** oVertices, int* oNormalsNumber, float** oNormals, int* oSingleTrianglesNumber, int** oSingleTrianglesIndices, int* oStripTrianglesNumber, int** oStripTrianglesIndices, int** oNbVertexPerStripTriangle, int* oFanTrianglesNumber, int** oFanTrianglesIndices, int** oNbVertexPerFanTriangle) ; \
virtual HRESULT GetPlaneData(const void* iNodeID, double oBasePoint[3], double oNormalVector[3]) ; \
virtual HRESULT GetCylinderData(const void* iNodeID, double oBasePoint[3], double oAxisVector[3], double* oRadius) ; \
virtual HRESULT GetConeData(const void* iNodeID, double oBasePoint[3], double oAxisVector[3], double* oHalfAngle) ; \
virtual HRESULT GetSphereData(const void* iNodeID, double oCenterPoint[3], double* oRadius) ; \
virtual HRESULT GetEdgeData(const void* iNodeID, void** oFace1Node, void** oFace2Node, float** oFace1Vertices, unsigned int* oVerticesNumber, int** oVerticesIndices) ; \
virtual HRESULT GetPolyLineData(const void* iNodeID, float **oPoints, int *oNbPoints,int *oLineType) ; \
virtual HRESULT GetPointData(const void* iNodeID, float **oPoints, int *oNbPoints) ; \
virtual HRESULT GetCircleData(const void* iNodeID, double oCenterPoint[3], double oNormalVector[3], double* oRadius) ; \


#define ENVTIEdefine_CATIExchangeTessellatedRepresentation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetSAG(const void* iNodeID, float* oSAGValue, float* oAngleValue, float* oStepValue)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetSAG(iNodeID,oSAGValue,oAngleValue,oStepValue)); \
} \
HRESULT  ENVTIEName::GetRootNodesCount(unsigned int* oNodeCount)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetRootNodesCount(oNodeCount)); \
} \
HRESULT  ENVTIEName::GetRootNode(const unsigned int iRootIndex, void*& oRootNodeID)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetRootNode(iRootIndex,oRootNodeID)); \
} \
HRESULT  ENVTIEName::GetChildCount(const void* iNodeID, unsigned int* oNodeCount)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetChildCount(iNodeID,oNodeCount)); \
} \
HRESULT  ENVTIEName::GetChild(const void* iNodeID, const unsigned int iChildIndex, void*& oChildNodeID)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetChild(iNodeID,iChildIndex,oChildNodeID)); \
} \
HRESULT  ENVTIEName::GetNodeType(const void* iNodeID, KindOfNode& oNodeType)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeType(iNodeID,oNodeType)); \
} \
HRESULT  ENVTIEName::GetGPType(const void* iNodeID, KindOfGP& oGPType)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetGPType(iNodeID,oGPType)); \
} \
HRESULT  ENVTIEName::GetNodeOrientationMatrix(const void* iNodeID, float oRotationMatrix[3][3], float oTranslationVector[3])  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeOrientationMatrix(iNodeID,oRotationMatrix,oTranslationVector)); \
} \
HRESULT  ENVTIEName::GetNodeUID(const void* iNodeID, CATUnicodeString& oNodeUID)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeUID(iNodeID,oNodeUID)); \
} \
HRESULT  ENVTIEName::GetCoordinateSystem(const void* iNodeID, double oOriginPoint[3], double oFirstVector[3], double oSecondVector[3])  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetCoordinateSystem(iNodeID,oOriginPoint,oFirstVector,oSecondVector)); \
} \
HRESULT  ENVTIEName::GetNodeColor(const void* iNodeID, unsigned int* oRed, unsigned int* oGreen, unsigned int* oBlue, unsigned int* oAlpha )  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeColor(iNodeID,oRed,oGreen,oBlue,oAlpha )); \
} \
HRESULT  ENVTIEName::GetNodeBoundingSphere(const void* iNodeID, float oCenterPoint[3], float* oRadius)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetNodeBoundingSphere(iNodeID,oCenterPoint,oRadius)); \
} \
HRESULT  ENVTIEName::GetFaceData(const void* iNodeID, int* oVerticesNumber, float** oVertices, int* oNormalsNumber, float** oNormals, int* oSingleTrianglesNumber, int** oSingleTrianglesIndices, int* oStripTrianglesNumber, int** oStripTrianglesIndices, int** oNbVertexPerStripTriangle, int* oFanTrianglesNumber, int** oFanTrianglesIndices, int** oNbVertexPerFanTriangle)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetFaceData(iNodeID,oVerticesNumber,oVertices,oNormalsNumber,oNormals,oSingleTrianglesNumber,oSingleTrianglesIndices,oStripTrianglesNumber,oStripTrianglesIndices,oNbVertexPerStripTriangle,oFanTrianglesNumber,oFanTrianglesIndices,oNbVertexPerFanTriangle)); \
} \
HRESULT  ENVTIEName::GetPlaneData(const void* iNodeID, double oBasePoint[3], double oNormalVector[3])  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetPlaneData(iNodeID,oBasePoint,oNormalVector)); \
} \
HRESULT  ENVTIEName::GetCylinderData(const void* iNodeID, double oBasePoint[3], double oAxisVector[3], double* oRadius)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetCylinderData(iNodeID,oBasePoint,oAxisVector,oRadius)); \
} \
HRESULT  ENVTIEName::GetConeData(const void* iNodeID, double oBasePoint[3], double oAxisVector[3], double* oHalfAngle)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetConeData(iNodeID,oBasePoint,oAxisVector,oHalfAngle)); \
} \
HRESULT  ENVTIEName::GetSphereData(const void* iNodeID, double oCenterPoint[3], double* oRadius)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetSphereData(iNodeID,oCenterPoint,oRadius)); \
} \
HRESULT  ENVTIEName::GetEdgeData(const void* iNodeID, void** oFace1Node, void** oFace2Node, float** oFace1Vertices, unsigned int* oVerticesNumber, int** oVerticesIndices)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetEdgeData(iNodeID,oFace1Node,oFace2Node,oFace1Vertices,oVerticesNumber,oVerticesIndices)); \
} \
HRESULT  ENVTIEName::GetPolyLineData(const void* iNodeID, float **oPoints, int *oNbPoints,int *oLineType)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetPolyLineData(iNodeID,oPoints,oNbPoints,oLineType)); \
} \
HRESULT  ENVTIEName::GetPointData(const void* iNodeID, float **oPoints, int *oNbPoints)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetPointData(iNodeID,oPoints,oNbPoints)); \
} \
HRESULT  ENVTIEName::GetCircleData(const void* iNodeID, double oCenterPoint[3], double oNormalVector[3], double* oRadius)  \
{ \
return (ENVTIECALL(CATIExchangeTessellatedRepresentation,ENVTIETypeLetter,ENVTIELetter)GetCircleData(iNodeID,oCenterPoint,oNormalVector,oRadius)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeTessellatedRepresentation(classe)    TIECATIExchangeTessellatedRepresentation##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeTessellatedRepresentation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeTessellatedRepresentation, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeTessellatedRepresentation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeTessellatedRepresentation, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeTessellatedRepresentation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeTessellatedRepresentation, classe) \
 \
HRESULT  TIECATIExchangeTessellatedRepresentation##classe::GetSAG(const void* iNodeID, float* oSAGValue, float* oAngleValue, float* oStepValue)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSAG(iNodeID,oSAGValue,oAngleValue,oStepValue)); \
} \
HRESULT  TIECATIExchangeTessellatedRepresentation##classe::GetRootNodesCount(unsigned int* oNodeCount)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRootNodesCount(oNodeCount)); \
} \
HRESULT  TIECATIExchangeTessellatedRepresentation##classe::GetRootNode(const unsigned int iRootIndex, void*& oRootNodeID)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRootNode(iRootIndex,oRootNodeID)); \
} \
HRESULT  TIECATIExchangeTessellatedRepresentation##classe::GetChildCount(const void* iNodeID, unsigned int* oNodeCount)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetChildCount(iNodeID,oNodeCount)); \
} \
HRESULT  TIECATIExchangeTessellatedRepresentation##classe::GetChild(const void* iNodeID, const unsigned int iChildIndex, void*& oChildNodeID)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetChild(iNodeID,iChildIndex,oChildNodeID)); \
} \
HRESULT  TIECATIExchangeTessellatedRepresentation##classe::GetNodeType(const void* iNodeID, KindOfNode& oNodeType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeType(iNodeID,oNodeType)); \
} \
HRESULT  TIECATIExchangeTessellatedRepresentation##classe::GetGPType(const void* iNodeID, KindOfGP& oGPType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGPType(iNodeID,oGPType)); \
} \
HRESULT  TIECATIExchangeTessellatedRepresentation##classe::GetNodeOrientationMatrix(const void* iNodeID, float oRotationMatrix[3][3], float oTranslationVector[3])  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeOrientationMatrix(iNodeID,oRotationMatrix,oTranslationVector)); \
} \
HRESULT  TIECATIExchangeTessellatedRepresentation##classe::GetNodeUID(const void* iNodeID, CATUnicodeString& oNodeUID)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeUID(iNodeID,oNodeUID)); \
} \
HRESULT  TIECATIExchangeTessellatedRepresentation##classe::GetCoordinateSystem(const void* iNodeID, double oOriginPoint[3], double oFirstVector[3], double oSecondVector[3])  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCoordinateSystem(iNodeID,oOriginPoint,oFirstVector,oSecondVector)); \
} \
HRESULT  TIECATIExchangeTessellatedRepresentation##classe::GetNodeColor(const void* iNodeID, unsigned int* oRed, unsigned int* oGreen, unsigned int* oBlue, unsigned int* oAlpha )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeColor(iNodeID,oRed,oGreen,oBlue,oAlpha )); \
} \
HRESULT  TIECATIExchangeTessellatedRepresentation##classe::GetNodeBoundingSphere(const void* iNodeID, float oCenterPoint[3], float* oRadius)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodeBoundingSphere(iNodeID,oCenterPoint,oRadius)); \
} \
HRESULT  TIECATIExchangeTessellatedRepresentation##classe::GetFaceData(const void* iNodeID, int* oVerticesNumber, float** oVertices, int* oNormalsNumber, float** oNormals, int* oSingleTrianglesNumber, int** oSingleTrianglesIndices, int* oStripTrianglesNumber, int** oStripTrianglesIndices, int** oNbVertexPerStripTriangle, int* oFanTrianglesNumber, int** oFanTrianglesIndices, int** oNbVertexPerFanTriangle)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFaceData(iNodeID,oVerticesNumber,oVertices,oNormalsNumber,oNormals,oSingleTrianglesNumber,oSingleTrianglesIndices,oStripTrianglesNumber,oStripTrianglesIndices,oNbVertexPerStripTriangle,oFanTrianglesNumber,oFanTrianglesIndices,oNbVertexPerFanTriangle)); \
} \
HRESULT  TIECATIExchangeTessellatedRepresentation##classe::GetPlaneData(const void* iNodeID, double oBasePoint[3], double oNormalVector[3])  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPlaneData(iNodeID,oBasePoint,oNormalVector)); \
} \
HRESULT  TIECATIExchangeTessellatedRepresentation##classe::GetCylinderData(const void* iNodeID, double oBasePoint[3], double oAxisVector[3], double* oRadius)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCylinderData(iNodeID,oBasePoint,oAxisVector,oRadius)); \
} \
HRESULT  TIECATIExchangeTessellatedRepresentation##classe::GetConeData(const void* iNodeID, double oBasePoint[3], double oAxisVector[3], double* oHalfAngle)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConeData(iNodeID,oBasePoint,oAxisVector,oHalfAngle)); \
} \
HRESULT  TIECATIExchangeTessellatedRepresentation##classe::GetSphereData(const void* iNodeID, double oCenterPoint[3], double* oRadius)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSphereData(iNodeID,oCenterPoint,oRadius)); \
} \
HRESULT  TIECATIExchangeTessellatedRepresentation##classe::GetEdgeData(const void* iNodeID, void** oFace1Node, void** oFace2Node, float** oFace1Vertices, unsigned int* oVerticesNumber, int** oVerticesIndices)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEdgeData(iNodeID,oFace1Node,oFace2Node,oFace1Vertices,oVerticesNumber,oVerticesIndices)); \
} \
HRESULT  TIECATIExchangeTessellatedRepresentation##classe::GetPolyLineData(const void* iNodeID, float **oPoints, int *oNbPoints,int *oLineType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPolyLineData(iNodeID,oPoints,oNbPoints,oLineType)); \
} \
HRESULT  TIECATIExchangeTessellatedRepresentation##classe::GetPointData(const void* iNodeID, float **oPoints, int *oNbPoints)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPointData(iNodeID,oPoints,oNbPoints)); \
} \
HRESULT  TIECATIExchangeTessellatedRepresentation##classe::GetCircleData(const void* iNodeID, double oCenterPoint[3], double oNormalVector[3], double* oRadius)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCircleData(iNodeID,oCenterPoint,oNormalVector,oRadius)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeTessellatedRepresentation(classe) \
 \
 \
declare_TIE_CATIExchangeTessellatedRepresentation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeTessellatedRepresentation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeTessellatedRepresentation,"CATIExchangeTessellatedRepresentation",CATIExchangeTessellatedRepresentation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeTessellatedRepresentation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeTessellatedRepresentation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeTessellatedRepresentation##classe(classe::MetaObject(),CATIExchangeTessellatedRepresentation::MetaObject(),(void *)CreateTIECATIExchangeTessellatedRepresentation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeTessellatedRepresentation(classe) \
 \
 \
declare_TIE_CATIExchangeTessellatedRepresentation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeTessellatedRepresentation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeTessellatedRepresentation,"CATIExchangeTessellatedRepresentation",CATIExchangeTessellatedRepresentation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeTessellatedRepresentation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeTessellatedRepresentation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeTessellatedRepresentation##classe(classe::MetaObject(),CATIExchangeTessellatedRepresentation::MetaObject(),(void *)CreateTIECATIExchangeTessellatedRepresentation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeTessellatedRepresentation(classe) TIE_CATIExchangeTessellatedRepresentation(classe)
#else
#define BOA_CATIExchangeTessellatedRepresentation(classe) CATImplementBOA(CATIExchangeTessellatedRepresentation, classe)
#endif

#endif
