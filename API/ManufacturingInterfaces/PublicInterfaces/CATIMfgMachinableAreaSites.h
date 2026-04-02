/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#ifndef CATIMfgMachinableAreaSites_H
#define CATIMfgMachinableAreaSites_H

#include "CATIMfgAgregate.h"

/**
 * Interface to handle sites.
 * <br><b>Role</b>: Sites are sub-elements of a machinable feature.
 *
 **/
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgMachinableAreaSites;
#else
extern "C" const IID IID_CATIMfgMachinableAreaSites;
#endif

class ExportedByMfgItfEnv CATIMfgMachinableAreaSites : public CATIMfgAgregate
{
  CATDeclareInterface;

public:

};

CATDeclareHandler(CATIMfgMachinableAreaSites, CATIMfgAgregate);

#endif
