/* -*-c++-*- */
#ifndef CATIUpdateProvider_H
#define CATIUpdateProvider_H
// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */

#include "AC0SPEXT.h"
#include "CATBaseUnknown.h"
#include "CATISpecDeclarations.h"
#include "CATIDomain.h"

extern ExportedByAC0SPEXT IID IID_CATIUpdateProvider ;

/**
 * Interface used to include a base feature's extension in the update process.
 * <b>Role:</b> overrides the default update behavior for feature extensions.
 * @see CATIOsmUpdate
 */

class ExportedByAC0SPEXT CATIUpdateProvider: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

 /**  
   * Rebuilds the feature ( generate the result ).
   * <b> Note: </b> The default update mechanism detects all features that have been modified upstream from a 
   * feature, rebuilds all the feature impacting the updated feature, and finally rebuild
   * the final feature.
   * @param iWorkingObj
   *     The base feature object.
   * @param iDomain
   *     The application domain of the update ( not used ).
   */
  virtual int					Update(CATBaseUnknown* iWorkingObj, CATIDomain_var iDomain = NULL_var) = 0;

  /**
    * Returns the status of the object concerning the update mechanism.
	* @param iWorkingObj
    *     The base feature object.
    * @param iDomain
    *     The application domain of the update ( not used ).
	* @return 
    *    TRUE : the object has been updated.
    *    FALSE : the object has to be updated.
    */
  virtual CATBoolean				IsUpToDate(CATBaseUnknown* iWorkingObj, CATIDomain_var iDomain=NULL_var) const = 0;

  /**
    * Modifies the status of the updatable object.
	* @param iWorkingObj
    *     The base feature object.
    * @param  iFlag
    *       TRUE : the object has just been updated
    *       FALSE: the object needs to be rebuilt
    */
  virtual void				SetUpToDate(CATBaseUnknown* iWorkingObj, boolean iFlag )=0;
  
  /**
   * Forces an updatable object to be ignored by the update mechanism.
   * @param iWorkingObj
   *     The base feature object.
   * @return 
   *     0 : default implementation, always active.
   */
  virtual int					IsInactive(CATBaseUnknown* iWorkingObj) const=0;
};

//------------------------------------------------------------------

CATDeclareHandler( CATIUpdateProvider, CATBaseUnknown );

#endif
