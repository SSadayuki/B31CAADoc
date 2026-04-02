//
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2001
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U3
*/
//
// module

#ifndef CATIMfgProfileContouringPartDirection_H
#define CATIMfgProfileContouringPartDirection_H

#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "MfgItfEnv.h"
class CATMathVector;
class CATMathPoint;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgProfileContouringPartDirection;
#else
extern "C" const IID IID_CATIMfgProfileContouringPartDirection;
#endif

/**   
 * Interface dedicated to ProfileContouring Object.
 * <b>Role</b>: This interface offers services to retrieve guiding curves on ProfileContouring activity .<br>
 *
 */

class ExportedByMfgItfEnv CATIMfgProfileContouringPartDirection : public CATBaseUnknown
{
  CATDeclareInterface ;  

public:

 /**
 * Writes direction of Profile Contouring Planar Part Element.
 * @param oPoint
 *  Reference CATMathPoint
  * @param oDirection
 *  Reference CATMathVector
 */

    virtual HRESULT GetDirection (CATMathPoint &oPoint, CATMathVector &oDirection)=0;
};

CATDeclareHandler( CATIMfgProfileContouringPartDirection, CATBaseUnknown) ;

#endif














