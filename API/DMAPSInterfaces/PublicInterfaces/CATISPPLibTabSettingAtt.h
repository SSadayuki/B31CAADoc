#ifndef CATISPPLibTabSettingAtt_H
#define CATISPPLibTabSettingAtt_H

// COPYRIGHT DASSAULT SYSTEMES  2003

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATListOfCATUnicodeString.h"
#include "ProcessInterfaces.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByProcessInterfaces IID IID_CATISPPLibTabSettingAtt;
#else
extern "C" const IID IID_CATISPPLibTabSettingAtt ;
#endif

class CATSettingInfo;

//------------------------------------------------------------------

/**
* Interface to handle the parameters of the Library Tab page.
* <b>Role</b>: This interface is implemented by a component which
* represents the controller of the Library Tab Page. 
* <br>This interface defines:
* <ul>
* <li>A method to set each parameter</li>
* <li>A method to get the value of each parameter</li>
* <li>A method to lock/unlock each parameter</li>
* <li>A method to retrieve the informations concerning each parameter</li>
* </ul>
*/
class ExportedByProcessInterfaces CATISPPLibTabSettingAtt: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

     /**
     * Retrieves a list of libraries that are used in a Process document.
     * <br><b>Role</b>: Retrieves the list of libraries that are used in a Process document
     * @param ioResFilter
     *	The output path of the Libraries
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetListOfLibraryFilePath(CATListOfCATUnicodeString & oPath ) = 0;

     /**
     * Sets a list of libraries that will be used in a Process document.
     * <br><b>Role</b>: Sets a list of libraries that will be used in a Process document
     * @param iPath
     *	The list of libraries that are to be set
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetListOfLibraryFilePath( const CATListOfCATUnicodeString & iPath ) = 0;

    /**
     * Retrieves the state of the parameter.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetListOfLibraryFilePathInfo( CATSettingInfo*  oInfo ) = 0;

    /** 
     * Locks or unlocks the "List of Libraries" parameter.
     * <br><b>Role</b>: Locks or unlocks the 'List of Libraries' parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetListOfLibraryFilePathLock( unsigned char  iLocked ) = 0;
};

//------------------------------------------------------------------

CATDeclareHandler( CATISPPLibTabSettingAtt, CATBaseUnknown) ;

#endif
