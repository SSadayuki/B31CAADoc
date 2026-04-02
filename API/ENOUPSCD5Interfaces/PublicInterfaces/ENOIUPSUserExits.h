// COPYRIGHT Dassault Systemes 2013
//===================================================================
//
// ENOIUPSUserExits.h
// Derived interface for CD5 User Exits 
//
//===================================================================
//
// Usage notes:
//     To be implemented by the users for User Exit APIs
//     
//===================================================================

#ifndef ENOIUPSUserExits_H
#define ENOIUPSUserExits_H

/**
 * @CAA2Level L0
 * @CAA2Usage U4 ENOUPSUserExitsAdapter
 */

#include "ExportedByENOUPSUserExitsItf.h"
#include "ENOIUPSUserExitsBase.h"

extern ExportedByENOUPSUserExitsItf IID IID_ENOIUPSUserExits;

class ExportedByENOUPSUserExitsItf ENOIUPSUserExits: public ENOIUPSUserExitsBase
{
    CATDeclareInterface;

public:
};

CATDeclareHandler(ENOIUPSUserExits, ENOIUPSUserExitsBase);
#endif
