/* -*-c++-*- */
#ifndef CATIOsmUpdate_H
#define CATIOsmUpdate_H
// COPYRIGHT DASSAULT SYSTEMES 2005

/**
  * @CAA2Level L1
  * @CAA2Usage U4 CATOsmUpdateAdapter
  */

#include "AC0SPBAS.h"
#include "CATBaseUnknown.h"
#include "CATISpecDeclarations.h"

extern ExportedByAC0SPBAS IID IID_CATIOsmUpdate ;

/** 
 * Interface dedicated to the Build/Update mechanism.
 * <b>Role</b>: 
 * This interface is used internally by the @href CATISpecObject implementation. 
 * It allows 
 * <ul><li>the standard update mechanism defined by the <tt>CATISpecObject</tt> implementation 
 * to be overloaded, by redefining the Update method and possibly the IsUpToDate and SetUpToDate methods</li>
 * <li>a feature to be ignored by the update mechanism, by implementing the IsInactive method</li></ul>
 * <b>This interface is to be implemented only, not used.<br>
 * Usage: You can reimplement this interface only by deriving the 
 * supplied @href CATOsmUpdateAdapter class.</b> Check this adapter class
 * for details on how to implement the interface.
 * <p><b>BOA information</b>: this interface must be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page. 
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 * @see CATISpecObject
 * @see CATIBuild
 */

class ExportedByAC0SPBAS CATIOsmUpdate: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
  /**  
   * Rebuilds the feature.
   * <br><b>Role</b>:
   * This method will be called internally by @href CATISpecObject#Update if
   * the startup implements @href CATIOsmUpdate. 
   * It allows applications to override the default method mechanism.
   * <br><b>This method should not be used: 
   * use instead the Update method defined in @href CATISpecObject .</b> 
   * <br><b> Note: </b> The default update mechanism detects all features that have been modified upstream from a 
   * feature, rebuilds all the feature impacting the updated feature, and finally rebuilds
   * the final feature thanks to the @href CATIBuild interface.<br>
   * This method can throw exceptions.
   * @return S_OK if update succeeded, E_FAIL otherwise (the update process is then aborted).
   */
  virtual HRESULT					Update() = 0;

  /**
    * Returns the status of the object concerning the update mechanism.
    * @return CATBoolean
    *    <ul><li>S_OK : the object has been updated.</li>
    *    <li>S_FALSE : the object has to be updated.</li></ul>
    */
  virtual HRESULT				IsUpToDate() const = 0;

  /**
    * Modifies the object update status.
    * <br><b>Role</b>:
    * This method changes the up to date status of the object. It is
    * called every time the object's status changes. The status may change
    * either because an input of the object changes, or because the object
    * is updated or someone directly calls @href CATISpecObject#SetUpToDate .
    * @param  iflag The new status.<br>
    *       <ul>
    *       <li><tt>TRUE</tt> : the object has just been updated. You are not allowed to call SetUpToDate(TRUE).</li>
    *       <li><tt>FALSE</tt>: the object needs to be rebuild.</li>
    *       </ul>
    */
  virtual HRESULT				SetUpToDate( CATBoolean iflag )=0;

  /**
   * Indicates whether the object must be ignored by the update mechanism.
   * @return S_OK if the object should be ignored by the update mechanism,
   *         S_FALSE otherwise.
   */
  virtual HRESULT					IsInactive() const=0;
};

//------------------------------------------------------------------

CATDeclareHandler( CATIOsmUpdate, CATBaseUnknown );

#endif
