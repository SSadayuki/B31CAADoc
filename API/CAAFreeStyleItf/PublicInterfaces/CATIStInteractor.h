#ifndef CATIStInteractor_H
#define CATIStInteractor_H

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2005
//==============================================================================
//
// CATIStInteractor:
//   Class defining basic behaviors for interactors.
//
//==============================================================================
// Usage Notes :
//  --------------------------------------------------
//   IMPORTANT : DASSAULT SYSTEMES INTERNAL USE ONLY.
//  --------------------------------------------------
//
//------------------------------------------------------------------------------
//  Inheritance : CATIStInteractor (CAAFreeStyleItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================
// June. 05   Creation                                    Jean-Michel PLOUHINEC
//==============================================================================

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */

#include "CAAFreeStyleItf.h"

#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
  extern  ExportedByCAAFreeStyleItf IID IID_CATIStInteractor;
#else
  extern "C" const IID IID_CATIStInteractor;
#endif

#include "CATIStRefresh.h"

#include "CATBoolean.h"
#include "CATISpecObject.h"

class CATCommand;
class CATNotification;

/**
 * Class defining basic behaviors for a control points mesh.
 * <br><b>Role</b>:  Create the factory with the global function <tt>CATCreateStInteractiveFactory</tt>
 * <li> Use it to create a dedicated <tt>CATCommand</tt>
 * <li> When it is not needed anymore:
 * <li> Call CATIStInteractor#CleanDependencies() method,
 * <li> then call CATCommand#RequestDelayedDestruction() method.
 */

class ExportedByCAAFreeStyleItf CATIStInteractor : public CATBaseUnknown
{
    CATDeclareInterface;

public:

    /** 
	 * Method to clean this interactor synchronously.
	 * <li> This method must be used before calling CATCommand#RequestDelayedDestruction() method.
	 */
    virtual HRESULT CleanDependencies() = 0;

    /**
     * Activates a command.
     * @param iFromClient
     *   The command that requests to activate the current one.
     * @param iNotification
     *   The notification sent.
     */
    virtual HRESULT Enable(CATCommand      * iFromClient,
                           CATNotification * iNotification) = 0;

    /**
     * Deactivates a command.
     * <li> Called by the command owner to temporarily withdraw the focus from the command.
     * @param iFromClient
     *   The command that requests to deactivate the current one.
     * @param iNotification
     *   The notification sent.
     */
    virtual HRESULT Disable(CATCommand      * iFromClient,
                            CATNotification * iNotification) = 0;

    /** 
	 * Method to set the visibility of the interactor.
	 * @param iShowMode
     *   A CATBoolean representing the show status (CATTrue: visible, CATFalse: hiden).
	 */
    virtual HRESULT SetShowMode(const CATBoolean iShowMode) = 0;

    /** 
	 * Method to complete refresh after a model change.
	 * @param iSpecModel
     *   A CATISpecObject_var object representing the model.
	 * @param iSpecModel
     *   A CATISpecObject_var object representing the model.
	 */
    virtual HRESULT SetRefreshMethod(const CATISpecObject_var & iSpecModel,
                                           CATIStRefresh_var  & iRefreshMethod) = 0;
};

CATDeclareHandler(CATIStInteractor, CATBaseUnknown);

#endif 
