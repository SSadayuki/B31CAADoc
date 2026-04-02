#ifndef CATIMmiInternalCopyWithLinkEdition_h
#define CATIMmiInternalCopyWithLinkEdition_h

// COPYRIGHT DASSAULT SYSTEMES 2008

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"  

class CATIMechanicalFeature_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByMecModItfCPP IID IID_CATIMmiInternalCopyWithLinkEdition;
#else
extern "C" const IID IID_CATIMmiInternalCopyWithLinkEdition;
#endif

  /**
  * Interface used to change the reference of an internal copy with link.
  * <b>Role</b>: This interface is used to change the reference of objects created either by copy/paste as result with link inside a part 
  * or by using @href CATMmrInterPartCopy with the following options :
  * <ul>
  * <li>the source and target must be in the same part. 
  * <li>the link mode must be set either by the setting "keep link" or by the method @href CATMmrInterPartCopy#SetLinkMode (mode TRUE).
  * </ul>
  * <p>Internal copies made without a link do not answer to this interface.</p>
  * <p>The source of the copy is called the reference feature of the internal copy.</p>
  * <p>The reference of an internal copy with link can only be changed on solid internal copies for now.</p>
  * <br><p>This interface has two main usages :</p>
  * <ol>
  * <li>Identifying internal copies with link from other features.
  * <li>Changing the reference feature.
  * </ol></p>
  * <p>Sub elements of the geometry of an internal copy may be referenced by other features. When the reference of an internal copy is changed, its geometry also changes. </p>
  * <p>The features that referenced sub elements of the old copied geometry need to be replugged on sub elements of the new copied geometry via a replace operation.</p>
  * <p>In order to do this, user intervention is needed to specify on which new sub elements the features need to be rerouted. This has to be done interactively through the Replace Viewer.</p><br>
  * <p>see @href CATIMmiInternalCopyWithLink to retrieve the reference feature.</p>
  * 
  * <br><p>The main behaviours of an internal copy with link are the following :</p>
  * <ul>
  * <li>Updating the internal copy : it performs a synchronization of the geometry by copying the geometry of the reference feature.
  * <li>Breaking the link with @href CATIIsolate#Isolate . After this operation, the feature will no more answer to this interface because the
  * link is deleted.
  * <li>Temporary isolation with @href CATIMmiResultFreeze#Freeze (reversed with @href CATIMmiResultFreeze#Unfreeze). After this operation, the feature
  * still answers to this interface.
  * </ul></p>
  */
class ExportedByMecModItfCPP CATIMmiInternalCopyWithLinkEdition : public CATBaseUnknown
{
  CATDeclareInterface;

public:

   /**
   * Sets the reference of the copy.
   * @param ihReferenceFeature
   *      The reference of the copy.
   * @param iAuthorizeManualReplugging
   *      Indicates whether the Replace Viewer should be launched when manual reroute is necessary in order to fully complete the Replace operation.
   *   <br> Possible values:
   *   <p><ul><li><code>TRUE</code> means the Replace Viewer is launched if user intervention is needed to complete the Replace operation.</li>
   *   <li><code>FALSE</code> means the Replace Viewer is never launched even if user intervention is needed to complete the Replace operation.
   *   <br>In this case, if user intervention is needed, the Replace operation will lead to update errors, but will be considered as a success.</li></ul></p>
   * @return
   *   <p><code>S_OK</code> the operation went through successfully according to the iAuthorizeManualReplugging argument. 
   *   <br>This garantees that the internal copy has changed reference, but does not garantee that the features that take the internal copy as import will not have update errors.
   *   <br>Update errors can occur if manual reroute was necessary but either no Replace Viewer was wanted or Replace Viewer was wanted, but manually reroute was not performed correctly by the user.
   *   <br><code>E_FAIL</code> if the operation failed or if the internal copy with link is frozen.
   *   <br>It is not possible to change the reference of a frozen internal copy with link. The internal copy must be unfrozen before this method can be called.
   *   <br><code>E_NOTIMPLEMENTED</code> if the internal copy is not a solid feature.</p>
   */
  virtual HRESULT SetSelectedElement( const CATIMechanicalFeature_var &ihReferenceFeature, const CATBoolean iAuthorizeManualReplugging ) = 0; 

};

CATDeclareHandler(CATIMmiInternalCopyWithLinkEdition,CATBaseUnknown);

#endif

