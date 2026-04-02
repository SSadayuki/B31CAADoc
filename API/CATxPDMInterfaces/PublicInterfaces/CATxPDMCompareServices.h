#ifndef CATxPDMCompareServices_H
#define CATxPDMCompareServices_H
//COPYRIGHT DASSAULT SYSTEMES 2007
/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#ifdef  _WINDOWS_SOURCE
#define ExportedByCATxPDMIsolatedLib     __declspec(dllexport)
#else
#define ExportedByCATxPDMIsolatedLib
#endif

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
*   <li><tt>E_FAIL</tt>: The method has failed.</li>
*  </ul>
*
*/
#ifdef __cplusplus
extern "C" {
#endif
  ExportedByCATxPDMIsolatedLib int CompareDSFileId(const char *iDSFileIdentifier, const char *iDSFileIdentifierOrUUID);

#ifdef __cplusplus
}   // extern "C"
#endif

//-----------------------------------------------------------------------

#endif
