#ifndef CATISamImageTesselation_H
#define CATISamImageTesselation_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//=============================================================================

/**
* @CAA2Level L0
* @CAA2Usage U4 CATESamImageTesselation
*/

#include "CATBaseUnknown.h"

#include "CATBooleanDef.h"
#include "CATString.h"
struct CATSamElementVisuState;
class CATAnalysisExplicitTopology;

/** @nodoc */
#define CATSamElementFacesState CATSamElementVisuState

#include "CATSamVisuUUID.h"

extern "C" const IID IID_CATISamImageTesselation;

/**
 * Interface providing a finite element tesselation for results and section visualization.
 *
 * <b>Role</b>: This interface provides all necessary tesselation
 * data to produce a three dimensional view of a finite element.
 * The tesselation data is also used by the interference checker.
 * <p>
 * Basically the visualization is built in two passes: the first one
 * collects sizes used to dimension arrays that are filled in the
 * second pass.
 * <p><b>BOA information</b>: this interface can be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page. 
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class ExportedByCATSamVisuUUID CATISamImageTesselation : public CATBaseUnknown
{
    CATDeclareInterface;
  
  public :

    /**
     * Retrieves the maximum sizes of the different kinds of data needed for visualization.
     * <b>Role</b>: Retrieve the maximum sizes. These sizes are needed to dimension the
     * arrays that will later be filled by the @href #TesselateElement method.
     *
     * @param iElementnumber
     *   The internal number of the finite element to tesselate.
     * @param iFaceState
     *   Visualization status for each face of the element.
     * @param oNbVertices
     *   The number of floats needed to store the coordinates of the vertices.
     * @param oNbEdges
     *   The number of vertice needed to represent the edges of the element.
     *   It should be a multiple of 2.
     * @param oNbTriangles
     *   The number of single triangles needed to represent the element.
     * @param oNbStripTriangles
     *   The number of triangle strips needed to represent the element.
     * @param oNbStripIndices
     *   The number of vertice of each triangle strip.
     * @param oNbFanTriangles
     *   The number of triangle fans needed to represent the element.
     * @param oNbFanIndices
     *   The number of vertice of each triangle fan.
     */
    virtual HRESULT GetTessSizes ( const int iElementNumber,
      const CATSamElementVisuState & iFaceState ,
      int & oNbVertices , int & oNbEdges , int & oNbTriangles ,
      int & oNbStripTriangles , int & oNbStripIndices ,
      int & oNbFanTriangles , int & oNbFanIndices ) = 0;

    /**
     * Fills the tesselation arrays.
     *
     * @param iElementNumber
     *   The internal number of the finite element to tesselate.
     * @param iFaceState
     *   Visualization status for each face of the element.
     * @param iTexture
     *   An array containing one value (between 0.f and 1.f) per node of the element. 
     *   If there is no value on the element, it is set to NULL pointer.
     * @param iTextureMode
     *   If set to TRUE, the values are local to the element (nodes on element values) else that are
     *   nodes on values.
     * @param ioVertices
     *   An array to be filled with the vertice coordinates: XYZXYZXYZ...
     * @param oVerticesArraySize
     *   The number of coordinates actually copied into the ioVertices array.
     * @param ioNormals
     *   An array to be filled with normals coordinates It is organized like <tt>iVertices</tt> : one vertex has exactly
     *   one normal at the same field entry.
     * @param ioEdgeIndices
     *    Array used to store the edges vertices. Each field contains a
     *    vertex index, in the oVertices array.  As, we find, in the
     *    <tt>oVertices</tt> array, the XYZ coordinates for each
     *    vertex, the indices used to designate the vertices are multiples of three.
     *    <pre>
     *
     *
     *                   ---------------
     *                  | ioEdgeIndices |
     *                   ---------------
     *                  |      i00      |   } first edge defined by the first
     *                  |      i01      |   } two indices
     *                  |       .       |
     *                  |       .       |
     *                  |       .       |   
     *                  |      in0      |   } last edge defined by the last
     *                  |      in1      |   } two indices.
     *                   ---------------
     *
     *
     *    </pre> 
     *    For example, index ij0 allows to access to the face j-th edge first vertex
     *    wich coordinates are X = oVertices[ij0], Y = oVertices[ij0 + 1] and Z = oVertices[ij0 + 2], and
     *    which normal coordinates are Nx = oNormals[ij0], Ny = oNormals[ij0 + 1] and Nz = oNormals[ij0 + 2].
     * @param oNbEdges
     *    The number of edge indices actually filled. Should be a multiple of two.
     * @param ioTriangleIndices
     *   This array is used to store the single triangles vertices. Each of its field represents
     *   a vertex index in the <tt>ioVertices</tt> array.
     *   As we find, in the <tt>ioVertices</tt> array, the XYZ coordinates for each
     *   vertex, the indices used to designate the vertices are multiples of three.
     *   So, the first three indices of the <tt>ioTriangleIndices</tt> array, are the three vertices indices
     *   of the first single triangle.
     *   <pre>
     *
     *                 ------------------       
     *                | ioTriangleIndices|
     *                 ------------------
     *                |       i00        |   }
     *                |       i01        |   } triangle 0 defined by index i00, i01 and i02
     *                |       i02        |   }
     *                |        .         |
     *                |        .         |
     *                |       ij0        |   }
     *                |       ij1        |   } triangle j defined by index ij0, ij1 and ij2. 
     *                |       ij2        |   }
     *                |        .         |
     *                |        .         |
     *                 ------------------
     *
     *   </pre>
     *   For example, index ij0 enables access to the face j-th single triangle first vertex,
     *   which coordinates are X = iVertices[ij0], Y = iVertices[ij0 + 1] and Z = iVertices[ij0 + 2], and
     *   which normal has coordinates Nx = iNormals[ij0], Ny = iNormals[ij0 + 1] and Nz = iNormals[ij0 + 2].
     * @param oNbTriangles
     *    The number of single triangles actually filled.
     * @param ioTriangleStripIndices
     *    Array used to store the triangles strips vertices. Each field contains a
     *    vertex index, in the <tt>ioVertices</tt> array.  As, we find, in the
     *    ioVertices array, the XYZ coordinates for each
     *    vertex, the indices used to designate the vertices are multiples of three.
     *    <pre>
     *
     *
     *                   -----------------------
     *                  | ioTriangleStripIndices|
     *                   -----------------------
     *                  |          i00          |   }
     *                  |          i01          |   } first triangle strip defined
     *                  |           .           |   } by the first n1 indices
     *                  |           .           |   }
     *                  |          i0n1         |   }
     *                  |           .           |
     *                  |           .           |
     *                  |           .           |   
     *                  |          ij0          |   }
     *                  |          ij1          |   }
     *                  |           .           |   } triangle strip j
     *                  |           .           |   } with nj vertices
     *                  |          ijnj         |   }
     *                   -----------------------
     *
     *
     *    </pre> 
     *    For example, index ij0 allows to access to the j-th strip first vertex 
     *    wich coordinates are X = ioVertices[ij0], Y = ioVertices[ij0 + 1] and Z = ioVertices[ij0 + 2], and
     *    which normal coordinates are Nx = ioNormals[ij0], Ny = ioNormals[ij0 + 1] and Nz = ioNormals[ij0 + 2].
     * @param oNbTriangleStrips
     *    The number of triangles strips actually filled.
     * @param ioNbVerticesPerTriangleStrip
     *    Array containing the number of vertices for each triangle strip.
     *    The number of values of this array is equal to <tt>oNbTriangleStrip</tt>. For example, the first strip
     *    is made with <tt>ioNbVertexPerTriangleStrip[0]</tt> vertices.
     *    <pre>
     *                -----------------------------
     *               |ioNbVerticesPerTriangleStrip |
     *                -----------------------------
     *               |             n1              |
     *               |             .               |
     *               |             .               |   m = Number of triangle strips(oNbTriangleStrip)
     *               |             nm              |   nm = number of vertices of the m-th strip. (ioNbVertexPerTriangleStrip[m]
     *                -----------------------------    
     *
     *   </pre>
     * @param ioTriangleFanIndices
     *    Array used to store the triangle fans vertices. Each field contains a
     *    vertex index, in the oVertices array.  As, we find, in the
     *    <tt>oVertices</tt> array, the XYZ coordinates for each
     *    vertex, the indices used to designate the vertices are multiples of three.
     *    <pre>
     *
     *
     *                   ----------------------
     *                  | ioTriangleFanIndices |
     *                   ----------------------
     *                  |          i00         |   }
     *                  |          i01         |   } first triangle fan defined
     *                  |           .          |   } by the first n1 indices
     *                  |           .          |   }
     *                  |          i0n1        |   }
     *                  |           .          |
     *                  |           .          |
     *                  |           .          |   
     *                  |          ij0         |   }
     *                  |          ij1         |   }
     *                  |           .          |   } triangle fan j
     *                  |           .          |   } with nj vertices
     *                  |          ijnj        |   }
     *                   ----------------------
     *
     *
     *    </pre> 
     *    For example, index ij0 allows to access to the face j-th fan first vertex
     *    wich coordinates are X = oVertices[ij0], Y = oVertices[ij0 + 1] and Z = oVertices[ij0 + 2], and
     *    which normal coordinates are Nx = oNormals[ij0], Ny = oNormals[ij0 + 1] and Nz = oNormals[ij0 + 2].
     *    Each ij0, j in [0, jn], represents the j-th fan center.
     * @param oNbTriangleFans
     *    The number of triangle fans actually filled.
     * @param ioNbVerticesPerTriangleFan
     *    Array containing the number of vertices for each face triangles fan.
     *    The size of this array is equal to <tt>oNbTriangleFan</tt>. For example, the first fan
     *    is made with <tt>ioNbVertexPerTriangleStrip[0]</tt> vertices.
     *    <pre>
     *                -----------------------------
     *               | ioNbVerticesPerTriangleFan  |
     *                ----------------------------
     *               |             n1              |
     *               |             .               |
     *               |             .               |   m = Number of triangle fans(oNbTriangleFan)
     *               |             nm              |   nm = number of vertices of the m-th fan. (ioNbVertexPerTriangleFan[m]
     *                -----------------------------    
     *
     *   </pre>
     */
    virtual HRESULT TesselateElement ( const int iElementNumber,
      const CATSamElementVisuState & iFaceState ,
      const float *  iTexture , CATBoolean iTextureMode ,
      int * ioVertices ,  int & ioVerticesArraySize, float * ioNormals ,
      int * ioEdgeIndices, int & oNbEdges, 
      int * ioTriangleIndices, int & oNbTriangles,
      int * ioTriangleStripIndices, int & oNbTriangleStrips, int * ioNbVerticesPerTriangleStrip, 
      int * ioTriangleFanIndices, int & oNbTriangleFans, int * ioNbVerticesPerTriangleFan ) = 0;

    /**
     * Retrieves the maximum sizes of the different kinds of data needed for cutting visualization.
     * <b>Role</b>: Retrieve the maximum sizes. These sizes are needed to dimension the
     * arrays that will later be filled by the @href #CutElement method.
     *
     * @param iElementNumber
     *   The internal number of the finite element to cut.
     * @param iNodesDistToPlan
     *   The distance to the cutting plane for each node.
     * @param oNbVertices
     *   The number of floats needed to store the coordinates of the vertices.
     * @param oNbPoints
     *   The number of vertice needed to represent the points of the cut result.
     * @param oNbEdges
     *   The number of vertice needed to represent the edges of the cut result.
     *   It should be a multiple of 2.
     * @param oNbTriangles
     *   The number of single triangles needed to represent the cut result.
     * @param oNbFanTriangles
     *   The number of triangle fans needed to represent the cut result.
     * @param oNbFanIndices
     *   The number of vertice of each triangle fan.
     */
    virtual HRESULT GetCutSizes ( const int iElementNumber,
      const float * iNodesDistToPlan, 
      int &oNbVertices, int &oNbPoints, int &oNbEdges , 
      int &oNbTriangles, int &oNbFanTriangles, int &oNbFanIndices) = 0;
  
    /**
     * Fills the cut tesselation arrays.
     *
     * @param iElementNumber
     *   The internal number of the finite element to cut.
     * @param iPosition
     *   The position in the element
     * @param iNbPositions
     *   The number of Positions.
     * @param iPositions
     *   A pointer to the Positions List.
     * @param iAnchorPoint
     *   The origin of the cutting plane.
     * @param iNormalDirection
     *   The normal direction of the cutting plane.
     * @param iNodesCoordinates
     *   The coordinates for all the nodes: XYZXYZXYZ...
     * @param iNodesDistToPlan
     *   The distance to the cutting plane for each node.
     */
    virtual HRESULT CutElement ( const int iElementNumber,
      const CATString& iPosition, const int iNbPositions, const int * iPositions, 
      const float iAnchorPoint[3], const float iNormalDirection[3],
      const float * iNodesCoordinates, const float * iNodesDistToPlan,
      const float * iTexture, CATBoolean iTextureMode,
      float * ioVertices, float * ioVerticesTexture, int & ioVerticesArraySize,
      int * ioPointIndices , int & oNbPoints , 
      int * ioEdgeIndices, int & oNbEdges, 
      int * ioTriangleIndices, int & oNbTriangles,
      int * ioTriangleFanIndices, int & oNbTriangleFans, int * ioNbVerticesPerTriangleFan ) = 0;

    /**
     * @nodoc .
     */ 
    virtual HRESULT Init () = 0;

    /**
     * @nodoc .
     */ 
    virtual void Dispose () = 0;

    /**
     * @nodoc .
     */ 
    virtual void GetEdgesDiscretisation(const CATSamElementVisuState &FaceState,
            const int *NodesOfElement, int NbNodesOfElement, const float * NodesCoordinates,
            float * const NodesDisplacement, float DeformCoeff,
            float *&Edges, int &NbEdges) = 0;

    /**
     * @nodoc .
     */ 
    virtual void GetNodesDiscretisation(const CATSamElementVisuState &FaceState,
            const int *NodesOfElement, int NbNodesOfElement, const float *NodesCoordinates,
            float * const NodesDisplacement, float DeformCoeff,
            int &NbNodes, int *&NodesNumber, float *&Coordinates, int AbsoluteOrRelative=0) = 0;

    /**
     * @nodoc .
     */ 
    virtual void GetCenterOfFace ( int FaceNumber, const int *NodesOfElement,
            int NbNodesOfElement, const float *NodesCoordinates,
            float * const NodesDisplacement, float *CenterCoordinates, float *CenterDisplacement) = 0;

    /**
     * @nodoc .
     */ 
    virtual void GetCenterOfEdge ( int EdgeNumber , const int * NodesOfElement ,
            int NbNodesOfElement, const float *NodesCoordinates,
            float * const NodesDisplacement, float *CenterCoordinates, float *CenterDisplacement) = 0;

    /**
     * @nodoc .
     */ 
    virtual HRESULT GetNormalOfFace ( int FaceNumber , const int *NodesOfElement,
            int NbNodesOfElement, const float *NodesCoordinates,
            float *Normal) = 0;

    /**
     * @nodoc .
     */ 
    virtual void GetNormalOfEdge ( int EdgeNumber , const int * NodesOfElement ,
            int NbNodesOfElement, const float *NodesCoordinates,
            float * Normal ) = 0;

    /**
     * @nodoc .
     */ 
    virtual char GetVisualizationState(const CATSamElementVisuState &FaceState) = 0;

    /**
     * @nodoc .
     */ 
    virtual void GetVisualizedNodes(const CATSamElementVisuState &FaceState,
            const int *NodesOfElement, int NbNodesOfElement,
            int *ShownNodes, int &NbShownNodes, int AbsoluteOrRelative=0) = 0;

    /**
     * @nodoc .
     */ 
    virtual void ComputePosition( const int *NodesOfElement, int NbNodesOfElement,
            const float *NodesCoordinates, float * const NodesDisplacement,
            int NbPositions, float * const UVW,
            float *XYZPositions, float *XYZDisplacements) = 0;

    /**
     * @nodoc .
     */ 
    virtual HRESULT SetWorkingTopology (const CATAnalysisExplicitTopology * iTopology) = 0;

    /**
     * @nodoc .
     */ 
    virtual HRESULT ResetWorkingTopology ( ) = 0;
  
};
CATDeclareHandler(CATISamImageTesselation, CATBaseUnknown);

#endif

