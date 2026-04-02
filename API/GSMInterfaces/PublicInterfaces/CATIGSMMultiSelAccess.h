
// COPYRIGHT Dassault Systemes 2002


/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

//===================================================================
//
//
// CATIGSMMultiSelAccess.h
// Define the CATIGSMMultiSelAccess interface
//
//===================================================================
//
// Usage notes:
//  
//
//===================================================================

#ifndef CATIGSMMultiSelAccess_H
#define CATIGSMMultiSelAccess_H

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID IID_CATIGSMMultiSelAccess;
#else
extern "C" const IID IID_CATIGSMMultiSelAccess ;
#endif

/**
 * Interface to access object reference in feature multisel. 
 * <b>Role</b>: Allow to modify multisel parameters on the object
 * <br> Note: this interface is implemented on every feature supporting multisel 
 * @see  CATIGSMMultiSel, CATIGSMMultiSelManager    
 */
class ExportedByCATGitInterfaces CATIGSMMultiSelAccess: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

     // ------------------------------------------------------------------------------
     // Sets/Gets input elements  of the current instance of the multisel feature 
     // ------------------------------------------------------------------------------

	/**
     * Sets multiel input for the instance multisel feature.  
     * <br> Init the input of the instanciated feature, this method is used for example  in the replace transaction 
     *   @param iSpec 
     *      input for element multisel 
     *   @param inB 
     *      index of multsel input 
     */
	 virtual HRESULT SetElem(CATISpecObject_var &iSpec, int nB= 1)= 0;

	/**
     * Gets input of corresponding fetures 
     *   @param oSpec 
     *      input for element multisel 
     *   @param inB 
     *      index of multsel input 
	 */
	 virtual HRESULT GetElem(CATISpecObject_var &oSpec, int nB= 1)= 0;

	/**
     * Gets list of common elements (features used as input common for all instances) 
     *   @param oListOfCommonFeats
     *      List of features (used if common feature input exist) 
     */
	 virtual HRESULT GetCommonElems(CATLISTV(CATISpecObject_var) &oListOfCommonFeats)= 0;

     // ------------------------------------------------------------------------------
     // Tools related to multisel object management 
     // ------------------------------------------------------------------------------
      
	/**
     * Updates data related multisel features.
     * <br> Notes :
     * <br> 1/ Lists are  Input/ Output parameters  
     * The Lists are filled with the content of the multisel inputs of the current instance of the feature 
	 * <br> 2/ iSpecMultiSel  is a reference on the MultiSel feature - not used internally up to now 
     *   @param iSpecMultisel   
     *      Multtisel object (Not used) 
     *   @param List1
     *        list of multisel input (number 1) 
     *   @param List2
     *       list of multisel input (number 2) 
     */ 
	 virtual HRESULT UpdateMultiSel(
		CATISpecObject_var &iSpecMultisel,
		CATLISTV(CATISpecObject_var) &list1,
		CATLISTV(CATISpecObject_var) &list2)= 0;

	/**
     * Checks consistancy. 
     * <br> This tool is used to verify consistancy with the aggregated feature regarding common reference elements
     * All occurences of multisel feature should share the same common feature if aggregated ( ex:contextual feature) 
     *   @param iSpecMultisel   
     *      Multtisel object (Not used) 
     *   @param oCoherent 
     *        = TRUE OK 
     *        = FALSE KO , some "normmally" commnon aggregated feature are detected diffetrents
     */          
      virtual HRESULT CheckCoherency(CATISpecObject_var &iSpecMultiSel, boolean &iCoherent)= 0;



};
CATDeclareHandler (CATIGSMMultiSelAccess, CATBaseUnknown);
#endif
