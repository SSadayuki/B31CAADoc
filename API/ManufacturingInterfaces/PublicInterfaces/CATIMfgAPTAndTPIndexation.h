/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2006
//=============================================================================
#ifndef CATIMfgAPTAndTPIndexation_H
#define CATIMfgAPTAndTPIndexation_H

/**
 * @CAA2Level L0
 * @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgAPTAndTPIndexation;
#else
extern "C" const IID IID_CATIMfgAPTAndTPIndexation;
#endif

/**   
 * Interface implemented on the ManufacturingProgram.
 * <b>Role</b>: This interface offers services to retrieve on one side, the start and end line in the APT file for a Machining Operation
 and on the other side, an index in the tool path for each line in the APT file <br>
 */

class ExportedByMfgItfEnv CATIMfgAPTAndTPIndexation : public CATBaseUnknown
{
  CATDeclareInterface ;  

public:

  /**
    * Clear data from a previous index computation.
    */
  virtual HRESULT ClearData ()=0;

  /**
    * To call before LaunchCATMfg.
    */
  virtual HRESULT InitForLaunchCATMfg ()=0;

  /**
    * Retrieves start and end line in the APT file for a current Machining Operation.
	* @param iMO
    *   the current Machining Operation
    * @param oStartLine
    *   the start line in the APT file associated to the Manufacturing Program
    * @param oEndLine
    *   the end line in the APT file associated to the Manufacturing Program
    */
  virtual HRESULT GetAPTIndexForCurrentOperation (const CATBaseUnknown_var& iMO, int &oStartLine, int &oEndLine)=0;

  /**
    * Sets the TP index associated to a line of the Apt file.
	* @param iAptRecord
    *   the apt line number
    * @param iTPIndex
    *   the TP index associated to the current apt line number
    */
  virtual HRESULT SetTPIndexForAPTRecord (int iAptRecord, int iTPIndex)=0;

 /**
    * Retrieves the TP index associated to a line of the Apt file.
	* @param iAptRecord
    *   the apt line number
    * @param oTPIndex
    *   the TP index associated to the current apt line number
    */
  virtual HRESULT GetTPIndexForAPTRecord (int iAptRecord, int &oTPIndex)=0;


};

CATDeclareHandler(CATIMfgAPTAndTPIndexation, CATBaseUnknown) ;
#endif

