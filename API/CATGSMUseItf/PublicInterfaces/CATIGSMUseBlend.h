/* -*-c++-*- */

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#ifndef CATIGSMUseBlend_H
#define CATIGSMUseBlend_H

#include "CATGSMUseItfExportedBy.h"
#include "CATBaseUnknown.h"
#include "CATGSMBlendDef.h"
#include "CATGSMOrientation.h"
#include "CATGSMContinuityDef.h"
#include "CATGSMTrimDef.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATLISTV_CATIMmiMechanicalFeature.h"
#include "CATListOfDouble.h"
#include "CATGSMCouplingDef.h"
#include "CATGSMShapeFeatureDef.h"
#include "CATGSMClosingPointDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID IID_CATIGSMUseBlend ;
#else
extern "C" const IID IID_CATIGSMUseBlend ;
#endif

class CATICkeParm_var;

/**
 * Interface to blend surfaces features.
 * <b>Role</b>: Allows you to acess data of blend surface.
 * @see CATIGSMUseFactory#CreateBlend
 */
class ExportedByCATGSMUseItf CATIGSMUseBlend: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
     /**
      * Sets a curve to the Blend.  
      *   @param iBlendLimit
      *      limit of the blend to which the curve will be set.
      *        @see CATGSMBlendLimitNumber
      *   @param iCurve
      *      curve to be set.
      */
      virtual HRESULT SetCurve(
         const CATGSMBlendLimitNumber iBlendLimit
     , const CATIMmiMechanicalFeature_var iCurve
     ) = 0;

     /**
      * Sets a curve to the Blend.  
      *   @param iBlendLimit
      *      limit of the blend to which the curve will be set.
      *        @see CATGSMBlendLimitNumber
      *   @param iCurve
      *      curve to be set.
      *   @param oClosingPoint
      *     new closing point of iCurve.
      *   @param oPtDiag
      *     Closing Point diagnosis.
      *        @see CATGSMClosingPointCreationDiag
      */
      virtual HRESULT SetCurve(
         const CATGSMBlendLimitNumber iBlendLimit
         , const CATIMmiMechanicalFeature_var iCurve
         , CATIMmiMechanicalFeature_var & oClosingPoint
         , CATGSMClosingPointCreationDiag & oPtDiag
     ) = 0;

     /**
      * Modifies the orientation of the curve of a blend limit.
      *   @param iBlendLimit
      *      limit of the blend of which the curve orientation will be mofified.
      *        @see CATGSMBlendLimitNumber
      *   @param iOrient
      *      orientation of the curve : 
      *         @see CATGSMOrientation
      */
      virtual HRESULT ModifyOrient(
     const CATGSMBlendLimitNumber iBlendLimit
     , const CATGSMOrientation iOrient = CATGSMSameOrientation
     ) = 0;

     /**
      * Sets a new closing point to a closed curve of a blend.
      *   @param iBlendLimit
      *      limit of the blend of which the curve will be set
      *      a new closing point.
      *        @see CATGSMBlendLimitNumber
      *   @param iClosingPoint
      *      closing point to be added, the point  
      *      must be layed on the curve of the blend limit.
      */
      virtual HRESULT SetClosingPoint(
     const CATGSMBlendLimitNumber iBlendLimit
     , const CATIMmiMechanicalFeature_var iClosingPoint
     ) = 0;

     /**
      * Removes the closing point to a curve of a blend.
      *   @param iBlendLimit
      *      limit of the blend of which the closing point of 
      *      the curve will be removed.
      *        @see CATGSMBlendLimitNumber
      */
      virtual HRESULT RemoveClosingPoint(
     const CATGSMBlendLimitNumber iBlendLimit
     ) = 0;

     /**
      * Sets a support to the Blend.
      *   @param iBlendLimit
      *      limit of the blend to which the support will be set.
      *        @see CATGSMBlendLimitNumber
      *   @param iSupport
      *      support surface to be added, the curve of the blend limit 
      *      must be layed on the surface.
      */
      virtual HRESULT SetSupport(
     const CATGSMBlendLimitNumber iBlendLimit
     , const CATIMmiMechanicalFeature_var iSupport
     ) = 0;

     /**
      * Removes the support of a limit of a blend. 
      *   @param iBlendLimit
      *      limit of the blend of which support will be removed.
      *        @see CATGSMBlendLimitNumber
      */
      virtual HRESULT RemoveSupport(
     const CATGSMBlendLimitNumber iBlendLimit
     ) = 0;

     /**
      * Sets the transition to a limit of the Blend. 
      * Let <tt>T</tt> be the tangent to the wire, 
      * and <tt>N</tt> be the normal to the skin body.
      * The transition orientation defines how the blend goes from the initial wires: it takes the 
      * direction of <tt>iTransition*(T^N)</tt>, where <tt>^</tt> is the vectorial product.
      *   @param iBlendLimit
      *      limit of the blend to which the transition will be set.
      *        @see CATGSMBlendLimitNumber
      *   @param iTransition
      *      value of transition. 
      *        @see CATGSMOrientation
      */
      virtual HRESULT SetTransition(
     const CATGSMBlendLimitNumber iBlendLimit
     , const CATGSMOrientation iTransition = CATGSMSameOrientation
     ) = 0;

     /**
      * Sets the continuity to a limit the Blend. 
      *   @param iBlendLimit
      *      limit of the blend to which the continuity will be set.
      *        @see CATGSMBlendLimitNumber
      *   @param iContinuity
      *      continuity.
      *        @see CATGSMContinuity
      */
      virtual HRESULT SetContinuity(
     const CATGSMBlendLimitNumber iBlendLimit
     , const CATGSMContinuity iContinuity = CATGSMContinuity_Point
     ) = 0;

     /**
      * Sets the support to be trim or not to a limit of the Blend.
      * <br> If the support is to be trim, then the support will be trimmed
      * by the curve then joined to the blend.
      *   @param iBlendLimit
      *      limit of the blend to which the trim support mode will be set.
      *        @see CATGSMBlendLimitNumber
      *   @param iTrimSupport
      *      value of trim support mode. 
      *        @see CATGSMTrimSupportMode
      */
      virtual HRESULT SetTrimSupport(
     const CATGSMBlendLimitNumber iBlendLimit
     , const CATGSMTrimSupportMode iTrimSupport = CATGSMTrimSupport
     ) = 0;

     /**
      * Gets informations about the limits of the blend surface.
      *   @param oCurves
      *      array of the two curves.
      *   @param oOrientations
      *      array of the orientations of the curves.
      *   @param oPoints
      *      array of the closing points corresponding to the curves.
      *   @param oSupports
      *      array of the two supports .
      *   @param oTransitions
      *      array of the transitions corresponding to the two supports .
      *   @param oContinuities
      *      array of the continuities corresponding to the two supports .
      *   @param oTrimSupports
      *      array of the trim support modes corresponding to the supports.
      */
      virtual HRESULT GetLimits( 
         CATIMmiMechanicalFeature_var oCurves[2]
         , int oOrientations[2]
         , CATIMmiMechanicalFeature_var oPoints[2]
         , CATIMmiMechanicalFeature_var oSupports[2]
         , int oTransitions[2]
         , int oContinuities[2]
         , int oTrimSupports[2]
         )= 0;
  
     /**
      * Sets the tension type and values in double to a limit of the Blend.
      *   @param iBlendLimit
      *      limit of the blend to which the tension will be set.
      *        @see CATGSMBlendLimitNumber
      *   @param iTensionType
      *      value of tension type 
      *        @see CATGSMBlendTensionType
      *   @param iTensionValues
      *      list of value of tension. Values must be double and positive.
      *    <br> no value if iTensionType equal CATGSMBlendDefaultTension.
      *    <br> one value if iTensionType equal CATGSMBlendConstantTension.
      *    <br> two values if iTensionType equal CATGSMBlendLinearTension or CATGSMBlendSTypeTension.
      */

      virtual HRESULT SetTension(
     const CATGSMBlendLimitNumber iBlendLimit
     , const CATGSMBlendTensionType iTensionType 
         , const CATListOfDouble & iTensionValues
     ) = 0;

     /**
      * Sets the tension type and values in CATICkeParm to a limit of the Blend.
      *   @param iBlendLimit
      *      limit of the blend to which the tension will be set.
      *        @see CATGSMBlendLimitNumber
      *   @param iTensionType
      *      value of tension type. 
      *        @see CATGSMBlendTensionType
      *   @param iTensionValues
      *      list of values of tension. Values must be a CATICkeParm and positive.
      *      <br> no value if iTensionType equal CATGSMBlendDefaultTension.
      *      <br> one value if iTensionType equal CATGSMBlendConstantTension.
      *      <br> two values if iTensionType equal CATGSMBlendLinearTension or CATGSMBlendSTypeTension.
      */
      virtual HRESULT SetTension(
     const CATGSMBlendLimitNumber iBlendLimit
     , const CATGSMBlendTensionType iTensionType 
         , const CATLISTV(CATIMmiMechanicalFeature_var) & iTensionValues
     ) = 0;

     /**
      * Sets the tension type to a limit of the Blend.
      *   @param iBlendLimit
      *      limit of the blend to which the tension will be set.
      *        @see CATGSMBlendLimitNumber
      *   @param iTensionType
      *      value of tension type .
      *        @see CATGSMBlendTensionType
      */
      virtual HRESULT SetTensionType(
     const CATGSMBlendLimitNumber iBlendLimit
     , const CATGSMBlendTensionType iTensionType 
     ) = 0;

     /**
      * Gets the tension type and values in double of the 2 limitss of the Blend.
      *   @param oTensionType[2] 
      *      array of value of tension type for start limit and end limit.
      *        @see CATGSMBlendLimitNumber
      *   @param oTensionValues[2] 
      *      array of lists of values of tensions 
      *      <br> oTensionValues[0] :list of values in double for start limit.
      *            must be created by the user.
      *      <br> oTensionValues[1] :list of values in double for end limit.
      *            must be created by the user.
      */
      virtual HRESULT GetTension(
     CATGSMBlendTensionType oTensionType[2] 
         , CATListOfDouble * oTensionValues[2]
     ) = 0;

     /**
      * Gets the tension type and values in CATICkeParm of the 2 limits of the Blend.
      *   @param oTensionType[2] 
      *      array of values of tension type for start limit and end limit.
      *        @see CATGSMBlendTensionType
      *   @param oTensionValues[2] 
      *      values of tensions 
      *      <br> oTensionValues[0] :list of values in CATICkeParm for start limit.
      *            must be created by the user.
      *      <br> oTensionValues[1] :list of values in CATICkeParm for end limit.
      *            must be created by the user.
      */
      virtual HRESULT GetTension(
     CATGSMBlendTensionType oTensionType[2] 
         , CATLISTV(CATIMmiMechanicalFeature_var) * oTensionValues[2]
     ) = 0;

     /**
      * Gets the tension type of the limits of the Blend.
      *   @param oTensionType
      *      array of values of tension type. 
      *        @see CATGSMBlendTensionType
      */
      virtual HRESULT GetTensionType(
     CATGSMBlendTensionType oTensionType[2] 
     ) = 0;


  /**
   * Sets informations about the coupling between limits of the blend.
   * <br> Note that SetSpine method with a valid curve is enough to set the coupling mode to CATGSMSpineCoupling.
   * <br> Also note that setting a coupling mode different than CATGSMSpineCoupling removes the spine curve
   * from the inputs.
   *   @param iCoupling
   *      type of coupling between section.
   *        @see CATGSMCouplingType
   */
   virtual HRESULT SetCoupling(const CATGSMCouplingType iCoupling = CATGSMRatioCoupling) = 0;

  /**
   * Gets informations about the coupling between limits of the blend.
   *   @param oCoupling
   *      type of coupling between section.
   *        @see CATGSMCouplingType
   */
   virtual HRESULT GetCoupling( int & oCoupling) = 0;

  /**
   * Sets a curve used as spine for coupling in Blend computation.
   * <br> This methods also changes coupling mode to CATGSMSpineCoupling.
   * <br> In order to remove the spine, set another coupling mode. SetSpine(NULL_var) does nothing and returns E_FAIL.
   *   @param iSpine
   *      spine curve
   */
   virtual HRESULT SetSpine(const CATIMmiMechanicalFeature_var & iSpine) = 0;

  /**
   * Gets the curve used as spine for coupling in Blend computation.
   *   @param oSpine
   *      spine curve
   */
   virtual HRESULT GetSpine(CATIMmiMechanicalFeature_var & oSpine) = 0;


     /**
      * Sets informations about the border of the blend to a limit the Blend.
      *   @param iBlendLimit
      *      limit of the blend to which the border mode will be set.
      *        @see CATGSMBlendLimitNumber
      *   @param iBorder
      *      type of border.
      *        @see CATGSMBlendBorder
      */
   virtual HRESULT SetBorderMode(
     const CATGSMBlendLimitNumber iBlendLimit, 
         const CATGSMBlendBorder iBorder=CATGSMBlendTangentBorder) = 0; 

      /**
      * Gets informations about the border of the blend to a limit the Blend .
      *   @param oBorder
      *      array of type of border.
      *        @see CATGSMBlendBorder
      */
   virtual HRESULT GetBorderMode(
         CATGSMBlendBorder oBorder[2])  = 0; 


     // Part Design blend
     // -----------------------------------------------------------
     /**
      * Sets boolean operation for closed blend surface.
      * <br> TO BE USED ONLY for Part Blend (closed blend)
      *   @param iOperation
      *      type of operation.
      *         @see CATGSMShapeFeatureBooleanOp
      */
      virtual HRESULT SetBooleanOperation( const CATGSMShapeFeatureBooleanOp iOperation = CATGSMShapeFeatureBooleanUnion
  ) = 0;

     /**
      * Gets boolean operation for closed blend surface.
      * <br> TO BE USED ONLY for Part blend (closed blend)
      *   @param oOperation
      *      type of operation.
      *         @see CATGSMShapeFeatureBooleanOp
      */
      virtual HRESULT GetBooleanOperation( CATGSMShapeFeatureBooleanOp & oOperation 
         ) = 0;

	  // Tolerant Blend
	  //---------------------------------------------------------------------
	 /**
    * Gets information whether a deviation. 
    * <br> Is allowed or not during blending operation in order to smooth it.
    *   @param isSmoothDeviationActivity
    *      TRUE or FALSE (FALSE if not specified).
    */
      virtual HRESULT GetSmoothDeviationActivity(CATBoolean & isSmoothDeviationActivity) =0;

   /**
    * Sets information whether a deviation. 
    * <br> Is allowed or not during blending operation in order to smooth it.
    *   @param isSmoothDeviationActivity
    *      TRUE or FALSE.
    */
      virtual HRESULT SetSmoothDeviationActivity(const CATBoolean isSmoothDeviationActivity) =0;

   /**
    * Gets deviation value (length). 
    * <br> Allowed during blending operation in order to smooth it.
    *   @param oSmoothDeviation
    *      Numerical value.
    */
      virtual HRESULT GetSmoothDeviation(double & oSmoothDeviation) =0;

   /**
    * Gets deviation value (length). 
    * <br> Allowed during blending operation in order to smooth it.
    *   @param ohSmoothDeviationCkeParm
    *      Length literal feature.
    */
      virtual HRESULT GetSmoothDeviation(CATICkeParm_var & ohSmoothDeviationCkeParm) =0;

   /**
    * Sets deviation value (length). 
    * <br> Allowed during blending operation in order to smooth it.
    *   @param ihSmoothDeviationCkeParm
    *      Length literal feature.
    */
      virtual HRESULT SetSmoothDeviation(const CATICkeParm_var & ihSmoothDeviationCkeParm) =0;

   /**
    * Sets deviation value (length). 
    * <br> Allowed during blending operation in order to smooth it.
    *   @param iSmoothDeviation
    *      Numerical value.
    */
      virtual HRESULT SetSmoothDeviation(const double iSmoothDeviation) =0;

   /**
    * Gets information whether a angular threshold. 
    * <br> Is allowed or not during blending operation in order to smooth it.
    *   @param isSmoothAngleThresholdActivity
    *      TRUE or FALSE (FALSE if not specified).
    */
     virtual HRESULT GetSmoothAngleThresholdActivity(CATBoolean & isSmoothAngleThresholdActivity) =0;
   
   /**
    * Sets information whether a angular threshold. 
    * <br> Is allowed or not during blending operation in order to smooth it.
    *   @param isSmoothAngleThresholdActivity
    *      TRUE or FALSE (FALSE if not specified).
    */
     virtual HRESULT SetSmoothAngleThresholdActivity(const CATBoolean isSmoothAngleThresholdActivity) =0;

   /**
    * Gets angular threshold value (angle). 
    * <br> Allowed during blending operation in order to smooth it.
    *   @param oSmoothAngleThreshold.
    *      Numerical value.
    */
      virtual HRESULT GetSmoothAngleThreshold(double & oSmoothAngleThreshold) =0;

   /**
    * Gets angular threshold value (angle). 
    * <br> Allowed during blending operation in order to smooth it.
    *   @param ohSmoothAngleThresholdCkeParm
    *      Length literal feature.
    */
      virtual HRESULT GetSmoothAngleThreshold(CATICkeParm_var & ohSmoothAngleThresholdCkeParm) =0;

   /**
    * Sets angular threshold value (angle). 
    * <br> Allowed during blending operation in order to smooth it.
    *   @param ohSmoothAngleThresholdCkeParm
    *      Length literal feature.
    */
      virtual HRESULT SetSmoothAngleThreshold(const CATICkeParm_var & ihSmoothAngleThresholdCkeParm) =0;

   /**
    * Sets angular threshold value (angle). 
    * <br> Allowed during blending operation in order to smooth it.
    *   @param iSmoothAngleThreshold
    *      Numerical value.
    */
      virtual HRESULT SetSmoothAngleThreshold(const double iSmoothAngleThreshold) =0;

	/**   
    * Gets the ruled developable surface mode.
    *   @param oRuledDevSurf
	*	   : True   means that the mode is enabled
    *      : False  means that the mode is disabled
    */
      virtual HRESULT GetRuledDevelopableSurface(CATBoolean & oRuledDevSurf) =0;

    /**   
    * Sets the ruled developable surface mode.
    *   @param iRuledDevSurf
	*	   : True   means that the mode is enabled
    *      : False  means that the mode is disabled
    */
      virtual HRESULT SetRuledDevelopableSurface(const CATBoolean iRuledDevSurf) =0;

	/**   
    * Gets the ruled developable surface connections mode.
    *   @param oBlendLimit
	*        limit of the blend to which the connection applies.
    *        @see CATGSMBlendLimitNumber
    *   @param oBlendConnection
	*        type of connection to the curve
    *        @see CATGSMBlendConnection
    */
      virtual HRESULT GetRuledDevelopableSurfaceConnection(const CATGSMBlendLimitNumber iBlendLimit,
		  CATGSMBlendConnection & oBlendConnection) =0;

	/**   
    * Sets the ruled developable surface connections mode.
    *   @param iBlendLimit
	*        limit of the blend to which the connection applies.
    *        @see CATGSMBlendLimitNumber
    *   @param iBlendConnection
	*        type of connection to the curve
    *        @see CATGSMBlendConnection
    */
      virtual HRESULT SetRuledDevelopableSurfaceConnection(const CATGSMBlendLimitNumber iBlendLimit,
		  const CATGSMBlendConnection iBlendConnection) =0;


};

//------------------------------------------------------------------

CATDeclareHandler( CATIGSMUseBlend, CATBaseUnknown );

#endif
