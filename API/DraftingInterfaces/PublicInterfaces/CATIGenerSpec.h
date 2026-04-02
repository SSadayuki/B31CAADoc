// COPYRIGHT DASSAULT SYSTEMES 1999
#ifndef CATIGENERSPEC_H
#define CATIGENERSPEC_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
#include "CatFilletRepresentation.h"
#include "CatRepresentationMode.h"
#include "RasterLevelOfDetail.h"
#include "CATLISTV_CATISpecObject.h"
#include "CATLISTP_CATMathPoint2D.h"

class CATIView_var;
class CATISketch_var;
class CATISketch;
class CATMathPlane;
class CATMathPoint;
class CATMathCircle;
class CATMathDirection;
class CATMathVector;
class CATMathVector2D;
class CATISpecObject_var;
class CATMathBox2D;
class CATIDftGenOperator;
class CATIProduct;
class CATIUnknownList;
class CATIDrwCalloutAccess;

#include "DraftingItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIGenerSpec ;
#else
extern "C" const IID IID_CATIGenerSpec ;
#endif

/**
 * Interface to the specifications of a generative drawing view.
 * <b>Role</b>: This interface manages the specifications of a generative
 * drawing view. These specifications are:
 * <ul>
 * <li>The view projection plane: @href #GetProjPlane and @href #SetProjPlane </li>
 * <li>The view projection type:
 *  <ul>
 *  <li><b>Detail view</b>: @href #GetClipping and @href #AddClipping for the view
 *  itself, @href #GetClippingNumber to check if there is a  clipping, @href #GetDetailProfile to retrieve the clipping  profile,
 *  and @href #GetDetailFeature to retrieve the clipping operator</li>
 *  <li><b>Section or section cut view</b>: @href #GetSectionProfile and @href #AddSection for the view
 *  itself, @href #GetSectionType to retrieve whether the view is a section or
 *  a section cut view, and @href #GetSectionFeature to retrieve the sectioning operator.
 *  Additional methods are @href #GetUse3DSpec and @href #SetUse3DSpec to overload or not element properties  from 3D drafting specifications</li>
 *  <li><b>Broken view</b>: @href #GetBreakViewInfo and @href #AddBreakView for the view itself,
 *  and @href #GetBreakViewFeature to retrieve the broken view creation operator.</li>
 *  <li><b>Break out view</b>: @href #GetBreakOutFeatureList and @href #AddBreakOut for the the view itself</li>
 *  <li><b>Auxiliary view</b>: @href #GetProjectionProfile and @href #AddProjection for the view itself, 
 *  and @href #GetProjectionFeature to retrieve the projection operator.</li>
 *  </li>
 *  </ul>
 * <p><b>Note 1</b>: A view can cumulate several of these types.
 * For example, a view can be altogether a section view and a broken view.</p>
 * <p><b>Note 2</b>: An interface is dedicated to create specific section view or view from3d
 * For example, a section view with cutting plane associative to plane or planar surface. @href CATIDftGenViewFactory  </p>
 * 
 * </li>
 * <li>The operators used to create the view: @href #GetOperatorList </li>
 * <li>The bounding box of the generated geometry: @href #GetBBoxOf2DGeneratedGeom </li>
 * <li>The callout defining the view, for auxiliary, section, and detail views: @href #GetOriginCallout </li>
 * <li>The type(s) of annotations to generate: @href #GetDressUpGeneration and @href #SetDressUpGeneration </li>
 * <li>The fillet representation mode: @href #GetFilletRep and @href #SetFilletRep </li>
 * <li>The hidden lines representation mode:  @href #GetHiddenLinesMode and @href #SetHiddenLinesMode </li>
 * <li>The pixel image generation mode for display and print: @href #GetImageMode and @href #SetImageMode </li>
 * <li>The pixel image generation precision for display and print: @href #GetImageDPIPrecision and @href #SetImageDPIPrecision </li>
 * <li>The occlusion culling mode to enable or disable hidden bodies for display: @href #GetOcclusionCullingMode and @href #SetOcclusionCullingMode </li>
 * <li>The bounding box limit under which a part will not be taken into account when generating
 * the view: @href #GetLimitBoundingBox and @href #SetLimitBoundingBox </li>
 * <li>The extraction modes:
 *  <ul>
 *  <li>For 3D points: @href #Get3DPointExtractionMode and @href #Set3DPointExtractionMode </li>
 *  <li>For wireframe: @href #GetWireframeExtractionMode and @href #SetWireframeExtractionMode </li>
 *  </ul>
 * <li>The symbols used to represent projected points: @href #Get3DPointsSymbol and @href #Set3DPointsSymbol </li>
 * <li>The color inheritance mode: @href #Get3DColorInheritance and @href #Set3DColorInheritance </li>
 * </ul>
 */class ExportedByDraftingItfCPP CATIGenerSpec : public CATBaseUnknown
{
    CATDeclareInterface;
    
public:
    
    /**
    * Sets the projection plane of the drawing view.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param iProjectionPlane
    *  A <tt>CATMathPlane</tt> describing the projection plane
    */
    virtual void SetProjPlane(const CATMathPlane& iProjectionPlane) = 0;
    
    /**
    * Returns the projection plane of the drawing view.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual CATMathPlane GetProjPlane() const = 0;

    // Storage of the vector between the projection of the center of the
    // 3D encumbrancy of the referenced 3D object and the origin of the view
    // (the projection of the origin of the 3D axis).
    /** @nodoc
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual void Set2Dto3DVector(const CATMathVector2D& vector2d) =0;

    /** @nodoc */
    virtual CATMathVector2D Get2Dto3DVector() const = 0;

    /**
    * Retrieves the generative view fillets representation.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param oFilletRep 
    *  The different modes of representation 
    *  <br><b>Legal values</b> Possible values are NONE (filets are not represented),
    *  BOUNDARY (fillets are represented by their boundary edges) or ORIGINALEDGE
    *  (fillets are symbolicly represented)
    */
    virtual HRESULT GetFilletRep (CatFilletRepresentation * oFilletRep, CATBoolean* isOverloaded = NULL) const =0;
    
    /**
    * Sets the generative view fillets representation.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param iFilletRep 
    *  The different modes of representation 
    *  <br><b>Legal values</b>: Possible values are NONE (filets are not represented),
    *  BOUNDARY (fillets are represented by their boundary edges) or ORIGINALEDGE
    *  (fillets are symbolicly represented)
    */
    virtual HRESULT SetFilletRep (const CatFilletRepresentation iFilletRep) =0;
    
    /**
    * Retrieves if symbolic annotations will be generated from design.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param iType 
    *  The type of annotation
    * @param oDressGen 
    *  TRUE if generated, FALSE if not
    */
    virtual HRESULT GetDressUpGeneration (const CATIdent iType, boolean * oDressGen, CATBoolean* IsOverloaded = NULL) const =0;
    
    /**
    * Sets the kind of annotation which have to be generated from design.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param iType 
    *   The type of annotation to be generated or not
    * @param iDressGen 
    *  TRUE if generated, FALSE if not
    */
    virtual HRESULT SetDressUpGeneration (const CATIdent iType, const boolean iDressGen) =0;   
    
    /**
    * Returns the mode of representation of hidden lines.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param isOverloaded
    *   
    * @return
    *  The mode of representation: 0: not represented, 1: represented
    */
    virtual int  GetHiddenLinesMode(CATBoolean* IsOverloaded = NULL) const = 0;

    /**
    * Sets the mode of representation of hidden lines.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param iHiddenMode
    *  The mode of representation 
    *  <br><b>Legal values</b>: 0: not represented, 1: represented
    */
    virtual void SetHiddenLinesMode(const int iHiddenMode) const = 0;
    
    /**
    * Adds a specification of detail on the drawing view.
    * <b>Role</b>: This methods adds a detail operator on the drawing view which
    * will be then considered as a Detail View. A Detail View is a drawing view which represents a 
    * subpart of another view (called the mother view here)
    * The definition of the subpart geometry (or clipping area) is contained in the sketch
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param iSketch
    *  The Sketch which contains the geometry's description of the clipping area
    *  <br><b>Legal values</b>: iSketch must contain a closed profile
    * @param  iMotherView
    *  The View in which the clipping area is defined and of which the Detail View is a magnified representation
    * @param iQuick
    *  Defines the computation mode
    *  <br><b>Legal values</b>: 0: the 3D model is clipped and then pojected, 1: the clipping is a pure 2D operation (quicker!)
    * @return
    * <dt><tt>S_OK</tt> <dd>if the clipping was correctly added.
    * <dt><tt>S_FALSE</tt> <dd>if the clipping was added but the needed callbacks for a normal behavior were not set.
    * <dt><tt>E_FAIL</tt> <dd>if the operation failed.
    * </dl>
	*/
    virtual HRESULT AddClipping(const CATISketch_var iSketch, const CATIView_var iMotherView, int iQuick = 0) = 0;
    
    /**
    * Retrieves the clipping definition in a drawing view if exists.
    * @param iClipNum
    *  Not used. Must be always 1.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param oSketch
    *  The sketch which contains the geometry's description of the clipping area
    * @param oVecPro
    *  The direction of projection of the view
    */
    virtual void GetClipping(const int iClipNum, CATISketch *& oSketch, CATMathDirection & oVecPro) = 0;
    
    // Do not use
    /** @nodoc 
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual void GetClipping(const int clip_num, CATMathPoint& center, double& radius, CATMathDirection &oVecPro) = 0;
    
    /**
    * Returns the number of clipping operator .
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual int  GetClippingNumber() const = 0; // 0 if no clipping, otherwise 1
    
    /**
    * Returns the clipping operator .
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual CATISpecObject_var GetDetailFeature() const = 0;
    

	/**
    * Adds a specification of section or section cut on the drawing view.
    * <b>Role</b>: This methods adds a section (or section cut) operator on the drawing view which
    * will be then considered as a Section View (or a Section Cut View).
    * The definition of the section profile is described in a sketch
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param iSketch
    *  The Sketch which contains the geometry's description of the section profile
    * @param iDepli
    *  Defines if the section is offset or aligned
    *  <br><b>Legal values</b>: 0: offset, 1: aligned
    * @param iSectionType
    *  Defines if the section is a section cut or a section
    *  <br><b>Legal values</b>: 0: section, 1: section cut
    * @param iVecPro
    *  The direction of projection of the view
    * @param  iMotherView
    *  The View in which the section profile is defined and of which the Section (or Section Cut) View is a section
		* @param iSectionMode
    *  Defines if the Section View is according to profile or not. 
		*  <br><b>Legal values</b>: 0: mother view orientation, 1: according to profile
		* @param i3DSketch
		*  In the case of a 3D defined profile, this is the 3D sketch containing the geometry's description of the section profile
		*  <br><b>Legal values</b>: if NULL_var, the profile is defined in the drawing
    * @param iProduct
    *   In the case of a 3D defined profile, this is the product containing i3DSketch
		*  <br><b>Legal values</b>: if NULL_var, the profile is defined in the drawing
		* @return
    * <dt><tt>S_OK</tt> <dd>if the section was correctly added.
    * <dt><tt>S_FALSE</tt> <dd>if the section was added but the needed callbacks for a normal behavior were not set.
    * <dt><tt>E_FAIL</tt> <dd>if the operation failed.
    * </dl>
		*/
    virtual HRESULT AddSection(const CATISketch_var iSketch, const int & iDepli, const int & iSectionType,
			     const CATMathDirection & iVecPro, CATIView_var iMotherView, const int iSectionMode = 0,
					 const CATBaseUnknown_var i3DSketch = NULL_var, const CATBaseUnknown_var iProduct = NULL_var) = 0;

    /**
    * nodoc
    * This method is now replaced by CATIGenerSpec#GetSectionProfile
    * Retrieves the section definition in the drawing view.
    * @param oNbPoints
    *  The number of points in the profile
    * @param oProfil
    *  An array of CATMathPoint which contains the profile's points. 
    *  !!!!!! Memory is allocated, so you must delete it after use. !!!!!!
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param oDepli
    *  Defines if the section is offset or aligned. 0: offset, 1: aligned
    * @param oVecPro
    *  The direction of projection of the view
    */
    virtual void GetSection(int & oNbPoints, CATMathPoint * & oProfil, int & oDepli, CATMathDirection & oVecpro) = 0;

    /**
    * Retrieves the section definition in the drawing view.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param oProfil
    *  List of CATMathPoint which contains the profile's points. 
    * @param oDepli
    *  Defines if the section is offset or aligned. 0: offset, 1: aligned
    * @param oVecPro
    *  The direction of projection of the view
    */
    virtual HRESULT GetSectionProfile(CATListPtrCATMathPoint2D & oProfil, int & oDepli, CATMathDirection & oVecpro) = 0;
    
    /** Returns the type of the section.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @return
    *  0: section, 1: section cut
    */
    virtual int  GetSectionType() const = 0;

    // Do not use
    /** @nodoc 
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual int  GetSectionNumber() const = 0;	// 0 si pas de section, 1 sinon

    /**
    * Returns the section operator .
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual CATISpecObject_var GetSectionFeature() const = 0;
    
    /** 
    * Gets the callout defining the view.
    * <b>Role</b>: Gets the callout defining the view.
    * <br><b>Postcondition</b>:	Don't forget to RELEASE the resulting oCallout after use.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param oCallout
    *    The callout defining the view.
    * @return 
    * <tt>HRESULT</tt>
    * <dl>
    * <dt> <tt>S_OK</tt>     <dd> Callout has been found
    * <dt> <tt>E_FAIL</tt>   <dd> No callout found or internal error.
    * </dl>
    */
    virtual HRESULT GetOriginCallout(CATIDrwCalloutAccess **oCallout) const = 0;
    
    /**
    * Returns geometric informations about profile for auxiliary view.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param oProfile
    *  two points defining profile. 
    * @param iVecPro
    *  The direction of projection of the view
    * @return 
    * <tt>HRESULT</tt>
    * <dl>
    * <dt> <tt>S_OK</tt>     <dd> Profile has been found
    * <dt> <tt>E_FAIL</tt>   <dd> No profile found.
    * </dl>
    */
    virtual HRESULT GetProjectionProfile(CATMathPoint oProfile[2], CATMathDirection &oVecpro)  const = 0;

    /**
    * Returns geometric informations about profile for detail view.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param oIsCircular
    *  oIsCircular is true means profile is only defined by a circle. 
    * @param oProfile
    *  Profile defined by a list of points.  if Profile is circular, there only one point in the list to return
    * cirlce center.
    * @param oRadius
    *  Radius of circle
    * @return 
    * <tt>HRESULT</tt>
    * <dl>
    * <dt> <tt>S_OK</tt>     <dd> Profile has been found
    * <dt> <tt>E_FAIL</tt>   <dd> No profile found.
    * </dl>
    */
    virtual HRESULT GetDetailProfile(CATBoolean &oIsCircular, CATListPtrCATMathPoint2D & oProfil, double &oRadius)  const = 0;

    /**
    * Adds a specification of auxiliary on the drawing view.
    * <b>Role</b>: This methods adds a auxiliary (or projection) operator on the drawing view which
    * will be then considered as an Auxiliary View. An Auxiliary View is a drawing view which represents a 
    * 3D Part in a direction defined in another view (called the mother view here)
    * The definition of the direction of projection is contained in the sketch
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param iSketch
    *  The Sketch which contains the geometry's description of the direction of projection (a line 
    *  perpendicular to this direction in the mother view)
    * @param iVecPro
    *  The direction of projection of the view
    * @param  iMotherView
    *  The View in which the direction of projection is defined
    */
    virtual void AddProjection(const CATISketch_var iSketch, const CATMathDirection & iVecPro, CATIView_var iMotherView) = 0;
    
    // Do not use
    /** @nodoc
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual int  GetProjectionNumber() const = 0;  
    
    /**
    * Returns the projection operator .
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual CATISpecObject_var GetProjectionFeature() const = 0;
    
	// - broken views
    /**
    * Adds a specification of auxiliary on the drawing view.
    * <b>Role</b>: This methods adds a auxiliary (or projection) operator on the drawing view which
    * will be then considered as an Auxiliary View. An Auxiliary View is a drawing view which represents a 
    * 3D Part in a direction defined in another view (called the mother view here)
    * The definition of the direction of projection is contained in the sketch
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param iSketch
    *  The Sketch which contains the geometry's description of the direction of projection (a line 
    *  perpendicular to this direction in the mother view)
    * @param iVecPro
    *  The direction of projection of the view
    * @param  iMotherView
    *  The View in which the direction of projection is defined
    */
	  virtual void AddBreakView (const CATISketch_var sketch, const CATMathVector2D &vecdir, CATLISTV(CATISpecObject_var) liste1_skElem,CATLISTV(CATISpecObject_var) liste2_skElem,CATIView_var mother_view)= 0;

    /**
    * Returns the break View operator .
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual CATISpecObject_var GetBreakViewFeature() const = 0;
	
    /**
    * nodoc
    * This method is now replaced by CATIGenerSpec#GetBreakViewInfo
    * Retrieves the BreakView definition in the drawing view.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param ovecdir
    *  Direction of break
    * @param oliste1_skElem
    *  A list of sketch elements which describe the shape of first BrokenLines
  	* @param oliste2_skElem
    *  A list of sketch elements which describe the shape of second BrokenLines
    */
	virtual void GetBreakView (CATMathVector2D &ovecdir,CATLISTV(CATISpecObject_var) &oliste1_skElem, CATLISTV(CATISpecObject_var) &oliste2_skElem)= 0;

    /**
    * Retrieves the BreakView definition in the drawing view.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param ovecdir
    *  Direction of break
    * @param oliste1_skElem
    *  A list of sketch elements which describe the shape of first BrokenLines
	  * @param oliste2_skElem
    *  A list of double sketch elements which describe the shape of second BrokenLines
    * @param otranslation1
    *  A list of double which describe translation associated to the shape of first BrokenLines
    * @param otranslation2
    *  A list of double which describe translation associated to the shape of second BrokenLines
    * @return
    * <dt><tt>S_OK</tt> <dd>Execution successfully.
    * <dt><tt>E_FAIL</tt> <dd>iExecution failed.
    * </dl>
    */
	 virtual HRESULT GetBreakViewInfo (CATMathVector2D &ovecdir,CATLISTV(CATISpecObject_var) &oliste1_skElem, CATLISTV(CATISpecObject_var) &oliste2_skElem,
                                                        CATListOfDouble &otranslation1,CATListOfDouble &otranslation2)= 0;

    /**
    * Adds the break out operator.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param iSketch
    *  The Sketch which contains the geometry's description of the breakout profile
	 * @param vecdir
	 *  The direction of the breakout
	 * @param plane1
	 *  First breakout reference plane
	 * @param plane2
	 *  Second breakout reference plane
	 * @param mother_view
	 *  The view in which the breakout is applied.
    * @return
    * <dt><tt>S_OK</tt> <dd>if the breakout was correctly added.
    * <dt><tt>S_FALSE</tt> <dd>if the breakout was added but the needed callbacks for a normal behavior were not set.
    * <dt><tt>E_FAIL</tt> <dd>if the operation failed.
    * </dl>
    */
	  virtual HRESULT AddBreakOut (const CATISketch_var sketch, const CATMathVector &vecdir, const CATMathPlane &plane1, const CATMathPlane &plane2,CATIView_var mother_view)=0;
    
	/**
    * @nodoc
    * This method is now replaced by CATIGenerSpec#GetBreakOutFeatureList
    * Returns the break out operator .
    * This method is now replaced by @href CATIGenerSpec#GetBreakOutFeatureList
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
	virtual CATISpecObject_var GetBreakOutFeature() const = 0;

    /**
    * Returns the Cut/Uncut mode.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual int GetUse3DSpec(CATBoolean* IsOverloaded = NULL) = 0;

    /**
    * Valuates the Cut/Uncut mode.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual void SetUse3DSpec(int iUseOrNot) = 0;

    /**
    * Returns the wireframe extraction mode.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual int GetWireframeExtractionMode(CATBoolean* IsOverloaded = NULL) = 0;

    /**
    * Valuates the wireframe extraction mode.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual void SetWireframeExtractionMode(int iWFMode) = 0;

    /**
    * Returns the bounding box of the 2D Generated Geometry.
    * May return NULL.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual CATMathBox2D * GetBBoxOf2DGeneratedGeom() = 0;

	
	/**
    * Returns the list of break out operators.
    * <br>Returns an empty list if it founds no BreakOut in the view.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
	  virtual CATLISTV(CATISpecObject_var) GetBreakOutFeatureList() const = 0;

    /**
    * Returns the list of pre-processing operators.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual CATLISTV(CATISpecObject_var) GetOperatorList() = 0;

    /**
    * Adds a pre-processing operator in the list
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    /** @nodoc */
    virtual HRESULT AddOperator (CATIDftGenOperator* iOperator) = 0;

   /** @nodoc
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual HRESULT GetDrwAxisSysteme (const IID & iIID, IUnknown ** oDrwAxisSysteme) const =0;
   /** @nodoc
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual HRESULT SetDrwAxisSysteme (IUnknown * iDrwAxisSysteme) const =0;
   /** @nodoc
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual HRESULT GetAxisSysteme (CATIProduct ** oProduct, const IID & iIID, IUnknown ** oAxisSysteme) const =0;
   /** @nodoc
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual HRESULT SetAxisSysteme (CATIProduct * iProduct, IUnknown * iAxisSysteme) const =0;
   /** @nodoc
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual HRESULT GetAxisSystemeOrigin (CATMathPoint &ioOrigin) const =0;

   /**
    * Returns the 3D points extraction mode.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual int Get3DPointExtractionMode(CATBoolean* IsOverloaded = NULL) = 0;

    /**
    * Valuates the 3D points extraction mode.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual void Set3DPointExtractionMode(int iPTMode) = 0;

   /** @nodoc
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual HRESULT Get3DMgt (const IID & iIID, IUnknown ** o3DMgt) const =0;

    /**
    * Returns the mode of color inheritance, from V5R9.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @return
    *  0: no inheritance, 1: inheritance
    */
    virtual HRESULT Get3DColorInheritance(int & o3DColor, CATBoolean* IsOverloaded = NULL) = 0;

    /**
    * Valuates the mode of color inheritance, from V5R9.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual HRESULT Set3DColorInheritance(int i3DColor) = 0;

    /**
    * Returns the symbol of projected points, from V5R9.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @return
    *  0: inheritance from 3D point
    *  other: the symbol number
    */
    virtual HRESULT Get3DPointsSymbol(int & oSymbol,  CATBoolean* IsOverloaded = NULL) = 0;

    /**
    * Valuates the symbol of projected points, from V5R9.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual HRESULT Set3DPointsSymbol(int iSymbol) = 0;
 
	/**
    * Retrieves the generated geometry representation mode.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param oRepMode 
    *  The different modes of representation 
    *  <br><b>Legal values</b>: Possible values are catExactMode (2D geometry
	*  generated from topological data) or catPolyhedricMode (2D geometry generated from CGR).
    * @return
    * <dt><tt>S_OK</tt> <dd>if operation succeeded.
    * <dt><tt>E_FAIL</tt> <dd>if an unspecified failure has occurred.
    * </dl>
	*/
	/** @nodoc */
    virtual HRESULT GetRepresentationMode (CatRepresentationMode * oRepMode) const =0;
    
    /**
    * Sets the generated geometry representation mode.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param iRepMode 
    *  The different modes of representation 
    *  <br><b>Legal values</b>: Possible values are catExactMode (generated geometry
    *  comes from topological data) or catPolyhedricMode (geometry comes from CGR).
    * @return
    * <dt><tt>S_OK</tt> <dd>if the operation succeeded.
    * <dt><tt>E_FAIL</tt> <dd>if the drawing view owns a detail, section or breakout 
    * specification, or if an unspecified failure has occurred.
    * </dl>
    */
	/** @nodoc */
    virtual HRESULT SetRepresentationMode (const CatRepresentationMode iRepMode) =0;
   /** @nodoc
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual HRESULT InitViewAttributes() = 0;

    /**
    * Retrieves the pixel image generation mode.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param  oMode 
    *  The @href CATViewModeType used to generate the image
    *  <br><b>Accepted values</b>: VIEW_NO_DISPLAY (no image generated), VIEW_HRD,
    * VIEW_MESH or (VIEW_MESH | VIEW_EDGE)
    * @param  oLightSourceOn 
    *  To get spot light source activation
    * @return
    * <dt><tt>S_OK</tt> <dd>if the operation succeeded,
    * <dt><tt>E_INVALIDARG</tt> <dd>if argument pointer NULL,
    * <dt><tt>E_FAIL</tt> <dd>if an unspecified failure occurred.
    * </dl>
    */
    virtual HRESULT GetImageMode (int * oMode, CATBoolean * oLightSourceOn = NULL) =0;

    /**
    * Sets the pixel image generation mode.
    * Image generation mode is exclusive from current 2D geometry generation.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param  iMode 
    *  The @href CATViewModeType used to generate the image
    *  <br><b>Accepted values</b>: VIEW_NO_DISPLAY (no image generated), VIEW_HRD
    * VIEW_MESH or (VIEW_MESH | VIEW_EDGE)
    * @param  iLightSourceOn 
    *  To set spot light source activation (default value activated)
    * @return
    * <dt><tt>S_OK</tt> <dd>if the operation succeeded,
    * <dt><tt>E_INVALIDARG</tt> <dd>if the argument is different from accepted values
    * <dt><tt>E_FAIL</tt> <dd>if an unspecified failure occurred, or the current view
    *  operators are not compatible with pixel image generation mode.
    * </dl>
    */
    virtual HRESULT SetImageMode (const int iMode, CATBoolean iLightSourceOn = TRUE) =0;

    /**
    * @nodoc
    * This method is now replaced by @href CATIGenerSpec#GetImageDPIPrecision
    * Retrieves the generated image definition in dpi, for visualization and print purposes.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param  oMode 
    *  <br><b>Accepted values</b>: 1 the dpi in computed automatically, or 0 if you want
    * to define the dpi for visualization and print purposes yourself.
    * @param  oVisu 
    *  The definition in dpi for visualization (number of pixels per inch in the sheet).
    * @param  oPrint 
    *  The definition in dpi for print purposes.
    * @return
    * <dt><tt>S_OK</tt> <dd>if the operation succeeded,
    * <dt><tt>E_INVALIDARG</tt> <dd>if argument pointer NULL,
    * <dt><tt>E_FAIL</tt> <dd>if an unspecified failure occurred.
    * </dl>
    */
    virtual HRESULT GetImageDPIPrecision (int * oMode, double * oVisu, double * oPrint) =0;

    /**
    * Retrieves the generated image definition in dpi, for visualization and print purposes.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param  oVisuMode
    * The precision mode for visualization.
    *  <br><b>Accepted values</b>: LowQuality, NormalQuality, HighQuality, or Customize
    * (if you want to define the dpi for visualization and print purposes yourself).
    * @param  oPrintMode
    * The precision mode for print purposes.
    *  <br><b>Accepted values</b>: LowQuality, NormalQuality, HighQuality, or Customize
    * (if you want to define the dpi for visualization and print purposes yourself).
    * @param  oVisu 
    *  The definition in dpi for visualization (number of pixels per inch in the sheet).
    * @param  oPrint 
    *  The definition in dpi for print purposes.
    * @return
    * <dt><tt>S_OK</tt> <dd>if the operation succeeded,
    * <dt><tt>E_INVALIDARG</tt> <dd>if argument pointer NULL,
    * <dt><tt>E_FAIL</tt> <dd>if an unspecified failure occurred.
    * </dl>
    */
    virtual HRESULT GetImageDPIPrecision (RasterLevelOfDetail * oVisuMode, RasterLevelOfDetail * oPrintMode, double * oVisu, double * oPrint) =0;

    /**
    * @nodoc
    * This method is now replaced by @href CATIGenerSpec#SetImageDPIPrecision
    * Sets the generated image definition in dpi, for visualization and print purposes.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param  iMode 
    *  <br><b>Accepted values</b>: 1 the dpi in computed automatically, or 0 if you want
    * to define the dpi for visualization and print purposes yourself.
    * @param  iVisu 
    *  The definition in dpi for visualization (number of pixels per inch in the sheet).
    * @param  iPrint 
    *  The definition in dpi for print purposes.
    * @return
    * <dt><tt>S_OK</tt> <dd>if the operation succeeded,
    * <dt><tt>E_INVALIDARG</tt> <dd>if an argument is negative,
    * <dt><tt>E_FAIL</tt> <dd>if an unspecified failure has occurred.
    * </dl>
    */
    virtual HRESULT SetImageDPIPrecision (const int iMode, const double iVisu, const double iPrint) =0;

    /**
    * Sets the generated image definition in dpi, for visualization and print purposes.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param  iVisuMode
    * The precision mode for visualization.
    *  <br><b>Accepted values</b>: LowQuality, NormalQuality, HighQuality, or Customize
    * (if you want to define the dpi for visualization and print purposes yourself).
    * @param  iPrintMode
    * The precision mode for print purposes.
    *  <br><b>Accepted values</b>: LowQuality, NormalQuality, HighQuality, or Customize
    * (if you want to define the dpi for visualization and print purposes yourself).    * @param  iVisu 
    *  The definition in dpi for visualization (number of pixels per inch in the sheet).
    * @param  iPrint 
    *  The definition in dpi for print purposes.
    * @return
    * <dt><tt>S_OK</tt> <dd>if the operation succeeded,
    * <dt><tt>E_INVALIDARG</tt> <dd>if an argument is negative,
    * <dt><tt>E_FAIL</tt> <dd>if an unspecified failure has occurred.
    * </dl>
    */
    virtual HRESULT SetImageDPIPrecision (const RasterLevelOfDetail iVisuMode, const RasterLevelOfDetail iPrintMode, const double iVisu, const double iPrint) =0;

    /**
    * Retrieves the Occlusion Culling mode for generating views.
    * Occlusion Culling uses the graphic card to improve performance during view
    * generation, by avoiding the loading of hidden bodies.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param  oMode
    *  TRUE if Occlusion Culling is available, FALSE if not.
    * @return
    * <dt><tt>S_OK</tt> <dd>if the operation succeeded.
    * <dt><tt>E_INVALIDARG</tt> <dd>if argument pointer NULL,
    * <dt><tt>E_FAIL</tt> <dd>if an unspecified failure has occurred.
    * </dl>
    */
    virtual HRESULT GetOcclusionCullingMode (boolean * oMode) =0;

    /**
    * Sets the Occlusion Culling mode for generating views.
    * Occlusion Culling uses the graphic card to improve performance during view
    * generation, by avoiding the loading of hidden bodies.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param  iMode
    *  TRUE to enable Occlusion Culling, FALSE if not.
    * @return
    * <dt><tt>S_OK</tt> <dd>if the operation succeeded,
    * <dt><tt>E_FAIL</tt> <dd>if an unspecified failure has occurred.
    * </dl>
    */
    virtual HRESULT SetOcclusionCullingMode (const boolean iMode) =0;

    /**
    * Retrieves the bounding box limits under which a part
    * will not be taken into account during view generation.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param  oLimit
    *  The limit value. 0. means that no part will be filtered.
    * @return
    * <dt><tt>S_OK</tt> <dd>if the operation succeeded,
    * <dt><tt>E_INVALIDARG</tt> <dd>if argument pointer NULL,
    * <dt><tt>E_FAIL</tt> <dd>if an unspecified failure has occurred.
    * </dl>
    */
    virtual HRESULT GetLimitBoundingBox (double * oLimit) =0;

    /**
    * Sets the bounding box limits under which a part
    * will not be taken into account during view generation.
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    * @param  iLimit
    *  The limit value. Set it to 0. to disable this filter.
    * @return
    * <dt><tt>S_OK</tt> <dd>if the operation succeeded.
    * <dt><tt>E_FAIL</tt> <dd>if an unspecified failure has occurred.
    * </dl>
    */
    virtual HRESULT SetLimitBoundingBox (const double iLimit) =0;

   /** @nodoc
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual HRESULT GetHRVparameters (int * oLevelOfDetail) =0;
    
   /** @nodoc
    * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
    */
    virtual HRESULT SetHRVparameters (int iLevelOfDetail) =0;

};
CATDeclareHandler(CATIGenerSpec, CATBaseUnknown);
#endif

