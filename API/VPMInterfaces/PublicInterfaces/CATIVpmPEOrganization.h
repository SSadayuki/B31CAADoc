// COPYRIGHT DASSAULT SYSTEMES 1997
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//=============================================================================
//
// CATIVpmPEOrganization:
//	Organization class Unified Interface.
//
//=============================================================================
// Usage Notes:
//
//=============================================================================
// Feb 97   Creation                                   J.Poitreau
//=============================================================================
//
#ifndef CATIVpmPEOrganization_H_
#define CATIVpmPEOrganization_H_

class CATIVpmPEPerson_var;

#include "CATBaseUnknown.h"					// ObjModBase/AD0XXBAS
#include "CATUnicodeString.h"				// International/NS0S3STR
#include "CATIVpmPEPeople.h"				// VirtualFactoryMgr/Public
//#include "CATIVpmPEPerson.h"				// VirtualFactoryMgr/Public
#include "CATLISTV_CATInterfaceObject.h"	// ObjModBase/AD0XXBAS
#include "GUIDVPMInterfaces.h"



#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmPEOrganization ;
#else
extern "C" const IID IID_CATIVpmPEOrganization ;
#endif


/**
 * The <b>Organization</b> interface.
 * <br>
 * This class is used to get <i>Organization</i> informations
 * @see VPMInterfaces.CATIVpmPESomeone
 * @see VPMInterfaces.CATIVpmPEPeople
**/
class ExportedByGUIDVPMInterfaces CATIVpmPEOrganization : public CATIVpmPEPeople   
{
// RTTI functions
    CATDeclareInterface;

  public:
/**
 * Returns the <i>Organization</i> <b>name</b>.
**/
    virtual CATUnicodeString        GetOrgName() = 0;

/**
 * Returns the <i>Organization</i> <b>description</b>.
**/
    virtual CATUnicodeString        GetOrgDescription() = 0;

/**
 * Returns the <i>Organization</i> <b>manager</b> (a <i>person</i>).
**/
    virtual CATIVpmPEPerson_var     GetManager() = 0;

/**
 * Returns the list of belonging <i>Organizations</i>.
**/
    virtual CATLISTV(CATInterfaceObject_var)*   GetOrganizationList() = 0;

/**
 * Returns the list of belonging <i>Persons</i>
**/
    virtual CATLISTV(CATInterfaceObject_var)*   GetPersonList() = 0;

/**
 * Returns the list of related <i>Roles</i>.
**/
    virtual CATLISTV(CATInterfaceObject_var)*   GetRelatedRoleList() = 0;
};


CATDeclareHandler(CATIVpmPEOrganization,CATIVpmPEPeople);


#endif // CATIVpmPEOrganization_H_
