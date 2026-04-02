#ifndef CATIMfgProgramISOFile_H
#define CATIMfgProgramISOFile_H

//===================================================================
// COPYRIGHT Dassault Systemes 2004
//===================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgProgramISOFile;
#else
extern "C" const IID IID_CATIMfgProgramISOFile ;
#endif

//------------------------------------------------------------------

/**
 * Interface implemented on the Manufacturing Program.
 * The rule of this interface is to manage access to ISO file for simulation.
 */
class ExportedByMfgItfEnv CATIMfgProgramISOFile: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

	/**
     * Initialization of working session (to call at the beginning of the use of this interface).<br>
     */
	  virtual HRESULT InitSession () = 0;

    /**
     * Closing of working session (to call at the end of the use of this interface).<br>
     */
	  virtual HRESULT CloseSession () = 0;

    /**
     * Retrieves the value of start line and end line in the ISO file for a Manufacturing Operation.<br>
	 *   @param iMO
	 *      The Manufacturing Operation
	 *   @param oStartLine
	 *      The start line in the ISO file
	 *   @param oEndLine
	 *      The end line in the ISO file
     */
	  virtual HRESULT GetIndexforMO (const CATBaseUnknown_var& iMO,
		                             int&                      oStartLine,
									 int&                      oEndLine) = 0;

    /**
     * Retrieves the total number of ISO records.<br>
	 *   @param oNumberOfISORecords
	 *      The total number of ISO records
	 *   @param FileId
	 *      The id of the file in the ISO File List
     */
	  virtual HRESULT GetNumberOfISORecords (int& oNumberOfISORecords,int iFileId=0) = 0;

    /**
     * Retrieves an ISO record in the ISO file.<br>
	 *   @param iLine
	 *      The number of the line in the ISO file
	 *   @param oISORecord
	 *      The value of the ISO record
	 *   @param FileId
	 *      The id of the file in the ISO File List
     */
	  virtual HRESULT GetISORecord (int               iLine,
		                            CATUnicodeString& oISORecord,int iFileId=0) = 0;

	/**
     * Sets an ISO record from the ISO file.<br>
	 *   @param iMO
	 *      The machining operation that covers the ISO block
	 *   @param iStartLine
	 *      The number of the start line in the ISO file
	 *   @param iEndLine
	 *      The number of the end line in the ISO file
	 */     
	 virtual HRESULT SetIndexforMO (const CATBaseUnknown_var& iMO,
	                                int                       iStartLine,
	  							    int                       iEndLine) = 0;
};

CATDeclareHandler( CATIMfgProgramISOFile, CATBaseUnknown) ;
//------------------------------------------------------------------

#endif
