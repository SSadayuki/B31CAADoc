#ifndef CATIContainerOfDocument_h
#define CATIContainerOfDocument_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "MecModItfCPP.h"

class CATIContainer;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIContainerOfDocument;
#else
extern "C" const IID IID_CATIContainerOfDocument;
#endif

/**
 * Interface to retrieve the main containers of a Part document.
 * <b>Role</b>: This interface is implemented on the Part document to 
 * retrieve the four main containers of this type of document:
 * <ul>
 * <li>The <b>product</b> container</li>
 * <p>This container contains an ASMProduct feature. This feature serves as reference for all 
 * the instantiations of the Part document in Product documents. Use the 
 * @href CATIPrtPart#GetProduct method to retrieve it.</p>
 * <li>The <b>specification</b> container</li>
 * <p>It is the container which contains the mechanical features. It is those that you can see in
 * the specification tree. You can also retrieve this container in using the 
 * @href CATInit#GetRootContainer method.  </p>
 * <li>The <b>result</b> container</li>
 * <p>It is the container which contains the topological results of the geometrical features. 
 * A geometrical feature is a mechanical feature for which a topological object can be 
 * associated with its result. This topological object is a @href CATBody . </p>
 * <li>The <b>BRep</b> container</li>
 * <p>It is the container which contains the objects to name with a stable way the 
 * topological sub-element.</p>
 * </ul>
 */
class ExportedByMecModItfCPP CATIContainerOfDocument : public CATBaseUnknown
{
  CATDeclareInterface;

public:
  /**
   * Returns the product container of the document.
   * @param oContainer
   * The product container. 
   */
  virtual HRESULT GetProductContainer(CATIContainer *&oContainer) = 0;

  /**
   * Returns the specification container of the document.
   * @param oContainer
   * The specification container.
   */
  virtual HRESULT GetSpecContainer(CATIContainer *&oContainer) = 0;

  /**
   * Returns the result container of the document.
   * @param oContainer
   * The result container.
   */
  virtual HRESULT GetResultContainer(CATIContainer *&oContainer) = 0;

  /**
   * Returns the BRep container of the document.
   * @param oContainer
   * The BRep container.
   */
  virtual HRESULT GetBRepContainer(CATIContainer *&oContainer) = 0;
};
CATDeclareHandler(CATIContainerOfDocument, CATBaseUnknown);

#endif
