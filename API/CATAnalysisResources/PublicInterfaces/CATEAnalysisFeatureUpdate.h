// COPYRIGHT DASSAULT SYSTEMES 1999
//===================================================================
//
// CATEAnalysisFeatureUpdate.h
// Provide default implementation of some methods of interface CATISamAnalysisFeatureUpdate
//
//===================================================================
//
// Usage notes:
//
//===================================================================
#ifndef CATEAnalysisFeatureUpdate_H
#define CATEAnalysisFeatureUpdate_H
/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */
#include "CATAnalysisResources.h"
#include "CATISamAnalysisFeatureUpdate.h"

//------------------------------------------------------------------

/**
 * Adapter for the implementation of CATISamAnalysisFeatureUpdate interface.
 * All methods are empty.
 */

class ExportedByCATAnalysisResources CATEAnalysisFeatureUpdate: public CATISamAnalysisFeatureUpdate
{
  
  public:
/**
 * Default constructor.
 */
  CATEAnalysisFeatureUpdate();

/**
 * Destructor.
 */
  virtual ~CATEAnalysisFeatureUpdate();    

/**
 * Rebuilds the feature (generate the result).
 * <b> Note: </b> The default update mechanism detects all features that have been modified upstream from a 
 * feature, updates all the features impacting the updated feature, and finally rebuilds
 * the final feature.
 * @param iTypeAction allows to implement before or after the standard update. 
 */
    virtual HRESULT Update(CATSamUpdateAction iTypeAction);

/** Overloads the status of the object concerning the update mechanism.
 *  This method is called only if the update status is TRUE, in order to complete it.
 * @param ioflag: As input the current update status returned by the feature.
 * As Output,   TRUE : the object is up to date, else FALSE : the object needs to be updated.
 */
    virtual void IsUpToDate(CATBoolean& ioflag) const ;

/**
 * Modifies the status of the object concerning the update mechanism.
 * This method is called only in the CATISpecObject::SetUpTodate(FALSE). 
 */
    virtual void	SetNoUpToDate();

  private:
/**
 * Constructors. No implementation provided. Just declared to avoid that 
 * someone could build this class.
 */
    CATEAnalysisFeatureUpdate(const CATEAnalysisFeatureUpdate &);
    CATEAnalysisFeatureUpdate& operator=(const CATEAnalysisFeatureUpdate &);

};   

#endif


