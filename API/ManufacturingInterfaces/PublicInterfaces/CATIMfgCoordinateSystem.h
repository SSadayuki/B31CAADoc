/* -*-c++-*- */
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000
//=============================================================================

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#ifndef CATIMfgCoordinateSystem_H
#define CATIMfgCoordinateSystem_H

#include "MfgItfEnv.h"
#include "CATIMfgAuxiliaryOperation.h"

class CATMathAxis;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgCoordinateSystem;
#else
extern "C" const IID IID_CATIMfgCoordinateSystem;
#endif

/**   
 * Interface dedicated to machining axis system management.
 * <b>Role</b>: This interface offers services to retrieve axis system information <br>
 */

class ExportedByMfgItfEnv CATIMfgCoordinateSystem : public CATIMfgAuxiliaryOperation
{
  CATDeclareInterface ;  

  public:
  /**
	* Retrieves the mathematical axis beyond machining axis system.
    * @param oAxis
	*       the mathematical axis
	*/
  virtual HRESULT GetAxis (CATMathAxis& oAxis) = 0; 

};

CATDeclareHandler(CATIMfgCoordinateSystem, CATIMfgAuxiliaryOperation) ;

#endif














