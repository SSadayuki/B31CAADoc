#ifndef CATICciLimitContour_H
#define CATICciLimitContour_H

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2005
//==============================================================================
//
// CATICciLimitContour :
//   Interface to manage limit contour feature.
//
//==============================================================================
// Usage Notes :
//
//------------------------------------------------------------------------------
//  Inheritance : CATICciLimitContour (CAACompositesItf FW)
//                 CATICciBaseContour (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================

#include "CAACompositesItf.h"
#include "CATICciBaseContour.h"

class CATICkeParm_var;
class CATISpecObject_var;
class CATIMmiMechanicalFeature_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByCAACompositesItf IID IID_CATICciLimitContour;
#else
extern "C" const IID IID_CATICciLimitContour;
#endif

//Relimiting curves join type
enum RelimitingCurvesJoinType {Extrapolation, GapFilling};

/**
 * Interface to Composites limit contour.
 * <b>Role</b>: Allows to access data of Composites limit contour feature, especially defined 
 * relimiting curves of the contour.
 */
//------------------------------------------------------------------
class ExportedByCAACompositesItf CATICciLimitContour : public CATICciBaseContour
{
   CATDeclareInterface;

public :

   /**
   * Gets the number of relimiting curves of the limit contour.
   * @param oNumberOfCurves
   *    number of relimiting curves
   */
   virtual HRESULT GetNumberOfRelimitingCurves(int & oNumberOfCurves) = 0;

   /**
   * Gets a relimiting curve of the limit contour.
   * @param iCurveIndex
   *	  Index of the curve to be returned
   *    1 <= iCurveIndex <= Number of relimiting curves
   * @param oRelimitingCurve
   *    Relimiting curve corresponding to iCurveIndex
   */
   virtual HRESULT GetRelimitingCurve( int iCurveIndex,
      CATIMmiMechanicalFeature_var & oRelimitingCurve) = 0;

   /**
   * Gets a staggering value corresponding to a given relimiting curve.
   * @param iCurveIndex
   *	  Index of the curve for which the value is expected
   *    1 <= iCurveIndex <= Number of relimiting curves
   * @param oStaggeringValue
   *    Staggering value corresponding to iCurveIndex
   */
   virtual HRESULT GetStaggeringValue( int iCurveIndex,
      CATICkeParm_var & oStaggeringValue) = 0;

   /**
   * Gets a staggering step corresponding to a given relimiting curve.
   * @param iCurveIndex
   *	  Index of the curve for which the value is expected
   *    1 <= iCurveIndex <= Number of relimiting curves
   * @param oStaggeringStep
   *    Staggering step corresponding to iCurveIndex
   */
   virtual HRESULT GetStaggeringStep( int iCurveIndex,
      CATICkeParm_var & oStaggeringStep) = 0;

   /**
   * Gets a staggering direction corresponding to a given relimiting curve
   * @param iCurveIndex
   *	  Index of the curve for which the value is expected
   *    1 <= iCurveIndex <= Number of relimiting curves
   * @param oStaggeringDirection
   *    Staggering direction (0 or 1) corresponding to iCurveIndex
   */
   virtual HRESULT GetStaggeringDirection( int iCurveIndex,
      int & oStaggeringDirection) = 0;

   /**
   * Gets an orientation corresponding to a given relimiting curve
   * @param iCurveIndex
   *	  Index of the curve for which the value is expected
   *    1 <= iCurveIndex <= Number of relimiting curves
   * @param oOrientation
   *    Orientation (1 or -1) corresponding to iCurveIndex
   */
   virtual HRESULT GetOrientation( int iCurveIndex,
      int & oOrientation) = 0;

   /**
   * Gets a matter side corresponding to a given relimiting curve
   * @param iCurveIndex
   *	  Index of the curve for which the value is expected
   *    1 <= iCurveIndex <= Number of relimiting curves
   * @param oCurveMatterSide
   *    Matter side (1 or -1) corresponding to iCurveIndex
   */
   virtual HRESULT GetMatterSide( int iCurveIndex,
      int & oMatterSide) = 0;

   /**
   * Gets the relimiting direction i.e. side of the limitation to be kept
   * as the geometry of the ply or cut-piece.
   * @param oDirection
   *    Relimiting direction (0 or 1)
   */
   virtual HRESULT GetRelimitingDirection(int & oDirection) = 0;

   /**
   * Gets the relimiting curves join type.
   * @param oJoinType
   *    Relimiting curves join type (Extrapolation or GapFilling)
   */
   virtual HRESULT GetJoinType (RelimitingCurvesJoinType & oJoinType) = 0;

   /**
   * Adds a relimiting curve at the end of the list of relimiting curves.
   * @param iRelimitingCurve
   *    Relimiting curve to add
   * @param iStaggeringValue
   *	  Staggering value corresponding to the relimiting curve
   * @param iStaggeringStep
   *	  Staggering step corresponding to the relimiting curve
   * @param iStaggeringDirection
   *	  Staggering direction corresponding to the relimiting curve
   * @param iOrientation
   *	  Orientation corresponding to the relimiting curve
   * @param iMatterSide
   *	  Matter side corresponding to the relimiting curve
   */
   virtual HRESULT AddRelimitingCurve (const CATIMmiMechanicalFeature_var & iRelimitingCurve,
      const CATICkeParm_var & iStaggeringValue,
      const CATICkeParm_var & iStaggeringStep,
      int iStaggeringDirection, int iOrientation = 1, int iMatterSide = 1) = 0;

   /**
   * Removes a relimiting curve from the list (and its corresponding values.
   * i.e. staggeing value, staggering step and staggering direction)
   * @param iCurveIndex
   *	  Index of the curve to be removed
   *    1 <= iCurveIndex <= Number of relimiting curves
   */
   virtual HRESULT RemoveRelimitingCurve(int iCurveIndex) = 0;

   /**
   * Sets the relimiting direction i.e. side of the limitation to be kept.
   * as the geometry of the ply or cut-piece
   * @param iDirection
   *    Relimiting direction (0 or 1)
   */
   virtual HRESULT SetRelimitingDirection (int iDirection) = 0;

   /**
   * Sets the relimiting curves join type.
   * @param iJoinType
   *    Relimiting curves join type (Extrapolation or GapFilling)
   */
   virtual HRESULT SetJoinType (RelimitingCurvesJoinType iJoinType) = 0;

	/**
	* @deprecated V5R26 
	* Use @see #GetRelimitingCurve overloaded method instead.
	* Gets a relimiting curve of the limit contour.
	* @param iCurveIndex
	*	  Index of the curve to be returned
	*    1 <= iCurveIndex <= Number of relimiting curves
	* @param oRelimitingCurve
	*    Relimiting curve corresponding to iCurveIndex
	*/
	virtual HRESULT GetRelimitingCurve( int iCurveIndex,
		CATISpecObject_var & oRelimitingCurve) = 0;

	/**
	* @deprecated V5R26 
	* Use @see #AddRelimitingCurve overloaded method instead.
	* Adds a relimiting curve at the end of the list of relimiting curves.
	* @param iRelimitingCurve
	*    Relimiting curve to add
	* @param iStaggeringValue
	*	  Staggering value corresponding to the relimiting curve
	* @param iStaggeringStep
	*	  Staggering step corresponding to the relimiting curve
	* @param iStaggeringDirection
	*	  Staggering direction corresponding to the relimiting curve
	* @param iOrientation
	*	  Orientation corresponding to the relimiting curve
	* @param iMatterSide
	*	  Matter side corresponding to the relimiting curve
	*/
	virtual HRESULT AddRelimitingCurve (const CATISpecObject_var & iRelimitingCurve,
		const CATICkeParm_var & iStaggeringValue,
		const CATICkeParm_var & iStaggeringStep,
		int iStaggeringDirection, int iOrientation = 1, int iMatterSide = 1) = 0;
};

CATDeclareHandler(CATICciLimitContour, CATICciBaseContour);

#endif
