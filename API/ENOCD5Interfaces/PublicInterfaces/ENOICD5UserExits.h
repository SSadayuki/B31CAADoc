// COPYRIGHT Dassault Systemes 2013
//===================================================================
//
// ENOICD5UserExits.h
// Derived interface for CD5 User Exits 
//
//===================================================================
//
// Usage notes:
//     To be implemented by the users for User Exit APIs
//     
//===================================================================

#ifndef ENOICD5UserExits_H
#define ENOICD5UserExits_H

/**
 * @CAA2Level L0
 * @CAA2Usage U4 ENOxCADUserExitsAdapter
 */

#include "ExportedByENOCD5UserExitsItf.h"
#include "ENOIxCADUserExitsBase.h"

extern ExportedByENOCD5UserExitsItf IID IID_ENOICD5UserExits;

class ExportedByENOCD5UserExitsItf ENOICD5UserExits: public ENOIxCADUserExitsBase
{
    CATDeclareInterface;

public:
};

CATDeclareHandler(ENOICD5UserExits, ENOIxCADUserExitsBase);
#endif
