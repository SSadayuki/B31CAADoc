// -*-C++-*-

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
#ifndef CATIAVPMProductSpecification2_h
#define CATIAVPMProductSpecification2_h

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


// =================================================================
// Includes
// =================================================================
// System
#include "GUIDVPMInterfaces.h"
#include "CATIAVPMObject.h"
#include "CATCORBABoolean.h"

#include "CATICfgFilter.h"

// =================================================================
// Forward classes declaration
// =================================================================
class CATIAVPMProductRootClass;
//class CATICfgSimpleSpecification;
class CATIConfigurableObject;
class CATUnicodeString;

//class CATListValCATBaseUnknown_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIAVPMProductSpecification2;
#else
extern "C" const IID IID_CATIAVPMProductSpecification2;
#endif

//------------------------------------------------------------------
/**
 * Interface to retrieve ProductSpecs that qualify an item instance.
 * <b>Role</b>: This interface exposes the some of the methods of ProductSpecification
 * <ul>
 *   <li> Helps in retrieving the Product, Description of the ProductSpecification</li>
 *   <li>This interface is implemented on the ProductSpecification entity</li>
 * </ul>
 */

class ExportedByGUIDVPMInterfaces CATIAVPMProductSpecification2 : public CATBaseUnknown
{
    CATDeclareInterface;

    public:
    //
    // =======================================================
    // Method(s) 
    // =======================================================
    /**
     * Retrieve the Product under which this ProductSpecification is created.
     * @param oProductRootClass
     *   Parent Product is retrieved.
     *   @return S_OK in case of success,
     *           E_FAIL in case of error.
    */
    virtual HRESULT   get_ProductRootClass(CATIAVPMProductRootClass *& oProductRootClass)=0;

    /**
     * Retrieve the Confdiguration (ConfigurableObject) of the Product under which the ProductSpec is created.
     * @param  oConfigurableObject
     *   The retrieved ConfigurableObject of the Parent.
     *   @return S_OK in case of success,
     *           E_FAIL in case of error.
    */
    virtual HRESULT   get_ConfigurableObject(CATIConfigurableObject *& ConfigurableObject)=0;

    /**
     * Retrieve the Description saved under this ProductSpecification.
     * @param oDescription
     *   The Description of this ProductSpecification.
     *   @return S_OK in case of success,
     *           E_FAIL in case of error.
    */
    virtual HRESULT   get_Description(CATUnicodeString & oDescription)=0;
    /**
     * Set the Description for this ProductSpecification.
     * @param iDescription
     *   The Description to be set.
     *   @return S_OK in case of success,
     *           E_FAIL in case of error.
    */
    virtual HRESULT   put_Description(CATUnicodeString & iDescription)=0;


};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
CATDeclareHandler(CATIAVPMProductSpecification2, CATBaseUnknown);

#endif

