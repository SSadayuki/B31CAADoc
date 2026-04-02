// COPYRIGHT Dassault Systemes 2004
//===================================================================
//
// CATIMfgMachiningContainer.h
// Define the CATIMfgMachiningContainer interface
//
//===================================================================
#ifndef CATIMfgMachiningContainer_H
#define CATIMfgMachiningContainer_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgMachiningContainer;
#else
extern "C" const IID IID_CATIMfgMachiningContainer ;
#endif


/**
 * Interface to manage the machining activities container.
 *
 * <b>Role</b>: This interface allows to initialize the machining activities container. 
 */
class ExportedByMfgItfEnv CATIMfgMachiningContainer: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**
   * Gets the root activity.
   * @param oRoot The root activity
   */
  virtual HRESULT  GetRootActivity (CATBaseUnknown_var& oRoot) = 0;

  /**
   * Retrieves the current activity responding to given interface.
   * @param iInterface The filtering interface
   * @param oCurrentActivity The current activity
   */
  virtual HRESULT  GetCurrentActivity (const CATIdent iInterface, CATBaseUnknown_var& oCurrentActivity) = 0;

  /**
   * Sets the current activity.
   * @param iCurrentActivity The current activity
   */
  virtual HRESULT  SetCurrentActivity (const CATBaseUnknown_var& iCurrentActivity) = 0;

  /**
   * Retrieves the current program.
   * @param oActivity The current program
   */
  virtual HRESULT  GetUnSequencedActivity (CATBaseUnknown_var& oActivity) = 0;

  /**
   * Initializes the activity container.
   * @param iDestroyExistingData Not used
   * @param iCreateDefaults To determine if default activities (Part Operation and program) have to be created.
   *   <br><b>Legal values</b>: 1 if default activities have to be created. This is the default value.
   *                            Any other value otherwise.
   */
  virtual HRESULT  InitContainer (boolean iDestroyExistingData, int iCreateDefaults=1) = 0;

  /**
   * Updates the visu of activities belonging to the current Part Operation.
   */
  virtual HRESULT  RefreshVisuForCurrentSetup () = 0;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

CATDeclareHandler(CATIMfgMachiningContainer, CATBaseUnknown);


#endif
