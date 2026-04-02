
#ifndef __CATFmCCPContext_h__
#define __CATFmCCPContext_h__


// COPYRIGHT DASSAULT SYSTEMES 2010

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


// FeatureModelerExt forwards and headers.
#include "FeatureModelerExt.h" // ExportedByFeatureModelerExt

// Other forwards and headers.
class CATBaseUnknown;
class CATBaseUnknown_var;
#include "CATSysBoolean.h" // CATBoolean
#include "CATLISTV_CATBaseUnknown.h" // CATListValCATBaseUnknown_var
#include "IUnknown.h" // HRESULT

/**
 * Class defining the context of a Cut, Copy or Paste operation.
 * <p>Refer to the CAA Encyclopedia Feature Modeler pages, and more specifically the article "Cut, Copy Paste Customization".
 * @see CATIFmFeatureBehaviorCustomization .
 */
class ExportedByFeatureModelerExt CATFmCCPContext
{
public:
  /**
   * Returns information about the source context.
   * <br><b>Role</b>: Call this method to know whether the <b>source</b> of the Cut/Copy Paste operation is in a clipboard.<ul>
   * <li>In case of an Edit -> Copy action in an intercative application, this method will return FALSE</li>.
   * <li>In case of an Edit -> Paste action in an intercative application, this method will return TRUE</li>.
   * <li>When invoked in batch, or by other commands like @href DataCommonProtocolCCPServices , result will depend on the context.</li></ul>
   * @return
   *   An Boolean value.
   *   <dl>
   *     <dt>TRUE</dt>
   *     <dd>The objects to copy (source) of the current operation are in a clipboard.</dd>
   *     <dt>FALSE</dt>
   *     <dd>The objects to copy (source) of the current operation are not in a clipboard.</dd>
   *  </dl>
   */
  CATBoolean IsSourceInClipBoard() const;

  /**
   * Returns information about the target context.
   * <br><b>Role</b>: Call this method to know whether the <b>target</b> of the Cut/Copy Paste operation is in a clipboard.<ul>
   * <li>In case of an Edit -> Copy action in an intercative application, this method will return TRUE</li>.
   * <li>In case of an Edit -> Paste action in an intercative application, this method will return FALSE</li>.
   * <li>When invoked in batch, or by other commands like @href DataCommonProtocolCCPServices , result will depend on the context.</li></ul>
   * @return
   *   An Boolean value.
   *   <dl>
   *     <dt>TRUE</dt>
   *     <dd>The copies (target) of the current operation are in a clipboard.</dd>
   *     <dt>FALSE</dt>
   *     <dd>The copies (target) of the current operation are not in a clipboard.</dd>
   *  </dl>
   */
  CATBoolean IsTargetInClipBoard() const;

  /**
   * Retrieves the impacted objects.
   * <br><b>Role</b>: This method retrieves the objects that will be impacted by the current operation.<ul>
   * <li>When the current operation is @href CATIFmFeatureBehaviorCustomization#CcpUpdate ,
   *   the set contains all the objects on which the CcpUpdate method will be invoked.</li>
   * <li>When the current operation is @href CATIFmFeatureBehaviorCustomization#CcpPaste ,
   *   the set contains the root objects that have been created and must be handled.</li></ul>
   * @param oSetOfObjects [out]
   *   A (caller provided) collection in which the list of objects that have to be processed during the operation will be stored.
   *   <br>If the method fails <tt>oSetOfObjects</tt> is not modified, it is otherwise overwritten with the retrieved value.
   *   <br>Warning: the exact type of the classes returned as <tt>CATBaseUnknown</tt> pointers
   *   is not part of the specification and may vary. Do not make any assumption about it.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The list has been successfuly retrieved.</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>This list cannot be retrived for the current operation.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   */
  HRESULT GetImpactedObjects(CATListValCATBaseUnknown_var & oSetOfObjects) const;

  /**
   * Retrieves the target objects.
   * <br><b>Role</b>: This method retrieves the list of targets for the paste operation.<ul>
   * <li>In case of an Edit -> Copy action in an intercative application, this method will fail.</li>
   * <li>In case of an Edit -> Paste action in an intercative application, this method will succeed.</li>
   * <li>When invoked in batch, or by other commands like @href DataCommonProtocolCCPServices , result will depend on the context.</li></ul>
   * @param oPasteTargets [out]
   *   A (caller provided) collection in which the the list of targets for the paste operation will be stored.
   *   <br>If the method fails <tt>oPasteTargets</tt> is not modified, it is otherwise overwritten with the retrieved value.
   *   <br>Warning: the exact type of the classes returned as <tt>CATBaseUnknown</tt> pointers
   *   is not part of the specification and may vary. Do not make any assumption about it.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The list has been successfuly retrieved.</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>This list cannot be retrived for the current operation.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   */
  HRESULT GetPasteTargets(CATListValCATBaseUnknown_var & oPasteTargets) const;

  /**
   * Returns the source object from its copy.
   * <br><b>Role</b>: This method gives access to the mapping between source and copy objects during a Copy or a Paste operation.
   * @param iCopy [in]
   *   Any interface pointer to the copy object as a <tt>CATBaseUnknown</tt> pointer.
   * @return
   *   A smart pointer holding an interface pointer to the related source object if applicable, or NULL_var.
   *   <br>Warning: the exact type of the interface returned as a <tt>CATBaseUnknown</tt> pointer
   *   is not part of the specification and may vary. Do not make any assumption about it.
   */
  CATBaseUnknown_var GetSourceObjectFromCopy(const CATBaseUnknown * iCopy) const;

  /**
   * Returns the copy object from its source.
   * <br><b>Role</b>: This method gives access to the mapping between source and copy objects during a Copy or a Paste operation.
   * @param iSource [in]
   *   Any interface pointer to the source object as a <tt>CATBaseUnknown</tt> pointer.
   * @return
   *   A smart pointer holding an interface pointer to the related copy object if applicable, or NULL_var.
   *   <br>Warning: the exact type of the interface returned as a <tt>CATBaseUnknown</tt> pointer
   *   is not part of the specification and may vary. Do not make any assumption about it.
   */
  CATBaseUnknown_var GetCopyObjectFromSource(const CATBaseUnknown * iSource) const;

protected:
  /**
   * Default constructor.
   */
  CATFmCCPContext();

private:
  CATFmCCPContext(const CATFmCCPContext &); // Not implemented.
  CATFmCCPContext & operator=(const CATFmCCPContext &); // Not implemented.
};


#endif // __CATFmCCPContext_h__

