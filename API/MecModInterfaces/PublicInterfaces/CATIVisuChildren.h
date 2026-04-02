/* -*-c++-*- */
// -------------------------------------------------------------------
// COPYRIGHT DASSAULT SYSTEMES 2002

#ifndef CATIVisuChildren_h
#define CATIVisuChildren_h

// L1 U4
/**
* @CAA2Level L0
* @CAA2Usage U0   CATExtIGeomVisuChildren
*/

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATMfViewDefs.h"

class CATListValCATBaseUnknown_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIVisuChildren;
#else
extern "C" const IID IID_CATIVisuChildren;
#endif

/**
*  Interface.
*  <b>Role :</b>
*  For a given model architecture, defines the corresponding visualization tree 
*  (how the visual representations have to be aggregated).
*/
class ExportedByMecModItfCPP CATIVisuChildren : public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /**
  * Gives the model children whose representations have to be aggregated 
  * under the same father rep as the representation of this in the visualization tree.
  * <br><b>Role : </b>. Use this method for children that have to be visualized independantly 
  * (eg. independant highlight, no show behavior).
  * Refer to the 
  * @href CATExtIVisuChildren#GetChildrenToVisualizeBeforeAndAfterMyRep 
  * method for details.
  * @param oBefore : list of children whose reps have to be aggregated before the rep of this 
  * in the visualization tree (eg. input of this).
  * @param oAfter : list of children whose reps have to be aggregated after the rep of this
  * in the visualization tree (eg. output of this).
  * @param iViewContext 
  *   The view context. 
  *   <br><b>Legal values</b>:
  *   <ul>
  *    <li><tt>MfDefault3DView</tt>: The default 3D view</li>
  *    <li><tt>MfUnfoldedView</tt>: An unfolded view</li>
  *   </ul>
  */
  virtual HRESULT GetChildrenToVisualizeBeforeAndAfterMyRep(CATListValCATBaseUnknown_var** oBefore, 
                                                            CATListValCATBaseUnknown_var** oAfter,
                                                            const CATUnicodeString& iViewContext = MfDefault3DView) = 0;
  /**
  * Gives the model children whose representations have to be aggregated
  * under the representation of this in the visualization tree.
  * <br><b>Role : </b>. Use this method for objects (ex : feature sons) whose visualization has
  * to follow the representation of this (eg. simultaneous highlight, no show of a whole model branch).
  * Refer to the 
  * @href CATExtIVisuChildren#GetChildrenToVisualizeUnderMyRep 
  * method for details.
  * @param oUnder : list of children whose reps have to be aggregated under the rep of this 
  * in the visualization tree.
  * @param iViewContext 
  *   The view context. 
  *   <br><b>Legal values</b>:
  *   <ul>
  *    <li><tt>MfDefault3DView</tt>: The default 3D view</li>
  *    <li><tt>MfUnfoldedView</tt>: An unfolded view</li>
  *   </ul>
  */
  virtual HRESULT GetChildrenToVisualizeUnderMyRep(CATListValCATBaseUnknown_var** oUnder,
                                                   const CATUnicodeString& iViewContext = MfDefault3DView) = 0;   

  /**
  * WARNING : to be removed when the interface will be L1 exposed
  */
  virtual HRESULT GetAggregatedConstraintsAndParameters(CATListValCATBaseUnknown_var** oConstraints, const CATUnicodeString& iView = MfDefault3DView) = 0;

};

CATDeclareHandler(CATIVisuChildren, CATBaseUnknown);

#endif
