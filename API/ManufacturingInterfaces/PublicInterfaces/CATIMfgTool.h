#ifndef CATIMfgTool_H
#define CATIMfgTool_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000
//=============================================================================
/**
* @CAA2Level L1
* @CAA2Usage U3
*/

// module
#include "MfgItfEnv.h"

// inheritance
#include "CATIMfgResource.h"

// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgTool ;
#else
extern "C" const IID IID_CATIMfgTool ;
#endif

/**   
 * Interface dedicated to tool object management.
 * <b>Role</b>: This interface offers services to manage the tools parameters.<br>
 * Common attributes are declared in CATMfgToolConstant.<br>
 * 
 */
class ExportedByMfgItfEnv CATIMfgTool : public CATIMfgResource
{
  CATDeclareInterface ;  

  public:

/**
 * Computes tool number for the tool object. 
 * @param oNumber
 *     The computed tool number
 */
	  virtual HRESULT ComputeToolNumber(int &oNumber)=0;

/**
 * Retrieves the tool APT parameters.
 * @param oD
 *     The cutter diameter at tool tip point 
 * @param oR
 *     The cutter radius 
 * @param oE
 *     The horizontal distance between radius center point and center of cutter 
 * @param oF
 *     The vertical distance between radius center point and center of cutter
 * @param oA
 *     The angle of cutter at tip point 
 * @param oB
 *     The angle of cutter
 * @param oh
 *     The cutter height
 */
	  virtual HRESULT GetAPTParameters (double &oD, double &oR, double &oE,
										double &oF, double &oA, double &oB,
										double &oH)=0;

/**
 * @nodoc
 * This method should not have been exposed
 */
		virtual CATBoolean GetEditableStatus (const CATBaseUnknown_var &iActivity)=0;
/**
 * @nodoc
 */
  	virtual HRESULT   GetAuthorizedInsertList (CATListOfCATUnicodeString &oInsertTypeList) =0;
};

CATDeclareHandler(CATIMfgTool, CATIMfgResource) ;

#endif
