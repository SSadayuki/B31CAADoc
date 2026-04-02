#ifndef CATIStInteractiveFactory_H
#define CATIStInteractiveFactory_H

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//==============================================================================
//
// CATIStInteractiveFactory :
//   Class defining the factory for dedicated interactive components.
//
//==============================================================================
// Usage Notes :
//  --------------------------------------------------
//   IMPORTANT : DASSAULT SYSTEMES INTERNAL USE ONLY.
//  --------------------------------------------------
//
//------------------------------------------------------------------------------
//  Inheritance : CATIStInteractiveFactory (CAAFreeStyleItf FW)
//                  CATBaseUnknown   (System FW)
//==============================================================================
// Dec. 02   Creation                                     Jean-Michel PLOUHINEC
//==============================================================================

#include "CAAFreeStyleItf.h"

#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByCAAFreeStyleItf IID IID_CATIStInteractiveFactory;
#else
extern "C" const IID IID_CATIStInteractiveFactory;
#endif

#include "CATString.h"
#include "CATCallbackManager.h"

#include "CATDlgEngUtility.h"
#include "CATFeatureImportAgent.h"
#include "CATElemAndSuppAcquType.h"

/**
 * @nodoc
 * Class defining the factory for dedicated interactive components
 * <ul>
 * <li> Create the factory with the global function <tt>CATCreateStInteractiveFactory</tt>
 * <li> Use it to create a dedicated <tt>CATFeatureImportAgent</tt>
 * <li> Release this interface when it is not needed anymore.
 */ 

class ExportedByCAAFreeStyleItf CATIStInteractiveFactory : public CATBaseUnknown
{
    CATDeclareInterface;

public :
   
    /**
     * @nodoc
     * Create a <tt>CATFeatureImportAgent</tt> dedicated to the selection of support.
     * @param oFeatureImportAgent
     * The pointer to the created agent.
     *
     * @param iId
     *   The agent identifier.
     * @param iParsingBehavior
     *   The parising behavior of the agent and the type of the supports
     *   <br>e.g.: <code>CATDlgEngRepeat|CATDlgEngActive</code>
     * @param iType
     *   The type of the expected objects.
     *   The type corresponds to an interface implemented by the object. 
     *   <br><b><Legal values></b>: <tt>iType</tt> is the name of the interface
     *   that the expected objects must implement. If it is NULL, all the objects
     *   may be selected.
     * @param iBehavior
     *   The agent behavior.
     *   <br><b>Legal values</b>: The agent behavior is defined with facet values
     *   separeted with the | character.
     *   <br>e.g.: <code>CATSuppSelAgFeatureSupport|CATSuppSelAgGeometricSupport</code>
     *   <br>If it is NULL, the parsing behavior is CATSuppSelAgFeatureSupport.
     * @param iMode
     *   The featurization mode to featurized the selected geometry.
     *   <br><b>Legal values</b>: The featurization mode is defined with options
     *   separeted with the | character.
     *   <br>e.g.: <code>MfRelimitedFeaturization|MfPermanentBody</code>
     *   See CATMfBRepDefs.h .
     *   The default featurization mode is the MfNoFeaturization option.
     *   <br>The featurization mode may be specified later with the @href #SetAgentBehavior method.
     * @param iSupport
     *   The support of the featurized object.
     *   <br><b>Legal values</b>: NULL_var when <tt>iMode</tt> is MfNoFeaturization or MfFunctionalFeaturization.
     *   Or the support feature if it is required by the featurization option and known.
     *   <br>The support of the featurized object may be specified later with the @href #SetAgentBehavior method.
     * @param iAgBehavior
     *   The local agent behavior.
     *   The default local agent behavior is NULL value.
     *   <br>The local behavior may be specified later with the @href #SetAgentBehavior method.
     *
     * @see CATFeatureImportAgent, CATFeatureAgent, CATPathElementAgent, CATPathElement
     *      CATIStSupportSelection, CATIStFeatureAndSupportAgent, CATElemAndSuppSelAgent
     */
    virtual HRESULT CreateFeatureAndSupportsSelectionAgent(      CATDialogAgent          *& oDialogAgent,
                                                           const CATString                & iId,
                                                                 CATEltAndSuppAgentBehavior iParsingBehavior = CATSuppSelAgFeatureSupport,
                                                                 CATClassId                 iType            = NULL,
                                                                 CATDlgEngBehavior          iBehavior        = NULL,
                                                                 CATMfFeaturizeMode         iMode            = NULL,
                                                           const CATBaseUnknown_var       & iSupport         = NULL_var,
                                                                 CATImportAgentBehavior     iAgBehavior      = NULL) = 0;

    /** 
     * @nodoc
     * Create a <tt>CATCallBackManager</tt> dedicated to the FreeStyle settings management.
     * @param oFreeStyleSettings
     * The pointer to the created manager.
     *
     * @see CATCallBackManager
     */
    virtual HRESULT GetFreeStyleSettings(CATCallbackManager *& oFreeStyleSettings) = 0;
};

CATDeclareHandler(CATIStInteractiveFactory, CATBaseUnknown);

#endif
