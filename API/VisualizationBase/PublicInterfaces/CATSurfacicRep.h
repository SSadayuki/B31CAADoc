#ifndef CATSurfacicRep_H
#define CATSurfacicRep_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

//******************************************************************************
//  CATIA Version 5 Release 1 Framework VFW2
//  Copyright Dassault Systemes 1996
//******************************************************************************
//  Abstract:
//  ---------
//    CATSurfacicRep manages the following CATIA elements representations:
//      - Solids (exacts or mock-up),
//      - Volumes,
//      - Faces,
//      - Surfaces,
//      - Skins.
//    Nevertheless, this object can manage the visualization of any object that
//    is defined using triangles.
//
//******************************************************************************
//  Usage:   
//  ------
//    The representation of these elements is made through the use of a list of
//    graphic primitives (see CATGraphicPrimitive.h). We therefore have:
//      - A list of CAT3DFaceGPs for the managed faces of the element,
//      - A list of CAT3DEdgeGPs for the edges of the representation.
//    We assume the graphical set of data to be defined from objects that
//    inherits from the CAT3DFaceGP.
//    We also assume the fact that edge information does not require a bounding
//    element.
//
//   Informations on faces:
//   ----------------------
//     The managed faces types do all inherits from the CAT3DBoundingGP that
//     BOTH offers services of:
//       - Bounding sphere definition,
//       - Bounding box definition.
//     See CAT3DBoundingGP for more information on these bounding elements.
//     SurfacicRep --> list( - CAT3DFaceGP
//                           - CAT3DFaceGP
//                           - CAT3DPlanarFaceGP
//                           - CAT3DFaceGP ...
//                         )
//     One graphic attribute set is being created for each element in the list.
//     Each sub element of the list has it own attribute for drawing.
//
//   Information on edges:
//   ---------------------
//     Edges are graphic primitives inherited from the CATGraphicPrimitive
//     class. We can't pack edges within Bags. We only have a list of edges.
//     Edges have a single graphic attribute describing them all.
//     Different groups of edges exists in this Rep. Consult the list below for
//     a complete description.
//
//   Levels Of Detail (LODs):
//   ------------------------
//     The CATSurfacicRep may have MORE THAN ONE REPRESENTATION. We may define
//     LODs in order to improve visualization performances as the distance from
//     the viewer is increasing.
//     These LODs are different geometrics tesselations of the element.The LOD
//     computation process is described in the CATLevelOfDetail.h header file.
//     The LODs don't have the same structure as the original geometry. They are
//     only made of a single CAT3DFaceGP.
//     Each LOD has a sag that is the precision of it's geometry, and a graphic
//     attribute.
//     Each Lod information is enclosed in a structure including everyone of
//     it's definition parameter.
//
//******************************************************************************
//  Inheritance:
//  ------------
//                CATSurfacicRep
//                  CAT3DRep
//                    CATRep 
//                      CATExtend (SYSTEM framework) 
//
//******************************************************************************

#include "CATViz.h"
#include "CAT3DGeomRep.h"

class CATGeomGPSet;
class CAT3DFaceGP;
class CATGraphicPrimitive;
class CAT3DEdgeGP;
class CAT3DMarkerGP;
class CAT3DLineGP;
class CATBodyIdentificators;
class CAT3DFixedArrowGP;
class CATVizVertexBuffer;
class CATVisGPUStorageManager;
class CAT3DIndexedLineGPVBO;

#include "CATGraphicAttributeSet.h"

#include "CATIAV5Level.h"

//******************************************************************************
// Original surfacic representation element data structure:
// --------------------------------------------------------
//   
//   This structure has the following information:
//     - List of faces,
//     - Face graphic attribute information,
//     - List of edges (DMU edges),
//     - Edge graphic attribute information (one attribute for all edges),
//     - Sag information.
//
//   But you can be more precise for the faces, edges and  vertices:
//     For the faces :
//     - List of faces,   
//     - Face graphic attribute information,
//     - List of isoparametrics lines showing faces,
//     - Isoparametrics graphic attribute information,
//     - List of infinites faces,
//     - Infinite faces graphic attribute information,
//
//     For the edges :
//     - List of boundary edges,
//     - Attribute for all boundary edges,
//     - List of internal sharp edges,
//     - Attribute for all internal sharp edges,
//     - List of internal smooth edges,
//     - Attribute for all internal smooth edges,
//     - List of free edges (wire edges),
//     - Free edges graphic attribute information
//
//     For the vertices:
//     - List of boundary vertices of wires,
//     - Attribute for all boundary vertices,
//     - List of internal sharp vertices of wires,
//     - Attribute for all internal sharp vertices,
//     - List of internal smooth vertices of wires,
//     - Attribute for all internal smooth vertices,
//     - List of surfacic vertices,
//     - Attribute for all surfacic vertices,
//     - List of free vertices,
//     - Free vertices graphic attribute information
//
//   This structure is only useful for original geometry description.
//
//******************************************************************************


/** 
* @nodoc
*/
typedef struct
{
   CAT3DFaceGP             ** face;                     // pointer to faces array
   CATGraphicAttributeSet  ** face_attribut;            // attributs for faces
   int                        nface;                    // number of faces
   int                        nedge;                    // number of edges
   CAT3DEdgeGP             ** edge;                     // pointer to edges array
   CATGraphicAttributeSet     edges_attribut;           // attribut for edges

   int                        nbiso;                    // number of isopars
   int                      * nbisoface;                // nb of isopars per face
   CATGraphicAttributeSet  ** iso_attribut;             // attributs for isopars
   CAT3DLineGP            *** iso;                      // isopars primitives
   
   CATGeomGPSet             * gpSet;

} SurfacicRepGeometry;


//******************************************************************************
// Level Of Detail representation data structure:
// ----------------------------------------------
//   This structure has the following information:
//     - One single face: CAT3DFaceGP,
//     - One graphic attribute,
//     - A sag.
//   This structure is only useful for LOD geometry description.
//
//******************************************************************************
/** 
* @nodoc
*/
typedef struct
{
   CAT3DFaceGP               *lod_face;                 // Definition of the LOD
   CATGraphicAttributeSet    *lod_attribut;             // Attribut for the face
   float                      lod_sag;                  // Geometry precision
   
} SurfacicRepLOD;


//******************************************************************************
//*** CATSurfacicRep: **********************************************************
//******************************************************************************

/** 
* Class to define a Surfacic representation.
*/
class ExportedByCATViz CATSurfacicRep : public CAT3DGeomRep
{
   /** @nodoc */
   friend class CATMarshallableSurfacicRep;
   /** @nodoc */
   friend class CATDmuStreamSurfacicRep;
   /** @nodoc */
   friend class CATVrmlMakerSurfacicRep;
   /** @nodoc */
   friend class CATVrml2MakerSurfacicRep;
   
   CATDeclareClass;
   
   
public:
   
   // Construction of an empty representation and destruction:
   // --------------------------------------------------------
   
   /**
     * Class constructor.
     */
   CATSurfacicRep  (void);
   
   /** @nodoc : deprecated constructor */
   CATSurfacicRep  (CATModelIdentificator &id, void *ctrl);
      
   /**
     * Class destructor.
     */
   ~CATSurfacicRep (void);
#ifdef CATIAV5R26  
   /** Constructs a representation. */
   static CATSurfacicRep* CreateRep();
#endif
   // Drawing and texturing:
   // ----------------------
   
   /** @nodoc */
   virtual void DrawShading   (CATRender &render, int inside);
   /** @nodoc */
   virtual void DrawPath      (CATRender &render,int inside,CATRepPath &path);
   /** @nodoc */
   virtual void UpdateTextureCoordinates (CATMappingOperator* iOperator = NULL);
   
   // IsUVMeshToCompute
   // -----------------
   // scan alls the GP. if one is without uv the answer is yes
   
   /** @nodoc */
   virtual int         IsUVMeshToCompute() const ;
   
   
   // INTERFACE METHODS
   /////////////////////
   // Functions for the original geometry (called Geom):
   // --------------------------------------------------
   //   - GroupFaces: Allocates the given parameter list filled with the
   //     original geometry faces own triangulation parameters. The allocated
   //     memory is to be freed by the user. Parameter list is the same as for
   //     the CAT3DFaceGP::Get method plus texture. If no texture array is given
   //     GroupFaces will not take care of texture informations.
   //     WARNING: The result will not be a planar
   //     face.
   //   - AddGeom*: Only a reference to the existing data is stored. Data is
   //     not duplicated within the object.
   //   - ReplaceGeomElt: the <iInd> gp becomes <iNewGP>. the old <iInd> gp is
   //     released. 
   //   - DominantAttribute: Returns the attribut that is found the most in the
   //     representation faces list. This method do not take care of the
   //     list of edges in the computation. The returned attribut is a pointer
   //     to a face attribute. Do not delete it ! If the representation has no
   //     faces, the method returns NULL.
   //   - GeomDrawingEdgeAttribute:Computes the best attribute for drawing,
   //     considering the visual mode of the render.
   
   /** 
    * Retrieves the number of faces owned by this SurfacicRep.
    * @return
    *    The number of faces owned by this surfacic rep
    */
   virtual int                        GeomNumberOfFaces       (void)                     const;
   
   /** 
    * Retrieves one of the faces owned by this SurfacicRep.
    * @param num_face
    *  The index of the face to be retrieved. Index range : 0 -> @href #GeomNumberOfFaces ()-1
    * @return
    *    The @href CAT3DFaceGP at index 'num_face'
    */
   virtual CAT3DFaceGP            *   GeomFace                (const int num_face)       const;
   
   /** 
    * Retrieves one of the faces graphic attribute owned by this SurfacicRep for read purpose.
    * @param num_face
    *  The index of the face's graphic attribute to be retrieved. Index range : 0 -> @href #GeomNumberOfFaces ()-1
    * @param orGA
    *  The graphic attribute that is copied from the face's graphic attribute whose index is num_face.
    * @return
    *  S_OK if everything went fine, E_FAIL if there is no graphic attribute for this face index.
    */
   virtual HRESULT                    GetGeomFaceAttribut     (const int num_face,CATGraphicAttributeSet& orGA)       const;

   /**
    * Set the faces graphic attribute owned by this SurfacicRep.
    * Usage : retreive a copy of the face graphic attribute using @href #GetGeomFaceAttribut, 
    *         modify the copy as you need, and call @href #SetGeomFaceAttribut with the modified copy.
    * @param num_face
    *  The index of the face's graphic attribute to be set. Index range : 0 -> @href #GeomNumberOfFaces ()-1
    * @param irGA
    *  The graphic attribute to set.
    * @return
    *  S_OK if everything went fine, E_FAIL if there is a problem.
    */
   virtual HRESULT                    SetGeomFaceAttribut     (const int num_face,const CATGraphicAttributeSet& irGA);

   
   /** @nodoc */
   virtual int                        GeomNumberOfEdges       (void)                     const;
   
   /** @nodoc */
   virtual CAT3DEdgeGP            *   GeomEdge                (const int num_edge)       const;

   /** @nodoc :
    * Retrieves the edge graphic attribute owned by this SurfacicRep for read purpose.
    * @param orGA
    *  The graphic attribute that is copied from the edge's graphic attribute.
    * @return
    *  S_OK if everything went fine, E_FAIL if there is a problem.
    */
   virtual HRESULT                    GetGeomEdgesAttribut     (CATGraphicAttributeSet& orGA)       const;

   /** @nodoc :
    * Set the edge graphic attribute owned by this SurfacicRep.
    * Usage : retreive a copy of the edge graphic attribute using @href GetGeomEdgesAttribut, 
    *         modify the copy as you need, and call @href SetGeomEdgesAttribut with the modified copy.
    * @param irGA
    *  The graphic attribute to set.
    * @return
    *  S_OK if everything went fine, E_FAIL if there is a problem.
    */
   virtual HRESULT                    SetGeomEdgesAttribut     (const CATGraphicAttributeSet& irGA);
   
   /** 
    * Retrieves the number of elements of a specific geometric type owned by this SurfacicRep.
    * @param iType
    *    A @href CATGeomType type of element to count
    * @return
    *    The number of elements of type @href CATGeomType owned by this surfacic rep
    */
   virtual int                        GeomNumberOfElt         (const CATGeomType iType)  const;
   
   /** 
    * Retrieves an elements of a specific geometric type owned by this SurfacicRep.
    * All returned @href CATGraphicPrimitive types should be check at runtime with IsAKindOf() method.
    * @param iType
    *    A @href CATGeomType type of element to retrieve
    * @param num_elt
    *    The index of the element to be retrieved. Index range : 0 -> @href #GeomNumberOfElt (iType)-1
    * @return
    *    The @href CATGraphicPrimitive of type 'CATGeomType' at index 'num_elt'
    */
   virtual CATGraphicPrimitive    *   GeomElt                 (const CATGeomType iType,
                                                               const int num_elt      )  const;

   /** 
    * Retrieves the graphic attribute of an elements of a specific geometric type owned by this SurfacicRep, for read purpose.
    * @param iType
    *    A @href CATGeomType type of element to retrieve
    *    WARNING : only Elements of type CATWireEdge, CATFreePoint and CATInfiniteFace
    *    have one graphic attribute per primitive.<br>
    *    Example :<br>
    *    GetGeomEltAttribut(CATBoundaryEdge, 0) and GetGeomEltAttribut(CATBoundaryEdge, 10) will return the same
    *    @href CATGraphicAttributeSet
    * @param num_elt
    *    The index of the element to be retrieved. Index range : 0 -> @href #GeomNumberOfElt (iType)-1
    * @param orGA
    *  The graphic attribute that is copied from the element's graphic attribute.
    * @return
    *  S_OK if everything went fine, E_FAIL if there is no graphic attribute for this element type and index.
    */
   virtual HRESULT                    GetGeomEltAttribut         (const CATGeomType iType,
                                                                  const int num_elt,CATGraphicAttributeSet& orGA   )     const;


   /** 
    * Set the graphic attribute of an elements of a specific geometric type owned by this SurfacicRep.
    * @param iType
    *    A @href CATGeomType type of element to retrieve
    *    WARNING : Only Elements of type CATWireEdge, CATFreePoint and CATInfiniteFace
    *    have one graphic attribute per primitive.<br>
    *    Example :<br>
    *    SetGeomEltAttribut(CATBoundaryEdge, 0) and SetGeomEltAttribut(CATBoundaryEdge, 10) will produce the same effect.
    * @param num_elt
    *    The index of the element to be set. Index range : 0 -> @href #GeomNumberOfElt (iType)-1
    *    If this type has only one graphic attribut, the parameter num_elt is ignored.
    * @param irGA
    *  The graphic attribute to set.
    * @return
    *  S_OK if everything went fine, E_FAIL if there is no graphic attribute for this element type and index.
    */
   virtual HRESULT                     SetGeomEltAttribut        (const CATGeomType iType,
                                                                  const int num_elt,const CATGraphicAttributeSet& irGA  );

   /** @nodoc */
   virtual int                        GeomNumberOfIsos        (void)                     const;

   /** @nodoc */
   virtual CAT3DLineGP           **   GeomIso                 (const int num_face,
                                                               int *oIsoCount )          const;
   /** @nodoc :
    * Retrieves one of the iso graphic attribute owned by this SurfacicRep for read purpose.
    * @param num_iso
    *  The index of the iso's graphic attribute to be retrieved. Index range : 0 -> @href #GeomNumberOfIsos ()-1
    * @param orGA
    *  The graphic attribute that is copied from the iso's graphic attribute whose index is num_iso.
    * @return
    *  S_OK if everything went fine, E_FAIL if there is no graphic attribute for this iso index.
    */
   virtual HRESULT                    GetGeomIsoAttribut     (const int num_iso,CATGraphicAttributeSet& orGA)       const;

   /** @nodoc :
    * Set the iso graphic attribute owned by this SurfacicRep.
    * Usage : retreive a copy of the iso graphic attribute using @href GetGeomIsoAttribut, 
    *         modify the copy as you need, and call @href SetGeomIsoAttribut with the modified copy.
    * @param num_iso
    *  The index of the iso's graphic attribute to be set. Index range : 0 -> @href #GeomNumberOfIsos ()-1
    * @param irGA
    *  S_OK if everything went fine, E_FAIL if there is no graphic attribute for this iso index.
    */
   virtual HRESULT                    SetGeomIsoAttribut     (const int num_face,const CATGraphicAttributeSet& irGA);
   
   
   /**
    * Adds a face to the SurfacicRep.
    * @param face
    *    The face to be added to the SurfacicRep. No AddRef is done on this element.
    * @param att
    *    The face's GraphicAttribute
    * @return
    *    S_OK if everything went fine, E_FAIL if something went wrong and E_OUTOFMEMORY if no more memory was
    *    available to allocate internal data to hold the face<br>
    *    If result is other than S_OK, face is Released() and att is deleted
    */
   virtual HRESULT                    AddGeomFace             (CAT3DFaceGP *face,CATGraphicAttributeSet *att);
   
   /** @nodoc */
   virtual HRESULT                    AddGeomEdge             (CAT3DEdgeGP *edge);
   
   /** @nodoc */
   virtual HRESULT                    SetGeomGPSet            (CATGeomGPSet *gpSet);

   /** @nodoc */
   virtual CATGeomGPSet *             GetGeomGPSet            ();

   /** @nodoc */
   virtual HRESULT                    AddGeomIso              (CAT3DLineGP  **iIso,
                                                               CATGraphicAttributeSet *iAtt,
                                                               int iIsoCount);
   
   /** 
    * Adds an elements of a specific geometric type to this SurfacicRep.
    * @param iType
    *    A @href CATGeomType type of element to add
    * @param iGP
    *    The CATGraphicPrimitive to be added to the SurfacicRep. No AddRef is done on this element.
    * @param iAtt
    *    The face's GraphicAttribute.<br>
    *    WARNING : Elements of type CATWireEdge, CATFreePoint and CATInfiniteFace
    *    can only have one graphic attribute for all primitives.
    * @return
    *    S_OK if everything went fine, E_FAIL if something went wrong and E_OUTOFMEMORY if no more memory was
    *    available to allocate internal data to hold the face<br>
    *    If result is other than S_OK, face is Released() and iAtt is deleted
    */
   virtual HRESULT                    AddGeomElt              (const CATGeomType iType,
                                                               CATGraphicPrimitive *iGP,
                                                               CATGraphicAttributeSet *iAtt=NULL);
   
   /** 
    * Replace an element of a specific geometric type owned by this SurfacicRep by another one.
    * @param iType
    *    A @href CATGeomType type of element to retrieve
    * @param iNewGP
    *    The CATGraphicPrimitive to substitute to the one already contained in the SurfacicRep. No AddRef is done on this element.
    * @param iInd
    *    The index of the element to replace. Index range : 0 -> @href #GeomNumberOfElt (iType)-1
    * @return
    *    Returns S_OK if everything went fine, E_FAIL if something went wrong and E_OUTOFMEMORY if no more memory was available to allocate internal data to hold the element.
    */
   virtual HRESULT                    ReplaceGeomElt          (const CATGeomType iType,
                                                               CATGraphicPrimitive *iNewGP,
                                                               const int iInd) ;
   
   /** @nodoc */
   virtual int                        IsSurfacic              (void)                     const;

   // Functions for levels of detail (called LOD):
   // --------------------------------------------
   //   - AddLOD: Only references to existence are stored. Data is not being
   //     duplicated. 
   
   /** @nodoc */
   virtual int                        NumberOfLODs            (void)                     const;
   /** @nodoc */                                              
   virtual CAT3DFaceGP     *          LODFace                 (const int num_lod)        const;
   
   /** @nodoc :
    * Retrieves one of the lod graphic attribute owned by this SurfacicRep for read purpose.
    * @param num_lod
    *  The index of the lod's graphic attribute to be retrieved. Index range : 0 -> @href #NumberOfLODs ()-1
    * @param orGA
    *  The graphic attribute that is copied from the lod's graphic attribute whose index is num_lod.
    * @return
    *  S_OK if everything went fine, E_FAIL if there is no graphic attribute for this lod index.
    */
   virtual HRESULT                    GetLODFaceAttribut     (const int num_lod,CATGraphicAttributeSet& orGA)       const;

   /** @nodoc :
    * Set the lod graphic attribute owned by this SurfacicRep.
    * Usage : retreive a copy of the lod graphic attribute using @href GetLODFaceAttribut, 
    *         modify the copy as you need, and call @href SetLODFaceAttribut with the modified copy.
    * @param num_lod
    *  The index of the lod's graphic attribute to be set. Index range : 0 -> @href #NumberOfLODs ()-1
    * @param irGA
    *  S_OK if everything went fine, E_FAIL if there is no graphic attribute for this lod index.
    */
   virtual HRESULT                    SetLODFaceAttribut     (const int num_lod,const CATGraphicAttributeSet& irGA);
   

   /** @nodoc */                                              
   virtual float                      LODSag                  (const int num_lod)        const;

   ///////////// END OF INTERFACE METHODS  ////////////////////////////////////////////////////
   
   /** @nodoc */
   HRESULT AddLOD (CAT3DFaceGP *lod_face,CATGraphicAttributeSet *att, const float sag);

   /** @nodoc */
   CATGraphicAttributeSet *   DominantAttribute          (void)                  const;
   
   /** @nodoc */
   CATGraphicAttributeSet     GeomDrawingEdgeAttribute   (CATRender &render,
                                                          CATGeomType edge_type,
                                                          CATGraphicAttributeSet **iopDominant_att=NULL) const;
   /** @nodoc */
   void GroupFaces ( float ** vertices,
                     int    * vertices_array_size,
                     float ** normals,
                     int    * normals_array_size,
                     int   ** triangle_indice,
                     int    * nb_triangles,
                     int   ** strip_indices,
                     int    * nb_triangle_strips,
                     int   ** strip_sizes,
                     int   ** fan_indices,
                     int    * nb_triangle_fans,
                     int   ** fan_sizes,
                     float ** textures = NULL);
   

   // Advanced methods:
   // -----------------
   //   - SetEditMode:
   //       . 0: Representation parameters are stripped and stored in a single
   //            face. Lods are stripped the same way, to reduced the amount of
   //            consumed memory.
   //       . 1: Each face has it's own informations that can be accessed
   //            separately. This mode consumes more memory than the previous
   //            one. Local changes in the representation are enabled.
   
   /** 
    * Changes the SurfacicRep's Edit (strip) mode.
    * @param edit_mode
    *    The EditMode into which the surfacic rep will switch :
    *    <br><b>Legal values</b>:
    *    <dl>
    *      <dt>1</dt>
    *        <dd>The SurfacicRep will switch to exploded (unstripped) mode (ie all faces will own their vertices)</dd>
    *      <dt>0</dt>
    *        <dd>The SurfacicRep will switch to stripped mode.
    *            In this mode the vertices are no longer owned by the faces and edges,
    *            but are merged at the SurfacicRep level.</dd>
    *    </dl>
    * @return
    *    S_OK if everything went fine, E_FAIL otherwise
    */
   HRESULT SetEditMode (int edit_mode);

   /** 
    * Retrieve the SurfacicRep's current Edit (strip) mode.
    * @return
    *    1 if in exploded (unstripped) mode and 0 if in stripped mode
    */
   inline int EditMode     (void);
   
   // Managing outlines:
   // ------------------
   //   The graphical attribute that should be used for outlines is the same as
   //   the one used for all edges of the representation.
   
   /** @nodoc */
   CATOutlineBuilder      *GetOutlineBuilder (void);
   
   // temporary
   // ---------
   /** @nodoc */
   inline static void      SetBorderEdgeMode(const int iMode = 0);
   /** @nodoc */
   inline static void      SetBorderEdgeAttributeSet(const CATGraphicAttributeSet & iAtt);
   /** @nodoc */
   inline static CATGraphicAttributeSet & GetBorderEdgeAttributeSet();
   
   /**
   * Gets the number of vertices owned by the CATSurfacicRep
   * when it is in EditMode = 0.
   * If it is in EditMode = 1, each face owns its vertices, so
   * the returned value is 0.
   */
   const int GetNumberOfVertices();
   
   /**
   * Gets the vertices array when edit mode = 0.
   * If edit mode = 1, returned value is NULL
   */
   const float * GetVertices();
   
   /**
   * Gets the number of normals owned by the CATSurfacicRep
   * when it is in EditMode = 0.
   * If it is in EditMode = 1, each face owns its vertices, so
   * the returned value is 0.
   */
   const int GetNumberOfNormals();
   
   /**
   * Gets the normals array when edit mode = 0.
   * If edit mode = 1, returned value is NULL
   */
   const float * GetNormals();
   
   /** @nodoc */
   static void setArrowGP(CAT3DFixedArrowGP* tmpGP);
   
   /** @nodoc */
   int GetGPDimension(int index);
   
   /** @nodoc */
   virtual CATGraphicPrimitive* GetGeomElement(int iIndice);
   /** @nodoc */
   virtual void SetGeomElement(int iIndice, CATGraphicPrimitive * gp);
   /** @nodoc */
   virtual int GetGeomIndex(const CATGraphicPrimitive * gp);

   /** @nodoc */
   virtual  HRESULT GetGraphicAttribut(int iIndice,CATGraphicAttributeSet& orGA); 

   /** @nodoc 
    * Usage : retreive a copy of the edge graphic attribute using @href GetGraphicAttribut, 
    *         modify the copy as you need, and call @href SetGraphicAttribut with the modified copy.
    */
   virtual  HRESULT SetGraphicAttribut(int iIndice,const CATGraphicAttributeSet& irGA);


   /** @nodoc */
   void CleanLODs();
   
   /** @nodoc */
   virtual CATVizVertexBuffer * GetVertexBuffer() const;

   /** @nodoc */
   void SetVertexBuffer(CATVizVertexBuffer *iVB);


   /////////////////////////////////////////////DEPRECATED METHODS ////////////////////////////////////
   /** 
    * @nodoc : use @href #GetGeomFaceAttribut or @href #SetGeomFaceAttribut instead
    * Retrieves one of the faces graphic attribute owned by this SurfacicRep.
    * @param num_face
    *  The index of the face's graphic attribute to be retrieved. Index range : 0 -> @href #GeomNumberOfFaces ()-1
    * @return
    *    The @href CATGraphicAttributeSet at index 'num_face'
    */
   virtual CATGraphicAttributeSet *   GeomFaceAttribut        (const int num_face)       const;

   /** @nodoc : deprecated method V5R16 : use @href GetGeomEdgesAttribut or  @href SetGeomEdgesAttribut instead*/
   virtual CATGraphicAttributeSet *   GeomEdgeAttributes      (void)                     const;

   /** @nodoc : deprecated V5R16 : use GetGeomEdgesAttribut or SetGeomEdgesAttribut instead. */
   inline CATGraphicAttributeSet &   GeomEdgesAttribut   (void);

   /** 
    * @nodoc : deprecated V5R16 : use @href #GetGeomEltAttribut and @href #SetGeomEltAttribut instead.
    * Retrieves the graphic attribute of an elements of a specific geometric type owned by this SurfacicRep.
    * @param iType
    *    A @href CATGeomType type of element to retrieve
    *    WARNING : Elements of type CATWireEdge, CATFreePoint and CATInfiniteFace
    *    can only have one graphic attribute for all primitives.<br>
    *    Example :<br>
    *    GeomEltAttribut(CATFreePoint, 0) and GeomEltAttribut(CATFreePoint, 10) will return the same
    *    @href CATGraphicAttributeSet
    * @param num_elt
    *    The index of the element to be retrieved. Index range : 0 -> @href #GeomNumberOfElt (iType)-1
    * @return
    *    The @href CATGraphicAttributeSet of type 'CATGeomType' at index 'num_elt'
    */
   virtual CATGraphicAttributeSet *   GeomEltAttribut         (const CATGeomType iType,
                                                               const int num_elt   )     const;
   /** @nodoc : deprecated V5R16 : use @href #GetGeomEltAttribut and @href #SetGeomEltAttribut instead. */
   virtual CATGraphicAttributeSet *   GeomEltAttribut         (const CATGeomType iType)  const;

   /** @nodoc : deprecated V5R16.  Use #SetGeomEltAttribut (const CATGeomType,const int,const CATGraphicAttributeSet&) instead */
   virtual HRESULT                    SetGeomEltAttribut      (const CATGeomType iType, 
                                                               const CATGraphicAttributeSet &iAtt);

   /** @nodoc : deprecated V5R16 : use @href GetGeomIsoAttribut and @href SetGeomIsoAttribut instead.*/
   virtual CATGraphicAttributeSet *   GeomIsoAttribut         (const int num_iso)       const;

   /** @nodoc : deprecated V5R16 : use @href GetGraphicAttribut and @href SetGraphicAttribut instead.*/
   virtual CATGraphicAttributeSet* GetGraphicAttribut(int iIndice);

   /** @nodoc deprecated V5R16 : use @href GetLODFaceAttribut or @href SetLODFaceAttribut instead*/                                              
   virtual CATGraphicAttributeSet *   LODFaceAttribut         (const int num_lod)        const;

   /////////////////////////////////////////END DEPRECATED METHODS ////////////////////////////////////
   
protected:
   
   // Information for levels of detail (including original geometry):
   // ---------------------------------------------------------------
   
   /** @nodoc */
   SurfacicRepGeometry         _geom;                    // Original geometry data
   /** @nodoc */
   int                         _nlod:21;                   // Number of LODs
   /** @nodoc */
   int                         _faceColorModified:1;   
   /** @nodoc */
   int                         _hasBufferedFace:6;   
   /** @nodoc */
   int                         _hasBufferedEdge:2; 
   /** @nodoc */
   int                         _HasTransparencyFace:2;

   /** @nodoc */
   SurfacicRepLOD             *_lod;                     // LOD data structure list
   
   
   // Definition of outlines:
   // -----------------------
   
   /** @nodoc */
   CATOutlineBuilder          *_builder;             // Outline generator.
   
   /** @nodoc */
   static CAT3DFixedArrowGP * _tmpArrowGP;
   
private:
   
   
   // temporary
   // ---------
   /** @nodoc */
   static int                    _borderEdgeMode;
   /** @nodoc */
   static CATGraphicAttributeSet _borderEdgeAttribute;
   
   // Internal functions:
   // -------------------
   
   /** @nodoc */
   void EmptyInit (void);

   /** @nodoc */
   void MergeColorsInFirst(CATGraphicAttributeSet* att_edge,CATGraphicAttributeSet** dominant_att);
   
   /** @nodoc */
   RGBAStruct  ComputeEdgeColor(CAT3DEdgeGP* pGp,CATRender* pRender,int isBorder);

   /** @nodoc */
   CATGeomGPSet* UpgradeGeomGPSet(CATRender* pRender,CATGeomGPSet* pSet,CATGeomGPSet* pPreviousSet);

   /** @nodoc */
   void  DowngradeGeomGPSets();

   CATBoolean DoUpdateMergeFace(CATVisGPUStorageManager& iStorageManager, CAT3DFaceGP& iMergeFace, unsigned int _IsLOD=0) const;
   CATBoolean DoUpdateMergeVertexBuffer(CATVisGPUStorageManager& iStorageManager, CATVizVertexBuffer& iMergeVertexBuffer, unsigned int _IsLOD=0) const;
   CATBoolean DoUpdateMergeEdge( CATVisGPUStorageManager& iStorageManager, const CAT3DIndexedLineGPVBO& iMergeEdge) const;
   void UpdateGpSetForVBO(CATGeomGPSet& pcurrentSet, int currentSize, CAT3DIndexedLineGPVBO& pBufferedLine);
   void drawVBOLine(CAT3DIndexedLineGPVBO& pBufferedLine, CATRender& irender) const;

   // Edit mode internal parameters and methods:
   // ------------------------------------------
   
   /** @nodoc */
   CATVizVertexBuffer * _vertexBuffer;

   /** @nodoc */
   HRESULT StripGeometry();
   /** @nodoc */
   HRESULT ExplodeGeometry ();
   /** @nodoc */
   CAT3DFaceGP *ReallocateFace(unsigned int iFace);
};




//******************************************************************************
//*** INLINED METHODS: *********************************************************
//******************************************************************************


inline CATGraphicAttributeSet &CATSurfacicRep::GeomEdgesAttribut (void)
{
   return _geom.edges_attribut;
}

inline int CATSurfacicRep::EditMode (void)
{
  if (_vertexBuffer)
     return 0;
  else
     return 1;
}

inline void CATSurfacicRep::SetBorderEdgeMode(const int iMode)
{
   _borderEdgeMode = iMode;
}

inline void CATSurfacicRep::SetBorderEdgeAttributeSet(const CATGraphicAttributeSet & iAtt)
{
   _borderEdgeAttribute = iAtt;
}

inline CATGraphicAttributeSet & CATSurfacicRep::GetBorderEdgeAttributeSet()
{
  return _borderEdgeAttribute;
}




#endif // CATSurfacicRep_H
