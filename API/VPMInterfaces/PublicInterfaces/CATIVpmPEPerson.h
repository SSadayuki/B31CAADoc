// COPYRIGHT DASSAULT SYSTEMES 1997
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//=============================================================================
//
// CATIVpmPEPerson:
//	Person class Unified Interface.
//
//=============================================================================
// Usage Notes:
//
//=============================================================================
// Feb 97   Creation                                   J.Poitreau
//=============================================================================
//
#ifndef CATIVpmPEPerson_H_
#define CATIVpmPEPerson_H_

class CATIVpmPEOrganization_var;
class CATIVpmPERole_var;

#include "CATBaseUnknown.h"				// ObjModBase/AD0XXBAS
#include "CATUnicodeString.h"				// International/NS0S3STR
#include "CATListOfCATUnicodeString.h"				// International/NS0S3STR
#include "CATIVpmPEPeople.h"				// VirtualFactoryMgr/Public
//#include "CATIVpmPEOrganization.h"			// VirtualFactoryMgr/Public
#include "GUIDVPMInterfaces.h"



#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmPEPerson ;
#else
extern "C" const IID IID_CATIVpmPEPerson ;
#endif



/**
 * The <b>Person</b> interface.
 * <br>
 * This class is used to get <b>Person</b> informations
 * @see VPMInterfaces.CATIVpmPESomeone
 * @see VPMInterfaces.CATIVpmPEPeople
**/
class ExportedByGUIDVPMInterfaces CATIVpmPEPerson : public CATIVpmPEPeople
{
// RTTI functions
    CATDeclareInterface;

  public:
/**
 * Returns the <i>Person</i> <b>last name</b>.
**/
    virtual CATUnicodeString			GetLastName() = 0;

/**
 * Returns the <i>Person</i> <b>first name</b>.
**/
    virtual CATUnicodeString			GetFirstName() = 0;

/**
 * Returns the  <i>Person</i> <b>Phone number</b>
**/
    virtual CATUnicodeString                    GetPhoneNumber() = 0;

/**
 * Returns the  <i>Person</i> <b>Email</b>
**/
    virtual CATUnicodeString                    GetEmail() = 0;

/**
 * Sets the <i>Person</i> <b>current Role</b>.
**/
    virtual int SetCurrentRole(
                                CATIVpmPERole_var iRole
                              ) = 0;

/**
 * Returns the <i>Person</i> <b>current Role</b>.
**/
    virtual CATIVpmPERole_var GetCurrentRole() = 0;
    virtual HRESULT GetLicences(CATListOfCATUnicodeString & oList) = 0;
    virtual HRESULT GetLicences(
				CATListOfCATUnicodeString &  oList,
				CATLISTV(CATBaseUnknown_var) &iExceptRoles
				) = 0;
};


CATDeclareHandler(CATIVpmPEPerson,CATIVpmPEPeople);


#endif // CATIVpmPEPerson_H_
