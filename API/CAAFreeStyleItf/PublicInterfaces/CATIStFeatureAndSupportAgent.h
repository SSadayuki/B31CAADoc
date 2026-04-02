#ifndef CATIStFeatureAndSupportAgent_H
#define CATIStFeatureAndSupportAgent_H

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//==============================================================================
//
// CATIStFeatureAndSupportAgent :
//   Interface for retreiving the value of a FeatureAndSupportAgent created
//   through the CATIStInteractiveFactory
//
//==============================================================================
// Usage Notes :
//  --------------------------------------------------
//   IMPORTANT : DASSAULT SYSTEMES INTERNAL USE ONLY.
//  --------------------------------------------------
//
//------------------------------------------------------------------------------
//  Inheritance : CATIStFeatureAndSupportAgent  (CAAFreeStyleItf FW)
//                  CATBaseUnknown              (System FW)
//==============================================================================
// Dev. 02   Creation                                          Guillaume BOUDIER
//==============================================================================

#include "CAAFreeStyleItf.h"

#include "CATBaseUnknown.h"

class CATPathElement;
class CATSO;
class CATIStAgentExtraFilter_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByCAAFreeStyleItf IID IID_CATIStFeatureAndSupportAgent;
#else
extern "C" const IID IID_CATIStFeatureAndSupportAgent;
#endif


/**
 * @nodoc
 * Class for retrieving the value of a FeatureAndSupportAgent. 
 * <ul>
 * <li> Retrieve the single value of the agent (if agent's behavior is set
 * <li> to CATDlgEngMonoAcquisition). No AddRef is done on the returned value
 * <li> Retrieve the list of values of the agent (if agent's behavior is set
 * <li> to CATDlgEngMultiAcquisition). No AddRef is done on the returned list
 * <li> Release this interface when it is not needed anymore.
 *  To Retreive the information of the geometrical support, 
 *  query CATIStSupportSelection on the returned CATPathElement
 */ 
class ExportedByCAAFreeStyleItf CATIStFeatureAndSupportAgent : public CATBaseUnknown
{
    CATDeclareInterface;

public :

    /**
	 * @nodoc
     */
    virtual HRESULT GetAgentValue(CATPathElement *& oPath) = 0;

    /**
	 * @nodoc
     */
    virtual HRESULT GetAgentListOfValues(CATSO *& oListOfValues) = 0;

    /**
	 * @nodoc
     * iValuation :
     *    0 : Prevaluated (The agent has a value but is not accepted)
     *    1 : Valuated    (the agent is accepted)
     */
    virtual HRESULT SetAgentValueToSelect(CATPathElement * iPath, int iValuation = 1) = 0;

    /**
	 * @nodoc
     * iValuation :
     *    0 : PreValuated (the agent has a value but is not accepted)
     *    1 : Valuated    (the agent is accepted) 
     */
    virtual HRESULT SetAgentListOfValuesToSelect(CATSO * iListOfValues, int iValuation = 1) = 0;

    /**
	 * @nodoc
     */
    virtual HRESULT SetAgentFilter(CATIStAgentExtraFilter_var iFilter) = 0;
};

CATDeclareHandler(CATIStFeatureAndSupportAgent, CATBaseUnknown);

#endif



