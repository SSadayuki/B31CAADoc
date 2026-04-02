// COPYRIGHT Dassault Systemes 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef CATIDftGenViewFactory_H
#define CATIDftGenViewFactory_H

#include "DraftingItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATDftViewType.h"

class CATIDftView;
class CATIDftSheet;
class CATIProduct;
class CATMathDirection;
class CATMathPoint; 
class CATISketch;
class CATCell;
class CATBody;
class CATListPtrCATMathPoint2D;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftGenViewFactory;
#else
extern "C" const IID IID_CATIDftGenViewFactory ;
#endif

//------------------------------------------------------------------

/**
 * This interface contains methods to create generative drafting views.
 * <b>Role</b>: This interface is implemented by sheet object.
 */
class ExportedByDraftingItfCPP CATIDftGenViewFactory: public CATBaseUnknown
{
   CATDeclareInterface;
   
   public:
   
  /**
   * Create a Standalone Section View.
   *<b>Role</b>: Create a standalone section view with associative cutting profile to 3D element.
   * The authorised 3D elements are either a sketch element or plannar face or a plan.
   * @param iPtOrigin[2] 
   * Coordinates of anchor point of the section view created.
   * @param iViewType
   * Type of the View: 
   * <br><b>Legal values</b>: DftSectionView,DftSectionCutView
   * @param iVecPro
   *  The direction of projection of the view:
   *  This direction must be contained in the plane of the section and must be:
   *  Perpandicular to the first line of the Sketch for profile defined by a Sketch.
   *  Perpandicular to the line created by two limit points of the profile for profile defined by a Plane or a planar face.
   * @param iViewProfile
   * Type of the profile:
   * <br><b>Legal values</b>: 0: Offset, 1: Aligned
   * @param i3DSketch
   *  The cutting profile is defined by a 3D sketch containing the geometry's description of the section profile
   *  <br><b>Legal values</b>: if NULL,  The profile must be defined by a plan or a plane face in the drawing
   * @param ipiCell
   *  The cutting profile is defined by a plan or plane face.
   *  <br><b>Legal values</b>: if NULL, The profile must be defined by a sketch
   * @param ipiBody
   *  Associated body if the cutting profile is defined by a plan or plane face.
   *  <br><b>Legal values</b>: NULL, if the profile is defined by a sketch.
   * @param iLimitPoints
   *  2 points limits of the cutting profile, if the cutting profile is defined by a plan or a plane face.
   * @param iProduct
   * In the case of a 3D element is defined in CATProduct document, iProduct defines instance in the product containing i3DSketch or i3DElement
   * <br><b>Legal values</b>: NULL, if the profile is defined in CATPart
   * @return
   * <dt><tt>S_OK</tt> <dd>if the view section was correctly added.
   * <dt><tt>E_INVALIDARG</tt> <dd>if the arguments are incorrect.
   * <dt><tt>E_FAIL</tt> <dd>if the operation failed.
   * </dl>
   */
   virtual HRESULT CreateStandAloneSectionView(double *iptOrigin, CATDftViewType iViewType, CATMathDirection iVecpro,int iViewProfile, CATISketch *ipi3DSketch, 
                                                                                         CATCell *ipiCell,CATBody *ipiBody, CATMathPoint iLimitPoints[2], CATIProduct* ipiProduct,
                                                                                         CATIDftView **opiSectionView) = 0;
   
   /**
   *  Create a section view.
   *<b>Role</b>: Create a section view from a generative view called mother view. The section view will be defined by a cutting-profile defined in the mother view.
   * @param iPtOrigin[2] 
   * Coordinates of anchor point of the section view created.
   * @param iViewType
   * Type of the View: 
   * <br><b>Legal values</b>: DftSectionView, DftSectionCutView,
   * @param iViewProfile
   * Type of the profile:
   * <br><b>Legal values</b>: 0: Offset, 1: Aligned
   * @param iSideToDraw
   * The side of the section to draw.
   * This side is defined according to the first segment of the section
   * profile.
   * This segment is oriented from its start point to its end point.
   * When looking along this segment, from its start point towards its
   * end point, setting <tt>iSideToDraw</tt> to 0 (clockwise) draws the
   * section seen from the left of the segment.
   * Setting <tt>iSideToDraw</tt> to 1 (counterclockwise)draws the
   * section seen from the right of the segment.
   * <br><b>Legal values</b>: 0: Clockwise, 1: Counterclockwise
   * @param iListOfPoints
   * List of points defined the cutting profile (At least 2 points). 
   * @param ipiMotherView
   * Pointer on the mother view.
   * @param opiSectionView
   * Pointer on the new section view.
   * @return
   * <tt>HRESULT</tt>
   * <dl>
   * <dt><tt>S_OK</tt> <dd>if the section view was correctly added.
   * <dt><tt>E_INVALIDARG</tt> <dd>if the arguments are incorrect.
   * <dt><tt>E_FAIL</tt> <dd>if the operation failed.
   * </dl>
   */
   virtual HRESULT CreateSectionView(double *iptOrigin, CATDftViewType iViewType, int iViewProfile, int iSideToDraw, 
                                                                     CATListPtrCATMathPoint2D iListOfPoints, CATIDftView *ipiMotherView,
                                                                     CATIDftView **opiSectionView) = 0;
   
   /**
   *  Create a view from 3D.
   *<b>Role</b>: A View From 3D is extracted from a 3D part, document or process that is assigned 3D tolerance specifications and annotations.
   * @precondition: View From 3D Settings options are not taken into account by default. To use seetings options, the following environment variable
   * must be valuated: Drw_CAA_ViewFrom3D_Settings=1.
   * @param iPtOrigin[2] 
   * Coordinates of anchor point of the view created.
   * @param ipiTPSView
   * Pointer on TPSView: This pointer may be retrieved by using QueryInterface on CATITPSView pointer.
   * @param opiDftView
   * Pointer on the new view.
   * @return
   * <tt>HRESULT</tt>
   * <dl>
   * <dt><tt>S_OK</tt> <dd>if the view was correctly added.
   * <dt><tt>E_INVALIDARG</tt> <dd>if the arguments are incorrect.
   * <dt><tt>E_FAIL</tt> <dd>if the operation failed.
   * </dl>
   * @see CATITPSView.
   */
   virtual HRESULT CreateViewFrom3D (double *iptOrigin, IUnknown *ipiTPSView, CATIDftView **opiDftView) = 0;
   
   // No constructors or destructors on this pure virtual base class
   // --------------------------------------------------------------
};
CATDeclareHandler(CATIDftGenViewFactory, CATBaseUnknown);
//------------------------------------------------------------------

#endif
