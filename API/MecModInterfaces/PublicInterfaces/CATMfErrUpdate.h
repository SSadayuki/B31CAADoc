#ifndef CATMfErrUpdate_h
#define CATMfErrUpdate_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATMfErr.h"
#include "CATUnicodeString.h"
#include "MecModItfCPP.h"
#include "CATBaseUnknown_WR.h"
#include "CATLISTV_CATISpecObject.h" 
#include "CATSetOfCATUnicodeString.h" 

/**
 * Class to create an update error.
 * <b>Role:</b>An update error is an error which occurs during the build process of
 * the feature. This error can be corrected by the end-user in modifying a parameter 
 * of the feature. An update error is made of:
 * <ul>
 * <li>A list of <i>sick</i> features,</li>
 *  <br>a sick feature is a feature associated with the error. This list can help 
 *  to know the features which are at the origin of the error.

 * <li>A diagnosis. </li>
 *  <br>It is a NLS message to understand the error.
 * <li>An associated feature that aggregates the update error </li>
 * <br>On this feature use the @href CATIUpdateError interface
 * </ul>
 * About the <b>chained</b> sick features:
 * A sick feature can have an update error and this error has perhaps also sick features, and so one.
 * So from a current error, you can recursively find a set of chained sick features. 
 *
 */

class ExportedByMecModItfCPP CATMfErrUpdate : public CATMfError
  {
	/** @nodoc */
    CATDeclareErrorClass(CATMfErrUpdate, CATMfError)

    public :

/**
 * Constructs an update error.
 */
    CATMfErrUpdate();

/**
 * @nodoc.
 */
    CATMfErrUpdate(const CATUnicodeString& iString);

/**
 * Constructs an update error with a list of sick features defined by users.
 * @param iSickFeatures
 * The list of sick features.
 */
    CATMfErrUpdate(CATLISTV(CATISpecObject_var) iSickFeatures);
      
    virtual ~CATMfErrUpdate();

/**
 * Returns the feature that aggregates the error.
 */    
    CATISpecObject_var GetAssociatedFeature();

/**
 * Sets the feature to the error.
 * @param iFeature
 * The iFeature aggregates the error.
 */
    void SetAssociatedFeature(CATISpecObject_var iFeature);
    
/**
 * Returns the list of sick features associated with the update error.
 */
    CATLISTV(CATISpecObject_var) GetSickFeatures();

/**
 * Returns a list of chained sick features associated with the update error.
 * <br><b>Role:</b>This method returns the sick features of the current error, and
 *  the sick features of each error associated with the previous sick features and so one....
 */
    CATLISTV(CATISpecObject_var) GetAllSickFeatures();

/**
 * Adds a sick feature in the list of sick features.
 * @param iSickFeature
 * The new sick feature.
 */    
    void AddSickFeature(CATISpecObject_var iSickFeature);

/**
 * Removes a sick feature from the list of sick features.
 * @param iFeature
 * The feature to be removed from the list
 */
    void RemoveSickFeature(CATISpecObject_var iFeature);

/**
 * Returns the update error diagnosis.
 */
    CATUnicodeString GetDiagnostic();

/**
 * Sets the update error diagnosis.
 * @param iDiagnosis
 * The diagnosis.
 */
    void SetDiagnostic(const CATUnicodeString& iDiagnosis);

/**
 * @deprecated V5R15
 */
    void SetDiagnostic (int iNumberOfDiagnoses, const char *iDiagnosis1, ...);
    
/**
 * Returns all the chained sick features diagnoses.
 * <br><b>Role:</b>  This method makes the concatenation of all 
 * the sick features diagnoses from the current feature.
 * It is the same method as the @href CATIUpdateError#GetFullDiagnostic method.
 * @param iIndentation
 * The count of space before the first diagnosis.
 */  
    CATUnicodeString GetFullDiagnostic(int iIndentation=1);
 
/**
 * Returns a complete error diagnosis.
 * <br><b>Role:</b>This method returns the concatenation of several diagnoses:
 * the diagnoses of the error (given by @href #GetDiagnostic ) and the diagnoses of the 
 * chained sick feature. 
 */
    CATUnicodeString GetNLSDiagnostic();    


/**
 * Retrieves only the deeper sick feature(s) for the given update error. 
 * <br><b>Role:</b>This method retrieves the deeper sick features of the <tt>iErrUpdate</tt> parameter.
 * This method is not applied to the current feature. The returned feature(s) are 
 * those that the user sees in the Update Error Dialog box.
 * @param iErrUpdate
 * The error used to find the sick features.
 * @param oDeepSickFeatures
 * The list of the deeper sick features of iErrUpdate .
 */
    void GetDeepSickFeatures(CATMfErrUpdate* iErrUpdate, CATLISTV(CATISpecObject_var) & oDeepSickFeatures);

/**
 * Checks if the error is due to a cyclicity.
 * @return 
 * The returned value is <tt>1</tt> if is an cyclicity error.
 */
    virtual int IsCycleDetected() const ; 

  private: 

    CATLISTV(CATISpecObject_var) _ListOfSickFeatures;

    CATBaseUnknown_WR           _AssociatedFeature ;

    CATSetOfCATUnicodeString     _SetOfDiagnoses ;
    
  };

#endif
