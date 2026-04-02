//===================================================================
// COPYRIGHT Dassault Systemes 2007
//===================================================================
//
/**
* @CAA2Level L1
* @CAA2Usage U5 
*/

#ifndef CATIMfgMachiningWorkbenchVisuBehavior_H
#define CATIMfgMachiningWorkbenchVisuBehavior_H

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgMachiningWorkbenchVisuBehavior;
#else
extern "C" const IID IID_CATIMfgMachiningWorkbenchVisuBehavior ;
#endif


/**
* Interface to define the visualization behaviour of a Machining based workbench.
*
* <br><b>Role</b>: This interface has to be implemented by a partner workbench to choose
* the visualization behaviour. <br>
* Either the behaviour is the Machining one : only the Product and the Machine associated
* to the current Part Operation are displayed in 3D view, the other Products and Resources
* are not displayed (Tools for instance). <br>
* Or the behaviour is the standard Process workbench one : all the Products and all the
* Resources are displayed whatever is the current Part Operation.
*
*/
class ExportedByMfgItfEnv CATIMfgMachiningWorkbenchVisuBehavior: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Gives the workbench visualization behaviour.
     * Implementing this method, set oMachiningBehaviour value according to the expected
     * visualization behaviour.
     * @param oMachiningBehaviour
     *      TRUE if the workbench follows the Machining visualization behaviour, FALSE otherwise.
     *   @return
     *      S_OK.     
     */
     virtual HRESULT FollowMachiningVisuBehaviour (CATBoolean& oMachiningBehaviour) = 0;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

CATDeclareHandler(CATIMfgMachiningWorkbenchVisuBehavior, CATBaseUnknown) ;

#endif
