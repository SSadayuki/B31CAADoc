#ifndef CATIMmiInternalCopyWithLink_h
#define CATIMmiInternalCopyWithLink_h

// COPYRIGHT DASSAULT SYSTEMES 2007

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"  

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByMecModItfCPP IID IID_CATIMmiInternalCopyWithLink;
#else
extern "C" const IID IID_CATIMmiInternalCopyWithLink;
#endif

/**
 * Interface to manage internal copy with link.
 * <b>Role</b>:  This interface allows to manage objects created either by copy/paste as result with link inside a part 
 * or by using @href CATMmrInterPartCopy with the following options :
 * <ul>
 * <li>the source and target must be in the same part. 
 * <li>the link mode must be set either by the setting "keep link"
 * or by the method @href CATMmrInterPartCopy#SetLinkMode (mode TRUE).
 * </ul>
 * <p>Internal copies made without a link do not answer to this interface.</p>
 * <p>The source of the copy is called the reference feature of the internal copy.</p>
 * <p>This interface has two main usages :</p>
 * <ol>
 * <li>Identifying internal copies with link from other features.
 * <li>retrieving the reference feature.
 * </ol>
 * The main behaviours of an internal copy with link are the following :
 * <ul>
 * <li>Updating the internal copy : it performs a synchronization of the geometry by copying the geometry of the reference feature.
 * <li>Breaking the link with @href CATIIsolate#Isolate . After this operation, the feature will no more answer to this interface because the
 * link is deleted.
 * <li>Temporary isolation with @href CATIMmiResultFreeze#Freeze (reversed with @href CATIMmiResultFreeze#Unfreeze). After this operation, the feature
 * still answers to this interface.
 * </ul>
 */
class ExportedByMecModItfCPP CATIMmiInternalCopyWithLink : public CATBaseUnknown
{
  CATDeclareInterface;

public:

     /**
     * Returns the reference of the copy.
     *  @param iIID
     *      The interface IID to query on the returned object.
     * @param oPointedElem [out]
     *      Pointer to pointed element
     * @return
     * <p>S_OK if the pointed element is found.</p>
     * <p>E_FAIL if the pointed element has been deleted.</p>
     */
  virtual HRESULT GetSelectedElement(const IID& iIID, void** oPointedElem) = 0 ; 

};

CATDeclareHandler(CATIMmiInternalCopyWithLink,CATBaseUnknown);

#endif
