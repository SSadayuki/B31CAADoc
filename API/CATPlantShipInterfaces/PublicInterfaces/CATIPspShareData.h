#ifndef CATIPspShareData_H
#define CATIPspShareData_H

//	COPYRIGHT DASSAULT SYSTEMES 2000
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

// System
#include "IUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfCATBaseUnknown.h"

extern "C" const IID IID_CATIPspShareData ;

/**
 * Interface to access share data in the catalog.
 * <b>Role</b>: To access Plant Ship share data from the catalog.
 */

class CATIPspShareData : public IUnknown
{
  public:  

  /**
  * @nodoc
  * Create a share data in the catalog.
  * @param iApplication
  *   The application.
  * @param iResourceName
  *   Resource name for Catalog
  * @param iShareDataID
  *   Share Data Identification.
  * @param iShareData
  *   Share Data to be created in the catalog.
  * @param iFileName
  *   File name of share data. Default file name is iShareDataID.
  * @param iUpdateCatalog
  *   Option to update and save the catalog. Default is to save catalog.
  *   =0 : Don't save catalog
  *   =1 : Save updated catalog
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT Create (const char *iApplication,
    const CATUnicodeString &iResourceName,
    const CATUnicodeString &iShareDataID,
    IUnknown *iShareData,
    const CATUnicodeString &iFileName = "",
    const int iUpdateCatalog = 1 ) = 0;

  /**
  * @nodoc
  * Add a share data in the catalog.
  * @param iResourceName
  *   Resource name for Catalog
  * @param iShareDataID
  *   Share Data Identification.
  * @param iShareData
  *   Share Data to be added to the catalog.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT Add (const CATUnicodeString &iResourceName,
    const CATUnicodeString &iShareDataID,
    IUnknown *iShareData) = 0;

  /**
  * @nodoc
  * Get a share data from the catalog.
  * @param iResourceName
  *   Resource name for Catalog
  * @param iShareDataID
  *   Share Data Identification.
  * @param oShareData [out, IUnknown#Release]
  *   Share Data instanciated from the catalog.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT Get (const CATUnicodeString &iResourceName,
    const CATUnicodeString &iShareDataID,
    IUnknown **oShareData) = 0;
  
  /**
  * @nodoc
  * Rename a share data in the catalog.
  * @param iResourceName
  *   Resource name for Catalog
  * @param iShareDataID
  *   Share Data Identification.
  * @param iNewShareDataID
  *   New Share Data Identification.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT Rename (const CATUnicodeString &iResourceName,
    const CATUnicodeString &iShareDataID,
    const CATUnicodeString &iNewShareDataID) = 0;

  /**
  * Retrieve a list of share data ID in the catalog.
  * @param iResourceName
  *   Resource name for Catalog
  * @param iShareDataType
  *   Share Data Type filter.
  *   If null, no filtering will be applied
  * @param oListOfShareDataID
  *   List of Share Data ID
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT List (const CATUnicodeString &iResourceName,
    const CATUnicodeString &iShareDataType,
    CATListValCATUnicodeString **oListOfShareDataID) = 0;

  /**
  * Retrieve a filtered list of share data ID in the catalog based
  *   on an input query string.
  * @param iResourceName
  *   Resource name for Catalog
  * @param iQueryExpression
  *   Query string used to filter the share data ID.
  *   It has a knowledgeware syntax.
  *   If null, no filtering will be applied
  * @param oListOfShareDataID
  *   List of Share Data ID
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT ListQuery (const CATUnicodeString &iResourceName,
    const CATUnicodeString &iQueryExpression,
    CATListValCATUnicodeString **oListOfShareDataID) = 0;

  /**
  * Retrieve a list of attribute values for the share data.
  * @param iCatalogResourceName
  *   Resource name for Catalog
  * @param iAttrFilterResourceName
  *   Resource name for attribute filtering text file
  * @param iShareDataID
  *   Share Data Identification.
  * @param oListOfAttrNames
  *   List of attribute names
  * @param oListOfAttrValues
  *   List of attribute values
  * @param oListOfAttrTypes
  *   List of attribute types
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT ListAttributes(
    const CATUnicodeString &iCatalogResourceName,
    const CATUnicodeString &iAttrFilterResourceName,
    const CATUnicodeString &iShareDataID,
    CATListValCATUnicodeString **oListOfAttrNames,
    CATListValCATUnicodeString **oListOfAttrValues,
    CATLISTP(CATBaseUnknown) **oListOfAttrTypes ) = 0;
};
#endif
