#ifndef __TIE_CATISamImageTesselation
#define __TIE_CATISamImageTesselation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamImageTesselation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamImageTesselation */
#define declare_TIE_CATISamImageTesselation(classe) \
 \
 \
class TIECATISamImageTesselation##classe : public CATISamImageTesselation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamImageTesselation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetTessSizes ( const int iElementNumber, const CATSamElementVisuState & iFaceState , int & oNbVertices , int & oNbEdges , int & oNbTriangles , int & oNbStripTriangles , int & oNbStripIndices , int & oNbFanTriangles , int & oNbFanIndices ) ; \
      virtual HRESULT TesselateElement ( const int iElementNumber, const CATSamElementVisuState & iFaceState , const float *  iTexture , CATBoolean iTextureMode , int * ioVertices ,  int & ioVerticesArraySize, float * ioNormals , int * ioEdgeIndices, int & oNbEdges, int * ioTriangleIndices, int & oNbTriangles, int * ioTriangleStripIndices, int & oNbTriangleStrips, int * ioNbVerticesPerTriangleStrip, int * ioTriangleFanIndices, int & oNbTriangleFans, int * ioNbVerticesPerTriangleFan ) ; \
      virtual HRESULT GetCutSizes ( const int iElementNumber, const float * iNodesDistToPlan, int &oNbVertices, int &oNbPoints, int &oNbEdges , int &oNbTriangles, int &oNbFanTriangles, int &oNbFanIndices) ; \
      virtual HRESULT CutElement ( const int iElementNumber, const CATString& iPosition, const int iNbPositions, const int * iPositions, const float iAnchorPoint[3], const float iNormalDirection[3], const float * iNodesCoordinates, const float * iNodesDistToPlan, const float * iTexture, CATBoolean iTextureMode, float * ioVertices, float * ioVerticesTexture, int & ioVerticesArraySize, int * ioPointIndices , int & oNbPoints , int * ioEdgeIndices, int & oNbEdges, int * ioTriangleIndices, int & oNbTriangles, int * ioTriangleFanIndices, int & oNbTriangleFans, int * ioNbVerticesPerTriangleFan ) ; \
      virtual HRESULT Init () ; \
      virtual void Dispose () ; \
      virtual void GetEdgesDiscretisation(const CATSamElementVisuState &FaceState, const int *NodesOfElement, int NbNodesOfElement, const float * NodesCoordinates, float * const NodesDisplacement, float DeformCoeff, float *&Edges, int &NbEdges) ; \
      virtual void GetNodesDiscretisation(const CATSamElementVisuState &FaceState, const int *NodesOfElement, int NbNodesOfElement, const float *NodesCoordinates, float * const NodesDisplacement, float DeformCoeff, int &NbNodes, int *&NodesNumber, float *&Coordinates, int AbsoluteOrRelative=0) ; \
      virtual void GetCenterOfFace ( int FaceNumber, const int *NodesOfElement, int NbNodesOfElement, const float *NodesCoordinates, float * const NodesDisplacement, float *CenterCoordinates, float *CenterDisplacement) ; \
      virtual void GetCenterOfEdge ( int EdgeNumber , const int * NodesOfElement , int NbNodesOfElement, const float *NodesCoordinates, float * const NodesDisplacement, float *CenterCoordinates, float *CenterDisplacement) ; \
      virtual HRESULT GetNormalOfFace ( int FaceNumber , const int *NodesOfElement, int NbNodesOfElement, const float *NodesCoordinates, float *Normal) ; \
      virtual void GetNormalOfEdge ( int EdgeNumber , const int * NodesOfElement , int NbNodesOfElement, const float *NodesCoordinates, float * Normal ) ; \
      virtual char GetVisualizationState(const CATSamElementVisuState &FaceState) ; \
      virtual void GetVisualizedNodes(const CATSamElementVisuState &FaceState, const int *NodesOfElement, int NbNodesOfElement, int *ShownNodes, int &NbShownNodes, int AbsoluteOrRelative=0) ; \
      virtual void ComputePosition( const int *NodesOfElement, int NbNodesOfElement, const float *NodesCoordinates, float * const NodesDisplacement, int NbPositions, float * const UVW, float *XYZPositions, float *XYZDisplacements) ; \
      virtual HRESULT SetWorkingTopology (const CATAnalysisExplicitTopology * iTopology) ; \
      virtual HRESULT ResetWorkingTopology ( ) ; \
};



#define ENVTIEdeclare_CATISamImageTesselation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetTessSizes ( const int iElementNumber, const CATSamElementVisuState & iFaceState , int & oNbVertices , int & oNbEdges , int & oNbTriangles , int & oNbStripTriangles , int & oNbStripIndices , int & oNbFanTriangles , int & oNbFanIndices ) ; \
virtual HRESULT TesselateElement ( const int iElementNumber, const CATSamElementVisuState & iFaceState , const float *  iTexture , CATBoolean iTextureMode , int * ioVertices ,  int & ioVerticesArraySize, float * ioNormals , int * ioEdgeIndices, int & oNbEdges, int * ioTriangleIndices, int & oNbTriangles, int * ioTriangleStripIndices, int & oNbTriangleStrips, int * ioNbVerticesPerTriangleStrip, int * ioTriangleFanIndices, int & oNbTriangleFans, int * ioNbVerticesPerTriangleFan ) ; \
virtual HRESULT GetCutSizes ( const int iElementNumber, const float * iNodesDistToPlan, int &oNbVertices, int &oNbPoints, int &oNbEdges , int &oNbTriangles, int &oNbFanTriangles, int &oNbFanIndices) ; \
virtual HRESULT CutElement ( const int iElementNumber, const CATString& iPosition, const int iNbPositions, const int * iPositions, const float iAnchorPoint[3], const float iNormalDirection[3], const float * iNodesCoordinates, const float * iNodesDistToPlan, const float * iTexture, CATBoolean iTextureMode, float * ioVertices, float * ioVerticesTexture, int & ioVerticesArraySize, int * ioPointIndices , int & oNbPoints , int * ioEdgeIndices, int & oNbEdges, int * ioTriangleIndices, int & oNbTriangles, int * ioTriangleFanIndices, int & oNbTriangleFans, int * ioNbVerticesPerTriangleFan ) ; \
virtual HRESULT Init () ; \
virtual void Dispose () ; \
virtual void GetEdgesDiscretisation(const CATSamElementVisuState &FaceState, const int *NodesOfElement, int NbNodesOfElement, const float * NodesCoordinates, float * const NodesDisplacement, float DeformCoeff, float *&Edges, int &NbEdges) ; \
virtual void GetNodesDiscretisation(const CATSamElementVisuState &FaceState, const int *NodesOfElement, int NbNodesOfElement, const float *NodesCoordinates, float * const NodesDisplacement, float DeformCoeff, int &NbNodes, int *&NodesNumber, float *&Coordinates, int AbsoluteOrRelative=0) ; \
virtual void GetCenterOfFace ( int FaceNumber, const int *NodesOfElement, int NbNodesOfElement, const float *NodesCoordinates, float * const NodesDisplacement, float *CenterCoordinates, float *CenterDisplacement) ; \
virtual void GetCenterOfEdge ( int EdgeNumber , const int * NodesOfElement , int NbNodesOfElement, const float *NodesCoordinates, float * const NodesDisplacement, float *CenterCoordinates, float *CenterDisplacement) ; \
virtual HRESULT GetNormalOfFace ( int FaceNumber , const int *NodesOfElement, int NbNodesOfElement, const float *NodesCoordinates, float *Normal) ; \
virtual void GetNormalOfEdge ( int EdgeNumber , const int * NodesOfElement , int NbNodesOfElement, const float *NodesCoordinates, float * Normal ) ; \
virtual char GetVisualizationState(const CATSamElementVisuState &FaceState) ; \
virtual void GetVisualizedNodes(const CATSamElementVisuState &FaceState, const int *NodesOfElement, int NbNodesOfElement, int *ShownNodes, int &NbShownNodes, int AbsoluteOrRelative=0) ; \
virtual void ComputePosition( const int *NodesOfElement, int NbNodesOfElement, const float *NodesCoordinates, float * const NodesDisplacement, int NbPositions, float * const UVW, float *XYZPositions, float *XYZDisplacements) ; \
virtual HRESULT SetWorkingTopology (const CATAnalysisExplicitTopology * iTopology) ; \
virtual HRESULT ResetWorkingTopology ( ) ; \


#define ENVTIEdefine_CATISamImageTesselation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetTessSizes ( const int iElementNumber, const CATSamElementVisuState & iFaceState , int & oNbVertices , int & oNbEdges , int & oNbTriangles , int & oNbStripTriangles , int & oNbStripIndices , int & oNbFanTriangles , int & oNbFanIndices )  \
{ \
return (ENVTIECALL(CATISamImageTesselation,ENVTIETypeLetter,ENVTIELetter)GetTessSizes (iElementNumber,iFaceState ,oNbVertices ,oNbEdges ,oNbTriangles ,oNbStripTriangles ,oNbStripIndices ,oNbFanTriangles ,oNbFanIndices )); \
} \
HRESULT  ENVTIEName::TesselateElement ( const int iElementNumber, const CATSamElementVisuState & iFaceState , const float *  iTexture , CATBoolean iTextureMode , int * ioVertices ,  int & ioVerticesArraySize, float * ioNormals , int * ioEdgeIndices, int & oNbEdges, int * ioTriangleIndices, int & oNbTriangles, int * ioTriangleStripIndices, int & oNbTriangleStrips, int * ioNbVerticesPerTriangleStrip, int * ioTriangleFanIndices, int & oNbTriangleFans, int * ioNbVerticesPerTriangleFan )  \
{ \
return (ENVTIECALL(CATISamImageTesselation,ENVTIETypeLetter,ENVTIELetter)TesselateElement (iElementNumber,iFaceState ,iTexture ,iTextureMode ,ioVertices ,ioVerticesArraySize,ioNormals ,ioEdgeIndices,oNbEdges,ioTriangleIndices,oNbTriangles,ioTriangleStripIndices,oNbTriangleStrips,ioNbVerticesPerTriangleStrip,ioTriangleFanIndices,oNbTriangleFans,ioNbVerticesPerTriangleFan )); \
} \
HRESULT  ENVTIEName::GetCutSizes ( const int iElementNumber, const float * iNodesDistToPlan, int &oNbVertices, int &oNbPoints, int &oNbEdges , int &oNbTriangles, int &oNbFanTriangles, int &oNbFanIndices)  \
{ \
return (ENVTIECALL(CATISamImageTesselation,ENVTIETypeLetter,ENVTIELetter)GetCutSizes (iElementNumber,iNodesDistToPlan,oNbVertices,oNbPoints,oNbEdges ,oNbTriangles,oNbFanTriangles,oNbFanIndices)); \
} \
HRESULT  ENVTIEName::CutElement ( const int iElementNumber, const CATString& iPosition, const int iNbPositions, const int * iPositions, const float iAnchorPoint[3], const float iNormalDirection[3], const float * iNodesCoordinates, const float * iNodesDistToPlan, const float * iTexture, CATBoolean iTextureMode, float * ioVertices, float * ioVerticesTexture, int & ioVerticesArraySize, int * ioPointIndices , int & oNbPoints , int * ioEdgeIndices, int & oNbEdges, int * ioTriangleIndices, int & oNbTriangles, int * ioTriangleFanIndices, int & oNbTriangleFans, int * ioNbVerticesPerTriangleFan )  \
{ \
return (ENVTIECALL(CATISamImageTesselation,ENVTIETypeLetter,ENVTIELetter)CutElement (iElementNumber,iPosition,iNbPositions,iPositions,iAnchorPoint,iNormalDirection,iNodesCoordinates,iNodesDistToPlan,iTexture,iTextureMode,ioVertices,ioVerticesTexture,ioVerticesArraySize,ioPointIndices ,oNbPoints ,ioEdgeIndices,oNbEdges,ioTriangleIndices,oNbTriangles,ioTriangleFanIndices,oNbTriangleFans,ioNbVerticesPerTriangleFan )); \
} \
HRESULT  ENVTIEName::Init ()  \
{ \
return (ENVTIECALL(CATISamImageTesselation,ENVTIETypeLetter,ENVTIELetter)Init ()); \
} \
void  ENVTIEName::Dispose ()  \
{ \
 (ENVTIECALL(CATISamImageTesselation,ENVTIETypeLetter,ENVTIELetter)Dispose ()); \
} \
void  ENVTIEName::GetEdgesDiscretisation(const CATSamElementVisuState &FaceState, const int *NodesOfElement, int NbNodesOfElement, const float * NodesCoordinates, float * const NodesDisplacement, float DeformCoeff, float *&Edges, int &NbEdges)  \
{ \
 (ENVTIECALL(CATISamImageTesselation,ENVTIETypeLetter,ENVTIELetter)GetEdgesDiscretisation(FaceState,NodesOfElement,NbNodesOfElement,NodesCoordinates,NodesDisplacement,DeformCoeff,Edges,NbEdges)); \
} \
void  ENVTIEName::GetNodesDiscretisation(const CATSamElementVisuState &FaceState, const int *NodesOfElement, int NbNodesOfElement, const float *NodesCoordinates, float * const NodesDisplacement, float DeformCoeff, int &NbNodes, int *&NodesNumber, float *&Coordinates, int AbsoluteOrRelative)  \
{ \
 (ENVTIECALL(CATISamImageTesselation,ENVTIETypeLetter,ENVTIELetter)GetNodesDiscretisation(FaceState,NodesOfElement,NbNodesOfElement,NodesCoordinates,NodesDisplacement,DeformCoeff,NbNodes,NodesNumber,Coordinates,AbsoluteOrRelative)); \
} \
void  ENVTIEName::GetCenterOfFace ( int FaceNumber, const int *NodesOfElement, int NbNodesOfElement, const float *NodesCoordinates, float * const NodesDisplacement, float *CenterCoordinates, float *CenterDisplacement)  \
{ \
 (ENVTIECALL(CATISamImageTesselation,ENVTIETypeLetter,ENVTIELetter)GetCenterOfFace (FaceNumber,NodesOfElement,NbNodesOfElement,NodesCoordinates,NodesDisplacement,CenterCoordinates,CenterDisplacement)); \
} \
void  ENVTIEName::GetCenterOfEdge ( int EdgeNumber , const int * NodesOfElement , int NbNodesOfElement, const float *NodesCoordinates, float * const NodesDisplacement, float *CenterCoordinates, float *CenterDisplacement)  \
{ \
 (ENVTIECALL(CATISamImageTesselation,ENVTIETypeLetter,ENVTIELetter)GetCenterOfEdge (EdgeNumber ,NodesOfElement ,NbNodesOfElement,NodesCoordinates,NodesDisplacement,CenterCoordinates,CenterDisplacement)); \
} \
HRESULT  ENVTIEName::GetNormalOfFace ( int FaceNumber , const int *NodesOfElement, int NbNodesOfElement, const float *NodesCoordinates, float *Normal)  \
{ \
return (ENVTIECALL(CATISamImageTesselation,ENVTIETypeLetter,ENVTIELetter)GetNormalOfFace (FaceNumber ,NodesOfElement,NbNodesOfElement,NodesCoordinates,Normal)); \
} \
void  ENVTIEName::GetNormalOfEdge ( int EdgeNumber , const int * NodesOfElement , int NbNodesOfElement, const float *NodesCoordinates, float * Normal )  \
{ \
 (ENVTIECALL(CATISamImageTesselation,ENVTIETypeLetter,ENVTIELetter)GetNormalOfEdge (EdgeNumber ,NodesOfElement ,NbNodesOfElement,NodesCoordinates,Normal )); \
} \
char  ENVTIEName::GetVisualizationState(const CATSamElementVisuState &FaceState)  \
{ \
return (ENVTIECALL(CATISamImageTesselation,ENVTIETypeLetter,ENVTIELetter)GetVisualizationState(FaceState)); \
} \
void  ENVTIEName::GetVisualizedNodes(const CATSamElementVisuState &FaceState, const int *NodesOfElement, int NbNodesOfElement, int *ShownNodes, int &NbShownNodes, int AbsoluteOrRelative)  \
{ \
 (ENVTIECALL(CATISamImageTesselation,ENVTIETypeLetter,ENVTIELetter)GetVisualizedNodes(FaceState,NodesOfElement,NbNodesOfElement,ShownNodes,NbShownNodes,AbsoluteOrRelative)); \
} \
void  ENVTIEName::ComputePosition( const int *NodesOfElement, int NbNodesOfElement, const float *NodesCoordinates, float * const NodesDisplacement, int NbPositions, float * const UVW, float *XYZPositions, float *XYZDisplacements)  \
{ \
 (ENVTIECALL(CATISamImageTesselation,ENVTIETypeLetter,ENVTIELetter)ComputePosition(NodesOfElement,NbNodesOfElement,NodesCoordinates,NodesDisplacement,NbPositions,UVW,XYZPositions,XYZDisplacements)); \
} \
HRESULT  ENVTIEName::SetWorkingTopology (const CATAnalysisExplicitTopology * iTopology)  \
{ \
return (ENVTIECALL(CATISamImageTesselation,ENVTIETypeLetter,ENVTIELetter)SetWorkingTopology (iTopology)); \
} \
HRESULT  ENVTIEName::ResetWorkingTopology ( )  \
{ \
return (ENVTIECALL(CATISamImageTesselation,ENVTIETypeLetter,ENVTIELetter)ResetWorkingTopology ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamImageTesselation(classe)    TIECATISamImageTesselation##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamImageTesselation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamImageTesselation, classe) \
 \
 \
CATImplementTIEMethods(CATISamImageTesselation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamImageTesselation, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamImageTesselation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamImageTesselation, classe) \
 \
HRESULT  TIECATISamImageTesselation##classe::GetTessSizes ( const int iElementNumber, const CATSamElementVisuState & iFaceState , int & oNbVertices , int & oNbEdges , int & oNbTriangles , int & oNbStripTriangles , int & oNbStripIndices , int & oNbFanTriangles , int & oNbFanIndices )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTessSizes (iElementNumber,iFaceState ,oNbVertices ,oNbEdges ,oNbTriangles ,oNbStripTriangles ,oNbStripIndices ,oNbFanTriangles ,oNbFanIndices )); \
} \
HRESULT  TIECATISamImageTesselation##classe::TesselateElement ( const int iElementNumber, const CATSamElementVisuState & iFaceState , const float *  iTexture , CATBoolean iTextureMode , int * ioVertices ,  int & ioVerticesArraySize, float * ioNormals , int * ioEdgeIndices, int & oNbEdges, int * ioTriangleIndices, int & oNbTriangles, int * ioTriangleStripIndices, int & oNbTriangleStrips, int * ioNbVerticesPerTriangleStrip, int * ioTriangleFanIndices, int & oNbTriangleFans, int * ioNbVerticesPerTriangleFan )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->TesselateElement (iElementNumber,iFaceState ,iTexture ,iTextureMode ,ioVertices ,ioVerticesArraySize,ioNormals ,ioEdgeIndices,oNbEdges,ioTriangleIndices,oNbTriangles,ioTriangleStripIndices,oNbTriangleStrips,ioNbVerticesPerTriangleStrip,ioTriangleFanIndices,oNbTriangleFans,ioNbVerticesPerTriangleFan )); \
} \
HRESULT  TIECATISamImageTesselation##classe::GetCutSizes ( const int iElementNumber, const float * iNodesDistToPlan, int &oNbVertices, int &oNbPoints, int &oNbEdges , int &oNbTriangles, int &oNbFanTriangles, int &oNbFanIndices)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCutSizes (iElementNumber,iNodesDistToPlan,oNbVertices,oNbPoints,oNbEdges ,oNbTriangles,oNbFanTriangles,oNbFanIndices)); \
} \
HRESULT  TIECATISamImageTesselation##classe::CutElement ( const int iElementNumber, const CATString& iPosition, const int iNbPositions, const int * iPositions, const float iAnchorPoint[3], const float iNormalDirection[3], const float * iNodesCoordinates, const float * iNodesDistToPlan, const float * iTexture, CATBoolean iTextureMode, float * ioVertices, float * ioVerticesTexture, int & ioVerticesArraySize, int * ioPointIndices , int & oNbPoints , int * ioEdgeIndices, int & oNbEdges, int * ioTriangleIndices, int & oNbTriangles, int * ioTriangleFanIndices, int & oNbTriangleFans, int * ioNbVerticesPerTriangleFan )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CutElement (iElementNumber,iPosition,iNbPositions,iPositions,iAnchorPoint,iNormalDirection,iNodesCoordinates,iNodesDistToPlan,iTexture,iTextureMode,ioVertices,ioVerticesTexture,ioVerticesArraySize,ioPointIndices ,oNbPoints ,ioEdgeIndices,oNbEdges,ioTriangleIndices,oNbTriangles,ioTriangleFanIndices,oNbTriangleFans,ioNbVerticesPerTriangleFan )); \
} \
HRESULT  TIECATISamImageTesselation##classe::Init ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Init ()); \
} \
void  TIECATISamImageTesselation##classe::Dispose ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Dispose (); \
} \
void  TIECATISamImageTesselation##classe::GetEdgesDiscretisation(const CATSamElementVisuState &FaceState, const int *NodesOfElement, int NbNodesOfElement, const float * NodesCoordinates, float * const NodesDisplacement, float DeformCoeff, float *&Edges, int &NbEdges)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEdgesDiscretisation(FaceState,NodesOfElement,NbNodesOfElement,NodesCoordinates,NodesDisplacement,DeformCoeff,Edges,NbEdges); \
} \
void  TIECATISamImageTesselation##classe::GetNodesDiscretisation(const CATSamElementVisuState &FaceState, const int *NodesOfElement, int NbNodesOfElement, const float *NodesCoordinates, float * const NodesDisplacement, float DeformCoeff, int &NbNodes, int *&NodesNumber, float *&Coordinates, int AbsoluteOrRelative)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodesDiscretisation(FaceState,NodesOfElement,NbNodesOfElement,NodesCoordinates,NodesDisplacement,DeformCoeff,NbNodes,NodesNumber,Coordinates,AbsoluteOrRelative); \
} \
void  TIECATISamImageTesselation##classe::GetCenterOfFace ( int FaceNumber, const int *NodesOfElement, int NbNodesOfElement, const float *NodesCoordinates, float * const NodesDisplacement, float *CenterCoordinates, float *CenterDisplacement)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCenterOfFace (FaceNumber,NodesOfElement,NbNodesOfElement,NodesCoordinates,NodesDisplacement,CenterCoordinates,CenterDisplacement); \
} \
void  TIECATISamImageTesselation##classe::GetCenterOfEdge ( int EdgeNumber , const int * NodesOfElement , int NbNodesOfElement, const float *NodesCoordinates, float * const NodesDisplacement, float *CenterCoordinates, float *CenterDisplacement)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCenterOfEdge (EdgeNumber ,NodesOfElement ,NbNodesOfElement,NodesCoordinates,NodesDisplacement,CenterCoordinates,CenterDisplacement); \
} \
HRESULT  TIECATISamImageTesselation##classe::GetNormalOfFace ( int FaceNumber , const int *NodesOfElement, int NbNodesOfElement, const float *NodesCoordinates, float *Normal)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNormalOfFace (FaceNumber ,NodesOfElement,NbNodesOfElement,NodesCoordinates,Normal)); \
} \
void  TIECATISamImageTesselation##classe::GetNormalOfEdge ( int EdgeNumber , const int * NodesOfElement , int NbNodesOfElement, const float *NodesCoordinates, float * Normal )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNormalOfEdge (EdgeNumber ,NodesOfElement ,NbNodesOfElement,NodesCoordinates,Normal ); \
} \
char  TIECATISamImageTesselation##classe::GetVisualizationState(const CATSamElementVisuState &FaceState)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetVisualizationState(FaceState)); \
} \
void  TIECATISamImageTesselation##classe::GetVisualizedNodes(const CATSamElementVisuState &FaceState, const int *NodesOfElement, int NbNodesOfElement, int *ShownNodes, int &NbShownNodes, int AbsoluteOrRelative)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetVisualizedNodes(FaceState,NodesOfElement,NbNodesOfElement,ShownNodes,NbShownNodes,AbsoluteOrRelative); \
} \
void  TIECATISamImageTesselation##classe::ComputePosition( const int *NodesOfElement, int NbNodesOfElement, const float *NodesCoordinates, float * const NodesDisplacement, int NbPositions, float * const UVW, float *XYZPositions, float *XYZDisplacements)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputePosition(NodesOfElement,NbNodesOfElement,NodesCoordinates,NodesDisplacement,NbPositions,UVW,XYZPositions,XYZDisplacements); \
} \
HRESULT  TIECATISamImageTesselation##classe::SetWorkingTopology (const CATAnalysisExplicitTopology * iTopology)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetWorkingTopology (iTopology)); \
} \
HRESULT  TIECATISamImageTesselation##classe::ResetWorkingTopology ( )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetWorkingTopology ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamImageTesselation(classe) \
 \
 \
declare_TIE_CATISamImageTesselation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamImageTesselation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamImageTesselation,"CATISamImageTesselation",CATISamImageTesselation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamImageTesselation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamImageTesselation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamImageTesselation##classe(classe::MetaObject(),CATISamImageTesselation::MetaObject(),(void *)CreateTIECATISamImageTesselation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamImageTesselation(classe) \
 \
 \
declare_TIE_CATISamImageTesselation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamImageTesselation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamImageTesselation,"CATISamImageTesselation",CATISamImageTesselation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamImageTesselation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamImageTesselation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamImageTesselation##classe(classe::MetaObject(),CATISamImageTesselation::MetaObject(),(void *)CreateTIECATISamImageTesselation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamImageTesselation(classe) TIE_CATISamImageTesselation(classe)
#else
#define BOA_CATISamImageTesselation(classe) CATImplementBOA(CATISamImageTesselation, classe)
#endif

#endif
