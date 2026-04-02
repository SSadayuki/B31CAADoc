// COPYRIGHT DASSAULT SYSTEMES 2012
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#ifndef CATDftDressUpServices_H
#define CATDftDressUpServices_H

#include "CATErrorDefs.h"
#include "CATIUnknownList.h"
#include "DraftingItfCPP.h"


/**
 *   This toolbox purposes services on the dress-up elements: AxisLine, Centerline or Thread.
 */

class ExportedByDraftingItfCPP CATDftDressUpServices
{
  public:

  /** 
   * Retrieves the dimensionable sub-elements from a "dimensionable" Object. Object being AxisLine, Centerline or Thread.
   * <br><b>Role</b>: This method retrieves the dimensionable sub-elements from a "dimensionable" Object.  
   *
   * @param CATBaseUnknown* [in]:
   *	A Centerline: CATIDftCenterLine* or
   *	An AxisLine: CATIDftAxisLine* or
   *	A Thread: CATIDftThread*
   * @return CATIUnknownList** [out]:
   *	A list of dimensionable sub-elements usable by CATIDrwAnnotationFactory::CreateDimension().
   *    @see CATIDrwAnnotationFactory.CreateDimension
   * <dt><tt>S_OK</tt> <dd>if the sub-elements Objects are retrieved correctly.
   * <dt><tt>E_INVALIDARG</tt> <dd>if any argument is invalid.
   * <dt><tt>E_FAIL</tt> <dd>if the operation fails.
   * </dl>
   */
  static HRESULT GetObjectsForDimensioning(CATBaseUnknown *iDressUpObject, CATIUnknownList **oListDimObjects);      

};
#endif
