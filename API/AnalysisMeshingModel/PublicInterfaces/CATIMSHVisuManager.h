#ifndef  CATIMSHVisuManager_h 
#define  CATIMSHVisuManager_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1 
 * @CAA2Usage U3 
 */

#include "MSHModel.h"
#include "CATBaseUnknown.h"
#include "CATMSHViewMode.h"
#include "CATBoolean.h"

class CATMSHElement;
class CATMSHNode;
class CATIProduct;
class CATPathElement;
class CATMSHMeshDomain;

extern ExportedByMSHModel IID IID_CATIMSHVisuManager;

/**
 * Interface giving access to visualization services on the <b>Mesh Manager</b>.
 * See @href CATIMSHMeshManager.
 */
class ExportedByMSHModel CATIMSHVisuManager : public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /**
   * Way used to visualize finite elements.
   * @param VisuByMeshPart
   *   Finite elements are visualized through the <b>Mesh Part</b> they belong to.
   * @param VisuByElementGroup
   *   Finite elements are visualized through the <b>Group(s)</b> they belong to.
   */
  enum CATMSHVisuWay
  {
    VisuByMeshPart ,
    VisuByElementGroup
  };
  /**
   * Set the way used to visualize finite elements.
   * @param iWay
   *   Way used to visualize finite elements.
   *   <br><b>Legal values</b>: 
   *   <dl><dt>VisuByMeshPart</dt><dd>Finite elements are visualized through Mesh Parts.
   *   <dt>VisuByElementGroup</dt><dd>Finite elements are visualized through Groups.</dl>
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>Visualization way has been successfully activated.
	 *   <dt>E_FAIL</dt><dd>A problem occured.
	 *   </dl>
   */
  virtual HRESULT SetVisualizationWay ( CATMSHVisuWay iWay ) = 0;

  /**
   * Mode used to visualisation finite elements.
   * @param StandardVisualization
   *   Finite elements are visualized using color of their Mesh Part/Group.
   * @param QualityVisualization
   *   Finite elements are visualized using color corresponding to their quality.
   * @param OrientationVisualization
   *   Finite elements are visualized using color corresponding to their orientation.
   */
  enum CATMSHVisuMode
  {
    StandardVisualization ,
    QualityVisualization ,
    OrientationVisualization
  };
  /**
   * Set the mode used to visualize finite elements.
   * @param iMode
   *   Mode used to visualize finite elements.
   *   <br><b>Legal values</b>: 
   *   <dl><dt>StandardVisualization</dt><dd>Finite elements color correspond to Mesh Part/Group.
   *   <dl><dt>QualityVisualization</dt><dd>Finite elements color correspond to quality.
   *   <dt>OrientationVisualization</dt><dd>Finite elements color correspond to orientation.</dl>
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>Visualization mode has been successfully activated.
	 *   <dt>E_FAIL</dt><dd>A problem occured.
	 *   </dl>
   */
  virtual HRESULT SetVisualizationMode ( CATMSHVisuMode iMode ) = 0;

  /**
   * Set the visibility of the entire mesh (nodes and elements).
   * @param iVisible
   *   Visibility mode.
   *   <br><b>Legal values</b>: 
   *   <dl><dt>0</dt><dd>Nodes and elements are not visible.
   *   <dt>1</dt><dd>Nodes and elements are visible.</dl>
   */
  virtual void SetVisibility ( int iVisible = 1 ) = 0;

  /**
   * Set the sensitivity to picking of the entire mesh (nodes and elements).
   * @param iPicking
   *   Picking sensitivity.
   *   <br><b>Legal values</b>: 
   *   <dl><dt>0</dt><dd>Nodes and elements are not sensitive to picking.
   *   <dt>1</dt><dd>Nodes and elements can be picked.</dl>
   */
  virtual void SetPickMode ( int iPicking ) = 0;

  /**
   * @nodoc
   */
  virtual void SetGroupVisualisation ( CATBoolean Active ) = 0;

  /**
   * Build a path element from a finite element node.
   * <br><b>Role</b>: This method should be used in order to build a path element from a finite element node.
   * <p>The resulting path element can be used to highlight the node.
   * @param iNode
   *   Finite element node to be placed at bottom of the path element. 
	 * @return  CATBaseUnknown#Release
	 *   The created path element.
   */
  virtual CATPathElement * BuildPathElement ( CATMSHNode * iNode ) = 0;

  /**
   * Build a path element from a finite element.
   * <br><b>Role</b>: This method should be used in order to build a path element from a finite element.
   * <p>The highlight can be either the full element, a face or an edge.
   * <p>The resulting path element can be used to highlight the element, the face or the edge.
   * @param iElement
   *   Finite element to be placed at bottom of the path element. 
   * @param iFaceNumber
   *   Face number to be placed in path element. A -1 value indicates all faces. 
   * @param iEdgeNumber
   *   Edge number to be placed in path element. A -1 value indicates all edges. 
	 * @return CATBaseUnknown#Release
	 *   The created path element.
   */
  virtual CATPathElement * BuildPathElement ( CATMSHElement * iElement , int iFaceNumber = -1 , int iEdgeNumber = -1 ) = 0;
 
  /**
   * @nodoc 
	 * @return CATBaseUnknown#Release
   */
  virtual CATPathElement * BuildPathElement ( CATIProduct * Product , CATBaseUnknown * Support ) = 0;

  /**
   * Build a path element from a <b>Mesh Domain</b>.
   * <br><b>Role</b>: This method should be used in order to build a path element from a <b>Mesh Domain</b>.
   * <p>The resulting path element can be used to highlight the <b>Mesh Domain</b>.
   * @param iNode
   *   <b>Mesh Domain</b> to be placed at bottom of the path element. 
	 * @return  CATBaseUnknown#Release
	 *   The created path element.
   */
  virtual CATPathElement * BuildPathElement ( CATMSHMeshDomain * iDomain ) = 0;

  /**
   * @nodoc
   */
  virtual CATBoolean IsGroupVisualisationActive () = 0;

  /**
   * Set the resolution of the entire mesh ( 1D elements only ).
   * @param iResolution
   *   Value of the mesh resolution.
   *   <br><b>Legal value</b>: 
   *   <dl><dt>Strictly positive</dt></dl>
   */
   virtual void SetResolution1D ( float iResolution ) = 0;

  /**
   * Get the resolution of the entire mesh ( 1D elements only ).
	 * @return Float
	 *   The mesh current resolution value.
   */
  virtual float GetResolution1D ( ) const = 0;

  /**
   * Returns the visibility of the entire mesh (nodes and elements).
   */
  virtual int GetVisibility () = 0;
};

CATDeclareHandler ( CATIMSHVisuManager, CATBaseUnknown );
#endif
