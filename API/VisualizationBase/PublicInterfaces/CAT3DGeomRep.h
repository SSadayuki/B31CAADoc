#ifndef CAT3DGeomRep_H
#define CAT3DGeomRep_H

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

//******************************************************************************
//  CATIA Version 5 Release 1 Framework VFW2
//  Copyright Dassault Systemes 1996
//******************************************************************************
//
//  Abstract:
//  ---------
//    CAT3DGeomRep is an interface for all classes that wants to manage the 
//    following CATIA elements representations:
//      - Solids (exacts or mock-up),
//      - Volumes,
//      - Faces,
//      - Surfaces,
//      - Skins.
//
//******************************************************************************
//
//  Inheritance:
//  ------------
//                CAT3DGeomRep
//                  CAT3DRep
//                    CATRep 
//                      CATExtend (SYSTEM framework) 
//
//******************************************************************************

#include "CATViz.h"
#include "CAT3DRep.h"

#include "CATIAV5Level.h"

class CATBodyIdentificators;
class CATModelIdentificator;
class CATGraphicAttributeSet;
class CAT3DFaceGP;
class CAT3DLineGP;
class CAT3DEdgeGP;
class CATVizVertexBuffer;

/**
 * The type of elements a CAT3DGeomRep can handle.
 * @param CATBoundaryEdge
 *    A @href CAT3DEdgeGP or @href CAT3DLineGP that bounds a face
 * @param CATInternalSharpeEdge
 *    A G0 continuous @href CAT3DEdgeGP or @href CAT3DLineGP between two faces
 * @param CATInternalSmoothEdge
 *    An at least G1 continuous @href CAT3DEdgeGP or @href CAT3DLineGP between two faces
 * @param CATBoundaryPoint
 *    A @href CAT3DMarkerGP that bounds a face
 * @param CATInternalSharpePoint
 *    A G0 continuous @href CAT3DMarkerGP
 * @param CATInternalSmoothPoint
 *    An at least G1 continuous @href CAT3DMarkerGP
 * @param CATSurfacicPoint
 *    A @href CAT3DMarkerGP that lies on a face
 * @param CATFreePoint
 *    A @href CAT3DMarkerGP
 * @param CATWireEdge
 *    A @href CAT3DLineGP that represents a wire (polyline)
 */
enum CATGeomType {
   CATBoundaryEdge,
   CATInternalSharpeEdge,
   CATInternalSmoothEdge,
   CATBoundaryPoint,
   CATInternalSharpePoint,
   CATInternalSmoothPoint,
   CATSurfacicPoint,
   CATFreePoint,
   CATWireEdge,
   CATInfiniteFace
};

//******************************************************************************
//*** CAT3DGeomRep: **********************************************************
//******************************************************************************

/** 
* Class to define a Geometric representation.
*/
class ExportedByCATViz CAT3DGeomRep : public CAT3DRep
{
   CATDeclareClass;
   
public:

   // INTERFACE FOR THE ORIGINAL GEOMETRY (called Geom):
   // --------------------------------------------------
   // All inheriting classes must implement how they manage the basic geometry.
   //
   //   - AddGeom*: Only a reference to the existing data is stored. Data is
   //     not duplicated within the object.
   //   - ReplaceGeomElt: the <iInd> gp becomes <iNewGP>. the old <iInd> gp is
   //     released. 
   
   /** @nodoc */
   virtual int                              GeomNumberOfFaces    (void)                     const                 = 0;

   /** @nodoc */
   virtual CAT3DFaceGP            *         GeomFace             (const int num_face)       const                 = 0;

   /** @nodoc */
   virtual HRESULT                          GetGeomFaceAttribut  (const int num_face,CATGraphicAttributeSet& orGA)       const =0;

   /** @nodoc */
   virtual HRESULT                          SetGeomFaceAttribut  (const int num_face,const CATGraphicAttributeSet& irGA) = 0;
   
   /** @nodoc */
   virtual int                              GeomNumberOfEdges    (void)                     const                 = 0;
   
   /** @nodoc */
   virtual CAT3DEdgeGP            *         GeomEdge             (const int num_edge)       const                 = 0;
   
   /** @nodoc */
   virtual HRESULT                          GetGeomEdgesAttribut (CATGraphicAttributeSet& orGA)       const   = 0;

   /** @nodoc */
   virtual HRESULT                          SetGeomEdgesAttribut (const CATGraphicAttributeSet& irGA)         = 0;

   /** @nodoc */
   virtual int                              GeomNumberOfElt      (const CATGeomType iType)  const                 = 0;

   /** @nodoc */
   virtual CATGraphicPrimitive    *         GeomElt              (const CATGeomType iType,
                                                                  const int num_elt)        const                 = 0;

   /** @nodoc */
   virtual HRESULT                          GetGeomEltAttribut   (const CATGeomType iType,
                                                                  const int num_elt,CATGraphicAttributeSet& orGA   )     const = 0;
   /** @nodoc */
   virtual HRESULT                          SetGeomEltAttribut   (const CATGeomType iType,
                                                                  const int num_elt,const CATGraphicAttributeSet& irGA  ) = 0;
   /** @nodoc */
   virtual int                              GeomNumberOfIsos     (void)                     const                 = 0;
   
   /** @nodoc */
   virtual CAT3DLineGP           **         GeomIso              (const int num_face,
                                                                  int *oIsoCount)           const                 = 0;
   
   /** @nodoc */
   virtual HRESULT                          GetGeomIsoAttribut   (const int num_iso,CATGraphicAttributeSet& orGA)       const = 0;

   /** @nodoc  */
   virtual HRESULT                          SetGeomIsoAttribut   (const int num_face,const CATGraphicAttributeSet& irGA) = 0;
   
   /** @nodoc */
   virtual HRESULT                          AddGeomFace          (CAT3DFaceGP *face,CATGraphicAttributeSet *att)  = 0;
   
   /** @nodoc */
   virtual HRESULT                          AddGeomEdge          (CAT3DEdgeGP *edge)                              = 0;
   
   /** @nodoc */
   virtual HRESULT                          AddGeomIso           (CAT3DLineGP  **iIso,
                                                                  CATGraphicAttributeSet *iAtt,
                                                                  int iIsoCount)                                  = 0;

   /** @nodoc */
   virtual HRESULT                          AddGeomElt           (const CATGeomType iType,
                                                                  CATGraphicPrimitive *iGP,
                                                                  CATGraphicAttributeSet *iAtt=NULL)              = 0;
  
   /** @nodoc */
   virtual HRESULT                          ReplaceGeomElt       (const CATGeomType iType,
                                                                  CATGraphicPrimitive *iNewGP,
                                                                  const int iInd)                                 = 0;
   
   /** @nodoc */
   virtual CATVizVertexBuffer *             GetVertexBuffer      (void)                     const                 ;

   /** @nodoc */
   virtual int                              NumberOfLODs         (void)                     const;
                                            
   /** @nodoc */                                                 
   virtual CAT3DFaceGP     *                LODFace              (const int num_lod)        const;

   /** @nodoc */                                                                                 
   virtual HRESULT                          GetLODFaceAttribut   (const int num_lod,CATGraphicAttributeSet& orGA)       const ;

   /** @nodoc */
   virtual HRESULT                          SetLODFaceAttribut   (const int num_lod,const CATGraphicAttributeSet& irGA) ;
                                            
   /** @nodoc */                                                 
   virtual float                            LODSag               (const int num_lod)        const;

   /** @nodoc */
   virtual int                              IsWire               (void)                     const                 ;

   /** @nodoc */
   virtual int                              IsMonoWire           (void)                     const                 ;

   /** @nodoc */
   virtual int                              IsSurfacic           (void)                     const                 ;

   /////////////////////////////////////////////DEPRECATED METHODS ////////////////////////////////////
   /**  @nodoc deprecated V5R16 : use @href GetGeomFaceAttribut or @href SetGeomFaceAttribut instead */
   virtual CATGraphicAttributeSet *   GeomFaceAttribut        (const int num_face)       const = 0;

   /** @nodoc : deprecated method V5R16 : use @href GetGeomEdgesAttribut or  @href SetGeomEdgesAttribut instead*/
   virtual CATGraphicAttributeSet *   GeomEdgeAttributes      (void)                     const = 0;

   /** @nodoc deprecated V5R16 : use @href GetGeomEltAttribut and @href SetGeomEltAttribut instead.*/
   virtual CATGraphicAttributeSet *   GeomEltAttribut         (const CATGeomType iType,
                                                               const int num_elt   )     const = 0;
   /** @nodoc : deprecated V5R16 : use @href GetGeomEltAttribut and @href SetGeomEltAttribut instead. */
   virtual CATGraphicAttributeSet *   GeomEltAttribut         (const CATGeomType iType)  const = 0;

   /** @nodoc : deprecated V5R16.  Use SetGeomEltAttribut (const CATGeomType,const int,const CATGraphicAttributeSet&) instead */
   virtual HRESULT                    SetGeomEltAttribut      (const CATGeomType iType, 
                                                               const CATGraphicAttributeSet &iAtt) = 0;

   /** @nodoc : deprecated V5R16 : use @href GetGeomIsoAttribut and @href SetGeomIsoAttribut instead.*/
   virtual CATGraphicAttributeSet *   GeomIsoAttribut         (const int num_iso)       const = 0;

   /** @nodoc : deprecated V5R16 : use @href GetLODFaceAttribut or @href SetLODFaceAttribut instead*/
   virtual CATGraphicAttributeSet *   LODFaceAttribut      (const int num_lod)        const;
   
   /////////////////////////////////////////END DEPRECATED METHODS ////////////////////////////////////

   /////////////////////////////////////////////////////////////////////////


   // SAG, STEP & ANGLE

   /** 
    * Defines the sag of the object.
    * @param iSag
    *   The sag value to define
    */
   void           SetGeomSag     (const float iSag);
   /** @nodoc */
   inline float   GeomSag        (void)                    const;

   /** @nodoc */
   void           SetGeomStep    (const float iStep);
   /** @nodoc */
   inline float   GeomStep       (void)                    const;

   /** @nodoc */
   void           SetGeomAngle   (const float iAngle);
   /** @nodoc */
   inline float   GeomAngle      (void)                    const;
   

   // BODY IDENTIFICATOR

   /** @nodoc */
   inline void  SetBodyIdentificators (const CATBodyIdentificators * ident);
   /** @nodoc */
   inline const CATBodyIdentificators * GetBodyIdentificators() const;
   
   
protected:

   CAT3DGeomRep();
   
   CAT3DGeomRep(CATModelIdentificator &id,void *ctrl=NULL);
   

   /** @nodoc */
   const CATBodyIdentificators * _bodyIdent;

   float _sag;                      // geometry precision
   float _angle;                    // max angle between consecutive normals
   float _step;                     // max size for edges

private:

   void Init();
};


//******************************************************************************
//*** INLINED METHODS: *********************************************************
//******************************************************************************

inline float CAT3DGeomRep::GeomSag (void) const
{
   return _sag;
}

inline float CAT3DGeomRep::GeomAngle (void) const
{
   return _angle;
}

inline float CAT3DGeomRep::GeomStep (void) const
{
   return _step;
}

inline void CAT3DGeomRep::SetBodyIdentificators(const CATBodyIdentificators * ident)
{
   _bodyIdent = ident;
}

inline const CATBodyIdentificators * CAT3DGeomRep::GetBodyIdentificators() const
{
   return _bodyIdent;
}

#endif
