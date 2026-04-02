// COPYRIGHT DASSAULT SYSTEMES 2005
//===================================================================
// CATISamAnalysisFeatureUpdate.h
// Define the CATISamAnalysisFeatureUpdate interface
//===================================================================
#ifndef CATISamAnalysisFeatureUpdate_H
#define CATISamAnalysisFeatureUpdate_H
/**
  * @CAA2Level L0
  * @CAA2Usage U4   CATEAnalysisFeatureUpdate
  */
#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamAnalysisFeatureUpdate ;
#else
extern "C" const IID IID_CATISamAnalysisFeatureUpdate ;
#endif

//------------------------------------------------------------------

/**
 * Allow to overload update mechanism. 
 * This interface is allowed (and called) for features build by derivation of AnalysisSet or AnalysisEntity.
 * It is forbidden to implement this interface on DASSAULT SYSTEMES features. 
 * <p><b>BOA information</b>: this interface can be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page. 
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class ExportedByCATAnalysisInterface CATISamAnalysisFeatureUpdate: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Enumerate for typing the actions.
 * @param Before means that you are called before the standard adapteur is called.
 * @param After means that you are called after the standard adapteur is called.
 */
    enum CATSamUpdateAction {Before, After};

/**
 * Rebuilds the feature (generate the result).
 * <b> Note: </b> The default update mechanism detects all features that have been modified upstream from a 
 * feature, updates all the features impacting the updated feature, and finally rebuilds
 * the final feature.
 * @param iTypeAction allows to implement before or after the standard update. 
 */
    virtual HRESULT Update(CATSamUpdateAction iTypeAction) = 0;

/** Overloads the status of the object concerning the update mechanism.
 *  This method is called only if the update status is TRUE, in order to complete it.
 * @param ioflag: As input the current update status returned by the feature.
 * As Output,   TRUE : the object is up to date, else FALSE : the object needs to be updated.
 */
    virtual void IsUpToDate(CATBoolean& ioflag) const = 0;

/**
 * Modifies the status of the object concerning the update mechanism.
 * This method is called only in the CATISpecObject::SetUpTodate(FALSE). 
 */
    virtual void	SetNoUpToDate() = 0;

};


#endif
