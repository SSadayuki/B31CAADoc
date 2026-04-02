#ifndef CATIMfgMachiningProcessInstantiate_H
#define CATIMfgMachiningProcessInstantiate_H
//===================================================================
// COPYRIGHT Dassault Systemes 2004
//===================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"

// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgMachiningProcessInstantiate ;
#else
extern "C" const IID IID_CATIMfgMachiningProcessInstantiate;
#endif

//------------------------------------------------------------------

/**
 * Interface to manage Machining Processes.
 */
class ExportedByMfgItfEnv CATIMfgMachiningProcessInstantiate: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Checks the Machining Process according to the context.
     *   The context depends of the insertion level included in a program and the
     *   feature (optional).
     *   @param iInsertionLevel
     *      The insertion level (Program, Operation, Auxiliary command)
     *   @param iFeature (optional)
     *      The feature on which the <tt>Machining Process</tt> is instantiated
     *   @return 
     *      S_OK : The check is true
     *      S_FALSE : The check is false
     *      Other value : The check leads to an error (syntaxical or other)
     */

    virtual HRESULT Check (const CATBaseUnknown_var & iInsertionLevel, const CATBaseUnknown_var & iFeature=NULL_var)=0;  

    /**
     * Instantiates the Machining Process.
     * It takes into account the insertion level and the feature.
     *   @param iInsertionLevel
     *      The insertion level (Program, Operation, Auxiliary command)
     *   @param iFeature (optional)
     *      The feature on which the <tt>Machining Process</tt> is instantiated
     *   @param iProduct (optional)
     *      The product associated to the feature
     */

    virtual HRESULT Instantiate (const CATBaseUnknown_var & iInsertionLevel, const CATBaseUnknown_var & iFeature=NULL_var, const CATBaseUnknown_var & iProduct=NULL_var)=0;  

     /**
     * @nodoc
	   */
    virtual HRESULT Instantiate (const CATBaseUnknown_var & iInsertionLevel, CATListValCATBaseUnknown_var & FeaturesList, 
                                 CATListValCATBaseUnknown_var & ProductsList)=0;  
    /**
     * Sets the generation of tools list for each instantiated operation.
     *   @param iCreateToolsList
     *      The tool list creation flag : 0 => only one tool is created, 1 => all possible tools are created 
     *                                    2 => possible tools from the first successful tooling query are created
     */

    virtual HRESULT SetToolsListCreationMode (int iCreateToolsList)=0;  

    /**
     * Returns the instantiated activities and the list of compatible tools for each one.
     *   @param oInstantiatedActivities
     *      The list of instantiated (created) activities
     */

    virtual HRESULT GetInstantiatedActivities (CATListValCATBaseUnknown_var & oInstantiatedActivities, CATListValCATBaseUnknown_var ** & opToolsList)=0;  

  	 /**
  	 * @nodoc
	   */
    virtual HRESULT GetActivitiesToCheckTool (CATListValCATBaseUnknown_var & ActivitiesToCheck)=0;  

};

//------------------------------------------------------------------
CATDeclareHandler(CATIMfgMachiningProcessInstantiate, CATBaseUnknown);

#endif
