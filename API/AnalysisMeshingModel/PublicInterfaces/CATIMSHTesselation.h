#ifndef  CATIMSHTesselation_h
#define  CATIMSHTesselation_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U4 CATMSHExtITesselation
 */

#include "MSHModel.h"
#include "CATBaseUnknown.h"

class CATMSHConnectivity;
class CATMSHElement;

extern ExportedByMSHModel IID IID_CATIMSHTesselation;

/**
 * Interface providing a finite element tesselation.
 *
 * <b>Role</b>: This interface provides all necessary tesselation
 * data to produce a three dimensional view of a finite element.
 * The tesselation data is also used by the interference checker.
 * <p>
 * Basically the visualization is built in two passes: the first one
 * collects sizes used to dimension arrays that are filled in the
 * second pass.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */
class ExportedByMSHModel CATIMSHTesselation : public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /**
   * Retrieves the maximum sizes of the different kinds of data needed for visualization.
   * <b>Role</b>: Retrieve the maximum sizes. These sizes are needed to dimension the
   * arrays that will later be filled by the @href #TesselateElement method.
   *
   * @param iElement
   *   A pointer to the finite element to tesselate.
   * @param oVertices
   *   The number of floats needed to store the coordinates of the vertices.
   * @param oTriaIso
   *   The number of single triangles needed to represent the element.
   * @param oTriaStrip
   *   The number of triangle strips needed to represent the element.
   * @param oVertexStrip
   *   The number of vertice of each triangle strip.
   * @param oTriaFan
   *   The number of triangle fans needed to represent the element.
   * @param oVertexFan
   *   The number of vertice of each triangle fan.
   * @param oEdges
   *   The number of vertice needed to represent the edges of the element.
   *   It should be a multiple of 2.
   */
  virtual HRESULT GetTessSizes ( CATMSHElement * iElement, int & oVertices, int & oTriaIso,
                                 int & oTriaStrip, int & oVertexStrip, int & oTriaFan, int & oVertexFan,
                                 int & oEdges ) const = 0;

  /**
   * Fills the tesselation arrays.
   *
   * @param iElement
   *   A pointer to the finite element to tesselate.
   * @param iShrink
   *   A shrink value.
   * <br><b>Legal values</b>:
   *   Between 0.5 and 1, 1 meaning no shrink.
   * @param iExactMode
   *   Indicates whether or not the tesselation must be exact. For visualization purposes,
   *   one can build a slightly simplified representation of the element, depending on
   *   criteria like planearity. For interference checking, the tesselation should be
   *   more accurate.
   * <br><b>Legal values</b>:
   *   <dl>
   *      <dt>0</dt>
   *        <dd>The tesselation can be simplified</dd>
   *      <dt>1</dt>
   *        <dd>The tesselation should be accurate</dd>
   *   </dl>
   * @param ioVertices
   *   An array to be filled with the vertice coordinates: XYZXYZXYZ...
   * @param oVerticesArraySize
   *   The number of coordinates actually copied into the ioVertices array.
   * @param ioNormals
   *   An array to be filled with normals coordinates It is organized like <tt>iVertices</tt> : one vertex has exactly
   *   one normal at the same field entry.
   * @param oNormalsArraySize
   *   The number of coordinates actually copied into the ioNormals array.
   * @param ioTriangleIndice
   *   This array is used to store the single triangles vertices. Each of its field represents
   *   a vertex index in the <tt>ioVertices</tt> array.
   *   As we find, in the <tt>ioVertices</tt> array, the XYZ coordinates for each
   *   vertex, the indices used to designate the vertices are multiples of three.
   *   So, the first three indices of the <tt>ioTriangleIndices</tt> array, are the three vertices indices
   *   of the first single triangle.
   *   <pre>
   *
   *                 -----------------       
   *                | ioTriangleIndice|
   *                 ------------------
   *                |       i00       |   }
   *                |       i01       |   } triangle 0 defined by index i00, i01 and i02
   *                |       i02       |   }
   *                |        .        |
   *                |        .        |
   *                |       ij0       |   }
   *                |       ij1       |   } triangle j defined by index ij0, ij1 and ij2. 
   *                |       ij2       |   }
   *                |        .        |
   *                |        .        |
   *                 -----------------
   *
   *   </pre>
   *   For example, index ij0 enables access to the face j-th single triangle first vertex,
   *   which coordinates are X = iVertices[ij0], Y = iVertices[ij0 + 1] and Z = iVertices[ij0 + 2], and
   *   which normal has coordinates Nx = iNormals[ij0], Ny = iNormals[ij0 + 1] and Nz = iNormals[ij0 + 2].
   * @param oNbTriangle
   *    The number of single triangles actually filled.
   * @param ioTriangleStripIndice
   *    Array used to store the triangles strips vertices. Each field contains a
   *    vertex index, in the <tt>ioVertices</tt> array.  As, we find, in the
   *    ioVertices array, the XYZ coordinates for each
   *    vertex, the indices used to designate the vertices are multiples of three.
   *    <pre>
   *
   *
   *                   ----------------------
   *                  | ioTriangleStripIndice|
   *                   ----------------------
   *                  |          i00         |   }
   *                  |          i01         |   } first triangle strip defined
   *                  |           .          |   } by the first n1 indices
   *                  |           .          |   }
   *                  |          i0n1        |   }
   *                  |           .          |
   *                  |           .          |
   *                  |           .          |   
   *                  |          ij0         |   }
   *                  |          ij1         |   }
   *                  |           .          |   } triangle strip j
   *                  |           .          |   } with nj vertices
   *                  |          ijnj        |   }
   *                   ----------------------
   *
   *
   *    </pre> 
   *    For example, index ij0 allows to access to the j-th strip first vertex 
   *    wich coordinates are X = ioVertices[ij0], Y = ioVertices[ij0 + 1] and Z = ioVertices[ij0 + 2], and
   *    which normal coordinates are Nx = ioNormals[ij0], Ny = ioNormals[ij0 + 1] and Nz = ioNormals[ij0 + 2].
   * @param oNbTriangleStrip
   *    The number of triangles strips actually filled.
   * @param ioNbVertexPerTriangleStrip
   *    Array containing the number of vertices for each triangle strip.
   *    The number of values of this array is equal to <tt>oNbTriangleStrip</tt>. For example, the first strip
   *    is made with <tt>ioNbVertexPerTriangleStrip[0]</tt> vertices.
   *    <pre>
   *                ---------------------------
   *               |ioNbVertexPerTriangleStrip |
   *                ---------------------------
   *               |             n1            |
   *               |             .             |
   *               |             .             |   m = Number of triangle strips(oNbTriangleStrip)
   *               |             nm            |   nm = number of vertices of the m-th strip. (ioNbVertexPerTriangleStrip[m]
   *                ---------------------------    
   *
   *   </pre>
   * @param ioTriangleFanIndice
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
   * @param oNbTriangleFan
   *    The number of triangle fans actually filled.
   * @param ioNbVertexPerTriangleFan
   *    Array containing the number of vertices for each face triangles fan.
   *    The size of this array is equal to <tt>oNbTriangleFan</tt>. For example, the first fan
   *    is made with <tt>ioNbVertexPerTriangleStrip[0]</tt> vertices.
   *    <pre>
   *                ---------------------------
   *               | ioNbVertexPerTriangleFan  |
   *                ---------------------------
   *               |             n1            |
   *               |             .             |
   *               |             .             |   m = Number of triangle fans(oNbTriangleFan)
   *               |             nm            |   nm = number of vertices of the m-th fan. (ioNbVertexPerTriangleFan[m]
   *                ---------------------------    
   *
   *   </pre>
   * @param ioEdgeIndice
   *    Array used to store the edges vertices. Each field contains a
   *    vertex index, in the oVertices array.  As, we find, in the
   *    <tt>oVertices</tt> array, the XYZ coordinates for each
   *    vertex, the indices used to designate the vertices are multiples of three.
   *    <pre>
   *
   *
   *                   --------------
   *                  | ioEdgeIndice |
   *                   --------------
   *                  |      i00     |   } first edge defined by the first
   *                  |      i01     |   } two indices
   *                  |       .      |
   *                  |       .      |
   *                  |       .      |   
   *                  |      in0     |   } last edge defined by the last
   *                  |      in1     |   } two indices.
   *                   --------------
   *
   *
   *    </pre> 
   *    For example, index ij0 allows to access to the face j-th edge first vertex
   *    wich coordinates are X = oVertices[ij0], Y = oVertices[ij0 + 1] and Z = oVertices[ij0 + 2], and
   *    which normal coordinates are Nx = oNormals[ij0], Ny = oNormals[ij0 + 1] and Nz = oNormals[ij0 + 2].
   * @param oNbEdge
   *    The number of edge indices actually filled. Should be a multiple of two.
   */
  virtual HRESULT TesselateElement ( CATMSHElement * iElement, float iShrink, int iExactMode,
                                     float * ioVertices, int & oVerticesArraySize,
                                     float * ioNormals, int & oNormalsArraySize,
                                     int * ioTriangleIndice, int & oNbTriangle,
                                     int * ioTriangleStripIndice, int & oNbTriangleStrip,
                                     int * ioNbVertexPerTriangleStrip, int * ioTriangleFanIndice,
                                     int & oNbTriangleFan, int * ioNbVertexPerTriangleFan,
                                     int * ioEdgeIndice, int & oNbEdge ) const = 0;
};

CATDeclareHandler ( CATIMSHTesselation, CATBaseUnknown );

#endif
