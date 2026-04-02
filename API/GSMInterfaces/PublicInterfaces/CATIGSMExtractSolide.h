/* -*-c++-*- */
#ifndef CATIGSMExtractSolide_H
#define CATIGSMExtractSolide_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"
#include "CATIGSMExtractSolideDef.h"

class CATICkeParm_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMExtractSolide;
#else
extern "C" const IID IID_CATIGSMExtractSolide;
#endif

/**
 * Interface to extract solid feature. 
 * <b>Role</b>: Allows you to access data of a solid extracted 
 * @see CATIGSMFactory#CreateExtractSolide
 */

class ExportedByCATGitInterfaces CATIGSMExtractSolide : public CATBaseUnknown
{
   CATDeclareInterface;

public: 
  /**
    * Gets referenced solid feature.
    *   @return solid feature 
    */ 
 virtual CATISpecObject_var GetElem() = 0;

  /**
    * Sets solid element to extract a BRep feature from.
    *   @param iElem
    *      solid feature
    */ 
 virtual HRESULT SetElem(const CATISpecObject_var iElem) = 0;

  /**
    * Gets support.
    *   @return
    *    solid feature 
    */ 
 virtual CATISpecObject_var GetSupport() = 0;

  /**
    * Sets support.
    *   @return
    *    solid feature 
    */ 
 virtual HRESULT SetSupport(const CATISpecObject_var iElem) = 0;

  /**
    * Gets propagation type of the extract operation.
    *   @return
    *      the type
    *   @see CATIGSMExtractSolidePropag
    */ 
 virtual CATIGSMExtractSolidePropag GetExtractPropagType () = 0;

  /**
    * Sets propagation type of the extract operation.
    *   @param iType
    *      Propagation type of the extract operation
    *   @see CATIGSMExtractSolidePropag  
    */ 
 virtual HRESULT SetExtractPropagType (const CATIGSMExtractSolidePropag iType) = 0;

 /**
  * Sets the complementary mode.
  *   @param IComplementaire
  *      Complementary mode (CATTrue / CATFalse)
  *   @see CATBoolean
  */ 
 virtual HRESULT SetComplementaryExtract (CATBoolean iComplementaire) = 0;

 /**
  * Gets the complementary mode.
  *   @return CATBoolean
  *   @see CATBoolean
  */ 
 virtual CATBoolean GetComplementaryExtract () = 0;

 /**
   * Gets the federation mode.
   *   @param IsFederated
   *      CATTrue  : Result is federated.
   *      CATFalse : Result is not federated.
   *   @see CATBoolean
   */ 
 virtual HRESULT GetIsFederated(CATBoolean& IsFederated) = 0;

 /**
   * Sets the federation mode.
   *   @param IsFederated
   *      CATTrue  : Result is federated.
   *      CATFalse : Result is not federated.
   *   @see CATBoolean
   */ 
 virtual HRESULT SetIsFederated(const CATBoolean IsFederated) = 0;

/**
 * Gets the curvature deviation threshold literal feature.
 * <br> This threshold is  a ratio between 0 and 1
 * <br>  if sets to 0, all curvature discontinuities are smoothed.
 * <br>  if sets to 1, no curvature discontinuity is smoothed.
 *   @param Elem
 *      curvature deviation threshold literal feature
 */
 virtual HRESULT GetCurvatureThreshold(CATICkeParm_var & Elem) = 0;

/**
 * Gets the curvature deviation threshold value. 
 * <br>This threshold is a ratio between 0 and 1.
 * <br>  if sets to 0, all curvature discontinuities are smoothed.
 * <br>  if sets to 1, no curvature discontinuity is smoothed.
 *   @param val
 *      curvature deviation threshold value
 */
 virtual HRESULT GetCurvatureThreshold(double & val) = 0;

/**
 * Sets the curvature deviation threshold literal feature.
 * <br> This threshold is a ratio between 0 and 1.
 * <br>  if sets to 0, all curvature discontinuities are smoothed.
 * <br>  if sets to 1, no curvature discontinuity is smoothed.
 *   @param Elem
 *      curvature deviation threshold literal feature
 */
 virtual HRESULT SetCurvatureThreshold(const CATICkeParm_var Elem) = 0;

/**
 * Sets the curvature deviation threshold value. 
 * <br>This threshold is a ratio between 0 and 1
 * <br> if sets to 0, all curvature discontinuities are smoothed
 * <br> if sets to 1, no curvature discontinuity is smoothed.
 *   @param val
 *      curvature deviation threshold value
 */
 virtual HRESULT SetCurvatureThreshold(const double val) = 0;

/**
 * Gets the curvature deviation threshold activity (whether it is taken into
 * account or not). 
 * <br>This activity is a boolean (TRUE or FALSE).
 *   @param bAct
 *      Curvature deviation threshold activity
 */
 virtual HRESULT GetCurvatureThresholdActivity(boolean & bAct) = 0;

/**
 * Sets the curvature deviation threshold activity (whether it is taken into
 * account or not). 
 * <br>This activity is a boolean (TRUE or FALSE).
 *   @param bAct
 *      Curvature deviation threshold activity
 */
 virtual HRESULT SetCurvatureThresholdActivity(const boolean bAct) = 0;

/**
 * Gets the distance threshold literal feature.
 * <br> This threshold is  a Lenght.
 *   @param Elem
 *      distance threshold literal feature
 */
 virtual HRESULT GetDistanceThreshold(CATICkeParm_var & Elem) = 0;

/**
 * Gets the distance threshold value. 
 * <br>This threshold is a Lenght.
 *   @param val
 *      distance threshold value
 */
 virtual HRESULT GetDistanceThreshold(double & val) = 0;

/**
 * Sets the distance threshold literal feature.
 * <br> This threshold is a Lenght.
 *   @param Elem
 *      distance threshold literal feature
 */
 virtual HRESULT SetDistanceThreshold(const CATICkeParm_var Elem) = 0;

/**
 * Sets the distance threshold value. 
 * <br>This threshold is a Lenght.
 *   @param val
 *      distance threshold value
 */
 virtual HRESULT SetDistanceThreshold(const double val) = 0;

/**
 * Gets the distance threshold activity (whether it is taken into
 * account or not). 
 * <br>This activity is a CATBoolean (CATTrue or CATFalse).
 *   @param bAct
 *      distance threshold activity
 */
 virtual HRESULT GetDistanceThresholdActivity(CATBoolean & bAct) = 0;

/**
 * Sets the distance threshold activity (whether it is taken into
 * account or not). 
 * <br>This activity is a CATBoolean (CATTrue or CATFalse).
 *   @param bAct
 *      distance threshold activity
 */
 virtual HRESULT SetDistanceThresholdActivity(const CATBoolean bAct) = 0;

/**
 * Gets the angular threshold literal feature.
 * <br> This threshold is  an Angle.
 *   @param Elem
 *      angular threshold literal feature
 */
 virtual HRESULT GetAngularThreshold(CATICkeParm_var & Elem) = 0;

/**
 * Gets the angular threshold value. 
 * <br>This threshold is an Angle.
 *   @param val
 *      angular threshold value
 */
 virtual HRESULT GetAngularThreshold(double & val) = 0;

/**
 * Sets the angular threshold literal feature.
 * <br> This threshold is an Angle.
 *   @param Elem
 *      angular threshold literal feature
 */
 virtual HRESULT SetAngularThreshold(const CATICkeParm_var Elem) = 0;

/**
 * Sets the angular threshold value. 
 * <br>This threshold is an Angle.
 *   @param val
 *      angular threshold value
 */
 virtual HRESULT SetAngularThreshold(const double val) = 0;

/**
 * Gets the angular threshold activity (whether it is taken into
 * account or not). 
 * <br>This activity is a CATBoolean (CATTrue or CATFalse).
 *   @param bAct
 *      angular threshold activity
 */
 virtual HRESULT GetAngularThresholdActivity(CATBoolean & bAct) = 0;

/**
 * Sets the angular threshold activity (whether it is taken into
 * account or not). 
 * <br>This activity is a CATBoolean (CATTrue or CATFalse).
 *   @param bAct
 *      angular threshold activity
 */
 virtual HRESULT SetAngularThresholdActivity(const CATBoolean bAct) = 0;


};

CATDeclareHandler (CATIGSMExtractSolide, CATBaseUnknown);
#endif // CATIGSMExtractSolide_H
