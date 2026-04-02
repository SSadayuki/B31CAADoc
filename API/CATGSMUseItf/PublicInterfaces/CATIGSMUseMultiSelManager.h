// COPYRIGHT Dassault Systemes 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

//===================================================================
//
// CATIGSMUseMultiSelManager.h
// Define the CATIGSMUseMultiSelManager interface
//
//==============================================================================
#ifndef CATIGSMUseMultiSelManager_H
#define CATIGSMUseMultiSelManager_H

#include "CATGSMUseItfExportedBy.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATLISTV_CATIMmiMechanicalFeature.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID IID_CATIGSMUseMultiSelManager;
#else
extern "C" const IID IID_CATIGSMUseMultiSelManager;
#endif

class CATIGSMUseFactory_var;
class CATIEdit_var;

/**
 * Interface required on component manager for multiselection in GSD UI.   
 * <p>Role :</p>
 * <br>Allows to handle GSD MultiSelection at creation or edition transactions 
 * 
 * <pre> 
 *   //1- How to retrieve the interface ; 
 *   //------------------------------------------------------------------------------------
 *   #include "CATGSMCreateMultiSelManager.h" //  Define the component managing MultiSelection 
 *   #include "CATIGSMUseMultiSelManager.h"         //  Interface implemented by the component
 *  .... 
 *   
 *    HRESULT rc = S_OK;
 *    CATIGSMUseMultiSelManager *piMSMgr = NULL; 
 *    rc = CATGSMCreateMultiSelManager ( *&piMSMgr);
 *   
 *   if (SUCCEEDED(rc) && NULL != piMSMgr) {
 *                  ...... 
 *      }       
 * </pre>    
 */
class ExportedByCATGSMUseItf CATIGSMUseMultiSelManager: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
      
	/**
	* Initialize MultiSel for creation or edit. 
	* <br>case 1 - iSpecOnMS = NULL_var => Creation of MultiSel with the Factory
	* <br>case 2 - iSpecOnMS != NULL_var => Case MonoSel ,only Initialisation of MultiSel Mode in Edit Mode
	*   @param ispFact  
	*      Factory Shape Design
	*   @param ispSpecOnMS
	*      Init MS from a current instance of a multisel object
	*	@param ispMatrixFeature
	*		Matrix feature created before the MultiSel feature
	*   @param ospMultiSel 
	*      MultiSel object (private geometrical Set) initialized or re-initialized 
	*/      
	virtual HRESULT InitializeMS(CATIGSMUseFactory_var ispFact, CATIMmiMechanicalFeature_var ispSpecOnMS,CATIMmiMechanicalFeature_var ispMatrixFeature, CATIMmiMechanicalFeature_var &ospMultiSel)=0; 

	/**
	* Validate MultiSel , finalized all interactive actions related multisel 
	*   @param ispMultiSel 
	*      MultiSel object (private geometrical Set) validation :
	*      <br> Check and terminate Multiselection transaction 
	*/
	virtual HRESULT ValidateMS()=0; 

	/**
	* Duplicate features under multisel. 
	*   @param ispMultiSel 
	*      MultiSel object
	*   @param ispSpecMatrix 
	*      Template for instanciate objects 
	*   @param iList1 
	*      List of multisel features, first multisel input 
	*   @param iList2 
	*      List of multisel features, second  multisel input 
	*/
	virtual HRESULT DuplicateObjectsMS(CATIMmiMechanicalFeature_var ispSpecMatrix,  CATLISTV(CATIMmiMechanicalFeature_var) &iList1,CATLISTV(CATIMmiMechanicalFeature_var) &iList2)=0; 

	/**
	* Instanciate MS at computing.
	* <br> perform duplication from Spec matrix, encapsulate DuplicateObjectsMS en query to list of inputs in 
	*   @param ispMultiSel 
	*      MultiSel object
	*   @param ispSpecMatrix 
	*      Template for instanciate objects 
	*/
	virtual HRESULT InstanciateObjectMS (CATIMmiMechanicalFeature_var  SpecMatrix ) = 0;

	/**
	* Check the MultiOutput Coherency. 
	* <br> Used in the implementation of CATIEdit.
	*   @param EditSpec  
	*      Spec to edit 
	*   @param spEdit 
	*      Interface on CATIEdit 
	*   @param spSpec 
	*      Spec object 
	*/
	virtual HRESULT CheckMultiSelCoherency(const CATBaseUnknown_var EditedSpec,CATIEdit_var &spIEdit,CATIMmiMechanicalFeature_var &spSpec) = 0;

	/**
    * Asks to the multisel feature to instanciate the multisel feature with a new Input. 
    * <br> [Use with single input multisel]  
    *   @param iSpec 
    *      New multisel input 
    */
    virtual HRESULT Declare(CATIMmiMechanicalFeature_var &iSpec)= 0;
    
    /**
    * Asks to the multisel feature to instanciate the multisel feature with a new Input at indice nB.
    * <br> [Use with double input multisel] 
    * <br> Note: Only 2 (nB <=2 ) differents inputs are handle yet 
    *   @param iSpec 
    *      New multisel input 
    *   @param inB 
    *      number of the multisel input ( 1 or 2) 
  	 */
    virtual HRESULT Declare(CATIMmiMechanicalFeature_var &iSpec, int nB)= 0;
    
    /**
    * Asks to the multisel feature to replace an input ( nB = num of the input).
    * <br> Ex : SpecNew is replace by SpecInit in Nb input field 
    * <br> [single/double input multisel]  
    *   @param iSpecInit  
    *      multisel input to be replace  
    *   @param iSpecNew  
    *      multisel input new 
    *   @param inB 
    *      number of the multisel input ( 1 or 2) 
    */   
    virtual HRESULT Replace(CATIMmiMechanicalFeature_var &iSpecInit, CATIMmiMechanicalFeature_var &iSpecNew, int nB= 1)= 0;

	/**
    * Asks to the multisel feature to remove  an input ( nB = num of the input).
    * <br> Ex : Spec input is remove, one instance of the feature in multisel is removed      * <br> [single/double input multisel]  
    *   @param iSpec 
    *      multisel input to remove 
    *   @param inB 
    *      number of the multisel input ( 1 or 2) 
    */
    virtual HRESULT Remove(CATIMmiMechanicalFeature_var &iSpec, int nB= 1)= 0;

	/**
    * Asks to the multisel feature to remove  all  input specs ( nB = num of the input).
    *   @param inB 
    *      number of the multisel input ( 1 or 2) 
    */
    virtual HRESULT RemoveAll(int nB=1)= 0;
    
    /**
    * Asks to the multisel feature to consider that all input are impacted by a modification 
    */
    virtual HRESULT ImpactAll(void)= 0;

	/**
    * Changes the state of the multisel features  during multisel transaction. 
    * <br> Asks internally to the multisel object to consider that virtual feature results (not already instanciate) become reals (instanciated)
    * <br> WARNING Instanciation needs to be done immmediatly after (state in temporary structure is updated) 
    *   @param oList1
    *      Number of declare input that are tagged as Virtual for multisel input 1 
    *   @param oList2
    *      Number of declare input that are tagged as Virtual for multisel input 2 
    *  @see CATIGSMUseultiSelManager#DuplicateObjectMS 
    */
    virtual HRESULT ConvertVirtFeatsToRealFeats(CATLISTV(CATIMmiMechanicalFeature_var) &oList1, CATLISTV(CATIMmiMechanicalFeature_var) &oList2)= 0;

	/**
    * Delete the state of multisel features that it has been removed during multisel transaction 
    * <br> Some feature previously instanciated do not correspond to a valid multisel results, then need to be removed  
    * <br> WARNING : dead features need to be remove immediately after (info in temporary structure is cleaned) 
    *   @param oListOfDeadRealFeats 
    *      List of "dead" features
    */
    virtual HRESULT DestroyRealFeatsEntries(CATLISTV(CATIMmiMechanicalFeature_var) &oListOfDeadRealFeats)= 0;

	/**
    * Validates the states the multisel feature during multisel transaction after duplication or Instanciation. 
    * <br> Verify internally impact of MultiSel inputs on multisel result features (Update/State) 
    *   @param oNewIndices
    *      oNewIndices 
    *   @param oNewStates
    *      oNewStates 
    */
    virtual HRESULT ValidateManipulations(CATRawCollint *newIndices, CATRawCollint *newStates)= 0;

	/**
    * Gets the Multisel Inputs List  at index iNb (iNb =1 or 2). 
    * <br> To be used in multiSel Manager CATIGSMUsemultiSelManager with DuplicateObjectsMS method 
    *   @param oSize 
    *      Number of declare input featured
    *   @param iNb 
    *      number of the multisel input considered  ( 1 or 2) 
    */
    virtual HRESULT GetMSList(CATLISTV(CATIMmiMechanicalFeature_var) & oList, int nB=1)= 0;

	/**
    * Gets list of all real multisel features.  
    * <br> use in GetResult / GetRealFeaturesList
	*   @param oRealFeats 
    *      List of real features
    */
    virtual HRESULT GetRealFeaturesList(CATLISTV(CATIMmiMechanicalFeature_var) &oRealFeats)= 0;

	/**
    * Gets the state of MultiSel for pre-visualisation (for two multiSel input).
    *   @param oRealFeats
    *      List of already instanciated feature (need just to be updae) 
    *   @param oListVirtual1
    *      List of multisel input virtual for multisel Input 1 , No feature result (real) yet.
    *   @param oListVirtual2
    *      List of multisel input virtual for multisel Input 2 , No feature result (real) yet.
    */
    virtual HRESULT GetImpactedFeatures(CATLISTV(CATIMmiMechanicalFeature_var) &oRealFeats,
        CATLISTV(CATIMmiMechanicalFeature_var) &oListVirtual1,
        CATLISTV(CATIMmiMechanicalFeature_var) &oListVirtual2)= 0;

    // No constructors or destructors on this pure virtual base class
    // --------------------------------------------------------------
};
/**
 * Creates a service component that implement CATIGSMUseMultiSelManager.
 * @param opiMSManager [out, IUnknown#Release]
 *   The interface pointer on the service component.
 */
HRESULT ExportedByCATGSMUseItf  CATCreateCATIGSMUseMultiSelManager(CATIGSMUseMultiSelManager ** opiMSManager);

CATDeclareHandler (CATIGSMUseMultiSelManager, CATBaseUnknown);

#endif
