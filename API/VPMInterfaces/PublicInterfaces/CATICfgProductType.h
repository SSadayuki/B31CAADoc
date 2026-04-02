//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
/**********************************************************************/
//=============================================================================
#ifndef CATICfgProductType_h
#define CATICfgProductType_h

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"

#include"GUIDVPMInterfaces.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgProductType ;
#else
extern "C" const IID IID_CATICfgProductType ;
#endif

class CATUnicodeString;
class CATTime;
class CATIConfigurable_var;
class CATIConfigurableObject_var;
class CATListValCATIConfigurableObject_var;
class CATICfgSpecCategory_var;
class CATListValCATICfgSpecCategory_var;
class CATICfgSimpleSpecification_var;
class CATListValCATICfgSimpleSpecification_var;
class CATICfgEffectivity_var;

class ExportedByGUIDVPMInterfaces CATICfgProductType : public CATBaseUnknown {
	 CATDeclareInterface;
public:

    /**
     * Get Configurable .
     * @param oCO
     * The Configurable on Product Type. 
     */
    virtual HRESULT GetCO(CATIConfigurable_var &oCO) const  = 0 ;

    /**
    * Delete Product Type.
     *@return
     *An HRESULT
     *   <br><b>Legal values</b>:
     *   <d1>
     *     <dt>S_OK</dt>
     *     <dd>The objects is successfully deleted
     *         and the interface pointer is successfully returned</dd>
     *     <dt>E_FAIL</dt>
     *     <dd>Failed to delete the Object</dd>
     *   </d1>
    */
    virtual HRESULT  Delete() = 0 ;


    /**
    * Get ProductType name. You may also used ENOVINamedObject.
    * @param oName
    *         Name of Product Type. 
    */
    virtual HRESULT  GetName(CATUnicodeString &oName) const = 0 ;

    ////////////////////////////////////////////////////////
    //BEGIN - Functions added by Pavan 03/11/02
    /** Function added by Pavan 03/11/02
    * Get ProductType Alias. 
    * @param oName
    *         Alias of Product Type. 
    */
    virtual HRESULT  GetAlias(CATUnicodeString &oAlias) const = 0 ;

    /** Function added by Pavan 03/11/02
    * Set ProductType Alias. 
    * @param oName
    *         Alias of Product Type. 
    */
    virtual HRESULT  SetAlias(const CATUnicodeString &iAlias) = 0 ;

    /** Function added by Pavan 03/11/02
    * Unset ProductType Alias. 
    * @param oName
    *         Alias of Product Type. 
    */
    virtual HRESULT  UnsetAlias(const CATUnicodeString &iAlias) = 0 ;
    //END - Functions added by Pavan 03/11/02
    ////////////////////////////////////////////////////////

    /**
    * Get the list of 'type defining' specifications.
    * @param oList
    *         List of specifications.  
    */
    virtual HRESULT  GetSpec(CATListValCATICfgSimpleSpecification_var &oList) const = 0 ;

    /**
    * Add a 'type defining' specification.
    * @param iSpec
    *         'type defining' specification. This specification must belong to one
    *         of the 'type defining' categories.
    */
    virtual HRESULT  AddSpec(const CATICfgSimpleSpecification_var &iSpec) = 0 ;

    /**
    * Remove a 'type defining' specification.
    * @param iSpec
    *         'type defining' specification. This specification must belong to one
    *         of the 'type defining' categories.
    */
    virtual HRESULT  RemoveSpec(const CATICfgSimpleSpecification_var &iSpec) = 0 ;

    /**
    * Get the list of 'CV' that the PT relates to.
    * @param oList
    *         List of CV. 
    */
    virtual HRESULT  GetCV(CATListValCATIConfigurableObject_var &oList) const = 0 ;

    /**
    * Add this PT below iCV.
    * @param iCV
    *         ConfigurableObject. 
    */
    virtual HRESULT  AddCV(const CATIConfigurableObject_var &iCV) = 0;
	
    /**
    * RemoveCV
    * @param iCV
    *         ConfigurableObject. 
    */
    virtual HRESULT RemoveCV(const CATIConfigurableObject_var &iCV) = 0;

    /**
    * Get list of authorized specifications for an interval of date.
    * Rem: CATTime will build a CATTime containing the current day.
    * Rem: Use CATTime(0,0,0,0,0,0) to build an infinite CATTime
    * @param iDomain
    *         Domain name. 
    * @param iStartDate
    *         Start date. 
    * @param iEndDate
    *         End date. 
    * @param oList
    *         List of specifications. 
    */
    virtual HRESULT  GetListOfAuthorizedSpecs(const CATTime &iStartDate, const CATTime &iEndDate, CATListValCATICfgSimpleSpecification_var &oList) const = 0;
    virtual HRESULT  GetListOfAuthorizedSpecs(const CATUnicodeString &iDomain, const CATTime &iStartDate, const CATTime &iEndDate, CATListValCATICfgSimpleSpecification_var &oList) const = 0;

    /**
    * Define the validity of a specification from iDate to infinity.
    * @param iDomain
    *         Domain name. 
    * @param iDate
    *         Date parameter. 
    * @param iSpec
    *         specification. iSpec must belong to the CATIConfigurable of the ProductType
    */
    virtual HRESULT  SetAuthorizedSpecValidity(const CATTime &iDate, const CATICfgSimpleSpecification_var &iSpec) = 0;
    virtual HRESULT  SetAuthorizedSpecValidity(const CATUnicodeString &iDomain, const CATTime &iDate, const CATICfgSimpleSpecification_var &iSpec) = 0;

    /**
    * Define the validity of a specification from iStartDate to iEndDate.
    * @param iDomain
    *         Domain name. 
    * @param iStartDate
    *         StartDate parameter. 
    * @param iEndDate
    *         EndDate parameter. 
    * @param iSpec
    *         specification. iSpec must belong to the CATIConfigurable of the ProductType
    */
    virtual HRESULT  SetAuthorizedSpecValidity(const CATUnicodeString &iDomain, const CATTime &iStartDate, const CATTime &iEndDate, const CATICfgSimpleSpecification_var &iSpec) = 0;
    virtual HRESULT  SetAuthorizedSpecValidity(const CATTime &iStartDate, const CATTime &iEndDate, const CATICfgSimpleSpecification_var &iSpec) = 0;

    /**
    * Define the validity of a specification .
    * @param iDomain
    *         Domain name. 
    * @param iEffectivity
    *         Applicability of specification for this ProductType. 
    * @param iSpec
    *         specification. iSpec must belong to the CATIConfigurable of the ProductType
    */
    virtual HRESULT  SetAuthorizedSpecValidity(const CATUnicodeString &iDomain, const CATICfgEffectivity_var &iEffectivity, const CATICfgSimpleSpecification_var &iSpec) = 0;
    virtual HRESULT  SetAuthorizedSpecValidity(const CATICfgEffectivity_var &iEffectivity, const CATICfgSimpleSpecification_var &iSpec) = 0;

    /**
    * Get the applicability of a specification of this product type.
    * @return
    *   An HRESULT value.
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>GetSpecApplicability succeeds.</dd>
    *     <dt>E_FAIL </dt>
    *     <dd>An error occured</dd>
    *   </dl>
    * @param iDomain
    *         Domain name. 
    * @param iSpec
    *         Specification from which you want to know the applicability. 
    * @param oEff
    *         Applicability of iSpec. 
    */
    virtual HRESULT  GetSpecApplicability(const CATUnicodeString &iDomain, const CATICfgSimpleSpecification_var &iSpec, CATICfgEffectivity_var &oEff) const = 0;
    virtual HRESULT  GetSpecApplicability(const CATICfgSimpleSpecification_var &iSpec, CATICfgEffectivity_var &oEff) const = 0;

    /**
    * Retrieve the CV used to configure this Product Type.
    * @param oCV
    *         Configurable object used to configure this PT. 
    */

    virtual HRESULT GetConfigurationCV(CATIConfigurableObject_var &oCV) const = 0;

};
//-----------------------------------------------------------------
// Handler definition 
//-----------------------------------------------------------------
CATDeclareHandler(CATICfgProductType, CATBaseUnknown);

#endif

