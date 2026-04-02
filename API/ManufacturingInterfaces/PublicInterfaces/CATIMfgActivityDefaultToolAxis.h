#ifndef CATIMfgActivityDefaultToolAxis_H
#define CATIMfgActivityDefaultToolAxis_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2001
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
// Module
#include "MfgItfEnv.h"

// Inheritance
#include "CATBaseUnknown.h"

// Forwards
class CATMathDirection;
class CATMathPoint;

// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgActivityDefaultToolAxis;
#else
extern "C" const IID IID_CATIMfgActivityDefaultToolAxis;
#endif
/**
*<p> This interface is dedicated to Default Tool Axis Management on Manufacturing Activity
* A default implementation is provided.
**/
class ExportedByMfgItfEnv CATIMfgActivityDefaultToolAxis : public CATBaseUnknown
{
  CATDeclareInterface ;  

public:
/**
 * Retrieves the default ToolAxis and Anchor Point .
 * @param oToolAxis   
 *            The Default Tool Axis as CATMathDirection 
 * @see CATMathDirection
 * @param oAnchorPoint
 *            The Anchor Point on which the Tool Axis will be displayed as CATMathPoint
 * @see CATMathPoint
 */
   virtual HRESULT GetDefaultToolAxis(CATMathDirection& oToolAxis, CATMathPoint& oAnchorPoint)=0;
};

CATDeclareHandler( CATIMfgActivityDefaultToolAxis, CATBaseUnknown ) ;
#endif

