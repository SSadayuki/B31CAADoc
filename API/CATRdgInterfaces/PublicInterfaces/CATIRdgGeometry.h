#ifndef CATIRdgGeometry_h
#define CATIRdgGeometry_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRdgItfCPP.h"
#include "CATIRdgObject.h"
#include "sequence_CATBaseUnknown_ptr.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRdgItfCPP IID IID_CATIRdgGeometry;
#else
extern "C" const IID IID_CATIRdgGeometry;
#endif

/** 
 * Interface for scene geometry.
 * <b>Role</b>:
 * This is the interface that every Geometric rep implements.
 * It is used to access the data needed for rendering.
 */

class ExportedByCATRdgItfCPP CATIRdgGeometry : public CATIRdgObject
{
/** @nodoc */
  CATDeclareInterface;

  public:

/**
 * Returns the face count.
 * @param oCount
 *   The count of faces.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetFaceCount(int &oCount) = 0;

/**
 * Returns the face groups.
 * @param oFaceGroups
 *   The array containing the list of face index 
 *   belonging to each group. Faces with the same
 *   color belong to the same group.
 * @param oGroupSize
 *   The size of each group. 
 * @param oGroupCount
 *   The count of groups. 
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetFaceGroups(int ***oFaceGroups, int **oGroupSize, int &oGroupCount) = 0;

/**
 * Returns the bounding box of a face.
 * @param iFace
 *   The face index. The index ranges from
 *   <code>0.</code> to <code>FaceCount-1</code>.
 * @param oMin
 *   The min corner.
 * @param oMax
 *   The max corner.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetFaceBoundingBox(int iFace, float oMin[3], float oMax[3]) = 0;

/**
 * Returns the material attached to the face.
 * @param iFace
 *   The face index. The index ranges from
 *   <code>0.</code> to <code>FaceCount-1</code>.
 * @param oMaterial
 *   The material attached. After use, a Release() must be made.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetFaceMaterial(int iFace, CATIRdgMaterial **oMaterial) = 0;

/**
 * Returns the stickers attached to the face.
 * @param oStickers
 *   The list of stickers. After use, a Release() must be made 
 *   on each element and the list must be deleted.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetFaceStickers(int iFace, CATLISTP(CATBaseUnknown) **oStickers) = 0;

/**
 * Returns the tesselation data from the geometry.
 * @param iFace
 *   The face index. The index ranges from
 *   <code>0.</code> to <code>FaceCount-1</code>.
 * @param oAllocate
 *    Flag specifiying whether retrieved data is copied or not.
 *    <br><b>Legal values</b>:
 *      <dl>
 *        <dt>1</dt>
 *          <dd>retrieved data is copied.</dd>
 *        <dt>0</dt>
 *          <dd>retrieves references on data.</dd>
 *      </dl>
 *    oAllocate flag is always returned equal to 0: Get() only
 *    retrieves references on stored data.
 * @param oVertices
 *    Retrieves an array made of face vertices coordinates: XYZXYZXYZ...
 *    Its size is equal to three times the geometry vertices number.
 * @param oVerticesArraySize
 *    Retrieves the size, in floats, of the <tt>oVertices</tt> array. Equal to three times the
 *    vertices number.
 *    If information on vertices is shared with another element,
 *    returned size for this parameter is equal to 0.
 * @param oNormals
 *    Retrieves an array made of normals coordinates. It is organized as <tt>oVertices</tt> : one vertex has exactly
 *    one normal at the same field entry.
 * @param oNormalsArraySize
 *    Retrieves The size, in floats, of the <tt>oNormal</tt> array. Equal to three times the number
 *    of normals.
 *    If information on normals is shared with another element,
 *    returned size for this parameter is equal to 0.
 * @param oTriangleIndices
 *    Retrieves the array used to store the single triangles vertices. Each of its field represents
 *    a vertex index, in the <tt>oVertices</tt> array.
 *    As,  we find, in the <tt>*oVertices</tt> array, the XYZ coordinates for each
 *    vertex, the indices used to designate the vertices are multiples of three.
 *    So, the first three indices of the *oTriangleIndices array, are the indices of the geometry first
 *    single triangle three vertices.
 *    <pre>
 *
 *                 -----------------       
 *                |*oTriangleIndices |
 *                 -----------------
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
 *    For example, index ij0 enables access to the geometry j-th single triangle first vertex,
 *    which coordinates are X = *oVertices[ij0], Y = *oVertices[ij0+1] and Z = *oVertices[ij0+2], and
 *    which normal has coordinates Nx = *oNormals[ij0], Ny = *oNormals[ij0+1] and Nz = *oNormals[ij0+2].
 * @param oNbTriangle
 *    Retrieves the number of single triangles in the geometry. 
 * @param oTriangleStripIndices
 *    Retrieves the array used to store the geometry triangles strips vertices. Each field contains a
 *    vertex index, belonging to one of the strips, in the oVertices array.  As, we find, in the
 *    <tt>oVertices</tt> array, the XYZ coordinates for each
 *    vertex, the indices used to designate the vertices are multiples of three.
 *    <pre>
 *
 *
 *                   ----------------------
 *                  | oTriangleStripIndices |
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
 *    For example, index ij0 allows to access to the geometry j-th strip first vertex 
 *    wich coordinates are X = *oVertices[ij0], Y = *oVertices[ij0 + 1] and Z = *oVertices[ij0 + 2], and
 *    which normal coordinates are Nx = *oNormals[ij0], Ny = *oNormals[ij0 + 1] and Nz = *oNormals[ij0 + 2].
 * @param oNbTriangleStrip
 *    Retrieves the number of geometry triangles strips.
 * @param oNbVertexPerTriangleStrip
 *    Retrieves an array containing the number of vertices for each geometry triangles strip.
 *    The size of this array is equal to <tt>*oNbTriangleStrip</tt>. For example, the first strip
 *    is made with <tt>*oNbVertexPerTriangleStrip[0]</tt> vertices.
 *    <pre>
 *                --------------------------
 *               |*oNbVertexPerTriangleStrip|
 *                --------------------------
 *               |             n1           |
 *               |             .            |
 *               |             .            |   m = Number of triangle strips(*oNbTriangleStrip)
 *               |             nm           |   nm = number of vertices of the m-th strip. (*oNbVertexPerTriangleStrip[m]
 *                --------------------------    
 *
 *   </pre>
 * @param oTriangleFanIndices
 *    Retrieves the array used to store the geometry triangles fans vertices. Each field contains a
 *    vertex index, belonging to one of the fans, in the <tt>oVertices</tt> array.  As, we find, in the
 *    <tt>oVertices</tt> array, the XYZ coordinates for each
 *    vertex, the indices used to designate the vertices are multiples of three.
 *    <pre>
 *
 *
 *                   ----------------------
 *                  | *oTriangleFanIndices  |
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
 *    For example, index ij0 allows to access to the geometry j-th fan first vertex
 *    wich coordinates are X = *oVertices[ij0], Y = *oVertices[ij0 + 1] and Z = *oVertices[ij0 + 2], and
 *    which normal coordinates are Nx = *oNormals[ij0], Ny = *oNormals[ij0 + 1] and Nz = *oNormals[ij0 + 2].
 *    Each ij0, j in [0, jn], represents the j-th fan center.
 * @param oNbTriangleFan
 *    Retrieves the number of geometry triangles fans.
 * @param oNbVertexPerTriangleFan
 *    Retrieves the array containing the number of vertices for each 3D bouning GP triangles fan.
 *    The size of this array is equal to <tt>*oNbTriangleFan</tt>. For example, the first fan
 *    is made with <tt>*oNbVertexPerTriangleStrip[0]</tt> vertices.
 *    <pre>
 *                --------------------------
 *               | *oNbVertexPerTriangleFan |
 *                --------------------------
 *               |             n1           |
 *               |             .            |
 *               |             .            |   m = Number of triangle fans(*oNbTriangleFan)
 *               |             nm           |   nm = number of vertices of the m-th fan. (*oNbVertexPerTriangleFan[m]
 *                --------------------------    
 *
 *   </pre>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetFace(int     iFace,
                            int    *oAllocate,
                            float **oVertices,
                            int    *oVerticesArraySize,
                            float **oNormals,
                            int    *oNormalsArraySize,
                            int   **oTriangleIndices,
                            int    *oNbTriangle,
                            int   **oTriangleStripIndices,
                            int    *oNbTriangleStrip,
                            int   **oNbVertexPerTriangleStrip,
                            int   **oTriangleFanIndices,
                            int    *oNbTriangleFan,
                            int   **oNbVertexPerTriangleFan) = 0;

/**
 * Clears tesselation data by deallocating memory.
 * @param iFace
 *   The face index. The index ranges from
 *   <code>0.</code> to <code>FaceCount-1</code>.
 * @param iAllocate
 *   Flag to specify whether the data you are passing on were
 *   allocated by this geometry or not.
 *    <br><b>Legal values</b>:
 *      <dl>
 *        <dt>1</dt>
 *          <dd>passed data were allocated by this geometry and must be deallocated</dd>
 *        <dt>0</dt>
 *          <dd>passed data were not allocated by this geometry and nothing is done</dd>
 *      </dl>
 * @param iVertices
 *   Array of geometry vertices coordinates.
 * @param iVerticesArraySize
 *   Size of <tt>iVertices</tt> array. If equal to zero, <tt>iVertices</tt> is not deleted.
 * @param iNormals
 *   Array of geometry normals coordinates.
 * @param iNormalsArraySize
 *   Size of <tt>iNormals</tt> array. If equal to zero, <tt>iNormals</tt> is not deleted.
 * @param iTriangleIndices
 *   Array of geometry single triangles vertices coordinates.
 * @param iNbTriangle
 *   The number of single triangles in the geometry. If equal to zero, <tt>iTriangleIndices</tt>
 *   is not deleted.
 * @param iTriangleStripIndices
 *   Array of geometry strips triangles vertices coordinates.
 * @param iNbTriangleStrip
 *   The number of triangles strips in the geometry. If equal to zero, <tt>iTriangleStripIndices</tt> and
 *   <tt>iNbVertexPerTriangleStrip</tt> are not deleted.
 * @param iNbVertexPerTriangleStrip
 *   Array containing the number of vertices for each geometry triangles strip. 
 * @param iTriangleFanIndices
 *   Array of geometry fans triangles vertices coordinates.
 * @param iNbTriangleFan
 *   The number of triangles fans in the geometry. If equal to zero, <tt>iTriangleFanIndices</tt> and
 *   <tt>iNbVertexPerTriangleFan</tt> are not deleted.
 * @param iNbVertexPerTriangleFan
 *   Array containing the number of vertices for each geometry triangles fan. 
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT Clear(int     iFace,
                          int    *iAllocate,
                          float **iVertices,
                          int    *iVerticesArraySize,
                          float **iNormals,
                          int    *iNormalsArraySize,
                          int   **iTriangleIndices,
                          int    *iNbTriangle,
                          int   **iTriangleStripIndices,
                          int    *iNbTriangleStrip,
                          int   **iNbVertexPerTriangleStrip,
                          int   **iTriangleFanIndices,
                          int    *iNbTriangleFan,
                          int   **iNbVertexPerTriangleFan) = 0;

/**
 * Returns the number of textures on a face.
 * @param iFace
 *   The face index. The index ranges from
 *   <code>0.</code> to <code>FaceCount-1</code>.
 * @param oTextureCount
 *   Texture count.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetFaceTextureCount(int     iFace,
                                        int    &oTextureCount) = 0;

/**
 * Returns the texture coordinates of a face for a given texture.
 * @param iFace
 *   The face index. The index ranges from
 *   <code>0.</code> to <code>FaceCount-1</code>.
 * @param iTexture
 *   The texture index. The index ranges from
 *   <code>0.</code> to <code>TextureCount-1</code>.
 * @param oTextureCoord
 *    Array of texture coordinates.
 *    Each vertex has an associated position in the texture map. 
 *    The number of texture coordinates groups is always equal to the number of vertices. 
 * @param oTextureCoordDim
 *    Retrieves the number of coordinates per vertex.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetFaceTextureCoordinates(int     iFace,
                                              int     iTexture,
                                              float **oTextureCoord,
                                              int    *oTextureCoordDim) = 0;
};

/** @nodoc */
CATDeclareHandler(CATIRdgGeometry,CATIRdgObject);

#endif
