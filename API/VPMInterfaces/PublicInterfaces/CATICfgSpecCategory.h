//================================================================
//COPYRIGHT DASSAULT SYSTEMES 2001 
//================================================================

/**
 *   @CAA2Level L1
 *   @CAA2Usage U3
 */

#ifndef CATICfgSpecCategory_h
#define CATICfgSpecCategory_h

#include "CATIAV5Level.h"
#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"
#include "sequence_octet.h"
#include "sequence_CORBAAny.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgSpecCategory ;
#else
extern "C" const IID IID_CATICfgSpecCategory ;
#endif

class CATUnicodeString ;
class CATICfgSimpleSpecification_var;
class CATListValCATICfgSimpleSpecification_var;
class CATICfgCatLnk_var;

//=================================================================

/**
 * This class is used to:
 *        - Create CATICfgSimpleSpecification
 *        - Manage the content and characteristics of a category
 */
class ExportedByGUIDVPMInterfaces CATICfgSpecCategory : public CATBaseUnknown {

     CATDeclareInterface;

public:
/**
 * Get the name of the category
 *  @param oName
 *    Name of the category.
 */
     virtual HRESULT  GetName(CATUnicodeString &oName) const = 0 ;

/**
 * Get the Description of the category
 *  @param oDescription
 *    Description of the category.
 */
     virtual HRESULT  GetDescription(CATUnicodeString &oDescription) const = 0 ;
        
/** @nodoc */
     virtual HRESULT SetMutuallyExclusive() = 0;  

/** @nodoc */
     virtual HRESULT UnsetMutuallyExclusive() = 0;  

/** @nodoc */
     virtual HRESULT GetMutuallyExclusive() const = 0 ;  
        
/** @nodoc */
     virtual HRESULT GetOwnedSpec(CATListValCATICfgSimpleSpecification_var &oList) const=0;

/** @nodoc */
     virtual HRESULT Attach(SEQUENCE(octet)& iConfigurableUID,int iIsMandatory=0)=0;

/** @nodoc */
     virtual HRESULT Detach(SEQUENCE(octet)& iConfigurableUID) = 0;

// Returns S_OK if cat is mandatory
// Returns S_FALSE if not
// Returns E_FAIL if cat is not attached     
/** @nodoc */
     virtual HRESULT IsMandatoryForUID(const SEQUENCE(octet)& iConfigurableUID) = 0;

/** @nodoc */
     virtual HRESULT UnsetMandatory(SEQUENCE(octet)& iConfigurableUID) = 0;

/** @nodoc */
     virtual HRESULT SetMandatory(SEQUENCE(octet)& iConfigurableUID) = 0;

/** @nodoc */
     virtual HRESULT GetUIDList(SEQUENCE(CORBAAny)& Ret) const = 0; 
     
     /**
      * Create Specification
      * @param iId
      *    Name of the specification to create
      * @param oCfgSimpleSpec
      *    The specification
      */
     virtual HRESULT CreateSpecification( const CATUnicodeString& iId,CATICfgSimpleSpecification_var & oCfgSimpleSpec)=0;       

/** @nodoc */
     virtual HRESULT RemoveSpecification( CATICfgSimpleSpecification_var &iSpec)  =0;          

/** @nodoc */
     virtual HRESULT SetDescription(const CATUnicodeString &iDescription) =0;

/** @nodoc */
     virtual HRESULT GetLinkForUID(const SEQUENCE(octet) &iUuid, CATICfgCatLnk_var &oCatLink) =0;

/** @nodoc */
     virtual HRESULT Delete() = 0;  
    
/** @nodoc */
     virtual HRESULT GetCatType(CATUnicodeString &oCatType) const = 0;
    
/** @nodoc */
     virtual HRESULT SetCatType(const CATUnicodeString &iCatType) = 0;

     
#if defined(CATIAV5R10)
/** @nodoc */
     virtual HRESULT CreateSpecification(const CATUnicodeString& iLateType, const CATUnicodeString& iId,CATICfgSimpleSpecification_var & oCfgSimpleSpec)=0;       
#endif

/** @nodoc */ // 6-27-03 IR 398332 added by TWL to enable config customization
     virtual HRESULT CreateSpecification(const CATUnicodeString& iDomainName, const CATUnicodeString& iLateType, const CATUnicodeString& iId,CATICfgSimpleSpecification_var & oCfgSimpleSpec)=0;       

};

// Handler definition
CATDeclareHandler(CATICfgSpecCategory, CATBaseUnknown);

#endif
