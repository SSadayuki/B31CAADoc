
#ifndef __CATFmFeatureCutomizationAdaptor_h__
#define __CATFmFeatureCutomizationAdaptor_h__


// COPYRIGHT DASSAULT SYSTEMES 2010

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */


// FeatureModelerExt forwards and headers.
#include "CATIFmFeatureBehaviorCustomization.h"


/**
 * Adaptor providing an empty implementation for each method or the CATIFmFeatureBehaviorCustomization interface.
 * <p>Refer to the CAA Encyclopedia Feature Modeler pages, and more specifically the articles:<ul>
 * <li>Understanding Delete Protocol Customization</li>
 * <li>Cut, Copy Paste Customization</li>
 * <li>Understanding Update </li></ul>
 * before implementing @href CATIFmFeatureBehaviorCustomization interface on the Late Types of your StartUps.</p>
 * @see CATIFmFeatureBehaviorCustomization .
 */
class ExportedByFeatureModelerExt CATFmFeatureCustomizationAdaptor : public CATIFmFeatureBehaviorCustomization
{
public:

  // 1. Removal.

  /**
   * Retrieves the deletability of a Feature from its application owner perspective.
   * <br><b>Role</b>: Services and algorithms may invoke this method to check if the removal of an applicative Feature is legitimate.
   * <p>Override it to let the caller know if he should proceed with the removal. If this method is not overriden, the default rule is to allow the deletion
   * of all Features that are not aggregated, and refuse the deletion of any aggregated Feature.</p>
   * <p>Warnings:<ul>
   * <li>This method is intended to be called at any time, even when the model MUST NOT be modified. DO NOT alter or try to alter the model.</li>
   * <li>Not all services or algorithms invoke and check the result of this method.
   * <br> @href CATFmFeatureFacade#DeleteSelf is an example of a function that will not invoke this check.
   * Since only the owner of the Feature can successfuly invoke the method <tt>DeleteSelf</tt>, the removal is done under
   * the owner's responsibility and will not invoke this <tt>CanBeRemoved</tt> method that is also implemented by the Feature owner.</li></ul></p>
   * @param oDeletable [out]
   *   Whether or not the Feature deletion is legitimate within the application design.
   * @return
   *   This implementation just returns the HRESULT value <tt>E_NOTIMPL<tt>.
   *   <br>Check @href CATIFmFeatureBehaviorCustomization#CanBeRemoved to find the other legal value you can return if you override this method.
   */
  virtual HRESULT CanBeRemoved(CATBoolean & oDeletable) const;

  /**
   * Performs additional applicative clean-up at a Feature removal.
   * <br><b>Role</b>: This method is invoked on each feature when its logical removal is just beginning.
   * <br>Override this method to perform additional model alteration related to the object removal,
   * like the deletion of a singleton Feature that will become useless after the removal of the last Feature that used the singleton.
   * <br>All the components (recursively) of the current feature will be deleted automatically. This is the default behavior.
   * <br>Warnings:<ul>
   * <li>This method is not intended to be used to stop/prevent the removal. DO NOT try to stop/prevent the removal.</li>
   * <li>This method is not called during a document removal (either Close, Unload...) or undo/redo operations.</li></ul>
   * @return
   *   This implementation just returns the HRESULT value <tt>E_NOTIMPL<tt>.
   *   <br>Check @href CATIFmFeatureBehaviorCustomization#BeforeRemove to find the other legal value you can return if you override this method.
   */
  virtual HRESULT BeforeRemove();


  // 2. Update.

  /**
   * Generates the result of a Feature for the Update.
   * <br><b>Role</b>: The build is launched by the Update Engine, after the Feature inputs (sp_in attributes) have been updated.
   * <br>Override this method to compute the result of the Feature.
   * <br>In the implementation:
   * <ul><li>The Update Behavior or values of sp_IN attributes must not be changed.
   *         This would cause a reimpact, leaving the feature outdated after the Update</li>
   *     <li>The values of sp_OUT attributes, if any, can be changed.</li></ul>
   * @return
   *   This implementation just returns the HRESULT value <tt>E_NOTIMPL<tt>.
   *   <br>Check @href CATIFmFeatureBehaviorCustomization#Build to find the other legal value you can return if you override this method.
   */
  virtual HRESULT Build();


  // 3. CCP.

  /**
   * Computes the list of objects to take part in a Copy operation.
   * <br><b>Role</b>: Override this method to provide a list of additional objects that need to be copied along with the current Feature.
   * <br>All the components and extensions (both recursively) of the current feature will necessarily be copied.
   * This cannot be prevented and is considered as the default behavior. Adding components of the current feature is useless and may slow down the process.
   * <br>Warning: this method is intended to be called at any time, even when the model MUST NOT be modified. DO NOT alter or try to alter the model.
   * @param iInitialSetOfObjects [in]
   *   The set of objects intially selected to be duplicated by the Copy operation.
   * @param oObjectToAddToBoundary [out]
   *   The additional objects that must also be copied and must be included in the Copy algorithm.
   * @return
   *   This implementation just returns the HRESULT value <tt>E_NOTIMPL<tt>.
   *   <br>Check @href CATIFmFeatureBehaviorCustomization#CcpRegisterAdditionalObjectsForCopy to find the other legal value you can return if you override this method.
   */
  virtual HRESULT CcpRegisterAdditionalObjectsForCopy(const CATListValCATBaseUnknown_var & iInitialSetOfObjects, CATListValCATBaseUnknown_var & oObjectToAddToBoundary) const;

  /**
   * Integrates the created objects in their environment.
   * <br><b>Role</b>: Override this method to perform modification to the clone structure to adapt it to its new context.
   * <br>Modifications to be performed in this method are for example the invalidation of a computed cache or result stored in an
   * attribute value, or manage refrences to a singleton.
   * <br>The deletion of any "copy" is to be avoided as it could prevent correct rerouting of links among the "copies" and lead to a corrupted model.
   * <br>This method will be invoked on all "copy" Features, once all the copies have been created.
   * A link set on a Feature that has been copied to itself or to another Feature also copied will be rerouted to reference the copy of its original target.
   * This cannot be prevented and is considered as the default behavior.
   * <br>Warnings:<ul>
   *   <li>This method has nothing to do with the Update mechanism and is not related to the @href #Build method described here-above.</li>
   *   <li>The order in which the "copies" will be updated is not part of the specfication; any behavior, even repeatedly observed, may vary across
   *   runs, platforms or releases. No assumption must be made about an implicit order, no algorithm may depend on it.</li>
   *   <li>This method is intended to be called at times when the model is not necessarily fully consistent from the involved applications point of view.
   *   This method is invoked iteratively on many object. The final "Paste" step that links the copies to the targets has not yet been started.
   *   No operation that has impacts the model beyond the application control (such as an @href CATFMFeatureFacade#Update ) shall be done.</li></ul>
   * @param iContext [in]
   *   An object describing the context of the operation and providing additional inputs required to implement the method.
   * @return
   *   This implementation just returns the HRESULT value <tt>E_NOTIMPL<tt>.
   *   <br>Check @href CATIFmFeatureBehaviorCustomization#CcpUpdate to find the other legal value you can return if you override this method.
   * @see CATFmCCPContext
   */
  virtual HRESULT CcpUpdate(const CATFmCCPContext & iContext);

  /**
   * Creates the link between the copies and the paste targets.
   * <br><b>Role</b>: Override this method to implement the final step of the paste operation.
   * <br>This method will be invoked on the target Features, once all the copies have been created and updated.
   * Depending on the applicative modelization, a link or aggregation link may have to be set between the Paste target(s) and the created copies.
   * The default behavior is to do nothing.
   * @param iContext [in]
   *   An object describing the context of the operation and providing additional inputs required to implement the method.
   * @return
   *   This implementation just returns the HRESULT value <tt>E_NOTIMPL<tt>.
   *   <br>Check @href CATIFmFeatureBehaviorCustomization#CcpPaste to find the other legal value you can return if you override this method.
   * @see CATFmCCPContext
   */
  virtual HRESULT CcpPaste(const CATFmCCPContext & iContext);


  /**
   * Computes the list of objects to take part in a Cut operation.
   * <br><b>Role</b>: Override this method to provide a list of additional objects that need to be deleted along with the current Feature.
   * <br>All the components and extensions (both recursively) of the current feature will necessarily be deleted.
   * This cannot be prevented and is considered as the default behavior. Adding components of the current feature is useless and may slow down the process.
   * <br>Note: Some implementations of the interactive Delete command are also based on the Cut algorithm internally.
   * <br>Warning: this method is intended to be called at any time, even when the model MUST NOT be modified. DO NOT alter or try to alter the model.
   * @param iInitialSetOfObjects [in]
   *   The set of objects intially selected to be suppressed by the Cut operation.
   * @param oObjectToAddToBoundary [out]
   *   The additional objects that must also be deleted and must be included in the Cut algorithm.
   * @return
   *   This implementation just returns the HRESULT value <tt>E_NOTIMPL<tt>.
   *   <br>Check @href CATIFmFeatureBehaviorCustomization#CcpRegisterAdditionalObjectsForRemove to find the other legal value you can return if you override this method.
   */
  virtual HRESULT CcpRegisterAdditionalObjectsForRemove(const CATListValCATBaseUnknown_var & iInitialSetOfObjects, CATListValCATBaseUnknown_var & oObjectToAddToBoundary) const;

};


#endif // __CATFmFeatureCutomizationAdaptor_h__

