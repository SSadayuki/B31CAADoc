
// COPYRIGHT Dassault Systemes 2002


/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

//===================================================================
//
//
// CATIGSMUseMultiSelAccess.h
// Define the CATIGSMUseMultiSelAccess interface
//
//===================================================================
//
// Usage notes:
//  
//
//===================================================================

#ifndef CATIGSMUseMultiSelAccess_H
#define CATIGSMUseMultiSelAccess_H

#include "CATGSMUseItfExportedBy.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATLISTV_CATIMmiMechanicalFeature.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID IID_CATIGSMUseMultiSelAccess;
#else
extern "C" const IID IID_CATIGSMUseMultiSelAccess ;
#endif

/**
 * Interface to access object reference in feature multisel. 
 * <b>Role</b>: Allow to modify multisel parameters on the object
 * <br> Note: this interface is implemented on every feature supporting multisel 
 * @see  CATIGSMUseMultiSel, CATIGSMUseMultiSelManager    
 */
class ExportedByCATGSMUseItf CATIGSMUseMultiSelAccess: public CATBaseUnknown
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
	 virtual HRESULT SetElem(CATIMmiMechanicalFeature_var &iSpec, int nB= 1)= 0;

	/**
     * Gets input of corresponding fetures 
     *   @param oSpec 
     *      input for element multisel 
     *   @param inB 
     *      index of multsel input 
	 */
	 virtual HRESULT GetElem(CATIMmiMechanicalFeature_var &oSpec, int nB= 1)= 0;

	/**
     * Gets list of common elements (features used as input common for all instances) 
     *   @param oListOfCommonFeats
     *      List of features (used if common feature input exist) 
     */
	 virtual HRESULT GetCommonElems(CATLISTV(CATIMmiMechanicalFeature_var) &oListOfCommonFeats)= 0;

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
     *   @param oList1
     *        list of multisel input (number 1) 
     *   @param oList2
     *       list of multisel input (number 2) 
     */ 
	 virtual HRESULT UpdateMultiSel(
		CATIMmiMechanicalFeature_var &iSpecMultisel,
		CATLISTV(CATIMmiMechanicalFeature_var) &oList1,
		CATLISTV(CATIMmiMechanicalFeature_var) &oList2)= 0;

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
      virtual HRESULT CheckCoherency(CATIMmiMechanicalFeature_var &iSpecMultiSel, CATBoolean &oCoherent)= 0;

};
CATDeclareHandler (CATIGSMUseMultiSelAccess, CATBaseUnknown);
#endif
