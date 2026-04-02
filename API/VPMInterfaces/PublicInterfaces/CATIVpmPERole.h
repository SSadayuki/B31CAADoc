// COPYRIGHT DASSAULT SYSTEMES 1997
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//=============================================================================
//
// CATIVpmPERole:
//	Role class interface
//
//=============================================================================
// Usage Notes:
//
//=============================================================================
// Jan 97   Creation                                   J.Poitreau
//=============================================================================
//
#ifndef CATIVpmPERole_H_
#define CATIVpmPERole_H_

class CATIVpmPEOrganization_var;

#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"
#include "CATIVpmPESomeone.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmPERole ;
#else
extern "C" const IID IID_CATIVpmPERole ;
#endif

/**
 * The <b>Role</b> interface.
 * <br>
 * This class is used to get <b>Role</b> informations.
 * @see VPMInterfaces.CATIVpmPESomeone
**/
class ExportedByGUIDVPMInterfaces CATIVpmPERole : public CATIVpmPESomeone   
{
// RTTI functions
    CATDeclareInterface;

  public:
/**
 * Returns the <i>Role</i> <b>name</b>.
**/
    virtual CATUnicodeString                    GetRoleName() = 0;
/**
 * Returns the <i>Role</i> <b>description</b>.
**/
    virtual CATUnicodeString                    GetRoleDescription() = 0;

/**
 * Returns the list of <i>Organizations</i> that are connected to the <i>Role</i>.
**/
    virtual CATLISTV(CATInterfaceObject_var)*   GetOrganizationList() = 0;

/**
 * Returns the list of <i>Persons</i> that are connected to the <i>Role</i>.
**/
    virtual CATLISTV(CATInterfaceObject_var)*   GetPersonList() = 0;

/**
 * Returns the list of other <i>Roles</i> that are connected to the <i>Role</i>.
**/
    virtual CATLISTV(CATInterfaceObject_var)*   GetRoleList() = 0;

/**
 * Returns the organization to which the <i>Role</i> belongs.
**/
    virtual CATIVpmPEOrganization_var   GetOrganization() = 0;
/**
 * Get the <i>project</i> list of the object.
 * Always Returns 0 (succeeded)
**/
    virtual HRESULT GetProjects(CATListOfCATUnicodeString &oList) = 0;
/**
 * Get the <i>mask</i> list of the object.
 * Always Returns 0 (succeeded)
**/
    virtual HRESULT GetMasks(CATLISTV(CATInterfaceObject_var) &oList) = 0;
};

CATDeclareHandler(CATIVpmPERole,CATIVpmPESomeone);


#endif // CATIVpmPERole_H_
