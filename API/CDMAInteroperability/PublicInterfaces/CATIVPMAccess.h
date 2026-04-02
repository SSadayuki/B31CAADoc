// COPYRIGHT DASSAULT SYSTEMES 1999
//===================================================================
#ifndef CATIVPMAccess_H
#define CATIVPMAccess_H

#include "CDMAdoc.h"
#include "CATBaseUnknown.h"

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */ 

class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCDMAdoc IID IID_CATIVPMAccess ;
#else
extern "C" const IID IID_CATIVPMAccess ;
#endif

//------------------------------------------------------------------

/**
 * CATIVPMAccess allows to retrieve data from a ENOVIAvpm V4 database.
 * <b>Role: </b>
 * This interface is called on typed object that corresponds to the opening method of a long field in ENOVIAvpm V4.
 *<br> 
 * So, for instance, if the <tt>$CUR_ACC_MET_DATA</tt> column of the <tt>$EXT_LF</tt> table gives <tt>DBLFAIX</tt>, 
 * then the implementation of the <tt>'DBLFAIX'</tt> object will be called to read the file.
 * <p>
 * <b>Note:</b> Only the following access methods are supported:
 *  <ul> 
 *   <li>DBLFCDM</li>
 *   <li>DBLFLCA</li>
 *   <li>DBLFAIX
 *		<br>only the following modes of DBLFAIX are supported:
 *		<ul>
 *        <li><tt>UNIX PATH</tt></li>
 *        <li><tt>BIN PATH</tt></li>
 *      </ul>
 *  </ul>
*/
class ExportedByCDMAdoc CATIVPMAccess: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**
  * Extracts a long field from the ENOVIAvpm V4 database and opens it in memory .
  *
  * <br><b>Role:</b> This methods extracts the given long field from the ENOVIAvpm V4 database and 
  * opens it in a buffer in memory.
  *<p>
  *  @param ilgLF
  *      length of the long field 
  *	@param iLongField
  *      The path to the long field (the <tt>$CUR_ACC_MET_DATA</tt> column of <tt>$EXT_LF</tt> table)
  *	@param olgBuffer
  *      length of the opened buffer
  *	@param oBuffer
  *      The opened buffer.
  *  @return  
  *  <ul>
  *   <li><tt>S_OK</tt>: execution successful</li> 
  *   <li><tt>E_FAIL</tt>: The method has failed. A @href CATError class instance is generated.</li>
  *  </ul>
  */

	virtual HRESULT ExtractLFToMemory (int & ilgLF, char* iLongField, int & olgBuffer,  char *& oBuffer) = 0 ;

	/**
	* Extracts a long field from the ENOVIAvpm V4 database to a file.
	*
	* <br><b>Role:</b> This method extracts the given long field from the ENOVIAvpm V4 database and
	* saves it a local file.
	* <br> Use @href CATIVPMAccess#ReadDone when the local file is no longer necessary.
	*   @param ilgLF
	*      length of the long field
	*	@param iLongField
	*      The path to the long field (the $CUR_ACC_MET_DATA column of <tt>$EXT_LF</tt> table)
	*	@param ioPath
	*      The path to the file.
	*	  <br>If <tt>ioPath</tt> is not <tt>NULL</tt>, the document is copied to the specified location. 
	*	  <br>Otherwise, it could be put on file anywhere.
	*   @return  
    *  <ul>
    *   <li><tt>S_OK</tt>: execution successful</li> 
    *   <li><tt>E_FAIL</tt>: The method has failed. A @href CATError class instance is generated.</li>
    *  </ul>
	*/

	virtual HRESULT ExtractLFToFile (int & ilgLF, char* iLongField,  CATUnicodeString & ioPath) = 0 ;

	/**
	* Post-treatment once the document associated to the long field has been read. 
	*
	* <br><b> Role:</b> This method enables release the file containing the long field stored previously
	*      using @href ExtractLFToFile, once the contained document has been read and is no longer necessary.
	* <br>
	* <b>Note:</b>This method must be used only after @href CATIVPMAccess#ExtractLFToFile with the returned path.
	*   @param iPath
	*      path of the file
	*   @return  
    *  <ul>
    *   <li><tt>S_OK</tt>: execution successful</li> 
    *  </ul>
	*/

	virtual HRESULT ReadDone (const CATUnicodeString & iPath) = 0 ;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------

CATDeclareHandler( CATIVPMAccess, CATBaseUnknown );

#endif
