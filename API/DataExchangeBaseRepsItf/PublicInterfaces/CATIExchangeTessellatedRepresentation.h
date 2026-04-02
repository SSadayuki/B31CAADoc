/* -*-c++-*- */

#ifndef CATIExchangeTessellatedRepresentation_H
#define CATIExchangeTessellatedRepresentation_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2004

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

//===================================================================
//
// 24/08/2004: MAX: API redefinition
// 16/04/2003: MAX: CAA Documentation & signature review
// 07/02/2003: ABM: Extension to support Lods and Instances.
// 07/02/2003: ABM: Extension to support Scene Trees Browsing
// 10/12/2002: ABM: Creation: flattened retrieval of Surface, Curve and Coordinate systems 
//
//===================================================================

// ABM Comments For Review // To be removed from Header
// -> This Class Purpose is not aimed to support PMIs and Drawings which are relevant to a separate packaging Area

#include "DataExchangeBaseRepsItfCPP.h"
#include "CATBaseUnknown.h"

class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeTessellatedRepresentation;
#else
extern "C" const IID IID_CATIExchangeTessellatedRepresentation ;
#endif

// String to be returned by implementations on method CATIExchangeRepresentation::GetRepresentationType
// and to give to CATIExchangeInputDocument::GetRepresentation
#define XCAD_TESSELLATED_REPRESENTATION "TessellatedRepresentation"


typedef enum {	NOD_ContainerNode = 1,
				NOD_SolidNode,
				NOD_SurfacicNode,
				NOD_CustomNode,
				NOD_CoordinateSystem,
				NOD_GP,
				NOD_Unknown
			} KindOfNode ;

typedef enum {	GP_Face = 1,
				GP_Plane,
				GP_Cylinder,
				GP_Cone,
				GP_Sphere,
				GP_Edge,
				GP_Line,
				GP_Circle,
				GP_Point,
				GP_Unknown
			} KindOfGP ;

/**
 * Interface to exchange tessellated representations (surfaces and curves).
 * <b>Role</b>: This interface provides a view on a XCAD document as a tessellated representation.
 * <br>Available from CATIA V5R15.
 */ 
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeTessellatedRepresentation:	public CATBaseUnknown
{
  CATDeclareInterface;

  public:
/**
 * Retrieves the tessellation options.
 * @param iNodeID
 *				the node's ID.
 * @param oSAGValue
 *				the used SAG (geometric precision) for the tessellation.
 * @param oAngleValue
 *				the max angle between consecutive normals for the tessellation.
 * @param oStepValue
 *				the max size of edges for the tessellation.
 */
	 virtual HRESULT GetSAG(const void* iNodeID, float* oSAGValue, float* oAngleValue, float* oStepValue) = 0;

/**
 * Retrieves the root nodes' number.
 * @param oNodeCount
 *				the number of root nodes.
 */
	 virtual HRESULT GetRootNodesCount(unsigned int* oNodeCount) = 0;

/**
 * Retrieves the root node's ID from its index.
 * @param iRootIndex
 *				the node's index from 0 to root nodes number - 1.
 * @param oRootNodeID
 *				the root node's ID.
 */
	 virtual HRESULT GetRootNode(const unsigned int iRootIndex, void*& oRootNodeID) = 0;

/**
 * Retrieves the number of children of the current node.
 * @param iNodeID
 *				the node's ID.
 * @param oNodeCount
 *				the number of children nodes.
 */
	 virtual HRESULT GetChildCount(const void* iNodeID, unsigned int* oNodeCount) = 0;

/**
 * Retrieves the node's ID from its index.
 * @param iNodeID
 *				the node's ID.
 * @param iChildIndex
 *				the child's index from 0 to children number - 1.
 * @param oChildNodeID
 *				the ID of the child.
 */
	 virtual HRESULT GetChild(const void* iNodeID, const unsigned int iChildIndex, void*& oChildNodeID) = 0;

/**
 * Retrieves the node's type.
 * @param iNodeID
 *				the node's ID.
 * @param oNodeType
 *				the node's type.
 */
	 virtual HRESULT GetNodeType(const void* iNodeID, KindOfNode& oNodeType) = 0;

/**
 * Retrieves the node's GP type.
 * @param iNodeID
 *				the node's ID.
 * @param oGPType
 *				the GP's type.
 * @return
 * If current node isn't a GP, returns S_FALSE.
 */
	 virtual HRESULT GetGPType(const void* iNodeID, KindOfGP& oGPType) = 0;

/**
 * Retrieves the orientation matrix of the node.
 * (in relation with its immediate father)
 * @param iNodeID
 *				the node's ID.
 * @param oRotationMatrix
 *				the rotation component:
 *								oRotationMatrix[0][x] : U vector
 *								oRotationMatrix[1][x] : V vector
 *								oRotationMatrix[2][x] : W vector
 * @param oTranslationVector
 *				the translation component.
 * @return
 * If current node has no orientation matrix, returns S_FALSE.
 */
	virtual HRESULT GetNodeOrientationMatrix(const void* iNodeID, float oRotationMatrix[3][3], float oTranslationVector[3]) = 0;

/**
 * Retrieves the node's UID.
 * @param iNodeID
 *				the node's ID.
 * @param oNodeUID
 *				the node's UID.
 */
	virtual HRESULT GetNodeUID(const void* iNodeID, CATUnicodeString& oNodeUID) = 0;

/**
 * Retrieves the coordinates system.
 * @param iNodeID
 *				the node's ID.
 * @param oOriginPoint
 *				the origin of the coordinate system.
 * @param oFirstVector
 *				the first vector which defines the system.
 * @param oSecondVector
 *				the second vector which defines the system.
 */
	virtual HRESULT GetCoordinateSystem(const void* iNodeID, double oOriginPoint[3], double oFirstVector[3], double oSecondVector[3]) = 0;

/**
 * Retrieves the color of a node.
 * @param iNodeID
 *				the node's ID.
 * @param oRed
 *				the red component.
 *				<b>Legal values</b>: <tt>oRed</tt> ranges from 0 to 255.
 * @param oGreen
 *				the green component.
 *				<b>Legal values</b>: <tt>oGreen</tt> ranges from 0 to 255.
 * @param oBlue
 *				the blue component.
 *				<b>Legal values</b>: <tt>oBlue</tt> ranges from 0 to 255.
 * @param oAlpha
 *				the alpha component.
 *				<b>Legal values</b>: <tt>oAlpha</tt> ranges from 0 to 255.
 */
	virtual HRESULT GetNodeColor(const void* iNodeID, unsigned int* oRed, unsigned int* oGreen, unsigned int* oBlue, unsigned int* oAlpha = NULL) = 0;

/**
 * Retrieves the bounding sphere of a node.
 * This sphere represents the smallest sphere containing the object under the node it's linked to.
 * This information is used at the rendering time to know if a given element is visible on the screen
 * and needs to be drawn or not.
 * @param iNodeID
 *				the node's ID.
 * @param oCenterPoint
 *				the center of the sphere.
 * @param oRadius
 *				the radius of the sphere.
 */
	virtual HRESULT GetNodeBoundingSphere(const void* iNodeID, float oCenterPoint[3], float* oRadius) = 0;

/*********************************************************************************************************************/
//                                               GP DATA
/*********************************************************************************************************************/

/**
 * Retrieves the face's parameters.
 * @param iNodeID
 *				the node's ID.
 * @param oVerticesNumber
 *				the vertices number.
 *				If information on vertices is shared with another element, returned size for this parameter is equal to 0.
 * @param oVertices
 *				an array made of face vertices coordinates: XYZXYZXYZ...
 *				Its size is equal to three times the face vertices number.
 * @param oNormalsNumber
 *				the number of normals.
 *				If information on normals is shared with another element, returned size for this parameter is equal to 0.
 * @param oNormals
 *				an array made of normals coordinates. It is organized as <tt>oVertices</tt> : one vertex has exactly
 *				one normal at the same field entry.
 * @param oSingleTrianglesNumber
 *				the number of single triangles in the face. 
 * @param oSingleTrianglesIndices
 *				the array used to store the single triangles vertices. Each of its field represents
 *				a vertex index, in the <tt>oVertices</tt> array.
 *				As,  we find, in the <tt>*oVertices</tt> array, the XYZ coordinates for each
 *				vertex, the indices used to designate the vertices are multiples of three.
 * @param oStripTrianglesNumber
 *				the number of face triangles strips.
 * @param oStripTrianglesIndices
 *				the array used to store the face triangles strips vertices. Each field contains a
 *				vertex index, belonging to one of the strips, in the oVertices array.  As, we find, in the
 *				<tt>oVertices</tt> array, the XYZ coordinates for each
 *				vertex, the indices used to designate the vertices are multiples of three.
 * @param oNbVertexPerStripTriangle
 *				an array containing the number of vertices for each face triangles strip.
 *				The size of this array is equal to <tt>*oStripTrianglesNumber</tt>. For example, the first strip
 *				is made with <tt>*oNbVertexPerStripTriangle[0]</tt> vertices.
 * @param oFanTrianglesNumber
 *				the number of face triangles fans.
 * @param oFanTrianglesIndices
 *				the array used to store the face triangles fans vertices. Each field contains a
 *				vertex index, belonging to one of the fans, in the <tt>oVertices</tt> array.  As, we find, in the
 *				<tt>oVertices</tt> array, the XYZ coordinates for each
 *				vertex, the indices used to designate the vertices are multiples of three.
 * @param oNbVertexPerFanTriangle
 *				the array containing the number of vertices for each face triangles fan.
 *				The size of this array is equal to <tt>*oFanTrianglesNumber</tt>. For example, the first fan
 *				is made with <tt>*oNbVertexPerFanTriangle[0]</tt> vertices.
 */
	virtual HRESULT GetFaceData(const void* iNodeID, int* oVerticesNumber, float** oVertices, int* oNormalsNumber, float** oNormals,
								int* oSingleTrianglesNumber, int** oSingleTrianglesIndices, int* oStripTrianglesNumber,
								int** oStripTrianglesIndices, int** oNbVertexPerStripTriangle, int* oFanTrianglesNumber,
								int** oFanTrianglesIndices, int** oNbVertexPerFanTriangle) = 0;

/**
 * Retrieves the plane's parameters.
 * @param iNodeID
 *				the node's ID.
 * @param oBasePoint
 *				a point on the plane.
 * @param oNormalVector
 *				an unit vector perpendicular to the plane.
 */
	virtual HRESULT GetPlaneData(const void* iNodeID, double oBasePoint[3], double oNormalVector[3]) = 0;

/**
 * Retrieves the cylinder's parameters.
 * @param iNodeID
 *				the node's ID.
 * @param oBasePoint
 *				the center of the cylinder's base.
 * @param oAxisVector
 *				the vector defining the axis of the cylinder. Its length is the length of the cylinder.
 * @param oRadius
 *				the radius of the cylinder's base circle.
 */
	virtual HRESULT GetCylinderData(const void* iNodeID, double oBasePoint[3], double oAxisVector[3], double* oRadius) = 0;

/**
 * Retrieves the cone's parameters.
 * @param iNodeID
 *				the node's ID.
 * @param oBasePoint
 *				the apex point of the cone.
 * @param oAxisVector
 *				the vector defining the axis of the cone. Its length is the length of the cone.
 * @param oHalfAngle
 *				the acute angle subtended between the axis and a generator of the cone ( 0 < angle < PI/2 ).
 */
	virtual HRESULT GetConeData(const void* iNodeID, double oBasePoint[3], double oAxisVector[3], double* oHalfAngle) = 0;

/**
 * Retrieves the sphere's parameters.
 * @param iNodeID
 *				the node's ID.
 * @param oCenterPoint
 *				the center of the sphere.
 * @param oRadius
 *				the radius of the sphere.
 */
	virtual HRESULT GetSphereData(const void* iNodeID, double oCenterPoint[3], double* oRadius) = 0;

/**
 * Retrieves the edge's parameters.
 * @param iNodeID
 *				the node's ID.
 * @param oFace1Node
 *				the first face the edge belongs to. This face shares vertices informations with the edge.
 * @param oFace2Node
 *				the second face the edge belongs to. This face can be set to NULL if doesn't exist.
 * @param oFace1Vertices
 *				the first face vertices coordinates array: XYZXYZXYZ...
 * @param oVerticesNumber
 *				the number of vertices in the edge.
 * @param oVerticesIndices
 *				edge vertices indices array, taken from the first face.
 *				This means that these indices allow to access vertices coordinates only through first face data.
 */
	virtual HRESULT GetEdgeData(const void* iNodeID, void** oFace1Node, void** oFace2Node, float** oFace1Vertices, unsigned int* oVerticesNumber, int** oVerticesIndices) = 0;

/**
 * Retrieves the polyline's parameters.
 * @param iNodeID
 *				the node's ID.
 * @param oPoints
 *				the points coordinates array.
 *				Array of points coordinates: XYZXYZXYZ...
 *				Its size is equal to three times the number of points.
 * @param oNbPoints
 *				Retrieves the number of points.
 * @param oLineType
 *				Retrieves the line type.
 *				<br><b>Legal values</b>:
 *				<dl>
 *				<dt>LINES</dt>
 *				<dd>The number of points must be even. A line will be drawn
 *				between points 1 and 2, an other line will be drawn between
 *				points 3 and 4, ...</dd>
 *				<dt>LINE_STRIP</dt>
 *				<dd>The number of points can be either even or odd. A line will
 *				be drawn between points 1 and 2, then, an other line will be drawn
 *				between points 2 and 3, ...</dd>
 *				<dt>LINE_LOOP</dt>
 *				<dd>Same as <tt>LINE_LOOP</tt>, excepted that one more line will be
 *				drawn between the last and the first points.</dd>
 *				</dl>
 */
	virtual HRESULT GetPolyLineData(const void* iNodeID, float **oPoints, int *oNbPoints,int *oLineType) = 0;

/**
 * Retrieves the point's parameters.
 * @param iNodeID
 *				the node's ID.
 * @param oPoints
 *				the points coordinates array.
 *				Array of points coordinates: XYZXYZXYZ...
 *				Its size is equal to three times the number of points.
 * @param oNbPoints
 *				Retrieves the number of points.
 */
	virtual HRESULT GetPointData(const void* iNodeID, float **oPoints, int *oNbPoints) = 0;

/**
 * Retrieves the 3D circle arc's parameters.
 * @param iNodeID
 *				the node's ID.
 * @param oCenterPoint
 *				the center of the circle.
 * @param oNormalVector
 *				the normal to the circle plan, this vector is normalized.
 * @param oRadius
 *				the circle radius.
 */
	virtual HRESULT GetCircleData(const void* iNodeID, double oCenterPoint[3], double oNormalVector[3], double* oRadius) = 0;

};
CATDeclareHandler(CATIExchangeTessellatedRepresentation, CATBaseUnknown);

#endif
