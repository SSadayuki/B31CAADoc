#ifndef CATICfgSimpleSpecification_h
#define CATICfgSimpleSpecification_h

//COPYRIGHT DASSAULT SYSTEMES 2000

/**
 *@CAA2Level L1
 *@CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "sequence_octet.h"
#include "sequence_CORBAAny.h"
#include "CATICfgSpecification.h"
#include "GUIDVPMInterfaces.h"
#include "CATListOfCATICfgSimpleSpecification.h"
#include "CATListOfCATILinkableObject.h"
#include "CATICfgSpecLnk.h"

class CATICfgSpecCategory_var;
class CATUnicodeString ;
class CATListValCATICfgSimpleSpecification_var;
class CATILinkableObject_var;
class CATIConfigurable_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgSimpleSpecification ;
#else
extern "C" const IID IID_CATICfgSimpleSpecification ;
#endif

//=============================================================================

class ExportedByGUIDVPMInterfaces CATICfgSimpleSpecification : public CATICfgSpecification {

     CATDeclareInterface;

public:

/**
 * Return the Name of this SimpleSpecification.
 * @param oName
 *   The SimpleSpecification Name.
 */
     virtual HRESULT GetName(CATUnicodeString &oName) const = 0 ;

/**
 * Return the full Name as Category.SimpleSpecification.
 * @param oName
 *   The full Name obtained by concatenation of the owning Category Name and the SimpleSpecification Name.
 */
     virtual HRESULT  GetFullName(CATUnicodeString &oName) const = 0 ;

/**
 * Return the full Name as "Category Oid"."SimpleSpecification Oid".
 * @param oName
 *   The full Name obtained by concatenation of the owning Category Oid and the SimpleSpecification Oid.
 */
     virtual HRESULT  GetFullOid(char*& oOid)  = 0 ;

/**
 * Return the Description of this SimpleSpecification.
 * @param oDescription
 *   The SimpleSpecification Description to return.
 */
     virtual HRESULT GetDescription(CATUnicodeString &oDescription) const =0;

/**
 * Set the Description of this SimpleSpecification.
 * @param oDescription
 *   The SimpleSpecification Description to set.
 */
     virtual HRESULT  SetDescription(const CATUnicodeString & iDescription) = 0;

/**
 * Attach this SimpleSpecification to a Configurable.
 * @param iObjectUUID
 *   UUID of the Configurable this SimpleSpecification will be attached to.
 */
     virtual HRESULT Attach(SEQUENCE(octet) &iObjectUUID)=0;

/** @nodoc
 * Attach this SimpleSpecification to a Configurable.
 * @param iCO
 *   Configurable this SimpleSpecification will be attached to.
 * @param oSpecLnk
 *   Link between the configurable and the specification.
 */
     virtual HRESULT Attach(const CATIConfigurable_var &iCO, CATICfgSpecLnk_var &oSpecLnk)=0;

/**
 * Detach this SimpleSpecification from a Configurable.
 * <br><b>Postcondition</b>: If the SimpleSpecification belongs to a Configuration Rule attached to the
 * Configurable, the method doesn't detach it.
 * @param iConfigurableUID
 *   UUID of the Configurable this SimpleSpecification will be detached from.
 */
     virtual HRESULT  Detach(SEQUENCE(octet) &iConfigurableUID) = 0;

/**
 * Return the SpecCategory owning this SimpleSpecification.
 * @param oCategory
 *   SpecCategory owning this SimpleSpecification: it may be NULL_var.
 */
     virtual HRESULT  GetSpecCategory(CATICfgSpecCategory_var &oCategory) const = 0 ;

/**
 * Return the list of UUIDs-Configurables this SimpleSpecification is attached to.
 * @param Ret
 *   List of UUIDs-Configurables this SimpleSpecification is attached to.
 */
     virtual HRESULT GetUIDList(SEQUENCE(CORBAAny)& Ret) const = 0;

/** @nodoc */
     virtual HRESULT SetPackage() = 0;

/** @nodoc */
     virtual HRESULT UnsetPackage()= 0;

/** @nodoc */
     virtual HRESULT IsPackage() const = 0;
        
/** @nodoc */
     virtual HRESULT DefinePackage(SEQUENCE(octet) &iUuid, CATListValCATICfgSimpleSpecification_var &iList) =0;

/** @nodoc */
     virtual HRESULT GetPackage(const SEQUENCE(octet) &iUuid, CATListValCATICfgSimpleSpecification_var &oList)=0;

/** @nodoc
 * Return the link between this SimpleSpecification and a UUID-Configurable.
 * <br><b>Legal values:</b> S_OK if the SpecLnk link exists, S_FALSE else.
 * @param iUuid
 *   UUID of the Configurable this SimpleSpecification is supposed to be linked with.
 * @param oSpecLink
 *   Link between this SimpleSpecification and the UUID-Configurable.
 */
     virtual HRESULT GetLinkForUID(const SEQUENCE(octet) &iUuid, CATICfgSpecLnk_var &oSpecLink)=0;

/** @nodoc */
     virtual HRESULT AddWhereUsed(CATILinkableObject_var &iObj) = 0;

/** @nodoc */
     virtual HRESULT GetWhereUsed(CATListOfCATILinkableObject &oList) const = 0;

/** @nodoc */
     virtual HRESULT RemoveWhereUsed(CATILinkableObject_var &oList) const = 0;

/** @nodoc */
     virtual HRESULT SetName(const CATUnicodeString & iName) = 0;

/**
 * Return the SpecAlias of this SimpleSpecification.
 * @param oAlias
 *   SpecAlias of this SimpleSpecification to be returned.
 */
     virtual HRESULT GetAlias(CATUnicodeString &oAlias) const = 0;

/**
 * Sets the Alias of this SimpleSpecification.
 * @param iAlias
 *   The SimpleSpecification Alias to set.
 */
     virtual HRESULT SetAlias(const CATUnicodeString &iAlias) = 0;

/**
 * Unsets the Alias of this SimpleSpecification.
 * @param iAlias
 *   The SimpleSpecification Alias to unset.
 */
     virtual HRESULT UnsetAlias(const CATUnicodeString &iAlias) = 0;
};

// Handler definition 
CATDeclareHandler(CATICfgSimpleSpecification, CATICfgSpecification);

#endif
