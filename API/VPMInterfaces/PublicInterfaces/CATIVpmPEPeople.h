// COPYRIGHT DASSAULT SYSTEMES 1997
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//=============================================================================
//
// CATIVpmPEPeople:
//	People class Interface.
//	It is the basic class for person/organization management.
//
//=============================================================================
// Usage Notes:
//
//=============================================================================
// Jan 97   Creation                                   J.Poitreau
//=============================================================================
//
#ifndef CATIVpmPEPeople_H_
#define CATIVpmPEPeople_H_

#include "CATBaseUnknown.h"				    // ObjModBase/AD0XXBAS
#include "CATUnicodeString.h"				// International/NS0S3STR
#include "CATLISTV_CATInterfaceObject.h"
#include "CATIVpmPESomeone.h"				// VirtualFactoryMgr/Public
#include "CATIVpmPERole.h"				// VirtualFactoryMgr/Public
#include "GUIDVPMInterfaces.h"



#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmPEPeople ;
#else
extern "C" const IID IID_CATIVpmPEPeople ;
#endif



/**
 * The <b>People</b> interface.
 * <br>
 * This class is used to get <b>People</b> informations
 * @see VPMInterfaces.CATIVpmPESomeone
**/
class ExportedByGUIDVPMInterfaces CATIVpmPEPeople : public CATIVpmPESomeone   
{
// RTTI functions
	CATDeclareInterface;

  public:
/**
 * Returns the  <i>People</i> <b>Address</b>
**/
    virtual CATUnicodeString                    GetAddress() = 0;

/**
 * Returns the list of <i>Roles</i> to which the <i>Person</i> is connected.
**/
    virtual CATLISTV(CATInterfaceObject_var)*   GetRoleList() = 0;
};


CATDeclareHandler(CATIVpmPEPeople,CATIVpmPESomeone);


#endif // CATIVpmPEPeople_H_
