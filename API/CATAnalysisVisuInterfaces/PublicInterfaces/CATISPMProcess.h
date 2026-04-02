/* -*-c++-*- */
#ifndef CATISPMProcess_H
#define CATISPMProcess_H

// COPYRIGHT DASSAULT SYSTEMES 2000  

/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */


#include "CATSamVisuUUID.h"
#include "CATBaseUnknown.h"
#include "CATAnalysisCharacCollector.h"
#include "CATISPMProcessAccess.h"

class CATISPMProcess_var;
class CATISPMProcessAccess_var;

extern "C" const IID IID_CATISPMProcess;
/**
 * Analysis process general informations.
 * <b>Role:</b> Interface designed to manage <b>Analysis process behaviour</b>.<br>
 * <p>
 * A process is a mathematical operation applied on the values stored in a 
 * CATAnalysisCharacCollector (or several) in order to create a new one (or several).
 * This interface manages all general methods related to the process management. The 
 * parameters of the processes are managed by CATISPMProcessAccess.
 * @see CATISPMProcessAccess , CATAnalysisCharacCollector
*/ 


class ExportedByCATSamVisuUUID CATISPMProcess : public CATBaseUnknown
	{
	CATDeclareInterface;
	
	public :
/**
 * Returns the process name.
 */	
	virtual CATUnicodeString GetProcessName() = 0;
/**
 * Initialize the CATISPMProcess_access associated to the process. 
 * @param iProcessAccess 
 * CATISPMProcessAccess
 */	
  virtual void SetProcessDataAccess(CATISPMProcessAccess_var &iProcessAccess) = 0;

/**
 * Give the Input mathematical types that are supported by the process.
 * @param oNbType 
 * Number of supported mathematical types
 * @param oMathType 
 * List of supported mathematical types
 * @see CATSamMathType
 */	
  virtual HRESULT GetAvailableInputMathType(int &oNbType, CATSamMathType *&oMathType) = 0;
/**
 * Give the Input Value types that are supported by the process.
 * @param oNbType 
 * Number of supported Value types
 * @param oValueType 
 * List of supported Value types
 */	
  virtual HRESULT GetAvailableInputValueType(int &oNbType, CATSamValue *&oValueType) = 0;
/**
 * Give the Input mathematical dimension types that are supported by the process.
 * @param oNbType 
 * Number of supported Value types
 * @param oMathDimension 
 * List of supported mathematical dimension
 */
  virtual HRESULT GetAvailableInputMathDimension(int &oNbType, int *&oMathDimension) = 0;
/**
 * Give the Input reference frame types that are supported by the process.
 * @param oNbType 
 * Number of supported reference frame
 * @param oRefFrame 
 * List of supported reference frame
 * @see CATSamRefFrame
 */
  virtual HRESULT GetAvailableInputRefFrame(int &oNbType, CATSamRefFrame *&oRefFrame) = 0;
 /**
 * Give the Input entity types that are supported by the process.
 * @param oNbType 
 * Number of supported entity type
 * @param oEntityType 
 * List of supported entity type
 * @see CATSamValue
 */
  virtual HRESULT GetAvailableInputEntityType(int &oNbType, CATSamValue *&oEntityType) = 0;

/**
 * Test if the CATSamCharacVersion can be supported by the process.
 * @param iVersion 
 * Characteristic version to test
 * @return
 *   Status of the test.
 * <br><b>Legal values</b>: S_OK if iVersion is supported,E_FAIL otherwise.
 * @see CATSamCharacVersion
 */
  virtual HRESULT IsInputCharacTypeAvailable(const CATSamCharacVersion &iVersion) = 0;

/**
 * Give the output characteristic version that will be created according to the input one.
 * @param iVersion 
 * Characteristic version as input of the process.
 * @param oVersion 
 * Characteristic version that will be created by the process.
 * @return
 *   Status of the test.
 * <br><b>Legal values</b>: S_OK if iVersion is supported,E_FAIL otherwise.
 * @see CATSamCharacVersion
 */
  virtual HRESULT GetOutputCharacType(CATSamCharacVersion &oVersion, const CATSamCharacVersion &iVersion) = 0;

/**
 * Create the output characteristic(s) according to the input one.
 * This is the execution of the process.
 * @param oCharac
 *  Array of created CATAnalysisCharacCollector
 * @param oNbCharac
 * Size of this array.
 * @param iEntityFlag
 * Entity flag that inform if values have to be computed of the support.
 * @param iCharac
 * Input list of CATAnalysisCharacCollector to process.
 * @param iNbCharac
 * Size of this input array.
 * @return
 *   Status of the process execution .
 * <br><b>Legal values</b>: S_OK if the execution is OK ,E_FAIL otherwise.
 */
  virtual HRESULT GetOutputCharac(CATAnalysisCharacCollector **&oCharac, int &oNbCharac,
    const char* iEntityFlag, const CATAnalysisCharacCollector * const * iCharac, int iNbCharac) = 0;
/**
 * Give the entity list on which values can be computed by the process according to an input list.
 * @param iContext
 * Context for the entities definition it is the Explicit set or entity.
 * @param iEntityFlag
 * Inut list of flags to set up if values are defined on the entities.
 * @param iEntityType
 * Entity type of the entities. 
 * @param oEntityFlag
 * Output list of flags to set up if values are defined on the entities.
 * @param oEntityType
 * Entity type of the entities that will be returned.
 * @return
 *   Status of the process execution .
 * <br><b>Legal values</b>: S_OK if the execution is OK ,E_FAIL otherwise.
 */
  virtual HRESULT GetEntityList(const CATAnalysisExplicitParent &iContext, const char* iEntityFlag, CATSamValue iEntityType,
    char *& oEntityFlag, CATSamValue &oEntityType) = 0; 
/**
 * Inform is the data returned by the process can be processed by linear interpolation
 * This information is usefull for dynamic animation.
 * @param oresult
 * Entity type of the entities that will be returned.
 * <br><b>Legal values</b>: CATTrue if the execution is linear ,CATFalse otherwise.
 */
  virtual HRESULT IsLinear(CATBoolean &oresult) =0;
  };
	
CATDeclareHandler(CATISPMProcess, CATBaseUnknown);
	
#endif
	
