#ifndef CATSketcherToolbox_H
#define CATSketcherToolbox_H
// COPYRIGHT DASSAULT SYSTEMES 2004
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
//===================================================================
//
// CATSketcherToolbox.h
// Header definition of CATSketcherToolbox
//
//===================================================================
//
// Usage notes : Public for CAA
//
//===================================================================
//  Dec 2004  Creation                               S. MAYER (SMR)
//===================================================================
#include "CATSktToolbox.h"
#include "CATErrorDefs.h"

class CATBaseUnknown;
class CATPathElement;
/**
 * Toolbox containing services linked to the current Drafting or Sketcher application editor.
 */
class ExportedByCATSktToolbox CATSketcherToolbox
{
  public:

   /**
   *  Create a Path Element for any element aggregated by a Sketh or Drawing View.
   *<b>Role</b>: Create a path Element for any elements <b>aggregated</b> by a Sketh or a Drawing View. UI active Object must be either a 
   * Drawing like feature or a Sketch like feature. 
   * In the other cases this service fails. For other drafting/Sketcher elements (e.g. Drawing, Sheet, Sketch,...) use CATIBuildPath.
   * This service uses the current UI-Active path as creation context for the output path. For more information about path context, see CATIBuildPath.
   * As a consequence, using this service in an UIAtive object change transaction may lead to unpredictible result. See CATFrmEditor::SetActivePath
   * @param iElement
   * Pointer on element from which the path element will be created.
   * @param oPath
   * Path element.
   * @return
   * <tt>HRESULT</tt>
   * <dl>
   * <dt><tt>S_OK</tt> <dd>The Path Element  has been correctly created.
   * <dt><tt>E_FAIL</tt> <dd>if the operation failed.
   * <dt><tt>E_INVALIDARG</tt> <dd>Check input argument
   * <dt><tt>E_UNEXPECTED</tt> <dd>Check input argument, UI active Object or calling context.
   * </dl>
   * @see CATPathElement.
   * @see CATIBuildPath
   * @see CATFrmEditor#SetActivePath
   */
    static HRESULT BuildPath( IUnknown * iElem, CATPathElement *& oPath );
};

#endif
