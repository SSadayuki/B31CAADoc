#ifndef CATICloAppBendable_H
#define CATICloAppBendable_H
// COPYRIGHT DASSAULT SYSTEMES 2001
/**
  * @CAA2Level L1
  * @CAA2Usage U4 CATECloAppBendableAdapter
  */
// COPYRIGHT Dassault Systemes 2001
//===================================================================
//
// CATICloAppBendable.h
// Define the CATICloAppBendable interface
//
//===================================================================
//
// Usage notes:
// Users implementing this interface must derive from the adapter 
// CATECloAppBendableAdapter.h in case new methods are added.
// Users must define a .dic file tying the interface to the bendable object.
// For Tubing the bendable object is CATTubBendableTube.
//===================================================================
//
//===================================================================

#include "IUnknown.h"
#include "CATMathConstant.h"

extern "C" const IID IID_CATICloAppBendable ;

//------------------------------------------------------------------

/**
 * Interface to allow users to override behaviors on a bendable.
 * 
 * <b>Role</b>: To define the user parameters for a bendable
 * <p><b>BOA  information</b>:  this  interface  can  be  implemented 
 *  using  the  BOA  (Basic  Object  Adapter). 
 *  To  know  more  about  the  BOA,  refer  to  the  CAA  Encyclopedia  home  page.   
 *  Click  Middleware  at  the  bottom  left,  then  click  the  Object  Modeler  tab  page. 
 *  Several  articles  deal  with  the  BOA.</p> 
 */
class CATICloAppBendable: public IUnknown
{
  public:

  /**
  * Get Spring Back Radius.  This will allow users to show what the bendable will 
  * look like because of spring back.
  * This will be called when the bendable is created or updated.
  * A tools option setting will be available to use it.  This will
  * be called prior to generating the bendable contour so the user can 
  * modify the bend radius of the bendable.  Normally the bend radius is 
  * taken from the Run it is on.
  * @param iTurnAngleRadian
  *   The turn angle at the node.  It will be in radians.
  * @param iRunNodeRadiusMM
  *   Turn Radius at the node in MM.
  * @param iDiameterFactor
  *   The diameter factor used when creating the run.  When creating the run the user can use
  *   the Turn Rules table to define the diameter factor. Valid only if iRuleUsed=1.
  * @param iRuleUsed
  *   0 if the run bend radius was not defined by the Turn Rules.  1 if the bend radius was derived from the turn rules.  
  * @param oSpringBackRadiusMM
  *   Turn radius to be used for the bendable at this node.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetSpringBackRadius ( const CATAngle &iTurnAngleRadian, 
                                        const double &iRunNodeRadiusMM, 
                                        const double &iDiameterFactor, 
                                        const int &iRuleUsed, 
                                        double &oSpringBackRadiusMM) = 0;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------

#endif
