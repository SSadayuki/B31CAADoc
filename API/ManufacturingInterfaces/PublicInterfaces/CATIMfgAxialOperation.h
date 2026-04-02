/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1997
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef CATIMfgAxialOperation_H
#define CATIMfgAxialOperation_H

#include "CATIAV5Level.h"
#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATMathVector.h"
#include "CATUnicodeString.h"
#include "CATBooleanDef.h"
#include "CATListOfDouble.h"
#include "CATMathSetOfPoints.h"
#include "CATMathSetOfVectors.h"

class CATMathPlane;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgAxialOperation;
#else
extern "C" const IID IID_CATIMfgAxialOperation;
#endif

/**   
 * Interface dedicated to axial operation management.
 * <b>Role</b>: This interface offers services to retrieve parameters of the axial operation <br>
 */

class ExportedByMfgItfEnv CATIMfgAxialOperation : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:

 /**
 * Retrieves the tip approach clearance on the axial operation.
 * @param oClearTipValue
 *     The tip approach clearance value
 */
  virtual HRESULT    GetClearTip        (double &oClearTipValue)=0;


 /**
 * Retrieves the second tip approach clearance on the axial operation.
 * @param oSecondClearTipValue
 *     The second tip approach clearance value
 */
  virtual HRESULT    GetSecondClearTip  (double &oSecondClearTipValue)=0;

 /**
 * Retrieves the jump distance on the axial operation.
 * @param oJumpDistanceValue
 *     The jump distance value
 */
  virtual HRESULT    GetJumpDistance		(double &oJumpDistanceValue)=0;

 /**
 * Retrieves the plunge tip value on the axial operation.
 * @param oPlungeTipValue
 *     The plunge tip value
 */
  virtual HRESULT    GetPlungeTip		(double &oPlungeTipValue)=0;

 /**
 * Retrieves the plunge diameter value on the axial operation.
 * @param oPlungeDiameterValue
 *     The plunge diameter value
 */
  virtual HRESULT    GetPlungeDiameter  (double &oPlungeDiameterValue)=0;

 /**
 * Retrieves the plunge distance value on the axial operation.
 * @param oPlungeDistanceValue
 *     The plunge distance value
 */
  virtual HRESULT    GetPlungeDistance  (double &oPlungeDistanceValue)=0;
  
 /**
 * Retrieves the plunge offset value on the axial operation.
 * @param oPlungeOffsetValue
 *     The plunge offset value
 */
  virtual HRESULT    GetPlungeOffset    (double &oPlungeOffsetValue)=0;
  
  /**
 * Retrieves the parameter ChamferingPlungeActivated on the axial operation.
 * This method only concerns Boring and Chamfering.
 * @param oChamferingPlungeActivated
 *     The ChamferingPlungeActivated value
 */
  virtual HRESULT    GetChamferingPlungeActivated    (boolean &oChamferingPlungeActivated)=0;

 /**
 * Retrieves the spot tip value on the axial operation.
 * @param oSpotTipValue
 *     The spot tip value
 */
  virtual HRESULT    GetSpotTip         (double &oSpotTipValue)=0;

 /**
 * Retrieves the spot diameter value on the axial operation.
 * @param oDiameterValue
 *     The spot diameter value
 */
  virtual HRESULT    GetSpotDiameter	(double &oDiameterValue)=0;

 /**
 * Retrieves the spot offset value on the axial operation.
 * @param oSpotOffsetValue
 *     The spot offset value
 */
  virtual HRESULT    GetSpotOffset      (double &oSpotOffsetValue)=0;

 /**
 * Retrieves the spot distance value on the axial operation.
 * @param oSpotDistanceValue
 *     The spot distance value
 */
  virtual HRESULT    GetSpotDistance    (double &oSpotDistanceValue)=0;

 /**
 * Retrieves the chamfer diameter value on the axial operation.
 * @param oChamferDiameterValue
 *     The chamfer diameter value
 */
  virtual HRESULT    GetChamferDiameter (double &oChamferDiameterValue)=0;

 /**
 * Retrieves the delta increment value on the axial operation.
 * @param oDeltaIncrementValue
 *     The delta increment value
 */
  virtual HRESULT    GetDeltaIncrement  (double &oDeltaIncrementValue)=0;

 /**
 * Retrieves the delta diameter value on the axial operation.
 * @param oDeltaDiameterValue
 *     The delta diameter value
 */
  virtual HRESULT    GetDeltaDiameter   (double &oDeltaDiameterValue)=0;
   
  /**
 * Retrieves the delta offset value on the axial operation.
 * @param oDeltaOffsetValue
 *     The delta offset value 
 */
  virtual HRESULT    GetDeltaOffset     (double &oDeltaOffsetValue)=0;

   /**
 * Retrieves the delta tip value on the axial operation.
 * @param oDeltaTipValue
 *     The delta offset value
 */
  virtual HRESULT    GetDeltaTip        (double &oDeltaTipValue)=0;

 /**
 * Retrieves the Extension value of Pattern Hole.
 * @param oMachExt
 *     The extension value (MfgBlind / MfgThrough)
 * @param iHoleNumber
 *     The number of the Pattern Hole on which the Extension has to be retrieved
 *     if NULL, the ItemToCopy is taken into account
 */
	virtual HRESULT GetHoleMachiningExtension (CATUnicodeString &oMachExt, int iHoleNumber = NULL) =0;

/**
 * Retrieves the breakthrough value on the axial operation.
 * @param oBreakthroughValue
 *     The breakthrough value
 * @param iHoleNumber
 *     The number of the Pattern Hole on which the Breakthrough has to be retrieved (depends of the Extension of the hole)
 *     if NULL, the ItemToCopy is taken into account
 */
  virtual HRESULT    GetBreakThrough    (double &oBreakthroughValue, int iHoleNumber = NULL)=0;

 /**
 * Retrieves the depth distance value on the axial operation.
 * @param oDepthDistanceValue
 *     The depth distance value
 */
  virtual HRESULT    GetDepthDistance   (double &oDepthDistanceValue)=0;

 /**
 * Retrieves the depth tip value on the axial operation.
 * @param oDepthTipValue
 *     The depth tip value
 */
  virtual HRESULT    GetDepthTip        (double &oDepthTipValue)=0;

 /**
 * Retrieves the depth diameter value on the axial operation.
 * @param oDepthDiameterValue
 *     The depth diameter value
 */
  virtual HRESULT    GetDepthDiameter   (double &oDepthDiameterValue)=0;

 /**
 * Retrieves the depth offset value on the axial operation.
 * @param oDepthOffsetValue
 *    The depth offset value
 */
  virtual HRESULT    GetDepthOffset     (double &oDepthOffsetValue)=0;

 /**
 * Retrieves the dwell time value on the axial operation.
 * @param oDwellTimeValue
 *     The dwell time value
 */
  virtual HRESULT    GetDwellTime		(int &oDwellTimeValue)=0;

 /**
 * Retrieves the dwell time value on the axial operation.
 * @param oDwellTimeValue
 *     The dwell time value
 */
  virtual HRESULT    GetDwellTime		(double &oDwellTimeValue)=0;

 /**
 * Retrieves the dwell revolutions value on the axial operation.
 * @param oDwellRoundValue
 *     The dwell revolutions value
 */
  virtual HRESULT    GetDwellRound		(int  &oDwellRoundValue)=0;

/**
 * Retrieves the dwell revolutions value on the axial operation.
 * @param oDwellRoundValue
 *     The dwell revolutions value
 */
  virtual HRESULT    GetDwellRound		(double  &oDwellRoundValue)=0;

 /**
 * Retrieves the computed dwell time value on the axial operation.
 * @param oComputedDwellTimeValue
 *     The computed dwell time value
 */
  virtual HRESULT    GetComputedDwellTime	(double  &oComputedDwellTimeValue)=0;

 /**
 * Retrieves the lift X value on the axial operation.
 * @param oLiftXValue
 *     The lift X value
 */
  virtual HRESULT    GetLiftX           (double &oLiftXValue)=0;

 /**
 * Retrieves the lift Y value on the axial operation.
 * @param oLiftYValue
 *     The lift Y value
 */
  virtual HRESULT    GetLiftY           (double &oLiftYValue)=0;

 /**
 * Retrieves the lift Z value on the axial operation.
 * @param oLiftZValue
 *     The lift Z value
 */
  virtual HRESULT    GetLiftZ           (double &oLiftZValue)=0;

 /**
 * Retrieves the lift angle value on the axial operation.
 * @param oLiftAngleValue
 *     The lift angle value
 */
  virtual HRESULT    GetLiftAngle       (double &oLiftAngleValue)=0;

 /**
 * Retrieves the lift way value on the axial operation.
 * @param oLiftWayValue
 *     The lift way value
 */
  virtual HRESULT    GetLiftWay         (double &oLiftWayValue)=0;

 /**
 * Retrieves the max depth of cut value on the axial operation of type breakchips or deephole.
 * @param oMaxDepthOfCutValue
 *     The max depth of cut value
 */
  virtual HRESULT    GetMaxDepthOfCut   (double &oMaxDepthOfCutValue)=0;

 /**
 * Retrieves the retract offset value on the axial operation of type breakchips or deephole.
 * @param oRetractOffsetValue
 *     The retract offset value
 */
  virtual HRESULT    GetRetractOffset   (double &oRetractOffsetValue)=0;

 /**
 * Retrieves the decrement rate value on the axial operation of type deephole.
 * @param oDecrementRateValue
 *     The decrement rate value
 */
  virtual HRESULT    GetDecrementRate   (double &oDecrementRateValue)=0;

 /**
 * Retrieves the decrement limit rate value on the axial operation of type deephole.
 * @param oDecrementLimitValue
 *     The decrement limit rate value
 */
  virtual HRESULT    GetDecrementLimit  (double &oDecrementLimitValue)=0;

 /**
 * Retrieves the tool number of the tool associated to the axial operation.
 * @param oToolNumberValue
 *     The tool number value
 */
  virtual HRESULT   GetToolNumber       (int &oToolNumberValue)=0;

 /**
 * Retrieves the parameters on the axial operation of the tool corrector number specified.
 * @param iCorrectorNumber
 *     The corrector number
 * @param oLengthNumber
 *     The length number
 * @param oRadiusNumber
 *     The radius number
 * @param oDiameter
 *     The diameter value
 */
  virtual HRESULT   GetToolCompensationParameters   (int &iCorrectorNumber,
														  int &oLengthNumber,
														  int &oRadiusNumber,
														  double &oDiameter)=0;

 /**
 * Retrieves the first tool corrector number and its parameters on the axial operation.
 * @param oCorrectorNumber
 *     The corrector number
 * @param oLengthNumber
 *     The length number
 * @param oRadiusNumber
 *     The radius number
 * @param oDiameter
 *     The diameter value
 */
  virtual HRESULT   GetFirstToolCompensationParameters   (int &oCorrectorNumber,
														  int &oLengthNumber,
														  int &oRadiusNumber,
														  double &oDiameter)=0;

 /**
 * Retrieves the second tool corrector number and its parameters on the axial operation.
 * @param oCorrectorNumber
 *     The corrector number
 * @param oLengthNumber
 *     The length number
 * @param oRadiusNumber
 *     The radius number
 * @param oDiameter
 *     The diameter value
 */
  virtual HRESULT   GetSecondToolCompensationParameters  (int &oCorrectorNumber,
														  int &oLengthNumber,
														  int &oRadiusNumber,
														  double &oDiameter)=0;

 /**
 * Retrieves the correction distance from the tool correction parameters on the axial operation.
 * @param iCorrectorNumber
 *     The corrector number specified.
 * @param oDistance
 *     The correction distance
 */
  virtual HRESULT   GetDistanceFromCompensation (int &iCorrectorNumber, double &oDistance)=0;

 /**
 * Retrieves the correction distance from the first tool correction parameters on the axial operation.
 * @param oDistance
 *     The correction distance
 */
  virtual HRESULT   GetDistanceFromFirstCompensation (double &oDistance)=0;

 /**
 * Retrieves the correction distance from the second tool correction parameters on the axial operation.
 * @param oDistance
 *     The correction distance
 */
  virtual HRESULT   GetDistanceFromSecondCompensation (double &oDistance)=0;

 /**
 * Retrieves the computed plunge distance on the axial operation.
 * @param oPlungeDistValue
 *     The computed plunge distance value
 */
  virtual HRESULT    GetPlungeDist      (double &oPlungeDistValue)=0;

 /**
 * Retrieves the detail depth of the hole associated to the axial operation.
 * @param oDetailDepthValue
 *     The detail depth value
 * @param iHoleNumber
 *     The number of the Hole on which the DetailDepth has to be computed
 *     if NULL, the ItemToCopy is taken into account
 */
  virtual HRESULT    GetDetailDepth     (double &oDetailDepthValue, int iHoleNumber = NULL)=0;

 /**
 * Retrieves the total depth of the hole associated to the axial operation.
 * @param oTotalDepthValue
 *     The total depth value
 * @param iHoleNumber
 *     The number of the Hole on which the TotalDepth has to be computed
 *     if NULL, the ItemToCopy is taken into account
 */
  virtual HRESULT    GetTotalDepth     (double &oTotalDepthValue, int iHoleNumber = NULL)=0;

 /**
 * Retrieves the computed depth tip value from the parameters set on the axial operation.
 * @param oTotalDepthValue
 *     The computed total depth tip value
 * @param iHoleNumber
 *     The number of the Hole on which the DepthTip has to be computed
 *     if NULL, the ItemToCopy is taken into account
 */
  virtual HRESULT	 GetComputedDepthTip      (double &oTotalDepthValue, int iHoleNumber = NULL)=0;

/**
 * Retrieves the depth value of Pattern Hole seen as Results and not as Specs.
 * @param oResultDepth
 *     The depth value seen as results and not as specs
 * @param iHoleNumber
 *     The number of the Pattern Hole on which the ResultDepth has to be retrieved
 *     if NULL, the ItemToCopy is taken into account
 */
  virtual HRESULT	 GetHoleMachiningDepth    (double &oMachDepth, int iHoleNumber = NULL)=0;
	
/**
 * Retrieves the diameter value of Pattern Hole.
 * @param oResultDiameter
 *     The diameter value seen as results and not as specs
 * @param iHoleNumber
 *     The number of the Pattern Hole on which the ResultDiameter has to be retrieved
 *     if NULL, the ItemToCopy is taken into account
 */
  virtual HRESULT	 GetHoleMachiningDiameter (double &oMachDiam, int iHoleNumber = NULL)=0;

	/**
 * Retrieves the depth computation mode set on the axial operation.
 * @param oCurrentMode
 *     The current depth mode value
 *     <br><b>Legal values</b>:
 *     <ul>
 *     <li> MfgDepthDefault
 *     <li> MfgDepthTip
 *     <li> MfgDepthDiameter
 *     <li> MfgDepthDistance
 *     <li> MfgDepthShoulder
 *     </ul>
 */
  virtual HRESULT	 GetDepthComputationMode(CATUnicodeString &oCurrentMode)=0;

 /**
 * Retrieves the Z axis on the axial operation.
 * @param oZAxis
 *     The Z axis value
 */
  virtual HRESULT    GetOperationAxis  (CATMathVector & oZAxis)=0;

 /**
 * Retrieves the Z axis, X axis and Y axis on the axial operation.
 * @param oZAxis
 *     The Z axis value
 * @param oXAxis
 *     The X axis value
 * @param oYAxis
 *     The Y axis value
 */
  virtual HRESULT    GetOperationAxis  (CATMathVector & oZAxis,
										CATMathVector & oXAxis,
										CATMathVector & oYAxis)=0;

 /**
 * Determines wether the ToolAxis of the axial operation is inverted or not.
 * @param oToolAxisOrientation
 *     -1 if the ToolAxis of the axial operation is inverted
 *      1 otherwise  
 */
	virtual HRESULT GetToolAxisOrientation   (int & oToolAxisOrientation)=0;

 /**
 * Retrieves the depth of the hole associated with the axial operation.
 * @param oDepth
 *     The hole depth value
 */
  virtual HRESULT	GetFeatureDepth		(double &oDepth)=0;
   
 /**
 * Retrieves the diameter of the hole associated with the axial operation.
 * @param oDiameter
 *     The hole diameter value
 */
  virtual HRESULT   GetFeatureDiameter	(double &oDiameter)=0;

 /**
 * Retrieves the countersink angle of the hole associated with the axial operation.
 * @param oAngle
 *     The countersink angle value
 */
  virtual HRESULT   GetFeatureAngle  	(double &oAngle)=0;

 /**
 * Retrieves the countersink diameter of the hole associated with the axial operation.
 * @param oCSDiameter
 *     The countersink diameter value
 */
  virtual HRESULT	GetCounterSinkDiameter	(double &oCSDiameter)=0;

  /**
 * Retrieves the slot diameter of the hole associated with the axial operation.
 * @param oSlotDiameter
 *     The slot diameter as double
 */
  virtual HRESULT	GetSlotDiameter	(double &oSlotDiameter)=0;

   /**
 * Retrieves the back depth of the hole associated with the axial operation.
 * @param oBackDepth
 *     The back depth value
 */
  virtual HRESULT	GetBackDepth	(double &oBackDepth)=0;

  /**
 * Retrieves the retract clear tip of the axial operation (Back Boring).
 * @param oRetractClearTip
 *     The retract clear tip value
 */
  virtual HRESULT	GetRetractClearTip	(double &oRetractClearTip)=0;

 /**
 * Retrieves the helix mode on the axial operation.
 * @param oMode
 *     The helix mode value
 */
  virtual HRESULT  GetHelixMode		(CATUnicodeString &oMode)=0;

 /**
 * Retrieves the helix pitch on the axial operation.
 * @param oPitch
 *     The helix pitch value
 */
  virtual HRESULT  GetHelixPitch		(double &oPitch)=0;

 /**
 * Retrieves the helix angle on the axial operation.
 * @param oAngle
 *     The helix angle value
 */
  virtual HRESULT  GetHelixAngle		(double &oAngle)=0;

/**
 * Retrieves the circular milling mode on the axial operation.
 * @param oMode
 *     The circular milling mode value
 */
  virtual HRESULT GetCircularMillingMode (CATUnicodeString &oMode)=0;

 /**
 * Retrieves the thread diameter (crest diameter) of a manufacturing feature.
 * @param oThreadDiameter
 *     The thread diameter value
 */
  virtual HRESULT  GetFeatureThreadDiameter		(double &oThreadDiameter)=0;

 /**
 * Retrieves the  pitch of a manufacturing feature.
 * @param oPitch
 *     The pitch value
 */
  virtual HRESULT  GetFeaturePitch		(double &oPitch)=0;

 /**
 * Retrieves the  pitch sens of a manufacturing feature.
 * @param oPitchSens
 *     The pitch sens value
 */
  virtual HRESULT  GetFeaturePitchSens (CATUnicodeString &oPitchSens)=0;

/**
 * Retrieves the  hole extension of a manufacturing feature.
 * @param oHoleExtension
 *     The hole extension value
 */
  virtual HRESULT  GetFeatureExtension (CATUnicodeString &oHoleExtension)=0;
  
/**
* Retrieves the thread type (internal or external) of a manufacturing feature.
* @param oThreadType
*    The thread type value
*/
virtual HRESULT  GetThreadType (CATUnicodeString &oThreadType)=0;

/**
* Retrieves the effective depth of cut of a manufacturing feature (deephole and breakchips operations only).
* @param oEffectDepthCut
*      The effective depth of cut value
*/
virtual HRESULT  GetEffectDepthCut (double &oEffectDepthCut, int iHoleNumber = NULL)=0;

/**
* Retrieves the output syntax (GOTO or CYCLE).
* @param oOutputCycleSyntax
*      GOTO/CYCLE <-> False/True
*/
virtual HRESULT  GetOutputCycleSyntax (CATBoolean &oOutputCycleSyntax)=0;

/**
* Retrieves the value of the Axial-Radial Linking parameter.
* @param oAxialRadialLinkingMode
*      0 : Straight line
*      1 : Axial-Radial move
*/
virtual HRESULT GetAxialRadialLinkingMode (int &oAxialRadialLinkingMode)=0;

	/**
	* @nodoc
	*/
virtual HRESULT GetTopPlane(CATMathPlane &oTopPlane)=0;

	/**
	* @nodoc
	*/
virtual HRESULT GetBottomPlane(CATMathPlane &oBottomPlane)=0;

	/**
	* @nodoc
	*/
virtual HRESULT Init()=0;

	/**
	* @nodoc
	*/
virtual HRESULT Reset()=0;

	/**
	* @nodoc
	*/
virtual HRESULT TakeActualStockIntoAccount (CATMathSetOfPoints & ioPoints,CATMathSetOfVectors iAxis,
																			CATListOfDouble & ioOffsets,int iHoleNumber = NULL) = 0;

};

CATDeclareHandler(CATIMfgAxialOperation, CATBaseUnknown) ;
#endif
