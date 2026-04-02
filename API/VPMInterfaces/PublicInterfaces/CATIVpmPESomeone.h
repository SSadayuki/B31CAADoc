// COPYRIGHT DASSAULT SYSTEMES 1997
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//=============================================================================
//
// CATIVpmPESomeone:
//	Someone class Interface.
//	It is the basic class for person/organization/role management.
//
//=============================================================================
// Usage Notes:
//
//=============================================================================
// Jan 97   Creation                                   J.Poitreau
//=============================================================================
//
#ifndef CATIVpmPESomeone_H_
#define CATIVpmPESomeone_H_

#include "CATBaseUnknown.h"				// ObjModBase/AD0XXBAS
#include "CATUnicodeString.h"				// International/NS0S3STR
#include "GUIDVPMInterfaces.h"
#include "CATIContainer.h"



#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmPESomeone ;
#else
extern "C" const IID IID_CATIVpmPESomeone ;
#endif



class CATIVpmPESomeone_var;
class CATIVpmPEPerson_var;

/**
 * The most basic <u>VPM People/Organization</u> interface.
 * <br>
 * This class is used to manage <i>Person, Organization</i> or <i>Role</i>
 * @see VPMInterfaces.CATIVpmPEPerson
 * @see VPMInterfaces.CATIVpmPEOrganization
 * @see VPMInterfaces.CATIVpmPERole
**/
class ExportedByGUIDVPMInterfaces CATIVpmPESomeone : public CATBaseUnknown   
{
// RTTI functions
    CATDeclareInterface;

  public:
/**
 * Returns the <i>Someone</i> <b>id</b>
**/
    virtual CATUnicodeString GetId() = 0;

/**
 * Returns the logical name for implementation (name of the working form)
 * <br>In this case, "AGPO" (for Access Group / People /Organization)
**/
    virtual CATUnicodeString            GetImplementationName() = 0;

/**
 * Get <b>parent</b> object as a <i>Someone</i> object.
 * <br>Depending on the kind of object I am, returned object differs:
 * <ul>
 * <li> <pre><u>person</u>      </pre> returns <i>organization</i>
 * <li> <pre><u>organization</u></pre> returns <i>organization</i> (or NULL)
 * <li> <pre><u>role</u>        </pre> returns <i>role</i> (or NULL)
 * </ul>
**/
    virtual CATIVpmPESomeone_var        GetParent() = 0;
    virtual CATIContainer_var		GetContainer() = 0;
};


CATDeclareHandler(CATIVpmPESomeone,CATBaseUnknown);


#endif // CATIVpmPESomeone_H_
