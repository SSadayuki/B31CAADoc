// COPYRIGHT Dassault Systemes 2000
//===================================================================
//
// CATISamAnalysisAxis.h 
// Define the CATISamAnalysisAxis interface
//
/**
  * @CAA2Level L1
  * @CAA2Usage U4 CATEAnalysisAxis
  */
//===================================================================
#ifndef CATISamAnalysisAxis_H
#define CATISamAnalysisAxis_H

#include "CATBaseUnknown.h"
#include "CATAnalysisInterface.h"  

class CATMathAxis;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamAnalysisAxis ;
#else
extern "C" const IID IID_CATISamAnalysisAxis
#endif


//------------------------------------------------------------------
/**
 * Provides methods to manipulate finite element axis system.
 * This interface provides simple methods to use axis systems defined in the analysis document.<p>
 * The implementing feature should derived of <<font color="red">AnalysisAxis</font> and it's parent is the AxisSet of the analysis model.
  * <p><b>BOA information</b>: this interface can be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page. 
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class ExportedByCATAnalysisInterface CATISamAnalysisAxis: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Retrieves the mathematical axis system.
 * <br><b>Role:</b>This method retrieves from the analysis feature a mathematical axis system.
 *   @param oMathAxis
 *      The mathematical axis in model unit
 */
    virtual HRESULT GetMathAxis(CATMathAxis& oMathAxis) const	=0;	

/**
 * Retrieves the mathematical axis system.
 * <br><b>Role:</b>This method retrieves from the analysis feature a mathematical axis system.
 *   @param oMathAxis
 *      The mathematical axis in MKS unit
 */
    virtual HRESULT GetMKSMathAxis(CATMathAxis& oMathAxis) const	=0;	


};

//------------------------------------------------------------------
CATDeclareHandler(CATISamAnalysisAxis,CATBaseUnknown);

#endif
