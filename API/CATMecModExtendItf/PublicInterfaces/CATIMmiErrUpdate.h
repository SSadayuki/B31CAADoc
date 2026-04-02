#ifndef CATIMmiErrUpdate_h
#define CATIMmiErrUpdate_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


#include "CATMecModExtendItf.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATBoolean.h"
class CATIMmiMechanicalFeature_var;
#include "CATLISTV_CATIMmiMechanicalFeature.h"
class CATError;
 
 
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModExtendItf IID IID_CATIMmiErrUpdate;
#else
extern "C" const IID IID_CATIMmiErrUpdate;
#endif

  /**
   * Interface to manage update error.
   * <b>Role:</b>An update error is an error which occurs during the build process of
   * the feature. This error can be corrected by the end-user by modifying a parameter 
   * of the feature. An update error is made of:
   * <ul>
   * <li>A list of <i>sick</i> features:</li>
   *  <br>a sick feature is a feature associated with the error. This list can help 
   *  to know the features which are at the origin of the error.
   * <li>A diagnosis. </li>
   *  <br>It is a NLS message to understand the error.
   * <li>An associated feature that aggregates the update error </li>
   * <br>On this feature use the @href CATIMmiUseUpdateError or @hrefCATIMmiUpdateError interface
   * </ul>
   * About the <b>chained</b> sick features:
   * A sick feature can have an update error and this error has perhaps also sick features, and so one.
   * So from a current error, you can recursively find a set of chained sick features. 
   *
   */

class ExportedByCATMecModExtendItf CATIMmiErrUpdate : public CATBaseUnknown
{

    CATDeclareInterface;

    public :
      
  /**
   * Retrieves the feature that aggregates the error.
   * @param iError
   *  The error from wich the feature is retrieved.
   *
   * @param oAssociatedFeature
   *  The feature associated to the update error.
   *
   * @return
   *   <code>S_OK</code> if the feature correctly is retrieved.
   *   <br><code>E_FAIL</code> otherwise.
   */    
   virtual HRESULT GetMmiAssociatedFeature(CATError *& iError, CATIMmiMechanicalFeature_var & oAssociatedFeature) = 0;

  /**
   * Sets the feature to the error.
   * @param iError
   *  The error on wich the feature is set.
   *
   * @param iFeature
   *   The iFeature to associate to the error.
   *
   * @return
   *   <code>S_OK</code> if the feature is successfully associated to the error.
   *   <br><code>E_FAIL</code> otherwise
   */
    virtual HRESULT SetMmiAssociatedFeature(CATError *& iError, CATIMmiMechanicalFeature_var& iFeature) = 0;
    
  /**
   * Retrieves the list of sick features associated with the update error.
   * @param iError
   *  The error from wich the sick features are retrieved.
   *
   * @param oSickFeatures
   *  The sick features associated with the error.
   *  
   * @return
   *   <code>S_OK</code> if the features are successfully retrieved.
   *   <br><code>E_FAIL</code> otherwise
   */
    virtual HRESULT  GetMmiSickFeatures(CATError *& iError, CATLISTV(CATIMmiMechanicalFeature_var) & oSickFeatures) = 0;

  /**
   * Retrieves a list of chained sick features associated with the update error.
   * <br><b>Role:</b>This method returns the sick features of the current error and
   *  the sick features of each error associated with the previous sick features and so one....
   * 
   * @param iError
   *  The error from wich the sick features are retrieved.
   *
   * @param oSickFeatures
   *  The list of chained sick features associated to the error.
   *
   * @return
   *   <code>S_OK</code> if the features are successfully retrieved.
   *   <br><code>E_FAIL</code> otherwise
   */
    virtual HRESULT GetMmiAllSickFeatures(CATError *& iError, CATLISTV(CATIMmiMechanicalFeature_var)&  oSickFetaures) = 0;

  /**
   * Adds a sick feature in the list of sick features.
   *
   * @param iError
   *  The error on wich the sick feature is added.
   *
   * @param iSickFeature
   *   The new sick feature.
   * 
   * @return
   *   <code>S_OK</code> if the sick feature is successfully added.
   *   <br><code>E_FAIL</code> otherwise
   */    
    virtual HRESULT AddMmiSickFeature(CATError *& iError, CATIMmiMechanicalFeature_var &iSickFeature) = 0;

  /**
   * Adds a list of sick features in the list of sick features.
   *
   * @param iError
   *  The error on wich the sick feature is added.
   *
   * @param iSickFeatures
   *   The new list of sick features.
   *
   * @return
   *   <code>S_OK</code> if the sick feature are successfully added.
   *   <br><code>E_FAIL</code> otherwise
   */    
    virtual HRESULT AddMmiSickFeatures(CATError *& iError, CATLISTV(CATIMmiMechanicalFeature_var) &iSickFeatures) = 0;


  /**
   * Removes a sick feature from the list of sick features.
   *
   * @param iError
   *  The error on wich the sick feature is removed.
   *
   * @param iFeature
   *   The feature to be removed from the list
   * 
   * @return
   *   <code>S_OK</code> if the sick feature are successfully removed.
   *   <br><code>E_FAIL</code> otherwise
   */
    virtual HRESULT RemoveMmiSickFeature(CATError *& iError, CATIMmiMechanicalFeature_var &iFeature) = 0;

  /**
   * Retrieves the update error diagnosis.
   *
   * @param iError
   *   The error on wich the diagnosis is retrieved.
   *
   * @param oDiagnostic
   *   The diagnosis.
   *
   * @return
   *   <code>S_OK</code> if the diagnosis is correctly retrieved.
   *   <br><code>E_FAIL</code> otherwise
   */
     virtual HRESULT GetMmiDiagnostic(CATError *& iError, CATUnicodeString & oDiagnostic) = 0;

  /**
   * Sets the update error diagnosis.
   *
   * @param iError
   *   The error on wich the diagnosis is set.
   *
   * @param iDiagnosis
   *   The diagnosis.
   *
   * @return
   *   <code>S_OK</code> if the diagnosis is correctly set.
   *   <br><code>E_FAIL</code> otherwise
   */
    virtual HRESULT SetMmiDiagnostic(CATError *& iError, const CATUnicodeString& iDiagnosis) = 0;

    
  /**
   * Retrieves all the chained sick features diagnoses.
   * <br><b>Role:</b>  This method makes the concatenation of all 
   * the sick features diagnoses from the current feature.
   * It is the same method as the @href CATIMmiUseUpdateError#GetFullDiagnostic method.
   *
   * @param iError
   *   The error on wich the diagnosis is retrieved.
   * 
   * @param oDiagnostic
   *   The diagnosis.
   *
   * @param iIndentation
   *  The count of space before the first diagnosis.
   *
   * @return
   *   <code>S_OK</code> if the diagnosis is correctly retrieved.
   *   <br><code>E_FAIL</code> otherwise
   */  
    virtual HRESULT GetMmiFullDiagnostic(CATError *& iError,  CATUnicodeString& oDiagnostic , int iIndentation=1) = 0;
 
  /**
   * Retrieves a complete error diagnosis.
   * <br><b>Role:</b>This method returns the concatenation of several diagnoses:
   * the diagnoses of the error (given by @href #GetMmiDiagnostic ) and the diagnoses of the 
   * chained sick feature. 
   * 
   * @param iError
   *   The error on wich the NLS dignosis is retrieved.
   *
   * @param oNLSDiagnostic
   *   The diagnosis
   *  
   * @return
   *   <code>S_OK</code> if the diagnosis is correctly retrieved.
   *   <br><code>E_FAIL</code> otherwise
   */
     virtual HRESULT GetMmiNLSDiagnostic(CATError *& iError, CATUnicodeString & oNLSDiagnostic) = 0;    


  /**
   * Retrieves only the deeper sick feature(s) for the given update error. 
   * <br><b>Role:</b>This method retrieves the deeper sick features of the <tt>iError</tt> parameter.
   * The returned feature(s) are 
   * those that the user sees in the Update Error Dialog box.
   *
   * @param iError
   *   The error used to find the sick features.
   *
   * @param oDeepSickFeatures
   *   The list of the deeper sick features of iErrUpdate .
   *
   * @return
   *   <code>S_OK</code> if the features are correctly retrieved.
   *   <br><code>E_FAIL</code> otherwise
   */
    virtual HRESULT GetMmiDeepSickFeatures(CATError *& iError, CATLISTV(CATIMmiMechanicalFeature_var) & oDeepSickFeatures) = 0;

  /**
   * Checks if the error is due to a cyclicity.
   *
   * @param iError
   *   the error to check.
   *
   * @param oCyclicity
   *   TRUE if is an cyclicity error.
   *
   * @return
   *   <code>S_OK</code> if the information is retrieved.
   *   <br><code>E_FAIL</code> otherwise
   */
    virtual HRESULT IsMmiCycleDetected(CATError *& iError, CATBoolean &oCyclicity) = 0 ; 


  /**
   * Checks if the error is an update error.
   * @param iError
   *   The error to check.
   *
   * @return
   *   <code>S_OK</code> the error is an update error
   *   <br><code>E_FAIL</code> otherwise
   */

    virtual HRESULT IsAnUpdateError(CATError *& iError) = 0;



  /**
   * Creates a new update error.
   * @param oError
   *   The created error.
   *
   * @return
   *   <code>S_OK</code> the error is created
   *   <br><code>E_FAIL</code> otherwise
   */

    virtual HRESULT CreateNewError(CATError *& oError) = 0;

};


#endif

