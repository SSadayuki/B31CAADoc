// COPYRIGHT DASSAULT SYSTEMES 2007     CATIPDMUEAllowDocumentLoading
//===================================================================
#ifndef CATIPDMUEAllowDocumentLoading_H
#define CATIPDMUEAllowDocumentLoading_H

#include "CATPDMBaseItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATIDocId.h"

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATPDMBaseItfCPP IID IID_CATIPDMUEAllowDocumentLoading;
#else
extern "C" const IID IID_CATIPDMUEAllowDocumentLoading ;
#endif

//------------------------------------------------------------------

  /**
   *  Interface to enable some user specific size-check operations on the document/s for load.
   *  <b>Role</b>: This interface is a user exit allowing a user to ensure whether the selected
   *  document/s can be loaded or not subject to memeory considerations.
   *  <br>
   *  You should implement it on the <tt>CATIPDMUEAllowDocumentLoading</tt> component by using
   *  the CATObject mechanism.
   *  NOTE - The Late-type to be used by the customer to implement this interface is "VPM1_AllowDocLoad".
   **/

class ExportedByCATPDMBaseItfCPP CATIPDMUEAllowDocumentLoading: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

 /**
   * Allows the user to estimate whether the present system resoursces are enough to load the desired document/s.
   * <br><b>Role</b>: This method will allow the user to compare the system memory resources with the memory
   * required to load the desired document/s and decide whether the documents can be loaded.
   *
   * @param  NbDocs -- the number of documents to be loaded.
   *  The document to check.
   * @param  iListDocIds
   *  list of the Ids of the documents for load.
   * @param  ipDocSize -- Size of the documents to be loaded.
   *  <br><b>Legal values:  </b>
   *  <ul>
   *    <li><tt>S_OK</tt> It is allowed to load the desired document/s.
   *    <li><tt>S_FALSE</tt> It's not allowed to load the desired document/s.
   *  </ul>
   *
   * @return
   *  <ul>
   *   <li><tt>S_OK</tt>: execution successful</li>
   *   <li><tt>E_FAIL</tt>: The method has failed. A @href CATError class instance is generated.</li>
   *  </ul>
   */

	  virtual HRESULT AllowDocumentLoading(int iNbDocs, CATIDocId **iListDocIds, double **ipDocSize)=0;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------

#endif
