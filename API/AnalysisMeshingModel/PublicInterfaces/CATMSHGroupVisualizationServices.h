#ifndef CATMSHGroupVisualizationServices_h
#define CATMSHGroupVisualizationServices_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L0
 * @CAA2Usage U1
 */ 

#include "MSHModel.h"
#include <stddef.h>
#include "CATBoolean.h"



/**
 * Object to be used to manage group visualization.
 */
class ExportedByMSHModel CATMSHGroupVisualizationServices
{

public:

 /**
  * Sets the group visualization status.
  * <br><b>Role</b>: Activates or desactivates the group visualization.
  * <br>When activated, all groups can be visualized.
  * @param iActive
  *  <b>Legal values</b>:
  *  <br><tt>FALSE</tt> :The group visualization is not activated.
  *  <br><tt>TRUE</tt>  :The group visualization is activated.
	  * @return
	  *   An HRESULT.
	  *   <br><b>Legal values</b>:
	  *   <dl><dt>S_OK</dt><dd>The mode has been set.
	  *   <dt>E_FAIL</dt><dd>The mode cannot be set.
	  *   </dl>
  */
  static HRESULT SetGroupVisualization(CATBoolean iActive);

  /**
   * Retrieves the status of the Group visualization Activation 
   * @return 
   *  <br><tt>FALSE</tt> : The group visualization is not activated.
   *  <br><tt>TRUE</tt>  : The group visualization is activated.
   */
  static CATBoolean IsGroupVisualizationActive ();

};

#endif
