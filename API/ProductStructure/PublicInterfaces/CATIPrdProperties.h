/* -*-c++-*- */
#ifndef CATIPrdProperties_h
#define CATIPrdProperties_h
//-----------------------------------------------------------------------------
// COPYRIGHT DASSAULT SYSTEMES 1999 
//-----------------------------------------------------------------------------
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "AS0STARTUP.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CatProductSource.h"
#include "booleanDef.h"

class CATUnicodeString;
class CATIParmPublisher;

extern ExportedByAS0STARTUP IID IID_CATIPrdProperties ;

/**	
* Interface to access product properties.
*/

class ExportedByAS0STARTUP CATIPrdProperties : public CATBaseUnknown
{
	CATDeclareInterface;

public:
	
	/** @nodoc */
	virtual HRESULT GetPartNumber( CATUnicodeString & oRefName ) = 0;
	/** @nodoc */
	virtual HRESULT SetPartNumber( const CATUnicodeString & iRefName ) = 0;
	/** @nodoc */
	virtual HRESULT CheckPartNumber( const CATUnicodeString & iOtherToCheck ) = 0;

	/** Retrieves the product reference's revision.
	  * @param oRefString
	  *     Returned product reference's revision.
	  */
	virtual HRESULT GetRevision( CATUnicodeString & oRefString ) = 0;
	/** @nodoc */
	virtual HRESULT SetRevision( const CATUnicodeString & iRefString ) = 0;

	/** Retrieves the product reference's source.
	  * @param oRefSource
	  *     Returned product reference's source.
	  */
	virtual HRESULT GetSource( CatProductSource & oRefSource ) = 0;
	/** @nodoc */
	virtual HRESULT SetSource( const CatProductSource iRefSource ) = 0;
	
	/** Retrieves the product reference's definition.
	  * @param oRefString
	  *     Returned product reference's definition.
	  */
	virtual HRESULT GetDefinition( CATUnicodeString & oRefString ) = 0;
	/** @nodoc */
	virtual HRESULT SetDefinition( const CATUnicodeString & iRefString ) = 0;
	
	/** Retrieves the product reference's nomenclature.
	  * @param oRefString
	  *     Returned product reference's nomenclature.
	  */
	virtual HRESULT GetNomenclature( CATUnicodeString & oRefString ) = 0;
	/** @nodoc */
	virtual HRESULT SetNomenclature( const CATUnicodeString & iRefString ) = 0;
	
	/** Retrieves the product reference's description.
	  * @param oRefString
	  *     Returned product reference's description.
	  */
	virtual HRESULT GetDescriptionRef( CATUnicodeString & oRefString ) = 0;
	/** @nodoc */
	virtual HRESULT SetDescriptionRef( const CATUnicodeString & iRefString ) = 0;

	/** @nodoc */
	virtual HRESULT GetInstanceName( CATUnicodeString & oInstName ) = 0;
	/** @nodoc */
	virtual HRESULT SetInstanceName( const CATUnicodeString & iInstName ) = 0;
	/** @nodoc */
	virtual HRESULT CheckInstanceName( const CATUnicodeString & iOtherName ) = 0;
	
	/** Retrieves the product instance's description.
	  * @param oInstString
	  *     Returned product instance's description.
	  */
	virtual HRESULT GetDescriptionInst( CATUnicodeString & oInstString ) = 0;
	/** @nodoc */
	virtual HRESULT SetDescriptionInst( const CATUnicodeString & iInstString ) = 0;
	
	/** @nodoc */
	virtual HRESULT GetUserProperties( CATIParmPublisher *& oCollection,
	                                   boolean iCreationAllowed ) = 0;

	/** @nodoc */
	virtual HRESULT FilterPropertiesByName( const CATListOfCATUnicodeString & iNLSNames,
		                                      CATListValCATBaseUnknown_var & oProperties,
	                                        boolean iParamsOnly ) = 0;

	/** Retrieves the product ActivateBOM status
	  * @param oActivateBOM
	  *     Returned 1 if Product is Activated in BOM.
	  *     Returned 0 if Product is not Activated in BOM.
	  */
	virtual HRESULT GetActivateBOM( CATBoolean & oActivateBOM ) = 0;
	/** @nodoc */
	virtual HRESULT SetActivateBOM( const CATBoolean & iActivateBOM ) = 0;

};

CATDeclareHandler( CATIPrdProperties, CATBaseUnknown );

#endif 
