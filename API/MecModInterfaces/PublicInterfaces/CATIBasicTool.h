#ifndef CATIBasicTool_h
#define CATIBasicTool_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"

class CATListValCATISpecObject_var; 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIBasicTool;
#else
extern "C" const IID IID_CATIBasicTool;
#endif

/**
 * Interface to identify Body features and get included Body features.
 * <br><b>Role</b>: Query this interface to identify a Body feature (Geometrical Set, Ordered Geometrical Set, PartBody, Body.n) <br>
 * and get the included Body features, directly aggregated under the current Body.
 */
class ExportedByMecModItfCPP CATIBasicTool : public CATBaseUnknown
{
  CATDeclareInterface;

public:

 /** 
  * Retrieves included Body features at first level.
  *
  * <br><b>Role</b>: Gets the components aggregated at first level that adhere to CATIBasicTool interface.
  *
  * @param oIncludedBodies [out]
  *   The included Body features.
  *
  * @return
  *   <code>S_OK</code> everytime
  *
  */
  virtual HRESULT GetIncludedTools(CATListValCATISpecObject_var& oIncludedBodies) const=0; 
};

CATDeclareHandler(CATIBasicTool,CATBaseUnknown);

#endif
