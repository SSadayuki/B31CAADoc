#ifndef CATIMmiUseUpdateError_h
#define CATIMmiUseUpdateError_h

// COPYRIGHT DASSAULT SYSTEMES 2010

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


#include "CATMecModUseItf.h"
#include "CATUnicodeString.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATIMmiMechanicalFeature.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModUseItf IID IID_CATIMmiUseUpdateError;
#else
extern "C" const IID IID_CATIMmiUseUpdateError;
#endif


  /**
   * Interface to manage update error associated with mechanical features.
   * <b>Role</b>: This interface allows users to retrieve an update error associated 
   * with a mechanical feature. A feature has an update error when its build has failed. 
   * <p>To know if the feature has an update error, the first method to use is the 
	 * @href #HasAnUpdateError method. This method is always available. 
	 * If there is an error, then you can use the @href #GetFullDiagnostic method to get more details
	 * on the error. </p>
   *   
   */
class ExportedByCATMecModUseItf CATIMmiUseUpdateError : public CATBaseUnknown
{
  CATDeclareInterface;

 public:

 /**
  * Returns a value indicating whether an update error is associated with the current feature.
  * @return 
  *   <br><b>Legal values</b>: 
  *   <ul><li><b>S_OK</b> an update error exists on the current feature.
  *   <li><b>S_FALSE</b> no update error exists on the current feature.</ul>
 */
  virtual HRESULT HasAnUpdateError() = 0 ;

 /**
  * Retrieves the update error diagnosis.
  */
  virtual HRESULT GetDiagnostic(CATUnicodeString &oString)=0;

  /**
  * Retrieves all the chained sick features diagnosis.
  * <br><b>Role:</b> On an error it is possible to associate a set of features. Those features
  * are called "sick" features. They are <i>chained</i> because an error has sick features, which 
  * them-self can have an update error with sick features and so one. 
  * This method makes the 
  * concatenation of all the sick features diagnoses from the current feature. 
  * 
  * @param oString
  *   The concatenation of diagnoses.
  *
  * @param iIndentation
  *   The count of space before the first diagnosis string.
  *
  * @return 
  *   <br><b>Legal values</b>: 
  *   <ul><li><b>S_OK</b> if the diagnostic has been successfully retried.
  *   <li><b>E_FAIL</b> otherwise.</ul>
  */  
  virtual HRESULT GetFullDiagnostic(CATUnicodeString &oString, int iIndentation=1)= 0 ;

  /**
   * Retrieves the list of sick features associated with the update error.
   *
   * @param oSickFeatures
   *   The list of sick features
   *
   * @return 
   *   <br><b>Legal values</b>: 
   *   <ul><li><b>S_OK</b> if the features have been successfully retried.
   *   <li><b>S_FALSE</b> otherwise.</ul>
   */
  virtual HRESULT GetAssociatedSickFeatures(CATLISTV(CATIMmiMechanicalFeature_var) & oSickFeatures) = 0 ;

  
};

CATDeclareHandler(CATIMmiUseUpdateError,CATBaseUnknown);

#endif

