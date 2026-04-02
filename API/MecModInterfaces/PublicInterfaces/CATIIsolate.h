#ifndef CATIIsolate_h
#define CATIIsolate_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "MecModItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIIsolate;
#else
extern "C" const IID IID_CATIIsolate;
#endif

/**
 * Interface to isolate a feature.
 * <b>Role</b>: To isolate a feature is to remove its specifications and keep its last result.
 * The feature then turns to have a constant result.
 */
class ExportedByMecModItfCPP CATIIsolate : public CATBaseUnknown
{
  CATDeclareInterface;

public:
  /**
   * Isolates a feature.
   * @param oGeneratedFeatures
   * This argument is optional. If the caller wants to know if the isolate process
   * generated new features that replace the original one, it has to provide the argument
   * a non null value so that the callee can return the generated features.
   */
  virtual HRESULT Isolate(CATLISTV(CATBaseUnknown_var) *oGeneratedFeatures = 0) = 0;
};
 
CATDeclareHandler(CATIIsolate,CATBaseUnknown);

#endif
