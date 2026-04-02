// COPYRIGHT Dassault Systemes 2002
//===================================================================

#ifndef CATIMfgActivityNCCodeFileManagement_H
#define CATIMfgActivityNCCodeFileManagement_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgActivityNCCodeFileManagement;
#else
extern "C" const IID IID_CATIMfgActivityNCCodeFileManagement ;
#endif

//------------------------------------------------------------------

/**
 * Interface to manage NC Code file on Activity.
 * 
 */
class ExportedByMfgItfEnv CATIMfgActivityNCCodeFileManagement: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Associates a NC Code file to the activity.
     *   @param iFilePath
     *      The full path of the NC Code File
	 *   @return
     *      S_OK if the file is successfully associated with the activity, and E_FAIL if the file cannot be allocated
     */
     virtual HRESULT SetNCCodeFile (const CATUnicodeString &iFilePath) = 0;

    /**
     * Reads the NC Code file associated to the activity.
     *   @param oFilePath
     *      The full path of the NC Code File
	 *   @return
     *      S_OK if the file is successfully retrieved, and E_FAIL otherwise.
     * 
     */
     virtual HRESULT GetNCCodeFile (CATUnicodeString &oFilePath) = 0;
  
	 
    /**
     * Removes the NC Code file associated to the activity.
	 * The File is not deleted from the disk.
	 *   @return
     *      S_OK if the file is successfully removed, E_FAIL otherwise.
     * 
     */
     virtual HRESULT UnsetNCCodeFile () = 0;

     /**
     * Computes and returns the status of the nc code file.
     * @param oStatus
     *   indicates the status
     *   <br><b>Legal values</b>:
     *   <ul>
     *   <li> 0: NC file does not exist</li>
     *   <li> -1: NC file exist but is not found</li>
     *   <li> 1: NC exist but is not up-to-date</li>
     *   <li> 2: NC file exist and is up-to-date</li>
     *   </ul>
	 * @return
     *      HRESULT can be   S_OK,
     *                       S_FALSE if the status is unknown (oStatus =0),
     *                       E_FAIL with allocated Error definition (oStatus =0).
     */
     virtual HRESULT GetISOFileStatus (int &oStatus)=0;
	 /**
     * Associates  NC Code file list to the activity.
     *   @param iFilePath
     *      The  full path of the NC Code File
	 *   @return
     *      S_OK if the file list is successfully associated with the activity, and E_FAIL if the file cannot be allocated
     */
     virtual HRESULT SetNCCodeFileList (const CATUnicodeString &iFilePath) = 0;

    /**
     * Reads the NC Code file from the list associated to the activity.
     *   @param oFilePath
     *      The full path of the NC Code File
	 *   @param iIndex
     *      The index of the file in the list
	 *   @return
     *      S_OK if the file list is successfully retrieved, and E_FAIL otherwise.
     * 
     */
     virtual HRESULT GetNCCodeFileFromList (CATUnicodeString &oFilePath,int &index) = 0;
	 /**
     * Get the Size of  NC Code file list associated to the activity.
     *   @param oNum
     *      The size of the List
	 *   @return
     *      S_OK if the file list is successfully retrieved, and E_FAIL otherwise.
     * 
     */

	 virtual HRESULT GetFileListSize(int &oNum) = 0;
	 /**
     * Remove a file from the list of files associated to the activity.
     *   @param iIndex
     *      The index of the file in the list
	 *   @return
     *      S_OK if the file list is successfully retrieved, and E_FAIL otherwise.
     * 
     */

	 virtual HRESULT UnsetNCCodeFileList(int &iIndex) = 0;
  
	// No constructors or destructors on this pure virtual base class
    // --------------------------------------------------------------
};

//------------------------------------------------------------------
CATDeclareHandler(CATIMfgActivityNCCodeFileManagement, CATBaseUnknown) ;

#endif
