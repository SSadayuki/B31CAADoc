/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================

#ifndef CATIMfgMachinableGeomItems_H
#define CATIMfgMachinableGeomItems_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATIMfgAgregate.h"

/**
 * Interface to handle items.
 * <br><b>Role</b>: Items are sub-elements of a machinable geometry feature.
 *
 **/
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgMachinableGeomItems;
#else
extern "C" const IID IID_CATIMfgMachinableGeomItems;
#endif

class ExportedByMfgItfEnv CATIMfgMachinableGeomItems : public CATIMfgAgregate
{
  CATDeclareInterface;

public:

};

CATDeclareHandler(CATIMfgMachinableGeomItems, CATIMfgAgregate);

#endif
