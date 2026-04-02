/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2002
//=============================================================================

#ifndef CATIMfgDesignHoleLimits_H
#define CATIMfgDesignHoleLimits_H

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATMathPoint.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgDesignHoleLimits;
#else
extern "C" const IID IID_CATIMfgDesignHoleLimits;
#endif

/**
* Interface to retrieve the resulting extremity points from a design hole.
* <br><b>Role</b>: CATIMfgDesignHoleLimits has methods to retrieve the 
* resulting extremity points from a design hole.
*/

class ExportedByMfgItfEnv CATIMfgDesignHoleLimits : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:  

/**
* Retrieves the resulting extremity points from the hole. 
* @param oFirstLimit
*   The first of the hole  
* @param oSecondLimit
*   The second point of the hole  
*/

    virtual HRESULT GetResultingExtremityPoints (CATMathPoint &oFirstLimit, CATMathPoint &oSecondLimit) = 0; 
};

CATDeclareHandler(CATIMfgDesignHoleLimits, CATBaseUnknown);

#endif


