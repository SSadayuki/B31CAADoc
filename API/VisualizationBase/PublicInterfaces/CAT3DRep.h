#ifndef CAT3DRep_H
#define CAT3DRep_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATRep.h"
#include "CAT3DBoundingSphere.h"
#include "CATViz.h"

class CATMappingOperator;
class CATGraphicMaterial;
class CATOutlineBuilder;
class CATStreamer;
class CATGraphicPrimitive;


/**
 * Class to create a 3D representation of an application object.
 * <b>Role</b>: This class is the base class for all 3D representation classes.
 * It manages specific 3D behavior, such as
 * <ol>
 *<li> 3D bounding element </li>
 *<li> streaming </li>
 *<li> outline builder </li>
 *<li> materials </li>
 * </ol>
 */
class ExportedByCATViz CAT3DRep : public CATRep
{
  
  friend class CATMarshallable3DRep;
  friend class CATDmuStream3DRep;
  CATDeclareClass;
  
  
public:
    
  virtual ~CAT3DRep();

  /** Constructor of an empty 3D representation. */
  CAT3DRep();

  /** @nodoc : deprecated constructor */
  CAT3DRep(CATModelIdentificator &id,void *ctrl=NULL);

  /** Sets the bounding element of the representation.
   * @param iBoundingSphere
   * The (smallest) bounding element containing the representation.
   */
  void SetBoundingElement(const CAT3DBoundingSphere & iBoundingSphere);

  /** Adds the given bounding element to the existing one.
   * @param iBoundingSphere
   * The current bounding element of the representation will be modified to
   * contain <tt>iBoundingSphere</tt>.
   */
  virtual void AddBoundingElement(const CAT3DBoundingSphere & iBoundingSphere);

  /** Returns the bounding element of the representation. */
  inline const CAT3DBoundingSphere & GetBoundingElement () const {return (_bound_elt);};

  /** Returns the bounding element of the representation. */
  const CAT3DBoundingSphere & GetBoundingElement ();

#if defined (_IRIX_SOURCE) || defined (_WINDOWS_SOURCE)
/**
* Returns the bounding element pointer ...
*/
    inline CATBoundingElement * GetBoundingCube (void);
#endif

  /** Computes the bounding element of the representation.
   * The bounding element should be the smallest possible sphere containing the representation.
   * @param iShowSpace
   * <br><b>Legal Values</b>:
   * <ol>
   *<li> 0 :  </li>
   *<li> 1 :  </li>
   * </ol>
   */
  virtual void ComputeBoundingElement(int iShowSpace=1);

  /** Resets the bounding element of representation.
   *  The visualization manager will ignore the representation.
  */
  void ResetBoundingElement();

  /** Invalidates the bounding element of the representation.
   * The visualization manager will recompute the bounding element of the representation. */
  virtual void SetInvalid();
	
  // Compute the BE for the noshow space
 /** @nodoc */ 
  virtual const CAT3DBoundingSphere &GetNoshowBoundingElement (int & ioIsOneRepNoshow) ;
  // Compute the BE for the Show space
 /** @nodoc */ 
  virtual const CAT3DBoundingSphere &GetShowBoundingElement () ;
 /** @nodoc */
  virtual int IsInvalid();

  /** 
   * @nodoc 
   * Saves the representation data in a stream.
   * @param oStream
   * Stream in which to save the representation data.
   * @param iSaveType
   *
   */
  virtual void Stream(CATStreamer & oStream, int iSaveType = 0);

  /** 
   * @nodoc 
   * Restores the representation data from a stream.
   * @param iStream
   * Stream from which the representation data is restored.
   */
  virtual void UnStream(CATStreamer & iStream);

  /** 
   * @nodoc
   * Returns the outline builder of the representation.
   * The representation retains ownership of the outline builder. Do not delete it.
   */
  virtual CATOutlineBuilder * GetOutlineBuilder();
  
  /** Sets the heritance mode for material.
   * @param iInheritance
   * <ol>
   *<li> MATERIAL_NOT_INHERIT : children reps will not have this rep's material </li>
   *<li> MATERIAL_INHERIT :  children reps will have automaticly this rep's material</li>
   *<li> MATERIAL_FORCE_INHERIT : same as INHERIT, but even when a father has the INHERIT flag</li>
   * </ol>
   */
  virtual void SetMaterialInheritance(int iInheritance);

  /** Returns the inheritance mode for the material of the rep. */
  virtual int GetMaterialInheritance();

  /** Sets the validity of texture coordinates.
   * @param iState
   * <ol>
   *<li> 0 : TC invalid, they will be computed at next Draw </li>
   *<li> 1 : TC valid </li>
   * </ol>
   */
  virtual void SetIsValidTC(int iState);
  
  /** Return the validity of texture coordinates.
   */
  virtual int GetIsValidTC();
    
  /** @nodoc */
  virtual void SetGraphicMaterial(CATGraphicMaterial * iMaterial);

  /** @nodoc */
  CATGraphicMaterial * GetGraphicMaterial() const;

  /** @nodoc */
  virtual void UpdateTextureCoordinates(CATMappingOperator* iOperator = NULL);

  /** @nodoc */
  virtual int IsUVMeshToCompute() const;

  // the bounding box is added to the rep if it is a BAG
  // otherwise, it is added to the closest Bag within
  // the path of rep given in input.
  /** @nodoc : deprecated method. */
  void CreateBoundingBoxRep(CATRepPath * iRepPath = NULL);

  /** @nodoc : deprecated method. */
  void RemoveBoundingBoxRep();

  /** @nodoc : deprecated method. */
  void RemoveBoundingBoxRep(CATRepPath *iRepPath);

  /** @nodoc : deprecated method. */
  void DetachBoundingBoxRep();

  /** @nodoc : deprecated method. */
  const CATRepPath * GetBoundingBoxPath();

  /** @nodoc */
  virtual void SetLayerNumber(int iLayer);

  /** @nodoc */
  virtual int GetLayerNumber();

  /** @nodoc */
  virtual void SetCGMId(unsigned int iId);

  /** @nodoc */
  virtual unsigned int GetCGMId();

  /** @nodoc */
  virtual CATGraphicPrimitive* GetGeomElement(int iIndice);
  
  /** @nodoc */
  // RepViewMode set on this 3DRep will be applied on it and all its children ONLY IF:
  // #1. VIEW_REP_OVERLOAD is enabled for the Viewer 
  //  Currently it is disabled if ViewerViewMode contains any of the modes below:
  //      - VIEW_COLORED_EDGES_FROM_FACES
  //      - VIEW_LINEONLINE
  //      - VIEW_HLR
  //      - VIEW_TRANSPARENT
  //      - VIEW_POLYGON
  //      - VIEW_ISOPARS
  //      - VIEW_TOON
  // #2. RepViewMode is not set to REP_VIEW_DISABLED (0x0)
  //      In such a case, ViewerViewMode will be effective for the rep.
  // #3. No parent of this node is applied with the CATVisRepViewModeFilter
  // #4. No parent of this node is applied with the RepViewMode through this API
  //      In such a case, RepViewmode set on any child rep will be discarded. RepViewMode of the parent will be effective for the rep.
  // #5. The only RepViewMode combinations accepted by this API are : (defined in CATRep.h)
  // - REP_VIEW_DISABLED 
  // - REP_VIEW_NOTHING
  // - REP_VIEW_MESH
  // - REP_VIEW_EDGE
  // - REP_VIEW_MESH | REP_VIEW_EDGE
  // - REP_VIEW_POLYGON
  // - REP_VIEW_EDGE | REP_VIEW_OUTLINE
  // - REP_VIEW_MESH | REP_VIEW_EDGE | REP_VIEW_OUTLINE
  // - REP_VIEW_HRD  
  // - REP_VIEW_HRD | REP_VIEW_HIDDEN_EDGE
  // #6. The following RepViewModes containing REP_VIEW_OUTLINE (explicit or implicit) won't be taken into account if the ViewerViewMode does not contain VIEW_OUTLINE:
  // - REP_VIEW_EDGE | REP_VIEW_OUTLINE
  // - REP_VIEW_MESH | REP_VIEW_EDGE | REP_VIEW_OUTLINE
  // - REP_VIEW_HRD
  // - REP_VIEW_HIDDEN_EDGE | REP_VIEW_HRD
  //      In such a case, ViewerViewMode will be effective for the rep.  
  virtual void SetViewMode (const int iViewMode, const int iActive,const int iWindowViewModeSensitive=0);

  /** @nodoc */
  virtual int ViewMode (const int oViewMode=0xFFFF,int * oWindowViewModeSensitive=NULL) const;

  /** @nodoc */
  // The only pick mode accepted by this method are : (defined in CATRep.h)
  // - REP_PICK_NOTHING
  // - REP_PICK_MESH
  // - REP_PICK_EDGE
  // - REP_PICK_MESH | REP_PICK_EDGE
  // If the CATViewer is set to one of this view mode, the rep view mode
  // won't be taken into account :
  // - VIEW_OUTLINE
  // - VIEW_HLR
  // - VIEW_POLYGON
  // - VIEW_ISOPARS
  // - VIEW_TOON
  virtual void SetRepPickMode (const int iPickMode, const int iActive);

  /** @nodoc */
  virtual int GetRepPickMode (const int oPickMode=0xFFFF) const;

  /** @nodoc */
  // 0 contexte inconnu
  // 1 lorsque le _CGMId correspond à un #ele  (contexte Feature)
  // 2 lorsque le _CGMId correspond à un CGMId (contexte CGM)
  virtual void SetNamingContext (int iNamingContext);

  /** @nodoc */
  virtual int GetNamingContext ();

  /** @nodoc */
  virtual int IsA3DRep();

protected:
  /** Tests whether the representation will draw its graphic primitives.
   * See CATRep::OkToDraw(CATRender & iRender, int * ioInside)
   */
  int OkToDraw(CATRender & ioRender, int * ioInside);

  CAT3DBoundingSphere   _bound_elt;       // bounding element
  CATGraphicMaterial  * _Material;        // graphic material
   
private:
   unsigned int _CGMId;

   unsigned int         _isValidTC           : 1; // validity of texture coordinates
   unsigned int         _inheritanceMaterial : 2;
   unsigned int         _LayerNumber         :16;
   unsigned int         _view_mode           : 5;
   unsigned int         _pick_mode           : 5;
   unsigned int         _view_mode_sensitivity : 1;
   unsigned int         _naming_context      : 2;

};

#if defined (_IRIX_SOURCE) || defined (_WINDOWS_SOURCE)
inline CATBoundingElement *CAT3DRep::GetBoundingCube (void)
{
    return (CATBoundingElement *) &_bound_elt;
}
#endif

#endif // CAT3DRep_H
