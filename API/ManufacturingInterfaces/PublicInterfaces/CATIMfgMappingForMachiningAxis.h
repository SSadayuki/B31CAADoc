/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2002
//=============================================================================

#ifndef CATIMfgMappingForMachiningAxis_H
#define CATIMfgMappingForMachiningAxis_H

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

#include "MfgItfEnv.h"
#include "CATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgMappingForMachiningAxis;
#else
extern "C" const IID IID_CATIMfgMappingForMachiningAxis;
#endif

/**
* Interface to read the geometry to be affected to a machining axis system for a dedicated User Feature.
* <b>Role</b>: CATIMfgMappingForMachiningAxis provides a method to give the geometry (axis sytem)
**/

class ExportedByMfgItfEnv CATIMfgMappingForMachiningAxis : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:  

  /**
   * Gets the geometrical Axis system to be assigned to a machining axis system.
   * @param oAxisSystem The axis system geometry
   */
  virtual HRESULT GetAxisSystem (CATBaseUnknown_var& oAxisSystem) = 0;
  
};

CATDeclareHandler(CATIMfgMappingForMachiningAxis, CATBaseUnknown);

#endif


