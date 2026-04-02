/* -*-c++-*- */
#ifndef CATOsmUpdateAdapter__H
#define CATOsmUpdateAdapter__H
// COPYRIGHT DASSAULT SYSTEMES 2005

/**
  * @CAA2Level L1
  * @CAA2Usage U2
  */

#include "AC0SPBAS.h"
#include "CATBaseUnknown.h"
#include "CATIOsmUpdate.h"
#include "CATISpecDeclarations.h"

/** 
 * Adapter class for the @href CATIOsmUpdate interface.
 * <br><b>Role</b>:
 * This is the base class from which you should derive if you have to
 * <ul><li>overload the standard update mechanism, by redefining the Update 
 * and possibly the IsUpToDate and SetUpToDate methods</li>
 * <li>allow your object to be ignored by the update mechanism
 * by implementing the IsInactive method.</li></ul>
 * It is strongly advised not to implement this interface on features
 * that derive from startups defined by Dassault Systemes because the
 * update behaviour of these features is often specialised.
 */
class ExportedByAC0SPBAS CATOsmUpdateAdapter : public CATIOsmUpdate
{
  public:
  /**  
   * Rebuilds the feature.
   * <br><b>Role</b>:
   * This method will be called internally by @href CATISpecObject#Update if
   * the startup implements <tt>CATIOsmUpdate</tt>. It allows the default 
   * method mechanism to be overriden.<br>
   * This method can throw exceptions.
   * <p>
   * You must always call @href CATOsmUpdateAdapter#Update inside 
   * your implementation if you overload this method, except when you know
   * the update will fail in which case you may return E_FAIL before calling
   * it. Doing this will allow the standard update mechanism to kick in: This
   * method detects all features that have been modified upstream from a 
   * feature, rebuilds all the feature impacting the updated feature, and finally rebuilds
   * the final feature thanks to the @href CATIBuild interface.<br>
   * Make sure your Update implementation is consistent with @href#IsUpToDate .
   * </p>
   * @return S_OK if update succeeded, E_FAIL otherwise (the update process is then aborted).
   */
  virtual HRESULT					Update();

  /**
   * Returns the status of the object concerning the update mechanism.
   * <p>
   * If you overload this method and when you want to return S_FALSE, in 
   * addition to your own computation, you must also call @href#SetUpToDate
   * (FALSE).<br>
   * If you don't want to force the S_FALSE result, you must call 
   * @href CATOsmUpdateAdapter#IsUpToDate in order for other dependencies
   * to be checked properly. This method will check that all inputs are
   * up to date and that this feature has been updated after the update of
   * its inouts. <br>
   * For example:
   * <pre>
   *   Example::IsUpToDate()
   *   {
   *     if (something())
   *     {
   *       SetUpToDate(FALSE);
   *       return S_FALSE;
   *     }
   *     return CATOsmUpdateAdapter::IsUpToDate();
   *   }
   * </pre>
   * Make sure your IsUpToDate implementation is consistent with @href#Update .
   * </p>
   * @return
   *    <ul><li>S_OK: the object has been updated.</li>
   *    <li>S_FALSE : the object has to be updated.</li></ul>
   */
  virtual HRESULT				IsUpToDate() const;

  /**
   * Modifies the object update status.
   * <br><b>Role</b>:
   * This method changes the up to date status of the object. It is
   * called every time the object's status changes. The status may change
   * either because an input of the object changes, or because the object
   * is updated (or someone directly calls @href CATISpecObject#SetUpToDate ).
   * <p>
   * You must always call @href CATOsmUpdateAdapter#SetUpToDate if
   * you overload this method.
   * </p>
   * @param  iflag The new status.<br>
   *       <ul>
   *       <li><tt>TRUE</tt> : the object has just been updated.</li>
   *       <li><tt>FALSE</tt>: the object needs to be rebuild.</li>
   *       </ul>
   */
  virtual HRESULT				SetUpToDate( CATBoolean iflag );

  /**
   * Indicates whether the object must be ignored by the update mechanism.
   * <br><b>Role</b>:
   * If you want to allow inactivation of your
   * object, you must store that information somehow and implement this
   * method to return S_OK when inactivated. Inactivated objects no
   * longer update themselves even if they are inputs of other objects.
   * Thus, inactive objects will never be called on @href CATIBuild#Build .
   * <b>Note</b>: This method returns S_FALSE.
   * @return S_OK if the object is to be ignored by the update mechanism,
   *         S_FALSE otherwise.
   */
  virtual HRESULT					IsInactive() const;
};

#endif
