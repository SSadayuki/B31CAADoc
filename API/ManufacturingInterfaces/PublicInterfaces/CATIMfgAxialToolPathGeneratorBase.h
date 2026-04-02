// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
#ifndef _CATIMfgAxialToolPathGeneratorBase_H
#define _CATIMfgAxialToolPathGeneratorBase_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "MfgItfEnv.h"
#include "CATBoolean.h"
#include "CATIMfgToolPathComponents.h"

class CATMathVector;
class CATIContainer_var;
class CATMathSetOfPoints;
class CATMathSetOfVectors;

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByMfgItfEnv IID IID_CATIMfgAxialToolPathGeneratorBase;
#else
extern "C" const IID IID_CATIMfgAxialToolPathGeneratorBase;
#endif

 /**   
 * Interface dedicated to axial operation management.
 * <b>Role</b>: This interface offers services for toolpath computation.<br>
 */

class ExportedByMfgItfEnv CATIMfgAxialToolPathGeneratorBase : public CATBaseUnknown
{
    CATDeclareInterface;

public:

 /**
 * Retrieves the axis value , the length validity flag and the length value of the axial operation.
 * @param oAxis
 *     The axis value
 * @param oLengthOk
 *     The length validity flag
 *     <br><b>Legal values</b>:
 *     <ul>
 *     <li>TRUE: the length value can be read</li>
 *     <li>FALSE: the length value can not be read</li>
 *     </ul>
 * @param oLength
 *     The length value
 */
  virtual HRESULT    GetOperationGeometry  (CATMathVector& oAxis,
                                            CATBoolean   & oLengthOk,
                                            double       & oLength)  = 0;
 /**
 * Retrieves the axis value, the length validity flag, the length value,
 *     the diameter validity flag and the diameter value of the axial operation.
 * @param oAxis
 *     The axis value
 * @param oLengthOk
 *     The length validity flag
 *     <br><b>Legal values</b>:
 *     <ul>
 *     <li>TRUE: the length value can be read</li>
 *     <li>FALSE: the length value  can not be read</li>
 *     </ul>
 * @param oLength
 *     The length value
 * @param oDiameterOk
 *     The diameter validity flag
 *     <br><b>Legal values</b>:
 *     <ul>
 *     <li>TRUE: the diameter value can be read</li>
 *     <li>FALSE: the diameter value  can not be read</li>
 *     </ul>
 * @param oDiameter
 *     The diameter value
 */
  virtual HRESULT    GetOperationGeometry  ( CATMathVector & oZAxis,
											 CATBoolean    & oLengthOk,
											 double        & oLength,
											 CATBoolean    & oDiameterOk,
											 double        & oDiameter) = 0;

 /**
 * Retrieves the X axis value, the Y axis value, the Z axis value, the length validity flag and the length value 
 *          of the axial operation.        
 * @param oXAxis
 *     The X axis value
 * @param oYAxis
 *     The Y axis value
 * @param oZAxis
 *     The Z axis value
 * @param oLengthOk
 *     The length validity flag
 *     <br><b>Legal values</b>:
 *     <ul>
 *     <li>TRUE: the length value can be read</li>
 *     <li>FALSE: the length value  can not be read</li>
 *     </ul>
 * @param oLength
 *     The length value
 */
  virtual HRESULT    GetOperationGeometry  (CATMathVector  & oXAxis,
                                            CATMathVector  & oYAxis,
                                            CATMathVector  & oZAxis,
                                            CATBoolean     & oLengthOk,
                                            double         & oLength ) = 0;
 /**
 * Retrieves the tool tip length of the tool associated with the axial operation.
 * @param oToolTipLength
 *     The tool tip length value
 */
  virtual HRESULT    GetToolTipLength       (double       & oToolTipLength) = 0;

/**
 * Retrieves the C mass length of the tool associated with the axial operation.
 * @param oToolCMassLength
 *     The C mass length value
 */
  virtual HRESULT    GetToolCMassLength     (double       & oToolCMassLength) = 0;

/**
 * Calculates the equivalent tip distance to a diameter value.       
 * @param iDiameter
 *     The diameter distance value
 * @param iOffset
 *     The offset value on the diameter
 * @param oTip
 *     The tip distance value
 * @param oTipOk
 *     The tip distance calculation flag
 *    <br><b>Legal values</b>:
 *     <ul>
 *     <li>TRUE: calculation has been successfull </li>
 *     <li>FALSE: calculation has failed </li>
 *     </ul> 
 */
  virtual HRESULT    CalculateTipFromDiameter(const double  & iDiameter,
                                              const double  & iOffset,
                                              double        & oTip,
                                              CATBoolean    & oTipOk) = 0;

 /**
 * Calculates the equivalent diameter distance to a tip value.       
 * @param iTip
 *     The tip distance value
 * @param oDiameter
 *     The diameter distance value
 * @param oDiameterOk
 *     The diameter distance calculation flag
 *    <br><b>Legal values</b>:
 *     <ul>
 *     <li>TRUE: calculation has been successfull </li>
 *     <li>FALSE: calculation has failed </li>
 *     </ul> 
 */
  virtual HRESULT    CalculateDiameterFromTip(const double  & iTip,
                                              double        & oDiameter,
                                              CATBoolean    & oDiameterOk) = 0;

/**
 * Retrieves parameters on the pattern associated with the axial operation.
 * @param oPoints
 *     The list of points from the pattern
 * @param oEntryDistances
 *     The list of entry distances
 * @param oExitDistances
 *     The list of exit distances
 * @param oNbOfPoints
 *     The number of points in the pattern
 * @param iAsResult
 *     The number of points in the pattern
 *    <br><b>Legal values</b>:
 *     <ul>
 *     <li>0: Design specifications for oPoints, oAxis and oOffsets</li>
 *     <li>1: Computation as Result for oPoints, oAxis and oOffsets</li>
 *     </ul> 
 */
  virtual HRESULT GetOperationPattern (CATMathSetOfPoints & oPoints,
                                    CATListOfDouble    & oEntryDistances,
                                    CATListOfDouble    & oExitDistances,
                                    int                & oNbOfPoints,
																		int                iAsResult=0,
																		int                iTakeActualStockIntoAccount=0) = 0;

/**
 * Retrieves parameters on the pattern associated with the axial operation.
 * @param oPoints
 *     The list of points from the pattern
 * @param oEntryDistances
 *     The list of entry distances
 * @param oExitDistances
 *     The list of exit distances
 * @param oDephts
 *     The list of depths
 * @param oNbOfPoints
 *     The number of points in the pattern
 * @param iAsResult
 *     The number of points in the pattern
 *    <br><b>Legal values</b>:
 *     <ul>
 *     <li>0: Design specifications for oPoints, oAxis and oOffsets</li>
 *     <li>1: Computation as Result for oPoints, oAxis and oOffsets</li>
 *     </ul> 
 */
  virtual HRESULT GetOperationPattern (CATMathSetOfPoints & oPoints,
                                    CATListOfDouble    & oEntryDistances,
                                    CATListOfDouble    & oExitDistances,
                                    CATListOfDouble    & oDepths,
                                    int                & oNbOfPoints,
																		int                iAsResult=0,
																		int                iTakeActualStockIntoAccount=0) = 0;

/**
 * Retrieves parameters on the pattern associated with the axial operation.
 * @param oPoints
 *     The list of points from the pattern
 * @param oAxis
 *     The list of axis from the pattern
 * @param oEntryDistances
 *     The list of entry distances
 * @param oExitDistances
 *     The list of exit distances
 * @param oDephts
 *     The list of depths
 * @param oOffsets
 *     The list of the offsets between the machining points and theirs projections on the top elements
 * @param oNbOfPoints
 *     The number of points in the pattern
 * @param iAsResult
 *     Defines if the values are done as specifications, or as result
 *    <br><b>Legal values</b>:
 *     <ul>
 *     <li>0: Design specifications for oPoints, oAxis and oOffsets</li>
 *     <li>1: Computation as Result for oPoints, oAxis and oOffsets</li>
 *     </ul> 
 * @param iTakeActualStockIntoAccount
 *     Defines if the stock is taken into account for the outputed values
 *    <br><b>Legal values</b>:
 *     <ul>
 *     <li>0: The stock is not taken into account</li>
 *     <li>1: The stock have an influence upon oOperationPoints and oOperationOffsets</li>
 *     </ul>
 */
  virtual HRESULT GetOperationPattern (CATMathSetOfPoints & oPoints,
		                                CATMathSetOfVectors & oAxis,
                                    CATListOfDouble    & oEntryDistances,
                                    CATListOfDouble    & oExitDistances,
                                    CATListOfDouble    & oDepths,
																		CATListOfDouble    & oOffsets,
                                    int                & oNbOfPoints,
																		int                iAsResult=0,
																		int                iTakeActualStockIntoAccount=0) = 0;
/**
* Creates a tool path initialized by the axial operation.
*     
* @param iContainer
*      The tool path container
*/
virtual void CreateAxialToolPath(CATIContainer_var iContainer) = 0;

/**
* Creates and returns a tool path initialized by the axial operation and a given operation axis.
* @param iContainer
*      The tool path container
* @param iAxis
*      The axis value
*/
virtual CATIMfgToolPathComponents_var CreateAxialToolPath(const CATIContainer_var &iContainer, 
														  const CATMathVector &iAxis) = 0;

/**
* @nodoc
*/
virtual HRESULT GetHoleMachiningDepthWithBottomPlane(double &oMachDepth, int iHoleNumber = NULL) = 0;

/**
* @nodoc
*/
virtual HRESULT GetComputedDepthTipWithBottomPlane(double &oMachDepth, int iHoleNumber = NULL) = 0;

/**
* @nodoc
*/
virtual HRESULT InitTopBottomPlanes() = 0;

};

CATDeclareHandler(CATIMfgAxialToolPathGeneratorBase, CATBaseUnknown);

#endif

