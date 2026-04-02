/* -*-c++-*- */
#ifndef CATxPDMIdentificationServices_H
#define CATxPDMIdentificationServices_H
//COPYRIGHT DASSAULT SYSTEMES 2005
/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */


#include "CATBaseUnknown.h" 
#include "ExportedByCATxPDMInterfaces.h"

class CATIxPDMItem_var;
class CATUuid;

/**
  * Class for PDM integration through DS File Identifier.
  * <b>Role:</b> Provide APIs to read and compare DS File Identifiers.
  * <p>DS File Identifier can be used only through these APIs. On same file, DS File identifier will be different at each call.</p>
  * <p>All the methods do not load in session the files associated with the items. </p>
  * <p>Before using these methods in a batch, a @href CATSession must be created even if no document will be loaded. </p>
  * <p>All the static methods of the class pre-requisites the PX1 license. </p>
  * @see CATIxPDMItem CATxPDMFileServices
  */
class ExportedByCATxPDMInterfaces CATxPDMIdentificationServices
{
 public:
    /**
    * Retrieves a DS File Identifier from an item.
    * <br><b>Role:</b>This method reads one DS File Identifier from an item.
    * Item could be built from a file path through @href CATxPDMFileServices#GetItemFromFile 
    * or from a document in session through @href CATxPDMSessionServices#GetItemFromDocument.
    * 
    * @param iPDMItem
    *   Item to identify
    * @param oDSFileIdentifier
    *   The returned identifier. Its size is less or equal to 48 octets.
    *   Call new to free this string.
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: method successful, <tt>oDSFileIdentifier</tt> is correctly returned. </li> 
    *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *      <li><tt>InputERR_1002:</tt></li>
    *       Input is NULL.
    *      <li><tt>InputERR_1011:</tt></li>
    *       Item does not represent a V5 file (it is an xls file for example).
    *  </ul>
    *  </ul>
    *
    */
    static HRESULT ReadDSFileIdentifier(const CATIxPDMItem_var & iPDMItem, char** oDSFileIdentifier);

    /**
    * Compare two DS File Identifiers.
    * <br><b>Role:</b>Compare two DS File Identifiers to check if files are compatible.
    * <p>Notice that this API is not able to check file names which must be also identical
    * to insure files compatibility (see @href CATxPDMFileServices#CheckItemCompatibility )
    * </p>
    *
    * @param iDSFileIdentifier1
    *   First identifier to compare.
    * @param iDSFileIdentifier2
    *   Second identifier to compare.
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: the two identifiers are identical </li> 
    *   <li><tt>S_FALSE</tt>: the two identifiers are different </li> 
    *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *      <li><tt>InputERR_1002:</tt></li>
    *       One input is NULL.
    *      <li><tt>InputERR_1010:</tt></li>
    *       One string is not a DS File Identifier.
    *  </ul>
    *  </ul>
    *
    */
    static HRESULT CompareDSFileIdentifier(const char* iDSFileIdentifier1,const char* iDSFileIdentifier2);

    /**
    * Compare a DS File Identifier with a Uuid.
    * <br><b>Role:</b>Compare a DS File Identifier with a Uuid to check if files are compatible.
    * <p>Notice that there is no official API to read a UUID on a document.
    * </p>
    *
    * @param iDSFileIdentifier
    *   First identifier to compare.
    * @param iFileUUID
    *   Second identifier to compare.
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: the two identifiers are identical </li> 
    *   <li><tt>S_FALSE</tt>: the two identifiers are different </li> 
    *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *      <li><tt>InputERR_1002:</tt></li>
    *       One input is NULL.
    *      <li><tt>InputERR_1010:</tt></li>
    *       One string is not a DS File Identifier.
    *  </ul>
    *  </ul>
    *
    */
    static HRESULT CompareDSFileIdentifier(const char* iDSFileIdentifier,const CATUuid* iFileUUID);

};
#endif
