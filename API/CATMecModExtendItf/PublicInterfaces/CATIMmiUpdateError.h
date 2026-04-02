#ifndef CATIMmiUpdateError_h
#define CATIMmiUpdateError_h

// COPYRIGHT DASSAULT SYSTEMES 2010

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


#include "CATMecModExtendItf.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

#include "CATError.h" 
 
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModExtendItf IID IID_CATIMmiUpdateError;
#else
extern "C" const IID IID_CATIMmiUpdateError;
#endif


/**
 * Interface to manage update error associated with mechanical features.
 * <b>Role</b>: This interface allows users to retrieve an update error associated 
 * with a mechanical feature. A feature has an update error when its build has failed. 
 * <p>To know if the feature has an update error, the first method to use is the 
 * @href CATIMmiUseUpdateError#HasAnUpdateError method. This method is always available. 
 * If there is an error, then you can use the @href CATIMmiUseUpdateError#GetFullDiagnostic method
 * to get more details on the error. </p>
 * See @href CATIMmiErrUpdate to manage the Update Error associated with the feature.
 *   
 */

class ExportedByCATMecModExtendItf CATIMmiUpdateError : public CATBaseUnknown
{
  CATDeclareInterface;

 public:

 /**
 * Interface to associate an update error with the current feature.
 * <br><b>Role:</b>It enables to give an update error to the feature during its Build process.
 * This method must only be used in a @href CATIFmFeatureBehaviorCustomization#Build method. 
 * @param iUpdateError
 * The update error to be associated with the current feature.
 * @return
 *   <code>S_OK</code> Association succeeded.
 *   <br><code>E_FAIL</code> otherwise.
 */
  virtual HRESULT SetMmiUpdateError(CATError*& iUpdateError) = 0 ;

/**
 * Unsets the update error associated with the feature.
 * This method must be only used in a @href CATIFmFeatureBehaviorCustomization#Build method. 
 * It should be called at the beginning of the Build method, it is useless to test if the feature has an error. 
 * @return
 *   <code>S_OK</code> Unset succeeded.
 *   <br><code>E_FAIL</code> otherwise.
 */
  virtual HRESULT UnsetMmiUpdateError() = 0 ;

/**
 * Retrieves the update error associated with the feature. 
 * <br><b>Role:</b>This method returns the update error associated with the mechanical feature. It is
 * important to check the existance of the error by the @href CATIMmiUpdateError#HasAnUpdateError method. 
 * The error is not a persistent data. It means that in batch mode, when the Part's document is opened, the
 * error is not associated with the feature until an update has been explicitely done. 
 * <br>
 * <b>Lifecycle deviation rule</b>: do not release the returned pointer
 * @param oUpdateError
 * The update error. See @href CATIMmiErrUpdate to manage the Update Error
 * @return
 *   <code>S_OK</code> Error retrieved.
 *   <br><code>E_FAIL</code> otherwise.
 * @return 
 */
  virtual HRESULT  GetMmiUpdateError(CATError* & oUpdateError)=0 ;
  
};

CATDeclareHandler(CATIMmiUpdateError,CATBaseUnknown);

#endif

