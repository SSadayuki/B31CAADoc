// COPYRIGHT Dassault Systemes 2005
#ifndef CATIMfgActivityDefaultValuesMngt_H
#define CATIMfgActivityDefaultValuesMngt_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgActivityDefaultValuesMngt;
#else
extern "C" const IID IID_CATIMfgActivityDefaultValuesMngt ;
#endif

//------------------------------------------------------------------

/**
 * Interface to manage default values on a Manufacturing Activity.
 * <b>Role</b>:This interface is to be invoqued in a CAA Partner Application to apply 
 * to a newly created Manufacturing Activity the default values of parameters.
 * A default implementation is provided for Manufacturing Activities<br>
 */
class ExportedByMfgItfEnv CATIMfgActivityDefaultValuesMngt: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**
   * Manage default values depending on Machining / Operation/ Apply default values Setting.
   * @param iApply
   *        <br><b>Legal values</b>: 1 to apply default values if setting is ON. 
   *                                 0 to only read setting value.
   * @param oSetting
   *        <br><b>Legal values</b>: 1 if setting is ON. User requests default values to be applied.
   *                                 0 if setting is OFF.User does not request default values to be applied.
   */

     virtual HRESULT ManageDefaultValues (const int iApply , int & oSetting ) = 0;


  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

// use this interface with handlers
CATDeclareHandler(CATIMfgActivityDefaultValuesMngt, CATBaseUnknown) ;
//------------------------------------------------------------------

//------------------------------------------------------------------
#endif
