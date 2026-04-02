#ifndef CATInterfereSurface_H
#define CATInterfereSurface_H
//----------------------------------------------------------------------------
//
// CATIA Version 5 Release R201 Framework InterferenceInterfaces
// Copyright Dassault Systemes 2005
//----------------------------------------------------------------------------
//
// Creation: 
// ---------
//           2005 - DBS
//
//----------------------------------------------------------------------------

/**
 * @CAA2Level L0
 * @CAA2Usage U1
 */


#include "CATInterference.h"

#include "IUnknown.h"


/**
  * Class to describe surface interference.<br>
  * <b>Role</b>: Class to describe the surface interference.<br>
  * To use with CATInterfereModel
  *
  */
class ExportedByCATInterferenceInterfaces CATInterfereSurface
{

  public:

  //-----------------------------------------------------------------------------------------
  /**
   * GetNbFace - Get number of face of [CATInterfereSurface].
   *
   * @return
   *        number of face
   *
   */
  //-----------------------------------------------------------------------------------------
      virtual
      int GetNbFace()   const = 0;
        
  //-----------------------------------------------------------------------------------------
  /**
   * GetFace - Get coordinate of the face.
   *
   * Data for a 3D face graphic primitive from the face vertices coordinates list (as CAT3DFaceGP)
   * 
   * @param opVertices
   *    Array made of vertices coordinates: XYZXYZXYZ...
   *    Its size is equal to three times the face vertices number.
   *
   * @param oVerticesArraySize
   *    The size, in floats, of the <tt>*opVertices</tt> array. Equal to three times the
   *    vertices number.
   *
   * @param opNormals
   *    Array made of normals coordinates. It is organized like <tt>opVertices</tt> : one vertex has exactly
   *    one normal at the same field entry.
   *
   * @param oNormalsArraySize
   *    The size, in floats, of the <tt>iNormal</tt> array. Equal to three times the number
   *    of normals.
   *
   * @param opTriangleIndices
   *    This array is used to store the single triangles vertices. Each of its field represents
   *    a vertex index in the <tt>*opVertices</tt> array.
   *    As we find, in the <tt>*opVertices</tt> array, the XYZ coordinates for each
   *    vertex, the indices used to designate the vertices are multiples of three.
   *    So, the first three indices of the <tt>*opTriangleIndices</tt> array, are the three vertices indices of the face first
   *    single triangle.
   *    <pre>
   *
   *                 -----------------       
   *                | *opTriangleIndices|
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
   *    For example, index ij0 enables access to the face j-th single triangle first vertex,
   *    which coordinates are X = (*opVertices)[ij0], Y = (*opVertices)[ij0 + 1] and Z = (*opVertices)[ij0 + 2], and
   *    which normal has coordinates Nx = (*opNormals)[ij0], Ny = (*opNormals)[ij0 + 1] and Nz = (*opNormals)[ij0 + 2].
   * @param oNbTriangle
   *    The number of single triangles in the face. 
   *
   * @param opTriangleStripIndices
   *    Array used to store the face triangles strips vertices. Each field contains a
   *    vertex index, in the <tt>*opVertices</tt> array.  As, we find, in the
   *    opVertices array, the XYZ coordinates for each
   *    vertex, the indices used to designate the vertices are multiples of three.
   *    <pre>
   *
   *
   *                   ----------------------
   *                  | *opTriangleStripIndices|
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
   *    For example, index ij0 allows to access to the face j-th strip first vertex 
   *    wich coordinates are X = (*opVertices)[ij0], Y = (*opVertices)[ij0 + 1] and Z = (*opVertices)[ij0 + 2], and
   *    which normal coordinates are Nx = (*opNormals)[ij0], Ny = (*opNormals)[ij0 + 1] and Nz = (*opNormals)[ij0 + 2].
   * @param oNbTriangleStrip
   *    The number of face triangles strips.
   *
   * @param opNbVertexPerTriangleStrip
   *    Array containing the number of vertices for each face triangles strip.
   *    The size of this array is equal to <tt>oNbTriangleStrip</tt>. For example, the first strip
   *    is made with <tt>opNbVertexPerTriangleStrip[0]</tt> vertices.
   *    <pre>
   *                --------------------------
   *               |*opNbVertexPerTriangleStrip |
   *                --------------------------
   *               |             n1           |
   *               |             .            |
   *               |             .            |   m = Number of triangle strips(oNbTriangleStrip)
   *               |             nm           |   nm = number of vertices of the m-th strip. (*opNbVertexPerTriangleStrip)[m]
   *                --------------------------    
   *
   *   </pre>
   *
   * @param opTriangleFanIndices
   *    Array used to store the face triangles fans vertices. Each field contains a
   *    vertex index, in the *opVertices array.  As, we find, in the
   *    <tt>*opVertices</tt> array, the XYZ coordinates for each
   *    vertex, the indices used to designate the vertices are multiples of three.
   *    <pre>
   *
   *
   *                   ----------------------
   *                  | *opTriangleFanIndices   |
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
   *    wich coordinates are X = (*opVertices)[ij0], Y = (*opVertices)[ij0 + 1] and Z = (*opVertices)[ij0 + 2], and
   *    which normal coordinates are Nx = (*opNormals)[ij0], Ny = (*opNormals)[ij0 + 1] and Nz = (*opNormals)[ij0 + 2].
   *    Each ij0, j in [0, jn], represents the j-th fan center.
   *
   * @param oNbTriangleFan
   *    The number of face triangles fans.
   *
   * @param opNbVertexPerTriangleFan
   *    Array containing the number of vertices for each face triangles fan.
   *    The size of this array is equal to <tt>oNbTriangleFan</tt>. For example, the first fan
   *    is made with <tt>opNbVertexPerTriangleStrip[0]</tt> vertices.
   *    <pre>
   *                --------------------------
   *               | *opNbVertexPerTriangleFan  |
   *                --------------------------
   *               |             n1           |
   *               |             .            |
   *               |             .            |   m = Number of triangle fans(oNbTriangleFan)
   *               |             nm           |   nm = number of vertices of the m-th fan. ((*opNbVertexPerTriangleFan)[m]
   *                --------------------------    
   *
   *   </pre>
   *
   * @return
   *        HRESULT
   *
   */
  //-----------------------------------------------------------------------------------------
      virtual
      HRESULT GetFace(int             iNumFace,
                      const float ** opVertices,                              // Point array.  
                            int    *  oVerticesArraySize,                     // Number of points (3 coordinates/vertex).  

                      const float ** opNormals,                               // Normal array.                             
                            int    *  oNormalsArraySize,                      // Number of normals (3 coordinates/normal). 
                      
                      const int   ** opTriangleIndices,                       // Indexes defining triangles.               
                            int    *  oNbTriangle,                            // Number of defined triangles.              
                      
                      const int   ** opTriangleStripIndices,                  // Indexes of the points defining strips.    
                            int    *  oNbTriangleStrip,                       // The number of defined strips.             
                      const int   ** opNbVertexPerTriangleStrip,              // The size of each strip.                   
                      
                      const int   ** opTriangleFanIndices,                    // Indexes of the points defining fans.      
                            int    *  oNbTriangleFan,                         // The number of defined fans.               
                      const int   ** opNbVertexPerTriangleFan) const = 0;     // The size of each fan.                     


  //-----------------------------------------------------------------------------------------
  /**
   * GetRadius - Get radius of Bounding element of the curve.
   *
   * @param oRadius
   *    radius of Bounding element of the curve
   *
   * @return
   *        HRESULT
   *
   */
  //-----------------------------------------------------------------------------------------
      virtual
      HRESULT GetRadius(int     iNumFace,
                        float * oRadius)   const = 0;


  //-----------------------------------------------------------------------------------------
  /**
   * GetCenter - Get center of Bounding element of the curve.
   *
   * @param oCenter
   *    center of Bounding element of the curve
   *
   * @return
   *        HRESULT
   *
   */
  //-----------------------------------------------------------------------------------------
      virtual
      HRESULT GetCenter(int   iNumFace,
                        float oCenter[3])  const = 0;

      
      
      virtual ~CATInterfereSurface();

};

//------------------------------------------------------------------------------------


#endif // CATInterfereSurface_H






