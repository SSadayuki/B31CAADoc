/* -*-c++-*- */
#ifndef CATISPMProcessAccess_H
#define CATISPMProcessAccess_H

// COPYRIGHT DASSAULT SYSTEMES 2000  

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */


#include "CATBaseUnknown.h"
#include "CATSamVisuUUID.h"
#include "CATISPMProcess.h"


class CATISPMProcess_var;
class CATISPMProcessAccess_var;

extern "C" const IID IID_CATISPMProcessAccess;
/**
 * Analysis process parameters.
 * <b>Role:</b> Interface designed to manage <b>Analysis process parameters access</b>.<br>
 * <p>
 * A process is a mathematical operation applied on the values stored in a 
 * CATAnalysisCharacCollector in order to create a new one.
 * This interface manages the numerical parameters of the process.<br>
 * For example, for a linear process will return 2 real parameters (A,B) to compute y = Ax+B.
 * @see CATISPMProcess , CATAnalysisCharacCollector
*/ 

class ExportedByCATSamVisuUUID CATISPMProcessAccess : public CATBaseUnknown
{
	CATDeclareInterface;
	
	public :
/**
 * Retrieves the parameters data associated to Process_access set as integers.
 * @param oTabInt 
 * Array of integers
 * @param oNbInt 
 * Size of the array of integers
 */	
	virtual HRESULT GetIntParameter(int* &oTabInt, int &oNbInt) = 0;

/**
 * Initialize the parameters data associated to Process_access  set as integers.
 * @param iTabInt 
 * Array of integers
 * @param iNbInt 
 * Size of the array of integers
 */	

	virtual HRESULT SetIntParameter(const int* iTabInt, int iNbInt) = 0;

/**
 * Retrieves the parameters data associated to Process_access set as floats.
 * @param oTabFloat 
 * Array of Float
 * @param oNbFloat 
 * Size of the array of Floats
 */	
	virtual HRESULT GetFloatParameter(float* &oTabFloat, int &oNbFloat) = 0;

/**
 * Initialize the parameters data associated to Process_access set as floats.
 * @param iTabFloat 
 * Array of Float
 * @param iNbFloat 
 * Size of the array of Floats
 */	
	virtual HRESULT SetFloatParameter(const float* iTabFloat, int iNbFloat) = 0;

/**
 * Retrieves the parameters data associated to Process_access set as chars.
 * @param oTabChar 
 * Array of CATUnicodeString
 * @param oNbChar 
 * Size of the array of CATUnicodeString
 */	
	virtual HRESULT GetCharParameter(CATUnicodeString* &oTabChar, int &oNbChar) = 0;

/**
 * Initialize the parameters data associated to Process_access set as chars.
 * @param iTabChar 
 * Array of CATUnicodeString
 * @param iNbChar 
 * Size of the array of CATUnicodeString
 */	
	virtual HRESULT SetCharParameter(const CATUnicodeString* iTabChar, int iNbChar) = 0;

/**
 * Retrieves the parameters names associated to Process_access.
 * @param oTabName 
 * Array of CATUnicodeString
 * @param oNbName 
 * Size of the array of CATUnicodeString
 */	
	virtual HRESULT GetNameParameter(CATUnicodeString* &oTabName, int &oNbName) = 0;

/**
 * Defines the parameters names associated to Process_access.
 * @param iTabName 
 * Array of CATUnicodeString
 * @param iNbName 
 * Size of the array of CATUnicodeString
 */	

	virtual HRESULT SetNameParameter(const CATUnicodeString* iTabName, int iNbName) = 0;

/**
 * Returns the process name.
 * @param oName 
 * CATUnicodeString as name.
 */	
	virtual HRESULT GetProcessName(CATString &oName) = 0;

/**
 * Defines the process name.
 * @param iName 
 * CATUnicodeString as name.
 */	
	virtual HRESULT SetProcessName(const CATString &iName) = 0;

/**
 * Returns the associated process.
 * @param oProcess 
 * Process associated.
 */	
  virtual HRESULT GetProcess(CATISPMProcess_var &oProcess) =0;

/**
 * Returns a clone process version (copy version).
 */	
	virtual CATISPMProcessAccess_var GetClone() = 0;

/**
 * Set the parameters as identicial to another process.
 * @param iOriginal 
 * Process for comparison
 */	
	virtual HRESULT SetIdenticalWith(CATISPMProcessAccess_var &iOriginal) = 0;
};
	
CATDeclareHandler(CATISPMProcessAccess, CATBaseUnknown);
	
#endif
