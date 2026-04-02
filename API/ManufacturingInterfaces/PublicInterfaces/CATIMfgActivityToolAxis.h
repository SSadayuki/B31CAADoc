/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2001
//=============================================================================
//
// CATIMfgActivityToolAxis
//
#ifndef CATIMfgActivityToolAxis_H
#define CATIMfgActivityToolAxis_H

#include "CATLISTV_CATBaseUnknown.h"
#include "MfgItfEnv.h"

class CATMathDirection;
class CATMathPoint;

/**
 * @CAA2Level L1
 * @CAA2Usage U3
*/

/**
*  Interface to handle with Tool Axis of Manufacturing Activity.
*
**/

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgActivityToolAxis;
#else
extern "C" const IID IID_CATIMfgActivityToolAxis;
#endif
class ExportedByMfgItfEnv CATIMfgActivityToolAxis : public CATBaseUnknown
{
  CATDeclareInterface ;  

public:
  /**
	* Possible tool axis types.
    * @param Undefined 
	*       the tool axis is not defined
	* @param Selected
	*       the tool is selected from model
	* @param ExactComputation
	*       the tool axis is computed
	* @param ExactComputation
	*       the tool axis is approximate
	*/
  enum MfgTypeOfToolAxis {Undefined=0, Selected=1, ExactComputation=2, ApproximatedComputation=3};
  /**
	* Retrieves the tool axis information.
    * @param oToolAxis 
	*       the tool axis coordinates
	* @param oType
	*       the tool axis type
		* @param oMode
	*       the tool axis mode
	*/
  virtual HRESULT GetToolAxis(CATMathDirection& oToolAxis, 
	                          CATIMfgActivityToolAxis::MfgTypeOfToolAxis &oType, CATUnicodeString& oMode)=0;

  /**
   * Retrieves the tool axis.
   * @param oToolAxisFeature The tool axis feature.<br>
   *                         NULL_var if there is no tool axis feature on the activity.
   *                         Note that in this case, GetToolAxis can give a valid CATMathDirection anyway. 
   */
  virtual HRESULT GetToolAxisFeature (CATBaseUnknown_var& oToolAxisFeature) = 0; 

    /**
	* Sets the tool axis information.
    * @param iToolAxis 
	*       the tool axis coordinates
	* @param oMode
	*       the tool axis mode
	*/
  virtual HRESULT SetToolAxis(const CATMathDirection& iToolAxis, const CATUnicodeString& iMode)=0;
      /**
    * @nodoc
	*/
  virtual HRESULT GetStartPosition(CATMathDirection& oToolAxis, CATMathPoint& oTipPoint,
	                               CATIMfgActivityToolAxis::MfgTypeOfToolAxis &oType,
						           const int &iComputeIfNeeded=1)=0;
        /**
    * @nodoc
	*/
  virtual HRESULT GetEndPosition(CATMathDirection& oToolAxis, CATMathPoint& oTipPoint,
	                             CATIMfgActivityToolAxis::MfgTypeOfToolAxis &oType,
								 const int &iComputeIfNeeded=1)=0;
   /**
    * @nodoc
	*/
  virtual HRESULT ModifyForMPInstantiation()=0;

};

CATDeclareHandler( CATIMfgActivityToolAxis, CATBaseUnknown ) ;

#endif

