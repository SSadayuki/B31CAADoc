// COPYRIGHT DASSAULT SYSTEMES 2002
#ifndef CATIDftGenRequestProvider_H
#define CATIDftGenRequestProvider_H
/**
 * @CAA2Level L0
 * @CAA2Usage U5
 */
#include "DraftingItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATDftGenEnum.h"
#include "CATBooleanDef.h"

class CATDftGenContext;
class CATIUnknownList;
class CATIDftGenSRFactory;
class CATListPtrCATCGMJournals;
class CATDftGenRequestWithMatrix;
class CATDftGenResult;
class CATDftGenLightResult;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftGenRequestProvider;
#else
extern "C" const IID IID_CATIDftGenRequestProvider ;
#endif

//------------------------------------------------------------------

/**
* Describe the functionality of your interface here
* <p>
* Using this prefered syntax will enable mkdoc to document your class.
*/
class ExportedByDraftingItfCPP CATIDftGenRequestProvider: public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
  
  /*
  * implement just one of the GetGenRequest(...) methods
  */
  
  /*
  * Returns All the CATIDftGenRequest contained in this CATIDftGenRequestProvider.
  * @param iObj
  *    the calling object
  * @param iGenContext
  *   the context of the generation as a CATDftGenContext
  * @param oGenReqChildren
  *   a list of all the CATIDftGenRequest.
  * @param oIsAnOverloadBehavior
  *   if not null,
  *   return TRUE if the called object must be the only one CATIDftGenRequest Object to be called
  *   on the others CATIDftGenRequest methods (GetResults, GetSymbolicRep ...).
  */
  virtual HRESULT GetGenRequest (const CATBaseUnknown* iObj,
    const CATDftGenContext*  iGenContext,
    CATIUnknownList ** oGenReqChildren, 
    CATBoolean* oIsAnOverloadBehavior = NULL) const = 0 ;
  
  
  
  /*
  * see CATIDftGenRequest Interface Definition
  * Returns All the CATIDftGenRequest contained in this CATIDftGenRequestProvider.
  * @param iObj
  *    the calling object
  * @param iGenContext
  *   the context of the generation as a CATDftGenContext
  * @param oGenRequests
  *   an array of CATDftGenRequestWithMatrix which contains all the CATIDftGenRequest returned associated to a matrix.
  * @param oNbRequest
  *   the number of CATDftGenRequestWithMatrix returned
  * @param oIsAnOverloadBehavior
  *   if not null,
  *   return TRUE if the called object must be the only one CATIDftGenRequest Object to be called
  *   on the others CATIDftGenRequest methods (GetResults, GetSymbolicRep ...).
  */
  virtual HRESULT GetGenRequest (const CATBaseUnknown* iObj,
    const CATDftGenContext * iGenContext,
    CATDftGenRequestWithMatrix **  oGenRequests,
    int * oNbRequest, 
    CATBoolean* oIsAnOverloadBehavior = NULL) const = 0;
  
  
  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------

#endif
