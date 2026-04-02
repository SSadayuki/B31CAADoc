#ifndef CATESamImageTesselation_h 
#define CATESamImageTesselation_h

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//=============================================================================

/**
 * @CAA2Level L0 
 * @CAA2Usage U2 
 */

#include "CATISamImageTesselation.h"

// System prereqs
#include "CATString.h"
#include "CATBoolean.h"

// CATAnalysisVisuInterfaces prereqs
#include "CATSamVisuImpl.h"
struct CATSamElementVisuState;
class CATAnalysisExplicitTopology;

// AnalysisMeshingModel prereqs
#include "CATIMSHConnectivity.h"

// CATAnalysisBase prereqs
class CATAnalysisExplicitElement;
class CATAnalysisExplicitTopologyServices;

/**
 * Adapter for the implementation of CATISamImageTesselation interface.
 * @see CATISamImageTesselation
 */

class ExportedByCATSamVisuImpl CATESamImageTesselation : public CATISamImageTesselation
{
  public:
  
    /**
     * Default constructor.
     */
    CATESamImageTesselation();

    /**
     * Destructor.
     */
    virtual ~CATESamImageTesselation();    

    /**
     * Retrieves the nodes of elements.
     *
     * @param oNodesOfElementsPtr
     *   The start index for each element in oNodesOfElements.
     * @param oNodesOfElements
     *   The nodes number for each element.
     */
    HRESULT GetNodesOfElements(const int* &oNodesOfElementsPtr, const int* &oNodesOfElements);

    /**
     * Retrieves the nodes coordinates.
     *
     * @param oNodesCoordinates
     *   The coordinates of each nodes.
     */
    HRESULT GetNodesCoordinates(const float* &oNodesCoordinates);

    /**
     * Retrieves the maximum sizes of the different kinds of data needed for visualization.
     * <b>Role</b>: Retrieve the maximum sizes. These sizes are needed to dimension the
     * arrays that will later be filled by the @href #TesselateElement method.
     *
     * @param iElementNumber
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
      int & oNbVertices , int & oNbEdgeIndices , int & oNbTriangles ,
      int & oNbStripTriangles , int & oNbStripIndices ,
      int & oNbFanTriangles , int & oNbFanIndices );
  
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
      int * ioTriangleFanIndices, int & oNbTriangleFans, int * ioNbVerticesPerTriangleFan );

    /**
     * Retrieves the maximum sizes of the different kinds of data needed for cutting visualization.
     * <b>Role</b>: Retrieve the maximum sizes. These sizes are needed to dimension the
     * arrays that will later be filled by the @href #CutElement method.
     *
     * @param iElementNumber
     *   The internal number of the finite element to cut.
     * @param iFaceState
     *   Visualization status for each face of the element.
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
    virtual HRESULT GetCutSizes( const int iElementNumber,
      const float * iNodesDistToPlan,
      int &oNbVertices, int &oNbPoints , int &oNbEdges , 
      int &oNbTriangles, int &oNbFanTriangles, int &oNbFanIndices);
  
    /**
     * Fills the cut tesselation arrays.
     *
     * @param iElementNumber
     *   The internal number of the finite element to cut.
     * @param iFaceState
     *   Visualization status for each face of the element.
     * @param iAnchorPoint
     *   The origin of the cutting plane.
     * @param iNormalDirection
     *   The normal direction of the cutting plane.
     * @param iNodesCoordinates
     *   The coordinates for all the nodes: XYZXYZXYZ...
     * @param iNodesDistToPlan
     *   The distance to the cutting plane for each node.
     */
    virtual HRESULT CutElement( const int iElementNumber,
      const CATString& iPosition, const int iNbPositions, const int * iPositions, 
      const float iAnchorPoint[3], const float iNormalDirection[3],
      const float * iNodesCoordinates, const float * iNodesDistToPlan,
      const float * iTexture, CATBoolean iTextureMode,
      float * ioVertices, float * ioVerticesTexture, int & ioVerticesArraySize,
      int * ioPointIndices , int & oNbPoints , 
      int * ioEdgeIndices, int & oNbEdges, 
      int * ioTriangleIndices, int & oNbTriangles,
      int * ioTriangleFanIndices, int & oNbTriangleFans, int * ioNbVerticesPerTriangleFan );

    /**
     * @nodoc .
     */ 
    HRESULT Init ();

    /**
     * @nodoc .
     */ 
    void Dispose ();

    /**
     * @nodoc .
     */ 
    virtual void GetEdgesDiscretisation(const CATSamElementVisuState &FaceState,
            const int *NodesOfElement, int NbNodesOfElement, const float *NodesCoordinates,
            float * const NodesDisplacement, float DeformCoeff,
            float *&Edges, int &NbEdgePoints);

    /**
     * @nodoc .
     */ 
    virtual void GetNodesDiscretisation(const CATSamElementVisuState &FaceState,
            const int *NodesOfElement, int NbNodesOfElement, const float *NodesCoordinates,
            float * const NodesDisplacement, float DeformCoeff,
            int &NbNodes, int *&NodesNumber, float *&Coordinates, int AbsoluteOrRelative=0);

    /**
     * @nodoc .
     */ 
    virtual void GetCenterOfFace ( int FaceNumber, const int *NodesOfElement,
            int NbNodesOfElement, const float *NodesCoordinates,
            float * const NodesDisplacement, float *CenterCoordinates, float *CenterDisplacement);

    /**
     * @nodoc .
     */ 
    virtual void GetCenterOfEdge ( int EdgeNumber , const int * NodesOfElement ,
            int NbNodesOfElement, const float *NodesCoordinates,
            float * const NodesDisplacement, float *CenterCoordinates, float *CenterDisplacement);

    /**
     * @nodoc .
     */ 
    virtual HRESULT GetNormalOfFace ( int FaceNumber , const int *NodesOfElement,
            int NbNodesOfElement, const float *NodesCoordinates,
            float *Normal);

    /**
     * @nodoc .
     */ 
    virtual void GetNormalOfEdge ( int EdgeNumber , const int * NodesOfElement ,
            int NbNodesOfElement, const float *NodesCoordinates,
            float * Normal );

    /**
     * @nodoc .
     */ 
    virtual char GetVisualizationState(const CATSamElementVisuState &FaceState);

    /**
     * @nodoc .
     */ 
    virtual void GetVisualizedNodes(const CATSamElementVisuState &FaceState,
            const int *NodesOfElement, int NbNodesOfElement,
            int *ShownNodes, int &NbShownNodes, int AbsoluteOrRelative=0);

    /**
     * @nodoc .
     */ 
    virtual void ComputePosition( const int *NodesOfElement, int NbNodesOfElement,
            const float *NodesCoordinates, float * const NodesDisplacement,
            int NbPositions, float * const UVW,
            float *XYZPositions, float *XYZDisplacements);

    /**
     * @nodoc .
     */ 
    HRESULT SetWorkingTopology (const CATAnalysisExplicitTopology* iTopology);

    /**
     * @nodoc .
     */ 
    HRESULT ResetWorkingTopology ( );
  
  protected:
    
    /**
     * Constructors. No implementation provided. Just declared to avoid that 
     * someone could build this class.
     */
    CATESamImageTesselation (const CATESamImageTesselation &);
    CATESamImageTesselation & operator = (const CATESamImageTesselation &);

    /**
     * @nodoc .
     */ 
    static HRESULT ComputeSection (const CATString& iPosition, const int iNbPositions, const int * iPositions, 
      const int *iNodesOfElement, const int iNbNodesOfElement,
      const int *iNodesOfFaces, const int * iPtNodesOfFaces,
      const float iAnchorPoint[3], const float iNormalDirection[3],
      const float * iNodesCoordinates, const float * iNodesDistToPlan,
      const float * iTexture, int iTextureMode,
      const int *iNodesOfEdges, const int * iPtNodesOfEdges,
      const int *iNodesOfEdgesSegments, const int iNbNodesOfEdgesSegments,
      float * ioVertices, float * ioVerticesTexture, int &ioVerticesArraySize,
      int &ioNbPoints , int * ioPointIndices,
      int &ioNbEdges , int * ioEdgeIndices , 
      int &ioNbTriangles, int * ioTriangleIndices,
      int &ioNbFanTriangles, int * ioTriangleFanIndices, int * ioNbVertexPerTriangleFan);
    
    /**
     * @nodoc .
     */ 
    inline static short CATSamSign ( float x , float eps )
    {
      return ( x > eps ) ? 1 : ( ( x < -eps ) ? -1 : 0 );
    }

    /**
     * @nodoc .
     */ 
    inline CATIMSHConnectivity * GetMSHConnectivity()
    {
      if ( !_MSHConnectivity )
      {
        CATBaseUnknown * impl = GetImpl();
        if ( !impl ) return NULL;
        
        impl -> QueryInterface ( CATIMSHConnectivity::ClassId (), (void **) &_MSHConnectivity );
      }
      return _MSHConnectivity;
    }


    short  _Dim;
    int    _NbNodes;
    int    _NbEdges;
    int    _NbFaces;
    
    short  _VisuMask;
    short  _VisuEdgeMask;
    
    const int * _PtNodesOfFaces;
    const int * _NodesOfFaces;
    const int * _PtNodesOfEdges;
    const int * _NodesOfEdges;
    const int * _PtEdgesOfFaces;
    const int * _EdgesOfFaces;
    const int * _OrientOfEdges;
    
    const int   * _NodesOfElementsPtr;
    const int   * _NodesOfElements;
    const float * _NodesCoordinates;

    int *  _NodesOfEdgesSegments;
    int    _NbNodesOfEdgesSegments;
    
    int *  _NbEdgesNodesForFacesState;
    int *  _EdgesNodesForFacesState;
    int ** _PtOnEdgesNodesForFacesState;
    
    int *  _NbNodesForFacesState;
    int *  _NodesForFacesState;
    int ** _PtOnNodesForFacesState;

  private:

    CATBoolean            _InitDone; 

    CATAnalysisExplicitTopologyServices * _ExplicitTopologyServices;
    CATIMSHConnectivity * _MSHConnectivity;    
};
#endif
