/* -*-c++-*- */
#ifndef CATISpecUpdate_H
#define CATISpecUpdate_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */

#include "AC0SPBAS.h"
#include "CATBaseUnknown.h"
#include "CATIDomain.h"
#include "CATISpecDeclarations.h"

extern ExportedByAC0SPBAS IID IID_CATISpecUpdate ;

/** 
 * @deprecated V5R15 CATIOsmUpdate
 * Interface dedicated to the update mechanism.
 * The objects concerned by the update mechanism have :
 *      - a status (up to date or not) concerning the update 
 *      - a state (managed by the StateStamp) concerning modification of the object's data.
 * @see CATIBuild
 */

class ExportedByAC0SPBAS CATISpecUpdate: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
  /**  
   * @deprecated V5R15 CATIOsmUpdate#Update
   * Rebuilds the feature ( generate the result ).
   * <br><b>This method should not be used: use instead the Update method defined in @href CATISpecObject.</b> 
   * <br><b> Note: </b> The default update mechanism detects all features that have been modified upstream from a 
   * feature, rebuilds all the feature impacting the updated feature, and finally rebuilds
   * the final feature.
   * @param iDomain
   *     application domain of the update ( not used ).
   */
  virtual int					Update(CATIDomain_var iDomain = NULL_var) = 0;

  /**
   * @deprecated V5R15 CATIOsmUpdate#IsUpToDate
    * Returns the status of the object concerning the update mechanism.
	* @return CATBoolean
    *    TRUE : the object has ever been updated.
    *    FALSE : the object has to be updated.
    */
  virtual CATBoolean				IsUpToDate(CATIDomain_var iDomain=NULL_var) const = 0;

  /**
   * @deprecated V5R15 CATIOsmUpdate#SetUpToDate
    * Modifies the flag of the updatable object.
    * @param  flag
    *       TRUE : the object has just been updated
    *       FALSE: the object needs to be rebuild
    */
  virtual void				SetUpToDate( CATBoolean flag )=0;

  /**
   * @deprecated V5R15 NoReplacement
   * Returns the updateStamp hold by the object.
   * The concerned object is a feature or an attribute.
   */
  virtual CATOldUpdateStamp	GetUpdateStamp() const=0 ;

  /**
   * @deprecated V5R15 CATIOsmUpdate#IsInactive
   * Forces an updatable object to be ignored by the update mechanism.
   */
  virtual int					IsInactive() const=0;
};

//------------------------------------------------------------------

CATDeclareHandler( CATISpecUpdate, CATBaseUnknown );

extern ExportedByAC0SPBAS int NEW_UPDATE;

#endif
