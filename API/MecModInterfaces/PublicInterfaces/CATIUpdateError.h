#ifndef CATIUpdateError_h
#define CATIUpdateError_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

#include "CATMfErrUpdate.h" 
 
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIUpdateError;
#else
extern "C" const IID IID_CATIUpdateError;
#endif


/**
 * Interface to manage update error associated with mechanical features.
 * <b>Role</b>: This interface allows users to retrieve, create, or unset an update error associated 
 * with a mechanical feature. A feature has an update error when its build has failed. There are 
 * two usages of this interface:
 * <ul>
 *  <li>Consultation</li>
 *   <p>To know if the feature
 *   has an update error, the first method to use is the @href #TestExistingUpdateError method. 
 *   This method is available
 *   in all cases. If there is an error, then you can use the @href 
 *   #GetUpdateError method to have more details about the error. </p>
 *   
 *  <li>Creation</li>
 *   <p>It is for those which must implement the @href CATIBuild interface on a
 * new mechanical feature. At the beginning of the @href CATIBuild#Build method, the eventual last error is deleted
 *   by the @href #UnsetUpdateError method, and if an update error occurs during the method,
 *    an error is associated with the feature thanks to the @href #SetUpdateError method</p>
 *   
 * </ul>
 * 
 * @see CATMfErrUpdate
 */
class ExportedByMecModItfCPP CATIUpdateError : public CATBaseUnknown
{
  CATDeclareInterface;

 public:

 /**
 * Associates an update error to the current feature.
 * <br><b>Role:</b>It enables to set an update error to the feature.
 * This method must only be used in a @href CATIBuild#Build method. 
 * @param iUpdateError
 * The update error to be associated with the current feature.
 */
  virtual void SetUpdateError(CATMfErrUpdate* iUpdateError) = 0 ;

/**
 * Unsets the update error associated with the feature.
 * <br><b>Role:</b>It enables to unset the possible update error to the feature.
 * This method must be only used in a @href CATIBuild#Build method. You call it
 * at the beginning of the method, it is useless to test if the feature has an error. 
 */
  virtual void UnsetUpdateError() = 0 ;

/**
 * Gets the update error associated with the feature. 
 * <br><b>Role:</b>This method returns the update error associated to the mechanical feature. It is
 * important to check the existance of the error by the @href #TestExistingUpdateError method, and
 * do not consider the NULL returned value as a valid respons. The error is not a persistent data. It
 * means that in batch mode,when the Part's document is opened the
 * error is not associated with the feature until an update has not been explicitely done. 
 * <br>
 * <b>Lifecycle deviation rule</b>: do not release the returned pointer
 * @return
 * The update error. A NULL pointer doesn't mean that the feature has no error. See the role of
 * this method.
 */
  virtual CATMfErrUpdate* GetUpdateError()=0 ;


/**
 * @nodoc
 */  
  virtual void SetFormUpdateError(CATMfErrUpdate* UpdateError) = 0 ;

/**
 * @nodoc
 */
  virtual void UnsetFormUpdateError() = 0 ;

/**
 *  @nodoc
 */
  virtual CATMfErrUpdate* GetFormUpdateError()=0 ;

/**
 * Returns all the chained sick features diagnoses.
 * <br><b>Role:</b> On an error it is possible to associate a set of features. Those features
 * are called "sick" features. They are <i>chained</i> because an error has sick features, which 
 * them-self can have an update error with sick features and so one. 
 * This method makes the 
 * concatenation of all the sick features diagnoses from the current feature. It is the same method
 * as the @href CATMfErrUpdate#GetFullDiagnostic method. 
 *  
 * @param iIndentation
 * The count of space before the first diagnosis string.
 */  
  virtual CATUnicodeString GetFullDiagnostic(int iIndentation=1)=0 ;

/**
 * Gets a value indicating whether an update error is associated with the current feature.
 * @return
 *  An integer value.
 *   <br><b>Legal values</b>: 
 *   <ul><li><b>1</b> an update error exists on the current feature.
 *   <li><b>0</b> no update error exists on the current feature.</ul>
*/
  virtual int TestExistingUpdateError()=0 ;

/**
 * @nodoc.
 */
  virtual void BuildErrorRep() =0 ;

/**
 * @nodoc.
 */
  virtual void UnreferenceErrorRep() =0 ;
  
};

CATDeclareHandler(CATIUpdateError,CATBaseUnknown);

#endif

